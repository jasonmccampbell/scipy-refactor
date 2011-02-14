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
  dict["__module__"] = "scipy.special._cephes";
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
#define __PYX_HAVE_API__scipy__special___cephes
#include "stdlib.h"
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "specfun_wrappers.h"
#include "cdf_wrappers.h"
#include "misc.h"
#include "toms_wrappers.h"
#include "cephes.h"
#include "amos_wrappers.h"
#include "npy_loops.h"
#include "ufunc_extras.h"

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

typedef int __pyx_t_5scipy_7special_7_cephes_intp;
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
/* Module declarations from numpy */
/* Module declarations from numpy */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int);
static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_ZEROS(int, __pyx_t_5numpy_intp_t *, int, int);
static CYTHON_INLINE System::Object^ PyArray_ZEROS(int, __pyx_t_5numpy_intp_t *, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *);
static CYTHON_INLINE System::Object^ PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void *__pyx_delegate_t_5numpy_PyArray_DATA(NumpyDotNet::ndarray^);
static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_5numpy_intp_t *__pyx_delegate_t_5numpy_PyArray_DIMS(NumpyDotNet::ndarray^);
static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^); /*proto*/
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
/* Module declarations from scipy.special._cephes */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void **__pyx_delegate_t_5scipy_7special_7_cephes_alloc_data_from_list(System::Object^);
static void **alloc_data_from_list(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate char *__pyx_delegate_t_5scipy_7special_7_cephes_alloc_types_from_list(System::Object^);
static char *alloc_types_from_list(System::Object^); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.special._cephes"

/* Implementation of scipy.special._cephes */
namespace clr__cephes {
  public ref class module__cephes sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_807_104;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_808_102;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_809_104;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_810_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_811_105;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_813_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_814_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_815_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_817_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_818_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_820_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_821_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_823_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_825_108;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_826_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_827_108;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_829_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_830_108;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_832_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_833_104;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_834_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_837_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_838_104;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_839_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_840_105;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_841_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_842_105;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_843_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_844_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_845_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_846_104;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_847_104;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_848_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_850_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_851_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_852_108;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_853_97;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_854_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_855_97;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_856_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_858_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_859_105;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_860_110;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_862_65;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_865_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_866_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_868_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_870_102;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_871_105;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_872_105;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_875_98;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_876_104;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_877_102;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_878_104;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_879_98;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_880_108;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_881_110;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_883_105;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_885_108;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_888_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_890_114;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_891_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_892_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_895_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_896_109;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_897_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_898_109;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_901_97;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_902_97;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_903_97;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_904_97;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_906_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_907_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_908_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_909_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_912_97;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_913_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_914_97;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_915_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_916_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_917_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_919_112;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_920_114;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_921_112;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_922_114;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_925_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_927_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_928_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_930_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_931_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_932_109;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_933_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_935_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_936_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_937_105;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_938_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_939_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_940_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_941_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_942_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_944_105;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_945_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_947_105;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_948_111;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_949_111;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_950_113;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_951_117;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_953_112;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_954_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_955_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_956_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_957_99;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_958_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_959_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_960_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_961_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_964_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_966_113;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_968_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_970_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_972_113;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_974_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_975_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_977_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_978_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_980_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_983_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_984_108;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_985_109;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_986_109;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_988_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_990_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_991_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_992_110;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_994_110;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_995_109;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_997_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_998_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_999_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1001_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1002_107;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1004_108;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1005_108;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1007_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1009_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1010_105;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1011_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1013_106;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1014_108;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1015_109;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1016_109;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1018_108;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1021_111;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1022_111;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1023_117;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1024_117;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1025_123;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1026_123;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1027_123;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1028_123;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1030_101;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1032_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1033_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1034_103;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1036_111;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1037_110;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1038_119;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1039_121;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1040_121;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1041_118;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1042_120;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1043_120;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1044_121;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1045_123;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1046_123;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1047_120;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1048_122;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1049_122;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1053_120;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_1055_120;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_370_43;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_370_47;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_size_t_370_47;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_371_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_371_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_371_4;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_372_28;
static  CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >^ __site_cvt_Py_ssize_t_372_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_557_37;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_size_t_557_37;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_558_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_558_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_558_4;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_559_16;
static  CallSite< System::Func< CallSite^, System::Object^, char >^ >^ __site_cvt_char_559_16;
static  CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >^ __site_cvt_Py_ssize_t_559_11;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_194_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_194_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_zeros_196_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_196_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_205_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_205_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_209_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_209_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_214_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_FromAny_214_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_214_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_and_217_13;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_217_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ior_218_14;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_219_77;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_222_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_225_14;
static CodeContext^ __pyx_context;
/* Cython code section 'dotnet_globals' */


static Types::PythonType^ __pyx_ptype_5numpy_ndarray = nullptr;
static Types::PythonType^ __pyx_ptype_5numpy_dtype = nullptr;

static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes1_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes1_2c_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes1c_4_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes1cpb_4_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes2_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes2_2_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes2_4_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes2a_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes2c_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes2cpp_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes3_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes3a_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes3_2_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes4_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes4a_2_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes4_2_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes5_2_functions;
static __pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_5scipy_7special_7_cephes_cephes1c_functions;
static void **__pyx_v_5scipy_7special_7_cephes_airy_data;
static void **__pyx_v_5scipy_7special_7_cephes_airye_data;
static void **__pyx_v_5scipy_7special_7_cephes_itairy_data;
static void **__pyx_v_5scipy_7special_7_cephes_kelvin_data;
static void **__pyx_v_5scipy_7special_7_cephes_ber_data;
static void **__pyx_v_5scipy_7special_7_cephes_bei_data;
static void **__pyx_v_5scipy_7special_7_cephes_ker_data;
static void **__pyx_v_5scipy_7special_7_cephes_kei_data;
static void **__pyx_v_5scipy_7special_7_cephes_berp_data;
static void **__pyx_v_5scipy_7special_7_cephes_beip_data;
static void **__pyx_v_5scipy_7special_7_cephes_kerp_data;
static void **__pyx_v_5scipy_7special_7_cephes_keip_data;
static void **__pyx_v_5scipy_7special_7_cephes_ellpj_data;
static void **__pyx_v_5scipy_7special_7_cephes_exp1_data;
static void **__pyx_v_5scipy_7special_7_cephes_expi_data;
static void **__pyx_v_5scipy_7special_7_cephes_expn_data;
static void **__pyx_v_5scipy_7special_7_cephes_kn_data;
static void **__pyx_v_5scipy_7special_7_cephes_pdtrc_data;
static void **__pyx_v_5scipy_7special_7_cephes_pdtr_data;
static void **__pyx_v_5scipy_7special_7_cephes_pdtri_data;
static void **__pyx_v_5scipy_7special_7_cephes_fresnl_data;
static void **__pyx_v_5scipy_7special_7_cephes_shichi_data;
static void **__pyx_v_5scipy_7special_7_cephes_sici_data;
static void **__pyx_v_5scipy_7special_7_cephes_itj0y0_data;
static void **__pyx_v_5scipy_7special_7_cephes_it2j0y0_data;
static void **__pyx_v_5scipy_7special_7_cephes_iti0k0_data;
static void **__pyx_v_5scipy_7special_7_cephes_it2i0k0_data;
static void **__pyx_v_5scipy_7special_7_cephes_yn_data;
static void **__pyx_v_5scipy_7special_7_cephes_smirnov_data;
static void **__pyx_v_5scipy_7special_7_cephes_smirnovi_data;
static void **__pyx_v_5scipy_7special_7_cephes_bdtrc_data;
static void **__pyx_v_5scipy_7special_7_cephes_bdtr_data;
static void **__pyx_v_5scipy_7special_7_cephes_bdtri_data;
static void **__pyx_v_5scipy_7special_7_cephes_btdtr_data;
static void **__pyx_v_5scipy_7special_7_cephes_btdtri_data;
static void **__pyx_v_5scipy_7special_7_cephes_fdtrc_data;
static void **__pyx_v_5scipy_7special_7_cephes_fdtr_data;
static void **__pyx_v_5scipy_7special_7_cephes_fdtri_data;
static void **__pyx_v_5scipy_7special_7_cephes_gdtrc_data;
static void **__pyx_v_5scipy_7special_7_cephes_gdtr_data;
static void **__pyx_v_5scipy_7special_7_cephes_hyp2f1_data;
static void **__pyx_v_5scipy_7special_7_cephes_hyp1f1_data;
static void **__pyx_v_5scipy_7special_7_cephes_hypU_data;
static void **__pyx_v_5scipy_7special_7_cephes_hyp2f0_data;
static void **__pyx_v_5scipy_7special_7_cephes_threef0_data;
static void **__pyx_v_5scipy_7special_7_cephes_onef2_data;
static void **__pyx_v_5scipy_7special_7_cephes_incbet_data;
static void **__pyx_v_5scipy_7special_7_cephes_incbi_data;
static void **__pyx_v_5scipy_7special_7_cephes_nbdtrc_data;
static void **__pyx_v_5scipy_7special_7_cephes_nbdtr_data;
static void **__pyx_v_5scipy_7special_7_cephes_nbdtri_data;
static void **__pyx_v_5scipy_7special_7_cephes_beta_data;
static void **__pyx_v_5scipy_7special_7_cephes_lbeta_data;
static void **__pyx_v_5scipy_7special_7_cephes_cbrt_data;
static void **__pyx_v_5scipy_7special_7_cephes_chdtrc_data;
static void **__pyx_v_5scipy_7special_7_cephes_chdtr_data;
static void **__pyx_v_5scipy_7special_7_cephes_chdtri_data;
static void **__pyx_v_5scipy_7special_7_cephes_dawsn_data;
static void **__pyx_v_5scipy_7special_7_cephes_ellie_data;
static void **__pyx_v_5scipy_7special_7_cephes_ellik_data;
static void **__pyx_v_5scipy_7special_7_cephes_ellpe_data;
static void **__pyx_v_5scipy_7special_7_cephes_ellpk_data;
static void **__pyx_v_5scipy_7special_7_cephes_exp10_data;
static void **__pyx_v_5scipy_7special_7_cephes_exp2_data;
static void **__pyx_v_5scipy_7special_7_cephes_Gamma_data;
static void **__pyx_v_5scipy_7special_7_cephes_lgam_data;
static void **__pyx_v_5scipy_7special_7_cephes_i0_data;
static void **__pyx_v_5scipy_7special_7_cephes_i0e_data;
static void **__pyx_v_5scipy_7special_7_cephes_i1_data;
static void **__pyx_v_5scipy_7special_7_cephes_i1e_data;
static void **__pyx_v_5scipy_7special_7_cephes_igamc_data;
static void **__pyx_v_5scipy_7special_7_cephes_igam_data;
static void **__pyx_v_5scipy_7special_7_cephes_igami_data;
static void **__pyx_v_5scipy_7special_7_cephes_gammaincinv_data;
static void **__pyx_v_5scipy_7special_7_cephes_iv_data;
static void **__pyx_v_5scipy_7special_7_cephes_ive_data;
static void **__pyx_v_5scipy_7special_7_cephes_j0_data;
static void **__pyx_v_5scipy_7special_7_cephes_y0_data;
static void **__pyx_v_5scipy_7special_7_cephes_j1_data;
static void **__pyx_v_5scipy_7special_7_cephes_y1_data;
static void **__pyx_v_5scipy_7special_7_cephes_jv_data;
static void **__pyx_v_5scipy_7special_7_cephes_jve_data;
static void **__pyx_v_5scipy_7special_7_cephes_yv_data;
static void **__pyx_v_5scipy_7special_7_cephes_yve_data;
static void **__pyx_v_5scipy_7special_7_cephes_k0_data;
static void **__pyx_v_5scipy_7special_7_cephes_k0e_data;
static void **__pyx_v_5scipy_7special_7_cephes_k1_data;
static void **__pyx_v_5scipy_7special_7_cephes_k1e_data;
static void **__pyx_v_5scipy_7special_7_cephes_kv_data;
static void **__pyx_v_5scipy_7special_7_cephes_kve_data;
static void **__pyx_v_5scipy_7special_7_cephes_hankel1_data;
static void **__pyx_v_5scipy_7special_7_cephes_hankel1e_data;
static void **__pyx_v_5scipy_7special_7_cephes_hankel2_data;
static void **__pyx_v_5scipy_7special_7_cephes_hankel2e_data;
static void **__pyx_v_5scipy_7special_7_cephes_ndtr_data;
static void **__pyx_v_5scipy_7special_7_cephes_erfc_data;
static void **__pyx_v_5scipy_7special_7_cephes_erf_data;
static void **__pyx_v_5scipy_7special_7_cephes_ndtri_data;
static void **__pyx_v_5scipy_7special_7_cephes_psi_data;
static void **__pyx_v_5scipy_7special_7_cephes_rgamma_data;
static void **__pyx_v_5scipy_7special_7_cephes_round_data;
static void **__pyx_v_5scipy_7special_7_cephes_sindg_data;
static void **__pyx_v_5scipy_7special_7_cephes_cosdg_data;
static void **__pyx_v_5scipy_7special_7_cephes_radian_data;
static void **__pyx_v_5scipy_7special_7_cephes_tandg_data;
static void **__pyx_v_5scipy_7special_7_cephes_cotdg_data;
static void **__pyx_v_5scipy_7special_7_cephes_log1p_data;
static void **__pyx_v_5scipy_7special_7_cephes_expm1_data;
static void **__pyx_v_5scipy_7special_7_cephes_cosm1_data;
static void **__pyx_v_5scipy_7special_7_cephes_spence_data;
static void **__pyx_v_5scipy_7special_7_cephes_struve_data;
static void **__pyx_v_5scipy_7special_7_cephes_modstruve_data;
static void **__pyx_v_5scipy_7special_7_cephes_itmodstruve0_data;
static void **__pyx_v_5scipy_7special_7_cephes_itstruve0_data;
static void **__pyx_v_5scipy_7special_7_cephes_it2struve0_data;
static void **__pyx_v_5scipy_7special_7_cephes_zeta_data;
static void **__pyx_v_5scipy_7special_7_cephes_zetac_data;
static void **__pyx_v_5scipy_7special_7_cephes_kolmogorov_data;
static void **__pyx_v_5scipy_7special_7_cephes_kolmogi_data;
static void **__pyx_v_5scipy_7special_7_cephes_wofz_data;
static void **__pyx_v_5scipy_7special_7_cephes_besselpoly_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfbet3_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfbet4_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfbin2_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfbin3_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfchi3_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfchn1_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfchn2_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfchn3_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfchn4_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdff4_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdffnc1_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdffnc2_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdffnc3_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdffnc4_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdffnc5_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfgam2_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfgam3_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfgam4_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfnbn2_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfnbn3_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfnor3_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfnor4_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdfpoi2_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdft1_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdft2_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdft3_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdftnc1_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdftnc2_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdftnc3_data;
static void **__pyx_v_5scipy_7special_7_cephes_cdftnc4_data;
static void **__pyx_v_5scipy_7special_7_cephes_tklambda_data;
static void **__pyx_v_5scipy_7special_7_cephes_mathieu_a_data;
static void **__pyx_v_5scipy_7special_7_cephes_mathieu_b_data;
static void **__pyx_v_5scipy_7special_7_cephes_mathieu_cem_data;
static void **__pyx_v_5scipy_7special_7_cephes_mathieu_sem_data;
static void **__pyx_v_5scipy_7special_7_cephes_mathieu_mcem1_data;
static void **__pyx_v_5scipy_7special_7_cephes_mathieu_mcem2_data;
static void **__pyx_v_5scipy_7special_7_cephes_mathieu_msem1_data;
static void **__pyx_v_5scipy_7special_7_cephes_mathieu_msem2_data;
static void **__pyx_v_5scipy_7special_7_cephes_lpmv_data;
static void **__pyx_v_5scipy_7special_7_cephes_pbwa_data;
static void **__pyx_v_5scipy_7special_7_cephes_pbdv_data;
static void **__pyx_v_5scipy_7special_7_cephes_pbvv_data;
static void **__pyx_v_5scipy_7special_7_cephes_prolate_aswfa_data;
static void **__pyx_v_5scipy_7special_7_cephes_prolate_radial1_data;
static void **__pyx_v_5scipy_7special_7_cephes_prolate_radial2_data;
static void **__pyx_v_5scipy_7special_7_cephes_oblate_aswfa_data;
static void **__pyx_v_5scipy_7special_7_cephes_oblate_radial1_data;
static void **__pyx_v_5scipy_7special_7_cephes_oblate_radial2_data;
static void **__pyx_v_5scipy_7special_7_cephes_prolate_aswfa_nocv_data;
static void **__pyx_v_5scipy_7special_7_cephes_prolate_radial1_nocv_data;
static void **__pyx_v_5scipy_7special_7_cephes_prolate_radial2_nocv_data;
static void **__pyx_v_5scipy_7special_7_cephes_oblate_aswfa_nocv_data;
static void **__pyx_v_5scipy_7special_7_cephes_oblate_radial1_nocv_data;
static void **__pyx_v_5scipy_7special_7_cephes_oblate_radial2_nocv_data;
static void **__pyx_v_5scipy_7special_7_cephes_prolate_segv_data;
static void **__pyx_v_5scipy_7special_7_cephes_oblate_segv_data;
static void **__pyx_v_5scipy_7special_7_cephes_modfresnelp_data;
static void **__pyx_v_5scipy_7special_7_cephes_modfresnelm_data;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_7_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_6_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_5_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_5b2_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_5c_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_5c2_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_4_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_4c_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_3_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_3_cmplx_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_3c_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_3cp_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_2_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_1rc_types;
static char *__pyx_v_5scipy_7special_7_cephes_cephes_1c_types;
/* Cython code section 'decls' */
static char *__pyx_k_1 = "";
static char *__pyx_k__i0 = "i0";
static char *__pyx_k__i1 = "i1";
static char *__pyx_k__iv = "iv";
static char *__pyx_k__j0 = "j0";
static char *__pyx_k__j1 = "j1";
static char *__pyx_k__jv = "jv";
static char *__pyx_k__k0 = "k0";
static char *__pyx_k__k1 = "k1";
static char *__pyx_k__kn = "kn";
static char *__pyx_k__kv = "kv";
static char *__pyx_k__y0 = "y0";
static char *__pyx_k__y1 = "y1";
static char *__pyx_k__yn = "yn";
static char *__pyx_k__yv = "yv";
static char *__pyx_k__bei = "bei";
static char *__pyx_k__ber = "ber";
static char *__pyx_k__erf = "erf";
static char *__pyx_k__i0e = "i0e";
static char *__pyx_k__i1e = "i1e";
static char *__pyx_k__ive = "ive";
static char *__pyx_k__jve = "jve";
static char *__pyx_k__k0e = "k0e";
static char *__pyx_k__k1e = "k1e";
static char *__pyx_k__kei = "kei";
static char *__pyx_k__ker = "ker";
static char *__pyx_k__kve = "kve";
static char *__pyx_k__psi = "psi";
static char *__pyx_k__yve = "yve";
static char *__pyx_k__airy = "airy";
static char *__pyx_k__bdtr = "bdtr";
static char *__pyx_k__beip = "beip";
static char *__pyx_k__berp = "berp";
static char *__pyx_k__beta = "beta";
static char *__pyx_k__cbrt = "cbrt";
static char *__pyx_k__erfc = "erfc";
static char *__pyx_k__exp1 = "exp1";
static char *__pyx_k__exp2 = "exp2";
static char *__pyx_k__expi = "expi";
static char *__pyx_k__expn = "expn";
static char *__pyx_k__fdtr = "fdtr";
static char *__pyx_k__gdtr = "gdtr";
static char *__pyx_k__keip = "keip";
static char *__pyx_k__kerp = "kerp";
static char *__pyx_k__lpmv = "lpmv";
static char *__pyx_k__ndtr = "ndtr";
static char *__pyx_k__pbdv = "pbdv";
static char *__pyx_k__pbvv = "pbvv";
static char *__pyx_k__pbwa = "pbwa";
static char *__pyx_k__pdtr = "pdtr";
static char *__pyx_k__sici = "sici";
static char *__pyx_k__wofz = "wofz";
static char *__pyx_k__zeta = "zeta";
static char *__pyx_k__airye = "airye";
static char *__pyx_k__bdtrc = "bdtrc";
static char *__pyx_k__bdtri = "bdtri";
static char *__pyx_k__btdtr = "btdtr";
static char *__pyx_k__chdtr = "chdtr";
static char *__pyx_k__cosdg = "cosdg";
static char *__pyx_k__cosm1 = "cosm1";
static char *__pyx_k__cotdg = "cotdg";
static char *__pyx_k__dawsn = "dawsn";
static char *__pyx_k__exp10 = "exp10";
static char *__pyx_k__expm1 = "expm1";
static char *__pyx_k__fdtrc = "fdtrc";
static char *__pyx_k__fdtri = "fdtri";
static char *__pyx_k__gamma = "gamma";
static char *__pyx_k__gdtrc = "gdtrc";
static char *__pyx_k__log1p = "log1p";
static char *__pyx_k__nbdtr = "nbdtr";
static char *__pyx_k__ndtri = "ndtri";
static char *__pyx_k__pdtrc = "pdtrc";
static char *__pyx_k__pdtri = "pdtri";
static char *__pyx_k__round = "round";
static char *__pyx_k__sindg = "sindg";
static char *__pyx_k__stdtr = "stdtr";
static char *__pyx_k__tandg = "tandg";
static char *__pyx_k__zetac = "zetac";
static char *__pyx_k__bdtrik = "bdtrik";
static char *__pyx_k__bdtrin = "bdtrin";
static char *__pyx_k__betaln = "betaln";
static char *__pyx_k__btdtri = "btdtri";
static char *__pyx_k__chdtrc = "chdtrc";
static char *__pyx_k__chdtri = "chdtri";
static char *__pyx_k__chndtr = "chndtr";
static char *__pyx_k__ellipe = "ellipe";
static char *__pyx_k__ellipj = "ellipj";
static char *__pyx_k__ellipk = "ellipk";
static char *__pyx_k__gdtria = "gdtria";
static char *__pyx_k__gdtrib = "gdtrib";
static char *__pyx_k__gdtrix = "gdtrix";
static char *__pyx_k__hyp1f1 = "hyp1f1";
static char *__pyx_k__hyp1f2 = "hyp1f2";
static char *__pyx_k__hyp2f0 = "hyp2f0";
static char *__pyx_k__hyp2f1 = "hyp2f1";
static char *__pyx_k__hyp3f0 = "hyp3f0";
static char *__pyx_k__hyperu = "hyperu";
static char *__pyx_k__itairy = "itairy";
static char *__pyx_k__iti0k0 = "iti0k0";
static char *__pyx_k__itj0y0 = "itj0y0";
static char *__pyx_k__kelvin = "kelvin";
static char *__pyx_k__nbdtrc = "nbdtrc";
static char *__pyx_k__nbdtri = "nbdtri";
static char *__pyx_k__ncfdtr = "ncfdtr";
static char *__pyx_k__nctdtr = "nctdtr";
static char *__pyx_k__obl_cv = "obl_cv";
static char *__pyx_k__pdtrik = "pdtrik";
static char *__pyx_k__pro_cv = "pro_cv";
static char *__pyx_k__radian = "radian";
static char *__pyx_k__rgamma = "rgamma";
static char *__pyx_k__shichi = "shichi";
static char *__pyx_k__spence = "spence";
static char *__pyx_k__struve = "struve";
static char *__pyx_k__betainc = "betainc";
static char *__pyx_k__btdtria = "btdtria";
static char *__pyx_k__btdtrib = "btdtrib";
static char *__pyx_k__chdtriv = "chdtriv";
static char *__pyx_k__fresnel = "fresnel";
static char *__pyx_k__gammaln = "gammaln";
static char *__pyx_k__hankel1 = "hankel1";
static char *__pyx_k__hankel2 = "hankel2";
static char *__pyx_k__it2i0k0 = "it2i0k0";
static char *__pyx_k__it2j0y0 = "it2j0y0";
static char *__pyx_k__kolmogi = "kolmogi";
static char *__pyx_k__nbdtrik = "nbdtrik";
static char *__pyx_k__nbdtrin = "nbdtrin";
static char *__pyx_k__ncfdtri = "ncfdtri";
static char *__pyx_k__smirnov = "smirnov";
static char *__pyx_k__stdtrit = "stdtrit";
static char *__pyx_k__tklmbda = "tklmbda";
static char *__pyx_k__chndtrix = "chndtrix";
static char *__pyx_k__fdtridfd = "fdtridfd";
static char *__pyx_k__gammainc = "gammainc";
static char *__pyx_k__hankel1e = "hankel1e";
static char *__pyx_k__hankel2e = "hankel2e";
static char *__pyx_k__nctdtrit = "nctdtrit";
static char *__pyx_k__nrdtrimn = "nrdtrimn";
static char *__pyx_k__nrdtrisd = "nrdtrisd";
static char *__pyx_k__obl_ang1 = "obl_ang1";
static char *__pyx_k__obl_rad1 = "obl_rad1";
static char *__pyx_k__obl_rad2 = "obl_rad2";
static char *__pyx_k__pro_ang1 = "pro_ang1";
static char *__pyx_k__pro_rad1 = "pro_rad1";
static char *__pyx_k__pro_rad2 = "pro_rad2";
static char *__pyx_k__smirnovi = "smirnovi";
static char *__pyx_k__stdtridf = "stdtridf";
static char *__pyx_k__chndtridf = "chndtridf";
static char *__pyx_k__chndtrinc = "chndtrinc";
static char *__pyx_k__ellipeinc = "ellipeinc";
static char *__pyx_k__ellipkinc = "ellipkinc";
static char *__pyx_k__gammaincc = "gammaincc";
static char *__pyx_k__itstruve0 = "itstruve0";
static char *__pyx_k__mathieu_a = "mathieu_a";
static char *__pyx_k__mathieu_b = "mathieu_b";
static char *__pyx_k__modstruve = "modstruve";
static char *__pyx_k__ncfdtrinc = "ncfdtrinc";
static char *__pyx_k__nctdtridf = "nctdtridf";
static char *__pyx_k__nctdtrinc = "nctdtrinc";
static char *__pyx_k__besselpoly = "besselpoly";
static char *__pyx_k__betaincinv = "betaincinv";
static char *__pyx_k__it2struve0 = "it2struve0";
static char *__pyx_k__kolmogorov = "kolmogorov";
static char *__pyx_k__ncfdtridfd = "ncfdtridfd";
static char *__pyx_k__ncfdtridfn = "ncfdtridfn";
static char *__pyx_k__gammaincinv = "gammaincinv";
static char *__pyx_k__mathieu_cem = "mathieu_cem";
static char *__pyx_k__mathieu_sem = "mathieu_sem";
static char *__pyx_k__modfresnelm = "modfresnelm";
static char *__pyx_k__modfresnelp = "modfresnelp";
static char *__pyx_k__obl_ang1_cv = "obl_ang1_cv";
static char *__pyx_k__obl_rad1_cv = "obl_rad1_cv";
static char *__pyx_k__obl_rad2_cv = "obl_rad2_cv";
static char *__pyx_k__pro_ang1_cv = "pro_ang1_cv";
static char *__pyx_k__pro_rad1_cv = "pro_rad1_cv";
static char *__pyx_k__pro_rad2_cv = "pro_rad2_cv";
static char *__pyx_k__gammainccinv = "gammainccinv";
static char *__pyx_k__itmodstruve0 = "itmodstruve0";
static char *__pyx_k__mathieu_modcem1 = "mathieu_modcem1";
static char *__pyx_k__mathieu_modcem2 = "mathieu_modcem2";
static char *__pyx_k__mathieu_modsem1 = "mathieu_modsem1";
static char *__pyx_k__mathieu_modsem2 = "mathieu_modsem2";
static int^ __pyx_int_neg_1;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":369
 * cdef np.PyUFuncGenericFunction *cephes1c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * 
 * cdef void ** alloc_data_from_list(l):             # <<<<<<<<<<<<<<
 *     cdef void ** data = <void **>malloc(len(l) * sizeof(void*))
 *     for i in range(len(l)):
 */

static  void **alloc_data_from_list(System::Object^ __pyx_v_l) {
  void **__pyx_v_data;
  System::Object^ __pyx_v_i;
  void **__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  size_t __pyx_t_4;
  System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> __pyx_t_5;
  Py_ssize_t __pyx_t_6;
  __pyx_v_i = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":370
 * 
 * cdef void ** alloc_data_from_list(l):
 *     cdef void ** data = <void **>malloc(len(l) * sizeof(void*))             # <<<<<<<<<<<<<<
 *     for i in range(len(l)):
 *         data[i] = <void *>(l[i])
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "len");
  __pyx_t_2 = __site_call1_370_43->Target(__site_call1_370_43, __pyx_context, __pyx_t_1, __pyx_v_l);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = (sizeof(void *));
  __pyx_t_3 = __site_op_mul_370_47->Target(__site_op_mul_370_47, __pyx_t_2, __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_4 = __site_cvt_size_t_370_47->Target(__site_cvt_size_t_370_47, __pyx_t_3);
  __pyx_t_3 = nullptr;
  __pyx_v_data = ((void **)malloc(__pyx_t_4));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":371
 * cdef void ** alloc_data_from_list(l):
 *     cdef void ** data = <void **>malloc(len(l) * sizeof(void*))
 *     for i in range(len(l)):             # <<<<<<<<<<<<<<
 *         data[i] = <void *>(l[i])
 *     return data
 */
  __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "range");
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "len");
  __pyx_t_2 = __site_call1_371_22->Target(__site_call1_371_22, __pyx_context, __pyx_t_1, __pyx_v_l);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_371_18->Target(__site_call1_371_18, __pyx_context, __pyx_t_3, __pyx_t_2);
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = __site_get_iterator_371_4->Target(__site_get_iterator_371_4, __pyx_t_1);
  try {
    while (__pyx_t_5.Key->MoveNext()) {
      __pyx_v_i = ((System::Object^)__pyx_t_5.Key->Current);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":372
 *     cdef void ** data = <void **>malloc(len(l) * sizeof(void*))
 *     for i in range(len(l)):
 *         data[i] = <void *>(l[i])             # <<<<<<<<<<<<<<
 *     return data
 * 
 */
      __pyx_t_2 = __site_getindex_372_28->Target(__site_getindex_372_28, __pyx_v_l, __pyx_v_i);
      __pyx_t_6 = __site_cvt_Py_ssize_t_372_14->Target(__site_cvt_Py_ssize_t_372_14, __pyx_v_i);
      (__pyx_v_data[__pyx_t_6]) = ((void *)__pyx_t_2);
      __pyx_t_2 = nullptr;
    }
  }
  finally {
    PythonOps::ForLoopDispose(__pyx_t_5);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":373
 *     for i in range(len(l)):
 *         data[i] = <void *>(l[i])
 *     return data             # <<<<<<<<<<<<<<
 * 
 * cdef void ** airy_data = alloc_data_from_list([ <int> <void *>airy_, <int> <void *>airy_, <int> <void *>cairy_wrap, <int> <void *>cairy_wrap,])
 */
  __pyx_r = __pyx_v_data;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":556
 * cdef void ** modfresnelm_data = alloc_data_from_list([<int> <void *>modified_fresnel_minus_wrap, <int> <void *>modified_fresnel_minus_wrap])
 * 
 * cdef char* alloc_types_from_list(l):             # <<<<<<<<<<<<<<
 *     cdef char* r = <char *>malloc(len(l))
 *     for i in range(len(l)):
 */

static  char *alloc_types_from_list(System::Object^ __pyx_v_l) {
  char *__pyx_v_r;
  System::Object^ __pyx_v_i;
  char *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  size_t __pyx_t_3;
  System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  char __pyx_t_6;
  Py_ssize_t __pyx_t_7;
  __pyx_v_i = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":557
 * 
 * cdef char* alloc_types_from_list(l):
 *     cdef char* r = <char *>malloc(len(l))             # <<<<<<<<<<<<<<
 *     for i in range(len(l)):
 *         r[i] = l[i]
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "len");
  __pyx_t_2 = __site_call1_557_37->Target(__site_call1_557_37, __pyx_context, __pyx_t_1, __pyx_v_l);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_cvt_size_t_557_37->Target(__site_cvt_size_t_557_37, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_v_r = ((char *)malloc(__pyx_t_3));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":558
 * cdef char* alloc_types_from_list(l):
 *     cdef char* r = <char *>malloc(len(l))
 *     for i in range(len(l)):             # <<<<<<<<<<<<<<
 *         r[i] = l[i]
 *     return r
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "range");
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "len");
  __pyx_t_5 = __site_call1_558_22->Target(__site_call1_558_22, __pyx_context, __pyx_t_1, __pyx_v_l);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_558_18->Target(__site_call1_558_18, __pyx_context, __pyx_t_2, __pyx_t_5);
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_4 = __site_get_iterator_558_4->Target(__site_get_iterator_558_4, __pyx_t_1);
  try {
    while (__pyx_t_4.Key->MoveNext()) {
      __pyx_v_i = ((System::Object^)__pyx_t_4.Key->Current);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":559
 *     cdef char* r = <char *>malloc(len(l))
 *     for i in range(len(l)):
 *         r[i] = l[i]             # <<<<<<<<<<<<<<
 *     return r
 * 
 */
      __pyx_t_5 = __site_getindex_559_16->Target(__site_getindex_559_16, __pyx_v_l, __pyx_v_i);
      __pyx_t_6 = __site_cvt_char_559_16->Target(__site_cvt_char_559_16, __pyx_t_5);
      __pyx_t_5 = nullptr;
      __pyx_t_7 = __site_cvt_Py_ssize_t_559_11->Target(__site_cvt_Py_ssize_t_559_11, __pyx_v_i);
      (__pyx_v_r[__pyx_t_7]) = __pyx_t_6;
    }
  }
  finally {
    PythonOps::ForLoopDispose(__pyx_t_4);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":560
 *     for i in range(len(l)):
 *         r[i] = l[i]
 *     return r             # <<<<<<<<<<<<<<
 * 
 * cdef char* cephes_7_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
 */
  __pyx_r = __pyx_v_r;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":185
 *     object Npy_INTERFACE_array "Npy_INTERFACE_OBJECT" (NpyArray*)
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":188
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

/* "../cython/include\numpy.pxd":190
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

  /* "../cython/include\numpy.pxd":191
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":193
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":194
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_194_18->Target(__site_get_append_194_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_194_25->Target(__site_call1_194_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":195
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":196
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):
 */
  __pyx_t_5 = __site_get_zeros_196_16->Target(__site_get_zeros_196_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_196_22->Target(__site_call3_196_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include\numpy.pxd":198
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):             # <<<<<<<<<<<<<<
 *     assert subtype == NULL
 *     assert obj == NULL
 */

static CYTHON_INLINE System::Object^ PyArray_New(void *__pyx_v_subtype, int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, __pyx_t_5numpy_npy_intp *__pyx_v_strides, void *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags, void *__pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":199
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

  /* "../cython/include\numpy.pxd":200
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

  /* "../cython/include\numpy.pxd":201
 *     assert subtype == NULL
 *     assert obj == NULL
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))             # <<<<<<<<<<<<<<
 * 
 * cdef inline void* PyArray_DATA(ndarray n):
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyArray_New(__pyx_v_subtype, __pyx_v_nd, __pyx_v_dims, __pyx_v_type_num, __pyx_v_strides, __pyx_v_data, __pyx_v_itemsize, __pyx_v_flags, __pyx_v_obj)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":203
 *     return Npy_INTERFACE_array(NpyArray_New(subtype, nd, dims, type_num, strides, data, itemsize, flags, obj))
 * 
 * cdef inline void* PyArray_DATA(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^ __pyx_v_n) {
  void *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":205
 * cdef inline void* PyArray_DATA(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_205_49->Target(__site_get_Array_205_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_205_49->Target(__site_cvt_PY_LONG_LONG_205_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DATA(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":207
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

  /* "../cython/include\numpy.pxd":209
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 */
  __pyx_t_1 = __site_get_Array_209_49->Target(__site_get_Array_209_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_209_49->Target(__site_cvt_PY_LONG_LONG_209_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIMS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":211
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
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

  /* "../cython/include\numpy.pxd":212
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":213
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":214
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 */
  __pyx_t_1 = __site_get_NpyArray_214_22->Target(__site_get_NpyArray_214_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_FromAny_214_31->Target(__site_get_FromAny_214_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_214_39->Target(__site_call6_214_39, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":216
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

  /* "../cython/include\numpy.pxd":217
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:             # <<<<<<<<<<<<<<
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_ENSURECOPY);
  __pyx_t_2 = __site_op_and_217_13->Target(__site_op_and_217_13, __pyx_v_flags, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_217_13->Target(__site_istrue_217_13, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_3) {

    /* "../cython/include\numpy.pxd":218
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT             # <<<<<<<<<<<<<<
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 * 
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DEFAULT);
    __pyx_t_1 = __site_op_ior_218_14->Target(__site_op_ior_218_14, __pyx_v_flags, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_flags = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "../cython/include\numpy.pxd":219
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Check(obj):
 */
  __pyx_t_4 = __site_cvt_int_219_77->Target(__site_cvt_int_219_77, __pyx_v_type);
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_t_4)); 
  __pyx_t_2 = PyArray_FromAny(__pyx_v_m, __pyx_t_1, __pyx_v_min, __pyx_v_max, __pyx_v_flags, Py_None); 
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":221
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

  /* "../cython/include\numpy.pxd":222
 * 
 * cdef inline object PyArray_Check(obj):
 *     return isinstance(obj, ndarray)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_NDIM(obj):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = __site_call2_222_21->Target(__site_call2_222_21, __pyx_context, __pyx_t_1, __pyx_v_obj, ((System::Object^)((System::Object^)__pyx_ptype_5numpy_ndarray)));
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":224
 *     return isinstance(obj, ndarray)
 * 
 * cdef inline object PyArray_NDIM(obj):             # <<<<<<<<<<<<<<
 *     return obj.ndim
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":225
 * 
 * cdef inline object PyArray_NDIM(obj):
 *     return obj.ndim             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
 */
  __pyx_t_1 = __site_get_ndim_225_14->Target(__site_get_ndim_225_14, __pyx_v_obj, __pyx_context);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":227
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
  __site_cvt_int_807_104 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_808_102 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_809_104 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_810_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_811_105 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_813_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_814_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_815_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_817_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_818_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_820_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_821_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_823_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_825_108 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_826_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_827_108 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_829_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_830_108 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_832_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_833_104 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_834_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_837_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_838_104 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_839_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_840_105 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_841_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_842_105 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_843_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_844_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_845_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_846_104 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_847_104 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_848_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_850_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_851_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_852_108 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_853_97 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_854_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_855_97 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_856_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_858_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_859_105 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_860_110 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_862_65 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_865_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_866_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_868_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_870_102 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_871_105 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_872_105 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_875_98 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_876_104 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_877_102 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_878_104 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_879_98 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_880_108 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_881_110 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_883_105 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_885_108 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_888_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_890_114 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_891_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_892_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_895_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_896_109 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_897_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_898_109 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_901_97 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_902_97 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_903_97 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_904_97 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_906_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_907_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_908_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_909_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_912_97 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_913_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_914_97 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_915_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_916_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_917_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_919_112 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_920_114 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_921_112 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_922_114 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_925_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_927_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_928_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_930_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_931_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_932_109 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_933_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_935_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_936_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_937_105 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_938_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_939_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_940_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_941_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_942_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_944_105 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_945_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_947_105 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_948_111 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_949_111 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_950_113 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_951_117 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_953_112 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_954_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_955_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_956_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_957_99 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_958_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_959_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_960_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_961_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_964_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_966_113 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_968_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_970_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_972_113 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_974_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_975_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_977_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_978_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_980_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_983_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_984_108 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_985_109 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_986_109 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_988_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_990_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_991_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_992_110 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_994_110 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_995_109 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_997_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_998_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_999_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1001_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1002_107 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1004_108 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1005_108 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1007_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1009_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1010_105 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1011_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1013_106 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1014_108 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1015_109 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1016_109 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1018_108 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1021_111 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1022_111 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1023_117 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1024_117 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1025_123 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1026_123 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1027_123 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1028_123 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1030_101 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1032_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1033_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1034_103 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1036_111 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1037_110 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1038_119 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1039_121 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1040_121 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1041_118 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1042_120 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1043_120 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1044_121 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1045_123 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1046_123 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1047_120 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1048_122 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1049_122 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1053_120 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_1055_120 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_370_43 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mul_370_47 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_size_t_370_47 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_371_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_371_18 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_iterator_371_4 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_getindex_372_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_Py_ssize_t_372_14 = CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, Py_ssize_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_557_37 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_size_t_557_37 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_558_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_558_18 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_iterator_558_4 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_getindex_559_16 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_char_559_16 = CallSite< System::Func< CallSite^, System::Object^, char >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, char::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_Py_ssize_t_559_11 = CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, Py_ssize_t::typeid, ConversionResultKind::ExplicitCast));
  __site_get_append_194_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_194_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_zeros_196_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "zeros", false));
  __site_call3_196_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_Array_205_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_205_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_209_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_209_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_214_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_FromAny_214_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "FromAny", false));
  __site_call6_214_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_op_and_217_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::And));
  __site_istrue_217_13 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ior_218_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::OrAssign));
  __site_cvt_int_219_77 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call2_222_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_ndim_225_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
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
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  System::Object^ __pyx_t_7 = nullptr;
  System::Object^ __pyx_t_8 = nullptr;
  System::Object^ __pyx_t_9 = nullptr;
  System::Object^ __pyx_t_10 = nullptr;
  System::Object^ __pyx_t_11 = nullptr;
  System::Object^ __pyx_t_12 = nullptr;
  System::Object^ __pyx_t_13 = nullptr;
  System::Object^ __pyx_t_14 = nullptr;
  System::Object^ __pyx_t_15 = nullptr;
  System::Object^ __pyx_t_16 = nullptr;
  System::Object^ __pyx_t_17 = nullptr;
  System::Object^ __pyx_t_18 = nullptr;
  System::Object^ __pyx_t_19 = nullptr;
  System::Object^ __pyx_t_20 = nullptr;
  System::Object^ __pyx_t_21 = nullptr;
  int __pyx_t_22;
  char *__pyx_t_23;
  System::IntPtr __pyx_t_24;
  int __pyx_t_25;
  char *__pyx_t_26;
  int __pyx_t_27;
  char *__pyx_t_28;
  int __pyx_t_29;
  char *__pyx_t_30;
  int __pyx_t_31;
  char *__pyx_t_32;
  int __pyx_t_33;
  char *__pyx_t_34;
  int __pyx_t_35;
  char *__pyx_t_36;
  int __pyx_t_37;
  char *__pyx_t_38;
  int __pyx_t_39;
  char *__pyx_t_40;
  int __pyx_t_41;
  char *__pyx_t_42;
  int __pyx_t_43;
  char *__pyx_t_44;
  int __pyx_t_45;
  char *__pyx_t_46;
  int __pyx_t_47;
  char *__pyx_t_48;
  int __pyx_t_49;
  char *__pyx_t_50;
  int __pyx_t_51;
  char *__pyx_t_52;
  int __pyx_t_53;
  char *__pyx_t_54;
  int __pyx_t_55;
  char *__pyx_t_56;
  int __pyx_t_57;
  char *__pyx_t_58;
  int __pyx_t_59;
  char *__pyx_t_60;
  int __pyx_t_61;
  char *__pyx_t_62;
  int __pyx_t_63;
  char *__pyx_t_64;
  int __pyx_t_65;
  char *__pyx_t_66;
  int __pyx_t_67;
  char *__pyx_t_68;
  int __pyx_t_69;
  char *__pyx_t_70;
  int __pyx_t_71;
  char *__pyx_t_72;
  int __pyx_t_73;
  char *__pyx_t_74;
  int __pyx_t_75;
  char *__pyx_t_76;
  int __pyx_t_77;
  char *__pyx_t_78;
  int __pyx_t_79;
  char *__pyx_t_80;
  int __pyx_t_81;
  char *__pyx_t_82;
  int __pyx_t_83;
  char *__pyx_t_84;
  int __pyx_t_85;
  char *__pyx_t_86;
  int __pyx_t_87;
  char *__pyx_t_88;
  int __pyx_t_89;
  char *__pyx_t_90;
  int __pyx_t_91;
  char *__pyx_t_92;
  int __pyx_t_93;
  char *__pyx_t_94;
  int __pyx_t_95;
  char *__pyx_t_96;
  int __pyx_t_97;
  char *__pyx_t_98;
  int __pyx_t_99;
  char *__pyx_t_100;
  int __pyx_t_101;
  char *__pyx_t_102;
  int __pyx_t_103;
  char *__pyx_t_104;
  int __pyx_t_105;
  char *__pyx_t_106;
  int __pyx_t_107;
  char *__pyx_t_108;
  int __pyx_t_109;
  char *__pyx_t_110;
  int __pyx_t_111;
  char *__pyx_t_112;
  int __pyx_t_113;
  char *__pyx_t_114;
  int __pyx_t_115;
  char *__pyx_t_116;
  int __pyx_t_117;
  char *__pyx_t_118;
  int __pyx_t_119;
  char *__pyx_t_120;
  int __pyx_t_121;
  char *__pyx_t_122;
  int __pyx_t_123;
  char *__pyx_t_124;
  int __pyx_t_125;
  char *__pyx_t_126;
  int __pyx_t_127;
  char *__pyx_t_128;
  int __pyx_t_129;
  char *__pyx_t_130;
  int __pyx_t_131;
  char *__pyx_t_132;
  int __pyx_t_133;
  char *__pyx_t_134;
  int __pyx_t_135;
  char *__pyx_t_136;
  int __pyx_t_137;
  char *__pyx_t_138;
  int __pyx_t_139;
  char *__pyx_t_140;
  int __pyx_t_141;
  char *__pyx_t_142;
  int __pyx_t_143;
  char *__pyx_t_144;
  int __pyx_t_145;
  char *__pyx_t_146;
  int __pyx_t_147;
  char *__pyx_t_148;
  int __pyx_t_149;
  char *__pyx_t_150;
  int __pyx_t_151;
  char *__pyx_t_152;
  int __pyx_t_153;
  char *__pyx_t_154;
  int __pyx_t_155;
  char *__pyx_t_156;
  int __pyx_t_157;
  char *__pyx_t_158;
  int __pyx_t_159;
  char *__pyx_t_160;
  int __pyx_t_161;
  char *__pyx_t_162;
  int __pyx_t_163;
  char *__pyx_t_164;
  int __pyx_t_165;
  char *__pyx_t_166;
  int __pyx_t_167;
  char *__pyx_t_168;
  int __pyx_t_169;
  char *__pyx_t_170;
  int __pyx_t_171;
  char *__pyx_t_172;
  int __pyx_t_173;
  char *__pyx_t_174;
  int __pyx_t_175;
  char *__pyx_t_176;
  int __pyx_t_177;
  char *__pyx_t_178;
  int __pyx_t_179;
  char *__pyx_t_180;
  int __pyx_t_181;
  char *__pyx_t_182;
  int __pyx_t_183;
  char *__pyx_t_184;
  int __pyx_t_185;
  char *__pyx_t_186;
  int __pyx_t_187;
  char *__pyx_t_188;
  int __pyx_t_189;
  char *__pyx_t_190;
  int __pyx_t_191;
  char *__pyx_t_192;
  int __pyx_t_193;
  char *__pyx_t_194;
  int __pyx_t_195;
  char *__pyx_t_196;
  int __pyx_t_197;
  char *__pyx_t_198;
  int __pyx_t_199;
  char *__pyx_t_200;
  int __pyx_t_201;
  char *__pyx_t_202;
  int __pyx_t_203;
  char *__pyx_t_204;
  int __pyx_t_205;
  char *__pyx_t_206;
  int __pyx_t_207;
  char *__pyx_t_208;
  int __pyx_t_209;
  char *__pyx_t_210;
  int __pyx_t_211;
  char *__pyx_t_212;
  int __pyx_t_213;
  char *__pyx_t_214;
  int __pyx_t_215;
  char *__pyx_t_216;
  int __pyx_t_217;
  char *__pyx_t_218;
  int __pyx_t_219;
  char *__pyx_t_220;
  int __pyx_t_221;
  char *__pyx_t_222;
  int __pyx_t_223;
  char *__pyx_t_224;
  int __pyx_t_225;
  char *__pyx_t_226;
  int __pyx_t_227;
  char *__pyx_t_228;
  int __pyx_t_229;
  char *__pyx_t_230;
  int __pyx_t_231;
  char *__pyx_t_232;
  int __pyx_t_233;
  char *__pyx_t_234;
  int __pyx_t_235;
  char *__pyx_t_236;
  int __pyx_t_237;
  char *__pyx_t_238;
  int __pyx_t_239;
  char *__pyx_t_240;
  int __pyx_t_241;
  char *__pyx_t_242;
  int __pyx_t_243;
  char *__pyx_t_244;
  int __pyx_t_245;
  char *__pyx_t_246;
  int __pyx_t_247;
  char *__pyx_t_248;
  int __pyx_t_249;
  char *__pyx_t_250;
  int __pyx_t_251;
  char *__pyx_t_252;
  int __pyx_t_253;
  char *__pyx_t_254;
  int __pyx_t_255;
  char *__pyx_t_256;
  int __pyx_t_257;
  char *__pyx_t_258;
  int __pyx_t_259;
  char *__pyx_t_260;
  int __pyx_t_261;
  char *__pyx_t_262;
  int __pyx_t_263;
  char *__pyx_t_264;
  int __pyx_t_265;
  int __pyx_t_266;
  int __pyx_t_267;
  int __pyx_t_268;
  int __pyx_t_269;
  int __pyx_t_270;
  int __pyx_t_271;
  int __pyx_t_272;
  int __pyx_t_273;
  int __pyx_t_274;
  int __pyx_t_275;
  int __pyx_t_276;
  int __pyx_t_277;
  int __pyx_t_278;
  int __pyx_t_279;
  int __pyx_t_280;
  int __pyx_t_281;
  int __pyx_t_282;
  int __pyx_t_283;
  int __pyx_t_284;
  int __pyx_t_285;
  int __pyx_t_286;
  int __pyx_t_287;
  int __pyx_t_288;
  char *__pyx_t_289;
  int __pyx_t_290;
  char *__pyx_t_291;
  int __pyx_t_292;
  char *__pyx_t_293;
  int __pyx_t_294;
  int __pyx_t_295;
  int __pyx_t_296;
  int __pyx_t_297;
  int __pyx_t_298;
  int __pyx_t_299;
  char *__pyx_t_300;
  int __pyx_t_301;
  char *__pyx_t_302;
  int __pyx_t_303;
  char *__pyx_t_304;
  int __pyx_t_305;
  char *__pyx_t_306;
  int __pyx_t_307;
  char *__pyx_t_308;
  int __pyx_t_309;
  char *__pyx_t_310;
  int __pyx_t_311;
  char *__pyx_t_312;
  int __pyx_t_313;
  char *__pyx_t_314;
  int __pyx_t_315;
  char *__pyx_t_316;
  int __pyx_t_317;
  char *__pyx_t_318;
  int __pyx_t_319;
  char *__pyx_t_320;
  int __pyx_t_321;
  char *__pyx_t_322;
  int __pyx_t_323;
  char *__pyx_t_324;
  int __pyx_t_325;
  char *__pyx_t_326;
  int __pyx_t_327;
  char *__pyx_t_328;
  int __pyx_t_329;
  char *__pyx_t_330;
  int __pyx_t_331;
  char *__pyx_t_332;
  int __pyx_t_333;
  char *__pyx_t_334;
  int __pyx_t_335;
  char *__pyx_t_336;
  int __pyx_t_337;
  char *__pyx_t_338;
  int __pyx_t_339;
  char *__pyx_t_340;
  int __pyx_t_341;
  char *__pyx_t_342;
  int __pyx_t_343;
  char *__pyx_t_344;
  int __pyx_t_345;
  char *__pyx_t_346;
  int __pyx_t_347;
  char *__pyx_t_348;
  int __pyx_t_349;
  char *__pyx_t_350;
  int __pyx_t_351;
  char *__pyx_t_352;
  int __pyx_t_353;
  char *__pyx_t_354;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":9
 * ctypedef int intp
 * 
 * PyUFunc_None = -1             # <<<<<<<<<<<<<<
 * 
 * cdef extern from "specfun_wrappers.h":
 */
  PythonOps::SetGlobal(__pyx_context, "PyUFunc_None", __pyx_int_neg_1);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":348
 * 
 * 
 * cdef np.PyUFuncGenericFunction *cephes1_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes1rc_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes1_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes1_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":349
 * 
 * cdef np.PyUFuncGenericFunction *cephes1_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes1rc_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes1_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes1_2c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes1rc_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 4)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":350
 * cdef np.PyUFuncGenericFunction *cephes1_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes1rc_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes1_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes1_2c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes1c_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes1_2_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 4)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":351
 * cdef np.PyUFuncGenericFunction *cephes1rc_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes1_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes1_2c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes1c_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes1cpb_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes1_2c_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":352
 * cdef np.PyUFuncGenericFunction *cephes1_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes1_2c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes1c_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes1cpb_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes1c_4_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 4)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":353
 * cdef np.PyUFuncGenericFunction *cephes1_2c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes1c_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes1cpb_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes1cpb_4_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":354
 * cdef np.PyUFuncGenericFunction *cephes1c_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes1cpb_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes2_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes2_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":355
 * cdef np.PyUFuncGenericFunction *cephes1cpb_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes2_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2a_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes2_2_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":356
 * cdef np.PyUFuncGenericFunction *cephes2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes2a_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes2_4_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":357
 * cdef np.PyUFuncGenericFunction *cephes2_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2a_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes2c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes2cpp_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes2a_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":358
 * cdef np.PyUFuncGenericFunction *cephes2_4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2a_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes2cpp_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes3_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes2c_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 4)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":359
 * cdef np.PyUFuncGenericFunction *cephes2a_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes2c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes2cpp_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes3_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes3a_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes2cpp_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":360
 * cdef np.PyUFuncGenericFunction *cephes2c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes2cpp_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes3_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes3a_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes3_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes3_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 4)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":361
 * cdef np.PyUFuncGenericFunction *cephes2cpp_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes3_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes3a_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes3_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes3a_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":362
 * cdef np.PyUFuncGenericFunction *cephes3_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes3a_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes3_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes4a_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes3_2_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":363
 * cdef np.PyUFuncGenericFunction *cephes3a_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes3_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes4a_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes4_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes4_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 4)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":364
 * cdef np.PyUFuncGenericFunction *cephes3_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes4a_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes4_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes5_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes4a_2_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":365
 * cdef np.PyUFuncGenericFunction *cephes4_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*4)
 * cdef np.PyUFuncGenericFunction *cephes4a_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes4_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes5_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes1c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 */
  __pyx_v_5scipy_7special_7_cephes_cephes4_2_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":366
 * cdef np.PyUFuncGenericFunction *cephes4a_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes4_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes5_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * cdef np.PyUFuncGenericFunction *cephes1c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * 
 */
  __pyx_v_5scipy_7special_7_cephes_cephes5_2_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":367
 * cdef np.PyUFuncGenericFunction *cephes4_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes5_2_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)
 * cdef np.PyUFuncGenericFunction *cephes1c_functions = <np.PyUFuncGenericFunction*>malloc(sizeof(np.PyUFuncGenericFunction)*2)             # <<<<<<<<<<<<<<
 * 
 * cdef void ** alloc_data_from_list(l):
 */
  __pyx_v_5scipy_7special_7_cephes_cephes1c_functions = ((__pyx_t_5numpy_PyUFuncGenericFunction *)malloc(((sizeof(__pyx_t_5numpy_PyUFuncGenericFunction)) * 2)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":375
 *     return data
 * 
 * cdef void ** airy_data = alloc_data_from_list([ <int> <void *>airy_, <int> <void *>airy_, <int> <void *>cairy_wrap, <int> <void *>cairy_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** airye_data = alloc_data_from_list([ <int> <void *>cairy_wrap_e_real, <int> <void *>cairy_wrap_e_real, <int> <void *>cairy_wrap_e, <int> <void *>cairy_wrap_e, ])
 * cdef void ** itairy_data = alloc_data_from_list([ <int> <void *>itairy_wrap, <int> <void *>itairy_wrap, ])
 */
  __pyx_t_1 = ((int)((void *)airy));
  __pyx_t_2 = ((int)((void *)airy));
  __pyx_t_3 = ((int)((void *)cairy_wrap));
  __pyx_t_4 = ((int)((void *)cairy_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2, __pyx_t_3, __pyx_t_4});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_airy_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":376
 * 
 * cdef void ** airy_data = alloc_data_from_list([ <int> <void *>airy_, <int> <void *>airy_, <int> <void *>cairy_wrap, <int> <void *>cairy_wrap,])
 * cdef void ** airye_data = alloc_data_from_list([ <int> <void *>cairy_wrap_e_real, <int> <void *>cairy_wrap_e_real, <int> <void *>cairy_wrap_e, <int> <void *>cairy_wrap_e, ])             # <<<<<<<<<<<<<<
 * cdef void ** itairy_data = alloc_data_from_list([ <int> <void *>itairy_wrap, <int> <void *>itairy_wrap, ])
 * cdef void ** kelvin_data = alloc_data_from_list([ <int> <void *>kelvin_wrap, <int> <void *>kelvin_wrap,])
 */
  __pyx_t_5 = ((int)((void *)cairy_wrap_e_real));
  __pyx_t_4 = ((int)((void *)cairy_wrap_e_real));
  __pyx_t_3 = ((int)((void *)cairy_wrap_e));
  __pyx_t_2 = ((int)((void *)cairy_wrap_e));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4, __pyx_t_3, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_airye_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":377
 * cdef void ** airy_data = alloc_data_from_list([ <int> <void *>airy_, <int> <void *>airy_, <int> <void *>cairy_wrap, <int> <void *>cairy_wrap,])
 * cdef void ** airye_data = alloc_data_from_list([ <int> <void *>cairy_wrap_e_real, <int> <void *>cairy_wrap_e_real, <int> <void *>cairy_wrap_e, <int> <void *>cairy_wrap_e, ])
 * cdef void ** itairy_data = alloc_data_from_list([ <int> <void *>itairy_wrap, <int> <void *>itairy_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** kelvin_data = alloc_data_from_list([ <int> <void *>kelvin_wrap, <int> <void *>kelvin_wrap,])
 * cdef void ** ber_data = alloc_data_from_list([ <int> <void *>ber_wrap, <int> <void *>ber_wrap,])
 */
  __pyx_t_1 = ((int)((void *)itairy_wrap));
  __pyx_t_2 = ((int)((void *)itairy_wrap));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_itairy_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":378
 * cdef void ** airye_data = alloc_data_from_list([ <int> <void *>cairy_wrap_e_real, <int> <void *>cairy_wrap_e_real, <int> <void *>cairy_wrap_e, <int> <void *>cairy_wrap_e, ])
 * cdef void ** itairy_data = alloc_data_from_list([ <int> <void *>itairy_wrap, <int> <void *>itairy_wrap, ])
 * cdef void ** kelvin_data = alloc_data_from_list([ <int> <void *>kelvin_wrap, <int> <void *>kelvin_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** ber_data = alloc_data_from_list([ <int> <void *>ber_wrap, <int> <void *>ber_wrap,])
 * cdef void ** bei_data = alloc_data_from_list([ <int> <void *>bei_wrap, <int> <void *>bei_wrap,])
 */
  __pyx_t_3 = ((int)((void *)kelvin_wrap));
  __pyx_t_2 = ((int)((void *)kelvin_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_kelvin_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":379
 * cdef void ** itairy_data = alloc_data_from_list([ <int> <void *>itairy_wrap, <int> <void *>itairy_wrap, ])
 * cdef void ** kelvin_data = alloc_data_from_list([ <int> <void *>kelvin_wrap, <int> <void *>kelvin_wrap,])
 * cdef void ** ber_data = alloc_data_from_list([ <int> <void *>ber_wrap, <int> <void *>ber_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** bei_data = alloc_data_from_list([ <int> <void *>bei_wrap, <int> <void *>bei_wrap,])
 * cdef void ** ker_data = alloc_data_from_list([ <int> <void *>ker_wrap, <int> <void *>ker_wrap,])
 */
  __pyx_t_1 = ((int)((void *)ber_wrap));
  __pyx_t_2 = ((int)((void *)ber_wrap));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_ber_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":380
 * cdef void ** kelvin_data = alloc_data_from_list([ <int> <void *>kelvin_wrap, <int> <void *>kelvin_wrap,])
 * cdef void ** ber_data = alloc_data_from_list([ <int> <void *>ber_wrap, <int> <void *>ber_wrap,])
 * cdef void ** bei_data = alloc_data_from_list([ <int> <void *>bei_wrap, <int> <void *>bei_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** ker_data = alloc_data_from_list([ <int> <void *>ker_wrap, <int> <void *>ker_wrap,])
 * cdef void ** kei_data = alloc_data_from_list([ <int> <void *>kei_wrap, <int> <void *>kei_wrap,])
 */
  __pyx_t_3 = ((int)((void *)bei_wrap));
  __pyx_t_2 = ((int)((void *)bei_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_bei_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":381
 * cdef void ** ber_data = alloc_data_from_list([ <int> <void *>ber_wrap, <int> <void *>ber_wrap,])
 * cdef void ** bei_data = alloc_data_from_list([ <int> <void *>bei_wrap, <int> <void *>bei_wrap,])
 * cdef void ** ker_data = alloc_data_from_list([ <int> <void *>ker_wrap, <int> <void *>ker_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** kei_data = alloc_data_from_list([ <int> <void *>kei_wrap, <int> <void *>kei_wrap,])
 * cdef void ** berp_data = alloc_data_from_list([ <int> <void *>berp_wrap, <int> <void *>berp_wrap,])
 */
  __pyx_t_1 = ((int)((void *)ker_wrap));
  __pyx_t_2 = ((int)((void *)ker_wrap));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_ker_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":382
 * cdef void ** bei_data = alloc_data_from_list([ <int> <void *>bei_wrap, <int> <void *>bei_wrap,])
 * cdef void ** ker_data = alloc_data_from_list([ <int> <void *>ker_wrap, <int> <void *>ker_wrap,])
 * cdef void ** kei_data = alloc_data_from_list([ <int> <void *>kei_wrap, <int> <void *>kei_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** berp_data = alloc_data_from_list([ <int> <void *>berp_wrap, <int> <void *>berp_wrap,])
 * cdef void ** beip_data = alloc_data_from_list([ <int> <void *>beip_wrap, <int> <void *>beip_wrap,])
 */
  __pyx_t_3 = ((int)((void *)kei_wrap));
  __pyx_t_2 = ((int)((void *)kei_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_kei_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":383
 * cdef void ** ker_data = alloc_data_from_list([ <int> <void *>ker_wrap, <int> <void *>ker_wrap,])
 * cdef void ** kei_data = alloc_data_from_list([ <int> <void *>kei_wrap, <int> <void *>kei_wrap,])
 * cdef void ** berp_data = alloc_data_from_list([ <int> <void *>berp_wrap, <int> <void *>berp_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** beip_data = alloc_data_from_list([ <int> <void *>beip_wrap, <int> <void *>beip_wrap,])
 * cdef void ** kerp_data = alloc_data_from_list([ <int> <void *>kerp_wrap, <int> <void *>kerp_wrap,])
 */
  __pyx_t_1 = ((int)((void *)berp_wrap));
  __pyx_t_2 = ((int)((void *)berp_wrap));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_berp_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":384
 * cdef void ** kei_data = alloc_data_from_list([ <int> <void *>kei_wrap, <int> <void *>kei_wrap,])
 * cdef void ** berp_data = alloc_data_from_list([ <int> <void *>berp_wrap, <int> <void *>berp_wrap,])
 * cdef void ** beip_data = alloc_data_from_list([ <int> <void *>beip_wrap, <int> <void *>beip_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** kerp_data = alloc_data_from_list([ <int> <void *>kerp_wrap, <int> <void *>kerp_wrap,])
 * cdef void ** keip_data = alloc_data_from_list([ <int> <void *>keip_wrap, <int> <void *>keip_wrap,])
 */
  __pyx_t_3 = ((int)((void *)beip_wrap));
  __pyx_t_2 = ((int)((void *)beip_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_beip_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":385
 * cdef void ** berp_data = alloc_data_from_list([ <int> <void *>berp_wrap, <int> <void *>berp_wrap,])
 * cdef void ** beip_data = alloc_data_from_list([ <int> <void *>beip_wrap, <int> <void *>beip_wrap,])
 * cdef void ** kerp_data = alloc_data_from_list([ <int> <void *>kerp_wrap, <int> <void *>kerp_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** keip_data = alloc_data_from_list([ <int> <void *>keip_wrap, <int> <void *>keip_wrap,])
 * cdef void ** ellpj_data = alloc_data_from_list([ <int> <void *>ellpj, <int> <void *>ellpj,])
 */
  __pyx_t_1 = ((int)((void *)kerp_wrap));
  __pyx_t_2 = ((int)((void *)kerp_wrap));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_kerp_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":386
 * cdef void ** beip_data = alloc_data_from_list([ <int> <void *>beip_wrap, <int> <void *>beip_wrap,])
 * cdef void ** kerp_data = alloc_data_from_list([ <int> <void *>kerp_wrap, <int> <void *>kerp_wrap,])
 * cdef void ** keip_data = alloc_data_from_list([ <int> <void *>keip_wrap, <int> <void *>keip_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** ellpj_data = alloc_data_from_list([ <int> <void *>ellpj, <int> <void *>ellpj,])
 * cdef void ** exp1_data = alloc_data_from_list([ <int> <void *>exp1_wrap, <int> <void *>exp1_wrap, <int> <void *>cexp1_wrap, <int> <void *>cexp1_wrap,])
 */
  __pyx_t_3 = ((int)((void *)keip_wrap));
  __pyx_t_2 = ((int)((void *)keip_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_keip_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":387
 * cdef void ** kerp_data = alloc_data_from_list([ <int> <void *>kerp_wrap, <int> <void *>kerp_wrap,])
 * cdef void ** keip_data = alloc_data_from_list([ <int> <void *>keip_wrap, <int> <void *>keip_wrap,])
 * cdef void ** ellpj_data = alloc_data_from_list([ <int> <void *>ellpj, <int> <void *>ellpj,])             # <<<<<<<<<<<<<<
 * cdef void ** exp1_data = alloc_data_from_list([ <int> <void *>exp1_wrap, <int> <void *>exp1_wrap, <int> <void *>cexp1_wrap, <int> <void *>cexp1_wrap,])
 * cdef void ** expi_data = alloc_data_from_list([ <int> <void *>expi_wrap, <int> <void *>expi_wrap, <int> <void *>cexpi_wrap, <int> <void *>cexpi_wrap,])
 */
  __pyx_t_1 = ((int)((void *)ellpj));
  __pyx_t_2 = ((int)((void *)ellpj));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_ellpj_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":388
 * cdef void ** keip_data = alloc_data_from_list([ <int> <void *>keip_wrap, <int> <void *>keip_wrap,])
 * cdef void ** ellpj_data = alloc_data_from_list([ <int> <void *>ellpj, <int> <void *>ellpj,])
 * cdef void ** exp1_data = alloc_data_from_list([ <int> <void *>exp1_wrap, <int> <void *>exp1_wrap, <int> <void *>cexp1_wrap, <int> <void *>cexp1_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** expi_data = alloc_data_from_list([ <int> <void *>expi_wrap, <int> <void *>expi_wrap, <int> <void *>cexpi_wrap, <int> <void *>cexpi_wrap,])
 * cdef void ** expn_data = alloc_data_from_list([ <int> <void *>expn_, <int> <void *>expn_, ])
 */
  __pyx_t_3 = ((int)((void *)exp1_wrap));
  __pyx_t_2 = ((int)((void *)exp1_wrap));
  __pyx_t_1 = ((int)((void *)cexp1_wrap));
  __pyx_t_4 = ((int)((void *)cexp1_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_2, __pyx_t_1, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_exp1_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":389
 * cdef void ** ellpj_data = alloc_data_from_list([ <int> <void *>ellpj, <int> <void *>ellpj,])
 * cdef void ** exp1_data = alloc_data_from_list([ <int> <void *>exp1_wrap, <int> <void *>exp1_wrap, <int> <void *>cexp1_wrap, <int> <void *>cexp1_wrap,])
 * cdef void ** expi_data = alloc_data_from_list([ <int> <void *>expi_wrap, <int> <void *>expi_wrap, <int> <void *>cexpi_wrap, <int> <void *>cexpi_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** expn_data = alloc_data_from_list([ <int> <void *>expn_, <int> <void *>expn_, ])
 * cdef void ** kn_data = alloc_data_from_list([ <int> <void *>kn_, <int> <void *>kn_, ])
 */
  __pyx_t_5 = ((int)((void *)expi_wrap));
  __pyx_t_4 = ((int)((void *)expi_wrap));
  __pyx_t_1 = ((int)((void *)cexpi_wrap));
  __pyx_t_2 = ((int)((void *)cexpi_wrap));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4, __pyx_t_1, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_expi_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":390
 * cdef void ** exp1_data = alloc_data_from_list([ <int> <void *>exp1_wrap, <int> <void *>exp1_wrap, <int> <void *>cexp1_wrap, <int> <void *>cexp1_wrap,])
 * cdef void ** expi_data = alloc_data_from_list([ <int> <void *>expi_wrap, <int> <void *>expi_wrap, <int> <void *>cexpi_wrap, <int> <void *>cexpi_wrap,])
 * cdef void ** expn_data = alloc_data_from_list([ <int> <void *>expn_, <int> <void *>expn_, ])             # <<<<<<<<<<<<<<
 * cdef void ** kn_data = alloc_data_from_list([ <int> <void *>kn_, <int> <void *>kn_, ])
 * cdef void ** pdtrc_data = alloc_data_from_list([ <int> <void *>pdtrc_, <int> <void *>pdtrc_, ])
 */
  __pyx_t_3 = ((int)((void *)expn));
  __pyx_t_2 = ((int)((void *)expn));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_expn_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":391
 * cdef void ** expi_data = alloc_data_from_list([ <int> <void *>expi_wrap, <int> <void *>expi_wrap, <int> <void *>cexpi_wrap, <int> <void *>cexpi_wrap,])
 * cdef void ** expn_data = alloc_data_from_list([ <int> <void *>expn_, <int> <void *>expn_, ])
 * cdef void ** kn_data = alloc_data_from_list([ <int> <void *>kn_, <int> <void *>kn_, ])             # <<<<<<<<<<<<<<
 * cdef void ** pdtrc_data = alloc_data_from_list([ <int> <void *>pdtrc_, <int> <void *>pdtrc_, ])
 * cdef void ** pdtr_data = alloc_data_from_list([ <int> <void *>pdtr_, <int> <void *>pdtr_, ])
 */
  __pyx_t_1 = ((int)((void *)kn));
  __pyx_t_2 = ((int)((void *)kn));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_kn_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":392
 * cdef void ** expn_data = alloc_data_from_list([ <int> <void *>expn_, <int> <void *>expn_, ])
 * cdef void ** kn_data = alloc_data_from_list([ <int> <void *>kn_, <int> <void *>kn_, ])
 * cdef void ** pdtrc_data = alloc_data_from_list([ <int> <void *>pdtrc_, <int> <void *>pdtrc_, ])             # <<<<<<<<<<<<<<
 * cdef void ** pdtr_data = alloc_data_from_list([ <int> <void *>pdtr_, <int> <void *>pdtr_, ])
 * cdef void ** pdtri_data = alloc_data_from_list([ <int> <void *>pdtri_, <int> <void *>pdtri_, ])
 */
  __pyx_t_3 = ((int)((void *)pdtrc));
  __pyx_t_2 = ((int)((void *)pdtrc));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_pdtrc_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":393
 * cdef void ** kn_data = alloc_data_from_list([ <int> <void *>kn_, <int> <void *>kn_, ])
 * cdef void ** pdtrc_data = alloc_data_from_list([ <int> <void *>pdtrc_, <int> <void *>pdtrc_, ])
 * cdef void ** pdtr_data = alloc_data_from_list([ <int> <void *>pdtr_, <int> <void *>pdtr_, ])             # <<<<<<<<<<<<<<
 * cdef void ** pdtri_data = alloc_data_from_list([ <int> <void *>pdtri_, <int> <void *>pdtri_, ])
 * cdef void ** fresnl_data = alloc_data_from_list([ <int> <void *>fresnl, <int> <void *>fresnl, <int> <void *>cfresnl_wrap, <int> <void *>cfresnl_wrap ])
 */
  __pyx_t_1 = ((int)((void *)pdtr));
  __pyx_t_2 = ((int)((void *)pdtr));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_pdtr_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":394
 * cdef void ** pdtrc_data = alloc_data_from_list([ <int> <void *>pdtrc_, <int> <void *>pdtrc_, ])
 * cdef void ** pdtr_data = alloc_data_from_list([ <int> <void *>pdtr_, <int> <void *>pdtr_, ])
 * cdef void ** pdtri_data = alloc_data_from_list([ <int> <void *>pdtri_, <int> <void *>pdtri_, ])             # <<<<<<<<<<<<<<
 * cdef void ** fresnl_data = alloc_data_from_list([ <int> <void *>fresnl, <int> <void *>fresnl, <int> <void *>cfresnl_wrap, <int> <void *>cfresnl_wrap ])
 * cdef void ** shichi_data = alloc_data_from_list([ <int> <void *>shichi_, <int> <void *>shichi_, ])
 */
  __pyx_t_3 = ((int)((void *)pdtri));
  __pyx_t_2 = ((int)((void *)pdtri));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_pdtri_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":395
 * cdef void ** pdtr_data = alloc_data_from_list([ <int> <void *>pdtr_, <int> <void *>pdtr_, ])
 * cdef void ** pdtri_data = alloc_data_from_list([ <int> <void *>pdtri_, <int> <void *>pdtri_, ])
 * cdef void ** fresnl_data = alloc_data_from_list([ <int> <void *>fresnl, <int> <void *>fresnl, <int> <void *>cfresnl_wrap, <int> <void *>cfresnl_wrap ])             # <<<<<<<<<<<<<<
 * cdef void ** shichi_data = alloc_data_from_list([ <int> <void *>shichi_, <int> <void *>shichi_, ])
 * cdef void ** sici_data = alloc_data_from_list([ <int> <void *>sici_, <int> <void *>sici_, ])
 */
  __pyx_t_1 = ((int)((void *)fresnl));
  __pyx_t_2 = ((int)((void *)fresnl));
  __pyx_t_3 = ((int)((void *)cfresnl_wrap));
  __pyx_t_4 = ((int)((void *)cfresnl_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2, __pyx_t_3, __pyx_t_4});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_fresnl_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":396
 * cdef void ** pdtri_data = alloc_data_from_list([ <int> <void *>pdtri_, <int> <void *>pdtri_, ])
 * cdef void ** fresnl_data = alloc_data_from_list([ <int> <void *>fresnl, <int> <void *>fresnl, <int> <void *>cfresnl_wrap, <int> <void *>cfresnl_wrap ])
 * cdef void ** shichi_data = alloc_data_from_list([ <int> <void *>shichi_, <int> <void *>shichi_, ])             # <<<<<<<<<<<<<<
 * cdef void ** sici_data = alloc_data_from_list([ <int> <void *>sici_, <int> <void *>sici_, ])
 * cdef void ** itj0y0_data = alloc_data_from_list([ <int> <void *>it1j0y0_wrap, <int> <void *>it1j0y0_wrap, ])
 */
  __pyx_t_5 = ((int)((void *)shichi));
  __pyx_t_4 = ((int)((void *)shichi));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_shichi_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":397
 * cdef void ** fresnl_data = alloc_data_from_list([ <int> <void *>fresnl, <int> <void *>fresnl, <int> <void *>cfresnl_wrap, <int> <void *>cfresnl_wrap ])
 * cdef void ** shichi_data = alloc_data_from_list([ <int> <void *>shichi_, <int> <void *>shichi_, ])
 * cdef void ** sici_data = alloc_data_from_list([ <int> <void *>sici_, <int> <void *>sici_, ])             # <<<<<<<<<<<<<<
 * cdef void ** itj0y0_data = alloc_data_from_list([ <int> <void *>it1j0y0_wrap, <int> <void *>it1j0y0_wrap, ])
 * cdef void ** it2j0y0_data = alloc_data_from_list([ <int> <void *>it2j0y0_wrap, <int> <void *>it2j0y0_wrap, ])
 */
  __pyx_t_3 = ((int)((void *)sici));
  __pyx_t_4 = ((int)((void *)sici));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_sici_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":398
 * cdef void ** shichi_data = alloc_data_from_list([ <int> <void *>shichi_, <int> <void *>shichi_, ])
 * cdef void ** sici_data = alloc_data_from_list([ <int> <void *>sici_, <int> <void *>sici_, ])
 * cdef void ** itj0y0_data = alloc_data_from_list([ <int> <void *>it1j0y0_wrap, <int> <void *>it1j0y0_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** it2j0y0_data = alloc_data_from_list([ <int> <void *>it2j0y0_wrap, <int> <void *>it2j0y0_wrap, ])
 * cdef void ** iti0k0_data = alloc_data_from_list([ <int> <void *>it1i0k0_wrap, <int> <void *>it1i0k0_wrap, ])
 */
  __pyx_t_5 = ((int)((void *)it1j0y0_wrap));
  __pyx_t_4 = ((int)((void *)it1j0y0_wrap));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_itj0y0_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":399
 * cdef void ** sici_data = alloc_data_from_list([ <int> <void *>sici_, <int> <void *>sici_, ])
 * cdef void ** itj0y0_data = alloc_data_from_list([ <int> <void *>it1j0y0_wrap, <int> <void *>it1j0y0_wrap, ])
 * cdef void ** it2j0y0_data = alloc_data_from_list([ <int> <void *>it2j0y0_wrap, <int> <void *>it2j0y0_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** iti0k0_data = alloc_data_from_list([ <int> <void *>it1i0k0_wrap, <int> <void *>it1i0k0_wrap, ])
 * cdef void ** it2i0k0_data = alloc_data_from_list([ <int> <void *>it2i0k0_wrap, <int> <void *>it2i0k0_wrap, ])
 */
  __pyx_t_3 = ((int)((void *)it2j0y0_wrap));
  __pyx_t_4 = ((int)((void *)it2j0y0_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_it2j0y0_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":400
 * cdef void ** itj0y0_data = alloc_data_from_list([ <int> <void *>it1j0y0_wrap, <int> <void *>it1j0y0_wrap, ])
 * cdef void ** it2j0y0_data = alloc_data_from_list([ <int> <void *>it2j0y0_wrap, <int> <void *>it2j0y0_wrap, ])
 * cdef void ** iti0k0_data = alloc_data_from_list([ <int> <void *>it1i0k0_wrap, <int> <void *>it1i0k0_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** it2i0k0_data = alloc_data_from_list([ <int> <void *>it2i0k0_wrap, <int> <void *>it2i0k0_wrap, ])
 * cdef void ** yn_data = alloc_data_from_list([ <int> <void *>yn_, <int> <void *>yn_, ])
 */
  __pyx_t_5 = ((int)((void *)it1i0k0_wrap));
  __pyx_t_4 = ((int)((void *)it1i0k0_wrap));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_iti0k0_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":401
 * cdef void ** it2j0y0_data = alloc_data_from_list([ <int> <void *>it2j0y0_wrap, <int> <void *>it2j0y0_wrap, ])
 * cdef void ** iti0k0_data = alloc_data_from_list([ <int> <void *>it1i0k0_wrap, <int> <void *>it1i0k0_wrap, ])
 * cdef void ** it2i0k0_data = alloc_data_from_list([ <int> <void *>it2i0k0_wrap, <int> <void *>it2i0k0_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** yn_data = alloc_data_from_list([ <int> <void *>yn_, <int> <void *>yn_, ])
 * cdef void ** smirnov_data = alloc_data_from_list([ <int> <void *>smirnov_, <int> <void *>smirnov_, ])
 */
  __pyx_t_3 = ((int)((void *)it2i0k0_wrap));
  __pyx_t_4 = ((int)((void *)it2i0k0_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_it2i0k0_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":402
 * cdef void ** iti0k0_data = alloc_data_from_list([ <int> <void *>it1i0k0_wrap, <int> <void *>it1i0k0_wrap, ])
 * cdef void ** it2i0k0_data = alloc_data_from_list([ <int> <void *>it2i0k0_wrap, <int> <void *>it2i0k0_wrap, ])
 * cdef void ** yn_data = alloc_data_from_list([ <int> <void *>yn_, <int> <void *>yn_, ])             # <<<<<<<<<<<<<<
 * cdef void ** smirnov_data = alloc_data_from_list([ <int> <void *>smirnov_, <int> <void *>smirnov_, ])
 * cdef void ** smirnovi_data = alloc_data_from_list([ <int> <void *>smirnovi_, <int> <void *>smirnovi_, ])
 */
  __pyx_t_5 = ((int)((void *)yn));
  __pyx_t_4 = ((int)((void *)yn));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_yn_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":403
 * cdef void ** it2i0k0_data = alloc_data_from_list([ <int> <void *>it2i0k0_wrap, <int> <void *>it2i0k0_wrap, ])
 * cdef void ** yn_data = alloc_data_from_list([ <int> <void *>yn_, <int> <void *>yn_, ])
 * cdef void ** smirnov_data = alloc_data_from_list([ <int> <void *>smirnov_, <int> <void *>smirnov_, ])             # <<<<<<<<<<<<<<
 * cdef void ** smirnovi_data = alloc_data_from_list([ <int> <void *>smirnovi_, <int> <void *>smirnovi_, ])
 * cdef void ** bdtrc_data = alloc_data_from_list([ <int> <void *>bdtrc_, <int> <void *>bdtrc_, ])
 */
  __pyx_t_3 = ((int)((void *)smirnov));
  __pyx_t_4 = ((int)((void *)smirnov));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_smirnov_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":404
 * cdef void ** yn_data = alloc_data_from_list([ <int> <void *>yn_, <int> <void *>yn_, ])
 * cdef void ** smirnov_data = alloc_data_from_list([ <int> <void *>smirnov_, <int> <void *>smirnov_, ])
 * cdef void ** smirnovi_data = alloc_data_from_list([ <int> <void *>smirnovi_, <int> <void *>smirnovi_, ])             # <<<<<<<<<<<<<<
 * cdef void ** bdtrc_data = alloc_data_from_list([ <int> <void *>bdtrc_, <int> <void *>bdtrc_, ])
 * cdef void ** bdtr_data = alloc_data_from_list([ <int> <void *>bdtr_, <int> <void *>bdtr_, ])
 */
  __pyx_t_5 = ((int)((void *)smirnovi));
  __pyx_t_4 = ((int)((void *)smirnovi));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_smirnovi_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":405
 * cdef void ** smirnov_data = alloc_data_from_list([ <int> <void *>smirnov_, <int> <void *>smirnov_, ])
 * cdef void ** smirnovi_data = alloc_data_from_list([ <int> <void *>smirnovi_, <int> <void *>smirnovi_, ])
 * cdef void ** bdtrc_data = alloc_data_from_list([ <int> <void *>bdtrc_, <int> <void *>bdtrc_, ])             # <<<<<<<<<<<<<<
 * cdef void ** bdtr_data = alloc_data_from_list([ <int> <void *>bdtr_, <int> <void *>bdtr_, ])
 * cdef void ** bdtri_data = alloc_data_from_list([ <int> <void *>bdtri_, <int> <void *>bdtri_, ])
 */
  __pyx_t_3 = ((int)((void *)bdtrc));
  __pyx_t_4 = ((int)((void *)bdtrc));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_bdtrc_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":406
 * cdef void ** smirnovi_data = alloc_data_from_list([ <int> <void *>smirnovi_, <int> <void *>smirnovi_, ])
 * cdef void ** bdtrc_data = alloc_data_from_list([ <int> <void *>bdtrc_, <int> <void *>bdtrc_, ])
 * cdef void ** bdtr_data = alloc_data_from_list([ <int> <void *>bdtr_, <int> <void *>bdtr_, ])             # <<<<<<<<<<<<<<
 * cdef void ** bdtri_data = alloc_data_from_list([ <int> <void *>bdtri_, <int> <void *>bdtri_, ])
 * cdef void ** btdtr_data = alloc_data_from_list([ <int> <void *>btdtr_, <int> <void *>btdtr_, ])
 */
  __pyx_t_5 = ((int)((void *)bdtr));
  __pyx_t_4 = ((int)((void *)bdtr));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_bdtr_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":407
 * cdef void ** bdtrc_data = alloc_data_from_list([ <int> <void *>bdtrc_, <int> <void *>bdtrc_, ])
 * cdef void ** bdtr_data = alloc_data_from_list([ <int> <void *>bdtr_, <int> <void *>bdtr_, ])
 * cdef void ** bdtri_data = alloc_data_from_list([ <int> <void *>bdtri_, <int> <void *>bdtri_, ])             # <<<<<<<<<<<<<<
 * cdef void ** btdtr_data = alloc_data_from_list([ <int> <void *>btdtr_, <int> <void *>btdtr_, ])
 * cdef void ** btdtri_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])
 */
  __pyx_t_3 = ((int)((void *)bdtri));
  __pyx_t_4 = ((int)((void *)bdtri));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_bdtri_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":408
 * cdef void ** bdtr_data = alloc_data_from_list([ <int> <void *>bdtr_, <int> <void *>bdtr_, ])
 * cdef void ** bdtri_data = alloc_data_from_list([ <int> <void *>bdtri_, <int> <void *>bdtri_, ])
 * cdef void ** btdtr_data = alloc_data_from_list([ <int> <void *>btdtr_, <int> <void *>btdtr_, ])             # <<<<<<<<<<<<<<
 * cdef void ** btdtri_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])
 * cdef void ** fdtrc_data = alloc_data_from_list([ <int> <void *>fdtrc_, <int> <void *>fdtrc_, ])
 */
  __pyx_t_5 = ((int)((void *)btdtr));
  __pyx_t_4 = ((int)((void *)btdtr));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_btdtr_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":409
 * cdef void ** bdtri_data = alloc_data_from_list([ <int> <void *>bdtri_, <int> <void *>bdtri_, ])
 * cdef void ** btdtr_data = alloc_data_from_list([ <int> <void *>btdtr_, <int> <void *>btdtr_, ])
 * cdef void ** btdtri_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])             # <<<<<<<<<<<<<<
 * cdef void ** fdtrc_data = alloc_data_from_list([ <int> <void *>fdtrc_, <int> <void *>fdtrc_, ])
 * cdef void ** fdtr_data = alloc_data_from_list([ <int> <void *>fdtr_, <int> <void *>fdtr_, ])
 */
  __pyx_t_3 = ((int)((void *)incbi));
  __pyx_t_4 = ((int)((void *)incbi));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_btdtri_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":410
 * cdef void ** btdtr_data = alloc_data_from_list([ <int> <void *>btdtr_, <int> <void *>btdtr_, ])
 * cdef void ** btdtri_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])
 * cdef void ** fdtrc_data = alloc_data_from_list([ <int> <void *>fdtrc_, <int> <void *>fdtrc_, ])             # <<<<<<<<<<<<<<
 * cdef void ** fdtr_data = alloc_data_from_list([ <int> <void *>fdtr_, <int> <void *>fdtr_, ])
 * cdef void ** fdtri_data = alloc_data_from_list([ <int> <void *>fdtri_, <int> <void *>fdtri_, ])
 */
  __pyx_t_5 = ((int)((void *)fdtrc));
  __pyx_t_4 = ((int)((void *)fdtrc));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_fdtrc_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":411
 * cdef void ** btdtri_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])
 * cdef void ** fdtrc_data = alloc_data_from_list([ <int> <void *>fdtrc_, <int> <void *>fdtrc_, ])
 * cdef void ** fdtr_data = alloc_data_from_list([ <int> <void *>fdtr_, <int> <void *>fdtr_, ])             # <<<<<<<<<<<<<<
 * cdef void ** fdtri_data = alloc_data_from_list([ <int> <void *>fdtri_, <int> <void *>fdtri_, ])
 * cdef void ** gdtrc_data = alloc_data_from_list([ <int> <void *>gdtrc_, <int> <void *>gdtrc_, ])
 */
  __pyx_t_3 = ((int)((void *)fdtr));
  __pyx_t_4 = ((int)((void *)fdtr));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_fdtr_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":412
 * cdef void ** fdtrc_data = alloc_data_from_list([ <int> <void *>fdtrc_, <int> <void *>fdtrc_, ])
 * cdef void ** fdtr_data = alloc_data_from_list([ <int> <void *>fdtr_, <int> <void *>fdtr_, ])
 * cdef void ** fdtri_data = alloc_data_from_list([ <int> <void *>fdtri_, <int> <void *>fdtri_, ])             # <<<<<<<<<<<<<<
 * cdef void ** gdtrc_data = alloc_data_from_list([ <int> <void *>gdtrc_, <int> <void *>gdtrc_, ])
 * cdef void ** gdtr_data = alloc_data_from_list([ <int> <void *>gdtr_, <int> <void *>gdtr_, ])
 */
  __pyx_t_5 = ((int)((void *)fdtri));
  __pyx_t_4 = ((int)((void *)fdtri));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_fdtri_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":413
 * cdef void ** fdtr_data = alloc_data_from_list([ <int> <void *>fdtr_, <int> <void *>fdtr_, ])
 * cdef void ** fdtri_data = alloc_data_from_list([ <int> <void *>fdtri_, <int> <void *>fdtri_, ])
 * cdef void ** gdtrc_data = alloc_data_from_list([ <int> <void *>gdtrc_, <int> <void *>gdtrc_, ])             # <<<<<<<<<<<<<<
 * cdef void ** gdtr_data = alloc_data_from_list([ <int> <void *>gdtr_, <int> <void *>gdtr_, ])
 * cdef void ** hyp2f1_data = alloc_data_from_list([ <int> <void *>hyp2f1_, <int> <void *>hyp2f1_, <int> <void *>chyp2f1_wrap, <int> <void *>chyp2f1_wrap])
 */
  __pyx_t_3 = ((int)((void *)gdtrc));
  __pyx_t_4 = ((int)((void *)gdtrc));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_gdtrc_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":414
 * cdef void ** fdtri_data = alloc_data_from_list([ <int> <void *>fdtri_, <int> <void *>fdtri_, ])
 * cdef void ** gdtrc_data = alloc_data_from_list([ <int> <void *>gdtrc_, <int> <void *>gdtrc_, ])
 * cdef void ** gdtr_data = alloc_data_from_list([ <int> <void *>gdtr_, <int> <void *>gdtr_, ])             # <<<<<<<<<<<<<<
 * cdef void ** hyp2f1_data = alloc_data_from_list([ <int> <void *>hyp2f1_, <int> <void *>hyp2f1_, <int> <void *>chyp2f1_wrap, <int> <void *>chyp2f1_wrap])
 * cdef void ** hyp1f1_data = alloc_data_from_list([ <int> <void *>hyp1f1_wrap, <int> <void *>hyp1f1_wrap, <int> <void *>chyp1f1_wrap, <int> <void *>chyp1f1_wrap])
 */
  __pyx_t_5 = ((int)((void *)gdtr));
  __pyx_t_4 = ((int)((void *)gdtr));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_gdtr_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":415
 * cdef void ** gdtrc_data = alloc_data_from_list([ <int> <void *>gdtrc_, <int> <void *>gdtrc_, ])
 * cdef void ** gdtr_data = alloc_data_from_list([ <int> <void *>gdtr_, <int> <void *>gdtr_, ])
 * cdef void ** hyp2f1_data = alloc_data_from_list([ <int> <void *>hyp2f1_, <int> <void *>hyp2f1_, <int> <void *>chyp2f1_wrap, <int> <void *>chyp2f1_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** hyp1f1_data = alloc_data_from_list([ <int> <void *>hyp1f1_wrap, <int> <void *>hyp1f1_wrap, <int> <void *>chyp1f1_wrap, <int> <void *>chyp1f1_wrap])
 * cdef void ** hypU_data = alloc_data_from_list([ <int> <void *>hypU_wrap, <int> <void *>hypU_wrap, ])
 */
  __pyx_t_3 = ((int)((void *)hyp2f1));
  __pyx_t_4 = ((int)((void *)hyp2f1));
  __pyx_t_5 = ((int)((void *)chyp2f1_wrap));
  __pyx_t_2 = ((int)((void *)chyp2f1_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4, __pyx_t_5, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_hyp2f1_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":416
 * cdef void ** gdtr_data = alloc_data_from_list([ <int> <void *>gdtr_, <int> <void *>gdtr_, ])
 * cdef void ** hyp2f1_data = alloc_data_from_list([ <int> <void *>hyp2f1_, <int> <void *>hyp2f1_, <int> <void *>chyp2f1_wrap, <int> <void *>chyp2f1_wrap])
 * cdef void ** hyp1f1_data = alloc_data_from_list([ <int> <void *>hyp1f1_wrap, <int> <void *>hyp1f1_wrap, <int> <void *>chyp1f1_wrap, <int> <void *>chyp1f1_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** hypU_data = alloc_data_from_list([ <int> <void *>hypU_wrap, <int> <void *>hypU_wrap, ])
 * cdef void ** hyp2f0_data = alloc_data_from_list([ <int> <void *>hyp2f0_, <int> <void *>hyp2f0_, ])
 */
  __pyx_t_1 = ((int)((void *)hyp1f1_wrap));
  __pyx_t_2 = ((int)((void *)hyp1f1_wrap));
  __pyx_t_5 = ((int)((void *)chyp1f1_wrap));
  __pyx_t_4 = ((int)((void *)chyp1f1_wrap));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2, __pyx_t_5, __pyx_t_4});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_hyp1f1_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":417
 * cdef void ** hyp2f1_data = alloc_data_from_list([ <int> <void *>hyp2f1_, <int> <void *>hyp2f1_, <int> <void *>chyp2f1_wrap, <int> <void *>chyp2f1_wrap])
 * cdef void ** hyp1f1_data = alloc_data_from_list([ <int> <void *>hyp1f1_wrap, <int> <void *>hyp1f1_wrap, <int> <void *>chyp1f1_wrap, <int> <void *>chyp1f1_wrap])
 * cdef void ** hypU_data = alloc_data_from_list([ <int> <void *>hypU_wrap, <int> <void *>hypU_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** hyp2f0_data = alloc_data_from_list([ <int> <void *>hyp2f0_, <int> <void *>hyp2f0_, ])
 * cdef void ** threef0_data = alloc_data_from_list([ <int> <void *>threef0, <int> <void *>threef0, ])
 */
  __pyx_t_3 = ((int)((void *)hypU_wrap));
  __pyx_t_4 = ((int)((void *)hypU_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_hypU_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":418
 * cdef void ** hyp1f1_data = alloc_data_from_list([ <int> <void *>hyp1f1_wrap, <int> <void *>hyp1f1_wrap, <int> <void *>chyp1f1_wrap, <int> <void *>chyp1f1_wrap])
 * cdef void ** hypU_data = alloc_data_from_list([ <int> <void *>hypU_wrap, <int> <void *>hypU_wrap, ])
 * cdef void ** hyp2f0_data = alloc_data_from_list([ <int> <void *>hyp2f0_, <int> <void *>hyp2f0_, ])             # <<<<<<<<<<<<<<
 * cdef void ** threef0_data = alloc_data_from_list([ <int> <void *>threef0, <int> <void *>threef0, ])
 * cdef void ** onef2_data = alloc_data_from_list([ <int> <void *>onef2, <int> <void *>onef2, ])
 */
  __pyx_t_5 = ((int)((void *)hyp2f0));
  __pyx_t_4 = ((int)((void *)hyp2f0));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_hyp2f0_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":419
 * cdef void ** hypU_data = alloc_data_from_list([ <int> <void *>hypU_wrap, <int> <void *>hypU_wrap, ])
 * cdef void ** hyp2f0_data = alloc_data_from_list([ <int> <void *>hyp2f0_, <int> <void *>hyp2f0_, ])
 * cdef void ** threef0_data = alloc_data_from_list([ <int> <void *>threef0, <int> <void *>threef0, ])             # <<<<<<<<<<<<<<
 * cdef void ** onef2_data = alloc_data_from_list([ <int> <void *>onef2, <int> <void *>onef2, ])
 * cdef void ** incbet_data = alloc_data_from_list([ <int> <void *>incbet, <int> <void *>incbet, ])
 */
  __pyx_t_3 = ((int)((void *)threef0));
  __pyx_t_4 = ((int)((void *)threef0));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_threef0_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":420
 * cdef void ** hyp2f0_data = alloc_data_from_list([ <int> <void *>hyp2f0_, <int> <void *>hyp2f0_, ])
 * cdef void ** threef0_data = alloc_data_from_list([ <int> <void *>threef0, <int> <void *>threef0, ])
 * cdef void ** onef2_data = alloc_data_from_list([ <int> <void *>onef2, <int> <void *>onef2, ])             # <<<<<<<<<<<<<<
 * cdef void ** incbet_data = alloc_data_from_list([ <int> <void *>incbet, <int> <void *>incbet, ])
 * cdef void ** incbi_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])
 */
  __pyx_t_5 = ((int)((void *)onef2));
  __pyx_t_4 = ((int)((void *)onef2));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_onef2_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":421
 * cdef void ** threef0_data = alloc_data_from_list([ <int> <void *>threef0, <int> <void *>threef0, ])
 * cdef void ** onef2_data = alloc_data_from_list([ <int> <void *>onef2, <int> <void *>onef2, ])
 * cdef void ** incbet_data = alloc_data_from_list([ <int> <void *>incbet, <int> <void *>incbet, ])             # <<<<<<<<<<<<<<
 * cdef void ** incbi_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])
 * cdef void ** nbdtrc_data = alloc_data_from_list([ <int> <void *>nbdtrc_, <int> <void *>nbdtrc_, ])
 */
  __pyx_t_3 = ((int)((void *)incbet));
  __pyx_t_4 = ((int)((void *)incbet));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_incbet_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":422
 * cdef void ** onef2_data = alloc_data_from_list([ <int> <void *>onef2, <int> <void *>onef2, ])
 * cdef void ** incbet_data = alloc_data_from_list([ <int> <void *>incbet, <int> <void *>incbet, ])
 * cdef void ** incbi_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])             # <<<<<<<<<<<<<<
 * cdef void ** nbdtrc_data = alloc_data_from_list([ <int> <void *>nbdtrc_, <int> <void *>nbdtrc_, ])
 * cdef void ** nbdtr_data = alloc_data_from_list([ <int> <void *>nbdtr_, <int> <void *>nbdtr_, ])
 */
  __pyx_t_5 = ((int)((void *)incbi));
  __pyx_t_4 = ((int)((void *)incbi));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_incbi_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":423
 * cdef void ** incbet_data = alloc_data_from_list([ <int> <void *>incbet, <int> <void *>incbet, ])
 * cdef void ** incbi_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])
 * cdef void ** nbdtrc_data = alloc_data_from_list([ <int> <void *>nbdtrc_, <int> <void *>nbdtrc_, ])             # <<<<<<<<<<<<<<
 * cdef void ** nbdtr_data = alloc_data_from_list([ <int> <void *>nbdtr_, <int> <void *>nbdtr_, ])
 * cdef void ** nbdtri_data = alloc_data_from_list([ <int> <void *>nbdtri_, <int> <void *>nbdtri_, ])
 */
  __pyx_t_3 = ((int)((void *)nbdtrc));
  __pyx_t_4 = ((int)((void *)nbdtrc));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_nbdtrc_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":424
 * cdef void ** incbi_data = alloc_data_from_list([ <int> <void *>incbi, <int> <void *>incbi, ])
 * cdef void ** nbdtrc_data = alloc_data_from_list([ <int> <void *>nbdtrc_, <int> <void *>nbdtrc_, ])
 * cdef void ** nbdtr_data = alloc_data_from_list([ <int> <void *>nbdtr_, <int> <void *>nbdtr_, ])             # <<<<<<<<<<<<<<
 * cdef void ** nbdtri_data = alloc_data_from_list([ <int> <void *>nbdtri_, <int> <void *>nbdtri_, ])
 * cdef void ** beta_data = alloc_data_from_list([ <int> <void *>beta_, <int> <void *>beta_, ])
 */
  __pyx_t_5 = ((int)((void *)nbdtr));
  __pyx_t_4 = ((int)((void *)nbdtr));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_nbdtr_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":425
 * cdef void ** nbdtrc_data = alloc_data_from_list([ <int> <void *>nbdtrc_, <int> <void *>nbdtrc_, ])
 * cdef void ** nbdtr_data = alloc_data_from_list([ <int> <void *>nbdtr_, <int> <void *>nbdtr_, ])
 * cdef void ** nbdtri_data = alloc_data_from_list([ <int> <void *>nbdtri_, <int> <void *>nbdtri_, ])             # <<<<<<<<<<<<<<
 * cdef void ** beta_data = alloc_data_from_list([ <int> <void *>beta_, <int> <void *>beta_, ])
 * cdef void ** lbeta_data = alloc_data_from_list([ <int> <void *>lbeta, <int> <void *>lbeta, ])
 */
  __pyx_t_3 = ((int)((void *)nbdtri));
  __pyx_t_4 = ((int)((void *)nbdtri));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_nbdtri_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":426
 * cdef void ** nbdtr_data = alloc_data_from_list([ <int> <void *>nbdtr_, <int> <void *>nbdtr_, ])
 * cdef void ** nbdtri_data = alloc_data_from_list([ <int> <void *>nbdtri_, <int> <void *>nbdtri_, ])
 * cdef void ** beta_data = alloc_data_from_list([ <int> <void *>beta_, <int> <void *>beta_, ])             # <<<<<<<<<<<<<<
 * cdef void ** lbeta_data = alloc_data_from_list([ <int> <void *>lbeta, <int> <void *>lbeta, ])
 * cdef void ** cbrt_data = alloc_data_from_list([ <int> <void *>cbrt_, <int> <void *>cbrt_, ])
 */
  __pyx_t_5 = ((int)((void *)beta));
  __pyx_t_4 = ((int)((void *)beta));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_beta_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":427
 * cdef void ** nbdtri_data = alloc_data_from_list([ <int> <void *>nbdtri_, <int> <void *>nbdtri_, ])
 * cdef void ** beta_data = alloc_data_from_list([ <int> <void *>beta_, <int> <void *>beta_, ])
 * cdef void ** lbeta_data = alloc_data_from_list([ <int> <void *>lbeta, <int> <void *>lbeta, ])             # <<<<<<<<<<<<<<
 * cdef void ** cbrt_data = alloc_data_from_list([ <int> <void *>cbrt_, <int> <void *>cbrt_, ])
 * cdef void ** chdtrc_data = alloc_data_from_list([ <int> <void *>chdtrc_, <int> <void *>chdtrc_, ])
 */
  __pyx_t_3 = ((int)((void *)lbeta));
  __pyx_t_4 = ((int)((void *)lbeta));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_lbeta_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":428
 * cdef void ** beta_data = alloc_data_from_list([ <int> <void *>beta_, <int> <void *>beta_, ])
 * cdef void ** lbeta_data = alloc_data_from_list([ <int> <void *>lbeta, <int> <void *>lbeta, ])
 * cdef void ** cbrt_data = alloc_data_from_list([ <int> <void *>cbrt_, <int> <void *>cbrt_, ])             # <<<<<<<<<<<<<<
 * cdef void ** chdtrc_data = alloc_data_from_list([ <int> <void *>chdtrc_, <int> <void *>chdtrc_, ])
 * cdef void ** chdtr_data = alloc_data_from_list([ <int> <void *>chdtr_, <int> <void *>chdtr_, ])
 */
  __pyx_t_5 = ((int)((void *)cbrt));
  __pyx_t_4 = ((int)((void *)cbrt));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cbrt_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":429
 * cdef void ** lbeta_data = alloc_data_from_list([ <int> <void *>lbeta, <int> <void *>lbeta, ])
 * cdef void ** cbrt_data = alloc_data_from_list([ <int> <void *>cbrt_, <int> <void *>cbrt_, ])
 * cdef void ** chdtrc_data = alloc_data_from_list([ <int> <void *>chdtrc_, <int> <void *>chdtrc_, ])             # <<<<<<<<<<<<<<
 * cdef void ** chdtr_data = alloc_data_from_list([ <int> <void *>chdtr_, <int> <void *>chdtr_, ])
 * cdef void ** chdtri_data = alloc_data_from_list([ <int> <void *>chdtri_, <int> <void *>chdtri_, ])
 */
  __pyx_t_3 = ((int)((void *)chdtrc));
  __pyx_t_4 = ((int)((void *)chdtrc));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_chdtrc_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":430
 * cdef void ** cbrt_data = alloc_data_from_list([ <int> <void *>cbrt_, <int> <void *>cbrt_, ])
 * cdef void ** chdtrc_data = alloc_data_from_list([ <int> <void *>chdtrc_, <int> <void *>chdtrc_, ])
 * cdef void ** chdtr_data = alloc_data_from_list([ <int> <void *>chdtr_, <int> <void *>chdtr_, ])             # <<<<<<<<<<<<<<
 * cdef void ** chdtri_data = alloc_data_from_list([ <int> <void *>chdtri_, <int> <void *>chdtri_, ])
 * cdef void ** dawsn_data = alloc_data_from_list([  <int> <void *>dawsn_, <int> <void *>dawsn_, ])
 */
  __pyx_t_5 = ((int)((void *)chdtr));
  __pyx_t_4 = ((int)((void *)chdtr));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_chdtr_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":431
 * cdef void ** chdtrc_data = alloc_data_from_list([ <int> <void *>chdtrc_, <int> <void *>chdtrc_, ])
 * cdef void ** chdtr_data = alloc_data_from_list([ <int> <void *>chdtr_, <int> <void *>chdtr_, ])
 * cdef void ** chdtri_data = alloc_data_from_list([ <int> <void *>chdtri_, <int> <void *>chdtri_, ])             # <<<<<<<<<<<<<<
 * cdef void ** dawsn_data = alloc_data_from_list([  <int> <void *>dawsn_, <int> <void *>dawsn_, ])
 * cdef void ** ellie_data = alloc_data_from_list([ <int> <void *>ellie, <int> <void *>ellie, ])
 */
  __pyx_t_3 = ((int)((void *)chdtri));
  __pyx_t_4 = ((int)((void *)chdtri));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_chdtri_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":432
 * cdef void ** chdtr_data = alloc_data_from_list([ <int> <void *>chdtr_, <int> <void *>chdtr_, ])
 * cdef void ** chdtri_data = alloc_data_from_list([ <int> <void *>chdtri_, <int> <void *>chdtri_, ])
 * cdef void ** dawsn_data = alloc_data_from_list([  <int> <void *>dawsn_, <int> <void *>dawsn_, ])             # <<<<<<<<<<<<<<
 * cdef void ** ellie_data = alloc_data_from_list([ <int> <void *>ellie, <int> <void *>ellie, ])
 * cdef void ** ellik_data = alloc_data_from_list([ <int> <void *>ellik, <int> <void *>ellik, ])
 */
  __pyx_t_5 = ((int)((void *)dawsn));
  __pyx_t_4 = ((int)((void *)dawsn));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_dawsn_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":433
 * cdef void ** chdtri_data = alloc_data_from_list([ <int> <void *>chdtri_, <int> <void *>chdtri_, ])
 * cdef void ** dawsn_data = alloc_data_from_list([  <int> <void *>dawsn_, <int> <void *>dawsn_, ])
 * cdef void ** ellie_data = alloc_data_from_list([ <int> <void *>ellie, <int> <void *>ellie, ])             # <<<<<<<<<<<<<<
 * cdef void ** ellik_data = alloc_data_from_list([ <int> <void *>ellik, <int> <void *>ellik, ])
 * cdef void ** ellpe_data = alloc_data_from_list([ <int> <void *>ellpe, <int> <void *>ellpe, ])
 */
  __pyx_t_3 = ((int)((void *)ellie));
  __pyx_t_4 = ((int)((void *)ellie));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_ellie_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":434
 * cdef void ** dawsn_data = alloc_data_from_list([  <int> <void *>dawsn_, <int> <void *>dawsn_, ])
 * cdef void ** ellie_data = alloc_data_from_list([ <int> <void *>ellie, <int> <void *>ellie, ])
 * cdef void ** ellik_data = alloc_data_from_list([ <int> <void *>ellik, <int> <void *>ellik, ])             # <<<<<<<<<<<<<<
 * cdef void ** ellpe_data = alloc_data_from_list([ <int> <void *>ellpe, <int> <void *>ellpe, ])
 * cdef void ** ellpk_data = alloc_data_from_list([ <int> <void *>ellpk, <int> <void *>ellpk, ])
 */
  __pyx_t_5 = ((int)((void *)ellik));
  __pyx_t_4 = ((int)((void *)ellik));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_ellik_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":435
 * cdef void ** ellie_data = alloc_data_from_list([ <int> <void *>ellie, <int> <void *>ellie, ])
 * cdef void ** ellik_data = alloc_data_from_list([ <int> <void *>ellik, <int> <void *>ellik, ])
 * cdef void ** ellpe_data = alloc_data_from_list([ <int> <void *>ellpe, <int> <void *>ellpe, ])             # <<<<<<<<<<<<<<
 * cdef void ** ellpk_data = alloc_data_from_list([ <int> <void *>ellpk, <int> <void *>ellpk, ])
 * cdef void ** exp10_data = alloc_data_from_list([ <int> <void *>exp10_, <int> <void *>exp10_, ])
 */
  __pyx_t_3 = ((int)((void *)ellpe));
  __pyx_t_4 = ((int)((void *)ellpe));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_ellpe_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":436
 * cdef void ** ellik_data = alloc_data_from_list([ <int> <void *>ellik, <int> <void *>ellik, ])
 * cdef void ** ellpe_data = alloc_data_from_list([ <int> <void *>ellpe, <int> <void *>ellpe, ])
 * cdef void ** ellpk_data = alloc_data_from_list([ <int> <void *>ellpk, <int> <void *>ellpk, ])             # <<<<<<<<<<<<<<
 * cdef void ** exp10_data = alloc_data_from_list([ <int> <void *>exp10_, <int> <void *>exp10_, ])
 * cdef void ** exp2_data = alloc_data_from_list([ <int> <void *>exp2_, <int> <void *>exp2_, ])
 */
  __pyx_t_5 = ((int)((void *)ellpk));
  __pyx_t_4 = ((int)((void *)ellpk));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_ellpk_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":437
 * cdef void ** ellpe_data = alloc_data_from_list([ <int> <void *>ellpe, <int> <void *>ellpe, ])
 * cdef void ** ellpk_data = alloc_data_from_list([ <int> <void *>ellpk, <int> <void *>ellpk, ])
 * cdef void ** exp10_data = alloc_data_from_list([ <int> <void *>exp10_, <int> <void *>exp10_, ])             # <<<<<<<<<<<<<<
 * cdef void ** exp2_data = alloc_data_from_list([ <int> <void *>exp2_, <int> <void *>exp2_, ])
 * cdef void ** Gamma_data = alloc_data_from_list([ <int> <void *>Gamma, <int> <void *>Gamma, <int> <void *>cgamma_wrap, <int> <void *>cgamma_wrap])
 */
  __pyx_t_3 = ((int)((void *)exp10));
  __pyx_t_4 = ((int)((void *)exp10));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_exp10_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":438
 * cdef void ** ellpk_data = alloc_data_from_list([ <int> <void *>ellpk, <int> <void *>ellpk, ])
 * cdef void ** exp10_data = alloc_data_from_list([ <int> <void *>exp10_, <int> <void *>exp10_, ])
 * cdef void ** exp2_data = alloc_data_from_list([ <int> <void *>exp2_, <int> <void *>exp2_, ])             # <<<<<<<<<<<<<<
 * cdef void ** Gamma_data = alloc_data_from_list([ <int> <void *>Gamma, <int> <void *>Gamma, <int> <void *>cgamma_wrap, <int> <void *>cgamma_wrap])
 * cdef void ** lgam_data = alloc_data_from_list([ <int> <void *>lgam, <int> <void *>lgam, <int> <void *>clngamma_wrap, <int> <void *>clngamma_wrap])
 */
  __pyx_t_5 = ((int)((void *)exp2));
  __pyx_t_4 = ((int)((void *)exp2));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_exp2_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":439
 * cdef void ** exp10_data = alloc_data_from_list([ <int> <void *>exp10_, <int> <void *>exp10_, ])
 * cdef void ** exp2_data = alloc_data_from_list([ <int> <void *>exp2_, <int> <void *>exp2_, ])
 * cdef void ** Gamma_data = alloc_data_from_list([ <int> <void *>Gamma, <int> <void *>Gamma, <int> <void *>cgamma_wrap, <int> <void *>cgamma_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** lgam_data = alloc_data_from_list([ <int> <void *>lgam, <int> <void *>lgam, <int> <void *>clngamma_wrap, <int> <void *>clngamma_wrap])
 * cdef void ** i0_data = alloc_data_from_list([ <int> <void *>i0_, <int> <void *>i0_, ])
 */
  __pyx_t_3 = ((int)((void *)Gamma));
  __pyx_t_4 = ((int)((void *)Gamma));
  __pyx_t_5 = ((int)((void *)cgamma_wrap));
  __pyx_t_2 = ((int)((void *)cgamma_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4, __pyx_t_5, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_Gamma_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":440
 * cdef void ** exp2_data = alloc_data_from_list([ <int> <void *>exp2_, <int> <void *>exp2_, ])
 * cdef void ** Gamma_data = alloc_data_from_list([ <int> <void *>Gamma, <int> <void *>Gamma, <int> <void *>cgamma_wrap, <int> <void *>cgamma_wrap])
 * cdef void ** lgam_data = alloc_data_from_list([ <int> <void *>lgam, <int> <void *>lgam, <int> <void *>clngamma_wrap, <int> <void *>clngamma_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** i0_data = alloc_data_from_list([ <int> <void *>i0_, <int> <void *>i0_, ])
 * cdef void ** i0e_data = alloc_data_from_list([ <int> <void *>i0e_, <int> <void *>i0e_, ])
 */
  __pyx_t_1 = ((int)((void *)lgam));
  __pyx_t_2 = ((int)((void *)lgam));
  __pyx_t_5 = ((int)((void *)clngamma_wrap));
  __pyx_t_4 = ((int)((void *)clngamma_wrap));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2, __pyx_t_5, __pyx_t_4});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_lgam_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":441
 * cdef void ** Gamma_data = alloc_data_from_list([ <int> <void *>Gamma, <int> <void *>Gamma, <int> <void *>cgamma_wrap, <int> <void *>cgamma_wrap])
 * cdef void ** lgam_data = alloc_data_from_list([ <int> <void *>lgam, <int> <void *>lgam, <int> <void *>clngamma_wrap, <int> <void *>clngamma_wrap])
 * cdef void ** i0_data = alloc_data_from_list([ <int> <void *>i0_, <int> <void *>i0_, ])             # <<<<<<<<<<<<<<
 * cdef void ** i0e_data = alloc_data_from_list([ <int> <void *>i0e_, <int> <void *>i0e_, ])
 * cdef void ** i1_data = alloc_data_from_list([ <int> <void *>i1_, <int> <void *>i1_, ])
 */
  __pyx_t_3 = ((int)((void *)i0));
  __pyx_t_4 = ((int)((void *)i0));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_i0_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":442
 * cdef void ** lgam_data = alloc_data_from_list([ <int> <void *>lgam, <int> <void *>lgam, <int> <void *>clngamma_wrap, <int> <void *>clngamma_wrap])
 * cdef void ** i0_data = alloc_data_from_list([ <int> <void *>i0_, <int> <void *>i0_, ])
 * cdef void ** i0e_data = alloc_data_from_list([ <int> <void *>i0e_, <int> <void *>i0e_, ])             # <<<<<<<<<<<<<<
 * cdef void ** i1_data = alloc_data_from_list([ <int> <void *>i1_, <int> <void *>i1_, ])
 * cdef void ** i1e_data = alloc_data_from_list([ <int> <void *>i1e_, <int> <void *>i1e_, ])
 */
  __pyx_t_5 = ((int)((void *)i0e));
  __pyx_t_4 = ((int)((void *)i0e));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_i0e_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":443
 * cdef void ** i0_data = alloc_data_from_list([ <int> <void *>i0_, <int> <void *>i0_, ])
 * cdef void ** i0e_data = alloc_data_from_list([ <int> <void *>i0e_, <int> <void *>i0e_, ])
 * cdef void ** i1_data = alloc_data_from_list([ <int> <void *>i1_, <int> <void *>i1_, ])             # <<<<<<<<<<<<<<
 * cdef void ** i1e_data = alloc_data_from_list([ <int> <void *>i1e_, <int> <void *>i1e_, ])
 * cdef void ** igamc_data = alloc_data_from_list([ <int> <void *>igamc, <int> <void *>igamc, ])
 */
  __pyx_t_3 = ((int)((void *)i1));
  __pyx_t_4 = ((int)((void *)i1));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_i1_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":444
 * cdef void ** i0e_data = alloc_data_from_list([ <int> <void *>i0e_, <int> <void *>i0e_, ])
 * cdef void ** i1_data = alloc_data_from_list([ <int> <void *>i1_, <int> <void *>i1_, ])
 * cdef void ** i1e_data = alloc_data_from_list([ <int> <void *>i1e_, <int> <void *>i1e_, ])             # <<<<<<<<<<<<<<
 * cdef void ** igamc_data = alloc_data_from_list([ <int> <void *>igamc, <int> <void *>igamc, ])
 * cdef void ** igam_data = alloc_data_from_list([ <int> <void *>igam, <int> <void *>igam, ])
 */
  __pyx_t_5 = ((int)((void *)i1e));
  __pyx_t_4 = ((int)((void *)i1e));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_i1e_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":445
 * cdef void ** i1_data = alloc_data_from_list([ <int> <void *>i1_, <int> <void *>i1_, ])
 * cdef void ** i1e_data = alloc_data_from_list([ <int> <void *>i1e_, <int> <void *>i1e_, ])
 * cdef void ** igamc_data = alloc_data_from_list([ <int> <void *>igamc, <int> <void *>igamc, ])             # <<<<<<<<<<<<<<
 * cdef void ** igam_data = alloc_data_from_list([ <int> <void *>igam, <int> <void *>igam, ])
 * cdef void ** igami_data = alloc_data_from_list([ <int> <void *>igami, <int> <void *>igami, ])
 */
  __pyx_t_3 = ((int)((void *)igamc));
  __pyx_t_4 = ((int)((void *)igamc));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_igamc_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":446
 * cdef void ** i1e_data = alloc_data_from_list([ <int> <void *>i1e_, <int> <void *>i1e_, ])
 * cdef void ** igamc_data = alloc_data_from_list([ <int> <void *>igamc, <int> <void *>igamc, ])
 * cdef void ** igam_data = alloc_data_from_list([ <int> <void *>igam, <int> <void *>igam, ])             # <<<<<<<<<<<<<<
 * cdef void ** igami_data = alloc_data_from_list([ <int> <void *>igami, <int> <void *>igami, ])
 * cdef void ** gammaincinv_data = alloc_data_from_list([ <int> <void *>gammaincinv_, <int> <void *>gammaincinv_, ])
 */
  __pyx_t_5 = ((int)((void *)igam));
  __pyx_t_4 = ((int)((void *)igam));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_igam_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":447
 * cdef void ** igamc_data = alloc_data_from_list([ <int> <void *>igamc, <int> <void *>igamc, ])
 * cdef void ** igam_data = alloc_data_from_list([ <int> <void *>igam, <int> <void *>igam, ])
 * cdef void ** igami_data = alloc_data_from_list([ <int> <void *>igami, <int> <void *>igami, ])             # <<<<<<<<<<<<<<
 * cdef void ** gammaincinv_data = alloc_data_from_list([ <int> <void *>gammaincinv_, <int> <void *>gammaincinv_, ])
 * cdef void ** iv_data = alloc_data_from_list([ <int> <void *>iv_, <int> <void *>iv_, <int> <void *>cbesi_wrap, <int> <void *>cbesi_wrap,])
 */
  __pyx_t_3 = ((int)((void *)igami));
  __pyx_t_4 = ((int)((void *)igami));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_igami_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":448
 * cdef void ** igam_data = alloc_data_from_list([ <int> <void *>igam, <int> <void *>igam, ])
 * cdef void ** igami_data = alloc_data_from_list([ <int> <void *>igami, <int> <void *>igami, ])
 * cdef void ** gammaincinv_data = alloc_data_from_list([ <int> <void *>gammaincinv_, <int> <void *>gammaincinv_, ])             # <<<<<<<<<<<<<<
 * cdef void ** iv_data = alloc_data_from_list([ <int> <void *>iv_, <int> <void *>iv_, <int> <void *>cbesi_wrap, <int> <void *>cbesi_wrap,])
 * cdef void ** ive_data = alloc_data_from_list([ <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e, <int> <void *>cbesi_wrap_e, ])
 */
  __pyx_t_5 = ((int)((void *)gammaincinv));
  __pyx_t_4 = ((int)((void *)gammaincinv));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_gammaincinv_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":449
 * cdef void ** igami_data = alloc_data_from_list([ <int> <void *>igami, <int> <void *>igami, ])
 * cdef void ** gammaincinv_data = alloc_data_from_list([ <int> <void *>gammaincinv_, <int> <void *>gammaincinv_, ])
 * cdef void ** iv_data = alloc_data_from_list([ <int> <void *>iv_, <int> <void *>iv_, <int> <void *>cbesi_wrap, <int> <void *>cbesi_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** ive_data = alloc_data_from_list([ <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e, <int> <void *>cbesi_wrap_e, ])
 * cdef void ** j0_data = alloc_data_from_list([ <int> <void *>j0_,  <int> <void *>j0_,  ])
 */
  __pyx_t_3 = ((int)((void *)iv));
  __pyx_t_4 = ((int)((void *)iv));
  __pyx_t_5 = ((int)((void *)cbesi_wrap));
  __pyx_t_2 = ((int)((void *)cbesi_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4, __pyx_t_5, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_iv_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":450
 * cdef void ** gammaincinv_data = alloc_data_from_list([ <int> <void *>gammaincinv_, <int> <void *>gammaincinv_, ])
 * cdef void ** iv_data = alloc_data_from_list([ <int> <void *>iv_, <int> <void *>iv_, <int> <void *>cbesi_wrap, <int> <void *>cbesi_wrap,])
 * cdef void ** ive_data = alloc_data_from_list([ <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e, <int> <void *>cbesi_wrap_e, ])             # <<<<<<<<<<<<<<
 * cdef void ** j0_data = alloc_data_from_list([ <int> <void *>j0_,  <int> <void *>j0_,  ])
 * cdef void ** y0_data = alloc_data_from_list([ <int> <void *>y0_, <int> <void *>y0_, ])
 */
  __pyx_t_1 = ((int)((void *)cbesi_wrap_e_real));
  __pyx_t_2 = ((int)((void *)cbesi_wrap_e_real));
  __pyx_t_5 = ((int)((void *)cbesi_wrap_e));
  __pyx_t_4 = ((int)((void *)cbesi_wrap_e));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2, __pyx_t_5, __pyx_t_4});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_ive_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":451
 * cdef void ** iv_data = alloc_data_from_list([ <int> <void *>iv_, <int> <void *>iv_, <int> <void *>cbesi_wrap, <int> <void *>cbesi_wrap,])
 * cdef void ** ive_data = alloc_data_from_list([ <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e, <int> <void *>cbesi_wrap_e, ])
 * cdef void ** j0_data = alloc_data_from_list([ <int> <void *>j0_,  <int> <void *>j0_,  ])             # <<<<<<<<<<<<<<
 * cdef void ** y0_data = alloc_data_from_list([ <int> <void *>y0_, <int> <void *>y0_, ])
 * cdef void ** j1_data = alloc_data_from_list([ <int> <void *>j1_,  <int> <void *>j1_,  ])
 */
  __pyx_t_3 = ((int)((void *)j0));
  __pyx_t_4 = ((int)((void *)j0));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_j0_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":452
 * cdef void ** ive_data = alloc_data_from_list([ <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e_real, <int> <void *>cbesi_wrap_e, <int> <void *>cbesi_wrap_e, ])
 * cdef void ** j0_data = alloc_data_from_list([ <int> <void *>j0_,  <int> <void *>j0_,  ])
 * cdef void ** y0_data = alloc_data_from_list([ <int> <void *>y0_, <int> <void *>y0_, ])             # <<<<<<<<<<<<<<
 * cdef void ** j1_data = alloc_data_from_list([ <int> <void *>j1_,  <int> <void *>j1_,  ])
 * cdef void ** y1_data = alloc_data_from_list([ <int> <void *>y1_, <int> <void *>y1_, ])
 */
  __pyx_t_5 = ((int)((void *)y0));
  __pyx_t_4 = ((int)((void *)y0));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_y0_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":453
 * cdef void ** j0_data = alloc_data_from_list([ <int> <void *>j0_,  <int> <void *>j0_,  ])
 * cdef void ** y0_data = alloc_data_from_list([ <int> <void *>y0_, <int> <void *>y0_, ])
 * cdef void ** j1_data = alloc_data_from_list([ <int> <void *>j1_,  <int> <void *>j1_,  ])             # <<<<<<<<<<<<<<
 * cdef void ** y1_data = alloc_data_from_list([ <int> <void *>y1_, <int> <void *>y1_, ])
 * cdef void ** jv_data = alloc_data_from_list([ <int> <void *>jv_, <int> <void *>jv_, <int> <void *>cbesj_wrap, <int> <void *>cbesj_wrap,])
 */
  __pyx_t_3 = ((int)((void *)j1));
  __pyx_t_4 = ((int)((void *)j1));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_j1_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":454
 * cdef void ** y0_data = alloc_data_from_list([ <int> <void *>y0_, <int> <void *>y0_, ])
 * cdef void ** j1_data = alloc_data_from_list([ <int> <void *>j1_,  <int> <void *>j1_,  ])
 * cdef void ** y1_data = alloc_data_from_list([ <int> <void *>y1_, <int> <void *>y1_, ])             # <<<<<<<<<<<<<<
 * cdef void ** jv_data = alloc_data_from_list([ <int> <void *>jv_, <int> <void *>jv_, <int> <void *>cbesj_wrap, <int> <void *>cbesj_wrap,])
 * cdef void ** jve_data = alloc_data_from_list([ <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e, <int> <void *>cbesj_wrap_e, ])
 */
  __pyx_t_5 = ((int)((void *)y1));
  __pyx_t_4 = ((int)((void *)y1));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_y1_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":455
 * cdef void ** j1_data = alloc_data_from_list([ <int> <void *>j1_,  <int> <void *>j1_,  ])
 * cdef void ** y1_data = alloc_data_from_list([ <int> <void *>y1_, <int> <void *>y1_, ])
 * cdef void ** jv_data = alloc_data_from_list([ <int> <void *>jv_, <int> <void *>jv_, <int> <void *>cbesj_wrap, <int> <void *>cbesj_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** jve_data = alloc_data_from_list([ <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e, <int> <void *>cbesj_wrap_e, ])
 * cdef void ** yv_data = alloc_data_from_list([ <int> <void *>yv_, <int> <void *>yv_, <int> <void *>cbesy_wrap, <int> <void *>cbesy_wrap,])
 */
  __pyx_t_3 = ((int)((void *)jv));
  __pyx_t_4 = ((int)((void *)jv));
  __pyx_t_5 = ((int)((void *)cbesj_wrap));
  __pyx_t_2 = ((int)((void *)cbesj_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4, __pyx_t_5, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_jv_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":456
 * cdef void ** y1_data = alloc_data_from_list([ <int> <void *>y1_, <int> <void *>y1_, ])
 * cdef void ** jv_data = alloc_data_from_list([ <int> <void *>jv_, <int> <void *>jv_, <int> <void *>cbesj_wrap, <int> <void *>cbesj_wrap,])
 * cdef void ** jve_data = alloc_data_from_list([ <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e, <int> <void *>cbesj_wrap_e, ])             # <<<<<<<<<<<<<<
 * cdef void ** yv_data = alloc_data_from_list([ <int> <void *>yv_, <int> <void *>yv_, <int> <void *>cbesy_wrap, <int> <void *>cbesy_wrap,])
 * cdef void ** yve_data = alloc_data_from_list([ <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e, <int> <void *>cbesy_wrap_e, ])
 */
  __pyx_t_1 = ((int)((void *)cbesj_wrap_e_real));
  __pyx_t_2 = ((int)((void *)cbesj_wrap_e_real));
  __pyx_t_5 = ((int)((void *)cbesj_wrap_e));
  __pyx_t_4 = ((int)((void *)cbesj_wrap_e));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2, __pyx_t_5, __pyx_t_4});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_jve_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":457
 * cdef void ** jv_data = alloc_data_from_list([ <int> <void *>jv_, <int> <void *>jv_, <int> <void *>cbesj_wrap, <int> <void *>cbesj_wrap,])
 * cdef void ** jve_data = alloc_data_from_list([ <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e, <int> <void *>cbesj_wrap_e, ])
 * cdef void ** yv_data = alloc_data_from_list([ <int> <void *>yv_, <int> <void *>yv_, <int> <void *>cbesy_wrap, <int> <void *>cbesy_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** yve_data = alloc_data_from_list([ <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e, <int> <void *>cbesy_wrap_e, ])
 * cdef void ** k0_data = alloc_data_from_list([ <int> <void *>k0_, <int> <void *>k0_, ])
 */
  __pyx_t_3 = ((int)((void *)yv));
  __pyx_t_4 = ((int)((void *)yv));
  __pyx_t_5 = ((int)((void *)cbesy_wrap));
  __pyx_t_2 = ((int)((void *)cbesy_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4, __pyx_t_5, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_yv_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":458
 * cdef void ** jve_data = alloc_data_from_list([ <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e_real, <int> <void *>cbesj_wrap_e, <int> <void *>cbesj_wrap_e, ])
 * cdef void ** yv_data = alloc_data_from_list([ <int> <void *>yv_, <int> <void *>yv_, <int> <void *>cbesy_wrap, <int> <void *>cbesy_wrap,])
 * cdef void ** yve_data = alloc_data_from_list([ <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e, <int> <void *>cbesy_wrap_e, ])             # <<<<<<<<<<<<<<
 * cdef void ** k0_data = alloc_data_from_list([ <int> <void *>k0_, <int> <void *>k0_, ])
 * cdef void ** k0e_data = alloc_data_from_list([ <int> <void *>k0e_, <int> <void *>k0e_, ])
 */
  __pyx_t_1 = ((int)((void *)cbesy_wrap_e_real));
  __pyx_t_2 = ((int)((void *)cbesy_wrap_e_real));
  __pyx_t_5 = ((int)((void *)cbesy_wrap_e));
  __pyx_t_4 = ((int)((void *)cbesy_wrap_e));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2, __pyx_t_5, __pyx_t_4});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_yve_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":459
 * cdef void ** yv_data = alloc_data_from_list([ <int> <void *>yv_, <int> <void *>yv_, <int> <void *>cbesy_wrap, <int> <void *>cbesy_wrap,])
 * cdef void ** yve_data = alloc_data_from_list([ <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e, <int> <void *>cbesy_wrap_e, ])
 * cdef void ** k0_data = alloc_data_from_list([ <int> <void *>k0_, <int> <void *>k0_, ])             # <<<<<<<<<<<<<<
 * cdef void ** k0e_data = alloc_data_from_list([ <int> <void *>k0e_, <int> <void *>k0e_, ])
 * cdef void ** k1_data = alloc_data_from_list([ <int> <void *>k1_, <int> <void *>k1_, ])
 */
  __pyx_t_3 = ((int)((void *)k0));
  __pyx_t_4 = ((int)((void *)k0));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_k0_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":460
 * cdef void ** yve_data = alloc_data_from_list([ <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e_real, <int> <void *>cbesy_wrap_e, <int> <void *>cbesy_wrap_e, ])
 * cdef void ** k0_data = alloc_data_from_list([ <int> <void *>k0_, <int> <void *>k0_, ])
 * cdef void ** k0e_data = alloc_data_from_list([ <int> <void *>k0e_, <int> <void *>k0e_, ])             # <<<<<<<<<<<<<<
 * cdef void ** k1_data = alloc_data_from_list([ <int> <void *>k1_, <int> <void *>k1_, ])
 * cdef void ** k1e_data = alloc_data_from_list([ <int> <void *>k1e_, <int> <void *>k1e_, ])
 */
  __pyx_t_5 = ((int)((void *)k0e));
  __pyx_t_4 = ((int)((void *)k0e));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_k0e_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":461
 * cdef void ** k0_data = alloc_data_from_list([ <int> <void *>k0_, <int> <void *>k0_, ])
 * cdef void ** k0e_data = alloc_data_from_list([ <int> <void *>k0e_, <int> <void *>k0e_, ])
 * cdef void ** k1_data = alloc_data_from_list([ <int> <void *>k1_, <int> <void *>k1_, ])             # <<<<<<<<<<<<<<
 * cdef void ** k1e_data = alloc_data_from_list([ <int> <void *>k1e_, <int> <void *>k1e_, ])
 * cdef void ** kv_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap, <int> <void *>cbesk_wrap,])
 */
  __pyx_t_3 = ((int)((void *)k1));
  __pyx_t_4 = ((int)((void *)k1));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_k1_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":462
 * cdef void ** k0e_data = alloc_data_from_list([ <int> <void *>k0e_, <int> <void *>k0e_, ])
 * cdef void ** k1_data = alloc_data_from_list([ <int> <void *>k1_, <int> <void *>k1_, ])
 * cdef void ** k1e_data = alloc_data_from_list([ <int> <void *>k1e_, <int> <void *>k1e_, ])             # <<<<<<<<<<<<<<
 * cdef void ** kv_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap, <int> <void *>cbesk_wrap,])
 * cdef void ** kve_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e, <int> <void *>cbesk_wrap_e,])
 */
  __pyx_t_5 = ((int)((void *)k1e));
  __pyx_t_4 = ((int)((void *)k1e));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_k1e_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":463
 * cdef void ** k1_data = alloc_data_from_list([ <int> <void *>k1_, <int> <void *>k1_, ])
 * cdef void ** k1e_data = alloc_data_from_list([ <int> <void *>k1e_, <int> <void *>k1e_, ])
 * cdef void ** kv_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap, <int> <void *>cbesk_wrap,])             # <<<<<<<<<<<<<<
 * cdef void ** kve_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e, <int> <void *>cbesk_wrap_e,])
 * cdef void ** hankel1_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1, <int> <void *>cbesh_wrap1,])
 */
  __pyx_t_3 = ((int)((void *)cbesk_wrap_real));
  __pyx_t_4 = ((int)((void *)cbesk_wrap_real));
  __pyx_t_5 = ((int)((void *)cbesk_wrap));
  __pyx_t_2 = ((int)((void *)cbesk_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4, __pyx_t_5, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_kv_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":464
 * cdef void ** k1e_data = alloc_data_from_list([ <int> <void *>k1e_, <int> <void *>k1e_, ])
 * cdef void ** kv_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap, <int> <void *>cbesk_wrap,])
 * cdef void ** kve_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e, <int> <void *>cbesk_wrap_e,])             # <<<<<<<<<<<<<<
 * cdef void ** hankel1_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1, <int> <void *>cbesh_wrap1,])
 * cdef void ** hankel1e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1_e, <int> <void *>cbesh_wrap1_e,])
 */
  __pyx_t_1 = ((int)((void *)cbesk_wrap_e_real));
  __pyx_t_2 = ((int)((void *)cbesk_wrap_e_real));
  __pyx_t_5 = ((int)((void *)cbesk_wrap_e));
  __pyx_t_4 = ((int)((void *)cbesk_wrap_e));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2, __pyx_t_5, __pyx_t_4});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_kve_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":465
 * cdef void ** kv_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap_real, <int> <void *>cbesk_wrap, <int> <void *>cbesk_wrap,])
 * cdef void ** kve_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e, <int> <void *>cbesk_wrap_e,])
 * cdef void ** hankel1_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1, <int> <void *>cbesh_wrap1,])             # <<<<<<<<<<<<<<
 * cdef void ** hankel1e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1_e, <int> <void *>cbesh_wrap1_e,])
 * cdef void ** hankel2_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2, <int> <void *>cbesh_wrap2,])
 */
  __pyx_t_3 = ((int)((void *)cbesh_wrap1));
  __pyx_t_4 = ((int)((void *)cbesh_wrap1));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_hankel1_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":466
 * cdef void ** kve_data = alloc_data_from_list([ <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e_real, <int> <void *>cbesk_wrap_e, <int> <void *>cbesk_wrap_e,])
 * cdef void ** hankel1_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1, <int> <void *>cbesh_wrap1,])
 * cdef void ** hankel1e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1_e, <int> <void *>cbesh_wrap1_e,])             # <<<<<<<<<<<<<<
 * cdef void ** hankel2_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2, <int> <void *>cbesh_wrap2,])
 * cdef void ** hankel2e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2_e, <int> <void *>cbesh_wrap2_e,])
 */
  __pyx_t_5 = ((int)((void *)cbesh_wrap1_e));
  __pyx_t_4 = ((int)((void *)cbesh_wrap1_e));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_hankel1e_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":467
 * cdef void ** hankel1_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1, <int> <void *>cbesh_wrap1,])
 * cdef void ** hankel1e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1_e, <int> <void *>cbesh_wrap1_e,])
 * cdef void ** hankel2_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2, <int> <void *>cbesh_wrap2,])             # <<<<<<<<<<<<<<
 * cdef void ** hankel2e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2_e, <int> <void *>cbesh_wrap2_e,])
 * cdef void ** ndtr_data = alloc_data_from_list([ <int> <void *>ndtr_, <int> <void *>ndtr_, ])
 */
  __pyx_t_3 = ((int)((void *)cbesh_wrap2));
  __pyx_t_4 = ((int)((void *)cbesh_wrap2));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_hankel2_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":468
 * cdef void ** hankel1e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap1_e, <int> <void *>cbesh_wrap1_e,])
 * cdef void ** hankel2_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2, <int> <void *>cbesh_wrap2,])
 * cdef void ** hankel2e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2_e, <int> <void *>cbesh_wrap2_e,])             # <<<<<<<<<<<<<<
 * cdef void ** ndtr_data = alloc_data_from_list([ <int> <void *>ndtr_, <int> <void *>ndtr_, ])
 * cdef void ** erfc_data = alloc_data_from_list([ <int> <void *>erfc_, <int> <void *>erfc_, ])
 */
  __pyx_t_5 = ((int)((void *)cbesh_wrap2_e));
  __pyx_t_4 = ((int)((void *)cbesh_wrap2_e));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_hankel2e_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":469
 * cdef void ** hankel2_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2, <int> <void *>cbesh_wrap2,])
 * cdef void ** hankel2e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2_e, <int> <void *>cbesh_wrap2_e,])
 * cdef void ** ndtr_data = alloc_data_from_list([ <int> <void *>ndtr_, <int> <void *>ndtr_, ])             # <<<<<<<<<<<<<<
 * cdef void ** erfc_data = alloc_data_from_list([ <int> <void *>erfc_, <int> <void *>erfc_, ])
 * cdef void ** erf_data = alloc_data_from_list([ <int> <void *>erf_, <int> <void *>erf_, <int> <void *>cerf_wrap, <int> <void *>cerf_wrap])
 */
  __pyx_t_3 = ((int)((void *)ndtr));
  __pyx_t_4 = ((int)((void *)ndtr));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_ndtr_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":470
 * cdef void ** hankel2e_data = alloc_data_from_list([ <int> <void *>cbesh_wrap2_e, <int> <void *>cbesh_wrap2_e,])
 * cdef void ** ndtr_data = alloc_data_from_list([ <int> <void *>ndtr_, <int> <void *>ndtr_, ])
 * cdef void ** erfc_data = alloc_data_from_list([ <int> <void *>erfc_, <int> <void *>erfc_, ])             # <<<<<<<<<<<<<<
 * cdef void ** erf_data = alloc_data_from_list([ <int> <void *>erf_, <int> <void *>erf_, <int> <void *>cerf_wrap, <int> <void *>cerf_wrap])
 * cdef void ** ndtri_data = alloc_data_from_list([ <int> <void *>ndtri_, <int> <void *>ndtri_, ])
 */
  __pyx_t_5 = ((int)((void *)erfc));
  __pyx_t_4 = ((int)((void *)erfc));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_erfc_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":471
 * cdef void ** ndtr_data = alloc_data_from_list([ <int> <void *>ndtr_, <int> <void *>ndtr_, ])
 * cdef void ** erfc_data = alloc_data_from_list([ <int> <void *>erfc_, <int> <void *>erfc_, ])
 * cdef void ** erf_data = alloc_data_from_list([ <int> <void *>erf_, <int> <void *>erf_, <int> <void *>cerf_wrap, <int> <void *>cerf_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** ndtri_data = alloc_data_from_list([ <int> <void *>ndtri_, <int> <void *>ndtri_, ])
 * cdef void ** psi_data = alloc_data_from_list([ <int> <void *>psi_, <int> <void *>psi_, <int> <void *>cpsi_wrap, <int> <void *>cpsi_wrap])
 */
  __pyx_t_3 = ((int)((void *)erf));
  __pyx_t_4 = ((int)((void *)erf));
  __pyx_t_5 = ((int)((void *)cerf_wrap));
  __pyx_t_2 = ((int)((void *)cerf_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4, __pyx_t_5, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_erf_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":472
 * cdef void ** erfc_data = alloc_data_from_list([ <int> <void *>erfc_, <int> <void *>erfc_, ])
 * cdef void ** erf_data = alloc_data_from_list([ <int> <void *>erf_, <int> <void *>erf_, <int> <void *>cerf_wrap, <int> <void *>cerf_wrap])
 * cdef void ** ndtri_data = alloc_data_from_list([ <int> <void *>ndtri_, <int> <void *>ndtri_, ])             # <<<<<<<<<<<<<<
 * cdef void ** psi_data = alloc_data_from_list([ <int> <void *>psi_, <int> <void *>psi_, <int> <void *>cpsi_wrap, <int> <void *>cpsi_wrap])
 * cdef void ** rgamma_data = alloc_data_from_list([ <int> <void *>rgamma_, <int> <void *>rgamma_, <int> <void *>crgamma_wrap, <int> <void *>crgamma_wrap])
 */
  __pyx_t_1 = ((int)((void *)ndtri));
  __pyx_t_2 = ((int)((void *)ndtri));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_ndtri_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":473
 * cdef void ** erf_data = alloc_data_from_list([ <int> <void *>erf_, <int> <void *>erf_, <int> <void *>cerf_wrap, <int> <void *>cerf_wrap])
 * cdef void ** ndtri_data = alloc_data_from_list([ <int> <void *>ndtri_, <int> <void *>ndtri_, ])
 * cdef void ** psi_data = alloc_data_from_list([ <int> <void *>psi_, <int> <void *>psi_, <int> <void *>cpsi_wrap, <int> <void *>cpsi_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** rgamma_data = alloc_data_from_list([ <int> <void *>rgamma_, <int> <void *>rgamma_, <int> <void *>crgamma_wrap, <int> <void *>crgamma_wrap])
 * cdef void ** round_data = alloc_data_from_list([ <int> <void *>round_, <int> <void *>round_, ])
 */
  __pyx_t_5 = ((int)((void *)psi));
  __pyx_t_2 = ((int)((void *)psi));
  __pyx_t_1 = ((int)((void *)cpsi_wrap));
  __pyx_t_4 = ((int)((void *)cpsi_wrap));
  __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2, __pyx_t_1, __pyx_t_4});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_psi_data = alloc_data_from_list(((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":474
 * cdef void ** ndtri_data = alloc_data_from_list([ <int> <void *>ndtri_, <int> <void *>ndtri_, ])
 * cdef void ** psi_data = alloc_data_from_list([ <int> <void *>psi_, <int> <void *>psi_, <int> <void *>cpsi_wrap, <int> <void *>cpsi_wrap])
 * cdef void ** rgamma_data = alloc_data_from_list([ <int> <void *>rgamma_, <int> <void *>rgamma_, <int> <void *>crgamma_wrap, <int> <void *>crgamma_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** round_data = alloc_data_from_list([ <int> <void *>round_, <int> <void *>round_, ])
 * cdef void ** sindg_data = alloc_data_from_list([ <int> <void *>sindg_, <int> <void *>sindg_, ])
 */
  __pyx_t_3 = ((int)((void *)rgamma));
  __pyx_t_4 = ((int)((void *)rgamma));
  __pyx_t_1 = ((int)((void *)crgamma_wrap));
  __pyx_t_2 = ((int)((void *)crgamma_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_4, __pyx_t_1, __pyx_t_2});
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_rgamma_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":475
 * cdef void ** psi_data = alloc_data_from_list([ <int> <void *>psi_, <int> <void *>psi_, <int> <void *>cpsi_wrap, <int> <void *>cpsi_wrap])
 * cdef void ** rgamma_data = alloc_data_from_list([ <int> <void *>rgamma_, <int> <void *>rgamma_, <int> <void *>crgamma_wrap, <int> <void *>crgamma_wrap])
 * cdef void ** round_data = alloc_data_from_list([ <int> <void *>round_, <int> <void *>round_, ])             # <<<<<<<<<<<<<<
 * cdef void ** sindg_data = alloc_data_from_list([ <int> <void *>sindg_, <int> <void *>sindg_, ])
 * cdef void ** cosdg_data = alloc_data_from_list([ <int> <void *>cosdg_, <int> <void *>cosdg_, ])
 */
  __pyx_t_5 = ((int)((void *)round));
  __pyx_t_2 = ((int)((void *)round));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_round_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":476
 * cdef void ** rgamma_data = alloc_data_from_list([ <int> <void *>rgamma_, <int> <void *>rgamma_, <int> <void *>crgamma_wrap, <int> <void *>crgamma_wrap])
 * cdef void ** round_data = alloc_data_from_list([ <int> <void *>round_, <int> <void *>round_, ])
 * cdef void ** sindg_data = alloc_data_from_list([ <int> <void *>sindg_, <int> <void *>sindg_, ])             # <<<<<<<<<<<<<<
 * cdef void ** cosdg_data = alloc_data_from_list([ <int> <void *>cosdg_, <int> <void *>cosdg_, ])
 * cdef void ** radian_data = alloc_data_from_list([ <int> <void *>radian_, <int> <void *>radian_, ])
 */
  __pyx_t_1 = ((int)((void *)sindg));
  __pyx_t_2 = ((int)((void *)sindg));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_sindg_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":477
 * cdef void ** round_data = alloc_data_from_list([ <int> <void *>round_, <int> <void *>round_, ])
 * cdef void ** sindg_data = alloc_data_from_list([ <int> <void *>sindg_, <int> <void *>sindg_, ])
 * cdef void ** cosdg_data = alloc_data_from_list([ <int> <void *>cosdg_, <int> <void *>cosdg_, ])             # <<<<<<<<<<<<<<
 * cdef void ** radian_data = alloc_data_from_list([ <int> <void *>radian_, <int> <void *>radian_, ])
 * cdef void ** tandg_data = alloc_data_from_list([ <int> <void *>tandg_, <int> <void *>tandg_, ])
 */
  __pyx_t_5 = ((int)((void *)cosdg));
  __pyx_t_2 = ((int)((void *)cosdg));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cosdg_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":478
 * cdef void ** sindg_data = alloc_data_from_list([ <int> <void *>sindg_, <int> <void *>sindg_, ])
 * cdef void ** cosdg_data = alloc_data_from_list([ <int> <void *>cosdg_, <int> <void *>cosdg_, ])
 * cdef void ** radian_data = alloc_data_from_list([ <int> <void *>radian_, <int> <void *>radian_, ])             # <<<<<<<<<<<<<<
 * cdef void ** tandg_data = alloc_data_from_list([ <int> <void *>tandg_, <int> <void *>tandg_, ])
 * cdef void ** cotdg_data = alloc_data_from_list([ <int> <void *>cotdg_, <int> <void *>cotdg_, ])
 */
  __pyx_t_1 = ((int)((void *)radian));
  __pyx_t_2 = ((int)((void *)radian));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_radian_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":479
 * cdef void ** cosdg_data = alloc_data_from_list([ <int> <void *>cosdg_, <int> <void *>cosdg_, ])
 * cdef void ** radian_data = alloc_data_from_list([ <int> <void *>radian_, <int> <void *>radian_, ])
 * cdef void ** tandg_data = alloc_data_from_list([ <int> <void *>tandg_, <int> <void *>tandg_, ])             # <<<<<<<<<<<<<<
 * cdef void ** cotdg_data = alloc_data_from_list([ <int> <void *>cotdg_, <int> <void *>cotdg_, ])
 * cdef void ** log1p_data = alloc_data_from_list([ <int> <void *>log1p_, <int> <void *>log1p_, ])
 */
  __pyx_t_5 = ((int)((void *)tandg));
  __pyx_t_2 = ((int)((void *)tandg));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_tandg_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":480
 * cdef void ** radian_data = alloc_data_from_list([ <int> <void *>radian_, <int> <void *>radian_, ])
 * cdef void ** tandg_data = alloc_data_from_list([ <int> <void *>tandg_, <int> <void *>tandg_, ])
 * cdef void ** cotdg_data = alloc_data_from_list([ <int> <void *>cotdg_, <int> <void *>cotdg_, ])             # <<<<<<<<<<<<<<
 * cdef void ** log1p_data = alloc_data_from_list([ <int> <void *>log1p_, <int> <void *>log1p_, ])
 * cdef void ** expm1_data = alloc_data_from_list([ <int> <void *>expm1_, <int> <void *>expm1_, ])
 */
  __pyx_t_1 = ((int)((void *)cotdg));
  __pyx_t_2 = ((int)((void *)cotdg));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cotdg_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":481
 * cdef void ** tandg_data = alloc_data_from_list([ <int> <void *>tandg_, <int> <void *>tandg_, ])
 * cdef void ** cotdg_data = alloc_data_from_list([ <int> <void *>cotdg_, <int> <void *>cotdg_, ])
 * cdef void ** log1p_data = alloc_data_from_list([ <int> <void *>log1p_, <int> <void *>log1p_, ])             # <<<<<<<<<<<<<<
 * cdef void ** expm1_data = alloc_data_from_list([ <int> <void *>expm1_, <int> <void *>expm1_, ])
 * cdef void ** cosm1_data = alloc_data_from_list([ <int> <void *>cosm1_, <int> <void *>cosm1_, ])
 */
  __pyx_t_5 = ((int)((void *)log1p));
  __pyx_t_2 = ((int)((void *)log1p));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_log1p_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":482
 * cdef void ** cotdg_data = alloc_data_from_list([ <int> <void *>cotdg_, <int> <void *>cotdg_, ])
 * cdef void ** log1p_data = alloc_data_from_list([ <int> <void *>log1p_, <int> <void *>log1p_, ])
 * cdef void ** expm1_data = alloc_data_from_list([ <int> <void *>expm1_, <int> <void *>expm1_, ])             # <<<<<<<<<<<<<<
 * cdef void ** cosm1_data = alloc_data_from_list([ <int> <void *>cosm1_, <int> <void *>cosm1_, ])
 * cdef void ** spence_data = alloc_data_from_list([ <int> <void *>spence_, <int> <void *>spence_, ])
 */
  __pyx_t_1 = ((int)((void *)expm1));
  __pyx_t_2 = ((int)((void *)expm1));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_expm1_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":483
 * cdef void ** log1p_data = alloc_data_from_list([ <int> <void *>log1p_, <int> <void *>log1p_, ])
 * cdef void ** expm1_data = alloc_data_from_list([ <int> <void *>expm1_, <int> <void *>expm1_, ])
 * cdef void ** cosm1_data = alloc_data_from_list([ <int> <void *>cosm1_, <int> <void *>cosm1_, ])             # <<<<<<<<<<<<<<
 * cdef void ** spence_data = alloc_data_from_list([ <int> <void *>spence_, <int> <void *>spence_, ])
 * cdef void ** struve_data = alloc_data_from_list([ <int> <void *>struve_wrap, <int> <void *>struve_wrap, ])
 */
  __pyx_t_5 = ((int)((void *)cosm1));
  __pyx_t_2 = ((int)((void *)cosm1));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cosm1_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":484
 * cdef void ** expm1_data = alloc_data_from_list([ <int> <void *>expm1_, <int> <void *>expm1_, ])
 * cdef void ** cosm1_data = alloc_data_from_list([ <int> <void *>cosm1_, <int> <void *>cosm1_, ])
 * cdef void ** spence_data = alloc_data_from_list([ <int> <void *>spence_, <int> <void *>spence_, ])             # <<<<<<<<<<<<<<
 * cdef void ** struve_data = alloc_data_from_list([ <int> <void *>struve_wrap, <int> <void *>struve_wrap, ])
 * cdef void ** modstruve_data = alloc_data_from_list([ <int> <void *>modstruve_wrap, <int> <void *>modstruve_wrap, ])
 */
  __pyx_t_1 = ((int)((void *)spence));
  __pyx_t_2 = ((int)((void *)spence));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_spence_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":485
 * cdef void ** cosm1_data = alloc_data_from_list([ <int> <void *>cosm1_, <int> <void *>cosm1_, ])
 * cdef void ** spence_data = alloc_data_from_list([ <int> <void *>spence_, <int> <void *>spence_, ])
 * cdef void ** struve_data = alloc_data_from_list([ <int> <void *>struve_wrap, <int> <void *>struve_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** modstruve_data = alloc_data_from_list([ <int> <void *>modstruve_wrap, <int> <void *>modstruve_wrap, ])
 * cdef void ** itmodstruve0_data = alloc_data_from_list([ <int> <void *>itmodstruve0_wrap, <int> <void *>itmodstruve0_wrap, ])
 */
  __pyx_t_5 = ((int)((void *)struve_wrap));
  __pyx_t_2 = ((int)((void *)struve_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_struve_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":486
 * cdef void ** spence_data = alloc_data_from_list([ <int> <void *>spence_, <int> <void *>spence_, ])
 * cdef void ** struve_data = alloc_data_from_list([ <int> <void *>struve_wrap, <int> <void *>struve_wrap, ])
 * cdef void ** modstruve_data = alloc_data_from_list([ <int> <void *>modstruve_wrap, <int> <void *>modstruve_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** itmodstruve0_data = alloc_data_from_list([ <int> <void *>itmodstruve0_wrap, <int> <void *>itmodstruve0_wrap, ])
 * cdef void ** itstruve0_data = alloc_data_from_list([ <int> <void *>itstruve0_wrap, <int> <void *>itstruve0_wrap, ])
 */
  __pyx_t_1 = ((int)((void *)modstruve_wrap));
  __pyx_t_2 = ((int)((void *)modstruve_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_modstruve_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":487
 * cdef void ** struve_data = alloc_data_from_list([ <int> <void *>struve_wrap, <int> <void *>struve_wrap, ])
 * cdef void ** modstruve_data = alloc_data_from_list([ <int> <void *>modstruve_wrap, <int> <void *>modstruve_wrap, ])
 * cdef void ** itmodstruve0_data = alloc_data_from_list([ <int> <void *>itmodstruve0_wrap, <int> <void *>itmodstruve0_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** itstruve0_data = alloc_data_from_list([ <int> <void *>itstruve0_wrap, <int> <void *>itstruve0_wrap, ])
 * cdef void ** it2struve0_data = alloc_data_from_list([ <int> <void *>it2struve0_wrap, <int> <void *>it2struve0_wrap, ])
 */
  __pyx_t_5 = ((int)((void *)itmodstruve0_wrap));
  __pyx_t_2 = ((int)((void *)itmodstruve0_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_itmodstruve0_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":488
 * cdef void ** modstruve_data = alloc_data_from_list([ <int> <void *>modstruve_wrap, <int> <void *>modstruve_wrap, ])
 * cdef void ** itmodstruve0_data = alloc_data_from_list([ <int> <void *>itmodstruve0_wrap, <int> <void *>itmodstruve0_wrap, ])
 * cdef void ** itstruve0_data = alloc_data_from_list([ <int> <void *>itstruve0_wrap, <int> <void *>itstruve0_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** it2struve0_data = alloc_data_from_list([ <int> <void *>it2struve0_wrap, <int> <void *>it2struve0_wrap, ])
 * cdef void ** zeta_data = alloc_data_from_list([ <int> <void *>zeta_, <int> <void *>zeta_, ])
 */
  __pyx_t_1 = ((int)((void *)itstruve0_wrap));
  __pyx_t_2 = ((int)((void *)itstruve0_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_itstruve0_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":489
 * cdef void ** itmodstruve0_data = alloc_data_from_list([ <int> <void *>itmodstruve0_wrap, <int> <void *>itmodstruve0_wrap, ])
 * cdef void ** itstruve0_data = alloc_data_from_list([ <int> <void *>itstruve0_wrap, <int> <void *>itstruve0_wrap, ])
 * cdef void ** it2struve0_data = alloc_data_from_list([ <int> <void *>it2struve0_wrap, <int> <void *>it2struve0_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** zeta_data = alloc_data_from_list([ <int> <void *>zeta_, <int> <void *>zeta_, ])
 * cdef void ** zetac_data = alloc_data_from_list([ <int> <void *>zetac_, <int> <void *>zetac_, ])
 */
  __pyx_t_5 = ((int)((void *)it2struve0_wrap));
  __pyx_t_2 = ((int)((void *)it2struve0_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_it2struve0_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":490
 * cdef void ** itstruve0_data = alloc_data_from_list([ <int> <void *>itstruve0_wrap, <int> <void *>itstruve0_wrap, ])
 * cdef void ** it2struve0_data = alloc_data_from_list([ <int> <void *>it2struve0_wrap, <int> <void *>it2struve0_wrap, ])
 * cdef void ** zeta_data = alloc_data_from_list([ <int> <void *>zeta_, <int> <void *>zeta_, ])             # <<<<<<<<<<<<<<
 * cdef void ** zetac_data = alloc_data_from_list([ <int> <void *>zetac_, <int> <void *>zetac_, ])
 * cdef void ** kolmogorov_data = alloc_data_from_list([ <int> <void *>kolmogorov_, <int> <void *>kolmogorov_, ])
 */
  __pyx_t_1 = ((int)((void *)zeta));
  __pyx_t_2 = ((int)((void *)zeta));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_zeta_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":491
 * cdef void ** it2struve0_data = alloc_data_from_list([ <int> <void *>it2struve0_wrap, <int> <void *>it2struve0_wrap, ])
 * cdef void ** zeta_data = alloc_data_from_list([ <int> <void *>zeta_, <int> <void *>zeta_, ])
 * cdef void ** zetac_data = alloc_data_from_list([ <int> <void *>zetac_, <int> <void *>zetac_, ])             # <<<<<<<<<<<<<<
 * cdef void ** kolmogorov_data = alloc_data_from_list([ <int> <void *>kolmogorov_, <int> <void *>kolmogorov_, ])
 * cdef void ** kolmogi_data = alloc_data_from_list([ <int> <void *>kolmogi_, <int> <void *>kolmogi_, ])
 */
  __pyx_t_5 = ((int)((void *)zetac));
  __pyx_t_2 = ((int)((void *)zetac));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_zetac_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":492
 * cdef void ** zeta_data = alloc_data_from_list([ <int> <void *>zeta_, <int> <void *>zeta_, ])
 * cdef void ** zetac_data = alloc_data_from_list([ <int> <void *>zetac_, <int> <void *>zetac_, ])
 * cdef void ** kolmogorov_data = alloc_data_from_list([ <int> <void *>kolmogorov_, <int> <void *>kolmogorov_, ])             # <<<<<<<<<<<<<<
 * cdef void ** kolmogi_data = alloc_data_from_list([ <int> <void *>kolmogi_, <int> <void *>kolmogi_, ])
 * cdef void ** wofz_data = alloc_data_from_list([ <int> <void *>cwofz_wrap, <int> <void *>cwofz_wrap, ])
 */
  __pyx_t_1 = ((int)((void *)kolmogorov));
  __pyx_t_2 = ((int)((void *)kolmogorov));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_kolmogorov_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":493
 * cdef void ** zetac_data = alloc_data_from_list([ <int> <void *>zetac_, <int> <void *>zetac_, ])
 * cdef void ** kolmogorov_data = alloc_data_from_list([ <int> <void *>kolmogorov_, <int> <void *>kolmogorov_, ])
 * cdef void ** kolmogi_data = alloc_data_from_list([ <int> <void *>kolmogi_, <int> <void *>kolmogi_, ])             # <<<<<<<<<<<<<<
 * cdef void ** wofz_data = alloc_data_from_list([ <int> <void *>cwofz_wrap, <int> <void *>cwofz_wrap, ])
 * cdef void ** besselpoly_data = alloc_data_from_list([<int> <void *>besselpoly_, <int> <void *>besselpoly_,])
 */
  __pyx_t_5 = ((int)((void *)kolmogi));
  __pyx_t_2 = ((int)((void *)kolmogi));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_kolmogi_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":494
 * cdef void ** kolmogorov_data = alloc_data_from_list([ <int> <void *>kolmogorov_, <int> <void *>kolmogorov_, ])
 * cdef void ** kolmogi_data = alloc_data_from_list([ <int> <void *>kolmogi_, <int> <void *>kolmogi_, ])
 * cdef void ** wofz_data = alloc_data_from_list([ <int> <void *>cwofz_wrap, <int> <void *>cwofz_wrap, ])             # <<<<<<<<<<<<<<
 * cdef void ** besselpoly_data = alloc_data_from_list([<int> <void *>besselpoly_, <int> <void *>besselpoly_,])
 * cdef void ** cdfbet3_data = alloc_data_from_list([<int> <void *>cdfbet3_wrap, <int> <void *>cdfbet3_wrap])
 */
  __pyx_t_1 = ((int)((void *)cwofz_wrap));
  __pyx_t_2 = ((int)((void *)cwofz_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_wofz_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":495
 * cdef void ** kolmogi_data = alloc_data_from_list([ <int> <void *>kolmogi_, <int> <void *>kolmogi_, ])
 * cdef void ** wofz_data = alloc_data_from_list([ <int> <void *>cwofz_wrap, <int> <void *>cwofz_wrap, ])
 * cdef void ** besselpoly_data = alloc_data_from_list([<int> <void *>besselpoly_, <int> <void *>besselpoly_,])             # <<<<<<<<<<<<<<
 * cdef void ** cdfbet3_data = alloc_data_from_list([<int> <void *>cdfbet3_wrap, <int> <void *>cdfbet3_wrap])
 * cdef void ** cdfbet4_data = alloc_data_from_list([<int> <void *>cdfbet4_wrap, <int> <void *>cdfbet4_wrap])
 */
  __pyx_t_5 = ((int)((void *)besselpoly));
  __pyx_t_2 = ((int)((void *)besselpoly));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_besselpoly_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":496
 * cdef void ** wofz_data = alloc_data_from_list([ <int> <void *>cwofz_wrap, <int> <void *>cwofz_wrap, ])
 * cdef void ** besselpoly_data = alloc_data_from_list([<int> <void *>besselpoly_, <int> <void *>besselpoly_,])
 * cdef void ** cdfbet3_data = alloc_data_from_list([<int> <void *>cdfbet3_wrap, <int> <void *>cdfbet3_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfbet4_data = alloc_data_from_list([<int> <void *>cdfbet4_wrap, <int> <void *>cdfbet4_wrap])
 * cdef void ** cdfbin2_data = alloc_data_from_list([<int> <void *>cdfbin2_wrap, <int> <void *>cdfbin2_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdfbet3_wrap));
  __pyx_t_2 = ((int)((void *)cdfbet3_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfbet3_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":497
 * cdef void ** besselpoly_data = alloc_data_from_list([<int> <void *>besselpoly_, <int> <void *>besselpoly_,])
 * cdef void ** cdfbet3_data = alloc_data_from_list([<int> <void *>cdfbet3_wrap, <int> <void *>cdfbet3_wrap])
 * cdef void ** cdfbet4_data = alloc_data_from_list([<int> <void *>cdfbet4_wrap, <int> <void *>cdfbet4_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfbin2_data = alloc_data_from_list([<int> <void *>cdfbin2_wrap, <int> <void *>cdfbin2_wrap])
 * cdef void ** cdfbin3_data = alloc_data_from_list([<int> <void *>cdfbin3_wrap, <int> <void *>cdfbin3_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdfbet4_wrap));
  __pyx_t_2 = ((int)((void *)cdfbet4_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfbet4_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":498
 * cdef void ** cdfbet3_data = alloc_data_from_list([<int> <void *>cdfbet3_wrap, <int> <void *>cdfbet3_wrap])
 * cdef void ** cdfbet4_data = alloc_data_from_list([<int> <void *>cdfbet4_wrap, <int> <void *>cdfbet4_wrap])
 * cdef void ** cdfbin2_data = alloc_data_from_list([<int> <void *>cdfbin2_wrap, <int> <void *>cdfbin2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfbin3_data = alloc_data_from_list([<int> <void *>cdfbin3_wrap, <int> <void *>cdfbin3_wrap])
 * cdef void ** cdfchi3_data = alloc_data_from_list([<int> <void *>cdfchi3_wrap, <int> <void *>cdfchi3_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdfbin2_wrap));
  __pyx_t_2 = ((int)((void *)cdfbin2_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfbin2_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":499
 * cdef void ** cdfbet4_data = alloc_data_from_list([<int> <void *>cdfbet4_wrap, <int> <void *>cdfbet4_wrap])
 * cdef void ** cdfbin2_data = alloc_data_from_list([<int> <void *>cdfbin2_wrap, <int> <void *>cdfbin2_wrap])
 * cdef void ** cdfbin3_data = alloc_data_from_list([<int> <void *>cdfbin3_wrap, <int> <void *>cdfbin3_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfchi3_data = alloc_data_from_list([<int> <void *>cdfchi3_wrap, <int> <void *>cdfchi3_wrap])
 * cdef void ** cdfchn1_data = alloc_data_from_list([<int> <void *>cdfchn1_wrap, <int> <void *>cdfchn1_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdfbin3_wrap));
  __pyx_t_2 = ((int)((void *)cdfbin3_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfbin3_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":500
 * cdef void ** cdfbin2_data = alloc_data_from_list([<int> <void *>cdfbin2_wrap, <int> <void *>cdfbin2_wrap])
 * cdef void ** cdfbin3_data = alloc_data_from_list([<int> <void *>cdfbin3_wrap, <int> <void *>cdfbin3_wrap])
 * cdef void ** cdfchi3_data = alloc_data_from_list([<int> <void *>cdfchi3_wrap, <int> <void *>cdfchi3_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfchn1_data = alloc_data_from_list([<int> <void *>cdfchn1_wrap, <int> <void *>cdfchn1_wrap])
 * cdef void ** cdfchn2_data = alloc_data_from_list([<int> <void *>cdfchn2_wrap, <int> <void *>cdfchn2_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdfchi3_wrap));
  __pyx_t_2 = ((int)((void *)cdfchi3_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfchi3_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":501
 * cdef void ** cdfbin3_data = alloc_data_from_list([<int> <void *>cdfbin3_wrap, <int> <void *>cdfbin3_wrap])
 * cdef void ** cdfchi3_data = alloc_data_from_list([<int> <void *>cdfchi3_wrap, <int> <void *>cdfchi3_wrap])
 * cdef void ** cdfchn1_data = alloc_data_from_list([<int> <void *>cdfchn1_wrap, <int> <void *>cdfchn1_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfchn2_data = alloc_data_from_list([<int> <void *>cdfchn2_wrap, <int> <void *>cdfchn2_wrap])
 * cdef void ** cdfchn3_data = alloc_data_from_list([<int> <void *>cdfchn3_wrap, <int> <void *>cdfchn3_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdfchn1_wrap));
  __pyx_t_2 = ((int)((void *)cdfchn1_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfchn1_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":502
 * cdef void ** cdfchi3_data = alloc_data_from_list([<int> <void *>cdfchi3_wrap, <int> <void *>cdfchi3_wrap])
 * cdef void ** cdfchn1_data = alloc_data_from_list([<int> <void *>cdfchn1_wrap, <int> <void *>cdfchn1_wrap])
 * cdef void ** cdfchn2_data = alloc_data_from_list([<int> <void *>cdfchn2_wrap, <int> <void *>cdfchn2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfchn3_data = alloc_data_from_list([<int> <void *>cdfchn3_wrap, <int> <void *>cdfchn3_wrap])
 * cdef void ** cdfchn4_data = alloc_data_from_list([<int> <void *>cdfchn4_wrap, <int> <void *>cdfchn4_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdfchn2_wrap));
  __pyx_t_2 = ((int)((void *)cdfchn2_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfchn2_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":503
 * cdef void ** cdfchn1_data = alloc_data_from_list([<int> <void *>cdfchn1_wrap, <int> <void *>cdfchn1_wrap])
 * cdef void ** cdfchn2_data = alloc_data_from_list([<int> <void *>cdfchn2_wrap, <int> <void *>cdfchn2_wrap])
 * cdef void ** cdfchn3_data = alloc_data_from_list([<int> <void *>cdfchn3_wrap, <int> <void *>cdfchn3_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfchn4_data = alloc_data_from_list([<int> <void *>cdfchn4_wrap, <int> <void *>cdfchn4_wrap])
 * cdef void ** cdff4_data = alloc_data_from_list([<int> <void *>cdff4_wrap, <int> <void *>cdff4_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdfchn3_wrap));
  __pyx_t_2 = ((int)((void *)cdfchn3_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfchn3_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":504
 * cdef void ** cdfchn2_data = alloc_data_from_list([<int> <void *>cdfchn2_wrap, <int> <void *>cdfchn2_wrap])
 * cdef void ** cdfchn3_data = alloc_data_from_list([<int> <void *>cdfchn3_wrap, <int> <void *>cdfchn3_wrap])
 * cdef void ** cdfchn4_data = alloc_data_from_list([<int> <void *>cdfchn4_wrap, <int> <void *>cdfchn4_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdff4_data = alloc_data_from_list([<int> <void *>cdff4_wrap, <int> <void *>cdff4_wrap])
 * cdef void ** cdffnc1_data = alloc_data_from_list([<int> <void *>cdffnc1_wrap, <int> <void *>cdffnc1_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdfchn4_wrap));
  __pyx_t_2 = ((int)((void *)cdfchn4_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfchn4_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":505
 * cdef void ** cdfchn3_data = alloc_data_from_list([<int> <void *>cdfchn3_wrap, <int> <void *>cdfchn3_wrap])
 * cdef void ** cdfchn4_data = alloc_data_from_list([<int> <void *>cdfchn4_wrap, <int> <void *>cdfchn4_wrap])
 * cdef void ** cdff4_data = alloc_data_from_list([<int> <void *>cdff4_wrap, <int> <void *>cdff4_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdffnc1_data = alloc_data_from_list([<int> <void *>cdffnc1_wrap, <int> <void *>cdffnc1_wrap])
 * cdef void ** cdffnc2_data = alloc_data_from_list([<int> <void *>cdffnc2_wrap, <int> <void *>cdffnc2_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdff4_wrap));
  __pyx_t_2 = ((int)((void *)cdff4_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdff4_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":506
 * cdef void ** cdfchn4_data = alloc_data_from_list([<int> <void *>cdfchn4_wrap, <int> <void *>cdfchn4_wrap])
 * cdef void ** cdff4_data = alloc_data_from_list([<int> <void *>cdff4_wrap, <int> <void *>cdff4_wrap])
 * cdef void ** cdffnc1_data = alloc_data_from_list([<int> <void *>cdffnc1_wrap, <int> <void *>cdffnc1_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdffnc2_data = alloc_data_from_list([<int> <void *>cdffnc2_wrap, <int> <void *>cdffnc2_wrap])
 * cdef void ** cdffnc3_data = alloc_data_from_list([<int> <void *>cdffnc3_wrap, <int> <void *>cdffnc3_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdffnc1_wrap));
  __pyx_t_2 = ((int)((void *)cdffnc1_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdffnc1_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":507
 * cdef void ** cdff4_data = alloc_data_from_list([<int> <void *>cdff4_wrap, <int> <void *>cdff4_wrap])
 * cdef void ** cdffnc1_data = alloc_data_from_list([<int> <void *>cdffnc1_wrap, <int> <void *>cdffnc1_wrap])
 * cdef void ** cdffnc2_data = alloc_data_from_list([<int> <void *>cdffnc2_wrap, <int> <void *>cdffnc2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdffnc3_data = alloc_data_from_list([<int> <void *>cdffnc3_wrap, <int> <void *>cdffnc3_wrap])
 * cdef void ** cdffnc4_data = alloc_data_from_list([<int> <void *>cdffnc4_wrap, <int> <void *>cdffnc4_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdffnc2_wrap));
  __pyx_t_2 = ((int)((void *)cdffnc2_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdffnc2_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":508
 * cdef void ** cdffnc1_data = alloc_data_from_list([<int> <void *>cdffnc1_wrap, <int> <void *>cdffnc1_wrap])
 * cdef void ** cdffnc2_data = alloc_data_from_list([<int> <void *>cdffnc2_wrap, <int> <void *>cdffnc2_wrap])
 * cdef void ** cdffnc3_data = alloc_data_from_list([<int> <void *>cdffnc3_wrap, <int> <void *>cdffnc3_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdffnc4_data = alloc_data_from_list([<int> <void *>cdffnc4_wrap, <int> <void *>cdffnc4_wrap])
 * cdef void ** cdffnc5_data = alloc_data_from_list([<int> <void *>cdffnc5_wrap, <int> <void *>cdffnc5_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdffnc3_wrap));
  __pyx_t_2 = ((int)((void *)cdffnc3_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdffnc3_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":509
 * cdef void ** cdffnc2_data = alloc_data_from_list([<int> <void *>cdffnc2_wrap, <int> <void *>cdffnc2_wrap])
 * cdef void ** cdffnc3_data = alloc_data_from_list([<int> <void *>cdffnc3_wrap, <int> <void *>cdffnc3_wrap])
 * cdef void ** cdffnc4_data = alloc_data_from_list([<int> <void *>cdffnc4_wrap, <int> <void *>cdffnc4_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdffnc5_data = alloc_data_from_list([<int> <void *>cdffnc5_wrap, <int> <void *>cdffnc5_wrap])
 * cdef void ** cdfgam2_data = alloc_data_from_list([<int> <void *>cdfgam2_wrap, <int> <void *>cdfgam2_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdffnc4_wrap));
  __pyx_t_2 = ((int)((void *)cdffnc4_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdffnc4_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":510
 * cdef void ** cdffnc3_data = alloc_data_from_list([<int> <void *>cdffnc3_wrap, <int> <void *>cdffnc3_wrap])
 * cdef void ** cdffnc4_data = alloc_data_from_list([<int> <void *>cdffnc4_wrap, <int> <void *>cdffnc4_wrap])
 * cdef void ** cdffnc5_data = alloc_data_from_list([<int> <void *>cdffnc5_wrap, <int> <void *>cdffnc5_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfgam2_data = alloc_data_from_list([<int> <void *>cdfgam2_wrap, <int> <void *>cdfgam2_wrap])
 * cdef void ** cdfgam3_data = alloc_data_from_list([<int> <void *>cdfgam3_wrap, <int> <void *>cdfgam3_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdffnc5_wrap));
  __pyx_t_2 = ((int)((void *)cdffnc5_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdffnc5_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":511
 * cdef void ** cdffnc4_data = alloc_data_from_list([<int> <void *>cdffnc4_wrap, <int> <void *>cdffnc4_wrap])
 * cdef void ** cdffnc5_data = alloc_data_from_list([<int> <void *>cdffnc5_wrap, <int> <void *>cdffnc5_wrap])
 * cdef void ** cdfgam2_data = alloc_data_from_list([<int> <void *>cdfgam2_wrap, <int> <void *>cdfgam2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfgam3_data = alloc_data_from_list([<int> <void *>cdfgam3_wrap, <int> <void *>cdfgam3_wrap])
 * cdef void ** cdfgam4_data = alloc_data_from_list([<int> <void *>cdfgam4_wrap, <int> <void *>cdfgam4_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdfgam2_wrap));
  __pyx_t_2 = ((int)((void *)cdfgam2_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfgam2_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":512
 * cdef void ** cdffnc5_data = alloc_data_from_list([<int> <void *>cdffnc5_wrap, <int> <void *>cdffnc5_wrap])
 * cdef void ** cdfgam2_data = alloc_data_from_list([<int> <void *>cdfgam2_wrap, <int> <void *>cdfgam2_wrap])
 * cdef void ** cdfgam3_data = alloc_data_from_list([<int> <void *>cdfgam3_wrap, <int> <void *>cdfgam3_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfgam4_data = alloc_data_from_list([<int> <void *>cdfgam4_wrap, <int> <void *>cdfgam4_wrap])
 * cdef void ** cdfnbn2_data = alloc_data_from_list([<int> <void *>cdfnbn2_wrap, <int> <void *>cdfnbn2_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdfgam3_wrap));
  __pyx_t_2 = ((int)((void *)cdfgam3_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfgam3_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":513
 * cdef void ** cdfgam2_data = alloc_data_from_list([<int> <void *>cdfgam2_wrap, <int> <void *>cdfgam2_wrap])
 * cdef void ** cdfgam3_data = alloc_data_from_list([<int> <void *>cdfgam3_wrap, <int> <void *>cdfgam3_wrap])
 * cdef void ** cdfgam4_data = alloc_data_from_list([<int> <void *>cdfgam4_wrap, <int> <void *>cdfgam4_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfnbn2_data = alloc_data_from_list([<int> <void *>cdfnbn2_wrap, <int> <void *>cdfnbn2_wrap])
 * cdef void ** cdfnbn3_data = alloc_data_from_list([<int> <void *>cdfnbn3_wrap, <int> <void *>cdfnbn3_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdfgam4_wrap));
  __pyx_t_2 = ((int)((void *)cdfgam4_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfgam4_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":514
 * cdef void ** cdfgam3_data = alloc_data_from_list([<int> <void *>cdfgam3_wrap, <int> <void *>cdfgam3_wrap])
 * cdef void ** cdfgam4_data = alloc_data_from_list([<int> <void *>cdfgam4_wrap, <int> <void *>cdfgam4_wrap])
 * cdef void ** cdfnbn2_data = alloc_data_from_list([<int> <void *>cdfnbn2_wrap, <int> <void *>cdfnbn2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfnbn3_data = alloc_data_from_list([<int> <void *>cdfnbn3_wrap, <int> <void *>cdfnbn3_wrap])
 * cdef void ** cdfnor3_data = alloc_data_from_list([<int> <void *>cdfnor3_wrap, <int> <void *>cdfnor3_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdfnbn2_wrap));
  __pyx_t_2 = ((int)((void *)cdfnbn2_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfnbn2_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":515
 * cdef void ** cdfgam4_data = alloc_data_from_list([<int> <void *>cdfgam4_wrap, <int> <void *>cdfgam4_wrap])
 * cdef void ** cdfnbn2_data = alloc_data_from_list([<int> <void *>cdfnbn2_wrap, <int> <void *>cdfnbn2_wrap])
 * cdef void ** cdfnbn3_data = alloc_data_from_list([<int> <void *>cdfnbn3_wrap, <int> <void *>cdfnbn3_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfnor3_data = alloc_data_from_list([<int> <void *>cdfnor3_wrap, <int> <void *>cdfnor3_wrap])
 * cdef void ** cdfnor4_data = alloc_data_from_list([<int> <void *>cdfnor4_wrap, <int> <void *>cdfnor4_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdfnbn3_wrap));
  __pyx_t_2 = ((int)((void *)cdfnbn3_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfnbn3_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":516
 * cdef void ** cdfnbn2_data = alloc_data_from_list([<int> <void *>cdfnbn2_wrap, <int> <void *>cdfnbn2_wrap])
 * cdef void ** cdfnbn3_data = alloc_data_from_list([<int> <void *>cdfnbn3_wrap, <int> <void *>cdfnbn3_wrap])
 * cdef void ** cdfnor3_data = alloc_data_from_list([<int> <void *>cdfnor3_wrap, <int> <void *>cdfnor3_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfnor4_data = alloc_data_from_list([<int> <void *>cdfnor4_wrap, <int> <void *>cdfnor4_wrap])
 * cdef void ** cdfpoi2_data = alloc_data_from_list([<int> <void *>cdfpoi2_wrap, <int> <void *>cdfpoi2_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdfnor3_wrap));
  __pyx_t_2 = ((int)((void *)cdfnor3_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfnor3_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":517
 * cdef void ** cdfnbn3_data = alloc_data_from_list([<int> <void *>cdfnbn3_wrap, <int> <void *>cdfnbn3_wrap])
 * cdef void ** cdfnor3_data = alloc_data_from_list([<int> <void *>cdfnor3_wrap, <int> <void *>cdfnor3_wrap])
 * cdef void ** cdfnor4_data = alloc_data_from_list([<int> <void *>cdfnor4_wrap, <int> <void *>cdfnor4_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdfpoi2_data = alloc_data_from_list([<int> <void *>cdfpoi2_wrap, <int> <void *>cdfpoi2_wrap])
 * cdef void ** cdft1_data = alloc_data_from_list([<int> <void *>cdft1_wrap, <int> <void *>cdft1_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdfnor4_wrap));
  __pyx_t_2 = ((int)((void *)cdfnor4_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfnor4_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":518
 * cdef void ** cdfnor3_data = alloc_data_from_list([<int> <void *>cdfnor3_wrap, <int> <void *>cdfnor3_wrap])
 * cdef void ** cdfnor4_data = alloc_data_from_list([<int> <void *>cdfnor4_wrap, <int> <void *>cdfnor4_wrap])
 * cdef void ** cdfpoi2_data = alloc_data_from_list([<int> <void *>cdfpoi2_wrap, <int> <void *>cdfpoi2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdft1_data = alloc_data_from_list([<int> <void *>cdft1_wrap, <int> <void *>cdft1_wrap])
 * cdef void ** cdft2_data = alloc_data_from_list([<int> <void *>cdft2_wrap, <int> <void *>cdft2_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdfpoi2_wrap));
  __pyx_t_2 = ((int)((void *)cdfpoi2_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdfpoi2_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":519
 * cdef void ** cdfnor4_data = alloc_data_from_list([<int> <void *>cdfnor4_wrap, <int> <void *>cdfnor4_wrap])
 * cdef void ** cdfpoi2_data = alloc_data_from_list([<int> <void *>cdfpoi2_wrap, <int> <void *>cdfpoi2_wrap])
 * cdef void ** cdft1_data = alloc_data_from_list([<int> <void *>cdft1_wrap, <int> <void *>cdft1_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdft2_data = alloc_data_from_list([<int> <void *>cdft2_wrap, <int> <void *>cdft2_wrap])
 * cdef void ** cdft3_data = alloc_data_from_list([<int> <void *>cdft3_wrap, <int> <void *>cdft3_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdft1_wrap));
  __pyx_t_2 = ((int)((void *)cdft1_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdft1_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":520
 * cdef void ** cdfpoi2_data = alloc_data_from_list([<int> <void *>cdfpoi2_wrap, <int> <void *>cdfpoi2_wrap])
 * cdef void ** cdft1_data = alloc_data_from_list([<int> <void *>cdft1_wrap, <int> <void *>cdft1_wrap])
 * cdef void ** cdft2_data = alloc_data_from_list([<int> <void *>cdft2_wrap, <int> <void *>cdft2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdft3_data = alloc_data_from_list([<int> <void *>cdft3_wrap, <int> <void *>cdft3_wrap])
 * cdef void ** cdftnc1_data = alloc_data_from_list([<int> <void *>cdftnc1_wrap, <int> <void *>cdftnc1_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdft2_wrap));
  __pyx_t_2 = ((int)((void *)cdft2_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdft2_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":521
 * cdef void ** cdft1_data = alloc_data_from_list([<int> <void *>cdft1_wrap, <int> <void *>cdft1_wrap])
 * cdef void ** cdft2_data = alloc_data_from_list([<int> <void *>cdft2_wrap, <int> <void *>cdft2_wrap])
 * cdef void ** cdft3_data = alloc_data_from_list([<int> <void *>cdft3_wrap, <int> <void *>cdft3_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdftnc1_data = alloc_data_from_list([<int> <void *>cdftnc1_wrap, <int> <void *>cdftnc1_wrap])
 * cdef void ** cdftnc2_data = alloc_data_from_list([<int> <void *>cdftnc2_wrap, <int> <void *>cdftnc2_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdft3_wrap));
  __pyx_t_2 = ((int)((void *)cdft3_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdft3_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":522
 * cdef void ** cdft2_data = alloc_data_from_list([<int> <void *>cdft2_wrap, <int> <void *>cdft2_wrap])
 * cdef void ** cdft3_data = alloc_data_from_list([<int> <void *>cdft3_wrap, <int> <void *>cdft3_wrap])
 * cdef void ** cdftnc1_data = alloc_data_from_list([<int> <void *>cdftnc1_wrap, <int> <void *>cdftnc1_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdftnc2_data = alloc_data_from_list([<int> <void *>cdftnc2_wrap, <int> <void *>cdftnc2_wrap])
 * cdef void ** cdftnc3_data = alloc_data_from_list([<int> <void *>cdftnc3_wrap, <int> <void *>cdftnc3_wrap])
 */
  __pyx_t_1 = ((int)((void *)cdftnc1_wrap));
  __pyx_t_2 = ((int)((void *)cdftnc1_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdftnc1_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":523
 * cdef void ** cdft3_data = alloc_data_from_list([<int> <void *>cdft3_wrap, <int> <void *>cdft3_wrap])
 * cdef void ** cdftnc1_data = alloc_data_from_list([<int> <void *>cdftnc1_wrap, <int> <void *>cdftnc1_wrap])
 * cdef void ** cdftnc2_data = alloc_data_from_list([<int> <void *>cdftnc2_wrap, <int> <void *>cdftnc2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdftnc3_data = alloc_data_from_list([<int> <void *>cdftnc3_wrap, <int> <void *>cdftnc3_wrap])
 * cdef void ** cdftnc4_data = alloc_data_from_list([<int> <void *>cdftnc4_wrap, <int> <void *>cdftnc4_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdftnc2_wrap));
  __pyx_t_2 = ((int)((void *)cdftnc2_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdftnc2_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":524
 * cdef void ** cdftnc1_data = alloc_data_from_list([<int> <void *>cdftnc1_wrap, <int> <void *>cdftnc1_wrap])
 * cdef void ** cdftnc2_data = alloc_data_from_list([<int> <void *>cdftnc2_wrap, <int> <void *>cdftnc2_wrap])
 * cdef void ** cdftnc3_data = alloc_data_from_list([<int> <void *>cdftnc3_wrap, <int> <void *>cdftnc3_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** cdftnc4_data = alloc_data_from_list([<int> <void *>cdftnc4_wrap, <int> <void *>cdftnc4_wrap])
 * cdef void ** tklambda_data = alloc_data_from_list([<int> <void *>tukeylambdacdf, <int> <void *>tukeylambdacdf])
 */
  __pyx_t_1 = ((int)((void *)cdftnc3_wrap));
  __pyx_t_2 = ((int)((void *)cdftnc3_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdftnc3_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":525
 * cdef void ** cdftnc2_data = alloc_data_from_list([<int> <void *>cdftnc2_wrap, <int> <void *>cdftnc2_wrap])
 * cdef void ** cdftnc3_data = alloc_data_from_list([<int> <void *>cdftnc3_wrap, <int> <void *>cdftnc3_wrap])
 * cdef void ** cdftnc4_data = alloc_data_from_list([<int> <void *>cdftnc4_wrap, <int> <void *>cdftnc4_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** tklambda_data = alloc_data_from_list([<int> <void *>tukeylambdacdf, <int> <void *>tukeylambdacdf])
 * cdef void ** mathieu_a_data = alloc_data_from_list([<int> <void *>cem_cva_wrap, <int> <void *>cem_cva_wrap])
 */
  __pyx_t_5 = ((int)((void *)cdftnc4_wrap));
  __pyx_t_2 = ((int)((void *)cdftnc4_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cdftnc4_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":526
 * cdef void ** cdftnc3_data = alloc_data_from_list([<int> <void *>cdftnc3_wrap, <int> <void *>cdftnc3_wrap])
 * cdef void ** cdftnc4_data = alloc_data_from_list([<int> <void *>cdftnc4_wrap, <int> <void *>cdftnc4_wrap])
 * cdef void ** tklambda_data = alloc_data_from_list([<int> <void *>tukeylambdacdf, <int> <void *>tukeylambdacdf])             # <<<<<<<<<<<<<<
 * cdef void ** mathieu_a_data = alloc_data_from_list([<int> <void *>cem_cva_wrap, <int> <void *>cem_cva_wrap])
 * cdef void ** mathieu_b_data = alloc_data_from_list([<int> <void *>sem_cva_wrap, <int> <void *>sem_cva_wrap])
 */
  __pyx_t_1 = ((int)((void *)tukeylambdacdf));
  __pyx_t_2 = ((int)((void *)tukeylambdacdf));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_tklambda_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":527
 * cdef void ** cdftnc4_data = alloc_data_from_list([<int> <void *>cdftnc4_wrap, <int> <void *>cdftnc4_wrap])
 * cdef void ** tklambda_data = alloc_data_from_list([<int> <void *>tukeylambdacdf, <int> <void *>tukeylambdacdf])
 * cdef void ** mathieu_a_data = alloc_data_from_list([<int> <void *>cem_cva_wrap, <int> <void *>cem_cva_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** mathieu_b_data = alloc_data_from_list([<int> <void *>sem_cva_wrap, <int> <void *>sem_cva_wrap])
 * cdef void ** mathieu_cem_data = alloc_data_from_list([<int> <void *>cem_wrap, <int> <void *>cem_wrap])
 */
  __pyx_t_5 = ((int)((void *)cem_cva_wrap));
  __pyx_t_2 = ((int)((void *)cem_cva_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_mathieu_a_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":528
 * cdef void ** tklambda_data = alloc_data_from_list([<int> <void *>tukeylambdacdf, <int> <void *>tukeylambdacdf])
 * cdef void ** mathieu_a_data = alloc_data_from_list([<int> <void *>cem_cva_wrap, <int> <void *>cem_cva_wrap])
 * cdef void ** mathieu_b_data = alloc_data_from_list([<int> <void *>sem_cva_wrap, <int> <void *>sem_cva_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** mathieu_cem_data = alloc_data_from_list([<int> <void *>cem_wrap, <int> <void *>cem_wrap])
 * cdef void ** mathieu_sem_data = alloc_data_from_list([<int> <void *>sem_wrap, <int> <void *>sem_wrap])
 */
  __pyx_t_1 = ((int)((void *)sem_cva_wrap));
  __pyx_t_2 = ((int)((void *)sem_cva_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_mathieu_b_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":529
 * cdef void ** mathieu_a_data = alloc_data_from_list([<int> <void *>cem_cva_wrap, <int> <void *>cem_cva_wrap])
 * cdef void ** mathieu_b_data = alloc_data_from_list([<int> <void *>sem_cva_wrap, <int> <void *>sem_cva_wrap])
 * cdef void ** mathieu_cem_data = alloc_data_from_list([<int> <void *>cem_wrap, <int> <void *>cem_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** mathieu_sem_data = alloc_data_from_list([<int> <void *>sem_wrap, <int> <void *>sem_wrap])
 * cdef void ** mathieu_mcem1_data = alloc_data_from_list([<int> <void *>mcm1_wrap, <int> <void *>mcm1_wrap])
 */
  __pyx_t_5 = ((int)((void *)cem_wrap));
  __pyx_t_2 = ((int)((void *)cem_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_mathieu_cem_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":530
 * cdef void ** mathieu_b_data = alloc_data_from_list([<int> <void *>sem_cva_wrap, <int> <void *>sem_cva_wrap])
 * cdef void ** mathieu_cem_data = alloc_data_from_list([<int> <void *>cem_wrap, <int> <void *>cem_wrap])
 * cdef void ** mathieu_sem_data = alloc_data_from_list([<int> <void *>sem_wrap, <int> <void *>sem_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** mathieu_mcem1_data = alloc_data_from_list([<int> <void *>mcm1_wrap, <int> <void *>mcm1_wrap])
 * cdef void ** mathieu_mcem2_data = alloc_data_from_list([<int> <void *>mcm2_wrap, <int> <void *>mcm2_wrap])
 */
  __pyx_t_1 = ((int)((void *)sem_wrap));
  __pyx_t_2 = ((int)((void *)sem_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_mathieu_sem_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":531
 * cdef void ** mathieu_cem_data = alloc_data_from_list([<int> <void *>cem_wrap, <int> <void *>cem_wrap])
 * cdef void ** mathieu_sem_data = alloc_data_from_list([<int> <void *>sem_wrap, <int> <void *>sem_wrap])
 * cdef void ** mathieu_mcem1_data = alloc_data_from_list([<int> <void *>mcm1_wrap, <int> <void *>mcm1_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** mathieu_mcem2_data = alloc_data_from_list([<int> <void *>mcm2_wrap, <int> <void *>mcm2_wrap])
 * cdef void ** mathieu_msem1_data = alloc_data_from_list([<int> <void *>msm1_wrap, <int> <void *>msm1_wrap])
 */
  __pyx_t_5 = ((int)((void *)mcm1_wrap));
  __pyx_t_2 = ((int)((void *)mcm1_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_mathieu_mcem1_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":532
 * cdef void ** mathieu_sem_data = alloc_data_from_list([<int> <void *>sem_wrap, <int> <void *>sem_wrap])
 * cdef void ** mathieu_mcem1_data = alloc_data_from_list([<int> <void *>mcm1_wrap, <int> <void *>mcm1_wrap])
 * cdef void ** mathieu_mcem2_data = alloc_data_from_list([<int> <void *>mcm2_wrap, <int> <void *>mcm2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** mathieu_msem1_data = alloc_data_from_list([<int> <void *>msm1_wrap, <int> <void *>msm1_wrap])
 * cdef void ** mathieu_msem2_data = alloc_data_from_list([<int> <void *>msm2_wrap, <int> <void *>msm2_wrap])
 */
  __pyx_t_1 = ((int)((void *)mcm2_wrap));
  __pyx_t_2 = ((int)((void *)mcm2_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_mathieu_mcem2_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":533
 * cdef void ** mathieu_mcem1_data = alloc_data_from_list([<int> <void *>mcm1_wrap, <int> <void *>mcm1_wrap])
 * cdef void ** mathieu_mcem2_data = alloc_data_from_list([<int> <void *>mcm2_wrap, <int> <void *>mcm2_wrap])
 * cdef void ** mathieu_msem1_data = alloc_data_from_list([<int> <void *>msm1_wrap, <int> <void *>msm1_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** mathieu_msem2_data = alloc_data_from_list([<int> <void *>msm2_wrap, <int> <void *>msm2_wrap])
 * cdef void ** lpmv_data = alloc_data_from_list([<int> <void *>pmv_wrap, <int> <void *>pmv_wrap])
 */
  __pyx_t_5 = ((int)((void *)msm1_wrap));
  __pyx_t_2 = ((int)((void *)msm1_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_mathieu_msem1_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":534
 * cdef void ** mathieu_mcem2_data = alloc_data_from_list([<int> <void *>mcm2_wrap, <int> <void *>mcm2_wrap])
 * cdef void ** mathieu_msem1_data = alloc_data_from_list([<int> <void *>msm1_wrap, <int> <void *>msm1_wrap])
 * cdef void ** mathieu_msem2_data = alloc_data_from_list([<int> <void *>msm2_wrap, <int> <void *>msm2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** lpmv_data = alloc_data_from_list([<int> <void *>pmv_wrap, <int> <void *>pmv_wrap])
 * cdef void ** pbwa_data = alloc_data_from_list([<int> <void *>pbwa_wrap, <int> <void *>pbwa_wrap])
 */
  __pyx_t_1 = ((int)((void *)msm2_wrap));
  __pyx_t_2 = ((int)((void *)msm2_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_mathieu_msem2_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":535
 * cdef void ** mathieu_msem1_data = alloc_data_from_list([<int> <void *>msm1_wrap, <int> <void *>msm1_wrap])
 * cdef void ** mathieu_msem2_data = alloc_data_from_list([<int> <void *>msm2_wrap, <int> <void *>msm2_wrap])
 * cdef void ** lpmv_data = alloc_data_from_list([<int> <void *>pmv_wrap, <int> <void *>pmv_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** pbwa_data = alloc_data_from_list([<int> <void *>pbwa_wrap, <int> <void *>pbwa_wrap])
 * cdef void ** pbdv_data = alloc_data_from_list([<int> <void *>pbdv_wrap, <int> <void *>pbdv_wrap])
 */
  __pyx_t_5 = ((int)((void *)pmv_wrap));
  __pyx_t_2 = ((int)((void *)pmv_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_lpmv_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":536
 * cdef void ** mathieu_msem2_data = alloc_data_from_list([<int> <void *>msm2_wrap, <int> <void *>msm2_wrap])
 * cdef void ** lpmv_data = alloc_data_from_list([<int> <void *>pmv_wrap, <int> <void *>pmv_wrap])
 * cdef void ** pbwa_data = alloc_data_from_list([<int> <void *>pbwa_wrap, <int> <void *>pbwa_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** pbdv_data = alloc_data_from_list([<int> <void *>pbdv_wrap, <int> <void *>pbdv_wrap])
 * cdef void ** pbvv_data = alloc_data_from_list([<int> <void *>pbvv_wrap, <int> <void *>pbvv_wrap])
 */
  __pyx_t_1 = ((int)((void *)pbwa_wrap));
  __pyx_t_2 = ((int)((void *)pbwa_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_pbwa_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":537
 * cdef void ** lpmv_data = alloc_data_from_list([<int> <void *>pmv_wrap, <int> <void *>pmv_wrap])
 * cdef void ** pbwa_data = alloc_data_from_list([<int> <void *>pbwa_wrap, <int> <void *>pbwa_wrap])
 * cdef void ** pbdv_data = alloc_data_from_list([<int> <void *>pbdv_wrap, <int> <void *>pbdv_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** pbvv_data = alloc_data_from_list([<int> <void *>pbvv_wrap, <int> <void *>pbvv_wrap])
 * cdef void ** prolate_aswfa_data = alloc_data_from_list([<int> <void *>prolate_aswfa_wrap, <int> <void *>prolate_aswfa_wrap])
 */
  __pyx_t_5 = ((int)((void *)pbdv_wrap));
  __pyx_t_2 = ((int)((void *)pbdv_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_pbdv_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":538
 * cdef void ** pbwa_data = alloc_data_from_list([<int> <void *>pbwa_wrap, <int> <void *>pbwa_wrap])
 * cdef void ** pbdv_data = alloc_data_from_list([<int> <void *>pbdv_wrap, <int> <void *>pbdv_wrap])
 * cdef void ** pbvv_data = alloc_data_from_list([<int> <void *>pbvv_wrap, <int> <void *>pbvv_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** prolate_aswfa_data = alloc_data_from_list([<int> <void *>prolate_aswfa_wrap, <int> <void *>prolate_aswfa_wrap])
 * cdef void ** prolate_radial1_data = alloc_data_from_list([<int> <void *>prolate_radial1_wrap, <int> <void *>prolate_radial1_wrap])
 */
  __pyx_t_1 = ((int)((void *)pbvv_wrap));
  __pyx_t_2 = ((int)((void *)pbvv_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_pbvv_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":539
 * cdef void ** pbdv_data = alloc_data_from_list([<int> <void *>pbdv_wrap, <int> <void *>pbdv_wrap])
 * cdef void ** pbvv_data = alloc_data_from_list([<int> <void *>pbvv_wrap, <int> <void *>pbvv_wrap])
 * cdef void ** prolate_aswfa_data = alloc_data_from_list([<int> <void *>prolate_aswfa_wrap, <int> <void *>prolate_aswfa_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** prolate_radial1_data = alloc_data_from_list([<int> <void *>prolate_radial1_wrap, <int> <void *>prolate_radial1_wrap])
 * cdef void ** prolate_radial2_data = alloc_data_from_list([<int> <void *>prolate_radial2_wrap, <int> <void *>prolate_radial2_wrap])
 */
  __pyx_t_5 = ((int)((void *)prolate_aswfa_wrap));
  __pyx_t_2 = ((int)((void *)prolate_aswfa_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_prolate_aswfa_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":540
 * cdef void ** pbvv_data = alloc_data_from_list([<int> <void *>pbvv_wrap, <int> <void *>pbvv_wrap])
 * cdef void ** prolate_aswfa_data = alloc_data_from_list([<int> <void *>prolate_aswfa_wrap, <int> <void *>prolate_aswfa_wrap])
 * cdef void ** prolate_radial1_data = alloc_data_from_list([<int> <void *>prolate_radial1_wrap, <int> <void *>prolate_radial1_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** prolate_radial2_data = alloc_data_from_list([<int> <void *>prolate_radial2_wrap, <int> <void *>prolate_radial2_wrap])
 * cdef void ** oblate_aswfa_data = alloc_data_from_list([<int> <void *>oblate_aswfa_wrap, <int> <void *>oblate_aswfa_wrap])
 */
  __pyx_t_1 = ((int)((void *)prolate_radial1_wrap));
  __pyx_t_2 = ((int)((void *)prolate_radial1_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_prolate_radial1_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":541
 * cdef void ** prolate_aswfa_data = alloc_data_from_list([<int> <void *>prolate_aswfa_wrap, <int> <void *>prolate_aswfa_wrap])
 * cdef void ** prolate_radial1_data = alloc_data_from_list([<int> <void *>prolate_radial1_wrap, <int> <void *>prolate_radial1_wrap])
 * cdef void ** prolate_radial2_data = alloc_data_from_list([<int> <void *>prolate_radial2_wrap, <int> <void *>prolate_radial2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** oblate_aswfa_data = alloc_data_from_list([<int> <void *>oblate_aswfa_wrap, <int> <void *>oblate_aswfa_wrap])
 * cdef void ** oblate_radial1_data = alloc_data_from_list([<int> <void *>oblate_radial1_wrap, <int> <void *>oblate_radial1_wrap])
 */
  __pyx_t_5 = ((int)((void *)prolate_radial2_wrap));
  __pyx_t_2 = ((int)((void *)prolate_radial2_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_prolate_radial2_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":542
 * cdef void ** prolate_radial1_data = alloc_data_from_list([<int> <void *>prolate_radial1_wrap, <int> <void *>prolate_radial1_wrap])
 * cdef void ** prolate_radial2_data = alloc_data_from_list([<int> <void *>prolate_radial2_wrap, <int> <void *>prolate_radial2_wrap])
 * cdef void ** oblate_aswfa_data = alloc_data_from_list([<int> <void *>oblate_aswfa_wrap, <int> <void *>oblate_aswfa_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** oblate_radial1_data = alloc_data_from_list([<int> <void *>oblate_radial1_wrap, <int> <void *>oblate_radial1_wrap])
 * cdef void ** oblate_radial2_data = alloc_data_from_list([<int> <void *>oblate_radial2_wrap, <int> <void *>oblate_radial2_wrap])
 */
  __pyx_t_1 = ((int)((void *)oblate_aswfa_wrap));
  __pyx_t_2 = ((int)((void *)oblate_aswfa_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_oblate_aswfa_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":543
 * cdef void ** prolate_radial2_data = alloc_data_from_list([<int> <void *>prolate_radial2_wrap, <int> <void *>prolate_radial2_wrap])
 * cdef void ** oblate_aswfa_data = alloc_data_from_list([<int> <void *>oblate_aswfa_wrap, <int> <void *>oblate_aswfa_wrap])
 * cdef void ** oblate_radial1_data = alloc_data_from_list([<int> <void *>oblate_radial1_wrap, <int> <void *>oblate_radial1_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** oblate_radial2_data = alloc_data_from_list([<int> <void *>oblate_radial2_wrap, <int> <void *>oblate_radial2_wrap])
 * cdef void ** prolate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>prolate_aswfa_nocv_wrap, <int> <void *>prolate_aswfa_nocv_wrap])
 */
  __pyx_t_5 = ((int)((void *)oblate_radial1_wrap));
  __pyx_t_2 = ((int)((void *)oblate_radial1_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_oblate_radial1_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":544
 * cdef void ** oblate_aswfa_data = alloc_data_from_list([<int> <void *>oblate_aswfa_wrap, <int> <void *>oblate_aswfa_wrap])
 * cdef void ** oblate_radial1_data = alloc_data_from_list([<int> <void *>oblate_radial1_wrap, <int> <void *>oblate_radial1_wrap])
 * cdef void ** oblate_radial2_data = alloc_data_from_list([<int> <void *>oblate_radial2_wrap, <int> <void *>oblate_radial2_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** prolate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>prolate_aswfa_nocv_wrap, <int> <void *>prolate_aswfa_nocv_wrap])
 * cdef void ** prolate_radial1_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial1_nocv_wrap, <int> <void *>prolate_radial1_nocv_wrap])
 */
  __pyx_t_1 = ((int)((void *)oblate_radial2_wrap));
  __pyx_t_2 = ((int)((void *)oblate_radial2_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_oblate_radial2_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":545
 * cdef void ** oblate_radial1_data = alloc_data_from_list([<int> <void *>oblate_radial1_wrap, <int> <void *>oblate_radial1_wrap])
 * cdef void ** oblate_radial2_data = alloc_data_from_list([<int> <void *>oblate_radial2_wrap, <int> <void *>oblate_radial2_wrap])
 * cdef void ** prolate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>prolate_aswfa_nocv_wrap, <int> <void *>prolate_aswfa_nocv_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** prolate_radial1_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial1_nocv_wrap, <int> <void *>prolate_radial1_nocv_wrap])
 * cdef void ** prolate_radial2_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial2_nocv_wrap, <int> <void *>prolate_radial2_nocv_wrap])
 */
  __pyx_t_5 = ((int)((void *)prolate_aswfa_nocv_wrap));
  __pyx_t_2 = ((int)((void *)prolate_aswfa_nocv_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_prolate_aswfa_nocv_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":546
 * cdef void ** oblate_radial2_data = alloc_data_from_list([<int> <void *>oblate_radial2_wrap, <int> <void *>oblate_radial2_wrap])
 * cdef void ** prolate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>prolate_aswfa_nocv_wrap, <int> <void *>prolate_aswfa_nocv_wrap])
 * cdef void ** prolate_radial1_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial1_nocv_wrap, <int> <void *>prolate_radial1_nocv_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** prolate_radial2_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial2_nocv_wrap, <int> <void *>prolate_radial2_nocv_wrap])
 * cdef void ** oblate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>oblate_aswfa_nocv_wrap, <int> <void *>oblate_aswfa_nocv_wrap])
 */
  __pyx_t_1 = ((int)((void *)prolate_radial1_nocv_wrap));
  __pyx_t_2 = ((int)((void *)prolate_radial1_nocv_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_prolate_radial1_nocv_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":547
 * cdef void ** prolate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>prolate_aswfa_nocv_wrap, <int> <void *>prolate_aswfa_nocv_wrap])
 * cdef void ** prolate_radial1_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial1_nocv_wrap, <int> <void *>prolate_radial1_nocv_wrap])
 * cdef void ** prolate_radial2_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial2_nocv_wrap, <int> <void *>prolate_radial2_nocv_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** oblate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>oblate_aswfa_nocv_wrap, <int> <void *>oblate_aswfa_nocv_wrap])
 * cdef void ** oblate_radial1_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial1_nocv_wrap, <int> <void *>oblate_radial1_nocv_wrap])
 */
  __pyx_t_5 = ((int)((void *)prolate_radial2_nocv_wrap));
  __pyx_t_2 = ((int)((void *)prolate_radial2_nocv_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_prolate_radial2_nocv_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":548
 * cdef void ** prolate_radial1_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial1_nocv_wrap, <int> <void *>prolate_radial1_nocv_wrap])
 * cdef void ** prolate_radial2_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial2_nocv_wrap, <int> <void *>prolate_radial2_nocv_wrap])
 * cdef void ** oblate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>oblate_aswfa_nocv_wrap, <int> <void *>oblate_aswfa_nocv_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** oblate_radial1_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial1_nocv_wrap, <int> <void *>oblate_radial1_nocv_wrap])
 * cdef void ** oblate_radial2_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial2_nocv_wrap, <int> <void *>oblate_radial2_nocv_wrap])
 */
  __pyx_t_1 = ((int)((void *)oblate_aswfa_nocv_wrap));
  __pyx_t_2 = ((int)((void *)oblate_aswfa_nocv_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_oblate_aswfa_nocv_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":549
 * cdef void ** prolate_radial2_nocv_data = alloc_data_from_list([<int> <void *>prolate_radial2_nocv_wrap, <int> <void *>prolate_radial2_nocv_wrap])
 * cdef void ** oblate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>oblate_aswfa_nocv_wrap, <int> <void *>oblate_aswfa_nocv_wrap])
 * cdef void ** oblate_radial1_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial1_nocv_wrap, <int> <void *>oblate_radial1_nocv_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** oblate_radial2_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial2_nocv_wrap, <int> <void *>oblate_radial2_nocv_wrap])
 * cdef void ** prolate_segv_data = alloc_data_from_list([<int> <void *>prolate_segv_wrap, <int> <void *>prolate_segv_wrap])
 */
  __pyx_t_5 = ((int)((void *)oblate_radial1_nocv_wrap));
  __pyx_t_2 = ((int)((void *)oblate_radial1_nocv_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_oblate_radial1_nocv_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":550
 * cdef void ** oblate_aswfa_nocv_data = alloc_data_from_list([<int> <void *>oblate_aswfa_nocv_wrap, <int> <void *>oblate_aswfa_nocv_wrap])
 * cdef void ** oblate_radial1_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial1_nocv_wrap, <int> <void *>oblate_radial1_nocv_wrap])
 * cdef void ** oblate_radial2_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial2_nocv_wrap, <int> <void *>oblate_radial2_nocv_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** prolate_segv_data = alloc_data_from_list([<int> <void *>prolate_segv_wrap, <int> <void *>prolate_segv_wrap])
 * cdef void ** oblate_segv_data = alloc_data_from_list([<int> <void *>oblate_segv_wrap, <int> <void *>oblate_segv_wrap])
 */
  __pyx_t_1 = ((int)((void *)oblate_radial2_nocv_wrap));
  __pyx_t_2 = ((int)((void *)oblate_radial2_nocv_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_oblate_radial2_nocv_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":551
 * cdef void ** oblate_radial1_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial1_nocv_wrap, <int> <void *>oblate_radial1_nocv_wrap])
 * cdef void ** oblate_radial2_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial2_nocv_wrap, <int> <void *>oblate_radial2_nocv_wrap])
 * cdef void ** prolate_segv_data = alloc_data_from_list([<int> <void *>prolate_segv_wrap, <int> <void *>prolate_segv_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** oblate_segv_data = alloc_data_from_list([<int> <void *>oblate_segv_wrap, <int> <void *>oblate_segv_wrap])
 * cdef void ** modfresnelp_data = alloc_data_from_list([<int> <void *>modified_fresnel_plus_wrap, <int> <void *>modified_fresnel_plus_wrap])
 */
  __pyx_t_5 = ((int)((void *)prolate_segv_wrap));
  __pyx_t_2 = ((int)((void *)prolate_segv_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_prolate_segv_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":552
 * cdef void ** oblate_radial2_nocv_data = alloc_data_from_list([<int> <void *>oblate_radial2_nocv_wrap, <int> <void *>oblate_radial2_nocv_wrap])
 * cdef void ** prolate_segv_data = alloc_data_from_list([<int> <void *>prolate_segv_wrap, <int> <void *>prolate_segv_wrap])
 * cdef void ** oblate_segv_data = alloc_data_from_list([<int> <void *>oblate_segv_wrap, <int> <void *>oblate_segv_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** modfresnelp_data = alloc_data_from_list([<int> <void *>modified_fresnel_plus_wrap, <int> <void *>modified_fresnel_plus_wrap])
 * cdef void ** modfresnelm_data = alloc_data_from_list([<int> <void *>modified_fresnel_minus_wrap, <int> <void *>modified_fresnel_minus_wrap])
 */
  __pyx_t_1 = ((int)((void *)oblate_segv_wrap));
  __pyx_t_2 = ((int)((void *)oblate_segv_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_oblate_segv_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":553
 * cdef void ** prolate_segv_data = alloc_data_from_list([<int> <void *>prolate_segv_wrap, <int> <void *>prolate_segv_wrap])
 * cdef void ** oblate_segv_data = alloc_data_from_list([<int> <void *>oblate_segv_wrap, <int> <void *>oblate_segv_wrap])
 * cdef void ** modfresnelp_data = alloc_data_from_list([<int> <void *>modified_fresnel_plus_wrap, <int> <void *>modified_fresnel_plus_wrap])             # <<<<<<<<<<<<<<
 * cdef void ** modfresnelm_data = alloc_data_from_list([<int> <void *>modified_fresnel_minus_wrap, <int> <void *>modified_fresnel_minus_wrap])
 * 
 */
  __pyx_t_5 = ((int)((void *)modified_fresnel_plus_wrap));
  __pyx_t_2 = ((int)((void *)modified_fresnel_plus_wrap));
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_modfresnelp_data = alloc_data_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":554
 * cdef void ** oblate_segv_data = alloc_data_from_list([<int> <void *>oblate_segv_wrap, <int> <void *>oblate_segv_wrap])
 * cdef void ** modfresnelp_data = alloc_data_from_list([<int> <void *>modified_fresnel_plus_wrap, <int> <void *>modified_fresnel_plus_wrap])
 * cdef void ** modfresnelm_data = alloc_data_from_list([<int> <void *>modified_fresnel_minus_wrap, <int> <void *>modified_fresnel_minus_wrap])             # <<<<<<<<<<<<<<
 * 
 * cdef char* alloc_types_from_list(l):
 */
  __pyx_t_1 = ((int)((void *)modified_fresnel_minus_wrap));
  __pyx_t_2 = ((int)((void *)modified_fresnel_minus_wrap));
  __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_modfresnelm_data = alloc_data_from_list(((System::Object^)__pyx_t_5));
  __pyx_t_5 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":562
 *     return r
 * 
 * cdef char* cephes_7_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])             # <<<<<<<<<<<<<<
 * cdef char* cephes_6_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
 * cdef char* cephes_5_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
 */
  __pyx_t_5 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_2 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_1 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_4 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_3 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_6 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_7 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_8 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_9 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_10 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_11 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_12 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_13 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_14 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_15 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_5, __pyx_t_2, __pyx_t_1, __pyx_t_4, __pyx_t_3, __pyx_t_6, __pyx_t_7, __pyx_t_8, __pyx_t_9, __pyx_t_10, __pyx_t_11, __pyx_t_12, __pyx_t_13, __pyx_t_14});
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_8 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_t_10 = nullptr;
  __pyx_t_11 = nullptr;
  __pyx_t_12 = nullptr;
  __pyx_t_13 = nullptr;
  __pyx_t_14 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_7_types = alloc_types_from_list(((System::Object^)__pyx_t_15));
  __pyx_t_15 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":563
 * 
 * cdef char* cephes_7_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
 * cdef char* cephes_6_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])             # <<<<<<<<<<<<<<
 * cdef char* cephes_5_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
 * 
 */
  __pyx_t_15 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_14 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_13 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_12 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_11 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_10 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_9 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_8 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_7 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_6 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_3 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_4 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_15, __pyx_t_14, __pyx_t_13, __pyx_t_12, __pyx_t_11, __pyx_t_10, __pyx_t_9, __pyx_t_8, __pyx_t_7, __pyx_t_6, __pyx_t_3, __pyx_t_4});
  __pyx_t_15 = nullptr;
  __pyx_t_14 = nullptr;
  __pyx_t_13 = nullptr;
  __pyx_t_12 = nullptr;
  __pyx_t_11 = nullptr;
  __pyx_t_10 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_t_8 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_6_types = alloc_types_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":564
 * cdef char* cephes_7_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
 * cdef char* cephes_6_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
 * cdef char* cephes_5_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])             # <<<<<<<<<<<<<<
 * 
 * cdef char* cephes_5b2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE,  np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, ])
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_4 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_3 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_6 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_7 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_8 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_9 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_10 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_11 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_12 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_13 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_4, __pyx_t_3, __pyx_t_6, __pyx_t_7, __pyx_t_8, __pyx_t_9, __pyx_t_10, __pyx_t_11, __pyx_t_12});
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_8 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_t_10 = nullptr;
  __pyx_t_11 = nullptr;
  __pyx_t_12 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_5_types = alloc_types_from_list(((System::Object^)__pyx_t_13));
  __pyx_t_13 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":566
 * cdef char* cephes_5_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
 * 
 * cdef char* cephes_5b2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE,  np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, ])             # <<<<<<<<<<<<<<
 * 
 * cdef char* cephes_5c_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 */
  __pyx_t_13 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_12 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_11 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_10 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_9 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_8 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_7 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_6 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_3 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_4 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_13, __pyx_t_12, __pyx_t_11, __pyx_t_10, __pyx_t_9, __pyx_t_8, __pyx_t_7, __pyx_t_6, __pyx_t_3, __pyx_t_4});
  __pyx_t_13 = nullptr;
  __pyx_t_12 = nullptr;
  __pyx_t_11 = nullptr;
  __pyx_t_10 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_t_8 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_5b2_types = alloc_types_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":568
 * cdef char* cephes_5b2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE,  np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, ])
 * 
 * cdef char* cephes_5c_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])             # <<<<<<<<<<<<<<
 * 
 * cdef char* cephes_5c2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_4 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_3 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_6 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_7 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_8 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_9 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_10 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_11 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_12 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_13 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_14 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_15 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_2 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_5 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_16 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_17 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_18 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_19 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_20 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_21 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_4, __pyx_t_3, __pyx_t_6, __pyx_t_7, __pyx_t_8, __pyx_t_9, __pyx_t_10, __pyx_t_11, __pyx_t_12, __pyx_t_13, __pyx_t_14, __pyx_t_15, __pyx_t_2, __pyx_t_5, __pyx_t_16, __pyx_t_17, __pyx_t_18, __pyx_t_19, __pyx_t_20});
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_8 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_t_10 = nullptr;
  __pyx_t_11 = nullptr;
  __pyx_t_12 = nullptr;
  __pyx_t_13 = nullptr;
  __pyx_t_14 = nullptr;
  __pyx_t_15 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_16 = nullptr;
  __pyx_t_17 = nullptr;
  __pyx_t_18 = nullptr;
  __pyx_t_19 = nullptr;
  __pyx_t_20 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_5c_types = alloc_types_from_list(((System::Object^)__pyx_t_21));
  __pyx_t_21 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":570
 * cdef char* cephes_5c_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * 
 * cdef char* cephes_5c2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])             # <<<<<<<<<<<<<<
 * 
 * cdef char* cephes_4_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
 */
  __pyx_t_21 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_20 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_19 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_18 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_17 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_16 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_5 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_15 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_14 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_13 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_12 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_11 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_10 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_9 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_8 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_7 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_6 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_3 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_4 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_21, __pyx_t_20, __pyx_t_19, __pyx_t_18, __pyx_t_17, __pyx_t_16, __pyx_t_5, __pyx_t_2, __pyx_t_15, __pyx_t_14, __pyx_t_13, __pyx_t_12, __pyx_t_11, __pyx_t_10, __pyx_t_9, __pyx_t_8, __pyx_t_7, __pyx_t_6, __pyx_t_3, __pyx_t_4});
  __pyx_t_21 = nullptr;
  __pyx_t_20 = nullptr;
  __pyx_t_19 = nullptr;
  __pyx_t_18 = nullptr;
  __pyx_t_17 = nullptr;
  __pyx_t_16 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_15 = nullptr;
  __pyx_t_14 = nullptr;
  __pyx_t_13 = nullptr;
  __pyx_t_12 = nullptr;
  __pyx_t_11 = nullptr;
  __pyx_t_10 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_t_8 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_5c2_types = alloc_types_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":572
 * cdef char* cephes_5c2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * 
 * cdef char* cephes_4_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])             # <<<<<<<<<<<<<<
 * 
 * cdef char* cephes_4c_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE ])
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_4 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_3 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_6 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_7 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_8 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_9 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_10 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_11 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_4, __pyx_t_3, __pyx_t_6, __pyx_t_7, __pyx_t_8, __pyx_t_9, __pyx_t_10});
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_8 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_t_10 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_4_types = alloc_types_from_list(((System::Object^)__pyx_t_11));
  __pyx_t_11 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":574
 * cdef char* cephes_4_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, ])
 * 
 * cdef char* cephes_4c_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE ])             # <<<<<<<<<<<<<<
 * 
 * cdef char* cephes_3_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT,   np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE,  ])
 */
  __pyx_t_11 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_10 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_9 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_8 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_7 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_6 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_3 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_4 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_1 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_12 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_13 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_14 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_15 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_5 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_16 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_17 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_11, __pyx_t_10, __pyx_t_9, __pyx_t_8, __pyx_t_7, __pyx_t_6, __pyx_t_3, __pyx_t_4, __pyx_t_1, __pyx_t_12, __pyx_t_13, __pyx_t_14, __pyx_t_15, __pyx_t_2, __pyx_t_5, __pyx_t_16});
  __pyx_t_11 = nullptr;
  __pyx_t_10 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_t_8 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_12 = nullptr;
  __pyx_t_13 = nullptr;
  __pyx_t_14 = nullptr;
  __pyx_t_15 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_16 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_4c_types = alloc_types_from_list(((System::Object^)__pyx_t_17));
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":576
 * cdef char* cephes_4c_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE ])
 * 
 * cdef char* cephes_3_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT,   np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE,  ])             # <<<<<<<<<<<<<<
 * cdef char* cephes_3_cmplx_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT,   np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CFLOAT,  np.NPY_CFLOAT,  np.NPY_CFLOAT,   np.NPY_CDOUBLE,  np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * cdef char* cephes_3c_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 */
  __pyx_t_17 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_16 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_5 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_15 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_14 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_13 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_17, __pyx_t_16, __pyx_t_5, __pyx_t_2, __pyx_t_15, __pyx_t_14});
  __pyx_t_17 = nullptr;
  __pyx_t_16 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_15 = nullptr;
  __pyx_t_14 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_3_types = alloc_types_from_list(((System::Object^)__pyx_t_13));
  __pyx_t_13 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":577
 * 
 * cdef char* cephes_3_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT,   np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE,  ])
 * cdef char* cephes_3_cmplx_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT,   np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CFLOAT,  np.NPY_CFLOAT,  np.NPY_CFLOAT,   np.NPY_CDOUBLE,  np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])             # <<<<<<<<<<<<<<
 * cdef char* cephes_3c_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * cdef char* cephes_3cp_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 */
  __pyx_t_13 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_14 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_15 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_5 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_16 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_17 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_12 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_1 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_4 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_3 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_6 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_7 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_13, __pyx_t_14, __pyx_t_15, __pyx_t_2, __pyx_t_5, __pyx_t_16, __pyx_t_17, __pyx_t_12, __pyx_t_1, __pyx_t_4, __pyx_t_3, __pyx_t_6});
  __pyx_t_13 = nullptr;
  __pyx_t_14 = nullptr;
  __pyx_t_15 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_16 = nullptr;
  __pyx_t_17 = nullptr;
  __pyx_t_12 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_3_cmplx_types = alloc_types_from_list(((System::Object^)__pyx_t_7));
  __pyx_t_7 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":578
 * cdef char* cephes_3_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT,   np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE,  ])
 * cdef char* cephes_3_cmplx_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT,   np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CFLOAT,  np.NPY_CFLOAT,  np.NPY_CFLOAT,   np.NPY_CDOUBLE,  np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * cdef char* cephes_3c_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])             # <<<<<<<<<<<<<<
 * cdef char* cephes_3cp_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * cdef char* cephes_2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_DOUBLE,  np.NPY_DOUBLE,   ])
 */
  __pyx_t_7 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_6 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_3 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_4 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_1 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_12 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_17 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_16 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_5 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_15 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_14 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_13 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_7, __pyx_t_6, __pyx_t_3, __pyx_t_4, __pyx_t_1, __pyx_t_12, __pyx_t_17, __pyx_t_16, __pyx_t_5, __pyx_t_2, __pyx_t_15, __pyx_t_14});
  __pyx_t_7 = nullptr;
  __pyx_t_6 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_12 = nullptr;
  __pyx_t_17 = nullptr;
  __pyx_t_16 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_15 = nullptr;
  __pyx_t_14 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_3c_types = alloc_types_from_list(((System::Object^)__pyx_t_13));
  __pyx_t_13 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":579
 * cdef char* cephes_3_cmplx_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_FLOAT,   np.NPY_DOUBLE,  np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_CFLOAT,  np.NPY_CFLOAT,  np.NPY_CFLOAT,   np.NPY_CDOUBLE,  np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * cdef char* cephes_3c_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * cdef char* cephes_3cp_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])             # <<<<<<<<<<<<<<
 * cdef char* cephes_2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_DOUBLE,  np.NPY_DOUBLE,   ])
 * cdef char* cephes_1rc_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_DOUBLE,  np.NPY_DOUBLE,  np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE  ])
 */
  __pyx_t_13 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_14 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_15 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_5 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_16 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_17 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_13, __pyx_t_14, __pyx_t_15, __pyx_t_2, __pyx_t_5, __pyx_t_16});
  __pyx_t_13 = nullptr;
  __pyx_t_14 = nullptr;
  __pyx_t_15 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_16 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_3cp_types = alloc_types_from_list(((System::Object^)__pyx_t_17));
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":580
 * cdef char* cephes_3c_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_FLOAT, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_DOUBLE, np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * cdef char* cephes_3cp_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * cdef char* cephes_2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_DOUBLE,  np.NPY_DOUBLE,   ])             # <<<<<<<<<<<<<<
 * cdef char* cephes_1rc_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_DOUBLE,  np.NPY_DOUBLE,  np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE  ])
 * cdef char* cephes_1c_types = alloc_types_from_list([ np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 */
  __pyx_t_17 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_16 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_5 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_2 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_15 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_17, __pyx_t_16, __pyx_t_5, __pyx_t_2});
  __pyx_t_17 = nullptr;
  __pyx_t_16 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_2_types = alloc_types_from_list(((System::Object^)__pyx_t_15));
  __pyx_t_15 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":581
 * cdef char* cephes_3cp_types = alloc_types_from_list([ np.NPY_FLOAT, np.NPY_CFLOAT,  np.NPY_CFLOAT, np.NPY_DOUBLE, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * cdef char* cephes_2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_DOUBLE,  np.NPY_DOUBLE,   ])
 * cdef char* cephes_1rc_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_DOUBLE,  np.NPY_DOUBLE,  np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE  ])             # <<<<<<<<<<<<<<
 * cdef char* cephes_1c_types = alloc_types_from_list([ np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * 
 */
  __pyx_t_15 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_2 = (System::Object^)(long long)(NPY_FLOAT);
  __pyx_t_5 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_16 = (System::Object^)(long long)(NPY_DOUBLE);
  __pyx_t_17 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_14 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_13 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_12 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_15, __pyx_t_2, __pyx_t_5, __pyx_t_16, __pyx_t_17, __pyx_t_14, __pyx_t_13, __pyx_t_12});
  __pyx_t_15 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_16 = nullptr;
  __pyx_t_17 = nullptr;
  __pyx_t_14 = nullptr;
  __pyx_t_13 = nullptr;
  __pyx_t_12 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_1rc_types = alloc_types_from_list(((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":582
 * cdef char* cephes_2_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_DOUBLE,  np.NPY_DOUBLE,   ])
 * cdef char* cephes_1rc_types = alloc_types_from_list([ np.NPY_FLOAT,  np.NPY_FLOAT,  np.NPY_DOUBLE,  np.NPY_DOUBLE,  np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE  ])
 * cdef char* cephes_1c_types = alloc_types_from_list([ np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])             # <<<<<<<<<<<<<<
 * 
 * cephes1_functions[0] = NpyUFunc_f_f_As_d_d
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_12 = (System::Object^)(long long)(NPY_CFLOAT);
  __pyx_t_13 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_14 = (System::Object^)(long long)(NPY_CDOUBLE);
  __pyx_t_17 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_12, __pyx_t_13, __pyx_t_14});
  __pyx_t_1 = nullptr;
  __pyx_t_12 = nullptr;
  __pyx_t_13 = nullptr;
  __pyx_t_14 = nullptr;
  __pyx_v_5scipy_7special_7_cephes_cephes_1c_types = alloc_types_from_list(((System::Object^)__pyx_t_17));
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":584
 * cdef char* cephes_1c_types = alloc_types_from_list([ np.NPY_CFLOAT, np.NPY_CFLOAT, np.NPY_CDOUBLE, np.NPY_CDOUBLE,  ])
 * 
 * cephes1_functions[0] = NpyUFunc_f_f_As_d_d             # <<<<<<<<<<<<<<
 * cephes1_functions[1] = NpyUFunc_d_d
 * cephes1c_functions[0] = cephes_F_F_As_D_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1_functions[0]) = NpyUFunc_f_f_As_d_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":585
 * 
 * cephes1_functions[0] = NpyUFunc_f_f_As_d_d
 * cephes1_functions[1] = NpyUFunc_d_d             # <<<<<<<<<<<<<<
 * cephes1c_functions[0] = cephes_F_F_As_D_D
 * cephes1c_functions[1] = cephes_D_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1_functions[1]) = NpyUFunc_d_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":586
 * cephes1_functions[0] = NpyUFunc_f_f_As_d_d
 * cephes1_functions[1] = NpyUFunc_d_d
 * cephes1c_functions[0] = cephes_F_F_As_D_D             # <<<<<<<<<<<<<<
 * cephes1c_functions[1] = cephes_D_D
 * cephes1rc_functions[0] = NpyUFunc_f_f_As_d_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1c_functions[0]) = cephes_F_F_As_D_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":587
 * cephes1_functions[1] = NpyUFunc_d_d
 * cephes1c_functions[0] = cephes_F_F_As_D_D
 * cephes1c_functions[1] = cephes_D_D             # <<<<<<<<<<<<<<
 * cephes1rc_functions[0] = NpyUFunc_f_f_As_d_d
 * cephes1rc_functions[1] = NpyUFunc_d_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1c_functions[1]) = cephes_D_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":588
 * cephes1c_functions[0] = cephes_F_F_As_D_D
 * cephes1c_functions[1] = cephes_D_D
 * cephes1rc_functions[0] = NpyUFunc_f_f_As_d_d             # <<<<<<<<<<<<<<
 * cephes1rc_functions[1] = NpyUFunc_d_d
 * cephes1rc_functions[2] = cephes_F_F_As_D_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions[0]) = NpyUFunc_f_f_As_d_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":589
 * cephes1c_functions[1] = cephes_D_D
 * cephes1rc_functions[0] = NpyUFunc_f_f_As_d_d
 * cephes1rc_functions[1] = NpyUFunc_d_d             # <<<<<<<<<<<<<<
 * cephes1rc_functions[2] = cephes_F_F_As_D_D
 * cephes1rc_functions[3] = cephes_D_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions[1]) = NpyUFunc_d_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":590
 * cephes1rc_functions[0] = NpyUFunc_f_f_As_d_d
 * cephes1rc_functions[1] = NpyUFunc_d_d
 * cephes1rc_functions[2] = cephes_F_F_As_D_D             # <<<<<<<<<<<<<<
 * cephes1rc_functions[3] = cephes_D_D
 * cephes1_2_functions[0] = NpyUFunc_f_ff_As_d_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions[2]) = cephes_F_F_As_D_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":591
 * cephes1rc_functions[1] = NpyUFunc_d_d
 * cephes1rc_functions[2] = cephes_F_F_As_D_D
 * cephes1rc_functions[3] = cephes_D_D             # <<<<<<<<<<<<<<
 * cephes1_2_functions[0] = NpyUFunc_f_ff_As_d_dd
 * cephes1_2_functions[1] = NpyUFunc_d_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions[3]) = cephes_D_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":592
 * cephes1rc_functions[2] = cephes_F_F_As_D_D
 * cephes1rc_functions[3] = cephes_D_D
 * cephes1_2_functions[0] = NpyUFunc_f_ff_As_d_dd             # <<<<<<<<<<<<<<
 * cephes1_2_functions[1] = NpyUFunc_d_dd
 * cephes1_2_functions[2] = NpyUFunc_F_FF_As_D_DD
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions[0]) = NpyUFunc_f_ff_As_d_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":593
 * cephes1rc_functions[3] = cephes_D_D
 * cephes1_2_functions[0] = NpyUFunc_f_ff_As_d_dd
 * cephes1_2_functions[1] = NpyUFunc_d_dd             # <<<<<<<<<<<<<<
 * cephes1_2_functions[2] = NpyUFunc_F_FF_As_D_DD
 * cephes1_2_functions[3] = NpyUFunc_D_DD
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions[1]) = NpyUFunc_d_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":594
 * cephes1_2_functions[0] = NpyUFunc_f_ff_As_d_dd
 * cephes1_2_functions[1] = NpyUFunc_d_dd
 * cephes1_2_functions[2] = NpyUFunc_F_FF_As_D_DD             # <<<<<<<<<<<<<<
 * cephes1_2_functions[3] = NpyUFunc_D_DD
 * cephes1_2c_functions[0] = NpyUFunc_f_FF_As_d_DD
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions[2]) = NpyUFunc_F_FF_As_D_DD;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":595
 * cephes1_2_functions[1] = NpyUFunc_d_dd
 * cephes1_2_functions[2] = NpyUFunc_F_FF_As_D_DD
 * cephes1_2_functions[3] = NpyUFunc_D_DD             # <<<<<<<<<<<<<<
 * cephes1_2c_functions[0] = NpyUFunc_f_FF_As_d_DD
 * cephes1_2c_functions[1] = NpyUFunc_d_DD
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions[3]) = NpyUFunc_D_DD;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":596
 * cephes1_2_functions[2] = NpyUFunc_F_FF_As_D_DD
 * cephes1_2_functions[3] = NpyUFunc_D_DD
 * cephes1_2c_functions[0] = NpyUFunc_f_FF_As_d_DD             # <<<<<<<<<<<<<<
 * cephes1_2c_functions[1] = NpyUFunc_d_DD
 * cephes1c_4_functions[0] = NpyUFunc_f_ffff_As_d_dddd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1_2c_functions[0]) = NpyUFunc_f_FF_As_d_DD;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":597
 * cephes1_2_functions[3] = NpyUFunc_D_DD
 * cephes1_2c_functions[0] = NpyUFunc_f_FF_As_d_DD
 * cephes1_2c_functions[1] = NpyUFunc_d_DD             # <<<<<<<<<<<<<<
 * cephes1c_4_functions[0] = NpyUFunc_f_ffff_As_d_dddd
 * cephes1c_4_functions[1] = NpyUFunc_d_dddd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1_2c_functions[1]) = NpyUFunc_d_DD;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":598
 * cephes1_2c_functions[0] = NpyUFunc_f_FF_As_d_DD
 * cephes1_2c_functions[1] = NpyUFunc_d_DD
 * cephes1c_4_functions[0] = NpyUFunc_f_ffff_As_d_dddd             # <<<<<<<<<<<<<<
 * cephes1c_4_functions[1] = NpyUFunc_d_dddd
 * cephes1c_4_functions[2] = NpyUFunc_F_FFFF_As_D_DDDD
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1c_4_functions[0]) = NpyUFunc_f_ffff_As_d_dddd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":599
 * cephes1_2c_functions[1] = NpyUFunc_d_DD
 * cephes1c_4_functions[0] = NpyUFunc_f_ffff_As_d_dddd
 * cephes1c_4_functions[1] = NpyUFunc_d_dddd             # <<<<<<<<<<<<<<
 * cephes1c_4_functions[2] = NpyUFunc_F_FFFF_As_D_DDDD
 * cephes1c_4_functions[3] = NpyUFunc_D_DDDD
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1c_4_functions[1]) = NpyUFunc_d_dddd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":600
 * cephes1c_4_functions[0] = NpyUFunc_f_ffff_As_d_dddd
 * cephes1c_4_functions[1] = NpyUFunc_d_dddd
 * cephes1c_4_functions[2] = NpyUFunc_F_FFFF_As_D_DDDD             # <<<<<<<<<<<<<<
 * cephes1c_4_functions[3] = NpyUFunc_D_DDDD
 * cephes1cpb_4_functions[0] = NpyUFunc_f_FFFF_As_d_DDDD
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1c_4_functions[2]) = NpyUFunc_F_FFFF_As_D_DDDD;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":601
 * cephes1c_4_functions[1] = NpyUFunc_d_dddd
 * cephes1c_4_functions[2] = NpyUFunc_F_FFFF_As_D_DDDD
 * cephes1c_4_functions[3] = NpyUFunc_D_DDDD             # <<<<<<<<<<<<<<
 * cephes1cpb_4_functions[0] = NpyUFunc_f_FFFF_As_d_DDDD
 * cephes1cpb_4_functions[1] = NpyUFunc_d_DDDD
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1c_4_functions[3]) = NpyUFunc_D_DDDD;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":602
 * cephes1c_4_functions[2] = NpyUFunc_F_FFFF_As_D_DDDD
 * cephes1c_4_functions[3] = NpyUFunc_D_DDDD
 * cephes1cpb_4_functions[0] = NpyUFunc_f_FFFF_As_d_DDDD             # <<<<<<<<<<<<<<
 * cephes1cpb_4_functions[1] = NpyUFunc_d_DDDD
 * cephes2_functions[0] = NpyUFunc_ff_f_As_dd_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1cpb_4_functions[0]) = NpyUFunc_f_FFFF_As_d_DDDD;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":603
 * cephes1c_4_functions[3] = NpyUFunc_D_DDDD
 * cephes1cpb_4_functions[0] = NpyUFunc_f_FFFF_As_d_DDDD
 * cephes1cpb_4_functions[1] = NpyUFunc_d_DDDD             # <<<<<<<<<<<<<<
 * cephes2_functions[0] = NpyUFunc_ff_f_As_dd_d
 * cephes2_functions[1] = NpyUFunc_dd_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes1cpb_4_functions[1]) = NpyUFunc_d_DDDD;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":604
 * cephes1cpb_4_functions[0] = NpyUFunc_f_FFFF_As_d_DDDD
 * cephes1cpb_4_functions[1] = NpyUFunc_d_DDDD
 * cephes2_functions[0] = NpyUFunc_ff_f_As_dd_d             # <<<<<<<<<<<<<<
 * cephes2_functions[1] = NpyUFunc_dd_d
 * cephes2_2_functions[0] = NpyUFunc_ff_ff_As_dd_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2_functions[0]) = NpyUFunc_ff_f_As_dd_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":605
 * cephes1cpb_4_functions[1] = NpyUFunc_d_DDDD
 * cephes2_functions[0] = NpyUFunc_ff_f_As_dd_d
 * cephes2_functions[1] = NpyUFunc_dd_d             # <<<<<<<<<<<<<<
 * cephes2_2_functions[0] = NpyUFunc_ff_ff_As_dd_dd
 * cephes2_2_functions[1] = NpyUFunc_dd_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2_functions[1]) = NpyUFunc_dd_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":606
 * cephes2_functions[0] = NpyUFunc_ff_f_As_dd_d
 * cephes2_functions[1] = NpyUFunc_dd_d
 * cephes2_2_functions[0] = NpyUFunc_ff_ff_As_dd_dd             # <<<<<<<<<<<<<<
 * cephes2_2_functions[1] = NpyUFunc_dd_dd
 * cephes2a_functions[0] = NpyUFunc_ff_f_As_id_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2_2_functions[0]) = NpyUFunc_ff_ff_As_dd_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":607
 * cephes2_functions[1] = NpyUFunc_dd_d
 * cephes2_2_functions[0] = NpyUFunc_ff_ff_As_dd_dd
 * cephes2_2_functions[1] = NpyUFunc_dd_dd             # <<<<<<<<<<<<<<
 * cephes2a_functions[0] = NpyUFunc_ff_f_As_id_d
 * cephes2a_functions[1] = NpyUFunc_dd_d_As_id_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2_2_functions[1]) = NpyUFunc_dd_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":608
 * cephes2_2_functions[0] = NpyUFunc_ff_ff_As_dd_dd
 * cephes2_2_functions[1] = NpyUFunc_dd_dd
 * cephes2a_functions[0] = NpyUFunc_ff_f_As_id_d             # <<<<<<<<<<<<<<
 * cephes2a_functions[1] = NpyUFunc_dd_d_As_id_d
 * cephes2c_functions[0] = NpyUFunc_ff_f_As_dd_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2a_functions[0]) = NpyUFunc_ff_f_As_id_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":609
 * cephes2_2_functions[1] = NpyUFunc_dd_dd
 * cephes2a_functions[0] = NpyUFunc_ff_f_As_id_d
 * cephes2a_functions[1] = NpyUFunc_dd_d_As_id_d             # <<<<<<<<<<<<<<
 * cephes2c_functions[0] = NpyUFunc_ff_f_As_dd_d
 * cephes2c_functions[1] = NpyUFunc_dd_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2a_functions[1]) = NpyUFunc_dd_d_As_id_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":610
 * cephes2a_functions[0] = NpyUFunc_ff_f_As_id_d
 * cephes2a_functions[1] = NpyUFunc_dd_d_As_id_d
 * cephes2c_functions[0] = NpyUFunc_ff_f_As_dd_d             # <<<<<<<<<<<<<<
 * cephes2c_functions[1] = NpyUFunc_dd_d
 * cephes2c_functions[2] = NpyUFunc_fF_F_As_dD_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2c_functions[0]) = NpyUFunc_ff_f_As_dd_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":611
 * cephes2a_functions[1] = NpyUFunc_dd_d_As_id_d
 * cephes2c_functions[0] = NpyUFunc_ff_f_As_dd_d
 * cephes2c_functions[1] = NpyUFunc_dd_d             # <<<<<<<<<<<<<<
 * cephes2c_functions[2] = NpyUFunc_fF_F_As_dD_D
 * cephes2c_functions[3] = NpyUFunc_dD_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2c_functions[1]) = NpyUFunc_dd_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":612
 * cephes2c_functions[0] = NpyUFunc_ff_f_As_dd_d
 * cephes2c_functions[1] = NpyUFunc_dd_d
 * cephes2c_functions[2] = NpyUFunc_fF_F_As_dD_D             # <<<<<<<<<<<<<<
 * cephes2c_functions[3] = NpyUFunc_dD_D
 * cephes2cpp_functions[0] = NpyUFunc_fF_F_As_dD_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2c_functions[2]) = NpyUFunc_fF_F_As_dD_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":613
 * cephes2c_functions[1] = NpyUFunc_dd_d
 * cephes2c_functions[2] = NpyUFunc_fF_F_As_dD_D
 * cephes2c_functions[3] = NpyUFunc_dD_D             # <<<<<<<<<<<<<<
 * cephes2cpp_functions[0] = NpyUFunc_fF_F_As_dD_D
 * cephes2cpp_functions[1] = NpyUFunc_dD_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2c_functions[3]) = NpyUFunc_dD_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":614
 * cephes2c_functions[2] = NpyUFunc_fF_F_As_dD_D
 * cephes2c_functions[3] = NpyUFunc_dD_D
 * cephes2cpp_functions[0] = NpyUFunc_fF_F_As_dD_D             # <<<<<<<<<<<<<<
 * cephes2cpp_functions[1] = NpyUFunc_dD_D
 * cephes2_4_functions[0] = NpyUFunc_ff_ffff_As_dd_dddd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2cpp_functions[0]) = NpyUFunc_fF_F_As_dD_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":615
 * cephes2c_functions[3] = NpyUFunc_dD_D
 * cephes2cpp_functions[0] = NpyUFunc_fF_F_As_dD_D
 * cephes2cpp_functions[1] = NpyUFunc_dD_D             # <<<<<<<<<<<<<<
 * cephes2_4_functions[0] = NpyUFunc_ff_ffff_As_dd_dddd
 * cephes2_4_functions[1] = NpyUFunc_dd_dddd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2cpp_functions[1]) = NpyUFunc_dD_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":616
 * cephes2cpp_functions[0] = NpyUFunc_fF_F_As_dD_D
 * cephes2cpp_functions[1] = NpyUFunc_dD_D
 * cephes2_4_functions[0] = NpyUFunc_ff_ffff_As_dd_dddd             # <<<<<<<<<<<<<<
 * cephes2_4_functions[1] = NpyUFunc_dd_dddd
 * cephes3_functions[0] = NpyUFunc_fff_f_As_ddd_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2_4_functions[0]) = NpyUFunc_ff_ffff_As_dd_dddd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":617
 * cephes2cpp_functions[1] = NpyUFunc_dD_D
 * cephes2_4_functions[0] = NpyUFunc_ff_ffff_As_dd_dddd
 * cephes2_4_functions[1] = NpyUFunc_dd_dddd             # <<<<<<<<<<<<<<
 * cephes3_functions[0] = NpyUFunc_fff_f_As_ddd_d
 * cephes3_functions[1] = NpyUFunc_ddd_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes2_4_functions[1]) = NpyUFunc_dd_dddd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":618
 * cephes2_4_functions[0] = NpyUFunc_ff_ffff_As_dd_dddd
 * cephes2_4_functions[1] = NpyUFunc_dd_dddd
 * cephes3_functions[0] = NpyUFunc_fff_f_As_ddd_d             # <<<<<<<<<<<<<<
 * cephes3_functions[1] = NpyUFunc_ddd_d
 * cephes3_functions[2] = NpyUFunc_ffF_F_As_ddD_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes3_functions[0]) = NpyUFunc_fff_f_As_ddd_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":619
 * cephes2_4_functions[1] = NpyUFunc_dd_dddd
 * cephes3_functions[0] = NpyUFunc_fff_f_As_ddd_d
 * cephes3_functions[1] = NpyUFunc_ddd_d             # <<<<<<<<<<<<<<
 * cephes3_functions[2] = NpyUFunc_ffF_F_As_ddD_D
 * cephes3_functions[3] = NpyUFunc_ddD_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes3_functions[1]) = NpyUFunc_ddd_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":620
 * cephes3_functions[0] = NpyUFunc_fff_f_As_ddd_d
 * cephes3_functions[1] = NpyUFunc_ddd_d
 * cephes3_functions[2] = NpyUFunc_ffF_F_As_ddD_D             # <<<<<<<<<<<<<<
 * cephes3_functions[3] = NpyUFunc_ddD_D
 * cephes3a_functions[0] = NpyUFunc_fff_f_As_iid_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes3_functions[2]) = NpyUFunc_ffF_F_As_ddD_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":621
 * cephes3_functions[1] = NpyUFunc_ddd_d
 * cephes3_functions[2] = NpyUFunc_ffF_F_As_ddD_D
 * cephes3_functions[3] = NpyUFunc_ddD_D             # <<<<<<<<<<<<<<
 * cephes3a_functions[0] = NpyUFunc_fff_f_As_iid_d
 * cephes3a_functions[1] = NpyUFunc_ddd_d_As_iid_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes3_functions[3]) = NpyUFunc_ddD_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":622
 * cephes3_functions[2] = NpyUFunc_ffF_F_As_ddD_D
 * cephes3_functions[3] = NpyUFunc_ddD_D
 * cephes3a_functions[0] = NpyUFunc_fff_f_As_iid_d             # <<<<<<<<<<<<<<
 * cephes3a_functions[1] = NpyUFunc_ddd_d_As_iid_d
 * cephes3_2_functions[0] = NpyUFunc_fff_ff_As_ddd_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes3a_functions[0]) = NpyUFunc_fff_f_As_iid_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":623
 * cephes3_functions[3] = NpyUFunc_ddD_D
 * cephes3a_functions[0] = NpyUFunc_fff_f_As_iid_d
 * cephes3a_functions[1] = NpyUFunc_ddd_d_As_iid_d             # <<<<<<<<<<<<<<
 * cephes3_2_functions[0] = NpyUFunc_fff_ff_As_ddd_dd
 * cephes3_2_functions[1] = NpyUFunc_ddd_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes3a_functions[1]) = NpyUFunc_ddd_d_As_iid_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":624
 * cephes3a_functions[0] = NpyUFunc_fff_f_As_iid_d
 * cephes3a_functions[1] = NpyUFunc_ddd_d_As_iid_d
 * cephes3_2_functions[0] = NpyUFunc_fff_ff_As_ddd_dd             # <<<<<<<<<<<<<<
 * cephes3_2_functions[1] = NpyUFunc_ddd_dd
 * cephes4_functions[0] = NpyUFunc_ffff_f_As_dddd_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes3_2_functions[0]) = NpyUFunc_fff_ff_As_ddd_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":625
 * cephes3a_functions[1] = NpyUFunc_ddd_d_As_iid_d
 * cephes3_2_functions[0] = NpyUFunc_fff_ff_As_ddd_dd
 * cephes3_2_functions[1] = NpyUFunc_ddd_dd             # <<<<<<<<<<<<<<
 * cephes4_functions[0] = NpyUFunc_ffff_f_As_dddd_d
 * cephes4_functions[1] = NpyUFunc_dddd_d
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes3_2_functions[1]) = NpyUFunc_ddd_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":626
 * cephes3_2_functions[0] = NpyUFunc_fff_ff_As_ddd_dd
 * cephes3_2_functions[1] = NpyUFunc_ddd_dd
 * cephes4_functions[0] = NpyUFunc_ffff_f_As_dddd_d             # <<<<<<<<<<<<<<
 * cephes4_functions[1] = NpyUFunc_dddd_d
 * cephes4_functions[2] = NpyUFunc_fffF_F_As_dddD_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes4_functions[0]) = NpyUFunc_ffff_f_As_dddd_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":627
 * cephes3_2_functions[1] = NpyUFunc_ddd_dd
 * cephes4_functions[0] = NpyUFunc_ffff_f_As_dddd_d
 * cephes4_functions[1] = NpyUFunc_dddd_d             # <<<<<<<<<<<<<<
 * cephes4_functions[2] = NpyUFunc_fffF_F_As_dddD_D
 * cephes4_functions[3] = NpyUFunc_dddD_D
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes4_functions[1]) = NpyUFunc_dddd_d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":628
 * cephes4_functions[0] = NpyUFunc_ffff_f_As_dddd_d
 * cephes4_functions[1] = NpyUFunc_dddd_d
 * cephes4_functions[2] = NpyUFunc_fffF_F_As_dddD_D             # <<<<<<<<<<<<<<
 * cephes4_functions[3] = NpyUFunc_dddD_D
 * cephes4_2_functions[0] = NpyUFunc_ffff_ff_As_dddd_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes4_functions[2]) = NpyUFunc_fffF_F_As_dddD_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":629
 * cephes4_functions[1] = NpyUFunc_dddd_d
 * cephes4_functions[2] = NpyUFunc_fffF_F_As_dddD_D
 * cephes4_functions[3] = NpyUFunc_dddD_D             # <<<<<<<<<<<<<<
 * cephes4_2_functions[0] = NpyUFunc_ffff_ff_As_dddd_dd
 * cephes4_2_functions[1] = NpyUFunc_dddd_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes4_functions[3]) = NpyUFunc_dddD_D;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":630
 * cephes4_functions[2] = NpyUFunc_fffF_F_As_dddD_D
 * cephes4_functions[3] = NpyUFunc_dddD_D
 * cephes4_2_functions[0] = NpyUFunc_ffff_ff_As_dddd_dd             # <<<<<<<<<<<<<<
 * cephes4_2_functions[1] = NpyUFunc_dddd_dd
 * cephes4a_2_functions[0] = NpyUFunc_ffff_ff_As_dddi_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes4_2_functions[0]) = NpyUFunc_ffff_ff_As_dddd_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":631
 * cephes4_functions[3] = NpyUFunc_dddD_D
 * cephes4_2_functions[0] = NpyUFunc_ffff_ff_As_dddd_dd
 * cephes4_2_functions[1] = NpyUFunc_dddd_dd             # <<<<<<<<<<<<<<
 * cephes4a_2_functions[0] = NpyUFunc_ffff_ff_As_dddi_dd
 * cephes4a_2_functions[1] = NpyUFunc_dddd_dd_As_dddi_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes4_2_functions[1]) = NpyUFunc_dddd_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":632
 * cephes4_2_functions[0] = NpyUFunc_ffff_ff_As_dddd_dd
 * cephes4_2_functions[1] = NpyUFunc_dddd_dd
 * cephes4a_2_functions[0] = NpyUFunc_ffff_ff_As_dddi_dd             # <<<<<<<<<<<<<<
 * cephes4a_2_functions[1] = NpyUFunc_dddd_dd_As_dddi_dd
 * cephes5_2_functions[0] = NpyUFunc_fffff_ff_As_ddddd_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes4a_2_functions[0]) = NpyUFunc_ffff_ff_As_dddi_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":633
 * cephes4_2_functions[1] = NpyUFunc_dddd_dd
 * cephes4a_2_functions[0] = NpyUFunc_ffff_ff_As_dddi_dd
 * cephes4a_2_functions[1] = NpyUFunc_dddd_dd_As_dddi_dd             # <<<<<<<<<<<<<<
 * cephes5_2_functions[0] = NpyUFunc_fffff_ff_As_ddddd_dd
 * cephes5_2_functions[1] = NpyUFunc_ddddd_dd
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes4a_2_functions[1]) = NpyUFunc_dddd_dd_As_dddi_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":634
 * cephes4a_2_functions[0] = NpyUFunc_ffff_ff_As_dddi_dd
 * cephes4a_2_functions[1] = NpyUFunc_dddd_dd_As_dddi_dd
 * cephes5_2_functions[0] = NpyUFunc_fffff_ff_As_ddddd_dd             # <<<<<<<<<<<<<<
 * cephes5_2_functions[1] = NpyUFunc_ddddd_dd
 * 
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes5_2_functions[0]) = NpyUFunc_fffff_ff_As_ddddd_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":635
 * cephes4a_2_functions[1] = NpyUFunc_dddd_dd_As_dddi_dd
 * cephes5_2_functions[0] = NpyUFunc_fffff_ff_As_ddddd_dd
 * cephes5_2_functions[1] = NpyUFunc_ddddd_dd             # <<<<<<<<<<<<<<
 * 
 * airy_doc = "(Ai,Aip,Bi,Bip)=airy(z) calculates the Airy functions and their derivatives\nevaluated at real or complex number z.  The Airy functions Ai and Bi \nare two independent solutions of y''(x)=xy.  Aip and Bip are the first derivatives\nevaluated at x of Ai and Bi respectively."
 */
  (__pyx_v_5scipy_7special_7_cephes_cephes5_2_functions[1]) = NpyUFunc_ddddd_dd;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":637
 * cephes5_2_functions[1] = NpyUFunc_ddddd_dd
 * 
 * airy_doc = "(Ai,Aip,Bi,Bip)=airy(z) calculates the Airy functions and their derivatives\nevaluated at real or complex number z.  The Airy functions Ai and Bi \nare two independent solutions of y''(x)=xy.  Aip and Bip are the first derivatives\nevaluated at x of Ai and Bi respectively."             # <<<<<<<<<<<<<<
 * airye_doc = "(Aie,Aipe,Bie,Bipe)=airye(z) calculates the exponentially scaled Airy functions and \ntheir derivatives evaluated at real or complex number z.  \nairye(z)[0:1] = airy(z)[0:1] * exp(2.0/3.0*z*sqrt(z))\nairye(z)[2:3] = airy(z)[2:3] * exp(-abs((2.0/3.0*z*sqrt(z)).real))"
 * bdtr_doc = "y=bdtr(k,n,p) returns the sum of the terms 0 through k of the\nBinomial probability density:  sum(nCj p**j (1-p)**(n-j),j=0..k)"
 */
  PythonOps::SetGlobal(__pyx_context, "airy_doc", ((System::Object^)"(Ai,Aip,Bi,Bip)=airy(z) calculates the Airy functions and their derivatives\nevaluated at real or complex number z.  The Airy functions Ai and Bi \nare two independent solutions of y''(x)=xy.  Aip and Bip are the first derivatives\nevaluated at x of Ai and Bi respectively."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":638
 * 
 * airy_doc = "(Ai,Aip,Bi,Bip)=airy(z) calculates the Airy functions and their derivatives\nevaluated at real or complex number z.  The Airy functions Ai and Bi \nare two independent solutions of y''(x)=xy.  Aip and Bip are the first derivatives\nevaluated at x of Ai and Bi respectively."
 * airye_doc = "(Aie,Aipe,Bie,Bipe)=airye(z) calculates the exponentially scaled Airy functions and \ntheir derivatives evaluated at real or complex number z.  \nairye(z)[0:1] = airy(z)[0:1] * exp(2.0/3.0*z*sqrt(z))\nairye(z)[2:3] = airy(z)[2:3] * exp(-abs((2.0/3.0*z*sqrt(z)).real))"             # <<<<<<<<<<<<<<
 * bdtr_doc = "y=bdtr(k,n,p) returns the sum of the terms 0 through k of the\nBinomial probability density:  sum(nCj p**j (1-p)**(n-j),j=0..k)"
 * bdtrc_doc = "y=bdtrc(k,n,p) returns the sum of the terms k+1 through n of the\nBinomial probability density: sum(nCj p**j (1-p)**(n-j), j=k+1..n)"
 */
  PythonOps::SetGlobal(__pyx_context, "airye_doc", ((System::Object^)"(Aie,Aipe,Bie,Bipe)=airye(z) calculates the exponentially scaled Airy functions and \ntheir derivatives evaluated at real or complex number z.  \nairye(z)[0:1] = airy(z)[0:1] * exp(2.0/3.0*z*sqrt(z))\nairye(z)[2:3] = airy(z)[2:3] * exp(-abs((2.0/3.0*z*sqrt(z)).real))"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":639
 * airy_doc = "(Ai,Aip,Bi,Bip)=airy(z) calculates the Airy functions and their derivatives\nevaluated at real or complex number z.  The Airy functions Ai and Bi \nare two independent solutions of y''(x)=xy.  Aip and Bip are the first derivatives\nevaluated at x of Ai and Bi respectively."
 * airye_doc = "(Aie,Aipe,Bie,Bipe)=airye(z) calculates the exponentially scaled Airy functions and \ntheir derivatives evaluated at real or complex number z.  \nairye(z)[0:1] = airy(z)[0:1] * exp(2.0/3.0*z*sqrt(z))\nairye(z)[2:3] = airy(z)[2:3] * exp(-abs((2.0/3.0*z*sqrt(z)).real))"
 * bdtr_doc = "y=bdtr(k,n,p) returns the sum of the terms 0 through k of the\nBinomial probability density:  sum(nCj p**j (1-p)**(n-j),j=0..k)"             # <<<<<<<<<<<<<<
 * bdtrc_doc = "y=bdtrc(k,n,p) returns the sum of the terms k+1 through n of the\nBinomial probability density: sum(nCj p**j (1-p)**(n-j), j=k+1..n)"
 * bdtri_doc = "p=bdtri(k,n,y) finds the probability p such that the sum of the\nterms 0 through k of the Binomial probability density is equal to the\ngiven cumulative probability y."
 */
  PythonOps::SetGlobal(__pyx_context, "bdtr_doc", ((System::Object^)"y=bdtr(k,n,p) returns the sum of the terms 0 through k of the\nBinomial probability density:  sum(nCj p**j (1-p)**(n-j),j=0..k)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":640
 * airye_doc = "(Aie,Aipe,Bie,Bipe)=airye(z) calculates the exponentially scaled Airy functions and \ntheir derivatives evaluated at real or complex number z.  \nairye(z)[0:1] = airy(z)[0:1] * exp(2.0/3.0*z*sqrt(z))\nairye(z)[2:3] = airy(z)[2:3] * exp(-abs((2.0/3.0*z*sqrt(z)).real))"
 * bdtr_doc = "y=bdtr(k,n,p) returns the sum of the terms 0 through k of the\nBinomial probability density:  sum(nCj p**j (1-p)**(n-j),j=0..k)"
 * bdtrc_doc = "y=bdtrc(k,n,p) returns the sum of the terms k+1 through n of the\nBinomial probability density: sum(nCj p**j (1-p)**(n-j), j=k+1..n)"             # <<<<<<<<<<<<<<
 * bdtri_doc = "p=bdtri(k,n,y) finds the probability p such that the sum of the\nterms 0 through k of the Binomial probability density is equal to the\ngiven cumulative probability y."
 * bei_doc = "y=bei(x) returns the Kelvin function bei x"
 */
  PythonOps::SetGlobal(__pyx_context, "bdtrc_doc", ((System::Object^)"y=bdtrc(k,n,p) returns the sum of the terms k+1 through n of the\nBinomial probability density: sum(nCj p**j (1-p)**(n-j), j=k+1..n)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":641
 * bdtr_doc = "y=bdtr(k,n,p) returns the sum of the terms 0 through k of the\nBinomial probability density:  sum(nCj p**j (1-p)**(n-j),j=0..k)"
 * bdtrc_doc = "y=bdtrc(k,n,p) returns the sum of the terms k+1 through n of the\nBinomial probability density: sum(nCj p**j (1-p)**(n-j), j=k+1..n)"
 * bdtri_doc = "p=bdtri(k,n,y) finds the probability p such that the sum of the\nterms 0 through k of the Binomial probability density is equal to the\ngiven cumulative probability y."             # <<<<<<<<<<<<<<
 * bei_doc = "y=bei(x) returns the Kelvin function bei x"
 * beip_doc = "y=beip(x) returns the derivative of the Kelvin function bei x"
 */
  PythonOps::SetGlobal(__pyx_context, "bdtri_doc", ((System::Object^)"p=bdtri(k,n,y) finds the probability p such that the sum of the\nterms 0 through k of the Binomial probability density is equal to the\ngiven cumulative probability y."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":642
 * bdtrc_doc = "y=bdtrc(k,n,p) returns the sum of the terms k+1 through n of the\nBinomial probability density: sum(nCj p**j (1-p)**(n-j), j=k+1..n)"
 * bdtri_doc = "p=bdtri(k,n,y) finds the probability p such that the sum of the\nterms 0 through k of the Binomial probability density is equal to the\ngiven cumulative probability y."
 * bei_doc = "y=bei(x) returns the Kelvin function bei x"             # <<<<<<<<<<<<<<
 * beip_doc = "y=beip(x) returns the derivative of the Kelvin function bei x"
 * ber_doc = "y=ber(x) returns the Kelvin function ber x"
 */
  PythonOps::SetGlobal(__pyx_context, "bei_doc", ((System::Object^)"y=bei(x) returns the Kelvin function bei x"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":643
 * bdtri_doc = "p=bdtri(k,n,y) finds the probability p such that the sum of the\nterms 0 through k of the Binomial probability density is equal to the\ngiven cumulative probability y."
 * bei_doc = "y=bei(x) returns the Kelvin function bei x"
 * beip_doc = "y=beip(x) returns the derivative of the Kelvin function bei x"             # <<<<<<<<<<<<<<
 * ber_doc = "y=ber(x) returns the Kelvin function ber x"
 * berp_doc = "y=berp(x) returns the derivative of the Kelvin function ber x"
 */
  PythonOps::SetGlobal(__pyx_context, "beip_doc", ((System::Object^)"y=beip(x) returns the derivative of the Kelvin function bei x"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":644
 * bei_doc = "y=bei(x) returns the Kelvin function bei x"
 * beip_doc = "y=beip(x) returns the derivative of the Kelvin function bei x"
 * ber_doc = "y=ber(x) returns the Kelvin function ber x"             # <<<<<<<<<<<<<<
 * berp_doc = "y=berp(x) returns the derivative of the Kelvin function ber x"
 * besselpoly_doc = "y=besselpoly(a,lam,nu) returns the value of the integral:\nintegral(x**lam * jv(nu,2*a*x),x=0..1)."
 */
  PythonOps::SetGlobal(__pyx_context, "ber_doc", ((System::Object^)"y=ber(x) returns the Kelvin function ber x"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":645
 * beip_doc = "y=beip(x) returns the derivative of the Kelvin function bei x"
 * ber_doc = "y=ber(x) returns the Kelvin function ber x"
 * berp_doc = "y=berp(x) returns the derivative of the Kelvin function ber x"             # <<<<<<<<<<<<<<
 * besselpoly_doc = "y=besselpoly(a,lam,nu) returns the value of the integral:\nintegral(x**lam * jv(nu,2*a*x),x=0..1)."
 * beta_doc = "y=beta(a,b) returns gamma(a) * gamma(b) / gamma(a+b)"
 */
  PythonOps::SetGlobal(__pyx_context, "berp_doc", ((System::Object^)"y=berp(x) returns the derivative of the Kelvin function ber x"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":646
 * ber_doc = "y=ber(x) returns the Kelvin function ber x"
 * berp_doc = "y=berp(x) returns the derivative of the Kelvin function ber x"
 * besselpoly_doc = "y=besselpoly(a,lam,nu) returns the value of the integral:\nintegral(x**lam * jv(nu,2*a*x),x=0..1)."             # <<<<<<<<<<<<<<
 * beta_doc = "y=beta(a,b) returns gamma(a) * gamma(b) / gamma(a+b)"
 * betainc_doc = "y=betainc(a,b,x) returns the incomplete beta integral of the\n" \
 */
  PythonOps::SetGlobal(__pyx_context, "besselpoly_doc", ((System::Object^)"y=besselpoly(a,lam,nu) returns the value of the integral:\nintegral(x**lam * jv(nu,2*a*x),x=0..1)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":647
 * berp_doc = "y=berp(x) returns the derivative of the Kelvin function ber x"
 * besselpoly_doc = "y=besselpoly(a,lam,nu) returns the value of the integral:\nintegral(x**lam * jv(nu,2*a*x),x=0..1)."
 * beta_doc = "y=beta(a,b) returns gamma(a) * gamma(b) / gamma(a+b)"             # <<<<<<<<<<<<<<
 * betainc_doc = "y=betainc(a,b,x) returns the incomplete beta integral of the\n" \
 *                 "arguments, evaluated from zero to x: \n\n" \
 */
  PythonOps::SetGlobal(__pyx_context, "beta_doc", ((System::Object^)"y=beta(a,b) returns gamma(a) * gamma(b) / gamma(a+b)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":648
 * besselpoly_doc = "y=besselpoly(a,lam,nu) returns the value of the integral:\nintegral(x**lam * jv(nu,2*a*x),x=0..1)."
 * beta_doc = "y=beta(a,b) returns gamma(a) * gamma(b) / gamma(a+b)"
 * betainc_doc = "y=betainc(a,b,x) returns the incomplete beta integral of the\n" \             # <<<<<<<<<<<<<<
 *                 "arguments, evaluated from zero to x: \n\n" \
 *                 "gamma(a+b) / (gamma(a)*gamma(b)) * integral(t**(a-1) (1-t)**(b-1), t=0..x).\n" \
 */
  PythonOps::SetGlobal(__pyx_context, "betainc_doc", ((System::Object^)"y=betainc(a,b,x) returns the incomplete beta integral of the\narguments, evaluated from zero to x: \n\ngamma(a+b) / (gamma(a)*gamma(b)) * integral(t**(a-1) (1-t)**(b-1), t=0..x).\n\nNote\n----\nThe incomplete beta is also sometimes defined without the terms\nin gamma, in which case the above definition is the so-called regularized\nincomplete beta. Under this definition, you can get the incomplete beta by\nmultiplying the result of the scipy function by beta(a, b)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":658
 *                 "incomplete beta. Under this definition, you can get the incomplete beta by\n" \
 *                 "multiplying the result of the scipy function by beta(a, b)."
 * betaincinv_doc = "x=betaincinv(a,b,y) returns x such that betainc(a,b,x) = y."             # <<<<<<<<<<<<<<
 * betaln_doc = "y=betaln(a,b) returns the natural logarithm of the absolute value of\nbeta: ln(|beta(x)|)."
 * btdtr_doc = "y=btdtr(a,b,x) returns the area from zero to x under the beta\ndensity function: gamma(a+b)/(gamma(a)*gamma(b)))*integral(t**(a-1)\n(1-t)**(b-1), t=0..x).  SEE ALSO betainc"
 */
  PythonOps::SetGlobal(__pyx_context, "betaincinv_doc", ((System::Object^)"x=betaincinv(a,b,y) returns x such that betainc(a,b,x) = y."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":659
 *                 "multiplying the result of the scipy function by beta(a, b)."
 * betaincinv_doc = "x=betaincinv(a,b,y) returns x such that betainc(a,b,x) = y."
 * betaln_doc = "y=betaln(a,b) returns the natural logarithm of the absolute value of\nbeta: ln(|beta(x)|)."             # <<<<<<<<<<<<<<
 * btdtr_doc = "y=btdtr(a,b,x) returns the area from zero to x under the beta\ndensity function: gamma(a+b)/(gamma(a)*gamma(b)))*integral(t**(a-1)\n(1-t)**(b-1), t=0..x).  SEE ALSO betainc"
 * btdtri_doc = "x=btdtri(a,b,p) returns the pth quantile of the beta distribution.  It is\neffectively the inverse of btdtr returning the value of x for which \nbtdtr(a,b,x) = p.   SEE ALSO betaincinv"
 */
  PythonOps::SetGlobal(__pyx_context, "betaln_doc", ((System::Object^)"y=betaln(a,b) returns the natural logarithm of the absolute value of\nbeta: ln(|beta(x)|)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":660
 * betaincinv_doc = "x=betaincinv(a,b,y) returns x such that betainc(a,b,x) = y."
 * betaln_doc = "y=betaln(a,b) returns the natural logarithm of the absolute value of\nbeta: ln(|beta(x)|)."
 * btdtr_doc = "y=btdtr(a,b,x) returns the area from zero to x under the beta\ndensity function: gamma(a+b)/(gamma(a)*gamma(b)))*integral(t**(a-1)\n(1-t)**(b-1), t=0..x).  SEE ALSO betainc"             # <<<<<<<<<<<<<<
 * btdtri_doc = "x=btdtri(a,b,p) returns the pth quantile of the beta distribution.  It is\neffectively the inverse of btdtr returning the value of x for which \nbtdtr(a,b,x) = p.   SEE ALSO betaincinv"
 * cbrt_doc = "y=cbrt(x) returns the real cube root of x."
 */
  PythonOps::SetGlobal(__pyx_context, "btdtr_doc", ((System::Object^)"y=btdtr(a,b,x) returns the area from zero to x under the beta\ndensity function: gamma(a+b)/(gamma(a)*gamma(b)))*integral(t**(a-1)\n(1-t)**(b-1), t=0..x).  SEE ALSO betainc"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":661
 * betaln_doc = "y=betaln(a,b) returns the natural logarithm of the absolute value of\nbeta: ln(|beta(x)|)."
 * btdtr_doc = "y=btdtr(a,b,x) returns the area from zero to x under the beta\ndensity function: gamma(a+b)/(gamma(a)*gamma(b)))*integral(t**(a-1)\n(1-t)**(b-1), t=0..x).  SEE ALSO betainc"
 * btdtri_doc = "x=btdtri(a,b,p) returns the pth quantile of the beta distribution.  It is\neffectively the inverse of btdtr returning the value of x for which \nbtdtr(a,b,x) = p.   SEE ALSO betaincinv"             # <<<<<<<<<<<<<<
 * cbrt_doc = "y=cbrt(x) returns the real cube root of x."
 * chdtr_doc = "p=chdtr(v,x) Returns the area under the left hand tail (from 0 to x) of the Chi\nsquare probability density function with v degrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=0..x)"
 */
  PythonOps::SetGlobal(__pyx_context, "btdtri_doc", ((System::Object^)"x=btdtri(a,b,p) returns the pth quantile of the beta distribution.  It is\neffectively the inverse of btdtr returning the value of x for which \nbtdtr(a,b,x) = p.   SEE ALSO betaincinv"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":662
 * btdtr_doc = "y=btdtr(a,b,x) returns the area from zero to x under the beta\ndensity function: gamma(a+b)/(gamma(a)*gamma(b)))*integral(t**(a-1)\n(1-t)**(b-1), t=0..x).  SEE ALSO betainc"
 * btdtri_doc = "x=btdtri(a,b,p) returns the pth quantile of the beta distribution.  It is\neffectively the inverse of btdtr returning the value of x for which \nbtdtr(a,b,x) = p.   SEE ALSO betaincinv"
 * cbrt_doc = "y=cbrt(x) returns the real cube root of x."             # <<<<<<<<<<<<<<
 * chdtr_doc = "p=chdtr(v,x) Returns the area under the left hand tail (from 0 to x) of the Chi\nsquare probability density function with v degrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=0..x)"
 * chdtrc_doc = "p=chdtrc(v,x) returns the area under the right hand tail (from x to\ninfinity) of the Chi square probability density function with v\ndegrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=x..inf)"
 */
  PythonOps::SetGlobal(__pyx_context, "cbrt_doc", ((System::Object^)"y=cbrt(x) returns the real cube root of x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":663
 * btdtri_doc = "x=btdtri(a,b,p) returns the pth quantile of the beta distribution.  It is\neffectively the inverse of btdtr returning the value of x for which \nbtdtr(a,b,x) = p.   SEE ALSO betaincinv"
 * cbrt_doc = "y=cbrt(x) returns the real cube root of x."
 * chdtr_doc = "p=chdtr(v,x) Returns the area under the left hand tail (from 0 to x) of the Chi\nsquare probability density function with v degrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=0..x)"             # <<<<<<<<<<<<<<
 * chdtrc_doc = "p=chdtrc(v,x) returns the area under the right hand tail (from x to\ninfinity) of the Chi square probability density function with v\ndegrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=x..inf)"
 * chdtri_doc = "x=chdtri(v,p) returns the argument x such that chdtrc(v,x) is equal\nto p."
 */
  PythonOps::SetGlobal(__pyx_context, "chdtr_doc", ((System::Object^)"p=chdtr(v,x) Returns the area under the left hand tail (from 0 to x) of the Chi\nsquare probability density function with v degrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=0..x)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":664
 * cbrt_doc = "y=cbrt(x) returns the real cube root of x."
 * chdtr_doc = "p=chdtr(v,x) Returns the area under the left hand tail (from 0 to x) of the Chi\nsquare probability density function with v degrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=0..x)"
 * chdtrc_doc = "p=chdtrc(v,x) returns the area under the right hand tail (from x to\ninfinity) of the Chi square probability density function with v\ndegrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=x..inf)"             # <<<<<<<<<<<<<<
 * chdtri_doc = "x=chdtri(v,p) returns the argument x such that chdtrc(v,x) is equal\nto p."
 * cosdg_doc = "y=cosdg(x) calculates the cosine of the angle x given in degrees."
 */
  PythonOps::SetGlobal(__pyx_context, "chdtrc_doc", ((System::Object^)"p=chdtrc(v,x) returns the area under the right hand tail (from x to\ninfinity) of the Chi square probability density function with v\ndegrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=x..inf)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":665
 * chdtr_doc = "p=chdtr(v,x) Returns the area under the left hand tail (from 0 to x) of the Chi\nsquare probability density function with v degrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=0..x)"
 * chdtrc_doc = "p=chdtrc(v,x) returns the area under the right hand tail (from x to\ninfinity) of the Chi square probability density function with v\ndegrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=x..inf)"
 * chdtri_doc = "x=chdtri(v,p) returns the argument x such that chdtrc(v,x) is equal\nto p."             # <<<<<<<<<<<<<<
 * cosdg_doc = "y=cosdg(x) calculates the cosine of the angle x given in degrees."
 * cosm1_doc = "y=calculates cos(x) - 1 for use when x is near zero."
 */
  PythonOps::SetGlobal(__pyx_context, "chdtri_doc", ((System::Object^)"x=chdtri(v,p) returns the argument x such that chdtrc(v,x) is equal\nto p."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":666
 * chdtrc_doc = "p=chdtrc(v,x) returns the area under the right hand tail (from x to\ninfinity) of the Chi square probability density function with v\ndegrees of freedom:\n1/(2**(v/2) * gamma(v/2)) * integral(t**(v/2-1) * exp(-t/2), t=x..inf)"
 * chdtri_doc = "x=chdtri(v,p) returns the argument x such that chdtrc(v,x) is equal\nto p."
 * cosdg_doc = "y=cosdg(x) calculates the cosine of the angle x given in degrees."             # <<<<<<<<<<<<<<
 * cosm1_doc = "y=calculates cos(x) - 1 for use when x is near zero."
 * cotdg_doc = "y=cotdg(x) calculates the cotangent of the angle x given in degrees."
 */
  PythonOps::SetGlobal(__pyx_context, "cosdg_doc", ((System::Object^)"y=cosdg(x) calculates the cosine of the angle x given in degrees."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":667
 * chdtri_doc = "x=chdtri(v,p) returns the argument x such that chdtrc(v,x) is equal\nto p."
 * cosdg_doc = "y=cosdg(x) calculates the cosine of the angle x given in degrees."
 * cosm1_doc = "y=calculates cos(x) - 1 for use when x is near zero."             # <<<<<<<<<<<<<<
 * cotdg_doc = "y=cotdg(x) calculates the cotangent of the angle x given in degrees."
 * dawsn_doc = "y=dawsn(x) returns dawson's integral: exp(-x**2) *\nintegral(exp(t**2),t=0..x)."
 */
  PythonOps::SetGlobal(__pyx_context, "cosm1_doc", ((System::Object^)"y=calculates cos(x) - 1 for use when x is near zero."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":668
 * cosdg_doc = "y=cosdg(x) calculates the cosine of the angle x given in degrees."
 * cosm1_doc = "y=calculates cos(x) - 1 for use when x is near zero."
 * cotdg_doc = "y=cotdg(x) calculates the cotangent of the angle x given in degrees."             # <<<<<<<<<<<<<<
 * dawsn_doc = "y=dawsn(x) returns dawson's integral: exp(-x**2) *\nintegral(exp(t**2),t=0..x)."
 * ellipe_doc = "y=ellipe(m) returns the complete integral of the second kind:\nintegral(sqrt(1-m*sin(t)**2),t=0..pi/2)"
 */
  PythonOps::SetGlobal(__pyx_context, "cotdg_doc", ((System::Object^)"y=cotdg(x) calculates the cotangent of the angle x given in degrees."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":669
 * cosm1_doc = "y=calculates cos(x) - 1 for use when x is near zero."
 * cotdg_doc = "y=cotdg(x) calculates the cotangent of the angle x given in degrees."
 * dawsn_doc = "y=dawsn(x) returns dawson's integral: exp(-x**2) *\nintegral(exp(t**2),t=0..x)."             # <<<<<<<<<<<<<<
 * ellipe_doc = "y=ellipe(m) returns the complete integral of the second kind:\nintegral(sqrt(1-m*sin(t)**2),t=0..pi/2)"
 * ellipeinc_doc = "y=ellipeinc(phi,m) returns the incomplete elliptic integral of the\nsecond kind: integral(sqrt(1-m*sin(t)**2),t=0..phi)"
 */
  PythonOps::SetGlobal(__pyx_context, "dawsn_doc", ((System::Object^)"y=dawsn(x) returns dawson's integral: exp(-x**2) *\nintegral(exp(t**2),t=0..x)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":670
 * cotdg_doc = "y=cotdg(x) calculates the cotangent of the angle x given in degrees."
 * dawsn_doc = "y=dawsn(x) returns dawson's integral: exp(-x**2) *\nintegral(exp(t**2),t=0..x)."
 * ellipe_doc = "y=ellipe(m) returns the complete integral of the second kind:\nintegral(sqrt(1-m*sin(t)**2),t=0..pi/2)"             # <<<<<<<<<<<<<<
 * ellipeinc_doc = "y=ellipeinc(phi,m) returns the incomplete elliptic integral of the\nsecond kind: integral(sqrt(1-m*sin(t)**2),t=0..phi)"
 * ellipj_doc = "(sn,cn,dn,ph)=ellipj(u,m) calculates the Jacobian elliptic functions of\nparameter m between 0 and 1, and real u.  The returned functions are\noften written sn(u|m), cn(u|m), and dn(u|m).  The value of ph is such\nthat if u = ellik(ph,m), then sn(u|m) = sin(ph) and cn(u|m) = cos(ph)."
 */
  PythonOps::SetGlobal(__pyx_context, "ellipe_doc", ((System::Object^)"y=ellipe(m) returns the complete integral of the second kind:\nintegral(sqrt(1-m*sin(t)**2),t=0..pi/2)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":671
 * dawsn_doc = "y=dawsn(x) returns dawson's integral: exp(-x**2) *\nintegral(exp(t**2),t=0..x)."
 * ellipe_doc = "y=ellipe(m) returns the complete integral of the second kind:\nintegral(sqrt(1-m*sin(t)**2),t=0..pi/2)"
 * ellipeinc_doc = "y=ellipeinc(phi,m) returns the incomplete elliptic integral of the\nsecond kind: integral(sqrt(1-m*sin(t)**2),t=0..phi)"             # <<<<<<<<<<<<<<
 * ellipj_doc = "(sn,cn,dn,ph)=ellipj(u,m) calculates the Jacobian elliptic functions of\nparameter m between 0 and 1, and real u.  The returned functions are\noften written sn(u|m), cn(u|m), and dn(u|m).  The value of ph is such\nthat if u = ellik(ph,m), then sn(u|m) = sin(ph) and cn(u|m) = cos(ph)."
 * ellipk_doc = "y=ellipk(m) returns the complete integral of the first kind:\nintegral(1/sqrt(1-m*sin(t)**2),t=0..pi/2)"
 */
  PythonOps::SetGlobal(__pyx_context, "ellipeinc_doc", ((System::Object^)"y=ellipeinc(phi,m) returns the incomplete elliptic integral of the\nsecond kind: integral(sqrt(1-m*sin(t)**2),t=0..phi)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":672
 * ellipe_doc = "y=ellipe(m) returns the complete integral of the second kind:\nintegral(sqrt(1-m*sin(t)**2),t=0..pi/2)"
 * ellipeinc_doc = "y=ellipeinc(phi,m) returns the incomplete elliptic integral of the\nsecond kind: integral(sqrt(1-m*sin(t)**2),t=0..phi)"
 * ellipj_doc = "(sn,cn,dn,ph)=ellipj(u,m) calculates the Jacobian elliptic functions of\nparameter m between 0 and 1, and real u.  The returned functions are\noften written sn(u|m), cn(u|m), and dn(u|m).  The value of ph is such\nthat if u = ellik(ph,m), then sn(u|m) = sin(ph) and cn(u|m) = cos(ph)."             # <<<<<<<<<<<<<<
 * ellipk_doc = "y=ellipk(m) returns the complete integral of the first kind:\nintegral(1/sqrt(1-m*sin(t)**2),t=0..pi/2)"
 * ellipkinc_doc = "y=ellipkinc(phi,m) returns the incomplete elliptic integral of the first\nkind: integral(1/sqrt(1-m*sin(t)**2),t=0..phi)"
 */
  PythonOps::SetGlobal(__pyx_context, "ellipj_doc", ((System::Object^)"(sn,cn,dn,ph)=ellipj(u,m) calculates the Jacobian elliptic functions of\nparameter m between 0 and 1, and real u.  The returned functions are\noften written sn(u|m), cn(u|m), and dn(u|m).  The value of ph is such\nthat if u = ellik(ph,m), then sn(u|m) = sin(ph) and cn(u|m) = cos(ph)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":673
 * ellipeinc_doc = "y=ellipeinc(phi,m) returns the incomplete elliptic integral of the\nsecond kind: integral(sqrt(1-m*sin(t)**2),t=0..phi)"
 * ellipj_doc = "(sn,cn,dn,ph)=ellipj(u,m) calculates the Jacobian elliptic functions of\nparameter m between 0 and 1, and real u.  The returned functions are\noften written sn(u|m), cn(u|m), and dn(u|m).  The value of ph is such\nthat if u = ellik(ph,m), then sn(u|m) = sin(ph) and cn(u|m) = cos(ph)."
 * ellipk_doc = "y=ellipk(m) returns the complete integral of the first kind:\nintegral(1/sqrt(1-m*sin(t)**2),t=0..pi/2)"             # <<<<<<<<<<<<<<
 * ellipkinc_doc = "y=ellipkinc(phi,m) returns the incomplete elliptic integral of the first\nkind: integral(1/sqrt(1-m*sin(t)**2),t=0..phi)"
 * erf_doc = "y=erf(z) returns the error function of complex argument defined as\nas 2/sqrt(pi)*integral(exp(-t**2),t=0..z)"
 */
  PythonOps::SetGlobal(__pyx_context, "ellipk_doc", ((System::Object^)"y=ellipk(m) returns the complete integral of the first kind:\nintegral(1/sqrt(1-m*sin(t)**2),t=0..pi/2)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":674
 * ellipj_doc = "(sn,cn,dn,ph)=ellipj(u,m) calculates the Jacobian elliptic functions of\nparameter m between 0 and 1, and real u.  The returned functions are\noften written sn(u|m), cn(u|m), and dn(u|m).  The value of ph is such\nthat if u = ellik(ph,m), then sn(u|m) = sin(ph) and cn(u|m) = cos(ph)."
 * ellipk_doc = "y=ellipk(m) returns the complete integral of the first kind:\nintegral(1/sqrt(1-m*sin(t)**2),t=0..pi/2)"
 * ellipkinc_doc = "y=ellipkinc(phi,m) returns the incomplete elliptic integral of the first\nkind: integral(1/sqrt(1-m*sin(t)**2),t=0..phi)"             # <<<<<<<<<<<<<<
 * erf_doc = "y=erf(z) returns the error function of complex argument defined as\nas 2/sqrt(pi)*integral(exp(-t**2),t=0..z)"
 * erfc_doc = "y=erfc(x) returns 1 - erf(x)."
 */
  PythonOps::SetGlobal(__pyx_context, "ellipkinc_doc", ((System::Object^)"y=ellipkinc(phi,m) returns the incomplete elliptic integral of the first\nkind: integral(1/sqrt(1-m*sin(t)**2),t=0..phi)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":675
 * ellipk_doc = "y=ellipk(m) returns the complete integral of the first kind:\nintegral(1/sqrt(1-m*sin(t)**2),t=0..pi/2)"
 * ellipkinc_doc = "y=ellipkinc(phi,m) returns the incomplete elliptic integral of the first\nkind: integral(1/sqrt(1-m*sin(t)**2),t=0..phi)"
 * erf_doc = "y=erf(z) returns the error function of complex argument defined as\nas 2/sqrt(pi)*integral(exp(-t**2),t=0..z)"             # <<<<<<<<<<<<<<
 * erfc_doc = "y=erfc(x) returns 1 - erf(x)."
 * exp1_doc = "y=exp1(z) returns the exponential integral (n=1) of complex argument\nz: integral(exp(-z*t)/t,t=1..inf)."
 */
  PythonOps::SetGlobal(__pyx_context, "erf_doc", ((System::Object^)"y=erf(z) returns the error function of complex argument defined as\nas 2/sqrt(pi)*integral(exp(-t**2),t=0..z)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":676
 * ellipkinc_doc = "y=ellipkinc(phi,m) returns the incomplete elliptic integral of the first\nkind: integral(1/sqrt(1-m*sin(t)**2),t=0..phi)"
 * erf_doc = "y=erf(z) returns the error function of complex argument defined as\nas 2/sqrt(pi)*integral(exp(-t**2),t=0..z)"
 * erfc_doc = "y=erfc(x) returns 1 - erf(x)."             # <<<<<<<<<<<<<<
 * exp1_doc = "y=exp1(z) returns the exponential integral (n=1) of complex argument\nz: integral(exp(-z*t)/t,t=1..inf)."
 * exp10_doc = "y=exp10(x) returns 10 raised to the x power."
 */
  PythonOps::SetGlobal(__pyx_context, "erfc_doc", ((System::Object^)"y=erfc(x) returns 1 - erf(x)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":677
 * erf_doc = "y=erf(z) returns the error function of complex argument defined as\nas 2/sqrt(pi)*integral(exp(-t**2),t=0..z)"
 * erfc_doc = "y=erfc(x) returns 1 - erf(x)."
 * exp1_doc = "y=exp1(z) returns the exponential integral (n=1) of complex argument\nz: integral(exp(-z*t)/t,t=1..inf)."             # <<<<<<<<<<<<<<
 * exp10_doc = "y=exp10(x) returns 10 raised to the x power."
 * exp2_doc = "y=exp2(x) returns 2 raised to the x power."
 */
  PythonOps::SetGlobal(__pyx_context, "exp1_doc", ((System::Object^)"y=exp1(z) returns the exponential integral (n=1) of complex argument\nz: integral(exp(-z*t)/t,t=1..inf)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":678
 * erfc_doc = "y=erfc(x) returns 1 - erf(x)."
 * exp1_doc = "y=exp1(z) returns the exponential integral (n=1) of complex argument\nz: integral(exp(-z*t)/t,t=1..inf)."
 * exp10_doc = "y=exp10(x) returns 10 raised to the x power."             # <<<<<<<<<<<<<<
 * exp2_doc = "y=exp2(x) returns 2 raised to the x power."
 * expi_doc = "y=expi(x) returns an exponential integral of argument x defined as\nintegral(exp(t)/t,t=-inf..x).  See expn for a different exponential\nintegral."
 */
  PythonOps::SetGlobal(__pyx_context, "exp10_doc", ((System::Object^)"y=exp10(x) returns 10 raised to the x power."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":679
 * exp1_doc = "y=exp1(z) returns the exponential integral (n=1) of complex argument\nz: integral(exp(-z*t)/t,t=1..inf)."
 * exp10_doc = "y=exp10(x) returns 10 raised to the x power."
 * exp2_doc = "y=exp2(x) returns 2 raised to the x power."             # <<<<<<<<<<<<<<
 * expi_doc = "y=expi(x) returns an exponential integral of argument x defined as\nintegral(exp(t)/t,t=-inf..x).  See expn for a different exponential\nintegral."
 * expm1_doc = "y=expm1(x) calculates exp(x) - 1 for use when x is near zero."
 */
  PythonOps::SetGlobal(__pyx_context, "exp2_doc", ((System::Object^)"y=exp2(x) returns 2 raised to the x power."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":680
 * exp10_doc = "y=exp10(x) returns 10 raised to the x power."
 * exp2_doc = "y=exp2(x) returns 2 raised to the x power."
 * expi_doc = "y=expi(x) returns an exponential integral of argument x defined as\nintegral(exp(t)/t,t=-inf..x).  See expn for a different exponential\nintegral."             # <<<<<<<<<<<<<<
 * expm1_doc = "y=expm1(x) calculates exp(x) - 1 for use when x is near zero."
 * expn_doc = "y=expn(n,x) returns the exponential integral for integer n and\nnon-negative x and n: integral(exp(-x*t) / t**n, t=1..inf)."
 */
  PythonOps::SetGlobal(__pyx_context, "expi_doc", ((System::Object^)"y=expi(x) returns an exponential integral of argument x defined as\nintegral(exp(t)/t,t=-inf..x).  See expn for a different exponential\nintegral."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":681
 * exp2_doc = "y=exp2(x) returns 2 raised to the x power."
 * expi_doc = "y=expi(x) returns an exponential integral of argument x defined as\nintegral(exp(t)/t,t=-inf..x).  See expn for a different exponential\nintegral."
 * expm1_doc = "y=expm1(x) calculates exp(x) - 1 for use when x is near zero."             # <<<<<<<<<<<<<<
 * expn_doc = "y=expn(n,x) returns the exponential integral for integer n and\nnon-negative x and n: integral(exp(-x*t) / t**n, t=1..inf)."
 * fdtr_doc = "y=fdtr(dfn,dfd,x) returns the area from zero to x under the F density\nfunction (also known as Snedcor's density or the variance ratio\ndensity).  This is the density of X = (unum/dfn)/(uden/dfd), where unum and\nuden are random variables having Chi square distributions with dfn and\ndfd degrees of freedom, respectively."
 */
  PythonOps::SetGlobal(__pyx_context, "expm1_doc", ((System::Object^)"y=expm1(x) calculates exp(x) - 1 for use when x is near zero."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":682
 * expi_doc = "y=expi(x) returns an exponential integral of argument x defined as\nintegral(exp(t)/t,t=-inf..x).  See expn for a different exponential\nintegral."
 * expm1_doc = "y=expm1(x) calculates exp(x) - 1 for use when x is near zero."
 * expn_doc = "y=expn(n,x) returns the exponential integral for integer n and\nnon-negative x and n: integral(exp(-x*t) / t**n, t=1..inf)."             # <<<<<<<<<<<<<<
 * fdtr_doc = "y=fdtr(dfn,dfd,x) returns the area from zero to x under the F density\nfunction (also known as Snedcor's density or the variance ratio\ndensity).  This is the density of X = (unum/dfn)/(uden/dfd), where unum and\nuden are random variables having Chi square distributions with dfn and\ndfd degrees of freedom, respectively."
 * fdtrc_doc = "y=fdtrc(dfn,dfd,x) returns the complemented F distribution function."
 */
  PythonOps::SetGlobal(__pyx_context, "expn_doc", ((System::Object^)"y=expn(n,x) returns the exponential integral for integer n and\nnon-negative x and n: integral(exp(-x*t) / t**n, t=1..inf)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":683
 * expm1_doc = "y=expm1(x) calculates exp(x) - 1 for use when x is near zero."
 * expn_doc = "y=expn(n,x) returns the exponential integral for integer n and\nnon-negative x and n: integral(exp(-x*t) / t**n, t=1..inf)."
 * fdtr_doc = "y=fdtr(dfn,dfd,x) returns the area from zero to x under the F density\nfunction (also known as Snedcor's density or the variance ratio\ndensity).  This is the density of X = (unum/dfn)/(uden/dfd), where unum and\nuden are random variables having Chi square distributions with dfn and\ndfd degrees of freedom, respectively."             # <<<<<<<<<<<<<<
 * fdtrc_doc = "y=fdtrc(dfn,dfd,x) returns the complemented F distribution function."
 * fdtri_doc = "x=fdtri(dfn,dfd,p) finds the F density argument x such that \nfdtr(dfn,dfd,x)=p."
 */
  PythonOps::SetGlobal(__pyx_context, "fdtr_doc", ((System::Object^)"y=fdtr(dfn,dfd,x) returns the area from zero to x under the F density\nfunction (also known as Snedcor's density or the variance ratio\ndensity).  This is the density of X = (unum/dfn)/(uden/dfd), where unum and\nuden are random variables having Chi square distributions with dfn and\ndfd degrees of freedom, respectively."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":684
 * expn_doc = "y=expn(n,x) returns the exponential integral for integer n and\nnon-negative x and n: integral(exp(-x*t) / t**n, t=1..inf)."
 * fdtr_doc = "y=fdtr(dfn,dfd,x) returns the area from zero to x under the F density\nfunction (also known as Snedcor's density or the variance ratio\ndensity).  This is the density of X = (unum/dfn)/(uden/dfd), where unum and\nuden are random variables having Chi square distributions with dfn and\ndfd degrees of freedom, respectively."
 * fdtrc_doc = "y=fdtrc(dfn,dfd,x) returns the complemented F distribution function."             # <<<<<<<<<<<<<<
 * fdtri_doc = "x=fdtri(dfn,dfd,p) finds the F density argument x such that \nfdtr(dfn,dfd,x)=p."
 * fdtridfd_doc = "x=fdtridfd(dfn,p,x) finds the F density argument dfd such that \nfdtr(dfn,dfd,x)=p."
 */
  PythonOps::SetGlobal(__pyx_context, "fdtrc_doc", ((System::Object^)"y=fdtrc(dfn,dfd,x) returns the complemented F distribution function."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":685
 * fdtr_doc = "y=fdtr(dfn,dfd,x) returns the area from zero to x under the F density\nfunction (also known as Snedcor's density or the variance ratio\ndensity).  This is the density of X = (unum/dfn)/(uden/dfd), where unum and\nuden are random variables having Chi square distributions with dfn and\ndfd degrees of freedom, respectively."
 * fdtrc_doc = "y=fdtrc(dfn,dfd,x) returns the complemented F distribution function."
 * fdtri_doc = "x=fdtri(dfn,dfd,p) finds the F density argument x such that \nfdtr(dfn,dfd,x)=p."             # <<<<<<<<<<<<<<
 * fdtridfd_doc = "x=fdtridfd(dfn,p,x) finds the F density argument dfd such that \nfdtr(dfn,dfd,x)=p."
 * fdtridfn_doc = "x=fdtridfn(p,dfd,x) finds the F density argument dfn such that \nfdtr(dfn,dfd,x)=p."
 */
  PythonOps::SetGlobal(__pyx_context, "fdtri_doc", ((System::Object^)"x=fdtri(dfn,dfd,p) finds the F density argument x such that \nfdtr(dfn,dfd,x)=p."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":686
 * fdtrc_doc = "y=fdtrc(dfn,dfd,x) returns the complemented F distribution function."
 * fdtri_doc = "x=fdtri(dfn,dfd,p) finds the F density argument x such that \nfdtr(dfn,dfd,x)=p."
 * fdtridfd_doc = "x=fdtridfd(dfn,p,x) finds the F density argument dfd such that \nfdtr(dfn,dfd,x)=p."             # <<<<<<<<<<<<<<
 * fdtridfn_doc = "x=fdtridfn(p,dfd,x) finds the F density argument dfn such that \nfdtr(dfn,dfd,x)=p."
 * fresnel_doc = "(ssa,cca)=fresnel(z) returns the fresnel sin and cos integrals: integral(sin(pi/2\n* t**2),t=0..z) and integral(cos(pi/2 * t**2),t=0..z) for real or \ncomplex z."
 */
  PythonOps::SetGlobal(__pyx_context, "fdtridfd_doc", ((System::Object^)"x=fdtridfd(dfn,p,x) finds the F density argument dfd such that \nfdtr(dfn,dfd,x)=p."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":687
 * fdtri_doc = "x=fdtri(dfn,dfd,p) finds the F density argument x such that \nfdtr(dfn,dfd,x)=p."
 * fdtridfd_doc = "x=fdtridfd(dfn,p,x) finds the F density argument dfd such that \nfdtr(dfn,dfd,x)=p."
 * fdtridfn_doc = "x=fdtridfn(p,dfd,x) finds the F density argument dfn such that \nfdtr(dfn,dfd,x)=p."             # <<<<<<<<<<<<<<
 * fresnel_doc = "(ssa,cca)=fresnel(z) returns the fresnel sin and cos integrals: integral(sin(pi/2\n* t**2),t=0..z) and integral(cos(pi/2 * t**2),t=0..z) for real or \ncomplex z."
 * gamma_doc = "y=gamma(z) returns the gamma function of the argument.  The gamma\nfunction is often referred to as the generalized factorial since \nz*gamma(z) = gamma(z+1) and gamma(n+1) = n! for natural number n."
 */
  PythonOps::SetGlobal(__pyx_context, "fdtridfn_doc", ((System::Object^)"x=fdtridfn(p,dfd,x) finds the F density argument dfn such that \nfdtr(dfn,dfd,x)=p."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":688
 * fdtridfd_doc = "x=fdtridfd(dfn,p,x) finds the F density argument dfd such that \nfdtr(dfn,dfd,x)=p."
 * fdtridfn_doc = "x=fdtridfn(p,dfd,x) finds the F density argument dfn such that \nfdtr(dfn,dfd,x)=p."
 * fresnel_doc = "(ssa,cca)=fresnel(z) returns the fresnel sin and cos integrals: integral(sin(pi/2\n* t**2),t=0..z) and integral(cos(pi/2 * t**2),t=0..z) for real or \ncomplex z."             # <<<<<<<<<<<<<<
 * gamma_doc = "y=gamma(z) returns the gamma function of the argument.  The gamma\nfunction is often referred to as the generalized factorial since \nz*gamma(z) = gamma(z+1) and gamma(n+1) = n! for natural number n."
 * gammainc_doc = "y=gammainc(a,x) returns the incomplete gamma integral defined as\n1 / gamma(a) * integral(exp(-t) * t**(a-1), t=0..x).  Both arguments\nmust be positive."
 */
  PythonOps::SetGlobal(__pyx_context, "fresnel_doc", ((System::Object^)"(ssa,cca)=fresnel(z) returns the fresnel sin and cos integrals: integral(sin(pi/2\n* t**2),t=0..z) and integral(cos(pi/2 * t**2),t=0..z) for real or \ncomplex z."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":689
 * fdtridfn_doc = "x=fdtridfn(p,dfd,x) finds the F density argument dfn such that \nfdtr(dfn,dfd,x)=p."
 * fresnel_doc = "(ssa,cca)=fresnel(z) returns the fresnel sin and cos integrals: integral(sin(pi/2\n* t**2),t=0..z) and integral(cos(pi/2 * t**2),t=0..z) for real or \ncomplex z."
 * gamma_doc = "y=gamma(z) returns the gamma function of the argument.  The gamma\nfunction is often referred to as the generalized factorial since \nz*gamma(z) = gamma(z+1) and gamma(n+1) = n! for natural number n."             # <<<<<<<<<<<<<<
 * gammainc_doc = "y=gammainc(a,x) returns the incomplete gamma integral defined as\n1 / gamma(a) * integral(exp(-t) * t**(a-1), t=0..x).  Both arguments\nmust be positive."
 * gammaincc_doc = "y=gammaincc(a,x) returns the complemented incomplete gamma integral\ndefined as 1 / gamma(a) * integral(exp(-t) * t**(a-1), t=x..inf) = 1 -\ngammainc(a,x).  Both arguments must be positive."
 */
  PythonOps::SetGlobal(__pyx_context, "gamma_doc", ((System::Object^)"y=gamma(z) returns the gamma function of the argument.  The gamma\nfunction is often referred to as the generalized factorial since \nz*gamma(z) = gamma(z+1) and gamma(n+1) = n! for natural number n."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":690
 * fresnel_doc = "(ssa,cca)=fresnel(z) returns the fresnel sin and cos integrals: integral(sin(pi/2\n* t**2),t=0..z) and integral(cos(pi/2 * t**2),t=0..z) for real or \ncomplex z."
 * gamma_doc = "y=gamma(z) returns the gamma function of the argument.  The gamma\nfunction is often referred to as the generalized factorial since \nz*gamma(z) = gamma(z+1) and gamma(n+1) = n! for natural number n."
 * gammainc_doc = "y=gammainc(a,x) returns the incomplete gamma integral defined as\n1 / gamma(a) * integral(exp(-t) * t**(a-1), t=0..x).  Both arguments\nmust be positive."             # <<<<<<<<<<<<<<
 * gammaincc_doc = "y=gammaincc(a,x) returns the complemented incomplete gamma integral\ndefined as 1 / gamma(a) * integral(exp(-t) * t**(a-1), t=x..inf) = 1 -\ngammainc(a,x).  Both arguments must be positive."
 * gammainccinv_doc = "x=gammainccinv(a,y) returns x such that gammaincc(a,x) = y."
 */
  PythonOps::SetGlobal(__pyx_context, "gammainc_doc", ((System::Object^)"y=gammainc(a,x) returns the incomplete gamma integral defined as\n1 / gamma(a) * integral(exp(-t) * t**(a-1), t=0..x).  Both arguments\nmust be positive."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":691
 * gamma_doc = "y=gamma(z) returns the gamma function of the argument.  The gamma\nfunction is often referred to as the generalized factorial since \nz*gamma(z) = gamma(z+1) and gamma(n+1) = n! for natural number n."
 * gammainc_doc = "y=gammainc(a,x) returns the incomplete gamma integral defined as\n1 / gamma(a) * integral(exp(-t) * t**(a-1), t=0..x).  Both arguments\nmust be positive."
 * gammaincc_doc = "y=gammaincc(a,x) returns the complemented incomplete gamma integral\ndefined as 1 / gamma(a) * integral(exp(-t) * t**(a-1), t=x..inf) = 1 -\ngammainc(a,x).  Both arguments must be positive."             # <<<<<<<<<<<<<<
 * gammainccinv_doc = "x=gammainccinv(a,y) returns x such that gammaincc(a,x) = y."
 * gammaln_doc = "y=gammaln(z) returns the base e logarithm of the absolute value of the\ngamma function of z: ln(|gamma(z)|)"
 */
  PythonOps::SetGlobal(__pyx_context, "gammaincc_doc", ((System::Object^)"y=gammaincc(a,x) returns the complemented incomplete gamma integral\ndefined as 1 / gamma(a) * integral(exp(-t) * t**(a-1), t=x..inf) = 1 -\ngammainc(a,x).  Both arguments must be positive."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":692
 * gammainc_doc = "y=gammainc(a,x) returns the incomplete gamma integral defined as\n1 / gamma(a) * integral(exp(-t) * t**(a-1), t=0..x).  Both arguments\nmust be positive."
 * gammaincc_doc = "y=gammaincc(a,x) returns the complemented incomplete gamma integral\ndefined as 1 / gamma(a) * integral(exp(-t) * t**(a-1), t=x..inf) = 1 -\ngammainc(a,x).  Both arguments must be positive."
 * gammainccinv_doc = "x=gammainccinv(a,y) returns x such that gammaincc(a,x) = y."             # <<<<<<<<<<<<<<
 * gammaln_doc = "y=gammaln(z) returns the base e logarithm of the absolute value of the\ngamma function of z: ln(|gamma(z)|)"
 * gdtr_doc = "y=gdtr(a,b,x) returns the integral from zero to x of the gamma\nprobability density function: a**b / gamma(b) * integral(t**(b-1) exp(-at),t=0..x).\nThe arguments a and b are used differently here than in other definitions."
 */
  PythonOps::SetGlobal(__pyx_context, "gammainccinv_doc", ((System::Object^)"x=gammainccinv(a,y) returns x such that gammaincc(a,x) = y."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":693
 * gammaincc_doc = "y=gammaincc(a,x) returns the complemented incomplete gamma integral\ndefined as 1 / gamma(a) * integral(exp(-t) * t**(a-1), t=x..inf) = 1 -\ngammainc(a,x).  Both arguments must be positive."
 * gammainccinv_doc = "x=gammainccinv(a,y) returns x such that gammaincc(a,x) = y."
 * gammaln_doc = "y=gammaln(z) returns the base e logarithm of the absolute value of the\ngamma function of z: ln(|gamma(z)|)"             # <<<<<<<<<<<<<<
 * gdtr_doc = "y=gdtr(a,b,x) returns the integral from zero to x of the gamma\nprobability density function: a**b / gamma(b) * integral(t**(b-1) exp(-at),t=0..x).\nThe arguments a and b are used differently here than in other definitions."
 * gdtrc_doc = "y=gdtrc(a,b,x) returns the integral from x to infinity of the gamma\nprobability density function.  SEE gdtr, gdtri"
 */
  PythonOps::SetGlobal(__pyx_context, "gammaln_doc", ((System::Object^)"y=gammaln(z) returns the base e logarithm of the absolute value of the\ngamma function of z: ln(|gamma(z)|)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":694
 * gammainccinv_doc = "x=gammainccinv(a,y) returns x such that gammaincc(a,x) = y."
 * gammaln_doc = "y=gammaln(z) returns the base e logarithm of the absolute value of the\ngamma function of z: ln(|gamma(z)|)"
 * gdtr_doc = "y=gdtr(a,b,x) returns the integral from zero to x of the gamma\nprobability density function: a**b / gamma(b) * integral(t**(b-1) exp(-at),t=0..x).\nThe arguments a and b are used differently here than in other definitions."             # <<<<<<<<<<<<<<
 * gdtrc_doc = "y=gdtrc(a,b,x) returns the integral from x to infinity of the gamma\nprobability density function.  SEE gdtr, gdtri"
 * gdtri_doc = "x=gdtri(a,b,p) returns pth quantile of the gamma distribution.  It is \nthe inverse of the gamma cdf returning the value of x for which \ngdtr(b,a,x) = p."
 */
  PythonOps::SetGlobal(__pyx_context, "gdtr_doc", ((System::Object^)"y=gdtr(a,b,x) returns the integral from zero to x of the gamma\nprobability density function: a**b / gamma(b) * integral(t**(b-1) exp(-at),t=0..x).\nThe arguments a and b are used differently here than in other definitions."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":695
 * gammaln_doc = "y=gammaln(z) returns the base e logarithm of the absolute value of the\ngamma function of z: ln(|gamma(z)|)"
 * gdtr_doc = "y=gdtr(a,b,x) returns the integral from zero to x of the gamma\nprobability density function: a**b / gamma(b) * integral(t**(b-1) exp(-at),t=0..x).\nThe arguments a and b are used differently here than in other definitions."
 * gdtrc_doc = "y=gdtrc(a,b,x) returns the integral from x to infinity of the gamma\nprobability density function.  SEE gdtr, gdtri"             # <<<<<<<<<<<<<<
 * gdtri_doc = "x=gdtri(a,b,p) returns pth quantile of the gamma distribution.  It is \nthe inverse of the gamma cdf returning the value of x for which \ngdtr(b,a,x) = p."
 * hankel1_doc = "y=hankel1(v,z) returns the Hankel function of the first kind for real order v and complex argument z."
 */
  PythonOps::SetGlobal(__pyx_context, "gdtrc_doc", ((System::Object^)"y=gdtrc(a,b,x) returns the integral from x to infinity of the gamma\nprobability density function.  SEE gdtr, gdtri"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":696
 * gdtr_doc = "y=gdtr(a,b,x) returns the integral from zero to x of the gamma\nprobability density function: a**b / gamma(b) * integral(t**(b-1) exp(-at),t=0..x).\nThe arguments a and b are used differently here than in other definitions."
 * gdtrc_doc = "y=gdtrc(a,b,x) returns the integral from x to infinity of the gamma\nprobability density function.  SEE gdtr, gdtri"
 * gdtri_doc = "x=gdtri(a,b,p) returns pth quantile of the gamma distribution.  It is \nthe inverse of the gamma cdf returning the value of x for which \ngdtr(b,a,x) = p."             # <<<<<<<<<<<<<<
 * hankel1_doc = "y=hankel1(v,z) returns the Hankel function of the first kind for real order v and complex argument z."
 * hankel1e_doc = "y=hankel1e(v,z) returns the exponentially scaled Hankel function of the first\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(-1j * z)"
 */
  PythonOps::SetGlobal(__pyx_context, "gdtri_doc", ((System::Object^)"x=gdtri(a,b,p) returns pth quantile of the gamma distribution.  It is \nthe inverse of the gamma cdf returning the value of x for which \ngdtr(b,a,x) = p."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":697
 * gdtrc_doc = "y=gdtrc(a,b,x) returns the integral from x to infinity of the gamma\nprobability density function.  SEE gdtr, gdtri"
 * gdtri_doc = "x=gdtri(a,b,p) returns pth quantile of the gamma distribution.  It is \nthe inverse of the gamma cdf returning the value of x for which \ngdtr(b,a,x) = p."
 * hankel1_doc = "y=hankel1(v,z) returns the Hankel function of the first kind for real order v and complex argument z."             # <<<<<<<<<<<<<<
 * hankel1e_doc = "y=hankel1e(v,z) returns the exponentially scaled Hankel function of the first\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(-1j * z)"
 * hankel2_doc = "y=hankel2(v,z) returns the Hankel function of the second kind for real order v and complex argument z."
 */
  PythonOps::SetGlobal(__pyx_context, "hankel1_doc", ((System::Object^)"y=hankel1(v,z) returns the Hankel function of the first kind for real order v and complex argument z."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":698
 * gdtri_doc = "x=gdtri(a,b,p) returns pth quantile of the gamma distribution.  It is \nthe inverse of the gamma cdf returning the value of x for which \ngdtr(b,a,x) = p."
 * hankel1_doc = "y=hankel1(v,z) returns the Hankel function of the first kind for real order v and complex argument z."
 * hankel1e_doc = "y=hankel1e(v,z) returns the exponentially scaled Hankel function of the first\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(-1j * z)"             # <<<<<<<<<<<<<<
 * hankel2_doc = "y=hankel2(v,z) returns the Hankel function of the second kind for real order v and complex argument z."
 * hankel2e_doc = "y=hankel2e(v,z) returns the exponentially scaled Hankel function of the second\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(1j * z)"
 */
  PythonOps::SetGlobal(__pyx_context, "hankel1e_doc", ((System::Object^)"y=hankel1e(v,z) returns the exponentially scaled Hankel function of the first\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(-1j * z)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":699
 * hankel1_doc = "y=hankel1(v,z) returns the Hankel function of the first kind for real order v and complex argument z."
 * hankel1e_doc = "y=hankel1e(v,z) returns the exponentially scaled Hankel function of the first\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(-1j * z)"
 * hankel2_doc = "y=hankel2(v,z) returns the Hankel function of the second kind for real order v and complex argument z."             # <<<<<<<<<<<<<<
 * hankel2e_doc = "y=hankel2e(v,z) returns the exponentially scaled Hankel function of the second\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(1j * z)"
 * hyp1f1_doc = "y=hyp1f1(a,b,x) returns the confluent hypergeometeric function\n( 1F1(a,b;x) ) evaluated at the values a, b, and x."
 */
  PythonOps::SetGlobal(__pyx_context, "hankel2_doc", ((System::Object^)"y=hankel2(v,z) returns the Hankel function of the second kind for real order v and complex argument z."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":700
 * hankel1e_doc = "y=hankel1e(v,z) returns the exponentially scaled Hankel function of the first\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(-1j * z)"
 * hankel2_doc = "y=hankel2(v,z) returns the Hankel function of the second kind for real order v and complex argument z."
 * hankel2e_doc = "y=hankel2e(v,z) returns the exponentially scaled Hankel function of the second\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(1j * z)"             # <<<<<<<<<<<<<<
 * hyp1f1_doc = "y=hyp1f1(a,b,x) returns the confluent hypergeometeric function\n( 1F1(a,b;x) ) evaluated at the values a, b, and x."
 * hyp1f2_doc = "(y,err)=hyp1f2(a,b,c,x) returns (y,err) with the hypergeometric function 1F2 in y and an error estimate in err."
 */
  PythonOps::SetGlobal(__pyx_context, "hankel2e_doc", ((System::Object^)"y=hankel2e(v,z) returns the exponentially scaled Hankel function of the second\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(1j * z)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":701
 * hankel2_doc = "y=hankel2(v,z) returns the Hankel function of the second kind for real order v and complex argument z."
 * hankel2e_doc = "y=hankel2e(v,z) returns the exponentially scaled Hankel function of the second\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(1j * z)"
 * hyp1f1_doc = "y=hyp1f1(a,b,x) returns the confluent hypergeometeric function\n( 1F1(a,b;x) ) evaluated at the values a, b, and x."             # <<<<<<<<<<<<<<
 * hyp1f2_doc = "(y,err)=hyp1f2(a,b,c,x) returns (y,err) with the hypergeometric function 1F2 in y and an error estimate in err."
 * hyp2f0_doc = "(y,err)=hyp2f0(a,b,x,type) returns (y,err) with the hypergeometric function 2F0 in y and an error estimate in err.  The input type determines a convergence factor and\ncan be either 1 or 2."
 */
  PythonOps::SetGlobal(__pyx_context, "hyp1f1_doc", ((System::Object^)"y=hyp1f1(a,b,x) returns the confluent hypergeometeric function\n( 1F1(a,b;x) ) evaluated at the values a, b, and x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":702
 * hankel2e_doc = "y=hankel2e(v,z) returns the exponentially scaled Hankel function of the second\nkind for real order v and complex argument z:\nhankel1e(v,z) = hankel1(v,z) * exp(1j * z)"
 * hyp1f1_doc = "y=hyp1f1(a,b,x) returns the confluent hypergeometeric function\n( 1F1(a,b;x) ) evaluated at the values a, b, and x."
 * hyp1f2_doc = "(y,err)=hyp1f2(a,b,c,x) returns (y,err) with the hypergeometric function 1F2 in y and an error estimate in err."             # <<<<<<<<<<<<<<
 * hyp2f0_doc = "(y,err)=hyp2f0(a,b,x,type) returns (y,err) with the hypergeometric function 2F0 in y and an error estimate in err.  The input type determines a convergence factor and\ncan be either 1 or 2."
 * hyp2f1_doc = "y=hyp2f1(a,b,c,z) returns the gauss hypergeometric function\n( 2F1(a,b;c;z) )."
 */
  PythonOps::SetGlobal(__pyx_context, "hyp1f2_doc", ((System::Object^)"(y,err)=hyp1f2(a,b,c,x) returns (y,err) with the hypergeometric function 1F2 in y and an error estimate in err."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":703
 * hyp1f1_doc = "y=hyp1f1(a,b,x) returns the confluent hypergeometeric function\n( 1F1(a,b;x) ) evaluated at the values a, b, and x."
 * hyp1f2_doc = "(y,err)=hyp1f2(a,b,c,x) returns (y,err) with the hypergeometric function 1F2 in y and an error estimate in err."
 * hyp2f0_doc = "(y,err)=hyp2f0(a,b,x,type) returns (y,err) with the hypergeometric function 2F0 in y and an error estimate in err.  The input type determines a convergence factor and\ncan be either 1 or 2."             # <<<<<<<<<<<<<<
 * hyp2f1_doc = "y=hyp2f1(a,b,c,z) returns the gauss hypergeometric function\n( 2F1(a,b;c;z) )."
 * hyp3f0_doc = "(y,err)=hyp3f0(a,b,c,x) returns (y,err) with the hypergeometric function 3F0 in y and an error estimate in err."
 */
  PythonOps::SetGlobal(__pyx_context, "hyp2f0_doc", ((System::Object^)"(y,err)=hyp2f0(a,b,x,type) returns (y,err) with the hypergeometric function 2F0 in y and an error estimate in err.  The input type determines a convergence factor and\ncan be either 1 or 2."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":704
 * hyp1f2_doc = "(y,err)=hyp1f2(a,b,c,x) returns (y,err) with the hypergeometric function 1F2 in y and an error estimate in err."
 * hyp2f0_doc = "(y,err)=hyp2f0(a,b,x,type) returns (y,err) with the hypergeometric function 2F0 in y and an error estimate in err.  The input type determines a convergence factor and\ncan be either 1 or 2."
 * hyp2f1_doc = "y=hyp2f1(a,b,c,z) returns the gauss hypergeometric function\n( 2F1(a,b;c;z) )."             # <<<<<<<<<<<<<<
 * hyp3f0_doc = "(y,err)=hyp3f0(a,b,c,x) returns (y,err) with the hypergeometric function 3F0 in y and an error estimate in err."
 * hyperu_doc = "y=hyperu(a,b,x) returns the confluent hypergeometric function of the\nsecond kind U(a,b,x)."
 */
  PythonOps::SetGlobal(__pyx_context, "hyp2f1_doc", ((System::Object^)"y=hyp2f1(a,b,c,z) returns the gauss hypergeometric function\n( 2F1(a,b;c;z) )."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":705
 * hyp2f0_doc = "(y,err)=hyp2f0(a,b,x,type) returns (y,err) with the hypergeometric function 2F0 in y and an error estimate in err.  The input type determines a convergence factor and\ncan be either 1 or 2."
 * hyp2f1_doc = "y=hyp2f1(a,b,c,z) returns the gauss hypergeometric function\n( 2F1(a,b;c;z) )."
 * hyp3f0_doc = "(y,err)=hyp3f0(a,b,c,x) returns (y,err) with the hypergeometric function 3F0 in y and an error estimate in err."             # <<<<<<<<<<<<<<
 * hyperu_doc = "y=hyperu(a,b,x) returns the confluent hypergeometric function of the\nsecond kind U(a,b,x)."
 * i0_doc = "y=i0(x) returns the modified Bessel function of order 0 at x."
 */
  PythonOps::SetGlobal(__pyx_context, "hyp3f0_doc", ((System::Object^)"(y,err)=hyp3f0(a,b,c,x) returns (y,err) with the hypergeometric function 3F0 in y and an error estimate in err."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":706
 * hyp2f1_doc = "y=hyp2f1(a,b,c,z) returns the gauss hypergeometric function\n( 2F1(a,b;c;z) )."
 * hyp3f0_doc = "(y,err)=hyp3f0(a,b,c,x) returns (y,err) with the hypergeometric function 3F0 in y and an error estimate in err."
 * hyperu_doc = "y=hyperu(a,b,x) returns the confluent hypergeometric function of the\nsecond kind U(a,b,x)."             # <<<<<<<<<<<<<<
 * i0_doc = "y=i0(x) returns the modified Bessel function of order 0 at x."
 * i0e_doc = "y=i0e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i0e(x) = exp(-|x|) * i0(x)."
 */
  PythonOps::SetGlobal(__pyx_context, "hyperu_doc", ((System::Object^)"y=hyperu(a,b,x) returns the confluent hypergeometric function of the\nsecond kind U(a,b,x)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":707
 * hyp3f0_doc = "(y,err)=hyp3f0(a,b,c,x) returns (y,err) with the hypergeometric function 3F0 in y and an error estimate in err."
 * hyperu_doc = "y=hyperu(a,b,x) returns the confluent hypergeometric function of the\nsecond kind U(a,b,x)."
 * i0_doc = "y=i0(x) returns the modified Bessel function of order 0 at x."             # <<<<<<<<<<<<<<
 * i0e_doc = "y=i0e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i0e(x) = exp(-|x|) * i0(x)."
 * i1_doc = "y=i1(x) returns the modified Bessel function of order 1 at x."
 */
  PythonOps::SetGlobal(__pyx_context, "i0_doc", ((System::Object^)"y=i0(x) returns the modified Bessel function of order 0 at x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":708
 * hyperu_doc = "y=hyperu(a,b,x) returns the confluent hypergeometric function of the\nsecond kind U(a,b,x)."
 * i0_doc = "y=i0(x) returns the modified Bessel function of order 0 at x."
 * i0e_doc = "y=i0e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i0e(x) = exp(-|x|) * i0(x)."             # <<<<<<<<<<<<<<
 * i1_doc = "y=i1(x) returns the modified Bessel function of order 1 at x."
 * i1e_doc = "y=i1e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i1e(x) = exp(-|x|) * i1(x)."
 */
  PythonOps::SetGlobal(__pyx_context, "i0e_doc", ((System::Object^)"y=i0e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i0e(x) = exp(-|x|) * i0(x)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":709
 * i0_doc = "y=i0(x) returns the modified Bessel function of order 0 at x."
 * i0e_doc = "y=i0e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i0e(x) = exp(-|x|) * i0(x)."
 * i1_doc = "y=i1(x) returns the modified Bessel function of order 1 at x."             # <<<<<<<<<<<<<<
 * i1e_doc = "y=i1e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i1e(x) = exp(-|x|) * i1(x)."
 * it2i0k0_doc = "(ii0,ik0)=it2i0k0(x) returns the integrals int((i0(t)-1)/t,t=0..x) and \nint(k0(t)/t,t=x..infinitity)."
 */
  PythonOps::SetGlobal(__pyx_context, "i1_doc", ((System::Object^)"y=i1(x) returns the modified Bessel function of order 1 at x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":710
 * i0e_doc = "y=i0e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i0e(x) = exp(-|x|) * i0(x)."
 * i1_doc = "y=i1(x) returns the modified Bessel function of order 1 at x."
 * i1e_doc = "y=i1e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i1e(x) = exp(-|x|) * i1(x)."             # <<<<<<<<<<<<<<
 * it2i0k0_doc = "(ii0,ik0)=it2i0k0(x) returns the integrals int((i0(t)-1)/t,t=0..x) and \nint(k0(t)/t,t=x..infinitity)."
 * it2j0y0_doc = "(ij0,iy0)=it2j0y0(x) returns the integrals int((1-j0(t))/t,t=0..x) and \nint(y0(t)/t,t=x..infinitity)."
 */
  PythonOps::SetGlobal(__pyx_context, "i1e_doc", ((System::Object^)"y=i1e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i1e(x) = exp(-|x|) * i1(x)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":711
 * i1_doc = "y=i1(x) returns the modified Bessel function of order 1 at x."
 * i1e_doc = "y=i1e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i1e(x) = exp(-|x|) * i1(x)."
 * it2i0k0_doc = "(ii0,ik0)=it2i0k0(x) returns the integrals int((i0(t)-1)/t,t=0..x) and \nint(k0(t)/t,t=x..infinitity)."             # <<<<<<<<<<<<<<
 * it2j0y0_doc = "(ij0,iy0)=it2j0y0(x) returns the integrals int((1-j0(t))/t,t=0..x) and \nint(y0(t)/t,t=x..infinitity)."
 * it2struve0_doc = "y=it2struve0(x) returns the integral of the Struve function of order 0 \ndivided by t from x to infinity:  integral(H0(t)/t, t=x..inf)."
 */
  PythonOps::SetGlobal(__pyx_context, "it2i0k0_doc", ((System::Object^)"(ii0,ik0)=it2i0k0(x) returns the integrals int((i0(t)-1)/t,t=0..x) and \nint(k0(t)/t,t=x..infinitity)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":712
 * i1e_doc = "y=i1e(x) returns the exponentially scaled modified Bessel function\nof order 0 at x.  i1e(x) = exp(-|x|) * i1(x)."
 * it2i0k0_doc = "(ii0,ik0)=it2i0k0(x) returns the integrals int((i0(t)-1)/t,t=0..x) and \nint(k0(t)/t,t=x..infinitity)."
 * it2j0y0_doc = "(ij0,iy0)=it2j0y0(x) returns the integrals int((1-j0(t))/t,t=0..x) and \nint(y0(t)/t,t=x..infinitity)."             # <<<<<<<<<<<<<<
 * it2struve0_doc = "y=it2struve0(x) returns the integral of the Struve function of order 0 \ndivided by t from x to infinity:  integral(H0(t)/t, t=x..inf)."
 * itairy_doc = "(Apt,Bpt,Ant,Bnt)=itairy(x) calculates the integral of Airy functions from 0 to x\nfor positive (Apt, Bpt) and negative (Ant, Bnt) arguments."
 */
  PythonOps::SetGlobal(__pyx_context, "it2j0y0_doc", ((System::Object^)"(ij0,iy0)=it2j0y0(x) returns the integrals int((1-j0(t))/t,t=0..x) and \nint(y0(t)/t,t=x..infinitity)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":713
 * it2i0k0_doc = "(ii0,ik0)=it2i0k0(x) returns the integrals int((i0(t)-1)/t,t=0..x) and \nint(k0(t)/t,t=x..infinitity)."
 * it2j0y0_doc = "(ij0,iy0)=it2j0y0(x) returns the integrals int((1-j0(t))/t,t=0..x) and \nint(y0(t)/t,t=x..infinitity)."
 * it2struve0_doc = "y=it2struve0(x) returns the integral of the Struve function of order 0 \ndivided by t from x to infinity:  integral(H0(t)/t, t=x..inf)."             # <<<<<<<<<<<<<<
 * itairy_doc = "(Apt,Bpt,Ant,Bnt)=itairy(x) calculates the integral of Airy functions from 0 to x\nfor positive (Apt, Bpt) and negative (Ant, Bnt) arguments."
 * iti0k0_doc = "(ii0,ik0)=iti0k0(x) returns simple integrals from 0 to x of the zeroth order \nmodified bessel functions i0 and k0."
 */
  PythonOps::SetGlobal(__pyx_context, "it2struve0_doc", ((System::Object^)"y=it2struve0(x) returns the integral of the Struve function of order 0 \ndivided by t from x to infinity:  integral(H0(t)/t, t=x..inf)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":714
 * it2j0y0_doc = "(ij0,iy0)=it2j0y0(x) returns the integrals int((1-j0(t))/t,t=0..x) and \nint(y0(t)/t,t=x..infinitity)."
 * it2struve0_doc = "y=it2struve0(x) returns the integral of the Struve function of order 0 \ndivided by t from x to infinity:  integral(H0(t)/t, t=x..inf)."
 * itairy_doc = "(Apt,Bpt,Ant,Bnt)=itairy(x) calculates the integral of Airy functions from 0 to x\nfor positive (Apt, Bpt) and negative (Ant, Bnt) arguments."             # <<<<<<<<<<<<<<
 * iti0k0_doc = "(ii0,ik0)=iti0k0(x) returns simple integrals from 0 to x of the zeroth order \nmodified bessel functions i0 and k0."
 * itj0y0_doc = "(ij0,iy0)=itj0y0(x) returns simple integrals from 0 to x of the zeroth order \nbessel functions j0 and y0."
 */
  PythonOps::SetGlobal(__pyx_context, "itairy_doc", ((System::Object^)"(Apt,Bpt,Ant,Bnt)=itairy(x) calculates the integral of Airy functions from 0 to x\nfor positive (Apt, Bpt) and negative (Ant, Bnt) arguments."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":715
 * it2struve0_doc = "y=it2struve0(x) returns the integral of the Struve function of order 0 \ndivided by t from x to infinity:  integral(H0(t)/t, t=x..inf)."
 * itairy_doc = "(Apt,Bpt,Ant,Bnt)=itairy(x) calculates the integral of Airy functions from 0 to x\nfor positive (Apt, Bpt) and negative (Ant, Bnt) arguments."
 * iti0k0_doc = "(ii0,ik0)=iti0k0(x) returns simple integrals from 0 to x of the zeroth order \nmodified bessel functions i0 and k0."             # <<<<<<<<<<<<<<
 * itj0y0_doc = "(ij0,iy0)=itj0y0(x) returns simple integrals from 0 to x of the zeroth order \nbessel functions j0 and y0."
 * itmodstruve0_doc = "y=itmodstruve0(x) returns the integral of the modified Struve function\nof order 0 from 0 to x:  integral(L0(t), t=0..x)."
 */
  PythonOps::SetGlobal(__pyx_context, "iti0k0_doc", ((System::Object^)"(ii0,ik0)=iti0k0(x) returns simple integrals from 0 to x of the zeroth order \nmodified bessel functions i0 and k0."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":716
 * itairy_doc = "(Apt,Bpt,Ant,Bnt)=itairy(x) calculates the integral of Airy functions from 0 to x\nfor positive (Apt, Bpt) and negative (Ant, Bnt) arguments."
 * iti0k0_doc = "(ii0,ik0)=iti0k0(x) returns simple integrals from 0 to x of the zeroth order \nmodified bessel functions i0 and k0."
 * itj0y0_doc = "(ij0,iy0)=itj0y0(x) returns simple integrals from 0 to x of the zeroth order \nbessel functions j0 and y0."             # <<<<<<<<<<<<<<
 * itmodstruve0_doc = "y=itmodstruve0(x) returns the integral of the modified Struve function\nof order 0 from 0 to x:  integral(L0(t), t=0..x)."
 * itstruve0_doc = "y=itstruve0(x) returns the integral of the Struve function of order 0 \nfrom 0 to x:  integral(H0(t), t=0..x)."
 */
  PythonOps::SetGlobal(__pyx_context, "itj0y0_doc", ((System::Object^)"(ij0,iy0)=itj0y0(x) returns simple integrals from 0 to x of the zeroth order \nbessel functions j0 and y0."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":717
 * iti0k0_doc = "(ii0,ik0)=iti0k0(x) returns simple integrals from 0 to x of the zeroth order \nmodified bessel functions i0 and k0."
 * itj0y0_doc = "(ij0,iy0)=itj0y0(x) returns simple integrals from 0 to x of the zeroth order \nbessel functions j0 and y0."
 * itmodstruve0_doc = "y=itmodstruve0(x) returns the integral of the modified Struve function\nof order 0 from 0 to x:  integral(L0(t), t=0..x)."             # <<<<<<<<<<<<<<
 * itstruve0_doc = "y=itstruve0(x) returns the integral of the Struve function of order 0 \nfrom 0 to x:  integral(H0(t), t=0..x)."
 * iv_doc = "y=iv(v,z) returns the modified Bessel function of real order v of\nz.  If z is of real type and negative, v must be integer valued."
 */
  PythonOps::SetGlobal(__pyx_context, "itmodstruve0_doc", ((System::Object^)"y=itmodstruve0(x) returns the integral of the modified Struve function\nof order 0 from 0 to x:  integral(L0(t), t=0..x)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":718
 * itj0y0_doc = "(ij0,iy0)=itj0y0(x) returns simple integrals from 0 to x of the zeroth order \nbessel functions j0 and y0."
 * itmodstruve0_doc = "y=itmodstruve0(x) returns the integral of the modified Struve function\nof order 0 from 0 to x:  integral(L0(t), t=0..x)."
 * itstruve0_doc = "y=itstruve0(x) returns the integral of the Struve function of order 0 \nfrom 0 to x:  integral(H0(t), t=0..x)."             # <<<<<<<<<<<<<<
 * iv_doc = "y=iv(v,z) returns the modified Bessel function of real order v of\nz.  If z is of real type and negative, v must be integer valued."
 * ive_doc = "y=ive(v,z) returns the exponentially scaled modified Bessel function of \nreal order v and complex z: ive(v,z) = iv(v,z) * exp(-abs(z.real))"
 */
  PythonOps::SetGlobal(__pyx_context, "itstruve0_doc", ((System::Object^)"y=itstruve0(x) returns the integral of the Struve function of order 0 \nfrom 0 to x:  integral(H0(t), t=0..x)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":719
 * itmodstruve0_doc = "y=itmodstruve0(x) returns the integral of the modified Struve function\nof order 0 from 0 to x:  integral(L0(t), t=0..x)."
 * itstruve0_doc = "y=itstruve0(x) returns the integral of the Struve function of order 0 \nfrom 0 to x:  integral(H0(t), t=0..x)."
 * iv_doc = "y=iv(v,z) returns the modified Bessel function of real order v of\nz.  If z is of real type and negative, v must be integer valued."             # <<<<<<<<<<<<<<
 * ive_doc = "y=ive(v,z) returns the exponentially scaled modified Bessel function of \nreal order v and complex z: ive(v,z) = iv(v,z) * exp(-abs(z.real))"
 * j0_doc = "y=j0(x) returns the Bessel function of order 0 at x."
 */
  PythonOps::SetGlobal(__pyx_context, "iv_doc", ((System::Object^)"y=iv(v,z) returns the modified Bessel function of real order v of\nz.  If z is of real type and negative, v must be integer valued."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":720
 * itstruve0_doc = "y=itstruve0(x) returns the integral of the Struve function of order 0 \nfrom 0 to x:  integral(H0(t), t=0..x)."
 * iv_doc = "y=iv(v,z) returns the modified Bessel function of real order v of\nz.  If z is of real type and negative, v must be integer valued."
 * ive_doc = "y=ive(v,z) returns the exponentially scaled modified Bessel function of \nreal order v and complex z: ive(v,z) = iv(v,z) * exp(-abs(z.real))"             # <<<<<<<<<<<<<<
 * j0_doc = "y=j0(x) returns the Bessel function of order 0 at x."
 * j1_doc = "y=j1(x) returns the Bessel function of order 1 at x."
 */
  PythonOps::SetGlobal(__pyx_context, "ive_doc", ((System::Object^)"y=ive(v,z) returns the exponentially scaled modified Bessel function of \nreal order v and complex z: ive(v,z) = iv(v,z) * exp(-abs(z.real))"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":721
 * iv_doc = "y=iv(v,z) returns the modified Bessel function of real order v of\nz.  If z is of real type and negative, v must be integer valued."
 * ive_doc = "y=ive(v,z) returns the exponentially scaled modified Bessel function of \nreal order v and complex z: ive(v,z) = iv(v,z) * exp(-abs(z.real))"
 * j0_doc = "y=j0(x) returns the Bessel function of order 0 at x."             # <<<<<<<<<<<<<<
 * j1_doc = "y=j1(x) returns the Bessel function of order 1 at x."
 * jn_doc = "y=jn(n,x) returns the Bessel function of integer order n at  x."
 */
  PythonOps::SetGlobal(__pyx_context, "j0_doc", ((System::Object^)"y=j0(x) returns the Bessel function of order 0 at x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":722
 * ive_doc = "y=ive(v,z) returns the exponentially scaled modified Bessel function of \nreal order v and complex z: ive(v,z) = iv(v,z) * exp(-abs(z.real))"
 * j0_doc = "y=j0(x) returns the Bessel function of order 0 at x."
 * j1_doc = "y=j1(x) returns the Bessel function of order 1 at x."             # <<<<<<<<<<<<<<
 * jn_doc = "y=jn(n,x) returns the Bessel function of integer order n at  x."
 * jv_doc = "y=jv(v,z) returns the Bessel function of real order v at complex z."
 */
  PythonOps::SetGlobal(__pyx_context, "j1_doc", ((System::Object^)"y=j1(x) returns the Bessel function of order 1 at x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":723
 * j0_doc = "y=j0(x) returns the Bessel function of order 0 at x."
 * j1_doc = "y=j1(x) returns the Bessel function of order 1 at x."
 * jn_doc = "y=jn(n,x) returns the Bessel function of integer order n at  x."             # <<<<<<<<<<<<<<
 * jv_doc = "y=jv(v,z) returns the Bessel function of real order v at complex z."
 * jve_doc = "y=jve(v,z) returns the exponentially scaled Bessel function of real order\nv at complex z: jve(v,z) = jv(v,z) * exp(-abs(z.imag))"
 */
  PythonOps::SetGlobal(__pyx_context, "jn_doc", ((System::Object^)"y=jn(n,x) returns the Bessel function of integer order n at  x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":724
 * j1_doc = "y=j1(x) returns the Bessel function of order 1 at x."
 * jn_doc = "y=jn(n,x) returns the Bessel function of integer order n at  x."
 * jv_doc = "y=jv(v,z) returns the Bessel function of real order v at complex z."             # <<<<<<<<<<<<<<
 * jve_doc = "y=jve(v,z) returns the exponentially scaled Bessel function of real order\nv at complex z: jve(v,z) = jv(v,z) * exp(-abs(z.imag))"
 * k0_doc = "y=k0(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 0 at x."
 */
  PythonOps::SetGlobal(__pyx_context, "jv_doc", ((System::Object^)"y=jv(v,z) returns the Bessel function of real order v at complex z."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":725
 * jn_doc = "y=jn(n,x) returns the Bessel function of integer order n at  x."
 * jv_doc = "y=jv(v,z) returns the Bessel function of real order v at complex z."
 * jve_doc = "y=jve(v,z) returns the exponentially scaled Bessel function of real order\nv at complex z: jve(v,z) = jv(v,z) * exp(-abs(z.imag))"             # <<<<<<<<<<<<<<
 * k0_doc = "y=k0(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 0 at x."
 * k0e_doc = "y=k0e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 0 at x.  k0e(x) = exp(x) * k0(x)."
 */
  PythonOps::SetGlobal(__pyx_context, "jve_doc", ((System::Object^)"y=jve(v,z) returns the exponentially scaled Bessel function of real order\nv at complex z: jve(v,z) = jv(v,z) * exp(-abs(z.imag))"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":726
 * jv_doc = "y=jv(v,z) returns the Bessel function of real order v at complex z."
 * jve_doc = "y=jve(v,z) returns the exponentially scaled Bessel function of real order\nv at complex z: jve(v,z) = jv(v,z) * exp(-abs(z.imag))"
 * k0_doc = "y=k0(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 0 at x."             # <<<<<<<<<<<<<<
 * k0e_doc = "y=k0e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 0 at x.  k0e(x) = exp(x) * k0(x)."
 * k1_doc = "y=i1(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 1 at x."
 */
  PythonOps::SetGlobal(__pyx_context, "k0_doc", ((System::Object^)"y=k0(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 0 at x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":727
 * jve_doc = "y=jve(v,z) returns the exponentially scaled Bessel function of real order\nv at complex z: jve(v,z) = jv(v,z) * exp(-abs(z.imag))"
 * k0_doc = "y=k0(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 0 at x."
 * k0e_doc = "y=k0e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 0 at x.  k0e(x) = exp(x) * k0(x)."             # <<<<<<<<<<<<<<
 * k1_doc = "y=i1(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 1 at x."
 * k1e_doc = "y=k1e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 1 at x.  k1e(x) = exp(x) * k1(x)"
 */
  PythonOps::SetGlobal(__pyx_context, "k0e_doc", ((System::Object^)"y=k0e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 0 at x.  k0e(x) = exp(x) * k0(x)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":728
 * k0_doc = "y=k0(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 0 at x."
 * k0e_doc = "y=k0e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 0 at x.  k0e(x) = exp(x) * k0(x)."
 * k1_doc = "y=i1(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 1 at x."             # <<<<<<<<<<<<<<
 * k1e_doc = "y=k1e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 1 at x.  k1e(x) = exp(x) * k1(x)"
 * kei_doc = "y=kei(x) returns the Kelvin function ker x"
 */
  PythonOps::SetGlobal(__pyx_context, "k1_doc", ((System::Object^)"y=i1(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 1 at x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":729
 * k0e_doc = "y=k0e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 0 at x.  k0e(x) = exp(x) * k0(x)."
 * k1_doc = "y=i1(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 1 at x."
 * k1e_doc = "y=k1e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 1 at x.  k1e(x) = exp(x) * k1(x)"             # <<<<<<<<<<<<<<
 * kei_doc = "y=kei(x) returns the Kelvin function ker x"
 * keip_doc = "y=keip(x) returns the derivative of the Kelvin function kei x"
 */
  PythonOps::SetGlobal(__pyx_context, "k1e_doc", ((System::Object^)"y=k1e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 1 at x.  k1e(x) = exp(x) * k1(x)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":730
 * k1_doc = "y=i1(x) returns the modified Bessel function of the second kind (sometimes called the third kind) of\norder 1 at x."
 * k1e_doc = "y=k1e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 1 at x.  k1e(x) = exp(x) * k1(x)"
 * kei_doc = "y=kei(x) returns the Kelvin function ker x"             # <<<<<<<<<<<<<<
 * keip_doc = "y=keip(x) returns the derivative of the Kelvin function kei x"
 * kelvin_doc = "(Be, Ke, Bep, Kep)=kelvin(x) returns the tuple (Be, Ke, Bep, Kep) which containes \ncomplex numbers representing the real and imaginary Kelvin functions \nand their derivatives evaluated at x.  For example, \nkelvin(x)[0].real = ber x and kelvin(x)[0].imag = bei x with similar \nrelationships for ker and kei."
 */
  PythonOps::SetGlobal(__pyx_context, "kei_doc", ((System::Object^)"y=kei(x) returns the Kelvin function ker x"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":731
 * k1e_doc = "y=k1e(x) returns the exponentially scaled modified Bessel function\nof the second kind (sometimes called the third kind) of order 1 at x.  k1e(x) = exp(x) * k1(x)"
 * kei_doc = "y=kei(x) returns the Kelvin function ker x"
 * keip_doc = "y=keip(x) returns the derivative of the Kelvin function kei x"             # <<<<<<<<<<<<<<
 * kelvin_doc = "(Be, Ke, Bep, Kep)=kelvin(x) returns the tuple (Be, Ke, Bep, Kep) which containes \ncomplex numbers representing the real and imaginary Kelvin functions \nand their derivatives evaluated at x.  For example, \nkelvin(x)[0].real = ber x and kelvin(x)[0].imag = bei x with similar \nrelationships for ker and kei."
 * ker_doc = "y=ker(x) returns the Kelvin function ker x"
 */
  PythonOps::SetGlobal(__pyx_context, "keip_doc", ((System::Object^)"y=keip(x) returns the derivative of the Kelvin function kei x"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":732
 * kei_doc = "y=kei(x) returns the Kelvin function ker x"
 * keip_doc = "y=keip(x) returns the derivative of the Kelvin function kei x"
 * kelvin_doc = "(Be, Ke, Bep, Kep)=kelvin(x) returns the tuple (Be, Ke, Bep, Kep) which containes \ncomplex numbers representing the real and imaginary Kelvin functions \nand their derivatives evaluated at x.  For example, \nkelvin(x)[0].real = ber x and kelvin(x)[0].imag = bei x with similar \nrelationships for ker and kei."             # <<<<<<<<<<<<<<
 * ker_doc = "y=ker(x) returns the Kelvin function ker x"
 * kerp_doc = "y=kerp(x) returns the derivative of the Kelvin function ker x"
 */
  PythonOps::SetGlobal(__pyx_context, "kelvin_doc", ((System::Object^)"(Be, Ke, Bep, Kep)=kelvin(x) returns the tuple (Be, Ke, Bep, Kep) which containes \ncomplex numbers representing the real and imaginary Kelvin functions \nand their derivatives evaluated at x.  For example, \nkelvin(x)[0].real = ber x and kelvin(x)[0].imag = bei x with similar \nrelationships for ker and kei."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":733
 * keip_doc = "y=keip(x) returns the derivative of the Kelvin function kei x"
 * kelvin_doc = "(Be, Ke, Bep, Kep)=kelvin(x) returns the tuple (Be, Ke, Bep, Kep) which containes \ncomplex numbers representing the real and imaginary Kelvin functions \nand their derivatives evaluated at x.  For example, \nkelvin(x)[0].real = ber x and kelvin(x)[0].imag = bei x with similar \nrelationships for ker and kei."
 * ker_doc = "y=ker(x) returns the Kelvin function ker x"             # <<<<<<<<<<<<<<
 * kerp_doc = "y=kerp(x) returns the derivative of the Kelvin function ker x"
 * kn_doc = "y=kn(n,x) returns the modified Bessel function of the second kind (sometimes called the third kind) for\ninteger order n at x."
 */
  PythonOps::SetGlobal(__pyx_context, "ker_doc", ((System::Object^)"y=ker(x) returns the Kelvin function ker x"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":734
 * kelvin_doc = "(Be, Ke, Bep, Kep)=kelvin(x) returns the tuple (Be, Ke, Bep, Kep) which containes \ncomplex numbers representing the real and imaginary Kelvin functions \nand their derivatives evaluated at x.  For example, \nkelvin(x)[0].real = ber x and kelvin(x)[0].imag = bei x with similar \nrelationships for ker and kei."
 * ker_doc = "y=ker(x) returns the Kelvin function ker x"
 * kerp_doc = "y=kerp(x) returns the derivative of the Kelvin function ker x"             # <<<<<<<<<<<<<<
 * kn_doc = "y=kn(n,x) returns the modified Bessel function of the second kind (sometimes called the third kind) for\ninteger order n at x."
 * kolmogi_doc = "y=kolmogi(p) returns y such that kolmogorov(y) = p"
 */
  PythonOps::SetGlobal(__pyx_context, "kerp_doc", ((System::Object^)"y=kerp(x) returns the derivative of the Kelvin function ker x"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":735
 * ker_doc = "y=ker(x) returns the Kelvin function ker x"
 * kerp_doc = "y=kerp(x) returns the derivative of the Kelvin function ker x"
 * kn_doc = "y=kn(n,x) returns the modified Bessel function of the second kind (sometimes called the third kind) for\ninteger order n at x."             # <<<<<<<<<<<<<<
 * kolmogi_doc = "y=kolmogi(p) returns y such that kolmogorov(y) = p"
 * kolmogorov_doc = "p=kolmogorov(y) returns the complementary cumulative distribution \nfunction of Kolmogorov's limiting distribution (Kn* for large n) \nof a two-sided test for equality between an empirical and a theoretical \ndistribution. It is equal to the (limit as n->infinity of the) probability \nthat sqrt(n) * max absolute deviation > y."
 */
  PythonOps::SetGlobal(__pyx_context, "kn_doc", ((System::Object^)"y=kn(n,x) returns the modified Bessel function of the second kind (sometimes called the third kind) for\ninteger order n at x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":736
 * kerp_doc = "y=kerp(x) returns the derivative of the Kelvin function ker x"
 * kn_doc = "y=kn(n,x) returns the modified Bessel function of the second kind (sometimes called the third kind) for\ninteger order n at x."
 * kolmogi_doc = "y=kolmogi(p) returns y such that kolmogorov(y) = p"             # <<<<<<<<<<<<<<
 * kolmogorov_doc = "p=kolmogorov(y) returns the complementary cumulative distribution \nfunction of Kolmogorov's limiting distribution (Kn* for large n) \nof a two-sided test for equality between an empirical and a theoretical \ndistribution. It is equal to the (limit as n->infinity of the) probability \nthat sqrt(n) * max absolute deviation > y."
 * kv_doc = "y=kv(v,z) returns the modified Bessel function of the second kind (sometimes called the third kind) for\nreal order v at complex z."
 */
  PythonOps::SetGlobal(__pyx_context, "kolmogi_doc", ((System::Object^)"y=kolmogi(p) returns y such that kolmogorov(y) = p"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":737
 * kn_doc = "y=kn(n,x) returns the modified Bessel function of the second kind (sometimes called the third kind) for\ninteger order n at x."
 * kolmogi_doc = "y=kolmogi(p) returns y such that kolmogorov(y) = p"
 * kolmogorov_doc = "p=kolmogorov(y) returns the complementary cumulative distribution \nfunction of Kolmogorov's limiting distribution (Kn* for large n) \nof a two-sided test for equality between an empirical and a theoretical \ndistribution. It is equal to the (limit as n->infinity of the) probability \nthat sqrt(n) * max absolute deviation > y."             # <<<<<<<<<<<<<<
 * kv_doc = "y=kv(v,z) returns the modified Bessel function of the second kind (sometimes called the third kind) for\nreal order v at complex z."
 * kve_doc = "y=kve(v,z) returns the exponentially scaled, modified Bessel function\nof the second kind (sometimes called the third kind) for real order v at complex z: kve(v,z) = kv(v,z) * exp(z)"
 */
  PythonOps::SetGlobal(__pyx_context, "kolmogorov_doc", ((System::Object^)"p=kolmogorov(y) returns the complementary cumulative distribution \nfunction of Kolmogorov's limiting distribution (Kn* for large n) \nof a two-sided test for equality between an empirical and a theoretical \ndistribution. It is equal to the (limit as n->infinity of the) probability \nthat sqrt(n) * max absolute deviation > y."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":738
 * kolmogi_doc = "y=kolmogi(p) returns y such that kolmogorov(y) = p"
 * kolmogorov_doc = "p=kolmogorov(y) returns the complementary cumulative distribution \nfunction of Kolmogorov's limiting distribution (Kn* for large n) \nof a two-sided test for equality between an empirical and a theoretical \ndistribution. It is equal to the (limit as n->infinity of the) probability \nthat sqrt(n) * max absolute deviation > y."
 * kv_doc = "y=kv(v,z) returns the modified Bessel function of the second kind (sometimes called the third kind) for\nreal order v at complex z."             # <<<<<<<<<<<<<<
 * kve_doc = "y=kve(v,z) returns the exponentially scaled, modified Bessel function\nof the second kind (sometimes called the third kind) for real order v at complex z: kve(v,z) = kv(v,z) * exp(z)"
 * log1p_doc = "y=log1p(x) calculates log(1+x) for use when x is near zero."
 */
  PythonOps::SetGlobal(__pyx_context, "kv_doc", ((System::Object^)"y=kv(v,z) returns the modified Bessel function of the second kind (sometimes called the third kind) for\nreal order v at complex z."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":739
 * kolmogorov_doc = "p=kolmogorov(y) returns the complementary cumulative distribution \nfunction of Kolmogorov's limiting distribution (Kn* for large n) \nof a two-sided test for equality between an empirical and a theoretical \ndistribution. It is equal to the (limit as n->infinity of the) probability \nthat sqrt(n) * max absolute deviation > y."
 * kv_doc = "y=kv(v,z) returns the modified Bessel function of the second kind (sometimes called the third kind) for\nreal order v at complex z."
 * kve_doc = "y=kve(v,z) returns the exponentially scaled, modified Bessel function\nof the second kind (sometimes called the third kind) for real order v at complex z: kve(v,z) = kv(v,z) * exp(z)"             # <<<<<<<<<<<<<<
 * log1p_doc = "y=log1p(x) calculates log(1+x) for use when x is near zero."
 * lpmv_doc = "y=lpmv(m,v,x) returns the associated legendre function of integer order\nm and nonnegative degree v: |x|<=1."
 */
  PythonOps::SetGlobal(__pyx_context, "kve_doc", ((System::Object^)"y=kve(v,z) returns the exponentially scaled, modified Bessel function\nof the second kind (sometimes called the third kind) for real order v at complex z: kve(v,z) = kv(v,z) * exp(z)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":740
 * kv_doc = "y=kv(v,z) returns the modified Bessel function of the second kind (sometimes called the third kind) for\nreal order v at complex z."
 * kve_doc = "y=kve(v,z) returns the exponentially scaled, modified Bessel function\nof the second kind (sometimes called the third kind) for real order v at complex z: kve(v,z) = kv(v,z) * exp(z)"
 * log1p_doc = "y=log1p(x) calculates log(1+x) for use when x is near zero."             # <<<<<<<<<<<<<<
 * lpmv_doc = "y=lpmv(m,v,x) returns the associated legendre function of integer order\nm and nonnegative degree v: |x|<=1."
 * mathieu_a_doc = "lmbda=mathieu_a(m,q) returns the characteristic value for the even solution, \nce_m(z,q), of Mathieu's equation"
 */
  PythonOps::SetGlobal(__pyx_context, "log1p_doc", ((System::Object^)"y=log1p(x) calculates log(1+x) for use when x is near zero."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":741
 * kve_doc = "y=kve(v,z) returns the exponentially scaled, modified Bessel function\nof the second kind (sometimes called the third kind) for real order v at complex z: kve(v,z) = kv(v,z) * exp(z)"
 * log1p_doc = "y=log1p(x) calculates log(1+x) for use when x is near zero."
 * lpmv_doc = "y=lpmv(m,v,x) returns the associated legendre function of integer order\nm and nonnegative degree v: |x|<=1."             # <<<<<<<<<<<<<<
 * mathieu_a_doc = "lmbda=mathieu_a(m,q) returns the characteristic value for the even solution, \nce_m(z,q), of Mathieu's equation"
 * mathieu_b_doc = "lmbda=mathieu_b(m,q) returns the characteristic value for the odd solution, \nse_m(z,q), of Mathieu's equation"
 */
  PythonOps::SetGlobal(__pyx_context, "lpmv_doc", ((System::Object^)"y=lpmv(m,v,x) returns the associated legendre function of integer order\nm and nonnegative degree v: |x|<=1."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":742
 * log1p_doc = "y=log1p(x) calculates log(1+x) for use when x is near zero."
 * lpmv_doc = "y=lpmv(m,v,x) returns the associated legendre function of integer order\nm and nonnegative degree v: |x|<=1."
 * mathieu_a_doc = "lmbda=mathieu_a(m,q) returns the characteristic value for the even solution, \nce_m(z,q), of Mathieu's equation"             # <<<<<<<<<<<<<<
 * mathieu_b_doc = "lmbda=mathieu_b(m,q) returns the characteristic value for the odd solution, \nse_m(z,q), of Mathieu's equation"
 * mathieu_cem_doc = "(y,yp)=mathieu_cem(m,q,x) returns the even Mathieu function, ce_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of ce_m(x,q)"
 */
  PythonOps::SetGlobal(__pyx_context, "mathieu_a_doc", ((System::Object^)"lmbda=mathieu_a(m,q) returns the characteristic value for the even solution, \nce_m(z,q), of Mathieu's equation"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":743
 * lpmv_doc = "y=lpmv(m,v,x) returns the associated legendre function of integer order\nm and nonnegative degree v: |x|<=1."
 * mathieu_a_doc = "lmbda=mathieu_a(m,q) returns the characteristic value for the even solution, \nce_m(z,q), of Mathieu's equation"
 * mathieu_b_doc = "lmbda=mathieu_b(m,q) returns the characteristic value for the odd solution, \nse_m(z,q), of Mathieu's equation"             # <<<<<<<<<<<<<<
 * mathieu_cem_doc = "(y,yp)=mathieu_cem(m,q,x) returns the even Mathieu function, ce_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of ce_m(x,q)"
 * mathieu_modcem1_doc = "(y,yp)=mathieu_modcem1(m,q,x) evaluates the even modified Matheiu function \nof the first kind, Mc1m(x,q), and its derivative at x for order m and\nparameter q."
 */
  PythonOps::SetGlobal(__pyx_context, "mathieu_b_doc", ((System::Object^)"lmbda=mathieu_b(m,q) returns the characteristic value for the odd solution, \nse_m(z,q), of Mathieu's equation"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":744
 * mathieu_a_doc = "lmbda=mathieu_a(m,q) returns the characteristic value for the even solution, \nce_m(z,q), of Mathieu's equation"
 * mathieu_b_doc = "lmbda=mathieu_b(m,q) returns the characteristic value for the odd solution, \nse_m(z,q), of Mathieu's equation"
 * mathieu_cem_doc = "(y,yp)=mathieu_cem(m,q,x) returns the even Mathieu function, ce_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of ce_m(x,q)"             # <<<<<<<<<<<<<<
 * mathieu_modcem1_doc = "(y,yp)=mathieu_modcem1(m,q,x) evaluates the even modified Matheiu function \nof the first kind, Mc1m(x,q), and its derivative at x for order m and\nparameter q."
 * mathieu_modcem2_doc = "(y,yp)=mathieu_modcem2(m,q,x) evaluates the even modified Matheiu function \nof the second kind, Mc2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 */
  PythonOps::SetGlobal(__pyx_context, "mathieu_cem_doc", ((System::Object^)"(y,yp)=mathieu_cem(m,q,x) returns the even Mathieu function, ce_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of ce_m(x,q)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":745
 * mathieu_b_doc = "lmbda=mathieu_b(m,q) returns the characteristic value for the odd solution, \nse_m(z,q), of Mathieu's equation"
 * mathieu_cem_doc = "(y,yp)=mathieu_cem(m,q,x) returns the even Mathieu function, ce_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of ce_m(x,q)"
 * mathieu_modcem1_doc = "(y,yp)=mathieu_modcem1(m,q,x) evaluates the even modified Matheiu function \nof the first kind, Mc1m(x,q), and its derivative at x for order m and\nparameter q."             # <<<<<<<<<<<<<<
 * mathieu_modcem2_doc = "(y,yp)=mathieu_modcem2(m,q,x) evaluates the even modified Matheiu function \nof the second kind, Mc2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 * mathieu_modsem1_doc = "(y,yp)=mathieu_modsem1(m,q,x) evaluates the odd modified Matheiu function \nof the first kind, Ms1m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 */
  PythonOps::SetGlobal(__pyx_context, "mathieu_modcem1_doc", ((System::Object^)"(y,yp)=mathieu_modcem1(m,q,x) evaluates the even modified Matheiu function \nof the first kind, Mc1m(x,q), and its derivative at x for order m and\nparameter q."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":746
 * mathieu_cem_doc = "(y,yp)=mathieu_cem(m,q,x) returns the even Mathieu function, ce_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of ce_m(x,q)"
 * mathieu_modcem1_doc = "(y,yp)=mathieu_modcem1(m,q,x) evaluates the even modified Matheiu function \nof the first kind, Mc1m(x,q), and its derivative at x for order m and\nparameter q."
 * mathieu_modcem2_doc = "(y,yp)=mathieu_modcem2(m,q,x) evaluates the even modified Matheiu function \nof the second kind, Mc2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."             # <<<<<<<<<<<<<<
 * mathieu_modsem1_doc = "(y,yp)=mathieu_modsem1(m,q,x) evaluates the odd modified Matheiu function \nof the first kind, Ms1m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 * mathieu_modsem2_doc = "(y,yp)=mathieu_modsem2(m,q,x) evaluates the odd modified Matheiu function\nof the second kind, Ms2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 */
  PythonOps::SetGlobal(__pyx_context, "mathieu_modcem2_doc", ((System::Object^)"(y,yp)=mathieu_modcem2(m,q,x) evaluates the even modified Matheiu function \nof the second kind, Mc2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":747
 * mathieu_modcem1_doc = "(y,yp)=mathieu_modcem1(m,q,x) evaluates the even modified Matheiu function \nof the first kind, Mc1m(x,q), and its derivative at x for order m and\nparameter q."
 * mathieu_modcem2_doc = "(y,yp)=mathieu_modcem2(m,q,x) evaluates the even modified Matheiu function \nof the second kind, Mc2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 * mathieu_modsem1_doc = "(y,yp)=mathieu_modsem1(m,q,x) evaluates the odd modified Matheiu function \nof the first kind, Ms1m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."             # <<<<<<<<<<<<<<
 * mathieu_modsem2_doc = "(y,yp)=mathieu_modsem2(m,q,x) evaluates the odd modified Matheiu function\nof the second kind, Ms2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 * mathieu_sem_doc = "(y,yp)=mathieu_sem(m,q,x) returns the odd Mathieu function, se_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of se_m(x,q)."
 */
  PythonOps::SetGlobal(__pyx_context, "mathieu_modsem1_doc", ((System::Object^)"(y,yp)=mathieu_modsem1(m,q,x) evaluates the odd modified Matheiu function \nof the first kind, Ms1m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":748
 * mathieu_modcem2_doc = "(y,yp)=mathieu_modcem2(m,q,x) evaluates the even modified Matheiu function \nof the second kind, Mc2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 * mathieu_modsem1_doc = "(y,yp)=mathieu_modsem1(m,q,x) evaluates the odd modified Matheiu function \nof the first kind, Ms1m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 * mathieu_modsem2_doc = "(y,yp)=mathieu_modsem2(m,q,x) evaluates the odd modified Matheiu function\nof the second kind, Ms2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."             # <<<<<<<<<<<<<<
 * mathieu_sem_doc = "(y,yp)=mathieu_sem(m,q,x) returns the odd Mathieu function, se_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of se_m(x,q)."
 * modfresnelm_doc = "(fm,km)=modfresnelp(x) returns the modified fresnel integrals F_-(x) amd K_-(x)\nas fp=integral(exp(-1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(1j*(x*x+pi/4))*fp"
 */
  PythonOps::SetGlobal(__pyx_context, "mathieu_modsem2_doc", ((System::Object^)"(y,yp)=mathieu_modsem2(m,q,x) evaluates the odd modified Matheiu function\nof the second kind, Ms2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":749
 * mathieu_modsem1_doc = "(y,yp)=mathieu_modsem1(m,q,x) evaluates the odd modified Matheiu function \nof the first kind, Ms1m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 * mathieu_modsem2_doc = "(y,yp)=mathieu_modsem2(m,q,x) evaluates the odd modified Matheiu function\nof the second kind, Ms2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 * mathieu_sem_doc = "(y,yp)=mathieu_sem(m,q,x) returns the odd Mathieu function, se_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of se_m(x,q)."             # <<<<<<<<<<<<<<
 * modfresnelm_doc = "(fm,km)=modfresnelp(x) returns the modified fresnel integrals F_-(x) amd K_-(x)\nas fp=integral(exp(-1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(1j*(x*x+pi/4))*fp"
 * modfresnelp_doc = "(fp,kp)=modfresnelp(x) returns the modified fresnel integrals F_+(x) and K_+(x)\nas fp=integral(exp(1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(-1j*(x*x+pi/4))*fp"
 */
  PythonOps::SetGlobal(__pyx_context, "mathieu_sem_doc", ((System::Object^)"(y,yp)=mathieu_sem(m,q,x) returns the odd Mathieu function, se_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of se_m(x,q)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":750
 * mathieu_modsem2_doc = "(y,yp)=mathieu_modsem2(m,q,x) evaluates the odd modified Matheiu function\nof the second kind, Ms2m(x,q), and its derivative at x (given in degrees)\nfor order m and parameter q."
 * mathieu_sem_doc = "(y,yp)=mathieu_sem(m,q,x) returns the odd Mathieu function, se_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of se_m(x,q)."
 * modfresnelm_doc = "(fm,km)=modfresnelp(x) returns the modified fresnel integrals F_-(x) amd K_-(x)\nas fp=integral(exp(-1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(1j*(x*x+pi/4))*fp"             # <<<<<<<<<<<<<<
 * modfresnelp_doc = "(fp,kp)=modfresnelp(x) returns the modified fresnel integrals F_+(x) and K_+(x)\nas fp=integral(exp(1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(-1j*(x*x+pi/4))*fp"
 * modstruve_doc = "y=modstruve(v,x) returns the modified Struve function Lv(x) of order\nv at x, x must be positive unless v is an integer and it is recommended\nthat |v|<=20."
 */
  PythonOps::SetGlobal(__pyx_context, "modfresnelm_doc", ((System::Object^)"(fm,km)=modfresnelp(x) returns the modified fresnel integrals F_-(x) amd K_-(x)\nas fp=integral(exp(-1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(1j*(x*x+pi/4))*fp"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":751
 * mathieu_sem_doc = "(y,yp)=mathieu_sem(m,q,x) returns the odd Mathieu function, se_m(x,q), \nof order m and parameter q evaluated at x (given in degrees).\nAlso returns the derivative with respect to x of se_m(x,q)."
 * modfresnelm_doc = "(fm,km)=modfresnelp(x) returns the modified fresnel integrals F_-(x) amd K_-(x)\nas fp=integral(exp(-1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(1j*(x*x+pi/4))*fp"
 * modfresnelp_doc = "(fp,kp)=modfresnelp(x) returns the modified fresnel integrals F_+(x) and K_+(x)\nas fp=integral(exp(1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(-1j*(x*x+pi/4))*fp"             # <<<<<<<<<<<<<<
 * modstruve_doc = "y=modstruve(v,x) returns the modified Struve function Lv(x) of order\nv at x, x must be positive unless v is an integer and it is recommended\nthat |v|<=20."
 * nbdtr_doc = "y=nbdtr(k,n,p) returns the sum of the terms 0 through k of the\nnegative binomial distribution: sum((n+j-1)Cj p**n (1-p)**j,j=0..k).\nIn a sequence of Bernoulli trials this is the probability that k or\nfewer failures precede the nth success."
 */
  PythonOps::SetGlobal(__pyx_context, "modfresnelp_doc", ((System::Object^)"(fp,kp)=modfresnelp(x) returns the modified fresnel integrals F_+(x) and K_+(x)\nas fp=integral(exp(1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(-1j*(x*x+pi/4))*fp"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":752
 * modfresnelm_doc = "(fm,km)=modfresnelp(x) returns the modified fresnel integrals F_-(x) amd K_-(x)\nas fp=integral(exp(-1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(1j*(x*x+pi/4))*fp"
 * modfresnelp_doc = "(fp,kp)=modfresnelp(x) returns the modified fresnel integrals F_+(x) and K_+(x)\nas fp=integral(exp(1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(-1j*(x*x+pi/4))*fp"
 * modstruve_doc = "y=modstruve(v,x) returns the modified Struve function Lv(x) of order\nv at x, x must be positive unless v is an integer and it is recommended\nthat |v|<=20."             # <<<<<<<<<<<<<<
 * nbdtr_doc = "y=nbdtr(k,n,p) returns the sum of the terms 0 through k of the\nnegative binomial distribution: sum((n+j-1)Cj p**n (1-p)**j,j=0..k).\nIn a sequence of Bernoulli trials this is the probability that k or\nfewer failures precede the nth success."
 * nbdtrc_doc = "y=nbdtrc(k,n,p) returns the sum of the terms k+1 to infinity of the\nnegative binomial distribution."
 */
  PythonOps::SetGlobal(__pyx_context, "modstruve_doc", ((System::Object^)"y=modstruve(v,x) returns the modified Struve function Lv(x) of order\nv at x, x must be positive unless v is an integer and it is recommended\nthat |v|<=20."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":753
 * modfresnelp_doc = "(fp,kp)=modfresnelp(x) returns the modified fresnel integrals F_+(x) and K_+(x)\nas fp=integral(exp(1j*t*t),t=x..inf) and kp=1/sqrt(pi)*exp(-1j*(x*x+pi/4))*fp"
 * modstruve_doc = "y=modstruve(v,x) returns the modified Struve function Lv(x) of order\nv at x, x must be positive unless v is an integer and it is recommended\nthat |v|<=20."
 * nbdtr_doc = "y=nbdtr(k,n,p) returns the sum of the terms 0 through k of the\nnegative binomial distribution: sum((n+j-1)Cj p**n (1-p)**j,j=0..k).\nIn a sequence of Bernoulli trials this is the probability that k or\nfewer failures precede the nth success."             # <<<<<<<<<<<<<<
 * nbdtrc_doc = "y=nbdtrc(k,n,p) returns the sum of the terms k+1 to infinity of the\nnegative binomial distribution."
 * nbdtri_doc = "p=nbdtri(k,n,y) finds the argument p such that nbdtr(k,n,p)=y."
 */
  PythonOps::SetGlobal(__pyx_context, "nbdtr_doc", ((System::Object^)"y=nbdtr(k,n,p) returns the sum of the terms 0 through k of the\nnegative binomial distribution: sum((n+j-1)Cj p**n (1-p)**j,j=0..k).\nIn a sequence of Bernoulli trials this is the probability that k or\nfewer failures precede the nth success."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":754
 * modstruve_doc = "y=modstruve(v,x) returns the modified Struve function Lv(x) of order\nv at x, x must be positive unless v is an integer and it is recommended\nthat |v|<=20."
 * nbdtr_doc = "y=nbdtr(k,n,p) returns the sum of the terms 0 through k of the\nnegative binomial distribution: sum((n+j-1)Cj p**n (1-p)**j,j=0..k).\nIn a sequence of Bernoulli trials this is the probability that k or\nfewer failures precede the nth success."
 * nbdtrc_doc = "y=nbdtrc(k,n,p) returns the sum of the terms k+1 to infinity of the\nnegative binomial distribution."             # <<<<<<<<<<<<<<
 * nbdtri_doc = "p=nbdtri(k,n,y) finds the argument p such that nbdtr(k,n,p)=y."
 * nbdtrik_doc = "k=nbdtrik(y,n,p) finds the argument k such that nbdtr(k,n,p)=y."
 */
  PythonOps::SetGlobal(__pyx_context, "nbdtrc_doc", ((System::Object^)"y=nbdtrc(k,n,p) returns the sum of the terms k+1 to infinity of the\nnegative binomial distribution."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":755
 * nbdtr_doc = "y=nbdtr(k,n,p) returns the sum of the terms 0 through k of the\nnegative binomial distribution: sum((n+j-1)Cj p**n (1-p)**j,j=0..k).\nIn a sequence of Bernoulli trials this is the probability that k or\nfewer failures precede the nth success."
 * nbdtrc_doc = "y=nbdtrc(k,n,p) returns the sum of the terms k+1 to infinity of the\nnegative binomial distribution."
 * nbdtri_doc = "p=nbdtri(k,n,y) finds the argument p such that nbdtr(k,n,p)=y."             # <<<<<<<<<<<<<<
 * nbdtrik_doc = "k=nbdtrik(y,n,p) finds the argument k such that nbdtr(k,n,p)=y."
 * nbdtrin_doc = "n=nbdtrin(k,y,p) finds the argument n such that nbdtr(k,n,p)=y."
 */
  PythonOps::SetGlobal(__pyx_context, "nbdtri_doc", ((System::Object^)"p=nbdtri(k,n,y) finds the argument p such that nbdtr(k,n,p)=y."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":756
 * nbdtrc_doc = "y=nbdtrc(k,n,p) returns the sum of the terms k+1 to infinity of the\nnegative binomial distribution."
 * nbdtri_doc = "p=nbdtri(k,n,y) finds the argument p such that nbdtr(k,n,p)=y."
 * nbdtrik_doc = "k=nbdtrik(y,n,p) finds the argument k such that nbdtr(k,n,p)=y."             # <<<<<<<<<<<<<<
 * nbdtrin_doc = "n=nbdtrin(k,y,p) finds the argument n such that nbdtr(k,n,p)=y."
 * ndtr_doc = "y=ndtr(x) returns the area under the standard Gaussian probability \ndensity function, integrated from minus infinity to x:\n1/sqrt(2*pi) * integral(exp(-t**2 / 2),t=-inf..x)"
 */
  PythonOps::SetGlobal(__pyx_context, "nbdtrik_doc", ((System::Object^)"k=nbdtrik(y,n,p) finds the argument k such that nbdtr(k,n,p)=y."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":757
 * nbdtri_doc = "p=nbdtri(k,n,y) finds the argument p such that nbdtr(k,n,p)=y."
 * nbdtrik_doc = "k=nbdtrik(y,n,p) finds the argument k such that nbdtr(k,n,p)=y."
 * nbdtrin_doc = "n=nbdtrin(k,y,p) finds the argument n such that nbdtr(k,n,p)=y."             # <<<<<<<<<<<<<<
 * ndtr_doc = "y=ndtr(x) returns the area under the standard Gaussian probability \ndensity function, integrated from minus infinity to x:\n1/sqrt(2*pi) * integral(exp(-t**2 / 2),t=-inf..x)"
 * ndtri_doc = "x=ndtri(y) returns the argument x for which the area udnder the\nGaussian probability density function (integrated from minus infinity\nto x) is equal to y."
 */
  PythonOps::SetGlobal(__pyx_context, "nbdtrin_doc", ((System::Object^)"n=nbdtrin(k,y,p) finds the argument n such that nbdtr(k,n,p)=y."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":758
 * nbdtrik_doc = "k=nbdtrik(y,n,p) finds the argument k such that nbdtr(k,n,p)=y."
 * nbdtrin_doc = "n=nbdtrin(k,y,p) finds the argument n such that nbdtr(k,n,p)=y."
 * ndtr_doc = "y=ndtr(x) returns the area under the standard Gaussian probability \ndensity function, integrated from minus infinity to x:\n1/sqrt(2*pi) * integral(exp(-t**2 / 2),t=-inf..x)"             # <<<<<<<<<<<<<<
 * ndtri_doc = "x=ndtri(y) returns the argument x for which the area udnder the\nGaussian probability density function (integrated from minus infinity\nto x) is equal to y."
 * obl_ang1_doc = "(s,sp)=obl_ang1(m,n,c,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 */
  PythonOps::SetGlobal(__pyx_context, "ndtr_doc", ((System::Object^)"y=ndtr(x) returns the area under the standard Gaussian probability \ndensity function, integrated from minus infinity to x:\n1/sqrt(2*pi) * integral(exp(-t**2 / 2),t=-inf..x)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":759
 * nbdtrin_doc = "n=nbdtrin(k,y,p) finds the argument n such that nbdtr(k,n,p)=y."
 * ndtr_doc = "y=ndtr(x) returns the area under the standard Gaussian probability \ndensity function, integrated from minus infinity to x:\n1/sqrt(2*pi) * integral(exp(-t**2 / 2),t=-inf..x)"
 * ndtri_doc = "x=ndtri(y) returns the argument x for which the area udnder the\nGaussian probability density function (integrated from minus infinity\nto x) is equal to y."             # <<<<<<<<<<<<<<
 * obl_ang1_doc = "(s,sp)=obl_ang1(m,n,c,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * obl_ang1_cv_doc = "(s,sp)=obl_ang1_cv(m,n,c,cv,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 */
  PythonOps::SetGlobal(__pyx_context, "ndtri_doc", ((System::Object^)"x=ndtri(y) returns the argument x for which the area udnder the\nGaussian probability density function (integrated from minus infinity\nto x) is equal to y."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":760
 * ndtr_doc = "y=ndtr(x) returns the area under the standard Gaussian probability \ndensity function, integrated from minus infinity to x:\n1/sqrt(2*pi) * integral(exp(-t**2 / 2),t=-inf..x)"
 * ndtri_doc = "x=ndtri(y) returns the argument x for which the area udnder the\nGaussian probability density function (integrated from minus infinity\nto x) is equal to y."
 * obl_ang1_doc = "(s,sp)=obl_ang1(m,n,c,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."             # <<<<<<<<<<<<<<
 * obl_ang1_cv_doc = "(s,sp)=obl_ang1_cv(m,n,c,cv,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * obl_cv_doc = "cv=obl_cv(m,n,c) computes the characteristic value of oblate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
 */
  PythonOps::SetGlobal(__pyx_context, "obl_ang1_doc", ((System::Object^)"(s,sp)=obl_ang1(m,n,c,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":761
 * ndtri_doc = "x=ndtri(y) returns the argument x for which the area udnder the\nGaussian probability density function (integrated from minus infinity\nto x) is equal to y."
 * obl_ang1_doc = "(s,sp)=obl_ang1(m,n,c,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * obl_ang1_cv_doc = "(s,sp)=obl_ang1_cv(m,n,c,cv,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."             # <<<<<<<<<<<<<<
 * obl_cv_doc = "cv=obl_cv(m,n,c) computes the characteristic value of oblate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
 * obl_rad1_doc = "(s,sp)=obl_rad1(m,n,c,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 */
  PythonOps::SetGlobal(__pyx_context, "obl_ang1_cv_doc", ((System::Object^)"(s,sp)=obl_ang1_cv(m,n,c,cv,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":762
 * obl_ang1_doc = "(s,sp)=obl_ang1(m,n,c,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * obl_ang1_cv_doc = "(s,sp)=obl_ang1_cv(m,n,c,cv,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * obl_cv_doc = "cv=obl_cv(m,n,c) computes the characteristic value of oblate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."             # <<<<<<<<<<<<<<
 * obl_rad1_doc = "(s,sp)=obl_rad1(m,n,c,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * obl_rad1_cv_doc = "(s,sp)=obl_rad1_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 */
  PythonOps::SetGlobal(__pyx_context, "obl_cv_doc", ((System::Object^)"cv=obl_cv(m,n,c) computes the characteristic value of oblate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":763
 * obl_ang1_cv_doc = "(s,sp)=obl_ang1_cv(m,n,c,cv,x) computes the oblate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * obl_cv_doc = "cv=obl_cv(m,n,c) computes the characteristic value of oblate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
 * obl_rad1_doc = "(s,sp)=obl_rad1(m,n,c,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."             # <<<<<<<<<<<<<<
 * obl_rad1_cv_doc = "(s,sp)=obl_rad1_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * obl_rad2_doc = "(s,sp)=obl_rad2(m,n,c,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 */
  PythonOps::SetGlobal(__pyx_context, "obl_rad1_doc", ((System::Object^)"(s,sp)=obl_rad1(m,n,c,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":764
 * obl_cv_doc = "cv=obl_cv(m,n,c) computes the characteristic value of oblate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
 * obl_rad1_doc = "(s,sp)=obl_rad1(m,n,c,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * obl_rad1_cv_doc = "(s,sp)=obl_rad1_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."             # <<<<<<<<<<<<<<
 * obl_rad2_doc = "(s,sp)=obl_rad2(m,n,c,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * obl_rad2_cv_doc = "(s,sp)=obl_rad2_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 */
  PythonOps::SetGlobal(__pyx_context, "obl_rad1_cv_doc", ((System::Object^)"(s,sp)=obl_rad1_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":765
 * obl_rad1_doc = "(s,sp)=obl_rad1(m,n,c,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * obl_rad1_cv_doc = "(s,sp)=obl_rad1_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * obl_rad2_doc = "(s,sp)=obl_rad2(m,n,c,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."             # <<<<<<<<<<<<<<
 * obl_rad2_cv_doc = "(s,sp)=obl_rad2_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * pbdv_doc = "(d,dp)=pbdv(v,x) returns (d,dp) with the parabolic cylinder function Dv(x) in \nd and the derivative, Dv'(x) in dp."
 */
  PythonOps::SetGlobal(__pyx_context, "obl_rad2_doc", ((System::Object^)"(s,sp)=obl_rad2(m,n,c,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":766
 * obl_rad1_cv_doc = "(s,sp)=obl_rad1_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * obl_rad2_doc = "(s,sp)=obl_rad2(m,n,c,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * obl_rad2_cv_doc = "(s,sp)=obl_rad2_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."             # <<<<<<<<<<<<<<
 * pbdv_doc = "(d,dp)=pbdv(v,x) returns (d,dp) with the parabolic cylinder function Dv(x) in \nd and the derivative, Dv'(x) in dp."
 * pbvv_doc = "(v,vp)=pbvv(v,x) returns (v,vp) with the parabolic cylinder function Vv(x) in \nv and the derivative, Vv'(x) in vp."
 */
  PythonOps::SetGlobal(__pyx_context, "obl_rad2_cv_doc", ((System::Object^)"(s,sp)=obl_rad2_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":767
 * obl_rad2_doc = "(s,sp)=obl_rad2(m,n,c,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * obl_rad2_cv_doc = "(s,sp)=obl_rad2_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * pbdv_doc = "(d,dp)=pbdv(v,x) returns (d,dp) with the parabolic cylinder function Dv(x) in \nd and the derivative, Dv'(x) in dp."             # <<<<<<<<<<<<<<
 * pbvv_doc = "(v,vp)=pbvv(v,x) returns (v,vp) with the parabolic cylinder function Vv(x) in \nv and the derivative, Vv'(x) in vp."
 * pbwa_doc = "(w,wp)=pbwa(a,x) returns (w,wp) with the parabolic cylinder function W(a,x) in \nw and the derivative, W'(a,x) in wp.  May not be accurate for large (>5) \narguments in a and/or x."
 */
  PythonOps::SetGlobal(__pyx_context, "pbdv_doc", ((System::Object^)"(d,dp)=pbdv(v,x) returns (d,dp) with the parabolic cylinder function Dv(x) in \nd and the derivative, Dv'(x) in dp."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":768
 * obl_rad2_cv_doc = "(s,sp)=obl_rad2_cv(m,n,c,cv,x) computes the oblate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * pbdv_doc = "(d,dp)=pbdv(v,x) returns (d,dp) with the parabolic cylinder function Dv(x) in \nd and the derivative, Dv'(x) in dp."
 * pbvv_doc = "(v,vp)=pbvv(v,x) returns (v,vp) with the parabolic cylinder function Vv(x) in \nv and the derivative, Vv'(x) in vp."             # <<<<<<<<<<<<<<
 * pbwa_doc = "(w,wp)=pbwa(a,x) returns (w,wp) with the parabolic cylinder function W(a,x) in \nw and the derivative, W'(a,x) in wp.  May not be accurate for large (>5) \narguments in a and/or x."
 * pdtr_doc = "y=pdtr(k,m) returns the sum of the first k terms of the Poisson\ndistribution: sum(exp(-m) * m**j / j!, j=0..k) = gammaincc( k+1, m).\nArguments must both be positive and k an integer."
 */
  PythonOps::SetGlobal(__pyx_context, "pbvv_doc", ((System::Object^)"(v,vp)=pbvv(v,x) returns (v,vp) with the parabolic cylinder function Vv(x) in \nv and the derivative, Vv'(x) in vp."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":769
 * pbdv_doc = "(d,dp)=pbdv(v,x) returns (d,dp) with the parabolic cylinder function Dv(x) in \nd and the derivative, Dv'(x) in dp."
 * pbvv_doc = "(v,vp)=pbvv(v,x) returns (v,vp) with the parabolic cylinder function Vv(x) in \nv and the derivative, Vv'(x) in vp."
 * pbwa_doc = "(w,wp)=pbwa(a,x) returns (w,wp) with the parabolic cylinder function W(a,x) in \nw and the derivative, W'(a,x) in wp.  May not be accurate for large (>5) \narguments in a and/or x."             # <<<<<<<<<<<<<<
 * pdtr_doc = "y=pdtr(k,m) returns the sum of the first k terms of the Poisson\ndistribution: sum(exp(-m) * m**j / j!, j=0..k) = gammaincc( k+1, m).\nArguments must both be positive and k an integer."
 * pdtrc_doc = "y=pdtrc(k,m) returns the sum of the terms from k+1 to infinity of the\nPoisson distribution: sum(exp(-m) * m**j / j!, j=k+1..inf) = gammainc( k+1, m).\nArguments must both be positive and k an integer."
 */
  PythonOps::SetGlobal(__pyx_context, "pbwa_doc", ((System::Object^)"(w,wp)=pbwa(a,x) returns (w,wp) with the parabolic cylinder function W(a,x) in \nw and the derivative, W'(a,x) in wp.  May not be accurate for large (>5) \narguments in a and/or x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":770
 * pbvv_doc = "(v,vp)=pbvv(v,x) returns (v,vp) with the parabolic cylinder function Vv(x) in \nv and the derivative, Vv'(x) in vp."
 * pbwa_doc = "(w,wp)=pbwa(a,x) returns (w,wp) with the parabolic cylinder function W(a,x) in \nw and the derivative, W'(a,x) in wp.  May not be accurate for large (>5) \narguments in a and/or x."
 * pdtr_doc = "y=pdtr(k,m) returns the sum of the first k terms of the Poisson\ndistribution: sum(exp(-m) * m**j / j!, j=0..k) = gammaincc( k+1, m).\nArguments must both be positive and k an integer."             # <<<<<<<<<<<<<<
 * pdtrc_doc = "y=pdtrc(k,m) returns the sum of the terms from k+1 to infinity of the\nPoisson distribution: sum(exp(-m) * m**j / j!, j=k+1..inf) = gammainc( k+1, m).\nArguments must both be positive and k an integer."
 * pdtri_doc = "m=pdtri(k,y) returns the Poisson variable m such that the sum\nfrom 0 to k of the Poisson density is equal to the given probability\ny:  calculated by gammaincinv( k+1, y).  k must be a nonnegative integer and\ny between 0 and 1."
 */
  PythonOps::SetGlobal(__pyx_context, "pdtr_doc", ((System::Object^)"y=pdtr(k,m) returns the sum of the first k terms of the Poisson\ndistribution: sum(exp(-m) * m**j / j!, j=0..k) = gammaincc( k+1, m).\nArguments must both be positive and k an integer."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":771
 * pbwa_doc = "(w,wp)=pbwa(a,x) returns (w,wp) with the parabolic cylinder function W(a,x) in \nw and the derivative, W'(a,x) in wp.  May not be accurate for large (>5) \narguments in a and/or x."
 * pdtr_doc = "y=pdtr(k,m) returns the sum of the first k terms of the Poisson\ndistribution: sum(exp(-m) * m**j / j!, j=0..k) = gammaincc( k+1, m).\nArguments must both be positive and k an integer."
 * pdtrc_doc = "y=pdtrc(k,m) returns the sum of the terms from k+1 to infinity of the\nPoisson distribution: sum(exp(-m) * m**j / j!, j=k+1..inf) = gammainc( k+1, m).\nArguments must both be positive and k an integer."             # <<<<<<<<<<<<<<
 * pdtri_doc = "m=pdtri(k,y) returns the Poisson variable m such that the sum\nfrom 0 to k of the Poisson density is equal to the given probability\ny:  calculated by gammaincinv( k+1, y).  k must be a nonnegative integer and\ny between 0 and 1."
 * pdtrik_doc = "k=pdtrik(p,m) returns the quantile k such that pdtr(k,m)=p"
 */
  PythonOps::SetGlobal(__pyx_context, "pdtrc_doc", ((System::Object^)"y=pdtrc(k,m) returns the sum of the terms from k+1 to infinity of the\nPoisson distribution: sum(exp(-m) * m**j / j!, j=k+1..inf) = gammainc( k+1, m).\nArguments must both be positive and k an integer."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":772
 * pdtr_doc = "y=pdtr(k,m) returns the sum of the first k terms of the Poisson\ndistribution: sum(exp(-m) * m**j / j!, j=0..k) = gammaincc( k+1, m).\nArguments must both be positive and k an integer."
 * pdtrc_doc = "y=pdtrc(k,m) returns the sum of the terms from k+1 to infinity of the\nPoisson distribution: sum(exp(-m) * m**j / j!, j=k+1..inf) = gammainc( k+1, m).\nArguments must both be positive and k an integer."
 * pdtri_doc = "m=pdtri(k,y) returns the Poisson variable m such that the sum\nfrom 0 to k of the Poisson density is equal to the given probability\ny:  calculated by gammaincinv( k+1, y).  k must be a nonnegative integer and\ny between 0 and 1."             # <<<<<<<<<<<<<<
 * pdtrik_doc = "k=pdtrik(p,m) returns the quantile k such that pdtr(k,m)=p"
 * pro_ang1_doc = "(s,sp)=pro_ang1(m,n,c,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 */
  PythonOps::SetGlobal(__pyx_context, "pdtri_doc", ((System::Object^)"m=pdtri(k,y) returns the Poisson variable m such that the sum\nfrom 0 to k of the Poisson density is equal to the given probability\ny:  calculated by gammaincinv( k+1, y).  k must be a nonnegative integer and\ny between 0 and 1."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":773
 * pdtrc_doc = "y=pdtrc(k,m) returns the sum of the terms from k+1 to infinity of the\nPoisson distribution: sum(exp(-m) * m**j / j!, j=k+1..inf) = gammainc( k+1, m).\nArguments must both be positive and k an integer."
 * pdtri_doc = "m=pdtri(k,y) returns the Poisson variable m such that the sum\nfrom 0 to k of the Poisson density is equal to the given probability\ny:  calculated by gammaincinv( k+1, y).  k must be a nonnegative integer and\ny between 0 and 1."
 * pdtrik_doc = "k=pdtrik(p,m) returns the quantile k such that pdtr(k,m)=p"             # <<<<<<<<<<<<<<
 * pro_ang1_doc = "(s,sp)=pro_ang1(m,n,c,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * pro_ang1_cv_doc = "(s,sp)=pro_ang1_cv(m,n,c,cv,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 */
  PythonOps::SetGlobal(__pyx_context, "pdtrik_doc", ((System::Object^)"k=pdtrik(p,m) returns the quantile k such that pdtr(k,m)=p"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":774
 * pdtri_doc = "m=pdtri(k,y) returns the Poisson variable m such that the sum\nfrom 0 to k of the Poisson density is equal to the given probability\ny:  calculated by gammaincinv( k+1, y).  k must be a nonnegative integer and\ny between 0 and 1."
 * pdtrik_doc = "k=pdtrik(p,m) returns the quantile k such that pdtr(k,m)=p"
 * pro_ang1_doc = "(s,sp)=pro_ang1(m,n,c,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."             # <<<<<<<<<<<<<<
 * pro_ang1_cv_doc = "(s,sp)=pro_ang1_cv(m,n,c,cv,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * pro_cv_doc = "cv=pro_cv(m,n,c) computes the characteristic value of prolate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
 */
  PythonOps::SetGlobal(__pyx_context, "pro_ang1_doc", ((System::Object^)"(s,sp)=pro_ang1(m,n,c,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":775
 * pdtrik_doc = "k=pdtrik(p,m) returns the quantile k such that pdtr(k,m)=p"
 * pro_ang1_doc = "(s,sp)=pro_ang1(m,n,c,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * pro_ang1_cv_doc = "(s,sp)=pro_ang1_cv(m,n,c,cv,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."             # <<<<<<<<<<<<<<
 * pro_cv_doc = "cv=pro_cv(m,n,c) computes the characteristic value of prolate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
 * pro_rad1_doc = "(s,sp)=pro_rad1(m,n,c,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 */
  PythonOps::SetGlobal(__pyx_context, "pro_ang1_cv_doc", ((System::Object^)"(s,sp)=pro_ang1_cv(m,n,c,cv,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":776
 * pro_ang1_doc = "(s,sp)=pro_ang1(m,n,c,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * pro_ang1_cv_doc = "(s,sp)=pro_ang1_cv(m,n,c,cv,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * pro_cv_doc = "cv=pro_cv(m,n,c) computes the characteristic value of prolate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."             # <<<<<<<<<<<<<<
 * pro_rad1_doc = "(s,sp)=pro_rad1(m,n,c,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * pro_rad1_cv_doc = "(s,sp)=pro_rad1_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 */
  PythonOps::SetGlobal(__pyx_context, "pro_cv_doc", ((System::Object^)"cv=pro_cv(m,n,c) computes the characteristic value of prolate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":777
 * pro_ang1_cv_doc = "(s,sp)=pro_ang1_cv(m,n,c,cv,x) computes the prolate sheroidal angular function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * pro_cv_doc = "cv=pro_cv(m,n,c) computes the characteristic value of prolate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
 * pro_rad1_doc = "(s,sp)=pro_rad1(m,n,c,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."             # <<<<<<<<<<<<<<
 * pro_rad1_cv_doc = "(s,sp)=pro_rad1_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * pro_rad2_doc = "(s,sp)=pro_rad2(m,n,c,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 */
  PythonOps::SetGlobal(__pyx_context, "pro_rad1_doc", ((System::Object^)"(s,sp)=pro_rad1(m,n,c,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":778
 * pro_cv_doc = "cv=pro_cv(m,n,c) computes the characteristic value of prolate spheroidal \nwave functions of order m,n (n>=m) and spheroidal parameter c."
 * pro_rad1_doc = "(s,sp)=pro_rad1(m,n,c,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * pro_rad1_cv_doc = "(s,sp)=pro_rad1_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."             # <<<<<<<<<<<<<<
 * pro_rad2_doc = "(s,sp)=pro_rad2(m,n,c,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * pro_rad2_cv_doc = "(s,sp)=pro_rad2_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 */
  PythonOps::SetGlobal(__pyx_context, "pro_rad1_cv_doc", ((System::Object^)"(s,sp)=pro_rad1_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":779
 * pro_rad1_doc = "(s,sp)=pro_rad1(m,n,c,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * pro_rad1_cv_doc = "(s,sp)=pro_rad1_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * pro_rad2_doc = "(s,sp)=pro_rad2(m,n,c,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."             # <<<<<<<<<<<<<<
 * pro_rad2_cv_doc = "(s,sp)=pro_rad2_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * psi_doc = "y=psi(z) is the derivative of the logarithm of the gamma function\nevaluated at z (also called the digamma function)."
 */
  PythonOps::SetGlobal(__pyx_context, "pro_rad2_doc", ((System::Object^)"(s,sp)=pro_rad2(m,n,c,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":780
 * pro_rad1_cv_doc = "(s,sp)=pro_rad1_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the first kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * pro_rad2_doc = "(s,sp)=pro_rad2(m,n,c,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * pro_rad2_cv_doc = "(s,sp)=pro_rad2_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."             # <<<<<<<<<<<<<<
 * psi_doc = "y=psi(z) is the derivative of the logarithm of the gamma function\nevaluated at z (also called the digamma function)."
 * radian_doc = "y=radian(d,m,s) returns the angle given in (d)egrees, (m)inutes, and\n(s)econds in radians."
 */
  PythonOps::SetGlobal(__pyx_context, "pro_rad2_cv_doc", ((System::Object^)"(s,sp)=pro_rad2_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":781
 * pro_rad2_doc = "(s,sp)=pro_rad2(m,n,c,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0."
 * pro_rad2_cv_doc = "(s,sp)=pro_rad2_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * psi_doc = "y=psi(z) is the derivative of the logarithm of the gamma function\nevaluated at z (also called the digamma function)."             # <<<<<<<<<<<<<<
 * radian_doc = "y=radian(d,m,s) returns the angle given in (d)egrees, (m)inutes, and\n(s)econds in radians."
 * rgamma_doc = "y=rgamma(z) returns one divided by the gamma function of x."
 */
  PythonOps::SetGlobal(__pyx_context, "psi_doc", ((System::Object^)"y=psi(z) is the derivative of the logarithm of the gamma function\nevaluated at z (also called the digamma function)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":782
 * pro_rad2_cv_doc = "(s,sp)=pro_rad2_cv(m,n,c,cv,x) computes the prolate sheroidal radial function \nof the second kind and its derivative (with respect to x) for mode paramters\nm>=0 and n>=m, spheroidal parameter c and |x|<1.0. Requires pre-computed\ncharacteristic value."
 * psi_doc = "y=psi(z) is the derivative of the logarithm of the gamma function\nevaluated at z (also called the digamma function)."
 * radian_doc = "y=radian(d,m,s) returns the angle given in (d)egrees, (m)inutes, and\n(s)econds in radians."             # <<<<<<<<<<<<<<
 * rgamma_doc = "y=rgamma(z) returns one divided by the gamma function of x."
 * round_doc = "y=Returns the nearest integer to x as a double precision\nfloating point result.  If x ends in 0.5 exactly, the\nnearest even integer is chosen."
 */
  PythonOps::SetGlobal(__pyx_context, "radian_doc", ((System::Object^)"y=radian(d,m,s) returns the angle given in (d)egrees, (m)inutes, and\n(s)econds in radians."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":783
 * psi_doc = "y=psi(z) is the derivative of the logarithm of the gamma function\nevaluated at z (also called the digamma function)."
 * radian_doc = "y=radian(d,m,s) returns the angle given in (d)egrees, (m)inutes, and\n(s)econds in radians."
 * rgamma_doc = "y=rgamma(z) returns one divided by the gamma function of x."             # <<<<<<<<<<<<<<
 * round_doc = "y=Returns the nearest integer to x as a double precision\nfloating point result.  If x ends in 0.5 exactly, the\nnearest even integer is chosen."
 * shichi_doc = "(shi,chi)=shichi(x) returns the hyperbolic sine and cosine integrals:\nintegral(sinh(t)/t,t=0..x) and eul + ln x +\nintegral((cosh(t)-1)/t,t=0..x) where eul is Euler's Constant."
 */
  PythonOps::SetGlobal(__pyx_context, "rgamma_doc", ((System::Object^)"y=rgamma(z) returns one divided by the gamma function of x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":784
 * radian_doc = "y=radian(d,m,s) returns the angle given in (d)egrees, (m)inutes, and\n(s)econds in radians."
 * rgamma_doc = "y=rgamma(z) returns one divided by the gamma function of x."
 * round_doc = "y=Returns the nearest integer to x as a double precision\nfloating point result.  If x ends in 0.5 exactly, the\nnearest even integer is chosen."             # <<<<<<<<<<<<<<
 * shichi_doc = "(shi,chi)=shichi(x) returns the hyperbolic sine and cosine integrals:\nintegral(sinh(t)/t,t=0..x) and eul + ln x +\nintegral((cosh(t)-1)/t,t=0..x) where eul is Euler's Constant."
 * sici_doc = "(si,ci)=sici(x) returns in si the integral of the sinc function from 0 to x:\nintegral(sin(t)/t,t=0..x).  It returns in ci the cosine integral: eul + ln x +\nintegral((cos(t) - 1)/t,t=0..x)."
 */
  PythonOps::SetGlobal(__pyx_context, "round_doc", ((System::Object^)"y=Returns the nearest integer to x as a double precision\nfloating point result.  If x ends in 0.5 exactly, the\nnearest even integer is chosen."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":785
 * rgamma_doc = "y=rgamma(z) returns one divided by the gamma function of x."
 * round_doc = "y=Returns the nearest integer to x as a double precision\nfloating point result.  If x ends in 0.5 exactly, the\nnearest even integer is chosen."
 * shichi_doc = "(shi,chi)=shichi(x) returns the hyperbolic sine and cosine integrals:\nintegral(sinh(t)/t,t=0..x) and eul + ln x +\nintegral((cosh(t)-1)/t,t=0..x) where eul is Euler's Constant."             # <<<<<<<<<<<<<<
 * sici_doc = "(si,ci)=sici(x) returns in si the integral of the sinc function from 0 to x:\nintegral(sin(t)/t,t=0..x).  It returns in ci the cosine integral: eul + ln x +\nintegral((cos(t) - 1)/t,t=0..x)."
 * sindg_doc = "y=sindg(x) calculates the sine of the angle x given in degrees."
 */
  PythonOps::SetGlobal(__pyx_context, "shichi_doc", ((System::Object^)"(shi,chi)=shichi(x) returns the hyperbolic sine and cosine integrals:\nintegral(sinh(t)/t,t=0..x) and eul + ln x +\nintegral((cosh(t)-1)/t,t=0..x) where eul is Euler's Constant."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":786
 * round_doc = "y=Returns the nearest integer to x as a double precision\nfloating point result.  If x ends in 0.5 exactly, the\nnearest even integer is chosen."
 * shichi_doc = "(shi,chi)=shichi(x) returns the hyperbolic sine and cosine integrals:\nintegral(sinh(t)/t,t=0..x) and eul + ln x +\nintegral((cosh(t)-1)/t,t=0..x) where eul is Euler's Constant."
 * sici_doc = "(si,ci)=sici(x) returns in si the integral of the sinc function from 0 to x:\nintegral(sin(t)/t,t=0..x).  It returns in ci the cosine integral: eul + ln x +\nintegral((cos(t) - 1)/t,t=0..x)."             # <<<<<<<<<<<<<<
 * sindg_doc = "y=sindg(x) calculates the sine of the angle x given in degrees."
 * smirnov_doc = "y=smirnov(n,e) returns the exact Kolmogorov-Smirnov complementary \ncumulative distribution function (Dn+ or Dn-) for a one-sided test of \nequality between an empirical and a theoretical distribution. It is equal \nto the probability that the maximum difference between a theoretical \ndistribution and an empirical one based on n samples is greater than e."
 */
  PythonOps::SetGlobal(__pyx_context, "sici_doc", ((System::Object^)"(si,ci)=sici(x) returns in si the integral of the sinc function from 0 to x:\nintegral(sin(t)/t,t=0..x).  It returns in ci the cosine integral: eul + ln x +\nintegral((cos(t) - 1)/t,t=0..x)."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":787
 * shichi_doc = "(shi,chi)=shichi(x) returns the hyperbolic sine and cosine integrals:\nintegral(sinh(t)/t,t=0..x) and eul + ln x +\nintegral((cosh(t)-1)/t,t=0..x) where eul is Euler's Constant."
 * sici_doc = "(si,ci)=sici(x) returns in si the integral of the sinc function from 0 to x:\nintegral(sin(t)/t,t=0..x).  It returns in ci the cosine integral: eul + ln x +\nintegral((cos(t) - 1)/t,t=0..x)."
 * sindg_doc = "y=sindg(x) calculates the sine of the angle x given in degrees."             # <<<<<<<<<<<<<<
 * smirnov_doc = "y=smirnov(n,e) returns the exact Kolmogorov-Smirnov complementary \ncumulative distribution function (Dn+ or Dn-) for a one-sided test of \nequality between an empirical and a theoretical distribution. It is equal \nto the probability that the maximum difference between a theoretical \ndistribution and an empirical one based on n samples is greater than e."
 * smirnovi_doc = "e=smirnovi(n,y) returns e such that smirnov(n,e) = y."
 */
  PythonOps::SetGlobal(__pyx_context, "sindg_doc", ((System::Object^)"y=sindg(x) calculates the sine of the angle x given in degrees."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":788
 * sici_doc = "(si,ci)=sici(x) returns in si the integral of the sinc function from 0 to x:\nintegral(sin(t)/t,t=0..x).  It returns in ci the cosine integral: eul + ln x +\nintegral((cos(t) - 1)/t,t=0..x)."
 * sindg_doc = "y=sindg(x) calculates the sine of the angle x given in degrees."
 * smirnov_doc = "y=smirnov(n,e) returns the exact Kolmogorov-Smirnov complementary \ncumulative distribution function (Dn+ or Dn-) for a one-sided test of \nequality between an empirical and a theoretical distribution. It is equal \nto the probability that the maximum difference between a theoretical \ndistribution and an empirical one based on n samples is greater than e."             # <<<<<<<<<<<<<<
 * smirnovi_doc = "e=smirnovi(n,y) returns e such that smirnov(n,e) = y."
 * spence_doc = "y=spence(x) returns the dilogarithm integral: -integral(log t /\n(t-1),t=1..x)"
 */
  PythonOps::SetGlobal(__pyx_context, "smirnov_doc", ((System::Object^)"y=smirnov(n,e) returns the exact Kolmogorov-Smirnov complementary \ncumulative distribution function (Dn+ or Dn-) for a one-sided test of \nequality between an empirical and a theoretical distribution. It is equal \nto the probability that the maximum difference between a theoretical \ndistribution and an empirical one based on n samples is greater than e."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":789
 * sindg_doc = "y=sindg(x) calculates the sine of the angle x given in degrees."
 * smirnov_doc = "y=smirnov(n,e) returns the exact Kolmogorov-Smirnov complementary \ncumulative distribution function (Dn+ or Dn-) for a one-sided test of \nequality between an empirical and a theoretical distribution. It is equal \nto the probability that the maximum difference between a theoretical \ndistribution and an empirical one based on n samples is greater than e."
 * smirnovi_doc = "e=smirnovi(n,y) returns e such that smirnov(n,e) = y."             # <<<<<<<<<<<<<<
 * spence_doc = "y=spence(x) returns the dilogarithm integral: -integral(log t /\n(t-1),t=1..x)"
 * stdtr_doc = "p=stdtr(df,t) returns the integral from minus infinity to t of the Student t\ndistribution with df > 0 degrees of freedom:\ngamma((df+1)/2)/(sqrt(df*pi)*gamma(df/2)) * integral((1+x**2/df)**(-df/2-1/2),\nx=-inf..t)"
 */
  PythonOps::SetGlobal(__pyx_context, "smirnovi_doc", ((System::Object^)"e=smirnovi(n,y) returns e such that smirnov(n,e) = y."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":790
 * smirnov_doc = "y=smirnov(n,e) returns the exact Kolmogorov-Smirnov complementary \ncumulative distribution function (Dn+ or Dn-) for a one-sided test of \nequality between an empirical and a theoretical distribution. It is equal \nto the probability that the maximum difference between a theoretical \ndistribution and an empirical one based on n samples is greater than e."
 * smirnovi_doc = "e=smirnovi(n,y) returns e such that smirnov(n,e) = y."
 * spence_doc = "y=spence(x) returns the dilogarithm integral: -integral(log t /\n(t-1),t=1..x)"             # <<<<<<<<<<<<<<
 * stdtr_doc = "p=stdtr(df,t) returns the integral from minus infinity to t of the Student t\ndistribution with df > 0 degrees of freedom:\ngamma((df+1)/2)/(sqrt(df*pi)*gamma(df/2)) * integral((1+x**2/df)**(-df/2-1/2),\nx=-inf..t)"
 * stdtridf_doc = "t=stdtridf(p,t) returns the argument df such that stdtr(df,t) is equal to p."
 */
  PythonOps::SetGlobal(__pyx_context, "spence_doc", ((System::Object^)"y=spence(x) returns the dilogarithm integral: -integral(log t /\n(t-1),t=1..x)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":791
 * smirnovi_doc = "e=smirnovi(n,y) returns e such that smirnov(n,e) = y."
 * spence_doc = "y=spence(x) returns the dilogarithm integral: -integral(log t /\n(t-1),t=1..x)"
 * stdtr_doc = "p=stdtr(df,t) returns the integral from minus infinity to t of the Student t\ndistribution with df > 0 degrees of freedom:\ngamma((df+1)/2)/(sqrt(df*pi)*gamma(df/2)) * integral((1+x**2/df)**(-df/2-1/2),\nx=-inf..t)"             # <<<<<<<<<<<<<<
 * stdtridf_doc = "t=stdtridf(p,t) returns the argument df such that stdtr(df,t) is equal to p."
 * stdtrit_doc = "t=stdtrit(df,p) returns the argument t such that stdtr(df,t) is equal to p."
 */
  PythonOps::SetGlobal(__pyx_context, "stdtr_doc", ((System::Object^)"p=stdtr(df,t) returns the integral from minus infinity to t of the Student t\ndistribution with df > 0 degrees of freedom:\ngamma((df+1)/2)/(sqrt(df*pi)*gamma(df/2)) * integral((1+x**2/df)**(-df/2-1/2),\nx=-inf..t)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":792
 * spence_doc = "y=spence(x) returns the dilogarithm integral: -integral(log t /\n(t-1),t=1..x)"
 * stdtr_doc = "p=stdtr(df,t) returns the integral from minus infinity to t of the Student t\ndistribution with df > 0 degrees of freedom:\ngamma((df+1)/2)/(sqrt(df*pi)*gamma(df/2)) * integral((1+x**2/df)**(-df/2-1/2),\nx=-inf..t)"
 * stdtridf_doc = "t=stdtridf(p,t) returns the argument df such that stdtr(df,t) is equal to p."             # <<<<<<<<<<<<<<
 * stdtrit_doc = "t=stdtrit(df,p) returns the argument t such that stdtr(df,t) is equal to p."
 * struve_doc = "y=struve(v,x) returns the Struve function Hv(x) of order v at x, x\nmust be positive unless v is an integer."
 */
  PythonOps::SetGlobal(__pyx_context, "stdtridf_doc", ((System::Object^)"t=stdtridf(p,t) returns the argument df such that stdtr(df,t) is equal to p."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":793
 * stdtr_doc = "p=stdtr(df,t) returns the integral from minus infinity to t of the Student t\ndistribution with df > 0 degrees of freedom:\ngamma((df+1)/2)/(sqrt(df*pi)*gamma(df/2)) * integral((1+x**2/df)**(-df/2-1/2),\nx=-inf..t)"
 * stdtridf_doc = "t=stdtridf(p,t) returns the argument df such that stdtr(df,t) is equal to p."
 * stdtrit_doc = "t=stdtrit(df,p) returns the argument t such that stdtr(df,t) is equal to p."             # <<<<<<<<<<<<<<
 * struve_doc = "y=struve(v,x) returns the Struve function Hv(x) of order v at x, x\nmust be positive unless v is an integer."
 * tandg_doc = "y=tandg(x) calculates the tangent of the angle x given in degrees."
 */
  PythonOps::SetGlobal(__pyx_context, "stdtrit_doc", ((System::Object^)"t=stdtrit(df,p) returns the argument t such that stdtr(df,t) is equal to p."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":794
 * stdtridf_doc = "t=stdtridf(p,t) returns the argument df such that stdtr(df,t) is equal to p."
 * stdtrit_doc = "t=stdtrit(df,p) returns the argument t such that stdtr(df,t) is equal to p."
 * struve_doc = "y=struve(v,x) returns the Struve function Hv(x) of order v at x, x\nmust be positive unless v is an integer."             # <<<<<<<<<<<<<<
 * tandg_doc = "y=tandg(x) calculates the tangent of the angle x given in degrees."
 * wofz_doc = "y=wofz(z) returns the value of the fadeeva function for complex argument\nz: exp(-z**2)*erfc(-i*z)"
 */
  PythonOps::SetGlobal(__pyx_context, "struve_doc", ((System::Object^)"y=struve(v,x) returns the Struve function Hv(x) of order v at x, x\nmust be positive unless v is an integer."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":795
 * stdtrit_doc = "t=stdtrit(df,p) returns the argument t such that stdtr(df,t) is equal to p."
 * struve_doc = "y=struve(v,x) returns the Struve function Hv(x) of order v at x, x\nmust be positive unless v is an integer."
 * tandg_doc = "y=tandg(x) calculates the tangent of the angle x given in degrees."             # <<<<<<<<<<<<<<
 * wofz_doc = "y=wofz(z) returns the value of the fadeeva function for complex argument\nz: exp(-z**2)*erfc(-i*z)"
 * y0_doc = "y=y0(x) returns the Bessel function of the second kind of order 0 at x."
 */
  PythonOps::SetGlobal(__pyx_context, "tandg_doc", ((System::Object^)"y=tandg(x) calculates the tangent of the angle x given in degrees."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":796
 * struve_doc = "y=struve(v,x) returns the Struve function Hv(x) of order v at x, x\nmust be positive unless v is an integer."
 * tandg_doc = "y=tandg(x) calculates the tangent of the angle x given in degrees."
 * wofz_doc = "y=wofz(z) returns the value of the fadeeva function for complex argument\nz: exp(-z**2)*erfc(-i*z)"             # <<<<<<<<<<<<<<
 * y0_doc = "y=y0(x) returns the Bessel function of the second kind of order 0 at x."
 * y1_doc = "y=y1(x) returns the Bessel function of the second kind of order 1 at x."
 */
  PythonOps::SetGlobal(__pyx_context, "wofz_doc", ((System::Object^)"y=wofz(z) returns the value of the fadeeva function for complex argument\nz: exp(-z**2)*erfc(-i*z)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":797
 * tandg_doc = "y=tandg(x) calculates the tangent of the angle x given in degrees."
 * wofz_doc = "y=wofz(z) returns the value of the fadeeva function for complex argument\nz: exp(-z**2)*erfc(-i*z)"
 * y0_doc = "y=y0(x) returns the Bessel function of the second kind of order 0 at x."             # <<<<<<<<<<<<<<
 * y1_doc = "y=y1(x) returns the Bessel function of the second kind of order 1 at x."
 * yn_doc = "y=yn(n,x) returns the Bessel function of the second kind of integer\norder n at x."
 */
  PythonOps::SetGlobal(__pyx_context, "y0_doc", ((System::Object^)"y=y0(x) returns the Bessel function of the second kind of order 0 at x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":798
 * wofz_doc = "y=wofz(z) returns the value of the fadeeva function for complex argument\nz: exp(-z**2)*erfc(-i*z)"
 * y0_doc = "y=y0(x) returns the Bessel function of the second kind of order 0 at x."
 * y1_doc = "y=y1(x) returns the Bessel function of the second kind of order 1 at x."             # <<<<<<<<<<<<<<
 * yn_doc = "y=yn(n,x) returns the Bessel function of the second kind of integer\norder n at x."
 * yv_doc = "y=yv(v,z) returns the Bessel function of the second kind of real\norder v at complex z."
 */
  PythonOps::SetGlobal(__pyx_context, "y1_doc", ((System::Object^)"y=y1(x) returns the Bessel function of the second kind of order 1 at x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":799
 * y0_doc = "y=y0(x) returns the Bessel function of the second kind of order 0 at x."
 * y1_doc = "y=y1(x) returns the Bessel function of the second kind of order 1 at x."
 * yn_doc = "y=yn(n,x) returns the Bessel function of the second kind of integer\norder n at x."             # <<<<<<<<<<<<<<
 * yv_doc = "y=yv(v,z) returns the Bessel function of the second kind of real\norder v at complex z."
 * yve_doc = "y=yve(v,z) returns the exponentially scaled Bessel function of the second \nkind of real order v at complex z: yve(v,z) = yv(v,z) * exp(-abs(z.imag))"
 */
  PythonOps::SetGlobal(__pyx_context, "yn_doc", ((System::Object^)"y=yn(n,x) returns the Bessel function of the second kind of integer\norder n at x."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":800
 * y1_doc = "y=y1(x) returns the Bessel function of the second kind of order 1 at x."
 * yn_doc = "y=yn(n,x) returns the Bessel function of the second kind of integer\norder n at x."
 * yv_doc = "y=yv(v,z) returns the Bessel function of the second kind of real\norder v at complex z."             # <<<<<<<<<<<<<<
 * yve_doc = "y=yve(v,z) returns the exponentially scaled Bessel function of the second \nkind of real order v at complex z: yve(v,z) = yv(v,z) * exp(-abs(z.imag))"
 * zeta_doc = "y=zeta(x,q) returns the Riemann zeta function of two arguments:\nsum((k+q)**(-x),k=0..inf)"
 */
  PythonOps::SetGlobal(__pyx_context, "yv_doc", ((System::Object^)"y=yv(v,z) returns the Bessel function of the second kind of real\norder v at complex z."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":801
 * yn_doc = "y=yn(n,x) returns the Bessel function of the second kind of integer\norder n at x."
 * yv_doc = "y=yv(v,z) returns the Bessel function of the second kind of real\norder v at complex z."
 * yve_doc = "y=yve(v,z) returns the exponentially scaled Bessel function of the second \nkind of real order v at complex z: yve(v,z) = yv(v,z) * exp(-abs(z.imag))"             # <<<<<<<<<<<<<<
 * zeta_doc = "y=zeta(x,q) returns the Riemann zeta function of two arguments:\nsum((k+q)**(-x),k=0..inf)"
 * zetac_doc = "y=zetac(x) returns 1.0 - the Riemann zeta function: sum(k**(-x), k=2..inf)"
 */
  PythonOps::SetGlobal(__pyx_context, "yve_doc", ((System::Object^)"y=yve(v,z) returns the exponentially scaled Bessel function of the second \nkind of real order v at complex z: yve(v,z) = yv(v,z) * exp(-abs(z.imag))"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":802
 * yv_doc = "y=yv(v,z) returns the Bessel function of the second kind of real\norder v at complex z."
 * yve_doc = "y=yve(v,z) returns the exponentially scaled Bessel function of the second \nkind of real order v at complex z: yve(v,z) = yv(v,z) * exp(-abs(z.imag))"
 * zeta_doc = "y=zeta(x,q) returns the Riemann zeta function of two arguments:\nsum((k+q)**(-x),k=0..inf)"             # <<<<<<<<<<<<<<
 * zetac_doc = "y=zetac(x) returns 1.0 - the Riemann zeta function: sum(k**(-x), k=2..inf)"
 * 
 */
  PythonOps::SetGlobal(__pyx_context, "zeta_doc", ((System::Object^)"y=zeta(x,q) returns the Riemann zeta function of two arguments:\nsum((k+q)**(-x),k=0..inf)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":803
 * yve_doc = "y=yve(v,z) returns the exponentially scaled Bessel function of the second \nkind of real order v at complex z: yve(v,z) = yv(v,z) * exp(-abs(z.imag))"
 * zeta_doc = "y=zeta(x,q) returns the Riemann zeta function of two arguments:\nsum((k+q)**(-x),k=0..inf)"
 * zetac_doc = "y=zetac(x) returns 1.0 - the Riemann zeta function: sum(k**(-x), k=2..inf)"             # <<<<<<<<<<<<<<
 * 
 * gammaincinv_doc = """gammaincinv(a, y) returns x such that gammainc(a, x) = y."""
 */
  PythonOps::SetGlobal(__pyx_context, "zetac_doc", ((System::Object^)"y=zetac(x) returns 1.0 - the Riemann zeta function: sum(k**(-x), k=2..inf)"));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":805
 * zetac_doc = "y=zetac(x) returns 1.0 - the Riemann zeta function: sum(k**(-x), k=2..inf)"
 * 
 * gammaincinv_doc = """gammaincinv(a, y) returns x such that gammainc(a, x) = y."""             # <<<<<<<<<<<<<<
 * 
 * bdtrc = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrc", bdtrc_doc, 0)
 */
  PythonOps::SetGlobal(__pyx_context, "gammaincinv_doc", ((System::Object^)"gammaincinv(a, y) returns x such that gammainc(a, x) = y."));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":807
 * gammaincinv_doc = """gammaincinv(a, y) returns x such that gammainc(a, x) = y."""
 * 
 * bdtrc = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrc", bdtrc_doc, 0)             # <<<<<<<<<<<<<<
 * bdtr = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtr", bdtr_doc, 0)
 * bdtri = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtri", bdtri_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_22 = __site_cvt_int_807_104->Target(__site_cvt_int_807_104, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "bdtrc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_23 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3a_functions, __pyx_v_5scipy_7special_7_cephes_bdtrc_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_22, __pyx_k__bdtrc, __pyx_t_23, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "bdtrc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":808
 * 
 * bdtrc = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrc", bdtrc_doc, 0)
 * bdtr = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtr", bdtr_doc, 0)             # <<<<<<<<<<<<<<
 * bdtri = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtri", bdtri_doc, 0)
 * btdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, btdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtr", btdtr_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_25 = __site_cvt_int_808_102->Target(__site_cvt_int_808_102, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "bdtr_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_26 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3a_functions, __pyx_v_5scipy_7special_7_cephes_bdtr_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_25, __pyx_k__bdtr, __pyx_t_26, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "bdtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":809
 * bdtrc = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrc", bdtrc_doc, 0)
 * bdtr = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtr", bdtr_doc, 0)
 * bdtri = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtri", bdtri_doc, 0)             # <<<<<<<<<<<<<<
 * btdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, btdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtr", btdtr_doc, 0)
 * btdtri = np.PyUFunc_FromFuncAndData(cephes3_functions, btdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtri", btdtri_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_27 = __site_cvt_int_809_104->Target(__site_cvt_int_809_104, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "bdtri_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_28 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3a_functions, __pyx_v_5scipy_7special_7_cephes_bdtri_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_27, __pyx_k__bdtri, __pyx_t_28, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "bdtri", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":810
 * bdtr = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtr", bdtr_doc, 0)
 * bdtri = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtri", bdtri_doc, 0)
 * btdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, btdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtr", btdtr_doc, 0)             # <<<<<<<<<<<<<<
 * btdtri = np.PyUFunc_FromFuncAndData(cephes3_functions, btdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtri", btdtri_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_29 = __site_cvt_int_810_103->Target(__site_cvt_int_810_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "btdtr_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_30 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_btdtr_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_29, __pyx_k__btdtr, __pyx_t_30, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "btdtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":811
 * bdtri = np.PyUFunc_FromFuncAndData(cephes3a_functions, bdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtri", bdtri_doc, 0)
 * btdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, btdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtr", btdtr_doc, 0)
 * btdtri = np.PyUFunc_FromFuncAndData(cephes3_functions, btdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtri", btdtri_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * fdtrc = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtrc", fdtrc_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_31 = __site_cvt_int_811_105->Target(__site_cvt_int_811_105, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "btdtri_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_32 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_btdtri_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_31, __pyx_k__btdtri, __pyx_t_32, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "btdtri", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":813
 * btdtri = np.PyUFunc_FromFuncAndData(cephes3_functions, btdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtri", btdtri_doc, 0)
 * 
 * fdtrc = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtrc", fdtrc_doc, 0)             # <<<<<<<<<<<<<<
 * fdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtr", fdtr_doc, 0)
 * fdtri = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtri", fdtri_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_33 = __site_cvt_int_813_103->Target(__site_cvt_int_813_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "fdtrc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_34 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_fdtrc_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_33, __pyx_k__fdtrc, __pyx_t_34, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "fdtrc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":814
 * 
 * fdtrc = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtrc", fdtrc_doc, 0)
 * fdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtr", fdtr_doc, 0)             # <<<<<<<<<<<<<<
 * fdtri = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtri", fdtri_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_35 = __site_cvt_int_814_101->Target(__site_cvt_int_814_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "fdtr_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_36 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_fdtr_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_35, __pyx_k__fdtr, __pyx_t_36, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "fdtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":815
 * fdtrc = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtrc", fdtrc_doc, 0)
 * fdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtr", fdtr_doc, 0)
 * fdtri = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtri", fdtri_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * gdtrc = np.PyUFunc_FromFuncAndData(cephes3_functions, gdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrc", gdtrc_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_37 = __site_cvt_int_815_103->Target(__site_cvt_int_815_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "fdtri_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_38 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_fdtri_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_37, __pyx_k__fdtri, __pyx_t_38, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "fdtri", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":817
 * fdtri = np.PyUFunc_FromFuncAndData(cephes3_functions, fdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtri", fdtri_doc, 0)
 * 
 * gdtrc = np.PyUFunc_FromFuncAndData(cephes3_functions, gdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrc", gdtrc_doc, 0)             # <<<<<<<<<<<<<<
 * gdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, gdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtr", gdtr_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_39 = __site_cvt_int_817_103->Target(__site_cvt_int_817_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "gdtrc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_40 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_gdtrc_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_39, __pyx_k__gdtrc, __pyx_t_40, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "gdtrc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":818
 * 
 * gdtrc = np.PyUFunc_FromFuncAndData(cephes3_functions, gdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrc", gdtrc_doc, 0)
 * gdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, gdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtr", gdtr_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * hyp2f1 = np.PyUFunc_FromFuncAndData(cephes4_functions, hyp2f1_data, cephes_5c2_types, 4, 4, 1, PyUFunc_None, "hyp2f1", hyp2f1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_41 = __site_cvt_int_818_101->Target(__site_cvt_int_818_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "gdtr_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_42 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_gdtr_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_41, __pyx_k__gdtr, __pyx_t_42, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "gdtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":820
 * gdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, gdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtr", gdtr_doc, 0)
 * 
 * hyp2f1 = np.PyUFunc_FromFuncAndData(cephes4_functions, hyp2f1_data, cephes_5c2_types, 4, 4, 1, PyUFunc_None, "hyp2f1", hyp2f1_doc, 0)             # <<<<<<<<<<<<<<
 * hyp1f1 = np.PyUFunc_FromFuncAndData(cephes3_functions, hyp1f1_data, cephes_4c_types, 4, 3, 1, PyUFunc_None, "hyp1f1", hyp1f1_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_43 = __site_cvt_int_820_107->Target(__site_cvt_int_820_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "hyp2f1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_44 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_functions, __pyx_v_5scipy_7special_7_cephes_hyp2f1_data, __pyx_v_5scipy_7special_7_cephes_cephes_5c2_types, 4, 4, 1, __pyx_t_43, __pyx_k__hyp2f1, __pyx_t_44, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "hyp2f1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":821
 * 
 * hyp2f1 = np.PyUFunc_FromFuncAndData(cephes4_functions, hyp2f1_data, cephes_5c2_types, 4, 4, 1, PyUFunc_None, "hyp2f1", hyp2f1_doc, 0)
 * hyp1f1 = np.PyUFunc_FromFuncAndData(cephes3_functions, hyp1f1_data, cephes_4c_types, 4, 3, 1, PyUFunc_None, "hyp1f1", hyp1f1_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * hyperu = np.PyUFunc_FromFuncAndData(cephes3_functions, hypU_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "hyperu", hyperu_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_45 = __site_cvt_int_821_106->Target(__site_cvt_int_821_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "hyp1f1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_46 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_hyp1f1_data, __pyx_v_5scipy_7special_7_cephes_cephes_4c_types, 4, 3, 1, __pyx_t_45, __pyx_k__hyp1f1, __pyx_t_46, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "hyp1f1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":823
 * hyp1f1 = np.PyUFunc_FromFuncAndData(cephes3_functions, hyp1f1_data, cephes_4c_types, 4, 3, 1, PyUFunc_None, "hyp1f1", hyp1f1_doc, 0)
 * 
 * hyperu = np.PyUFunc_FromFuncAndData(cephes3_functions, hypU_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "hyperu", hyperu_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * hyp2f0 = np.PyUFunc_FromFuncAndData(cephes4a_2_functions, hyp2f0_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp2f0", hyp2f0_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_47 = __site_cvt_int_823_103->Target(__site_cvt_int_823_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "hyperu_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_48 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_hypU_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_47, __pyx_k__hyperu, __pyx_t_48, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "hyperu", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":825
 * hyperu = np.PyUFunc_FromFuncAndData(cephes3_functions, hypU_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "hyperu", hyperu_doc, 0)
 * 
 * hyp2f0 = np.PyUFunc_FromFuncAndData(cephes4a_2_functions, hyp2f0_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp2f0", hyp2f0_doc, 0)             # <<<<<<<<<<<<<<
 * hyp1f2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, onef2_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp1f2", hyp1f2_doc, 0)
 * hyp3f0 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, threef0_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp3f0", hyp3f0_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_49 = __site_cvt_int_825_108->Target(__site_cvt_int_825_108, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "hyp2f0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_50 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4a_2_functions, __pyx_v_5scipy_7special_7_cephes_hyp2f0_data, __pyx_v_5scipy_7special_7_cephes_cephes_6_types, 2, 4, 2, __pyx_t_49, __pyx_k__hyp2f0, __pyx_t_50, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "hyp2f0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":826
 * 
 * hyp2f0 = np.PyUFunc_FromFuncAndData(cephes4a_2_functions, hyp2f0_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp2f0", hyp2f0_doc, 0)
 * hyp1f2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, onef2_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp1f2", hyp1f2_doc, 0)             # <<<<<<<<<<<<<<
 * hyp3f0 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, threef0_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp3f0", hyp3f0_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_51 = __site_cvt_int_826_106->Target(__site_cvt_int_826_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "hyp1f2_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_52 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_2_functions, __pyx_v_5scipy_7special_7_cephes_onef2_data, __pyx_v_5scipy_7special_7_cephes_cephes_6_types, 2, 4, 2, __pyx_t_51, __pyx_k__hyp1f2, __pyx_t_52, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "hyp1f2", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":827
 * hyp2f0 = np.PyUFunc_FromFuncAndData(cephes4a_2_functions, hyp2f0_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp2f0", hyp2f0_doc, 0)
 * hyp1f2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, onef2_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp1f2", hyp1f2_doc, 0)
 * hyp3f0 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, threef0_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp3f0", hyp3f0_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * betainc = np.PyUFunc_FromFuncAndData(cephes3_functions, incbet_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "betainc", betainc_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_53 = __site_cvt_int_827_108->Target(__site_cvt_int_827_108, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "hyp3f0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_54 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_2_functions, __pyx_v_5scipy_7special_7_cephes_threef0_data, __pyx_v_5scipy_7special_7_cephes_cephes_6_types, 2, 4, 2, __pyx_t_53, __pyx_k__hyp3f0, __pyx_t_54, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "hyp3f0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":829
 * hyp3f0 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, threef0_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "hyp3f0", hyp3f0_doc, 0)
 * 
 * betainc = np.PyUFunc_FromFuncAndData(cephes3_functions, incbet_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "betainc", betainc_doc, 0)             # <<<<<<<<<<<<<<
 * betaincinv = np.PyUFunc_FromFuncAndData(cephes3_functions, incbi_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "betaincinv", betaincinv_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_55 = __site_cvt_int_829_106->Target(__site_cvt_int_829_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "betainc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_56 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_incbet_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_55, __pyx_k__betainc, __pyx_t_56, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "betainc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":830
 * 
 * betainc = np.PyUFunc_FromFuncAndData(cephes3_functions, incbet_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "betainc", betainc_doc, 0)
 * betaincinv = np.PyUFunc_FromFuncAndData(cephes3_functions, incbi_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "betaincinv", betaincinv_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * nbdtrc = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrc", nbdtrc_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_57 = __site_cvt_int_830_108->Target(__site_cvt_int_830_108, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "betaincinv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_58 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_incbi_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_57, __pyx_k__betaincinv, __pyx_t_58, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "betaincinv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":832
 * betaincinv = np.PyUFunc_FromFuncAndData(cephes3_functions, incbi_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "betaincinv", betaincinv_doc, 0)
 * 
 * nbdtrc = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrc", nbdtrc_doc, 0)             # <<<<<<<<<<<<<<
 * nbdtr = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtr", nbdtr_doc, 0)
 * nbdtri = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtri", nbdtri_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_59 = __site_cvt_int_832_106->Target(__site_cvt_int_832_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "nbdtrc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_60 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3a_functions, __pyx_v_5scipy_7special_7_cephes_nbdtrc_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_59, __pyx_k__nbdtrc, __pyx_t_60, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "nbdtrc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":833
 * 
 * nbdtrc = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrc", nbdtrc_doc, 0)
 * nbdtr = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtr", nbdtr_doc, 0)             # <<<<<<<<<<<<<<
 * nbdtri = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtri", nbdtri_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_61 = __site_cvt_int_833_104->Target(__site_cvt_int_833_104, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "nbdtr_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_62 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3a_functions, __pyx_v_5scipy_7special_7_cephes_nbdtr_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_61, __pyx_k__nbdtr, __pyx_t_62, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "nbdtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":834
 * nbdtrc = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtrc_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrc", nbdtrc_doc, 0)
 * nbdtr = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtr_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtr", nbdtr_doc, 0)
 * nbdtri = np.PyUFunc_FromFuncAndData(cephes3a_functions, nbdtri_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtri", nbdtri_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_63 = __site_cvt_int_834_106->Target(__site_cvt_int_834_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "nbdtri_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_64 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3a_functions, __pyx_v_5scipy_7special_7_cephes_nbdtri_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_63, __pyx_k__nbdtri, __pyx_t_64, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "nbdtri", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":837
 * 
 * 
 * beta = np.PyUFunc_FromFuncAndData(cephes2_functions, beta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "beta", beta_doc, 0)             # <<<<<<<<<<<<<<
 * betaln = np.PyUFunc_FromFuncAndData(cephes2_functions, lbeta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "betaln", betaln_doc, 0)
 * cbrt = np.PyUFunc_FromFuncAndData(cephes1_functions, cbrt_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cbrt", cbrt_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_65 = __site_cvt_int_837_101->Target(__site_cvt_int_837_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "beta_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_66 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_beta_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_65, __pyx_k__beta, __pyx_t_66, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "beta", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":838
 * 
 * beta = np.PyUFunc_FromFuncAndData(cephes2_functions, beta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "beta", beta_doc, 0)
 * betaln = np.PyUFunc_FromFuncAndData(cephes2_functions, lbeta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "betaln", betaln_doc, 0)             # <<<<<<<<<<<<<<
 * cbrt = np.PyUFunc_FromFuncAndData(cephes1_functions, cbrt_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cbrt", cbrt_doc, 0)
 * chdtrc = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtrc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtrc", chdtrc_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_67 = __site_cvt_int_838_104->Target(__site_cvt_int_838_104, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "betaln_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_68 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_lbeta_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_67, __pyx_k__betaln, __pyx_t_68, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "betaln", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":839
 * beta = np.PyUFunc_FromFuncAndData(cephes2_functions, beta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "beta", beta_doc, 0)
 * betaln = np.PyUFunc_FromFuncAndData(cephes2_functions, lbeta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "betaln", betaln_doc, 0)
 * cbrt = np.PyUFunc_FromFuncAndData(cephes1_functions, cbrt_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cbrt", cbrt_doc, 0)             # <<<<<<<<<<<<<<
 * chdtrc = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtrc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtrc", chdtrc_doc, 0)
 * chdtr = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtr", chdtr_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_69 = __site_cvt_int_839_101->Target(__site_cvt_int_839_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "cbrt_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_70 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_cbrt_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_69, __pyx_k__cbrt, __pyx_t_70, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "cbrt", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":840
 * betaln = np.PyUFunc_FromFuncAndData(cephes2_functions, lbeta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "betaln", betaln_doc, 0)
 * cbrt = np.PyUFunc_FromFuncAndData(cephes1_functions, cbrt_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cbrt", cbrt_doc, 0)
 * chdtrc = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtrc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtrc", chdtrc_doc, 0)             # <<<<<<<<<<<<<<
 * chdtr = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtr", chdtr_doc, 0)
 * chdtri = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtri", chdtri_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_71 = __site_cvt_int_840_105->Target(__site_cvt_int_840_105, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "chdtrc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_72 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_chdtrc_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_71, __pyx_k__chdtrc, __pyx_t_72, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "chdtrc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":841
 * cbrt = np.PyUFunc_FromFuncAndData(cephes1_functions, cbrt_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cbrt", cbrt_doc, 0)
 * chdtrc = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtrc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtrc", chdtrc_doc, 0)
 * chdtr = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtr", chdtr_doc, 0)             # <<<<<<<<<<<<<<
 * chdtri = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtri", chdtri_doc, 0)
 * dawsn = np.PyUFunc_FromFuncAndData(cephes1_functions, dawsn_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "dawsn", dawsn_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_73 = __site_cvt_int_841_103->Target(__site_cvt_int_841_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "chdtr_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_74 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_chdtr_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_73, __pyx_k__chdtr, __pyx_t_74, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "chdtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":842
 * chdtrc = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtrc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtrc", chdtrc_doc, 0)
 * chdtr = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtr", chdtr_doc, 0)
 * chdtri = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtri", chdtri_doc, 0)             # <<<<<<<<<<<<<<
 * dawsn = np.PyUFunc_FromFuncAndData(cephes1_functions, dawsn_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "dawsn", dawsn_doc, 0)
 * ellipeinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellie_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipeinc", ellipeinc_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_75 = __site_cvt_int_842_105->Target(__site_cvt_int_842_105, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "chdtri_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_76 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_chdtri_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_75, __pyx_k__chdtri, __pyx_t_76, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "chdtri", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":843
 * chdtr = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtr", chdtr_doc, 0)
 * chdtri = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtri", chdtri_doc, 0)
 * dawsn = np.PyUFunc_FromFuncAndData(cephes1_functions, dawsn_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "dawsn", dawsn_doc, 0)             # <<<<<<<<<<<<<<
 * ellipeinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellie_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipeinc", ellipeinc_doc, 0)
 * ellipkinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellik_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipkinc", ellipkinc_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_77 = __site_cvt_int_843_103->Target(__site_cvt_int_843_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "dawsn_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_78 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_dawsn_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_77, __pyx_k__dawsn, __pyx_t_78, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "dawsn", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":844
 * chdtri = np.PyUFunc_FromFuncAndData(cephes2_functions, chdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtri", chdtri_doc, 0)
 * dawsn = np.PyUFunc_FromFuncAndData(cephes1_functions, dawsn_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "dawsn", dawsn_doc, 0)
 * ellipeinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellie_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipeinc", ellipeinc_doc, 0)             # <<<<<<<<<<<<<<
 * ellipkinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellik_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipkinc", ellipkinc_doc, 0)
 * ellipe = np.PyUFunc_FromFuncAndData(cephes1_functions, ellpe_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ellipe", ellipe_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_79 = __site_cvt_int_844_107->Target(__site_cvt_int_844_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "ellipeinc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_80 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_ellie_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_79, __pyx_k__ellipeinc, __pyx_t_80, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "ellipeinc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":845
 * dawsn = np.PyUFunc_FromFuncAndData(cephes1_functions, dawsn_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "dawsn", dawsn_doc, 0)
 * ellipeinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellie_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipeinc", ellipeinc_doc, 0)
 * ellipkinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellik_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipkinc", ellipkinc_doc, 0)             # <<<<<<<<<<<<<<
 * ellipe = np.PyUFunc_FromFuncAndData(cephes1_functions, ellpe_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ellipe", ellipe_doc, 0)
 * ellipk = np.PyUFunc_FromFuncAndData(cephes1_functions, ellpk_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ellipk", ellipk_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_81 = __site_cvt_int_845_107->Target(__site_cvt_int_845_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "ellipkinc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_82 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_ellik_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_81, __pyx_k__ellipkinc, __pyx_t_82, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "ellipkinc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":846
 * ellipeinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellie_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipeinc", ellipeinc_doc, 0)
 * ellipkinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellik_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipkinc", ellipkinc_doc, 0)
 * ellipe = np.PyUFunc_FromFuncAndData(cephes1_functions, ellpe_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ellipe", ellipe_doc, 0)             # <<<<<<<<<<<<<<
 * ellipk = np.PyUFunc_FromFuncAndData(cephes1_functions, ellpk_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ellipk", ellipk_doc, 0)
 * exp10 = np.PyUFunc_FromFuncAndData(cephes1_functions, exp10_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "exp10", exp10_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_83 = __site_cvt_int_846_104->Target(__site_cvt_int_846_104, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "ellipe_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_84 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_ellpe_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_83, __pyx_k__ellipe, __pyx_t_84, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "ellipe", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":847
 * ellipkinc = np.PyUFunc_FromFuncAndData(cephes2_functions, ellik_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "ellipkinc", ellipkinc_doc, 0)
 * ellipe = np.PyUFunc_FromFuncAndData(cephes1_functions, ellpe_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ellipe", ellipe_doc, 0)
 * ellipk = np.PyUFunc_FromFuncAndData(cephes1_functions, ellpk_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ellipk", ellipk_doc, 0)             # <<<<<<<<<<<<<<
 * exp10 = np.PyUFunc_FromFuncAndData(cephes1_functions, exp10_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "exp10", exp10_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_85 = __site_cvt_int_847_104->Target(__site_cvt_int_847_104, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "ellipk_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_86 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_ellpk_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_85, __pyx_k__ellipk, __pyx_t_86, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "ellipk", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":848
 * ellipe = np.PyUFunc_FromFuncAndData(cephes1_functions, ellpe_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ellipe", ellipe_doc, 0)
 * ellipk = np.PyUFunc_FromFuncAndData(cephes1_functions, ellpk_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ellipk", ellipk_doc, 0)
 * exp10 = np.PyUFunc_FromFuncAndData(cephes1_functions, exp10_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "exp10", exp10_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * exp2 = np.PyUFunc_FromFuncAndData(cephes1_functions, exp2_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "exp2", exp2_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_87 = __site_cvt_int_848_103->Target(__site_cvt_int_848_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "exp10_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_88 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_exp10_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_87, __pyx_k__exp10, __pyx_t_88, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "exp10", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":850
 * exp10 = np.PyUFunc_FromFuncAndData(cephes1_functions, exp10_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "exp10", exp10_doc, 0)
 * 
 * exp2 = np.PyUFunc_FromFuncAndData(cephes1_functions, exp2_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "exp2", exp2_doc, 0)             # <<<<<<<<<<<<<<
 * gamma = np.PyUFunc_FromFuncAndData(cephes1rc_functions, Gamma_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "gamma", gamma_doc, 0)
 * gammaln = np.PyUFunc_FromFuncAndData(cephes1rc_functions, lgam_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "gammaln", gammaln_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_89 = __site_cvt_int_850_101->Target(__site_cvt_int_850_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "exp2_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_90 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_exp2_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_89, __pyx_k__exp2, __pyx_t_90, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "exp2", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":851
 * 
 * exp2 = np.PyUFunc_FromFuncAndData(cephes1_functions, exp2_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "exp2", exp2_doc, 0)
 * gamma = np.PyUFunc_FromFuncAndData(cephes1rc_functions, Gamma_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "gamma", gamma_doc, 0)             # <<<<<<<<<<<<<<
 * gammaln = np.PyUFunc_FromFuncAndData(cephes1rc_functions, lgam_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "gammaln", gammaln_doc, 0)
 * i0 = np.PyUFunc_FromFuncAndData(cephes1_functions, i0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0", i0_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_91 = __site_cvt_int_851_107->Target(__site_cvt_int_851_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "gamma_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_92 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions, __pyx_v_5scipy_7special_7_cephes_Gamma_data, __pyx_v_5scipy_7special_7_cephes_cephes_1rc_types, 4, 1, 1, __pyx_t_91, __pyx_k__gamma, __pyx_t_92, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "gamma", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":852
 * exp2 = np.PyUFunc_FromFuncAndData(cephes1_functions, exp2_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "exp2", exp2_doc, 0)
 * gamma = np.PyUFunc_FromFuncAndData(cephes1rc_functions, Gamma_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "gamma", gamma_doc, 0)
 * gammaln = np.PyUFunc_FromFuncAndData(cephes1rc_functions, lgam_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "gammaln", gammaln_doc, 0)             # <<<<<<<<<<<<<<
 * i0 = np.PyUFunc_FromFuncAndData(cephes1_functions, i0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0", i0_doc, 0)
 * i0e = np.PyUFunc_FromFuncAndData(cephes1_functions, i0e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0e", i0e_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_93 = __site_cvt_int_852_108->Target(__site_cvt_int_852_108, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "gammaln_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_94 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions, __pyx_v_5scipy_7special_7_cephes_lgam_data, __pyx_v_5scipy_7special_7_cephes_cephes_1rc_types, 4, 1, 1, __pyx_t_93, __pyx_k__gammaln, __pyx_t_94, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "gammaln", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":853
 * gamma = np.PyUFunc_FromFuncAndData(cephes1rc_functions, Gamma_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "gamma", gamma_doc, 0)
 * gammaln = np.PyUFunc_FromFuncAndData(cephes1rc_functions, lgam_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "gammaln", gammaln_doc, 0)
 * i0 = np.PyUFunc_FromFuncAndData(cephes1_functions, i0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0", i0_doc, 0)             # <<<<<<<<<<<<<<
 * i0e = np.PyUFunc_FromFuncAndData(cephes1_functions, i0e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0e", i0e_doc, 0)
 * i1 = np.PyUFunc_FromFuncAndData(cephes1_functions, i1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i1", i1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_95 = __site_cvt_int_853_97->Target(__site_cvt_int_853_97, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "i0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_96 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_i0_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_95, __pyx_k__i0, __pyx_t_96, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "i0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":854
 * gammaln = np.PyUFunc_FromFuncAndData(cephes1rc_functions, lgam_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "gammaln", gammaln_doc, 0)
 * i0 = np.PyUFunc_FromFuncAndData(cephes1_functions, i0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0", i0_doc, 0)
 * i0e = np.PyUFunc_FromFuncAndData(cephes1_functions, i0e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0e", i0e_doc, 0)             # <<<<<<<<<<<<<<
 * i1 = np.PyUFunc_FromFuncAndData(cephes1_functions, i1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i1", i1_doc, 0)
 * i1e = np.PyUFunc_FromFuncAndData(cephes1_functions, i1e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i1e", i1e_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_97 = __site_cvt_int_854_99->Target(__site_cvt_int_854_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "i0e_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_98 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_i0e_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_97, __pyx_k__i0e, __pyx_t_98, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "i0e", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":855
 * i0 = np.PyUFunc_FromFuncAndData(cephes1_functions, i0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0", i0_doc, 0)
 * i0e = np.PyUFunc_FromFuncAndData(cephes1_functions, i0e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0e", i0e_doc, 0)
 * i1 = np.PyUFunc_FromFuncAndData(cephes1_functions, i1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i1", i1_doc, 0)             # <<<<<<<<<<<<<<
 * i1e = np.PyUFunc_FromFuncAndData(cephes1_functions, i1e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i1e", i1e_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_99 = __site_cvt_int_855_97->Target(__site_cvt_int_855_97, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "i1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_100 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_i1_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_99, __pyx_k__i1, __pyx_t_100, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "i1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":856
 * i0e = np.PyUFunc_FromFuncAndData(cephes1_functions, i0e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i0e", i0e_doc, 0)
 * i1 = np.PyUFunc_FromFuncAndData(cephes1_functions, i1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i1", i1_doc, 0)
 * i1e = np.PyUFunc_FromFuncAndData(cephes1_functions, i1e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i1e", i1e_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * gammaincc = np.PyUFunc_FromFuncAndData(cephes2_functions, igamc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammaincc", gammaincc_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_101 = __site_cvt_int_856_99->Target(__site_cvt_int_856_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "i1e_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_102 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_i1e_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_101, __pyx_k__i1e, __pyx_t_102, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "i1e", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":858
 * i1e = np.PyUFunc_FromFuncAndData(cephes1_functions, i1e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "i1e", i1e_doc, 0)
 * 
 * gammaincc = np.PyUFunc_FromFuncAndData(cephes2_functions, igamc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammaincc", gammaincc_doc, 0)             # <<<<<<<<<<<<<<
 * gammainc = np.PyUFunc_FromFuncAndData(cephes2_functions, igam_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammainc", gammainc_doc, 0)
 * gammainccinv = np.PyUFunc_FromFuncAndData(cephes2_functions, igami_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammainccinv", gammainccinv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_103 = __site_cvt_int_858_107->Target(__site_cvt_int_858_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "gammaincc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_104 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_igamc_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_103, __pyx_k__gammaincc, __pyx_t_104, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "gammaincc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":859
 * 
 * gammaincc = np.PyUFunc_FromFuncAndData(cephes2_functions, igamc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammaincc", gammaincc_doc, 0)
 * gammainc = np.PyUFunc_FromFuncAndData(cephes2_functions, igam_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammainc", gammainc_doc, 0)             # <<<<<<<<<<<<<<
 * gammainccinv = np.PyUFunc_FromFuncAndData(cephes2_functions, igami_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammainccinv", gammainccinv_doc, 0)
 * gammaincinv = np.PyUFunc_FromFuncAndData(cephes2_functions, gammaincinv_data,
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_105 = __site_cvt_int_859_105->Target(__site_cvt_int_859_105, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "gammainc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_106 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_igam_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_105, __pyx_k__gammainc, __pyx_t_106, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "gammainc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":860
 * gammaincc = np.PyUFunc_FromFuncAndData(cephes2_functions, igamc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammaincc", gammaincc_doc, 0)
 * gammainc = np.PyUFunc_FromFuncAndData(cephes2_functions, igam_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammainc", gammainc_doc, 0)
 * gammainccinv = np.PyUFunc_FromFuncAndData(cephes2_functions, igami_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammainccinv", gammainccinv_doc, 0)             # <<<<<<<<<<<<<<
 * gammaincinv = np.PyUFunc_FromFuncAndData(cephes2_functions, gammaincinv_data,
 *                             cephes_3_types, 2, 2, 1, PyUFunc_None,
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_107 = __site_cvt_int_860_110->Target(__site_cvt_int_860_110, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "gammainccinv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_108 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_igami_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_107, __pyx_k__gammainccinv, __pyx_t_108, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "gammainccinv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":862
 * gammainccinv = np.PyUFunc_FromFuncAndData(cephes2_functions, igami_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "gammainccinv", gammainccinv_doc, 0)
 * gammaincinv = np.PyUFunc_FromFuncAndData(cephes2_functions, gammaincinv_data,
 *                             cephes_3_types, 2, 2, 1, PyUFunc_None,             # <<<<<<<<<<<<<<
 *                             "gammaincinv", gammaincinv_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_109 = __site_cvt_int_862_65->Target(__site_cvt_int_862_65, __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":863
 * gammaincinv = np.PyUFunc_FromFuncAndData(cephes2_functions, gammaincinv_data,
 *                             cephes_3_types, 2, 2, 1, PyUFunc_None,
 *                             "gammaincinv", gammaincinv_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * iv = np.PyUFunc_FromFuncAndData(cephes2c_functions, iv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "iv", iv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "gammaincinv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_110 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_gammaincinv_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_109, __pyx_k__gammaincinv, __pyx_t_110, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "gammaincinv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":865
 *                             "gammaincinv", gammaincinv_doc, 0)
 * 
 * iv = np.PyUFunc_FromFuncAndData(cephes2c_functions, iv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "iv", iv_doc, 0)             # <<<<<<<<<<<<<<
 * ive = np.PyUFunc_FromFuncAndData(cephes2c_functions, ive_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "ive", ive_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_111 = __site_cvt_int_865_99->Target(__site_cvt_int_865_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "iv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_112 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2c_functions, __pyx_v_5scipy_7special_7_cephes_iv_data, __pyx_v_5scipy_7special_7_cephes_cephes_3c_types, 4, 2, 1, __pyx_t_111, __pyx_k__iv, __pyx_t_112, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "iv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":866
 * 
 * iv = np.PyUFunc_FromFuncAndData(cephes2c_functions, iv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "iv", iv_doc, 0)
 * ive = np.PyUFunc_FromFuncAndData(cephes2c_functions, ive_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "ive", ive_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * ellipj = np.PyUFunc_FromFuncAndData(cephes2_4_functions, ellpj_data, cephes_6_types, 2, 2, 4, PyUFunc_None, "ellipj", ellipj_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_113 = __site_cvt_int_866_101->Target(__site_cvt_int_866_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "ive_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_114 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2c_functions, __pyx_v_5scipy_7special_7_cephes_ive_data, __pyx_v_5scipy_7special_7_cephes_cephes_3c_types, 4, 2, 1, __pyx_t_113, __pyx_k__ive, __pyx_t_114, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "ive", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":868
 * ive = np.PyUFunc_FromFuncAndData(cephes2c_functions, ive_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "ive", ive_doc, 0)
 * 
 * ellipj = np.PyUFunc_FromFuncAndData(cephes2_4_functions, ellpj_data, cephes_6_types, 2, 2, 4, PyUFunc_None, "ellipj", ellipj_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * expn = np.PyUFunc_FromFuncAndData(cephes2a_functions, expn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "expn", expn_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_115 = __site_cvt_int_868_106->Target(__site_cvt_int_868_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "ellipj_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_116 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_4_functions, __pyx_v_5scipy_7special_7_cephes_ellpj_data, __pyx_v_5scipy_7special_7_cephes_cephes_6_types, 2, 2, 4, __pyx_t_115, __pyx_k__ellipj, __pyx_t_116, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "ellipj", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":870
 * ellipj = np.PyUFunc_FromFuncAndData(cephes2_4_functions, ellpj_data, cephes_6_types, 2, 2, 4, PyUFunc_None, "ellipj", ellipj_doc, 0)
 * 
 * expn = np.PyUFunc_FromFuncAndData(cephes2a_functions, expn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "expn", expn_doc, 0)             # <<<<<<<<<<<<<<
 * exp1 = np.PyUFunc_FromFuncAndData(cephes1rc_functions, exp1_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "exp1", exp1_doc, 0)
 * expi = np.PyUFunc_FromFuncAndData(cephes1rc_functions, expi_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "expi", expi_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_117 = __site_cvt_int_870_102->Target(__site_cvt_int_870_102, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "expn_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_118 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2a_functions, __pyx_v_5scipy_7special_7_cephes_expn_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_117, __pyx_k__expn, __pyx_t_118, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "expn", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":871
 * 
 * expn = np.PyUFunc_FromFuncAndData(cephes2a_functions, expn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "expn", expn_doc, 0)
 * exp1 = np.PyUFunc_FromFuncAndData(cephes1rc_functions, exp1_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "exp1", exp1_doc, 0)             # <<<<<<<<<<<<<<
 * expi = np.PyUFunc_FromFuncAndData(cephes1rc_functions, expi_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "expi", expi_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_119 = __site_cvt_int_871_105->Target(__site_cvt_int_871_105, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "exp1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_120 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions, __pyx_v_5scipy_7special_7_cephes_exp1_data, __pyx_v_5scipy_7special_7_cephes_cephes_1rc_types, 4, 1, 1, __pyx_t_119, __pyx_k__exp1, __pyx_t_120, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "exp1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":872
 * expn = np.PyUFunc_FromFuncAndData(cephes2a_functions, expn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "expn", expn_doc, 0)
 * exp1 = np.PyUFunc_FromFuncAndData(cephes1rc_functions, exp1_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "exp1", exp1_doc, 0)
 * expi = np.PyUFunc_FromFuncAndData(cephes1rc_functions, expi_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "expi", expi_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_121 = __site_cvt_int_872_105->Target(__site_cvt_int_872_105, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "expi_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_122 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions, __pyx_v_5scipy_7special_7_cephes_expi_data, __pyx_v_5scipy_7special_7_cephes_cephes_1rc_types, 4, 1, 1, __pyx_t_121, __pyx_k__expi, __pyx_t_122, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "expi", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":875
 * 
 * 
 * kn = np.PyUFunc_FromFuncAndData(cephes2a_functions, kn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "kn", kn_doc, 0)             # <<<<<<<<<<<<<<
 * pdtrc = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtrc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtrc", pdtrc_doc, 0)
 * pdtr = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtr", pdtr_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_123 = __site_cvt_int_875_98->Target(__site_cvt_int_875_98, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "kn_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_124 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2a_functions, __pyx_v_5scipy_7special_7_cephes_kn_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_123, __pyx_k__kn, __pyx_t_124, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "kn", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":876
 * 
 * kn = np.PyUFunc_FromFuncAndData(cephes2a_functions, kn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "kn", kn_doc, 0)
 * pdtrc = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtrc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtrc", pdtrc_doc, 0)             # <<<<<<<<<<<<<<
 * pdtr = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtr", pdtr_doc, 0)
 * pdtri = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtri", pdtri_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_125 = __site_cvt_int_876_104->Target(__site_cvt_int_876_104, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pdtrc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_126 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2a_functions, __pyx_v_5scipy_7special_7_cephes_pdtrc_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_125, __pyx_k__pdtrc, __pyx_t_126, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pdtrc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":877
 * kn = np.PyUFunc_FromFuncAndData(cephes2a_functions, kn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "kn", kn_doc, 0)
 * pdtrc = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtrc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtrc", pdtrc_doc, 0)
 * pdtr = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtr", pdtr_doc, 0)             # <<<<<<<<<<<<<<
 * pdtri = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtri", pdtri_doc, 0)
 * yn = np.PyUFunc_FromFuncAndData(cephes2a_functions, yn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "yn", yn_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_127 = __site_cvt_int_877_102->Target(__site_cvt_int_877_102, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pdtr_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_128 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2a_functions, __pyx_v_5scipy_7special_7_cephes_pdtr_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_127, __pyx_k__pdtr, __pyx_t_128, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pdtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":878
 * pdtrc = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtrc_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtrc", pdtrc_doc, 0)
 * pdtr = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtr", pdtr_doc, 0)
 * pdtri = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtri", pdtri_doc, 0)             # <<<<<<<<<<<<<<
 * yn = np.PyUFunc_FromFuncAndData(cephes2a_functions, yn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "yn", yn_doc, 0)
 * smirnov = np.PyUFunc_FromFuncAndData(cephes2a_functions, smirnov_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "smirnov", smirnov_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_129 = __site_cvt_int_878_104->Target(__site_cvt_int_878_104, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pdtri_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_130 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2a_functions, __pyx_v_5scipy_7special_7_cephes_pdtri_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_129, __pyx_k__pdtri, __pyx_t_130, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pdtri", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":879
 * pdtr = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtr_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtr", pdtr_doc, 0)
 * pdtri = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtri", pdtri_doc, 0)
 * yn = np.PyUFunc_FromFuncAndData(cephes2a_functions, yn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "yn", yn_doc, 0)             # <<<<<<<<<<<<<<
 * smirnov = np.PyUFunc_FromFuncAndData(cephes2a_functions, smirnov_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "smirnov", smirnov_doc, 0)
 * smirnovi = np.PyUFunc_FromFuncAndData(cephes2a_functions, smirnovi_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "smirnovi", smirnovi_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_131 = __site_cvt_int_879_98->Target(__site_cvt_int_879_98, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "yn_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_132 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2a_functions, __pyx_v_5scipy_7special_7_cephes_yn_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_131, __pyx_k__yn, __pyx_t_132, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "yn", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":880
 * pdtri = np.PyUFunc_FromFuncAndData(cephes2a_functions, pdtri_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtri", pdtri_doc, 0)
 * yn = np.PyUFunc_FromFuncAndData(cephes2a_functions, yn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "yn", yn_doc, 0)
 * smirnov = np.PyUFunc_FromFuncAndData(cephes2a_functions, smirnov_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "smirnov", smirnov_doc, 0)             # <<<<<<<<<<<<<<
 * smirnovi = np.PyUFunc_FromFuncAndData(cephes2a_functions, smirnovi_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "smirnovi", smirnovi_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_133 = __site_cvt_int_880_108->Target(__site_cvt_int_880_108, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "smirnov_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_134 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2a_functions, __pyx_v_5scipy_7special_7_cephes_smirnov_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_133, __pyx_k__smirnov, __pyx_t_134, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "smirnov", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":881
 * yn = np.PyUFunc_FromFuncAndData(cephes2a_functions, yn_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "yn", yn_doc, 0)
 * smirnov = np.PyUFunc_FromFuncAndData(cephes2a_functions, smirnov_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "smirnov", smirnov_doc, 0)
 * smirnovi = np.PyUFunc_FromFuncAndData(cephes2a_functions, smirnovi_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "smirnovi", smirnovi_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * airy = np.PyUFunc_FromFuncAndData(cephes1c_4_functions, airy_data, cephes_5c_types, 4, 1, 4, PyUFunc_None, "airy", airy_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_135 = __site_cvt_int_881_110->Target(__site_cvt_int_881_110, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "smirnovi_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_136 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2a_functions, __pyx_v_5scipy_7special_7_cephes_smirnovi_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_135, __pyx_k__smirnovi, __pyx_t_136, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "smirnovi", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":883
 * smirnovi = np.PyUFunc_FromFuncAndData(cephes2a_functions, smirnovi_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "smirnovi", smirnovi_doc, 0)
 * 
 * airy = np.PyUFunc_FromFuncAndData(cephes1c_4_functions, airy_data, cephes_5c_types, 4, 1, 4, PyUFunc_None, "airy", airy_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * itairy = np.PyUFunc_FromFuncAndData(cephes1c_4_functions, itairy_data, cephes_5_types, 2, 1, 4, PyUFunc_None, "itairy", itairy_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_137 = __site_cvt_int_883_105->Target(__site_cvt_int_883_105, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "airy_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_138 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1c_4_functions, __pyx_v_5scipy_7special_7_cephes_airy_data, __pyx_v_5scipy_7special_7_cephes_cephes_5c_types, 4, 1, 4, __pyx_t_137, __pyx_k__airy, __pyx_t_138, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "airy", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":885
 * airy = np.PyUFunc_FromFuncAndData(cephes1c_4_functions, airy_data, cephes_5c_types, 4, 1, 4, PyUFunc_None, "airy", airy_doc, 0)
 * 
 * itairy = np.PyUFunc_FromFuncAndData(cephes1c_4_functions, itairy_data, cephes_5_types, 2, 1, 4, PyUFunc_None, "itairy", itairy_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_139 = __site_cvt_int_885_108->Target(__site_cvt_int_885_108, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "itairy_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_140 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1c_4_functions, __pyx_v_5scipy_7special_7_cephes_itairy_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 1, 4, __pyx_t_139, __pyx_k__itairy, __pyx_t_140, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "itairy", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":888
 * 
 * 
 * airye = np.PyUFunc_FromFuncAndData(cephes1c_4_functions, airye_data, cephes_5c_types, 4, 1, 4, PyUFunc_None, "airye", airye_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * fresnel = np.PyUFunc_FromFuncAndData(cephes1_2_functions, fresnl_data, cephes_3_cmplx_types, 4, 1, 2, PyUFunc_None, "fresnel", fresnel_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_141 = __site_cvt_int_888_107->Target(__site_cvt_int_888_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "airye_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_142 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1c_4_functions, __pyx_v_5scipy_7special_7_cephes_airye_data, __pyx_v_5scipy_7special_7_cephes_cephes_5c_types, 4, 1, 4, __pyx_t_141, __pyx_k__airye, __pyx_t_142, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "airye", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":890
 * airye = np.PyUFunc_FromFuncAndData(cephes1c_4_functions, airye_data, cephes_5c_types, 4, 1, 4, PyUFunc_None, "airye", airye_doc, 0)
 * 
 * fresnel = np.PyUFunc_FromFuncAndData(cephes1_2_functions, fresnl_data, cephes_3_cmplx_types, 4, 1, 2, PyUFunc_None, "fresnel", fresnel_doc, 0)             # <<<<<<<<<<<<<<
 * shichi = np.PyUFunc_FromFuncAndData(cephes1_2_functions, shichi_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "shichi", shichi_doc, 0)
 * sici = np.PyUFunc_FromFuncAndData(cephes1_2_functions, sici_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "sici", sici_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_143 = __site_cvt_int_890_114->Target(__site_cvt_int_890_114, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "fresnel_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_144 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions, __pyx_v_5scipy_7special_7_cephes_fresnl_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_cmplx_types, 4, 1, 2, __pyx_t_143, __pyx_k__fresnel, __pyx_t_144, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "fresnel", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":891
 * 
 * fresnel = np.PyUFunc_FromFuncAndData(cephes1_2_functions, fresnl_data, cephes_3_cmplx_types, 4, 1, 2, PyUFunc_None, "fresnel", fresnel_doc, 0)
 * shichi = np.PyUFunc_FromFuncAndData(cephes1_2_functions, shichi_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "shichi", shichi_doc, 0)             # <<<<<<<<<<<<<<
 * sici = np.PyUFunc_FromFuncAndData(cephes1_2_functions, sici_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "sici", sici_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_145 = __site_cvt_int_891_107->Target(__site_cvt_int_891_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "shichi_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_146 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions, __pyx_v_5scipy_7special_7_cephes_shichi_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 1, 2, __pyx_t_145, __pyx_k__shichi, __pyx_t_146, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "shichi", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":892
 * fresnel = np.PyUFunc_FromFuncAndData(cephes1_2_functions, fresnl_data, cephes_3_cmplx_types, 4, 1, 2, PyUFunc_None, "fresnel", fresnel_doc, 0)
 * shichi = np.PyUFunc_FromFuncAndData(cephes1_2_functions, shichi_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "shichi", shichi_doc, 0)
 * sici = np.PyUFunc_FromFuncAndData(cephes1_2_functions, sici_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "sici", sici_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_147 = __site_cvt_int_892_103->Target(__site_cvt_int_892_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "sici_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_148 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions, __pyx_v_5scipy_7special_7_cephes_sici_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 1, 2, __pyx_t_147, __pyx_k__sici, __pyx_t_148, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "sici", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":895
 * 
 * 
 * itj0y0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, itj0y0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "itj0y0", itj0y0_doc, 0)             # <<<<<<<<<<<<<<
 * it2j0y0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, it2j0y0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "it2j0y0", it2j0y0_doc, 0)
 * iti0k0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, iti0k0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "iti0k0", iti0k0_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_149 = __site_cvt_int_895_107->Target(__site_cvt_int_895_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "itj0y0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_150 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions, __pyx_v_5scipy_7special_7_cephes_itj0y0_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 1, 2, __pyx_t_149, __pyx_k__itj0y0, __pyx_t_150, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "itj0y0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":896
 * 
 * itj0y0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, itj0y0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "itj0y0", itj0y0_doc, 0)
 * it2j0y0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, it2j0y0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "it2j0y0", it2j0y0_doc, 0)             # <<<<<<<<<<<<<<
 * iti0k0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, iti0k0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "iti0k0", iti0k0_doc, 0)
 * it2i0k0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, it2i0k0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "it2i0k0", it2i0k0_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_151 = __site_cvt_int_896_109->Target(__site_cvt_int_896_109, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "it2j0y0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_152 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions, __pyx_v_5scipy_7special_7_cephes_it2j0y0_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 1, 2, __pyx_t_151, __pyx_k__it2j0y0, __pyx_t_152, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "it2j0y0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":897
 * itj0y0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, itj0y0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "itj0y0", itj0y0_doc, 0)
 * it2j0y0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, it2j0y0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "it2j0y0", it2j0y0_doc, 0)
 * iti0k0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, iti0k0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "iti0k0", iti0k0_doc, 0)             # <<<<<<<<<<<<<<
 * it2i0k0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, it2i0k0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "it2i0k0", it2i0k0_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_153 = __site_cvt_int_897_107->Target(__site_cvt_int_897_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "iti0k0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_154 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions, __pyx_v_5scipy_7special_7_cephes_iti0k0_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 1, 2, __pyx_t_153, __pyx_k__iti0k0, __pyx_t_154, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "iti0k0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":898
 * it2j0y0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, it2j0y0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "it2j0y0", it2j0y0_doc, 0)
 * iti0k0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, iti0k0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "iti0k0", iti0k0_doc, 0)
 * it2i0k0 = np.PyUFunc_FromFuncAndData(cephes1_2_functions, it2i0k0_data, cephes_3_types, 2, 1, 2, PyUFunc_None, "it2i0k0", it2i0k0_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_155 = __site_cvt_int_898_109->Target(__site_cvt_int_898_109, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "it2i0k0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_156 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_2_functions, __pyx_v_5scipy_7special_7_cephes_it2i0k0_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 1, 2, __pyx_t_155, __pyx_k__it2i0k0, __pyx_t_156, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "it2i0k0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":901
 * 
 * 
 * j0 = np.PyUFunc_FromFuncAndData(cephes1_functions, j0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "j0", j0_doc, 0)             # <<<<<<<<<<<<<<
 * y0 = np.PyUFunc_FromFuncAndData(cephes1_functions, y0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "y0", y0_doc, 0)
 * j1 = np.PyUFunc_FromFuncAndData(cephes1_functions, j1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "j1", j1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_157 = __site_cvt_int_901_97->Target(__site_cvt_int_901_97, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "j0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_158 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_j0_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_157, __pyx_k__j0, __pyx_t_158, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "j0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":902
 * 
 * j0 = np.PyUFunc_FromFuncAndData(cephes1_functions, j0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "j0", j0_doc, 0)
 * y0 = np.PyUFunc_FromFuncAndData(cephes1_functions, y0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "y0", y0_doc, 0)             # <<<<<<<<<<<<<<
 * j1 = np.PyUFunc_FromFuncAndData(cephes1_functions, j1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "j1", j1_doc, 0)
 * y1 = np.PyUFunc_FromFuncAndData(cephes1_functions, y1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "y1", y1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_159 = __site_cvt_int_902_97->Target(__site_cvt_int_902_97, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "y0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_160 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_y0_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_159, __pyx_k__y0, __pyx_t_160, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "y0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":903
 * j0 = np.PyUFunc_FromFuncAndData(cephes1_functions, j0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "j0", j0_doc, 0)
 * y0 = np.PyUFunc_FromFuncAndData(cephes1_functions, y0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "y0", y0_doc, 0)
 * j1 = np.PyUFunc_FromFuncAndData(cephes1_functions, j1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "j1", j1_doc, 0)             # <<<<<<<<<<<<<<
 * y1 = np.PyUFunc_FromFuncAndData(cephes1_functions, y1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "y1", y1_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_161 = __site_cvt_int_903_97->Target(__site_cvt_int_903_97, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "j1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_162 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_j1_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_161, __pyx_k__j1, __pyx_t_162, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "j1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":904
 * y0 = np.PyUFunc_FromFuncAndData(cephes1_functions, y0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "y0", y0_doc, 0)
 * j1 = np.PyUFunc_FromFuncAndData(cephes1_functions, j1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "j1", j1_doc, 0)
 * y1 = np.PyUFunc_FromFuncAndData(cephes1_functions, y1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "y1", y1_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * jv = np.PyUFunc_FromFuncAndData(cephes2c_functions, jv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "jv", jv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_163 = __site_cvt_int_904_97->Target(__site_cvt_int_904_97, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "y1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_164 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_y1_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_163, __pyx_k__y1, __pyx_t_164, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "y1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":906
 * y1 = np.PyUFunc_FromFuncAndData(cephes1_functions, y1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "y1", y1_doc, 0)
 * 
 * jv = np.PyUFunc_FromFuncAndData(cephes2c_functions, jv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "jv", jv_doc, 0)             # <<<<<<<<<<<<<<
 * jve = np.PyUFunc_FromFuncAndData(cephes2c_functions, jve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "jve", jve_doc, 0)
 * yv = np.PyUFunc_FromFuncAndData(cephes2c_functions, yv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "yv", yv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_165 = __site_cvt_int_906_99->Target(__site_cvt_int_906_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "jv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_166 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2c_functions, __pyx_v_5scipy_7special_7_cephes_jv_data, __pyx_v_5scipy_7special_7_cephes_cephes_3c_types, 4, 2, 1, __pyx_t_165, __pyx_k__jv, __pyx_t_166, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "jv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":907
 * 
 * jv = np.PyUFunc_FromFuncAndData(cephes2c_functions, jv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "jv", jv_doc, 0)
 * jve = np.PyUFunc_FromFuncAndData(cephes2c_functions, jve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "jve", jve_doc, 0)             # <<<<<<<<<<<<<<
 * yv = np.PyUFunc_FromFuncAndData(cephes2c_functions, yv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "yv", yv_doc, 0)
 * yve = np.PyUFunc_FromFuncAndData(cephes2c_functions, yve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "yve", yve_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_167 = __site_cvt_int_907_101->Target(__site_cvt_int_907_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "jve_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_168 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2c_functions, __pyx_v_5scipy_7special_7_cephes_jve_data, __pyx_v_5scipy_7special_7_cephes_cephes_3c_types, 4, 2, 1, __pyx_t_167, __pyx_k__jve, __pyx_t_168, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "jve", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":908
 * jv = np.PyUFunc_FromFuncAndData(cephes2c_functions, jv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "jv", jv_doc, 0)
 * jve = np.PyUFunc_FromFuncAndData(cephes2c_functions, jve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "jve", jve_doc, 0)
 * yv = np.PyUFunc_FromFuncAndData(cephes2c_functions, yv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "yv", yv_doc, 0)             # <<<<<<<<<<<<<<
 * yve = np.PyUFunc_FromFuncAndData(cephes2c_functions, yve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "yve", yve_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_169 = __site_cvt_int_908_99->Target(__site_cvt_int_908_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "yv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_170 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2c_functions, __pyx_v_5scipy_7special_7_cephes_yv_data, __pyx_v_5scipy_7special_7_cephes_cephes_3c_types, 4, 2, 1, __pyx_t_169, __pyx_k__yv, __pyx_t_170, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "yv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":909
 * jve = np.PyUFunc_FromFuncAndData(cephes2c_functions, jve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "jve", jve_doc, 0)
 * yv = np.PyUFunc_FromFuncAndData(cephes2c_functions, yv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "yv", yv_doc, 0)
 * yve = np.PyUFunc_FromFuncAndData(cephes2c_functions, yve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "yve", yve_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_171 = __site_cvt_int_909_101->Target(__site_cvt_int_909_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "yve_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_172 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2c_functions, __pyx_v_5scipy_7special_7_cephes_yve_data, __pyx_v_5scipy_7special_7_cephes_cephes_3c_types, 4, 2, 1, __pyx_t_171, __pyx_k__yve, __pyx_t_172, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "yve", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":912
 * 
 * 
 * k0 = np.PyUFunc_FromFuncAndData(cephes1_functions, k0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k0", k0_doc, 0)             # <<<<<<<<<<<<<<
 * k0e = np.PyUFunc_FromFuncAndData(cephes1_functions, k0e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k0e", k0e_doc, 0)
 * k1 = np.PyUFunc_FromFuncAndData(cephes1_functions, k1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1", k1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_173 = __site_cvt_int_912_97->Target(__site_cvt_int_912_97, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "k0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_174 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_k0_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_173, __pyx_k__k0, __pyx_t_174, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "k0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":913
 * 
 * k0 = np.PyUFunc_FromFuncAndData(cephes1_functions, k0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k0", k0_doc, 0)
 * k0e = np.PyUFunc_FromFuncAndData(cephes1_functions, k0e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k0e", k0e_doc, 0)             # <<<<<<<<<<<<<<
 * k1 = np.PyUFunc_FromFuncAndData(cephes1_functions, k1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1", k1_doc, 0)
 * k1e = np.PyUFunc_FromFuncAndData(cephes1_functions, k1e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1e", k1e_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_175 = __site_cvt_int_913_99->Target(__site_cvt_int_913_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "k0e_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_176 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_k0e_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_175, __pyx_k__k0e, __pyx_t_176, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "k0e", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":914
 * k0 = np.PyUFunc_FromFuncAndData(cephes1_functions, k0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k0", k0_doc, 0)
 * k0e = np.PyUFunc_FromFuncAndData(cephes1_functions, k0e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k0e", k0e_doc, 0)
 * k1 = np.PyUFunc_FromFuncAndData(cephes1_functions, k1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1", k1_doc, 0)             # <<<<<<<<<<<<<<
 * k1e = np.PyUFunc_FromFuncAndData(cephes1_functions, k1e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1e", k1e_doc, 0)
 * kv = np.PyUFunc_FromFuncAndData(cephes2c_functions, kv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "kv", kv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_177 = __site_cvt_int_914_97->Target(__site_cvt_int_914_97, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "k1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_178 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_k1_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_177, __pyx_k__k1, __pyx_t_178, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "k1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":915
 * k0e = np.PyUFunc_FromFuncAndData(cephes1_functions, k0e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k0e", k0e_doc, 0)
 * k1 = np.PyUFunc_FromFuncAndData(cephes1_functions, k1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1", k1_doc, 0)
 * k1e = np.PyUFunc_FromFuncAndData(cephes1_functions, k1e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1e", k1e_doc, 0)             # <<<<<<<<<<<<<<
 * kv = np.PyUFunc_FromFuncAndData(cephes2c_functions, kv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "kv", kv_doc, 0)
 * kve = np.PyUFunc_FromFuncAndData(cephes2c_functions, kve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "kve", kve_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_179 = __site_cvt_int_915_99->Target(__site_cvt_int_915_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "k1e_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_180 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_k1e_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_179, __pyx_k__k1e, __pyx_t_180, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "k1e", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":916
 * k1 = np.PyUFunc_FromFuncAndData(cephes1_functions, k1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1", k1_doc, 0)
 * k1e = np.PyUFunc_FromFuncAndData(cephes1_functions, k1e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1e", k1e_doc, 0)
 * kv = np.PyUFunc_FromFuncAndData(cephes2c_functions, kv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "kv", kv_doc, 0)             # <<<<<<<<<<<<<<
 * kve = np.PyUFunc_FromFuncAndData(cephes2c_functions, kve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "kve", kve_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_181 = __site_cvt_int_916_99->Target(__site_cvt_int_916_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "kv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_182 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2c_functions, __pyx_v_5scipy_7special_7_cephes_kv_data, __pyx_v_5scipy_7special_7_cephes_cephes_3c_types, 4, 2, 1, __pyx_t_181, __pyx_k__kv, __pyx_t_182, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "kv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":917
 * k1e = np.PyUFunc_FromFuncAndData(cephes1_functions, k1e_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "k1e", k1e_doc, 0)
 * kv = np.PyUFunc_FromFuncAndData(cephes2c_functions, kv_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "kv", kv_doc, 0)
 * kve = np.PyUFunc_FromFuncAndData(cephes2c_functions, kve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "kve", kve_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * hankel1 = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel1_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel1", hankel1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_183 = __site_cvt_int_917_101->Target(__site_cvt_int_917_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "kve_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_184 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2c_functions, __pyx_v_5scipy_7special_7_cephes_kve_data, __pyx_v_5scipy_7special_7_cephes_cephes_3c_types, 4, 2, 1, __pyx_t_183, __pyx_k__kve, __pyx_t_184, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "kve", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":919
 * kve = np.PyUFunc_FromFuncAndData(cephes2c_functions, kve_data, cephes_3c_types, 4, 2, 1, PyUFunc_None, "kve", kve_doc, 0)
 * 
 * hankel1 = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel1_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel1", hankel1_doc, 0)             # <<<<<<<<<<<<<<
 * hankel1e = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel1e_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel1e", hankel1e_doc, 0)
 * hankel2 = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel2_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel2", hankel2_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_185 = __site_cvt_int_919_112->Target(__site_cvt_int_919_112, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "hankel1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_186 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2cpp_functions, __pyx_v_5scipy_7special_7_cephes_hankel1_data, __pyx_v_5scipy_7special_7_cephes_cephes_3cp_types, 2, 2, 1, __pyx_t_185, __pyx_k__hankel1, __pyx_t_186, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "hankel1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":920
 * 
 * hankel1 = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel1_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel1", hankel1_doc, 0)
 * hankel1e = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel1e_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel1e", hankel1e_doc, 0)             # <<<<<<<<<<<<<<
 * hankel2 = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel2_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel2", hankel2_doc, 0)
 * hankel2e = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel2e_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel2e", hankel2e_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_187 = __site_cvt_int_920_114->Target(__site_cvt_int_920_114, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "hankel1e_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_188 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2cpp_functions, __pyx_v_5scipy_7special_7_cephes_hankel1e_data, __pyx_v_5scipy_7special_7_cephes_cephes_3cp_types, 2, 2, 1, __pyx_t_187, __pyx_k__hankel1e, __pyx_t_188, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "hankel1e", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":921
 * hankel1 = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel1_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel1", hankel1_doc, 0)
 * hankel1e = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel1e_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel1e", hankel1e_doc, 0)
 * hankel2 = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel2_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel2", hankel2_doc, 0)             # <<<<<<<<<<<<<<
 * hankel2e = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel2e_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel2e", hankel2e_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_189 = __site_cvt_int_921_112->Target(__site_cvt_int_921_112, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "hankel2_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_190 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2cpp_functions, __pyx_v_5scipy_7special_7_cephes_hankel2_data, __pyx_v_5scipy_7special_7_cephes_cephes_3cp_types, 2, 2, 1, __pyx_t_189, __pyx_k__hankel2, __pyx_t_190, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "hankel2", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":922
 * hankel1e = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel1e_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel1e", hankel1e_doc, 0)
 * hankel2 = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel2_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel2", hankel2_doc, 0)
 * hankel2e = np.PyUFunc_FromFuncAndData(cephes2cpp_functions, hankel2e_data, cephes_3cp_types, 2, 2, 1, PyUFunc_None, "hankel2e", hankel2e_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_191 = __site_cvt_int_922_114->Target(__site_cvt_int_922_114, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "hankel2e_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_192 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2cpp_functions, __pyx_v_5scipy_7special_7_cephes_hankel2e_data, __pyx_v_5scipy_7special_7_cephes_cephes_3cp_types, 2, 2, 1, __pyx_t_191, __pyx_k__hankel2e, __pyx_t_192, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "hankel2e", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":925
 * 
 * 
 * ndtr = np.PyUFunc_FromFuncAndData(cephes1_functions, ndtr_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ndtr", ndtr_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * erfc = np.PyUFunc_FromFuncAndData(cephes1_functions, erfc_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "erfc", erfc_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_193 = __site_cvt_int_925_101->Target(__site_cvt_int_925_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "ndtr_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_194 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_ndtr_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_193, __pyx_k__ndtr, __pyx_t_194, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "ndtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":927
 * ndtr = np.PyUFunc_FromFuncAndData(cephes1_functions, ndtr_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ndtr", ndtr_doc, 0)
 * 
 * erfc = np.PyUFunc_FromFuncAndData(cephes1_functions, erfc_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "erfc", erfc_doc, 0)             # <<<<<<<<<<<<<<
 * erf = np.PyUFunc_FromFuncAndData(cephes1rc_functions, erf_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "erf", erf_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_195 = __site_cvt_int_927_101->Target(__site_cvt_int_927_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "erfc_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_196 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_erfc_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_195, __pyx_k__erfc, __pyx_t_196, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "erfc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":928
 * 
 * erfc = np.PyUFunc_FromFuncAndData(cephes1_functions, erfc_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "erfc", erfc_doc, 0)
 * erf = np.PyUFunc_FromFuncAndData(cephes1rc_functions, erf_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "erf", erf_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * ndtri = np.PyUFunc_FromFuncAndData(cephes1_functions, ndtri_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ndtri", ndtri_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_197 = __site_cvt_int_928_103->Target(__site_cvt_int_928_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "erf_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_198 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions, __pyx_v_5scipy_7special_7_cephes_erf_data, __pyx_v_5scipy_7special_7_cephes_cephes_1rc_types, 4, 1, 1, __pyx_t_197, __pyx_k__erf, __pyx_t_198, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "erf", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":930
 * erf = np.PyUFunc_FromFuncAndData(cephes1rc_functions, erf_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "erf", erf_doc, 0)
 * 
 * ndtri = np.PyUFunc_FromFuncAndData(cephes1_functions, ndtri_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ndtri", ndtri_doc, 0)             # <<<<<<<<<<<<<<
 * psi = np.PyUFunc_FromFuncAndData(cephes1rc_functions, psi_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "psi", psi_doc, 0)
 * rgamma = np.PyUFunc_FromFuncAndData(cephes1rc_functions, rgamma_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "rgamma", rgamma_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_199 = __site_cvt_int_930_103->Target(__site_cvt_int_930_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "ndtri_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_200 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_ndtri_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_199, __pyx_k__ndtri, __pyx_t_200, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "ndtri", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":931
 * 
 * ndtri = np.PyUFunc_FromFuncAndData(cephes1_functions, ndtri_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ndtri", ndtri_doc, 0)
 * psi = np.PyUFunc_FromFuncAndData(cephes1rc_functions, psi_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "psi", psi_doc, 0)             # <<<<<<<<<<<<<<
 * rgamma = np.PyUFunc_FromFuncAndData(cephes1rc_functions, rgamma_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "rgamma", rgamma_doc, 0)
 * round = np.PyUFunc_FromFuncAndData(cephes1_functions, round_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "round", round_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_201 = __site_cvt_int_931_103->Target(__site_cvt_int_931_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "psi_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_202 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions, __pyx_v_5scipy_7special_7_cephes_psi_data, __pyx_v_5scipy_7special_7_cephes_cephes_1rc_types, 4, 1, 1, __pyx_t_201, __pyx_k__psi, __pyx_t_202, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "psi", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":932
 * ndtri = np.PyUFunc_FromFuncAndData(cephes1_functions, ndtri_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ndtri", ndtri_doc, 0)
 * psi = np.PyUFunc_FromFuncAndData(cephes1rc_functions, psi_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "psi", psi_doc, 0)
 * rgamma = np.PyUFunc_FromFuncAndData(cephes1rc_functions, rgamma_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "rgamma", rgamma_doc, 0)             # <<<<<<<<<<<<<<
 * round = np.PyUFunc_FromFuncAndData(cephes1_functions, round_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "round", round_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_203 = __site_cvt_int_932_109->Target(__site_cvt_int_932_109, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "rgamma_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_204 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1rc_functions, __pyx_v_5scipy_7special_7_cephes_rgamma_data, __pyx_v_5scipy_7special_7_cephes_cephes_1rc_types, 4, 1, 1, __pyx_t_203, __pyx_k__rgamma, __pyx_t_204, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "rgamma", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":933
 * psi = np.PyUFunc_FromFuncAndData(cephes1rc_functions, psi_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "psi", psi_doc, 0)
 * rgamma = np.PyUFunc_FromFuncAndData(cephes1rc_functions, rgamma_data, cephes_1rc_types, 4, 1, 1, PyUFunc_None, "rgamma", rgamma_doc, 0)
 * round = np.PyUFunc_FromFuncAndData(cephes1_functions, round_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "round", round_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * sindg = np.PyUFunc_FromFuncAndData(cephes1_functions, sindg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "sindg", sindg_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_205 = __site_cvt_int_933_103->Target(__site_cvt_int_933_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "round_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_206 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_round_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_205, __pyx_k__round, __pyx_t_206, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "round", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":935
 * round = np.PyUFunc_FromFuncAndData(cephes1_functions, round_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "round", round_doc, 0)
 * 
 * sindg = np.PyUFunc_FromFuncAndData(cephes1_functions, sindg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "sindg", sindg_doc, 0)             # <<<<<<<<<<<<<<
 * cosdg = np.PyUFunc_FromFuncAndData(cephes1_functions, cosdg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cosdg", cosdg_doc, 0)
 * radian = np.PyUFunc_FromFuncAndData(cephes3_functions, radian_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "radian", radian_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_207 = __site_cvt_int_935_103->Target(__site_cvt_int_935_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "sindg_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_208 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_sindg_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_207, __pyx_k__sindg, __pyx_t_208, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "sindg", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":936
 * 
 * sindg = np.PyUFunc_FromFuncAndData(cephes1_functions, sindg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "sindg", sindg_doc, 0)
 * cosdg = np.PyUFunc_FromFuncAndData(cephes1_functions, cosdg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cosdg", cosdg_doc, 0)             # <<<<<<<<<<<<<<
 * radian = np.PyUFunc_FromFuncAndData(cephes3_functions, radian_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "radian", radian_doc, 0)
 * tandg = np.PyUFunc_FromFuncAndData(cephes1_functions, tandg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "tandg", tandg_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_209 = __site_cvt_int_936_103->Target(__site_cvt_int_936_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "cosdg_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_210 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_cosdg_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_209, __pyx_k__cosdg, __pyx_t_210, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "cosdg", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":937
 * sindg = np.PyUFunc_FromFuncAndData(cephes1_functions, sindg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "sindg", sindg_doc, 0)
 * cosdg = np.PyUFunc_FromFuncAndData(cephes1_functions, cosdg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cosdg", cosdg_doc, 0)
 * radian = np.PyUFunc_FromFuncAndData(cephes3_functions, radian_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "radian", radian_doc, 0)             # <<<<<<<<<<<<<<
 * tandg = np.PyUFunc_FromFuncAndData(cephes1_functions, tandg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "tandg", tandg_doc, 0)
 * cotdg = np.PyUFunc_FromFuncAndData(cephes1_functions, cotdg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cotdg", cotdg_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_211 = __site_cvt_int_937_105->Target(__site_cvt_int_937_105, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "radian_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_212 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_radian_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_211, __pyx_k__radian, __pyx_t_212, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "radian", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":938
 * cosdg = np.PyUFunc_FromFuncAndData(cephes1_functions, cosdg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cosdg", cosdg_doc, 0)
 * radian = np.PyUFunc_FromFuncAndData(cephes3_functions, radian_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "radian", radian_doc, 0)
 * tandg = np.PyUFunc_FromFuncAndData(cephes1_functions, tandg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "tandg", tandg_doc, 0)             # <<<<<<<<<<<<<<
 * cotdg = np.PyUFunc_FromFuncAndData(cephes1_functions, cotdg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cotdg", cotdg_doc, 0)
 * log1p = np.PyUFunc_FromFuncAndData(cephes1_functions, log1p_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "log1p", log1p_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_213 = __site_cvt_int_938_103->Target(__site_cvt_int_938_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "tandg_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_214 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_tandg_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_213, __pyx_k__tandg, __pyx_t_214, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "tandg", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":939
 * radian = np.PyUFunc_FromFuncAndData(cephes3_functions, radian_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "radian", radian_doc, 0)
 * tandg = np.PyUFunc_FromFuncAndData(cephes1_functions, tandg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "tandg", tandg_doc, 0)
 * cotdg = np.PyUFunc_FromFuncAndData(cephes1_functions, cotdg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cotdg", cotdg_doc, 0)             # <<<<<<<<<<<<<<
 * log1p = np.PyUFunc_FromFuncAndData(cephes1_functions, log1p_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "log1p", log1p_doc, 0)
 * expm1 = np.PyUFunc_FromFuncAndData(cephes1_functions, expm1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "expm1", expm1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_215 = __site_cvt_int_939_103->Target(__site_cvt_int_939_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "cotdg_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_216 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_cotdg_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_215, __pyx_k__cotdg, __pyx_t_216, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "cotdg", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":940
 * tandg = np.PyUFunc_FromFuncAndData(cephes1_functions, tandg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "tandg", tandg_doc, 0)
 * cotdg = np.PyUFunc_FromFuncAndData(cephes1_functions, cotdg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cotdg", cotdg_doc, 0)
 * log1p = np.PyUFunc_FromFuncAndData(cephes1_functions, log1p_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "log1p", log1p_doc, 0)             # <<<<<<<<<<<<<<
 * expm1 = np.PyUFunc_FromFuncAndData(cephes1_functions, expm1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "expm1", expm1_doc, 0)
 * cosm1 = np.PyUFunc_FromFuncAndData(cephes1_functions, cosm1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cosm1", cosm1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_217 = __site_cvt_int_940_103->Target(__site_cvt_int_940_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "log1p_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_218 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_log1p_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_217, __pyx_k__log1p, __pyx_t_218, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "log1p", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":941
 * cotdg = np.PyUFunc_FromFuncAndData(cephes1_functions, cotdg_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cotdg", cotdg_doc, 0)
 * log1p = np.PyUFunc_FromFuncAndData(cephes1_functions, log1p_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "log1p", log1p_doc, 0)
 * expm1 = np.PyUFunc_FromFuncAndData(cephes1_functions, expm1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "expm1", expm1_doc, 0)             # <<<<<<<<<<<<<<
 * cosm1 = np.PyUFunc_FromFuncAndData(cephes1_functions, cosm1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cosm1", cosm1_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_219 = __site_cvt_int_941_103->Target(__site_cvt_int_941_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "expm1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_220 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_expm1_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_219, __pyx_k__expm1, __pyx_t_220, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "expm1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":942
 * log1p = np.PyUFunc_FromFuncAndData(cephes1_functions, log1p_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "log1p", log1p_doc, 0)
 * expm1 = np.PyUFunc_FromFuncAndData(cephes1_functions, expm1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "expm1", expm1_doc, 0)
 * cosm1 = np.PyUFunc_FromFuncAndData(cephes1_functions, cosm1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cosm1", cosm1_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * spence = np.PyUFunc_FromFuncAndData(cephes1_functions, spence_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "spence", spence_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_221 = __site_cvt_int_942_103->Target(__site_cvt_int_942_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "cosm1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_222 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_cosm1_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_221, __pyx_k__cosm1, __pyx_t_222, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "cosm1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":944
 * cosm1 = np.PyUFunc_FromFuncAndData(cephes1_functions, cosm1_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "cosm1", cosm1_doc, 0)
 * 
 * spence = np.PyUFunc_FromFuncAndData(cephes1_functions, spence_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "spence", spence_doc, 0)             # <<<<<<<<<<<<<<
 * zetac = np.PyUFunc_FromFuncAndData(cephes1_functions, zetac_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "zetac", zetac_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_223 = __site_cvt_int_944_105->Target(__site_cvt_int_944_105, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "spence_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_224 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_spence_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_223, __pyx_k__spence, __pyx_t_224, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "spence", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":945
 * 
 * spence = np.PyUFunc_FromFuncAndData(cephes1_functions, spence_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "spence", spence_doc, 0)
 * zetac = np.PyUFunc_FromFuncAndData(cephes1_functions, zetac_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "zetac", zetac_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * struve = np.PyUFunc_FromFuncAndData(cephes2_functions, struve_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "struve", struve_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_225 = __site_cvt_int_945_103->Target(__site_cvt_int_945_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "zetac_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_226 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_zetac_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_225, __pyx_k__zetac, __pyx_t_226, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "zetac", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":947
 * zetac = np.PyUFunc_FromFuncAndData(cephes1_functions, zetac_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "zetac", zetac_doc, 0)
 * 
 * struve = np.PyUFunc_FromFuncAndData(cephes2_functions, struve_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "struve", struve_doc, 0)             # <<<<<<<<<<<<<<
 * modstruve = np.PyUFunc_FromFuncAndData(cephes2_functions, modstruve_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "modstruve", modstruve_doc, 0)
 * itstruve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, itstruve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "itstruve0", itstruve0_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_227 = __site_cvt_int_947_105->Target(__site_cvt_int_947_105, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "struve_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_228 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_struve_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_227, __pyx_k__struve, __pyx_t_228, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "struve", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":948
 * 
 * struve = np.PyUFunc_FromFuncAndData(cephes2_functions, struve_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "struve", struve_doc, 0)
 * modstruve = np.PyUFunc_FromFuncAndData(cephes2_functions, modstruve_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "modstruve", modstruve_doc, 0)             # <<<<<<<<<<<<<<
 * itstruve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, itstruve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "itstruve0", itstruve0_doc, 0)
 * it2struve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, it2struve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "it2struve0", it2struve0_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_229 = __site_cvt_int_948_111->Target(__site_cvt_int_948_111, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "modstruve_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_230 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_modstruve_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_229, __pyx_k__modstruve, __pyx_t_230, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "modstruve", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":949
 * struve = np.PyUFunc_FromFuncAndData(cephes2_functions, struve_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "struve", struve_doc, 0)
 * modstruve = np.PyUFunc_FromFuncAndData(cephes2_functions, modstruve_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "modstruve", modstruve_doc, 0)
 * itstruve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, itstruve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "itstruve0", itstruve0_doc, 0)             # <<<<<<<<<<<<<<
 * it2struve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, it2struve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "it2struve0", it2struve0_doc, 0)
 * itmodstruve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, itmodstruve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "itmodstruve0", itmodstruve0_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_231 = __site_cvt_int_949_111->Target(__site_cvt_int_949_111, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "itstruve0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_232 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_itstruve0_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_231, __pyx_k__itstruve0, __pyx_t_232, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "itstruve0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":950
 * modstruve = np.PyUFunc_FromFuncAndData(cephes2_functions, modstruve_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "modstruve", modstruve_doc, 0)
 * itstruve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, itstruve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "itstruve0", itstruve0_doc, 0)
 * it2struve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, it2struve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "it2struve0", it2struve0_doc, 0)             # <<<<<<<<<<<<<<
 * itmodstruve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, itmodstruve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "itmodstruve0", itmodstruve0_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_233 = __site_cvt_int_950_113->Target(__site_cvt_int_950_113, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "it2struve0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_234 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_it2struve0_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_233, __pyx_k__it2struve0, __pyx_t_234, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "it2struve0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":951
 * itstruve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, itstruve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "itstruve0", itstruve0_doc, 0)
 * it2struve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, it2struve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "it2struve0", it2struve0_doc, 0)
 * itmodstruve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, itmodstruve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "itmodstruve0", itmodstruve0_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * kelvin = np.PyUFunc_FromFuncAndData(cephes1cpb_4_functions, kelvin_data, cephes_5b2_types, 2, 1, 4, PyUFunc_None, "kelvin", kelvin_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_235 = __site_cvt_int_951_117->Target(__site_cvt_int_951_117, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "itmodstruve0_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_236 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_itmodstruve0_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_235, __pyx_k__itmodstruve0, __pyx_t_236, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "itmodstruve0", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":953
 * itmodstruve0 = np.PyUFunc_FromFuncAndData(cephes1_functions, itmodstruve0_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "itmodstruve0", itmodstruve0_doc, 0)
 * 
 * kelvin = np.PyUFunc_FromFuncAndData(cephes1cpb_4_functions, kelvin_data, cephes_5b2_types, 2, 1, 4, PyUFunc_None, "kelvin", kelvin_doc, 0)             # <<<<<<<<<<<<<<
 * ber = np.PyUFunc_FromFuncAndData(cephes1_functions, ber_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ber", ber_doc, 0)
 * bei = np.PyUFunc_FromFuncAndData(cephes1_functions, bei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "bei", bei_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_237 = __site_cvt_int_953_112->Target(__site_cvt_int_953_112, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "kelvin_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_238 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1cpb_4_functions, __pyx_v_5scipy_7special_7_cephes_kelvin_data, __pyx_v_5scipy_7special_7_cephes_cephes_5b2_types, 2, 1, 4, __pyx_t_237, __pyx_k__kelvin, __pyx_t_238, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "kelvin", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":954
 * 
 * kelvin = np.PyUFunc_FromFuncAndData(cephes1cpb_4_functions, kelvin_data, cephes_5b2_types, 2, 1, 4, PyUFunc_None, "kelvin", kelvin_doc, 0)
 * ber = np.PyUFunc_FromFuncAndData(cephes1_functions, ber_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ber", ber_doc, 0)             # <<<<<<<<<<<<<<
 * bei = np.PyUFunc_FromFuncAndData(cephes1_functions, bei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "bei", bei_doc, 0)
 * ker = np.PyUFunc_FromFuncAndData(cephes1_functions, ker_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ker", ker_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_239 = __site_cvt_int_954_99->Target(__site_cvt_int_954_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "ber_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_240 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_ber_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_239, __pyx_k__ber, __pyx_t_240, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "ber", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":955
 * kelvin = np.PyUFunc_FromFuncAndData(cephes1cpb_4_functions, kelvin_data, cephes_5b2_types, 2, 1, 4, PyUFunc_None, "kelvin", kelvin_doc, 0)
 * ber = np.PyUFunc_FromFuncAndData(cephes1_functions, ber_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ber", ber_doc, 0)
 * bei = np.PyUFunc_FromFuncAndData(cephes1_functions, bei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "bei", bei_doc, 0)             # <<<<<<<<<<<<<<
 * ker = np.PyUFunc_FromFuncAndData(cephes1_functions, ker_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ker", ker_doc, 0)
 * kei = np.PyUFunc_FromFuncAndData(cephes1_functions, kei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kei", kei_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_241 = __site_cvt_int_955_99->Target(__site_cvt_int_955_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "bei_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_242 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_bei_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_241, __pyx_k__bei, __pyx_t_242, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "bei", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":956
 * ber = np.PyUFunc_FromFuncAndData(cephes1_functions, ber_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ber", ber_doc, 0)
 * bei = np.PyUFunc_FromFuncAndData(cephes1_functions, bei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "bei", bei_doc, 0)
 * ker = np.PyUFunc_FromFuncAndData(cephes1_functions, ker_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ker", ker_doc, 0)             # <<<<<<<<<<<<<<
 * kei = np.PyUFunc_FromFuncAndData(cephes1_functions, kei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kei", kei_doc, 0)
 * berp = np.PyUFunc_FromFuncAndData(cephes1_functions, berp_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "berp", berp_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_243 = __site_cvt_int_956_99->Target(__site_cvt_int_956_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "ker_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_244 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_ker_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_243, __pyx_k__ker, __pyx_t_244, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "ker", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":957
 * bei = np.PyUFunc_FromFuncAndData(cephes1_functions, bei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "bei", bei_doc, 0)
 * ker = np.PyUFunc_FromFuncAndData(cephes1_functions, ker_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ker", ker_doc, 0)
 * kei = np.PyUFunc_FromFuncAndData(cephes1_functions, kei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kei", kei_doc, 0)             # <<<<<<<<<<<<<<
 * berp = np.PyUFunc_FromFuncAndData(cephes1_functions, berp_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "berp", berp_doc, 0)
 * beip = np.PyUFunc_FromFuncAndData(cephes1_functions, beip_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "beip", beip_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_245 = __site_cvt_int_957_99->Target(__site_cvt_int_957_99, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "kei_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_246 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_kei_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_245, __pyx_k__kei, __pyx_t_246, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "kei", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":958
 * ker = np.PyUFunc_FromFuncAndData(cephes1_functions, ker_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "ker", ker_doc, 0)
 * kei = np.PyUFunc_FromFuncAndData(cephes1_functions, kei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kei", kei_doc, 0)
 * berp = np.PyUFunc_FromFuncAndData(cephes1_functions, berp_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "berp", berp_doc, 0)             # <<<<<<<<<<<<<<
 * beip = np.PyUFunc_FromFuncAndData(cephes1_functions, beip_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "beip", beip_doc, 0)
 * kerp = np.PyUFunc_FromFuncAndData(cephes1_functions, kerp_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kerp", kerp_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_247 = __site_cvt_int_958_101->Target(__site_cvt_int_958_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "berp_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_248 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_berp_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_247, __pyx_k__berp, __pyx_t_248, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "berp", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":959
 * kei = np.PyUFunc_FromFuncAndData(cephes1_functions, kei_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kei", kei_doc, 0)
 * berp = np.PyUFunc_FromFuncAndData(cephes1_functions, berp_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "berp", berp_doc, 0)
 * beip = np.PyUFunc_FromFuncAndData(cephes1_functions, beip_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "beip", beip_doc, 0)             # <<<<<<<<<<<<<<
 * kerp = np.PyUFunc_FromFuncAndData(cephes1_functions, kerp_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kerp", kerp_doc, 0)
 * keip = np.PyUFunc_FromFuncAndData(cephes1_functions, keip_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "keip", keip_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_249 = __site_cvt_int_959_101->Target(__site_cvt_int_959_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "beip_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_250 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_beip_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_249, __pyx_k__beip, __pyx_t_250, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "beip", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":960
 * berp = np.PyUFunc_FromFuncAndData(cephes1_functions, berp_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "berp", berp_doc, 0)
 * beip = np.PyUFunc_FromFuncAndData(cephes1_functions, beip_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "beip", beip_doc, 0)
 * kerp = np.PyUFunc_FromFuncAndData(cephes1_functions, kerp_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kerp", kerp_doc, 0)             # <<<<<<<<<<<<<<
 * keip = np.PyUFunc_FromFuncAndData(cephes1_functions, keip_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "keip", keip_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_251 = __site_cvt_int_960_101->Target(__site_cvt_int_960_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "kerp_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_252 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_kerp_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_251, __pyx_k__kerp, __pyx_t_252, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "kerp", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":961
 * beip = np.PyUFunc_FromFuncAndData(cephes1_functions, beip_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "beip", beip_doc, 0)
 * kerp = np.PyUFunc_FromFuncAndData(cephes1_functions, kerp_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kerp", kerp_doc, 0)
 * keip = np.PyUFunc_FromFuncAndData(cephes1_functions, keip_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "keip", keip_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_253 = __site_cvt_int_961_101->Target(__site_cvt_int_961_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "keip_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_254 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_keip_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_253, __pyx_k__keip, __pyx_t_254, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "keip", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":964
 * 
 * 
 * zeta = np.PyUFunc_FromFuncAndData(cephes2_functions, zeta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "zeta", zeta_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * kolmogorov = np.PyUFunc_FromFuncAndData(cephes1_functions, kolmogorov_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kolmogorov", kolmogorov_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_255 = __site_cvt_int_964_101->Target(__site_cvt_int_964_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "zeta_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_256 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_zeta_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_255, __pyx_k__zeta, __pyx_t_256, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "zeta", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":966
 * zeta = np.PyUFunc_FromFuncAndData(cephes2_functions, zeta_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "zeta", zeta_doc, 0)
 * 
 * kolmogorov = np.PyUFunc_FromFuncAndData(cephes1_functions, kolmogorov_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kolmogorov", kolmogorov_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * kolmogi = np.PyUFunc_FromFuncAndData(cephes1_functions, kolmogi_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kolmogi", kolmogi_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_257 = __site_cvt_int_966_113->Target(__site_cvt_int_966_113, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "kolmogorov_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_258 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_kolmogorov_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_257, __pyx_k__kolmogorov, __pyx_t_258, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "kolmogorov", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":968
 * kolmogorov = np.PyUFunc_FromFuncAndData(cephes1_functions, kolmogorov_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kolmogorov", kolmogorov_doc, 0)
 * 
 * kolmogi = np.PyUFunc_FromFuncAndData(cephes1_functions, kolmogi_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kolmogi", kolmogi_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * wofz = np.PyUFunc_FromFuncAndData(cephes1c_functions, wofz_data, cephes_1c_types, 2, 1, 1, PyUFunc_None, "wofz", wofz_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_259 = __site_cvt_int_968_107->Target(__site_cvt_int_968_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "kolmogi_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_260 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_functions, __pyx_v_5scipy_7special_7_cephes_kolmogi_data, __pyx_v_5scipy_7special_7_cephes_cephes_2_types, 2, 1, 1, __pyx_t_259, __pyx_k__kolmogi, __pyx_t_260, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "kolmogi", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":970
 * kolmogi = np.PyUFunc_FromFuncAndData(cephes1_functions, kolmogi_data, cephes_2_types, 2, 1, 1, PyUFunc_None, "kolmogi", kolmogi_doc, 0)
 * 
 * wofz = np.PyUFunc_FromFuncAndData(cephes1c_functions, wofz_data, cephes_1c_types, 2, 1, 1, PyUFunc_None, "wofz", wofz_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * besselpoly = np.PyUFunc_FromFuncAndData(cephes3_functions, besselpoly_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "besselpoly", besselpoly_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_261 = __site_cvt_int_970_103->Target(__site_cvt_int_970_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "wofz_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_262 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1c_functions, __pyx_v_5scipy_7special_7_cephes_wofz_data, __pyx_v_5scipy_7special_7_cephes_cephes_1c_types, 2, 1, 1, __pyx_t_261, __pyx_k__wofz, __pyx_t_262, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "wofz", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":972
 * wofz = np.PyUFunc_FromFuncAndData(cephes1c_functions, wofz_data, cephes_1c_types, 2, 1, 1, PyUFunc_None, "wofz", wofz_doc, 0)
 * 
 * besselpoly = np.PyUFunc_FromFuncAndData(cephes3_functions, besselpoly_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "besselpoly", besselpoly_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * btdtria = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbet3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtria", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_263 = __site_cvt_int_972_113->Target(__site_cvt_int_972_113, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "besselpoly_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_264 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_besselpoly_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_263, __pyx_k__besselpoly, __pyx_t_264, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "besselpoly", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":974
 * besselpoly = np.PyUFunc_FromFuncAndData(cephes3_functions, besselpoly_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "besselpoly", besselpoly_doc, 0)
 * 
 * btdtria = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbet3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtria", "", 0)             # <<<<<<<<<<<<<<
 * btdtrib = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbet4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtrib", "", 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_265 = __site_cvt_int_974_107->Target(__site_cvt_int_974_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfbet3_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_265, __pyx_k__btdtria, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "btdtria", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":975
 * 
 * btdtria = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbet3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtria", "", 0)
 * btdtrib = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbet4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtrib", "", 0)             # <<<<<<<<<<<<<<
 * 
 * bdtrik = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbin2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrik", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_266 = __site_cvt_int_975_107->Target(__site_cvt_int_975_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfbet4_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_266, __pyx_k__btdtrib, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "btdtrib", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":977
 * btdtrib = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbet4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "btdtrib", "", 0)
 * 
 * bdtrik = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbin2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrik", "", 0)             # <<<<<<<<<<<<<<
 * bdtrin = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbin3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrin", "", 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_267 = __site_cvt_int_977_106->Target(__site_cvt_int_977_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfbin2_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_267, __pyx_k__bdtrik, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "bdtrik", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":978
 * 
 * bdtrik = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbin2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrik", "", 0)
 * bdtrin = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbin3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrin", "", 0)             # <<<<<<<<<<<<<<
 * 
 * chdtriv = np.PyUFunc_FromFuncAndData(cephes2_functions, cdfchi3_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtriv", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_268 = __site_cvt_int_978_106->Target(__site_cvt_int_978_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfbin3_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_268, __pyx_k__bdtrin, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "bdtrin", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":980
 * bdtrin = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfbin3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "bdtrin", "", 0)
 * 
 * chdtriv = np.PyUFunc_FromFuncAndData(cephes2_functions, cdfchi3_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "chdtriv", "", 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_269 = __site_cvt_int_980_107->Target(__site_cvt_int_980_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_cdfchi3_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_269, __pyx_k__chdtriv, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "chdtriv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":983
 * 
 * 
 * chndtr = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn1_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtr", "", 0)             # <<<<<<<<<<<<<<
 * chndtrix = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtrix", "", 0)
 * chndtridf = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtridf", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_270 = __site_cvt_int_983_106->Target(__site_cvt_int_983_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfchn1_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_270, __pyx_k__chndtr, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "chndtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":984
 * 
 * chndtr = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn1_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtr", "", 0)
 * chndtrix = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtrix", "", 0)             # <<<<<<<<<<<<<<
 * chndtridf = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtridf", "", 0)
 * chndtrinc = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtrinc", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_271 = __site_cvt_int_984_108->Target(__site_cvt_int_984_108, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfchn2_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_271, __pyx_k__chndtrix, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "chndtrix", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":985
 * chndtr = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn1_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtr", "", 0)
 * chndtrix = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtrix", "", 0)
 * chndtridf = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtridf", "", 0)             # <<<<<<<<<<<<<<
 * chndtrinc = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtrinc", "", 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_272 = __site_cvt_int_985_109->Target(__site_cvt_int_985_109, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfchn3_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_272, __pyx_k__chndtridf, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "chndtridf", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":986
 * chndtrix = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtrix", "", 0)
 * chndtridf = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtridf", "", 0)
 * chndtrinc = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtrinc", "", 0)             # <<<<<<<<<<<<<<
 * 
 * fdtridfd = np.PyUFunc_FromFuncAndData(cephes3_functions, cdff4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtridfd", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_273 = __site_cvt_int_986_109->Target(__site_cvt_int_986_109, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfchn4_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_273, __pyx_k__chndtrinc, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "chndtrinc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":988
 * chndtrinc = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfchn4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "chndtrinc", "", 0)
 * 
 * fdtridfd = np.PyUFunc_FromFuncAndData(cephes3_functions, cdff4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtridfd", "", 0)             # <<<<<<<<<<<<<<
 * 
 * ncfdtr = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc1_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtr", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_274 = __site_cvt_int_988_106->Target(__site_cvt_int_988_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdff4_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_274, __pyx_k__fdtridfd, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "fdtridfd", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":990
 * fdtridfd = np.PyUFunc_FromFuncAndData(cephes3_functions, cdff4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "fdtridfd", "", 0)
 * 
 * ncfdtr = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc1_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtr", "", 0)             # <<<<<<<<<<<<<<
 * ncfdtri = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc2_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtri", "", 0)
 * ncfdtridfn = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc3_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtridfn", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_275 = __site_cvt_int_990_106->Target(__site_cvt_int_990_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_functions, __pyx_v_5scipy_7special_7_cephes_cdffnc1_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 4, 1, __pyx_t_275, __pyx_k__ncfdtr, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "ncfdtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":991
 * 
 * ncfdtr = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc1_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtr", "", 0)
 * ncfdtri = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc2_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtri", "", 0)             # <<<<<<<<<<<<<<
 * ncfdtridfn = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc3_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtridfn", "", 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_276 = __site_cvt_int_991_107->Target(__site_cvt_int_991_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_functions, __pyx_v_5scipy_7special_7_cephes_cdffnc2_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 4, 1, __pyx_t_276, __pyx_k__ncfdtri, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "ncfdtri", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":992
 * ncfdtr = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc1_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtr", "", 0)
 * ncfdtri = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc2_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtri", "", 0)
 * ncfdtridfn = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc3_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtridfn", "", 0)             # <<<<<<<<<<<<<<
 * 
 * ncfdtridfd = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc4_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtridfd", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_277 = __site_cvt_int_992_110->Target(__site_cvt_int_992_110, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_functions, __pyx_v_5scipy_7special_7_cephes_cdffnc3_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 4, 1, __pyx_t_277, __pyx_k__ncfdtridfn, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "ncfdtridfn", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":994
 * ncfdtridfn = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc3_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtridfn", "", 0)
 * 
 * ncfdtridfd = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc4_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtridfd", "", 0)             # <<<<<<<<<<<<<<
 * ncfdtrinc = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc5_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtrinc", "", 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_278 = __site_cvt_int_994_110->Target(__site_cvt_int_994_110, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_functions, __pyx_v_5scipy_7special_7_cephes_cdffnc4_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 4, 1, __pyx_t_278, __pyx_k__ncfdtridfd, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "ncfdtridfd", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":995
 * 
 * ncfdtridfd = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc4_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtridfd", "", 0)
 * ncfdtrinc = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc5_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtrinc", "", 0)             # <<<<<<<<<<<<<<
 * 
 * gdtrix = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrix", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_279 = __site_cvt_int_995_109->Target(__site_cvt_int_995_109, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_functions, __pyx_v_5scipy_7special_7_cephes_cdffnc5_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 4, 1, __pyx_t_279, __pyx_k__ncfdtrinc, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "ncfdtrinc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":997
 * ncfdtrinc = np.PyUFunc_FromFuncAndData(cephes4_functions, cdffnc5_data, cephes_5_types, 2, 4, 1, PyUFunc_None, "ncfdtrinc", "", 0)
 * 
 * gdtrix = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrix", "", 0)             # <<<<<<<<<<<<<<
 * gdtrib = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrib", "", 0)
 * gdtria = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtria", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_280 = __site_cvt_int_997_106->Target(__site_cvt_int_997_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfgam2_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_280, __pyx_k__gdtrix, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "gdtrix", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":998
 * 
 * gdtrix = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrix", "", 0)
 * gdtrib = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrib", "", 0)             # <<<<<<<<<<<<<<
 * gdtria = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtria", "", 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_281 = __site_cvt_int_998_106->Target(__site_cvt_int_998_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfgam3_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_281, __pyx_k__gdtrib, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "gdtrib", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":999
 * gdtrix = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrix", "", 0)
 * gdtrib = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtrib", "", 0)
 * gdtria = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtria", "", 0)             # <<<<<<<<<<<<<<
 * 
 * nbdtrik = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnbn2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrik", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_282 = __site_cvt_int_999_106->Target(__site_cvt_int_999_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfgam4_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_282, __pyx_k__gdtria, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "gdtria", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1001
 * gdtria = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfgam4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "gdtria", "", 0)
 * 
 * nbdtrik = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnbn2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrik", "", 0)             # <<<<<<<<<<<<<<
 * nbdtrin = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnbn3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrin", "", 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_283 = __site_cvt_int_1001_107->Target(__site_cvt_int_1001_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfnbn2_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_283, __pyx_k__nbdtrik, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "nbdtrik", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1002
 * 
 * nbdtrik = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnbn2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrik", "", 0)
 * nbdtrin = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnbn3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrin", "", 0)             # <<<<<<<<<<<<<<
 * 
 * nrdtrimn = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnor3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nrdtrimn", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_284 = __site_cvt_int_1002_107->Target(__site_cvt_int_1002_107, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfnbn3_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_284, __pyx_k__nbdtrin, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "nbdtrin", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1004
 * nbdtrin = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnbn3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nbdtrin", "", 0)
 * 
 * nrdtrimn = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnor3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nrdtrimn", "", 0)             # <<<<<<<<<<<<<<
 * nrdtrisd = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnor4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nrdtrisd", "", 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_285 = __site_cvt_int_1004_108->Target(__site_cvt_int_1004_108, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfnor3_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_285, __pyx_k__nrdtrimn, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "nrdtrimn", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1005
 * 
 * nrdtrimn = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnor3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nrdtrimn", "", 0)
 * nrdtrisd = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnor4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nrdtrisd", "", 0)             # <<<<<<<<<<<<<<
 * 
 * pdtrik = np.PyUFunc_FromFuncAndData(cephes2_functions, cdfpoi2_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtrik", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_286 = __site_cvt_int_1005_108->Target(__site_cvt_int_1005_108, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdfnor4_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_286, __pyx_k__nrdtrisd, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "nrdtrisd", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1007
 * nrdtrisd = np.PyUFunc_FromFuncAndData(cephes3_functions, cdfnor4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nrdtrisd", "", 0)
 * 
 * pdtrik = np.PyUFunc_FromFuncAndData(cephes2_functions, cdfpoi2_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtrik", "", 0)             # <<<<<<<<<<<<<<
 * 
 * stdtr = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft1_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtr", stdtr_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_287 = __site_cvt_int_1007_106->Target(__site_cvt_int_1007_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_cdfpoi2_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_287, __pyx_k__pdtrik, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "pdtrik", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1009
 * pdtrik = np.PyUFunc_FromFuncAndData(cephes2_functions, cdfpoi2_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "pdtrik", "", 0)
 * 
 * stdtr = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft1_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtr", stdtr_doc, 0)             # <<<<<<<<<<<<<<
 * stdtrit = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft2_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtrit", stdtrit_doc, 0)
 * stdtridf = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft3_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtridf", stdtridf_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_288 = __site_cvt_int_1009_103->Target(__site_cvt_int_1009_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "stdtr_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_289 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_cdft1_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_288, __pyx_k__stdtr, __pyx_t_289, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "stdtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1010
 * 
 * stdtr = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft1_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtr", stdtr_doc, 0)
 * stdtrit = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft2_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtrit", stdtrit_doc, 0)             # <<<<<<<<<<<<<<
 * stdtridf = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft3_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtridf", stdtridf_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_290 = __site_cvt_int_1010_105->Target(__site_cvt_int_1010_105, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "stdtrit_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_291 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_cdft2_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_290, __pyx_k__stdtrit, __pyx_t_291, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "stdtrit", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1011
 * stdtr = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft1_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtr", stdtr_doc, 0)
 * stdtrit = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft2_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtrit", stdtrit_doc, 0)
 * stdtridf = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft3_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtridf", stdtridf_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * nctdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc1_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtr", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_292 = __site_cvt_int_1011_106->Target(__site_cvt_int_1011_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "stdtridf_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_293 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_cdft3_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_292, __pyx_k__stdtridf, __pyx_t_293, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "stdtridf", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1013
 * stdtridf = np.PyUFunc_FromFuncAndData(cephes2_functions, cdft3_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "stdtridf", stdtridf_doc, 0)
 * 
 * nctdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc1_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtr", "", 0)             # <<<<<<<<<<<<<<
 * nctdtrit = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtrit", "", 0)
 * nctdtridf = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtridf", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_294 = __site_cvt_int_1013_106->Target(__site_cvt_int_1013_106, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdftnc1_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_294, __pyx_k__nctdtr, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "nctdtr", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1014
 * 
 * nctdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc1_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtr", "", 0)
 * nctdtrit = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtrit", "", 0)             # <<<<<<<<<<<<<<
 * nctdtridf = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtridf", "", 0)
 * nctdtrinc = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtrinc", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_295 = __site_cvt_int_1014_108->Target(__site_cvt_int_1014_108, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdftnc2_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_295, __pyx_k__nctdtrit, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "nctdtrit", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1015
 * nctdtr = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc1_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtr", "", 0)
 * nctdtrit = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtrit", "", 0)
 * nctdtridf = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtridf", "", 0)             # <<<<<<<<<<<<<<
 * nctdtrinc = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtrinc", "", 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_296 = __site_cvt_int_1015_109->Target(__site_cvt_int_1015_109, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdftnc3_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_296, __pyx_k__nctdtridf, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "nctdtridf", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1016
 * nctdtrit = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc2_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtrit", "", 0)
 * nctdtridf = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc3_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtridf", "", 0)
 * nctdtrinc = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtrinc", "", 0)             # <<<<<<<<<<<<<<
 * 
 * tklmbda = np.PyUFunc_FromFuncAndData(cephes2_functions, tklambda_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "tklmbda", "", 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_297 = __site_cvt_int_1016_109->Target(__site_cvt_int_1016_109, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_cdftnc4_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_297, __pyx_k__nctdtrinc, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "nctdtrinc", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1018
 * nctdtrinc = np.PyUFunc_FromFuncAndData(cephes3_functions, cdftnc4_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "nctdtrinc", "", 0)
 * 
 * tklmbda = np.PyUFunc_FromFuncAndData(cephes2_functions, tklambda_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "tklmbda", "", 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_298 = __site_cvt_int_1018_108->Target(__site_cvt_int_1018_108, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_tklambda_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_298, __pyx_k__tklmbda, __pyx_k_1, 0); 
  PythonOps::SetGlobal(__pyx_context, "tklmbda", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1021
 * 
 * 
 * mathieu_a = np.PyUFunc_FromFuncAndData(cephes2_functions, mathieu_a_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "mathieu_a", mathieu_a_doc, 0)             # <<<<<<<<<<<<<<
 * mathieu_b = np.PyUFunc_FromFuncAndData(cephes2_functions, mathieu_b_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "mathieu_b", mathieu_b_doc, 0)
 * mathieu_cem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_cem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_cem", mathieu_cem_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_299 = __site_cvt_int_1021_111->Target(__site_cvt_int_1021_111, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "mathieu_a_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_300 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_mathieu_a_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_299, __pyx_k__mathieu_a, __pyx_t_300, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "mathieu_a", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1022
 * 
 * mathieu_a = np.PyUFunc_FromFuncAndData(cephes2_functions, mathieu_a_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "mathieu_a", mathieu_a_doc, 0)
 * mathieu_b = np.PyUFunc_FromFuncAndData(cephes2_functions, mathieu_b_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "mathieu_b", mathieu_b_doc, 0)             # <<<<<<<<<<<<<<
 * mathieu_cem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_cem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_cem", mathieu_cem_doc, 0)
 * mathieu_sem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_sem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_sem", mathieu_sem_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_301 = __site_cvt_int_1022_111->Target(__site_cvt_int_1022_111, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "mathieu_b_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_302 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_functions, __pyx_v_5scipy_7special_7_cephes_mathieu_b_data, __pyx_v_5scipy_7special_7_cephes_cephes_3_types, 2, 2, 1, __pyx_t_301, __pyx_k__mathieu_b, __pyx_t_302, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "mathieu_b", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1023
 * mathieu_a = np.PyUFunc_FromFuncAndData(cephes2_functions, mathieu_a_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "mathieu_a", mathieu_a_doc, 0)
 * mathieu_b = np.PyUFunc_FromFuncAndData(cephes2_functions, mathieu_b_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "mathieu_b", mathieu_b_doc, 0)
 * mathieu_cem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_cem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_cem", mathieu_cem_doc, 0)             # <<<<<<<<<<<<<<
 * mathieu_sem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_sem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_sem", mathieu_sem_doc, 0)
 * mathieu_modcem1 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem1_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem1", mathieu_modcem1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_303 = __site_cvt_int_1023_117->Target(__site_cvt_int_1023_117, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "mathieu_cem_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_304 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_2_functions, __pyx_v_5scipy_7special_7_cephes_mathieu_cem_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 3, 2, __pyx_t_303, __pyx_k__mathieu_cem, __pyx_t_304, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "mathieu_cem", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1024
 * mathieu_b = np.PyUFunc_FromFuncAndData(cephes2_functions, mathieu_b_data, cephes_3_types, 2, 2, 1, PyUFunc_None, "mathieu_b", mathieu_b_doc, 0)
 * mathieu_cem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_cem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_cem", mathieu_cem_doc, 0)
 * mathieu_sem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_sem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_sem", mathieu_sem_doc, 0)             # <<<<<<<<<<<<<<
 * mathieu_modcem1 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem1_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem1", mathieu_modcem1_doc, 0)
 * mathieu_modcem2 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem2_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem2", mathieu_modcem2_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_305 = __site_cvt_int_1024_117->Target(__site_cvt_int_1024_117, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "mathieu_sem_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_306 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_2_functions, __pyx_v_5scipy_7special_7_cephes_mathieu_sem_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 3, 2, __pyx_t_305, __pyx_k__mathieu_sem, __pyx_t_306, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "mathieu_sem", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1025
 * mathieu_cem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_cem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_cem", mathieu_cem_doc, 0)
 * mathieu_sem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_sem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_sem", mathieu_sem_doc, 0)
 * mathieu_modcem1 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem1_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem1", mathieu_modcem1_doc, 0)             # <<<<<<<<<<<<<<
 * mathieu_modcem2 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem2_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem2", mathieu_modcem2_doc, 0)
 * mathieu_modsem1 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_msem1_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modsem1", mathieu_modsem1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_307 = __site_cvt_int_1025_123->Target(__site_cvt_int_1025_123, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "mathieu_modcem1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_308 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_2_functions, __pyx_v_5scipy_7special_7_cephes_mathieu_mcem1_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 3, 2, __pyx_t_307, __pyx_k__mathieu_modcem1, __pyx_t_308, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "mathieu_modcem1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1026
 * mathieu_sem = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_sem_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_sem", mathieu_sem_doc, 0)
 * mathieu_modcem1 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem1_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem1", mathieu_modcem1_doc, 0)
 * mathieu_modcem2 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem2_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem2", mathieu_modcem2_doc, 0)             # <<<<<<<<<<<<<<
 * mathieu_modsem1 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_msem1_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modsem1", mathieu_modsem1_doc, 0)
 * mathieu_modsem2 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_msem2_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modsem2", mathieu_modsem2_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_309 = __site_cvt_int_1026_123->Target(__site_cvt_int_1026_123, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "mathieu_modcem2_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_310 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_2_functions, __pyx_v_5scipy_7special_7_cephes_mathieu_mcem2_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 3, 2, __pyx_t_309, __pyx_k__mathieu_modcem2, __pyx_t_310, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "mathieu_modcem2", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1027
 * mathieu_modcem1 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem1_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem1", mathieu_modcem1_doc, 0)
 * mathieu_modcem2 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem2_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem2", mathieu_modcem2_doc, 0)
 * mathieu_modsem1 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_msem1_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modsem1", mathieu_modsem1_doc, 0)             # <<<<<<<<<<<<<<
 * mathieu_modsem2 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_msem2_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modsem2", mathieu_modsem2_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_311 = __site_cvt_int_1027_123->Target(__site_cvt_int_1027_123, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "mathieu_modsem1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_312 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_2_functions, __pyx_v_5scipy_7special_7_cephes_mathieu_msem1_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 3, 2, __pyx_t_311, __pyx_k__mathieu_modsem1, __pyx_t_312, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "mathieu_modsem1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1028
 * mathieu_modcem2 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_mcem2_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modcem2", mathieu_modcem2_doc, 0)
 * mathieu_modsem1 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_msem1_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modsem1", mathieu_modsem1_doc, 0)
 * mathieu_modsem2 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_msem2_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modsem2", mathieu_modsem2_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * lpmv = np.PyUFunc_FromFuncAndData(cephes3_functions, lpmv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "lpmv", lpmv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_313 = __site_cvt_int_1028_123->Target(__site_cvt_int_1028_123, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "mathieu_modsem2_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_314 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_2_functions, __pyx_v_5scipy_7special_7_cephes_mathieu_msem2_data, __pyx_v_5scipy_7special_7_cephes_cephes_5_types, 2, 3, 2, __pyx_t_313, __pyx_k__mathieu_modsem2, __pyx_t_314, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "mathieu_modsem2", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1030
 * mathieu_modsem2 = np.PyUFunc_FromFuncAndData(cephes3_2_functions, mathieu_msem2_data, cephes_5_types, 2, 3, 2, PyUFunc_None, "mathieu_modsem2", mathieu_modsem2_doc, 0)
 * 
 * lpmv = np.PyUFunc_FromFuncAndData(cephes3_functions, lpmv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "lpmv", lpmv_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * pbwa = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbwa_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbwa", pbwa_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_315 = __site_cvt_int_1030_101->Target(__site_cvt_int_1030_101, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "lpmv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_316 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_lpmv_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_315, __pyx_k__lpmv, __pyx_t_316, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "lpmv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1032
 * lpmv = np.PyUFunc_FromFuncAndData(cephes3_functions, lpmv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "lpmv", lpmv_doc, 0)
 * 
 * pbwa = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbwa_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbwa", pbwa_doc, 0)             # <<<<<<<<<<<<<<
 * pbdv = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbdv_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbdv", pbdv_doc, 0)
 * pbvv = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbvv_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbvv", pbvv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_317 = __site_cvt_int_1032_103->Target(__site_cvt_int_1032_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pbwa_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_318 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_2_functions, __pyx_v_5scipy_7special_7_cephes_pbwa_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 2, 2, __pyx_t_317, __pyx_k__pbwa, __pyx_t_318, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pbwa", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1033
 * 
 * pbwa = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbwa_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbwa", pbwa_doc, 0)
 * pbdv = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbdv_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbdv", pbdv_doc, 0)             # <<<<<<<<<<<<<<
 * pbvv = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbvv_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbvv", pbvv_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_319 = __site_cvt_int_1033_103->Target(__site_cvt_int_1033_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pbdv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_320 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_2_functions, __pyx_v_5scipy_7special_7_cephes_pbdv_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 2, 2, __pyx_t_319, __pyx_k__pbdv, __pyx_t_320, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pbdv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1034
 * pbwa = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbwa_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbwa", pbwa_doc, 0)
 * pbdv = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbdv_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbdv", pbdv_doc, 0)
 * pbvv = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbvv_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbvv", pbvv_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * pro_cv = np.PyUFunc_FromFuncAndData(cephes3_functions, prolate_segv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "pro_cv", pro_cv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_321 = __site_cvt_int_1034_103->Target(__site_cvt_int_1034_103, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pbvv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_322 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes2_2_functions, __pyx_v_5scipy_7special_7_cephes_pbvv_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 2, 2, __pyx_t_321, __pyx_k__pbvv, __pyx_t_322, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pbvv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1036
 * pbvv = np.PyUFunc_FromFuncAndData(cephes2_2_functions, pbvv_data, cephes_4_types, 2, 2, 2, PyUFunc_None, "pbvv", pbvv_doc, 0)
 * 
 * pro_cv = np.PyUFunc_FromFuncAndData(cephes3_functions, prolate_segv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "pro_cv", pro_cv_doc, 0)             # <<<<<<<<<<<<<<
 * obl_cv = np.PyUFunc_FromFuncAndData(cephes3_functions, oblate_segv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "obl_cv", obl_cv_doc, 0)
 * pro_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_ang1_cv", pro_ang1_cv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_323 = __site_cvt_int_1036_111->Target(__site_cvt_int_1036_111, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pro_cv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_324 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_prolate_segv_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_323, __pyx_k__pro_cv, __pyx_t_324, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pro_cv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1037
 * 
 * pro_cv = np.PyUFunc_FromFuncAndData(cephes3_functions, prolate_segv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "pro_cv", pro_cv_doc, 0)
 * obl_cv = np.PyUFunc_FromFuncAndData(cephes3_functions, oblate_segv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "obl_cv", obl_cv_doc, 0)             # <<<<<<<<<<<<<<
 * pro_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_ang1_cv", pro_ang1_cv_doc, 0)
 * pro_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad1_cv", pro_rad1_cv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_325 = __site_cvt_int_1037_110->Target(__site_cvt_int_1037_110, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "obl_cv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_326 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes3_functions, __pyx_v_5scipy_7special_7_cephes_oblate_segv_data, __pyx_v_5scipy_7special_7_cephes_cephes_4_types, 2, 3, 1, __pyx_t_325, __pyx_k__obl_cv, __pyx_t_326, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "obl_cv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1038
 * pro_cv = np.PyUFunc_FromFuncAndData(cephes3_functions, prolate_segv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "pro_cv", pro_cv_doc, 0)
 * obl_cv = np.PyUFunc_FromFuncAndData(cephes3_functions, oblate_segv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "obl_cv", obl_cv_doc, 0)
 * pro_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_ang1_cv", pro_ang1_cv_doc, 0)             # <<<<<<<<<<<<<<
 * pro_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad1_cv", pro_rad1_cv_doc, 0)
 * pro_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad2_cv", pro_rad2_cv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_327 = __site_cvt_int_1038_119->Target(__site_cvt_int_1038_119, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pro_ang1_cv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_328 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes5_2_functions, __pyx_v_5scipy_7special_7_cephes_prolate_aswfa_data, __pyx_v_5scipy_7special_7_cephes_cephes_7_types, 2, 5, 2, __pyx_t_327, __pyx_k__pro_ang1_cv, __pyx_t_328, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pro_ang1_cv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1039
 * obl_cv = np.PyUFunc_FromFuncAndData(cephes3_functions, oblate_segv_data, cephes_4_types, 2, 3, 1, PyUFunc_None, "obl_cv", obl_cv_doc, 0)
 * pro_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_ang1_cv", pro_ang1_cv_doc, 0)
 * pro_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad1_cv", pro_rad1_cv_doc, 0)             # <<<<<<<<<<<<<<
 * pro_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad2_cv", pro_rad2_cv_doc, 0)
 * obl_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_ang1_cv", obl_ang1_cv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_329 = __site_cvt_int_1039_121->Target(__site_cvt_int_1039_121, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pro_rad1_cv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_330 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes5_2_functions, __pyx_v_5scipy_7special_7_cephes_prolate_radial1_data, __pyx_v_5scipy_7special_7_cephes_cephes_7_types, 2, 5, 2, __pyx_t_329, __pyx_k__pro_rad1_cv, __pyx_t_330, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pro_rad1_cv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1040
 * pro_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_ang1_cv", pro_ang1_cv_doc, 0)
 * pro_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad1_cv", pro_rad1_cv_doc, 0)
 * pro_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad2_cv", pro_rad2_cv_doc, 0)             # <<<<<<<<<<<<<<
 * obl_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_ang1_cv", obl_ang1_cv_doc, 0)
 * obl_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad1_cv", obl_rad1_cv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_331 = __site_cvt_int_1040_121->Target(__site_cvt_int_1040_121, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pro_rad2_cv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_332 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes5_2_functions, __pyx_v_5scipy_7special_7_cephes_prolate_radial2_data, __pyx_v_5scipy_7special_7_cephes_cephes_7_types, 2, 5, 2, __pyx_t_331, __pyx_k__pro_rad2_cv, __pyx_t_332, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pro_rad2_cv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1041
 * pro_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad1_cv", pro_rad1_cv_doc, 0)
 * pro_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad2_cv", pro_rad2_cv_doc, 0)
 * obl_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_ang1_cv", obl_ang1_cv_doc, 0)             # <<<<<<<<<<<<<<
 * obl_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad1_cv", obl_rad1_cv_doc, 0)
 * obl_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad2_cv", obl_rad2_cv_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_333 = __site_cvt_int_1041_118->Target(__site_cvt_int_1041_118, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "obl_ang1_cv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_334 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes5_2_functions, __pyx_v_5scipy_7special_7_cephes_oblate_aswfa_data, __pyx_v_5scipy_7special_7_cephes_cephes_7_types, 2, 5, 2, __pyx_t_333, __pyx_k__obl_ang1_cv, __pyx_t_334, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "obl_ang1_cv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1042
 * pro_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, prolate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "pro_rad2_cv", pro_rad2_cv_doc, 0)
 * obl_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_ang1_cv", obl_ang1_cv_doc, 0)
 * obl_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad1_cv", obl_rad1_cv_doc, 0)             # <<<<<<<<<<<<<<
 * obl_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad2_cv", obl_rad2_cv_doc, 0)
 * pro_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_ang1", pro_ang1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_335 = __site_cvt_int_1042_120->Target(__site_cvt_int_1042_120, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "obl_rad1_cv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_336 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes5_2_functions, __pyx_v_5scipy_7special_7_cephes_oblate_radial1_data, __pyx_v_5scipy_7special_7_cephes_cephes_7_types, 2, 5, 2, __pyx_t_335, __pyx_k__obl_rad1_cv, __pyx_t_336, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "obl_rad1_cv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1043
 * obl_ang1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_aswfa_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_ang1_cv", obl_ang1_cv_doc, 0)
 * obl_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad1_cv", obl_rad1_cv_doc, 0)
 * obl_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad2_cv", obl_rad2_cv_doc, 0)             # <<<<<<<<<<<<<<
 * pro_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_ang1", pro_ang1_doc, 0)
 * pro_rad1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial1_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad1", pro_rad1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_337 = __site_cvt_int_1043_120->Target(__site_cvt_int_1043_120, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "obl_rad2_cv_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_338 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes5_2_functions, __pyx_v_5scipy_7special_7_cephes_oblate_radial2_data, __pyx_v_5scipy_7special_7_cephes_cephes_7_types, 2, 5, 2, __pyx_t_337, __pyx_k__obl_rad2_cv, __pyx_t_338, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "obl_rad2_cv", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1044
 * obl_rad1_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial1_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad1_cv", obl_rad1_cv_doc, 0)
 * obl_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad2_cv", obl_rad2_cv_doc, 0)
 * pro_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_ang1", pro_ang1_doc, 0)             # <<<<<<<<<<<<<<
 * pro_rad1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial1_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad1", pro_rad1_doc, 0)
 * pro_rad2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial2_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad2", pro_rad2_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_339 = __site_cvt_int_1044_121->Target(__site_cvt_int_1044_121, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pro_ang1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_340 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_2_functions, __pyx_v_5scipy_7special_7_cephes_prolate_aswfa_nocv_data, __pyx_v_5scipy_7special_7_cephes_cephes_6_types, 2, 4, 2, __pyx_t_339, __pyx_k__pro_ang1, __pyx_t_340, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pro_ang1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1045
 * obl_rad2_cv = np.PyUFunc_FromFuncAndData(cephes5_2_functions, oblate_radial2_data, cephes_7_types, 2, 5, 2, PyUFunc_None, "obl_rad2_cv", obl_rad2_cv_doc, 0)
 * pro_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_ang1", pro_ang1_doc, 0)
 * pro_rad1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial1_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad1", pro_rad1_doc, 0)             # <<<<<<<<<<<<<<
 * pro_rad2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial2_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad2", pro_rad2_doc, 0)
 * obl_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_ang1", obl_ang1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_341 = __site_cvt_int_1045_123->Target(__site_cvt_int_1045_123, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pro_rad1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_342 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_2_functions, __pyx_v_5scipy_7special_7_cephes_prolate_radial1_nocv_data, __pyx_v_5scipy_7special_7_cephes_cephes_6_types, 2, 4, 2, __pyx_t_341, __pyx_k__pro_rad1, __pyx_t_342, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pro_rad1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1046
 * pro_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_ang1", pro_ang1_doc, 0)
 * pro_rad1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial1_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad1", pro_rad1_doc, 0)
 * pro_rad2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial2_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad2", pro_rad2_doc, 0)             # <<<<<<<<<<<<<<
 * obl_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_ang1", obl_ang1_doc, 0)
 * obl_rad1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_radial1_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_rad1", obl_rad1_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_343 = __site_cvt_int_1046_123->Target(__site_cvt_int_1046_123, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "pro_rad2_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_344 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_2_functions, __pyx_v_5scipy_7special_7_cephes_prolate_radial2_nocv_data, __pyx_v_5scipy_7special_7_cephes_cephes_6_types, 2, 4, 2, __pyx_t_343, __pyx_k__pro_rad2, __pyx_t_344, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "pro_rad2", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1047
 * pro_rad1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial1_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad1", pro_rad1_doc, 0)
 * pro_rad2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial2_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad2", pro_rad2_doc, 0)
 * obl_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_ang1", obl_ang1_doc, 0)             # <<<<<<<<<<<<<<
 * obl_rad1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_radial1_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_rad1", obl_rad1_doc, 0)
 * obl_rad2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_radial2_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_rad2", obl_rad2_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_345 = __site_cvt_int_1047_120->Target(__site_cvt_int_1047_120, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "obl_ang1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_346 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_2_functions, __pyx_v_5scipy_7special_7_cephes_oblate_aswfa_nocv_data, __pyx_v_5scipy_7special_7_cephes_cephes_6_types, 2, 4, 2, __pyx_t_345, __pyx_k__obl_ang1, __pyx_t_346, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "obl_ang1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1048
 * pro_rad2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, prolate_radial2_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "pro_rad2", pro_rad2_doc, 0)
 * obl_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_ang1", obl_ang1_doc, 0)
 * obl_rad1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_radial1_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_rad1", obl_rad1_doc, 0)             # <<<<<<<<<<<<<<
 * obl_rad2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_radial2_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_rad2", obl_rad2_doc, 0)
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_347 = __site_cvt_int_1048_122->Target(__site_cvt_int_1048_122, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "obl_rad1_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_348 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_2_functions, __pyx_v_5scipy_7special_7_cephes_oblate_radial1_nocv_data, __pyx_v_5scipy_7special_7_cephes_cephes_6_types, 2, 4, 2, __pyx_t_347, __pyx_k__obl_rad1, __pyx_t_348, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "obl_rad1", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1049
 * obl_ang1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_aswfa_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_ang1", obl_ang1_doc, 0)
 * obl_rad1 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_radial1_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_rad1", obl_rad1_doc, 0)
 * obl_rad2 = np.PyUFunc_FromFuncAndData(cephes4_2_functions, oblate_radial2_nocv_data, cephes_6_types, 2, 4, 2, PyUFunc_None, "obl_rad2", obl_rad2_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_349 = __site_cvt_int_1049_122->Target(__site_cvt_int_1049_122, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "obl_rad2_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_350 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes4_2_functions, __pyx_v_5scipy_7special_7_cephes_oblate_radial2_nocv_data, __pyx_v_5scipy_7special_7_cephes_cephes_6_types, 2, 4, 2, __pyx_t_349, __pyx_k__obl_rad2, __pyx_t_350, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "obl_rad2", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1053
 * 
 * 
 * modfresnelp = np.PyUFunc_FromFuncAndData(cephes1_2c_functions, modfresnelp_data, cephes_3cp_types, 2, 1, 2, PyUFunc_None, "modfresnelp", modfresnelp_doc, 0)             # <<<<<<<<<<<<<<
 * 
 * modfresnelm = np.PyUFunc_FromFuncAndData(cephes1_2c_functions, modfresnelm_data, cephes_3cp_types, 2, 1, 2, PyUFunc_None, "modfresnelm", modfresnelm_doc, 0)
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_351 = __site_cvt_int_1053_120->Target(__site_cvt_int_1053_120, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "modfresnelp_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_352 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_2c_functions, __pyx_v_5scipy_7special_7_cephes_modfresnelp_data, __pyx_v_5scipy_7special_7_cephes_cephes_3cp_types, 2, 1, 2, __pyx_t_351, __pyx_k__modfresnelp, __pyx_t_352, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "modfresnelp", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1055
 * modfresnelp = np.PyUFunc_FromFuncAndData(cephes1_2c_functions, modfresnelp_data, cephes_3cp_types, 2, 1, 2, PyUFunc_None, "modfresnelp", modfresnelp_doc, 0)
 * 
 * modfresnelm = np.PyUFunc_FromFuncAndData(cephes1_2c_functions, modfresnelm_data, cephes_3cp_types, 2, 1, 2, PyUFunc_None, "modfresnelm", modfresnelm_doc, 0)             # <<<<<<<<<<<<<<
 */
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "PyUFunc_None");
  __pyx_t_353 = __site_cvt_int_1055_120->Target(__site_cvt_int_1055_120, __pyx_t_17);
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PythonOps::GetGlobal(__pyx_context, "modfresnelm_doc");
  __pyx_t_24 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_t_17));
  __pyx_t_354 = static_cast<char *>(__pyx_t_24.ToPointer());
  __pyx_t_17 = nullptr;
  __pyx_t_17 = PyUFunc_FromFuncAndData(__pyx_v_5scipy_7special_7_cephes_cephes1_2c_functions, __pyx_v_5scipy_7special_7_cephes_modfresnelm_data, __pyx_v_5scipy_7special_7_cephes_cephes_3cp_types, 2, 1, 2, __pyx_t_353, __pyx_k__modfresnelm, __pyx_t_354, 0); 
  InteropServices::Marshal::FreeHGlobal(__pyx_t_24);
  PythonOps::SetGlobal(__pyx_context, "modfresnelm", __pyx_t_17);
  __pyx_t_17 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\special\_cephes.pyx":1
 * cdef extern from "stdlib.h" nogil:             # <<<<<<<<<<<<<<
 *     void *malloc(size_t size)
 * 
 */
  __pyx_t_17 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_17));
  __pyx_t_17 = nullptr;

  /* "../cython/include\numpy.pxd":227
 *     return obj.ndim
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 */
}
/* Cython code section 'cleanup_globals' */
/* Cython code section 'cleanup_module' */
/* Cython code section 'main_method' */
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
[assembly: PythonModule("scipy__special___cephes", module__cephes::typeid)];
};
