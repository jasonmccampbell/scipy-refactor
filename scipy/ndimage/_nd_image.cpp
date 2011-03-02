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
  dict["__module__"] = "scipy.ndimage._nd_image";
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
#define __PYX_HAVE_API__scipy__ndimage___nd_image
#include "stdlib.h"
#include "npy_defs.h"
#include "npy_cython_macros.h"
#include "npy_common.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "cb_helper.h"
#include "src/ni_support.h"
#include "src/ni_filters.h"
#include "src/ni_fourier.h"
#include "src/ni_interpolation.h"
#include "src/ni_measure.h"
#include "src/ni_morphology.h"

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

typedef npy_cfloat __pyx_t_5numpy_cfloat_t;

typedef npy_cdouble __pyx_t_5numpy_cdouble_t;

typedef npy_clongdouble __pyx_t_5numpy_clongdouble_t;

typedef npy_cdouble __pyx_t_5numpy_complex_t;
/* Cython code section 'utility_code_proto' */

/* Run-time type information about structs used with buffers */
struct __Pyx_StructField_;

typedef struct {
  const char* name; /* for error messages only */
  struct __Pyx_StructField_* fields;
  size_t size;     /* sizeof(type) */
  char typegroup; /* _R_eal, _C_omplex, Signed _I_nt, _U_nsigned int, _S_truct, _P_ointer, _O_bject */
} __Pyx_TypeInfo;

typedef struct __Pyx_StructField_ {
  __Pyx_TypeInfo* type;
  const char* name;
  size_t offset;
} __Pyx_StructField;

typedef struct {
  __Pyx_StructField* field;
  size_t parent_offset;
} __Pyx_BufFmt_StackElem;


static CYTHON_INLINE void  __Pyx_GetBufferAndValidate(NumpyDotNet::IExtBufferProtocol^& buf, System::Object^ obj, __Pyx_TypeInfo* dtype, int flags, int nd, int cast, __Pyx_BufFmt_StackElem* stack);
static CYTHON_INLINE void __Pyx_SafeReleaseBuffer(NumpyDotNet::IExtBufferProtocol^ info);
static void __Pyx_GetBuffer(System::Object^ obj, NumpyDotNet::IExtBufferProtocol^& view, int flags);
static void __Pyx_ReleaseBuffer(NumpyDotNet::IExtBufferProtocol^ view);

Py_ssize_t __Pyx_zeros[] = {0};
Py_ssize_t __Pyx_minusones[] = {-1};

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
static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_ZEROS(int, __pyx_t_5numpy_intp_t *, int, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_EMPTY(int, __pyx_t_5numpy_intp_t *, int, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Empty(int, __pyx_t_5numpy_npy_intp *, NumpyDotNet::dtype^, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *); /*proto*/
static CYTHON_INLINE int PyArray_CHKFLAGS(NumpyDotNet::ndarray^, int); /*proto*/
static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE NpyArray *PyArray_ARRAY(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_FromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_FROMANY(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_CheckFromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Check(System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^); /*proto*/
static CYTHON_INLINE void import_array(void); /*proto*/
/* Module declarations from scipy.ndimage._nd_image */
static CYTHON_INLINE NpyArray *ARRAY(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE NumpyDotNet::dtype^ DescrFromType(int); /*proto*/
static CYTHON_INLINE NumpyDotNet::dtype^ DESCR(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE System::Object^ incref(System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ is_callable(System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ CheckFromAny(System::Object^, NumpyDotNet::dtype^, int, int, int, System::Object^); /*proto*/
static CYTHON_INLINE NumpyDotNet::ndarray^ Empty(int, npy_intp *, NumpyDotNet::dtype^, int); /*proto*/
static CYTHON_INLINE NumpyDotNet::ndarray^ array_New(int, npy_intp *, int, npy_intp *, char *, int, int); /*proto*/
static int satisfies(NpyArray *, int, int); /*proto*/
static NumpyDotNet::ndarray^ NA_InputArray(System::Object^, int, int); /*proto*/
static NumpyDotNet::ndarray^ NA_IoArray(System::Object^, int, int); /*proto*/
static NumpyDotNet::ndarray^ NA_OutputArray(System::Object^, int, int); /*proto*/
static NumpyDotNet::ndarray^ NI_ObjectToInputArray(System::Object^); /*proto*/
static NumpyDotNet::ndarray^ NI_ObjectToOutputArray(System::Object^); /*proto*/
static NumpyDotNet::ndarray^ NI_ObjectToIoArray(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_filter_1d(double *, npy_intp, double *, npy_intp, void *);
static int cbwrapper_filter_1d(double *, npy_intp, double *, npy_intp, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_filter(double *, npy_intp, double *, void *);
static int cbwrapper_filter(double *, npy_intp, double *, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_map(npy_intp *, double *, int, int, void *);
static int cbwrapper_map(npy_intp *, double *, int, int, void *); /*proto*/
/* Cython code section 'typeinfo' */
static __Pyx_TypeInfo __Pyx_TypeInfo_nn_npy_intp = { "npy_intp", NULL, sizeof(npy_intp), 'I' };
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.ndimage._nd_image"

/* Implementation of scipy.ndimage._nd_image */
namespace clr__nd_image {
  public ref class module__nd_image sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_AddReference_743_3;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_743_16;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_186_40;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_186_40;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Dtype_192_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_203_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_324_51;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_326_51;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_328_54;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_330_53;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_349_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndarray_358_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_358_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_358_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_359_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_363_23;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_392_0;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_392_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_392_0;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_cvt_npy_intp_392_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_400_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_400_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_406_24;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_cvt_npy_intp_412_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_412_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_412_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_412_0;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_cvt_npy_intp_412_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_cvt_npy_intp_420_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_420_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_420_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_420_0;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_cvt_npy_intp_420_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_420_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_429_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_429_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_429_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_446_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_446_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_446_0;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_467_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_468_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_469_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_469_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_470_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_471_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_471_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_472_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_ARGS_KWARGS_482_17;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_cvt_npy_intp_485_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_485_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_485_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_485_0;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_cvt_npy_intp_485_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_498_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_ARGS_KWARGS_510_22;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_511_18;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_514_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_514_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_527_27;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_cvt_npy_intp_535_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_535_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_535_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_cvt_npy_intp_543_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_543_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_551_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_551_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_562_32;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_562_39;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_563_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_ARGS_KWARGS_564_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_566_22;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_566_22;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_569_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_569_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_569_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_588_31;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_602_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_602_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_602_0;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_cvt_npy_intp_621_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_635_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_639_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_640_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_640_8;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_641_27;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_cvt_npy_intp_641_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_643_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_644_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_644_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_645_44;
static  CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >^ __site_cvt_cvt_Py_ssize_t_645_44;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_645_63;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_645_68;
static  CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >^ __site_cvt_cvt_Py_ssize_t_645_68;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_645_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_646_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_647_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_647_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_649_22;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_662_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_695_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_695_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_695_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_695_0_3;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_716_46;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_722_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_722_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_243_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_243_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_zeros_245_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_245_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_251_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_251_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_253_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_253_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_259_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_259_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_261_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_261_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_271_54;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_271_54;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_275_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_275_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_279_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_279_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_283_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_283_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_287_35;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_287_35;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_292_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_FromAny_292_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_292_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_and_295_13;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_295_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ior_296_14;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_297_77;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_302_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_CheckFromAny_302_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_302_44;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndarray_306_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_306_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_309_14;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":185
 *         object PythonOps__MemoryError "PythonOps::MemoryError"(str e)
 * 
 *     cdef inline NpyArray* ARRAY(ndarray a):             # <<<<<<<<<<<<<<
 *         return <NpyArray*> <long long> a.Array
 * 
 */

static CYTHON_INLINE NpyArray *ARRAY(NumpyDotNet::ndarray^ __pyx_v_a) {
  NpyArray *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":186
 * 
 *     cdef inline NpyArray* ARRAY(ndarray a):
 *         return <NpyArray*> <long long> a.Array             # <<<<<<<<<<<<<<
 * 
 *     cdef inline dtype DescrFromType(int typenum):
 */
  __pyx_t_1 = __site_get_Array_186_40->Target(__site_get_Array_186_40, ((System::Object^)__pyx_v_a), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_186_40->Target(__site_cvt_cvt_PY_LONG_LONG_186_40, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = ((NpyArray *)((PY_LONG_LONG)__pyx_t_2));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":188
 *         return <NpyArray*> <long long> a.Array
 * 
 *     cdef inline dtype DescrFromType(int typenum):             # <<<<<<<<<<<<<<
 *         return Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum))
 * 
 */

static CYTHON_INLINE NumpyDotNet::dtype^ DescrFromType(int __pyx_v_typenum) {
  NumpyDotNet::dtype^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":189
 * 
 *     cdef inline dtype DescrFromType(int typenum):
 *         return Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum))             # <<<<<<<<<<<<<<
 * 
 *     cdef inline dtype DESCR(ndarray x):
 */
  __pyx_t_1 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_r = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":191
 *         return Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum))
 * 
 *     cdef inline dtype DESCR(ndarray x):             # <<<<<<<<<<<<<<
 *         return x.Dtype
 * 
 */

static CYTHON_INLINE NumpyDotNet::dtype^ DESCR(NumpyDotNet::ndarray^ __pyx_v_x) {
  NumpyDotNet::dtype^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":192
 * 
 *     cdef inline dtype DESCR(ndarray x):
 *         return x.Dtype             # <<<<<<<<<<<<<<
 * 
 *     def raise_no_memory():
 */
  __pyx_t_1 = __site_get_Dtype_192_16->Target(__site_get_Dtype_192_16, ((System::Object^)__pyx_v_x), __pyx_context);
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_r = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":194
 *         return x.Dtype
 * 
 *     def raise_no_memory():             # <<<<<<<<<<<<<<
 *         raise PythonOps__MemoryError("Out of memory")
 * 
 */

static System::Object^ raise_no_memory() {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":195
 * 
 *     def raise_no_memory():
 *         raise PythonOps__MemoryError("Out of memory")             # <<<<<<<<<<<<<<
 * 
 *     cdef inline incref(x):
 */
  __pyx_t_1 = PythonOps::MemoryError("Out of memory"); 
  throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
  __pyx_t_1 = nullptr;

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":197
 *         raise PythonOps__MemoryError("Out of memory")
 * 
 *     cdef inline incref(x):             # <<<<<<<<<<<<<<
 *         pass
 * 
 */

static CYTHON_INLINE System::Object^ incref(System::Object^ __pyx_v_x) {
  System::Object^ __pyx_r = nullptr;

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":200
 *         pass
 * 
 *     cdef inline is_callable(f):             # <<<<<<<<<<<<<<
 *         import clr
 *         from IronPython.Runtime.Operations.PythonOps import IsCallable
 */

static CYTHON_INLINE System::Object^ is_callable(System::Object^ __pyx_v_f) {
  System::Object^ __pyx_v_clr;
  System::Object^ __pyx_v_IsCallable;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  __pyx_v_clr = nullptr;
  __pyx_v_IsCallable = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":201
 * 
 *     cdef inline is_callable(f):
 *         import clr             # <<<<<<<<<<<<<<
 *         from IronPython.Runtime.Operations.PythonOps import IsCallable
 *         return IsCallable(f)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":202
 *     cdef inline is_callable(f):
 *         import clr
 *         from IronPython.Runtime.Operations.PythonOps import IsCallable             # <<<<<<<<<<<<<<
 *         return IsCallable(f)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportWithNames(__pyx_context, "IronPython.Runtime.Operations.PythonOps", gcnew array<System::String^>{"IsCallable"}, -1));
  __pyx_t_2 = PythonOps::ImportFrom(__pyx_context, __pyx_t_1, "IsCallable");
  __pyx_v_IsCallable = __pyx_t_2;
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":203
 *         import clr
 *         from IronPython.Runtime.Operations.PythonOps import IsCallable
 *         return IsCallable(f)             # <<<<<<<<<<<<<<
 * 
 *     cdef inline CheckFromAny(object op, dtype newtype, int min_depth, int max_depth,
 */
  __pyx_t_1 = __site_call1_203_25->Target(__site_call1_203_25, __pyx_context, __pyx_v_IsCallable, __pyx_v_f);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":205
 *         return IsCallable(f)
 * 
 *     cdef inline CheckFromAny(object op, dtype newtype, int min_depth, int max_depth,             # <<<<<<<<<<<<<<
 *                              int flags, object context):
 *         return PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 */

static CYTHON_INLINE System::Object^ CheckFromAny(System::Object^ __pyx_v_op, NumpyDotNet::dtype^ __pyx_v_newtype, int __pyx_v_min_depth, int __pyx_v_max_depth, int __pyx_v_flags, System::Object^ __pyx_v_context) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":207
 *     cdef inline CheckFromAny(object op, dtype newtype, int min_depth, int max_depth,
 *                              int flags, object context):
 *         return PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 *     cdef extern from "cb_helper.h":
 */
  __pyx_t_1 = __pyx_v_min_depth;
  __pyx_t_2 = __pyx_v_max_depth;
  __pyx_t_3 = __pyx_v_flags;
  __pyx_t_4 = PyArray_CheckFromAny(__pyx_v_op, ((System::Object^)__pyx_v_newtype), __pyx_t_1, __pyx_t_2, __pyx_t_3, __pyx_v_context); 
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":218
 * from numpy cimport PyArray_New, PyArray_Empty, import_array, NpyArray_INCREF, PyArray_ARRAY
 * 
 * cdef inline ndarray Empty(int nd, npy_intp * dims, dtype descr, int fortran):             # <<<<<<<<<<<<<<
 *     return PyArray_Empty(nd, dims, descr, fortran)
 * 
 */

static CYTHON_INLINE NumpyDotNet::ndarray^ Empty(int __pyx_v_nd, npy_intp *__pyx_v_dims, NumpyDotNet::dtype^ __pyx_v_descr, int __pyx_v_fortran) {
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":219
 * 
 * cdef inline ndarray Empty(int nd, npy_intp * dims, dtype descr, int fortran):
 *     return PyArray_Empty(nd, dims, descr, fortran)             # <<<<<<<<<<<<<<
 * 
 * cdef inline ndarray array_New(int ndim, npy_intp *shape, int typenum, npy_intp *strides,
 */
  __pyx_t_1 = PyArray_Empty(__pyx_v_nd, ((__pyx_t_5numpy_npy_intp *)__pyx_v_dims), __pyx_v_descr, __pyx_v_fortran); 
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":221
 *     return PyArray_Empty(nd, dims, descr, fortran)
 * 
 * cdef inline ndarray array_New(int ndim, npy_intp *shape, int typenum, npy_intp *strides,             # <<<<<<<<<<<<<<
 *                               char *data, int itemsize, int flags):
 *     return PyArray_New(NULL, ndim, shape, typenum, strides, data,
 */

static CYTHON_INLINE NumpyDotNet::ndarray^ array_New(int __pyx_v_ndim, npy_intp *__pyx_v_shape, int __pyx_v_typenum, npy_intp *__pyx_v_strides, char *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags) {
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":224
 *                               char *data, int itemsize, int flags):
 *     return PyArray_New(NULL, ndim, shape, typenum, strides, data,
 *                        itemsize, flags, NULL)             # <<<<<<<<<<<<<<
 * 
 * import_array()
 */
  __pyx_t_1 = PyArray_New(NULL, __pyx_v_ndim, ((__pyx_t_5numpy_npy_intp *)__pyx_v_shape), __pyx_v_typenum, ((__pyx_t_5numpy_npy_intp *)__pyx_v_strides), __pyx_v_data, __pyx_v_itemsize, __pyx_v_flags, NULL); 
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":319
 * #
 * 
 * cdef bint satisfies(NpyArray *a, int requirements, int typenum):             # <<<<<<<<<<<<<<
 *     cdef bint type_ok
 *     type_ok = (typenum == -1) or (NpyArray_TYPE(a) == typenum)
 */

static  int satisfies(NpyArray *__pyx_v_a, int __pyx_v_requirements, int __pyx_v_typenum) {
  int __pyx_v_type_ok;
  int __pyx_r;
  int __pyx_t_1;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":321
 * cdef bint satisfies(NpyArray *a, int requirements, int typenum):
 *     cdef bint type_ok
 *     type_ok = (typenum == -1) or (NpyArray_TYPE(a) == typenum)             # <<<<<<<<<<<<<<
 *     if NpyArray_ISCARRAY(a):
 *         return type_ok
 */
  __pyx_t_1 = (__pyx_v_typenum == -1);
  if (!__pyx_t_1) {
    __pyx_t_2 = (NpyArray_TYPE(__pyx_v_a) == __pyx_v_typenum);
    __pyx_t_3 = __pyx_t_2;
  } else {
    __pyx_t_3 = __pyx_t_1;
  }
  __pyx_v_type_ok = __pyx_t_3;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":322
 *     cdef bint type_ok
 *     type_ok = (typenum == -1) or (NpyArray_TYPE(a) == typenum)
 *     if NpyArray_ISCARRAY(a):             # <<<<<<<<<<<<<<
 *         return type_ok
 *     if NpyArray_ISBYTESWAPPED(a) and (requirements & NPY_NOTSWAPPED):
 */
  __pyx_t_3 = NpyArray_ISCARRAY(__pyx_v_a);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":323
 *     type_ok = (typenum == -1) or (NpyArray_TYPE(a) == typenum)
 *     if NpyArray_ISCARRAY(a):
 *         return type_ok             # <<<<<<<<<<<<<<
 *     if NpyArray_ISBYTESWAPPED(a) and (requirements & NPY_NOTSWAPPED):
 *         return False
 */
    __pyx_r = __pyx_v_type_ok;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":324
 *     if NpyArray_ISCARRAY(a):
 *         return type_ok
 *     if NpyArray_ISBYTESWAPPED(a) and (requirements & NPY_NOTSWAPPED):             # <<<<<<<<<<<<<<
 *         return False
 *     if not NpyArray_ISALIGNED(a) and (requirements & NPY_ALIGNED):
 */
  __pyx_t_3 = NpyArray_ISBYTESWAPPED(__pyx_v_a);
  if (__pyx_t_3) {
    __pyx_t_4 = (__pyx_v_requirements & NPY_NOTSWAPPED);
    __pyx_t_1 = __site_istrue_324_51->Target(__site_istrue_324_51, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_2 = __pyx_t_1;
  } else {
    __pyx_t_2 = __pyx_t_3;
  }
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":325
 *         return type_ok
 *     if NpyArray_ISBYTESWAPPED(a) and (requirements & NPY_NOTSWAPPED):
 *         return False             # <<<<<<<<<<<<<<
 *     if not NpyArray_ISALIGNED(a) and (requirements & NPY_ALIGNED):
 *         return False
 */
    __pyx_r = 0;
    goto __pyx_L0;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":326
 *     if NpyArray_ISBYTESWAPPED(a) and (requirements & NPY_NOTSWAPPED):
 *         return False
 *     if not NpyArray_ISALIGNED(a) and (requirements & NPY_ALIGNED):             # <<<<<<<<<<<<<<
 *         return False
 *     if not NpyArray_ISCONTIGUOUS(a) and (requirements & NPY_CONTIGUOUS):
 */
  __pyx_t_2 = (!NpyArray_ISALIGNED(__pyx_v_a));
  if (__pyx_t_2) {
    __pyx_t_4 = (__pyx_v_requirements & NPY_ALIGNED);
    __pyx_t_3 = __site_istrue_326_51->Target(__site_istrue_326_51, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_1 = __pyx_t_3;
  } else {
    __pyx_t_1 = __pyx_t_2;
  }
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":327
 *         return False
 *     if not NpyArray_ISALIGNED(a) and (requirements & NPY_ALIGNED):
 *         return False             # <<<<<<<<<<<<<<
 *     if not NpyArray_ISCONTIGUOUS(a) and (requirements & NPY_CONTIGUOUS):
 *         return False
 */
    __pyx_r = 0;
    goto __pyx_L0;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":328
 *     if not NpyArray_ISALIGNED(a) and (requirements & NPY_ALIGNED):
 *         return False
 *     if not NpyArray_ISCONTIGUOUS(a) and (requirements & NPY_CONTIGUOUS):             # <<<<<<<<<<<<<<
 *         return False
 *     if not NpyArray_ISWRITEABLE(a) and (requirements & NPY_WRITEABLE):
 */
  __pyx_t_1 = (!NpyArray_ISCONTIGUOUS(__pyx_v_a));
  if (__pyx_t_1) {
    __pyx_t_4 = (__pyx_v_requirements & NPY_CONTIGUOUS);
    __pyx_t_2 = __site_istrue_328_54->Target(__site_istrue_328_54, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_3 = __pyx_t_2;
  } else {
    __pyx_t_3 = __pyx_t_1;
  }
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":329
 *         return False
 *     if not NpyArray_ISCONTIGUOUS(a) and (requirements & NPY_CONTIGUOUS):
 *         return False             # <<<<<<<<<<<<<<
 *     if not NpyArray_ISWRITEABLE(a) and (requirements & NPY_WRITEABLE):
 *         return False
 */
    __pyx_r = 0;
    goto __pyx_L0;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":330
 *     if not NpyArray_ISCONTIGUOUS(a) and (requirements & NPY_CONTIGUOUS):
 *         return False
 *     if not NpyArray_ISWRITEABLE(a) and (requirements & NPY_WRITEABLE):             # <<<<<<<<<<<<<<
 *         return False
 *     if requirements & NPY_ENSURECOPY:
 */
  __pyx_t_3 = (!NpyArray_ISWRITEABLE(__pyx_v_a));
  if (__pyx_t_3) {
    __pyx_t_4 = (__pyx_v_requirements & NPY_WRITEABLE);
    __pyx_t_1 = __site_istrue_330_53->Target(__site_istrue_330_53, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_2 = __pyx_t_1;
  } else {
    __pyx_t_2 = __pyx_t_3;
  }
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":331
 *         return False
 *     if not NpyArray_ISWRITEABLE(a) and (requirements & NPY_WRITEABLE):
 *         return False             # <<<<<<<<<<<<<<
 *     if requirements & NPY_ENSURECOPY:
 *         return False
 */
    __pyx_r = 0;
    goto __pyx_L0;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":332
 *     if not NpyArray_ISWRITEABLE(a) and (requirements & NPY_WRITEABLE):
 *         return False
 *     if requirements & NPY_ENSURECOPY:             # <<<<<<<<<<<<<<
 *         return False
 *     return type_ok
 */
  __pyx_t_5 = (__pyx_v_requirements & NPY_ENSURECOPY);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":333
 *         return False
 *     if requirements & NPY_ENSURECOPY:
 *         return False             # <<<<<<<<<<<<<<
 *     return type_ok
 * 
 */
    __pyx_r = 0;
    goto __pyx_L0;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":334
 *     if requirements & NPY_ENSURECOPY:
 *         return False
 *     return type_ok             # <<<<<<<<<<<<<<
 * 
 * # typenum is either a NumPy type number, *or* -1 for "any type"
 */
  __pyx_r = __pyx_v_type_ok;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":337
 * 
 * # typenum is either a NumPy type number, *or* -1 for "any type"
 * cdef ndarray NA_InputArray(object a, int typenum, int requires):             # <<<<<<<<<<<<<<
 *     cdef dtype descr
 *     if typenum == -1:
 */

static  NumpyDotNet::ndarray^ NA_InputArray(System::Object^ __pyx_v_a, int __pyx_v_typenum, int __pyx_v_requires) {
  NumpyDotNet::dtype^ __pyx_v_descr;
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  __pyx_v_descr = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":339
 * cdef ndarray NA_InputArray(object a, int typenum, int requires):
 *     cdef dtype descr
 *     if typenum == -1:             # <<<<<<<<<<<<<<
 *         descr = None
 *     else:
 */
  __pyx_t_1 = (__pyx_v_typenum == -1);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":340
 *     cdef dtype descr
 *     if typenum == -1:
 *         descr = None             # <<<<<<<<<<<<<<
 *     else:
 *         descr = DescrFromType(typenum)
 */
    __pyx_v_descr = ((NumpyDotNet::dtype^)nullptr);
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":342
 *         descr = None
 *     else:
 *         descr = DescrFromType(typenum)             # <<<<<<<<<<<<<<
 *     incref(descr) # CheckFromAny steals reference
 *     return CheckFromAny(a, descr, 0, 0, requires, None)
 */
    __pyx_t_2 = ((System::Object^)DescrFromType(__pyx_v_typenum)); 
    __pyx_v_descr = ((NumpyDotNet::dtype^)__pyx_t_2);
    __pyx_t_2 = nullptr;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":343
 *     else:
 *         descr = DescrFromType(typenum)
 *     incref(descr) # CheckFromAny steals reference             # <<<<<<<<<<<<<<
 *     return CheckFromAny(a, descr, 0, 0, requires, None)
 * 
 */
  __pyx_t_2 = incref(((System::Object^)__pyx_v_descr)); 
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":344
 *         descr = DescrFromType(typenum)
 *     incref(descr) # CheckFromAny steals reference
 *     return CheckFromAny(a, descr, 0, 0, requires, None)             # <<<<<<<<<<<<<<
 * 
 * cdef ndarray NA_IoArray(object a, int typenum, int requires):
 */
  __pyx_t_2 = CheckFromAny(__pyx_v_a, __pyx_v_descr, 0, 0, __pyx_v_requires, nullptr); 
  if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":346
 *     return CheckFromAny(a, descr, 0, 0, requires, None)
 * 
 * cdef ndarray NA_IoArray(object a, int typenum, int requires):             # <<<<<<<<<<<<<<
 *     cdef ndarray shadow = NA_InputArray(a, typenum, requires | NPY_UPDATEIFCOPY)
 *     if not NpyArray_ISWRITEABLE(ARRAY(shadow)):
 */

static  NumpyDotNet::ndarray^ NA_IoArray(System::Object^ __pyx_v_a, int __pyx_v_typenum, int __pyx_v_requires) {
  NumpyDotNet::ndarray^ __pyx_v_shadow = nullptr;
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":347
 * 
 * cdef ndarray NA_IoArray(object a, int typenum, int requires):
 *     cdef ndarray shadow = NA_InputArray(a, typenum, requires | NPY_UPDATEIFCOPY)             # <<<<<<<<<<<<<<
 *     if not NpyArray_ISWRITEABLE(ARRAY(shadow)):
 *         raise ValueError("NA_IoArray: I/O array must be writable array")
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_a, __pyx_v_typenum, (__pyx_v_requires | NPY_UPDATEIFCOPY))); 
  __pyx_v_shadow = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":348
 * cdef ndarray NA_IoArray(object a, int typenum, int requires):
 *     cdef ndarray shadow = NA_InputArray(a, typenum, requires | NPY_UPDATEIFCOPY)
 *     if not NpyArray_ISWRITEABLE(ARRAY(shadow)):             # <<<<<<<<<<<<<<
 *         raise ValueError("NA_IoArray: I/O array must be writable array")
 *     return shadow
 */
  __pyx_t_2 = (!NpyArray_ISWRITEABLE(ARRAY(__pyx_v_shadow)));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":349
 *     cdef ndarray shadow = NA_InputArray(a, typenum, requires | NPY_UPDATEIFCOPY)
 *     if not NpyArray_ISWRITEABLE(ARRAY(shadow)):
 *         raise ValueError("NA_IoArray: I/O array must be writable array")             # <<<<<<<<<<<<<<
 *     return shadow
 * 
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_349_24->Target(__site_call1_349_24, __pyx_context, __pyx_t_1, ((System::Object^)"NA_IoArray: I/O array must be writable array"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":350
 *     if not NpyArray_ISWRITEABLE(ARRAY(shadow)):
 *         raise ValueError("NA_IoArray: I/O array must be writable array")
 *     return shadow             # <<<<<<<<<<<<<<
 * 
 * cdef ndarray NA_OutputArray(object a_obj, int typenum, int requires):
 */
  __pyx_r = __pyx_v_shadow;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":352
 *     return shadow
 * 
 * cdef ndarray NA_OutputArray(object a_obj, int typenum, int requires):             # <<<<<<<<<<<<<<
 *     cdef dtype descr
 *     cdef NpyArray* a
 */

static  NumpyDotNet::ndarray^ NA_OutputArray(System::Object^ __pyx_v_a_obj, int __pyx_v_typenum, int __pyx_v_requires) {
  NumpyDotNet::dtype^ __pyx_v_descr;
  NpyArray *__pyx_v_a;
  NpyArray *__pyx_v_ret;
  NumpyDotNet::ndarray^ __pyx_v_ret_obj;
  NpyArray *__pyx_v_a_npy;
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_descr = nullptr;
  __pyx_v_ret_obj = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":358
 *     cdef ndarray ret_obj
 * 
 *     if not isinstance(a_obj, np.ndarray):             # <<<<<<<<<<<<<<
 *         raise TypeError('NA_OutputArray: ndarray instance expected')
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_3 = __site_get_ndarray_358_31->Target(__site_get_ndarray_358_31, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call2_358_21->Target(__site_call2_358_21, __pyx_context, __pyx_t_1, __pyx_v_a_obj, __pyx_t_3);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_t_4 = __site_istrue_358_21->Target(__site_istrue_358_21, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_5 = (!__pyx_t_4);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":359
 * 
 *     if not isinstance(a_obj, np.ndarray):
 *         raise TypeError('NA_OutputArray: ndarray instance expected')             # <<<<<<<<<<<<<<
 * 
 *     a = ARRAY(a_obj)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_3 = __site_call1_359_23->Target(__site_call1_359_23, __pyx_context, __pyx_t_2, ((System::Object^)"NA_OutputArray: ndarray instance expected"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":361
 *         raise TypeError('NA_OutputArray: ndarray instance expected')
 * 
 *     a = ARRAY(a_obj)             # <<<<<<<<<<<<<<
 *     if not NpyArray_ISWRITEABLE(a):
 *         raise TypeError('NA_OutputArray: only writeable arrays work for output.')
 */
  if (__pyx_v_a_obj != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_a_obj) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a = ARRAY(((NumpyDotNet::ndarray^)__pyx_v_a_obj));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":362
 * 
 *     a = ARRAY(a_obj)
 *     if not NpyArray_ISWRITEABLE(a):             # <<<<<<<<<<<<<<
 *         raise TypeError('NA_OutputArray: only writeable arrays work for output.')
 *     if satisfies(a, requires, typenum):
 */
  __pyx_t_5 = (!NpyArray_ISWRITEABLE(__pyx_v_a));
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":363
 *     a = ARRAY(a_obj)
 *     if not NpyArray_ISWRITEABLE(a):
 *         raise TypeError('NA_OutputArray: only writeable arrays work for output.')             # <<<<<<<<<<<<<<
 *     if satisfies(a, requires, typenum):
 *         return a_obj
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_2 = __site_call1_363_23->Target(__site_call1_363_23, __pyx_context, __pyx_t_3, ((System::Object^)"NA_OutputArray: only writeable arrays work for output."));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":364
 *     if not NpyArray_ISWRITEABLE(a):
 *         raise TypeError('NA_OutputArray: only writeable arrays work for output.')
 *     if satisfies(a, requires, typenum):             # <<<<<<<<<<<<<<
 *         return a_obj
 *     if typenum == -1:
 */
  __pyx_t_5 = satisfies(__pyx_v_a, __pyx_v_requires, __pyx_v_typenum);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":365
 *         raise TypeError('NA_OutputArray: only writeable arrays work for output.')
 *     if satisfies(a, requires, typenum):
 *         return a_obj             # <<<<<<<<<<<<<<
 *     if typenum == -1:
 *         descr = DESCR(a_obj)
 */
    if (__pyx_v_a_obj != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_a_obj) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_r = ((NumpyDotNet::ndarray^)__pyx_v_a_obj);
    goto __pyx_L0;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":366
 *     if satisfies(a, requires, typenum):
 *         return a_obj
 *     if typenum == -1:             # <<<<<<<<<<<<<<
 *         descr = DESCR(a_obj)
 *     else:
 */
  __pyx_t_5 = (__pyx_v_typenum == -1);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":367
 *         return a_obj
 *     if typenum == -1:
 *         descr = DESCR(a_obj)             # <<<<<<<<<<<<<<
 *     else:
 *         descr = DescrFromType(typenum)
 */
    if (__pyx_v_a_obj != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_a_obj) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = ((System::Object^)DESCR(((NumpyDotNet::ndarray^)__pyx_v_a_obj))); 
    __pyx_v_descr = ((NumpyDotNet::dtype^)__pyx_t_2);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":369
 *         descr = DESCR(a_obj)
 *     else:
 *         descr = DescrFromType(typenum)             # <<<<<<<<<<<<<<
 *     incref(descr) # Empty steals reference
 *     ret_obj = Empty(NpyArray_NDIM(a), NpyArray_DIMS(a), descr, 0)
 */
    __pyx_t_2 = ((System::Object^)DescrFromType(__pyx_v_typenum)); 
    __pyx_v_descr = ((NumpyDotNet::dtype^)__pyx_t_2);
    __pyx_t_2 = nullptr;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":370
 *     else:
 *         descr = DescrFromType(typenum)
 *     incref(descr) # Empty steals reference             # <<<<<<<<<<<<<<
 *     ret_obj = Empty(NpyArray_NDIM(a), NpyArray_DIMS(a), descr, 0)
 *     ret = ARRAY(ret_obj)
 */
  __pyx_t_2 = incref(((System::Object^)__pyx_v_descr)); 
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":371
 *         descr = DescrFromType(typenum)
 *     incref(descr) # Empty steals reference
 *     ret_obj = Empty(NpyArray_NDIM(a), NpyArray_DIMS(a), descr, 0)             # <<<<<<<<<<<<<<
 *     ret = ARRAY(ret_obj)
 *     NpyArray_SETFLAGS(ret, (NpyArray_FLAGS(ret) | NPY_UPDATEIFCOPY) & ~NPY_WRITEABLE)
 */
  __pyx_t_2 = ((System::Object^)Empty(NpyArray_NDIM(__pyx_v_a), NpyArray_DIMS(__pyx_v_a), __pyx_v_descr, 0)); 
  __pyx_v_ret_obj = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":372
 *     incref(descr) # Empty steals reference
 *     ret_obj = Empty(NpyArray_NDIM(a), NpyArray_DIMS(a), descr, 0)
 *     ret = ARRAY(ret_obj)             # <<<<<<<<<<<<<<
 *     NpyArray_SETFLAGS(ret, (NpyArray_FLAGS(ret) | NPY_UPDATEIFCOPY) & ~NPY_WRITEABLE)
 *     cdef NpyArray* a_npy = PyArray_ARRAY(a_obj)
 */
  __pyx_v_ret = ARRAY(__pyx_v_ret_obj);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":373
 *     ret_obj = Empty(NpyArray_NDIM(a), NpyArray_DIMS(a), descr, 0)
 *     ret = ARRAY(ret_obj)
 *     NpyArray_SETFLAGS(ret, (NpyArray_FLAGS(ret) | NPY_UPDATEIFCOPY) & ~NPY_WRITEABLE)             # <<<<<<<<<<<<<<
 *     cdef NpyArray* a_npy = PyArray_ARRAY(a_obj)
 *     NpyArray_INCREF(a_npy)
 */
  NpyArray_SETFLAGS(__pyx_v_ret, ((NpyArray_FLAGS(__pyx_v_ret) | NPY_UPDATEIFCOPY) & (~NPY_WRITEABLE)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":374
 *     ret = ARRAY(ret_obj)
 *     NpyArray_SETFLAGS(ret, (NpyArray_FLAGS(ret) | NPY_UPDATEIFCOPY) & ~NPY_WRITEABLE)
 *     cdef NpyArray* a_npy = PyArray_ARRAY(a_obj)             # <<<<<<<<<<<<<<
 *     NpyArray_INCREF(a_npy)
 *     NpyArray_SETBASE(ret, a_npy)
 */
  if (__pyx_v_a_obj != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_a_obj) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_npy = PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_a_obj));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":375
 *     NpyArray_SETFLAGS(ret, (NpyArray_FLAGS(ret) | NPY_UPDATEIFCOPY) & ~NPY_WRITEABLE)
 *     cdef NpyArray* a_npy = PyArray_ARRAY(a_obj)
 *     NpyArray_INCREF(a_npy)             # <<<<<<<<<<<<<<
 *     NpyArray_SETBASE(ret, a_npy)
 *     return ret_obj
 */
  NpyArray_INCREF(__pyx_v_a_npy);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":376
 *     cdef NpyArray* a_npy = PyArray_ARRAY(a_obj)
 *     NpyArray_INCREF(a_npy)
 *     NpyArray_SETBASE(ret, a_npy)             # <<<<<<<<<<<<<<
 *     return ret_obj
 * 
 */
  NpyArray_SETBASE(__pyx_v_ret, __pyx_v_a_npy);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":377
 *     NpyArray_INCREF(a_npy)
 *     NpyArray_SETBASE(ret, a_npy)
 *     return ret_obj             # <<<<<<<<<<<<<<
 * 
 * cdef ndarray NI_ObjectToInputArray(object a):
 */
  __pyx_r = __pyx_v_ret_obj;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":379
 *     return ret_obj
 * 
 * cdef ndarray NI_ObjectToInputArray(object a):             # <<<<<<<<<<<<<<
 *     return NA_InputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)
 * 
 */

static  NumpyDotNet::ndarray^ NI_ObjectToInputArray(System::Object^ __pyx_v_a) {
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":380
 * 
 * cdef ndarray NI_ObjectToInputArray(object a):
 *     return NA_InputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)             # <<<<<<<<<<<<<<
 * 
 * cdef ndarray NI_ObjectToOutputArray(object a):
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_a, -1, (NPY_ALIGNED | NPY_NOTSWAPPED))); 
  __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":382
 *     return NA_InputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)
 * 
 * cdef ndarray NI_ObjectToOutputArray(object a):             # <<<<<<<<<<<<<<
 *     return NA_OutputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)
 * 
 */

static  NumpyDotNet::ndarray^ NI_ObjectToOutputArray(System::Object^ __pyx_v_a) {
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":383
 * 
 * cdef ndarray NI_ObjectToOutputArray(object a):
 *     return NA_OutputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)             # <<<<<<<<<<<<<<
 * 
 * cdef ndarray NI_ObjectToIoArray(object a):
 */
  __pyx_t_1 = ((System::Object^)NA_OutputArray(__pyx_v_a, -1, (NPY_ALIGNED | NPY_NOTSWAPPED))); 
  __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":385
 *     return NA_OutputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)
 * 
 * cdef ndarray NI_ObjectToIoArray(object a):             # <<<<<<<<<<<<<<
 *     return NA_IoArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)
 * 
 */

static  NumpyDotNet::ndarray^ NI_ObjectToIoArray(System::Object^ __pyx_v_a) {
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":386
 * 
 * cdef ndarray NI_ObjectToIoArray(object a):
 *     return NA_IoArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = ((System::Object^)NA_IoArray(__pyx_v_a, -1, (NPY_ALIGNED | NPY_NOTSWAPPED))); 
  __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":392
 * # Wrappers
 * #
 * def correlate1d(input, weights, int axis, output, NI_ExtendMode mode, double cval,             # <<<<<<<<<<<<<<
 *                 npy_intp origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 */

static System::Object^ correlate1d(System::Object^ input, System::Object^ weights, System::Object^ axis, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_weights = nullptr;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  NI_ExtendMode __pyx_v_mode;
  double __pyx_v_cval;
  npy_intp __pyx_v_origin;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_weights_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_weights = weights;
  __pyx_v_axis = __site_cvt_cvt_int_392_0->Target(__site_cvt_cvt_int_392_0, axis);
  __pyx_v_output = output;
  __pyx_v_mode = ((NI_ExtendMode)__site_cvt_cvt_long_392_0->Target(__site_cvt_cvt_long_392_0, mode));
  __pyx_v_cval = __site_cvt_cvt_double_392_0->Target(__site_cvt_cvt_double_392_0, cval);
  __pyx_v_origin = __site_cvt_cvt_npy_intp_392_0->Target(__site_cvt_cvt_npy_intp_392_0, origin);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":394
 * def correlate1d(input, weights, int axis, output, NI_ExtendMode mode, double cval,
 *                 npy_intp origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":395
 *                 npy_intp origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_Correlate1D(ARRAY(input_), ARRAY(weights_), axis,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_weights)); 
  __pyx_v_weights_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":396
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_Correlate1D(ARRAY(input_), ARRAY(weights_), axis,
 *                    ARRAY(output_), <NI_ExtendMode>mode, cval, origin)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":398
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_Correlate1D(ARRAY(input_), ARRAY(weights_), axis,
 *                    ARRAY(output_), <NI_ExtendMode>mode, cval, origin)             # <<<<<<<<<<<<<<
 * 
 * def correlate(input, weights, output, int mode, double cval, origin):
 */
  __pyx_t_2 = NI_Correlate1D(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_weights_), __pyx_v_axis, ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, __pyx_v_origin); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":400
 *                    ARRAY(output_), <NI_ExtendMode>mode, cval, origin)
 * 
 * def correlate(input, weights, output, int mode, double cval, origin):             # <<<<<<<<<<<<<<
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)
 */

static System::Object^ correlate(System::Object^ input, System::Object^ weights, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_weights = nullptr;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_mode;
  double __pyx_v_cval;
  System::Object^ __pyx_v_origin = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_weights_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_origin_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  __pyx_v_input = input;
  __pyx_v_weights = weights;
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_cvt_int_400_0->Target(__site_cvt_cvt_int_400_0, mode);
  __pyx_v_cval = __site_cvt_cvt_double_400_0->Target(__site_cvt_cvt_double_400_0, cval);
  __pyx_v_origin = origin;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":401
 * 
 * def correlate(input, weights, output, int mode, double cval, origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":402
 * def correlate(input, weights, output, int mode, double cval, origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_weights)); 
  __pyx_v_weights_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":403
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 *     if NpyArray_DIMS(ARRAY(origin_))[0] != NpyArray_NDIM(ARRAY(input_)):
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":404
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     if NpyArray_DIMS(ARRAY(origin_))[0] != NpyArray_NDIM(ARRAY(input_)):
 *         raise ValueError('origin.shape[0] != input.ndim')
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origin, NPY_INTP, NPY_CARRAY)); 
  __pyx_v_origin_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":405
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 *     if NpyArray_DIMS(ARRAY(origin_))[0] != NpyArray_NDIM(ARRAY(input_)):             # <<<<<<<<<<<<<<
 *         raise ValueError('origin.shape[0] != input.ndim')
 *     NI_Correlate(ARRAY(input_), ARRAY(weights_),
 */
  __pyx_t_2 = ((NpyArray_DIMS(ARRAY(__pyx_v_origin_))[0]) != NpyArray_NDIM(ARRAY(__pyx_v_input_)));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":406
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 *     if NpyArray_DIMS(ARRAY(origin_))[0] != NpyArray_NDIM(ARRAY(input_)):
 *         raise ValueError('origin.shape[0] != input.ndim')             # <<<<<<<<<<<<<<
 *     NI_Correlate(ARRAY(input_), ARRAY(weights_),
 *                  ARRAY(output_), <NI_ExtendMode>mode, cval,
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_406_24->Target(__site_call1_406_24, __pyx_context, __pyx_t_1, ((System::Object^)"origin.shape[0] != input.ndim"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":409
 *     NI_Correlate(ARRAY(input_), ARRAY(weights_),
 *                  ARRAY(output_), <NI_ExtendMode>mode, cval,
 *                  <npy_intp*>NpyArray_DATA(ARRAY(origin_)))             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = NI_Correlate(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_weights_), ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, ((npy_intp *)NpyArray_DATA(ARRAY(__pyx_v_origin_)))); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":412
 * 
 * 
 * def uniform_filter1d(object input, npy_intp filter_size, int axis,             # <<<<<<<<<<<<<<
 *                      object output, int mode, double cval,
 *                      npy_intp origin):
 */

static System::Object^ uniform_filter1d(System::Object^ input, System::Object^ filter_size, System::Object^ axis, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin) {
  System::Object^ __pyx_v_input = nullptr;
  npy_intp __pyx_v_filter_size;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_mode;
  double __pyx_v_cval;
  npy_intp __pyx_v_origin;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_filter_size = __site_cvt_cvt_npy_intp_412_0->Target(__site_cvt_cvt_npy_intp_412_0, filter_size);
  __pyx_v_axis = __site_cvt_cvt_int_412_0->Target(__site_cvt_cvt_int_412_0, axis);
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_cvt_int_412_0_1->Target(__site_cvt_cvt_int_412_0_1, mode);
  __pyx_v_cval = __site_cvt_cvt_double_412_0->Target(__site_cvt_cvt_double_412_0, cval);
  __pyx_v_origin = __site_cvt_cvt_npy_intp_412_0_1->Target(__site_cvt_cvt_npy_intp_412_0_1, origin);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":415
 *                      object output, int mode, double cval,
 *                      npy_intp origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_UniformFilter1D(ARRAY(input_), filter_size, axis,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":416
 *                      npy_intp origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_UniformFilter1D(ARRAY(input_), filter_size, axis,
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":418
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_UniformFilter1D(ARRAY(input_), filter_size, axis,
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)             # <<<<<<<<<<<<<<
 * 
 * def min_or_max_filter1d(object input, npy_intp filter_size, int axis,
 */
  __pyx_t_2 = NI_UniformFilter1D(ARRAY(__pyx_v_input_), __pyx_v_filter_size, __pyx_v_axis, ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, __pyx_v_origin); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":420
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)
 * 
 * def min_or_max_filter1d(object input, npy_intp filter_size, int axis,             # <<<<<<<<<<<<<<
 *                         object output, int mode, double cval,
 *                         npy_intp origin, int minimum):
 */

static System::Object^ min_or_max_filter1d(System::Object^ input, System::Object^ filter_size, System::Object^ axis, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin, System::Object^ minimum) {
  System::Object^ __pyx_v_input = nullptr;
  npy_intp __pyx_v_filter_size;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_mode;
  double __pyx_v_cval;
  npy_intp __pyx_v_origin;
  int __pyx_v_minimum;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_filter_size = __site_cvt_cvt_npy_intp_420_0->Target(__site_cvt_cvt_npy_intp_420_0, filter_size);
  __pyx_v_axis = __site_cvt_cvt_int_420_0->Target(__site_cvt_cvt_int_420_0, axis);
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_cvt_int_420_0_1->Target(__site_cvt_cvt_int_420_0_1, mode);
  __pyx_v_cval = __site_cvt_cvt_double_420_0->Target(__site_cvt_cvt_double_420_0, cval);
  __pyx_v_origin = __site_cvt_cvt_npy_intp_420_0_1->Target(__site_cvt_cvt_npy_intp_420_0_1, origin);
  __pyx_v_minimum = __site_cvt_cvt_int_420_0_2->Target(__site_cvt_cvt_int_420_0_2, minimum);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":423
 *                         object output, int mode, double cval,
 *                         npy_intp origin, int minimum):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_MinOrMaxFilter1D(ARRAY(input_), filter_size, axis,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":424
 *                         npy_intp origin, int minimum):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_MinOrMaxFilter1D(ARRAY(input_), filter_size, axis,
 *                         ARRAY(output_), <NI_ExtendMode>mode, cval,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":427
 *     NI_MinOrMaxFilter1D(ARRAY(input_), filter_size, axis,
 *                         ARRAY(output_), <NI_ExtendMode>mode, cval,
 *                         origin, minimum)             # <<<<<<<<<<<<<<
 * 
 * def min_or_max_filter(object input, object footprint, object structure,
 */
  __pyx_t_2 = NI_MinOrMaxFilter1D(ARRAY(__pyx_v_input_), __pyx_v_filter_size, __pyx_v_axis, ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, __pyx_v_origin, __pyx_v_minimum); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":429
 *                         origin, minimum)
 * 
 * def min_or_max_filter(object input, object footprint, object structure,             # <<<<<<<<<<<<<<
 *                       object output, int mode, double cval, object origin,
 *                       int minimum):
 */

static System::Object^ min_or_max_filter(System::Object^ input, System::Object^ footprint, System::Object^ structure, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin, System::Object^ minimum) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_footprint = nullptr;
  System::Object^ __pyx_v_structure = nullptr;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_mode;
  double __pyx_v_cval;
  System::Object^ __pyx_v_origin = nullptr;
  int __pyx_v_minimum;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_footprint_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_structure_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_origin_ = nullptr;
  NumpyDotNet::IExtBufferProtocol^ __pyx_bstruct_origin_;
  Py_ssize_t __pyx_bstride_0_origin_ = 0;
  Py_ssize_t __pyx_bshape_0_origin_ = 0;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  NpyArray *__pyx_t_4;
  int __pyx_t_5;
  __pyx_v_input = input;
  __pyx_v_footprint = footprint;
  __pyx_v_structure = structure;
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_cvt_int_429_0->Target(__site_cvt_cvt_int_429_0, mode);
  __pyx_v_cval = __site_cvt_cvt_double_429_0->Target(__site_cvt_cvt_double_429_0, cval);
  __pyx_v_origin = origin;
  __pyx_v_minimum = __site_cvt_cvt_int_429_0_1->Target(__site_cvt_cvt_int_429_0_1, minimum);
  __pyx_bstruct_origin_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":432
 *                       object output, int mode, double cval, object origin,
 *                       int minimum):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray structure_ = None if structure is None else NI_ObjectToInputArray(structure)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":433
 *                       int minimum):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)             # <<<<<<<<<<<<<<
 *     cdef ndarray structure_ = None if structure is None else NI_ObjectToInputArray(structure)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_footprint)); 
  __pyx_v_footprint_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":434
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray structure_ = None if structure is None else NI_ObjectToInputArray(structure)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray[npy_intp, mode='c'] origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 */
  __pyx_t_2 = (__pyx_v_structure == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_structure)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_structure_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":435
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray structure_ = None if structure is None else NI_ObjectToInputArray(structure)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef ndarray[npy_intp, mode='c'] origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 *     NI_MinOrMaxFilter(ARRAY(input_),
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":436
 *     cdef ndarray structure_ = None if structure is None else NI_ObjectToInputArray(structure)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray[npy_intp, mode='c'] origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     NI_MinOrMaxFilter(ARRAY(input_),
 *                       ARRAY(footprint_),
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origin, NPY_INTP, NPY_CARRAY)); 
  {
    __Pyx_BufFmt_StackElem __pyx_stack[1];
    __Pyx_GetBufferAndValidate(__pyx_bstruct_origin_, ((NumpyDotNet::ndarray^)__pyx_t_1), &__Pyx_TypeInfo_nn_npy_intp, PyBUF_FORMAT| PyBUF_C_CONTIGUOUS, 1, 0, __pyx_stack);
    __pyx_bstride_0_origin_ = __pyx_bstruct_origin_->Strides[0];
    __pyx_bshape_0_origin_ = __pyx_bstruct_origin_->Shape[0];
  }
  __pyx_v_origin_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":439
 *     NI_MinOrMaxFilter(ARRAY(input_),
 *                       ARRAY(footprint_),
 *                       <NpyArray*>NULL if structure_ is None else ARRAY(structure_),             # <<<<<<<<<<<<<<
 *                       ARRAY(output_),
 *                       <NI_ExtendMode>mode,
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_structure_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = ((NpyArray *)NULL);
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_structure_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":444
 *                       cval,
 *                       <npy_intp*>NpyArray_DATA(ARRAY(origin_)),
 *                       minimum)             # <<<<<<<<<<<<<<
 * 
 * def rank_filter(object input, int rank, object footprint,
 */
  __pyx_t_5 = NI_MinOrMaxFilter(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_footprint_), __pyx_t_4, ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, ((npy_intp *)NpyArray_DATA(ARRAY(((NumpyDotNet::ndarray^)__pyx_v_origin_)))), __pyx_v_minimum); 

  __pyx_r = nullptr;
  __Pyx_SafeReleaseBuffer(__pyx_bstruct_origin_);
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":446
 *                       minimum)
 * 
 * def rank_filter(object input, int rank, object footprint,             # <<<<<<<<<<<<<<
 *                 object output, int mode, double cval, object origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 */

static System::Object^ rank_filter(System::Object^ input, System::Object^ rank, System::Object^ footprint, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin) {
  System::Object^ __pyx_v_input = nullptr;
  int __pyx_v_rank;
  System::Object^ __pyx_v_footprint = nullptr;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_mode;
  double __pyx_v_cval;
  System::Object^ __pyx_v_origin = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_footprint_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_origin_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_rank = __site_cvt_cvt_int_446_0->Target(__site_cvt_cvt_int_446_0, rank);
  __pyx_v_footprint = footprint;
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_cvt_int_446_0_1->Target(__site_cvt_cvt_int_446_0_1, mode);
  __pyx_v_cval = __site_cvt_cvt_double_446_0->Target(__site_cvt_cvt_double_446_0, cval);
  __pyx_v_origin = origin;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":448
 * def rank_filter(object input, int rank, object footprint,
 *                 object output, int mode, double cval, object origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":449
 *                 object output, int mode, double cval, object origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_footprint)); 
  __pyx_v_footprint_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":450
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 *     NI_RankFilter(ARRAY(input_),
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":451
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     NI_RankFilter(ARRAY(input_),
 *                   rank,
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origin, NPY_INTP, NPY_CARRAY)); 
  __pyx_v_origin_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":458
 *                   <NI_ExtendMode>mode,
 *                   cval,
 *                   <npy_intp*>NpyArray_DATA(ARRAY(origin_)))             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = NI_RankFilter(ARRAY(__pyx_v_input_), __pyx_v_rank, ARRAY(__pyx_v_footprint_), ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, ((npy_intp *)NpyArray_DATA(ARRAY(__pyx_v_origin_)))); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":464
 * # Callback wrappers
 * #
 * cdef class CallbackInfo:             # <<<<<<<<<<<<<<
 *     cdef object function, args, kwargs
 *     def __init__(self, function, args, kwargs):
 */
[PythonType]
ref struct CallbackInfo {
  System::Object^ function;
  System::Object^ args;
  System::Object^ kwargs;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":466
 * cdef class CallbackInfo:
 *     cdef object function, args, kwargs
 *     def __init__(self, function, args, kwargs):             # <<<<<<<<<<<<<<
 *         if not is_callable(function):
 *             raise RuntimeError("function parameter is not callable")
 */

  [SpecialName]
  virtual int __init__(System::Object^ function, System::Object^ args, System::Object^ kwargs) {
    System::Object^ __pyx_v_function = nullptr;
    System::Object^ __pyx_v_args = nullptr;
    System::Object^ __pyx_v_kwargs = nullptr;
    int __pyx_r;
    System::Object^ __pyx_t_1 = nullptr;
    int __pyx_t_2;
    int __pyx_t_3;
    System::Object^ __pyx_t_4 = nullptr;
    System::Object^ __pyx_t_5 = nullptr;
    System::Object^ __pyx_v_self = this;
    __pyx_v_function = function;
    __pyx_v_args = args;
    __pyx_v_kwargs = kwargs;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":467
 *     cdef object function, args, kwargs
 *     def __init__(self, function, args, kwargs):
 *         if not is_callable(function):             # <<<<<<<<<<<<<<
 *             raise RuntimeError("function parameter is not callable")
 *         if not isinstance(args, tuple):
 */
    __pyx_t_1 = is_callable(__pyx_v_function); 
    __pyx_t_2 = __site_istrue_467_26->Target(__site_istrue_467_26, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = (!__pyx_t_2);
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":468
 *     def __init__(self, function, args, kwargs):
 *         if not is_callable(function):
 *             raise RuntimeError("function parameter is not callable")             # <<<<<<<<<<<<<<
 *         if not isinstance(args, tuple):
 *             raise RuntimeError("extra_arguments must be a tuple")
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "RuntimeError");
      __pyx_t_4 = __site_call1_468_30->Target(__site_call1_468_30, __pyx_context, __pyx_t_1, ((System::Object^)"function parameter is not callable"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":469
 *         if not is_callable(function):
 *             raise RuntimeError("function parameter is not callable")
 *         if not isinstance(args, tuple):             # <<<<<<<<<<<<<<
 *             raise RuntimeError("extra_arguments must be a tuple")
 *         if not isinstance(kwargs, dict):
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "isinstance");
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "tuple");
    __pyx_t_5 = __site_call2_469_25->Target(__site_call2_469_25, __pyx_context, __pyx_t_4, __pyx_v_args, ((System::Object^)__pyx_t_1));
    __pyx_t_4 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_3 = __site_istrue_469_25->Target(__site_istrue_469_25, __pyx_t_5);
    __pyx_t_5 = nullptr;
    __pyx_t_2 = (!__pyx_t_3);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":470
 *             raise RuntimeError("function parameter is not callable")
 *         if not isinstance(args, tuple):
 *             raise RuntimeError("extra_arguments must be a tuple")             # <<<<<<<<<<<<<<
 *         if not isinstance(kwargs, dict):
 *             raise RuntimeError("extra_keywords must be a dictionary")
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "RuntimeError");
      __pyx_t_1 = __site_call1_470_30->Target(__site_call1_470_30, __pyx_context, __pyx_t_5, ((System::Object^)"extra_arguments must be a tuple"));
      __pyx_t_5 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":471
 *         if not isinstance(args, tuple):
 *             raise RuntimeError("extra_arguments must be a tuple")
 *         if not isinstance(kwargs, dict):             # <<<<<<<<<<<<<<
 *             raise RuntimeError("extra_keywords must be a dictionary")
 *         self.function = function
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "dict");
    __pyx_t_4 = __site_call2_471_25->Target(__site_call2_471_25, __pyx_context, __pyx_t_1, __pyx_v_kwargs, ((System::Object^)__pyx_t_5));
    __pyx_t_1 = nullptr;
    __pyx_t_5 = nullptr;
    __pyx_t_2 = __site_istrue_471_25->Target(__site_istrue_471_25, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_3 = (!__pyx_t_2);
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":472
 *             raise RuntimeError("extra_arguments must be a tuple")
 *         if not isinstance(kwargs, dict):
 *             raise RuntimeError("extra_keywords must be a dictionary")             # <<<<<<<<<<<<<<
 *         self.function = function
 *         self.args = args
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "RuntimeError");
      __pyx_t_5 = __site_call1_472_30->Target(__site_call1_472_30, __pyx_context, __pyx_t_4, ((System::Object^)"extra_keywords must be a dictionary"));
      __pyx_t_4 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
      __pyx_t_5 = nullptr;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":473
 *         if not isinstance(kwargs, dict):
 *             raise RuntimeError("extra_keywords must be a dictionary")
 *         self.function = function             # <<<<<<<<<<<<<<
 *         self.args = args
 *         self.kwargs = kwargs
 */
    ((CallbackInfo^)__pyx_v_self)->function = __pyx_v_function;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":474
 *             raise RuntimeError("extra_keywords must be a dictionary")
 *         self.function = function
 *         self.args = args             # <<<<<<<<<<<<<<
 *         self.kwargs = kwargs
 * 
 */
    ((CallbackInfo^)__pyx_v_self)->args = __pyx_v_args;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":475
 *         self.function = function
 *         self.args = args
 *         self.kwargs = kwargs             # <<<<<<<<<<<<<<
 * 
 * cdef int cbwrapper_filter_1d(double *iline, npy_intp ilen, double *oline, npy_intp olen,
 */
    ((CallbackInfo^)__pyx_v_self)->kwargs = __pyx_v_kwargs;

    __pyx_r = 0;
    return __pyx_r;
  }
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":477
 *         self.kwargs = kwargs
 * 
 * cdef int cbwrapper_filter_1d(double *iline, npy_intp ilen, double *oline, npy_intp olen,             # <<<<<<<<<<<<<<
 *                              void* ctx) except 0:
 *     cdef CallbackInfo info = object_from_cookie(ctx)
 */

static int (*__pyx_function_pointer_cbwrapper_filter_1d)(double *, npy_intp, double *, npy_intp, void *);
typedef int (*__pyx_fp_t_cbwrapper_filter_1d)(double *, npy_intp, double *, npy_intp, void *);
static __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_filter_1d^ __pyx_delegate_val_cbwrapper_filter_1d;
static  int cbwrapper_filter_1d(double *__pyx_v_iline, npy_intp __pyx_v_ilen, double *__pyx_v_oline, npy_intp __pyx_v_olen, void *__pyx_v_ctx) {
  CallbackInfo^ __pyx_v_info = nullptr;
  System::Object^ __pyx_v_iarr;
  System::Object^ __pyx_v_oarr;
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  npy_intp __pyx_t_2[1];
  npy_intp __pyx_t_3[1];
  npy_intp __pyx_t_4[1];
  npy_intp __pyx_t_5[1];
  __pyx_v_iarr = nullptr;
  __pyx_v_oarr = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":479
 * cdef int cbwrapper_filter_1d(double *iline, npy_intp ilen, double *oline, npy_intp olen,
 *                              void* ctx) except 0:
 *     cdef CallbackInfo info = object_from_cookie(ctx)             # <<<<<<<<<<<<<<
 *     iarr = array_New(1, [ilen], NPY_DOUBLE, [sizeof(double)], <char*>iline, 0, NPY_CARRAY)
 *     oarr = array_New(1, [olen], NPY_DOUBLE, [sizeof(double)], <char*>oline, 0, NPY_CARRAY)
 */
  __pyx_t_1 = object_from_cookie(__pyx_v_ctx); 
  if (__pyx_t_1 != nullptr && dynamic_cast<CallbackInfo^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_info = ((CallbackInfo^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":480
 *                              void* ctx) except 0:
 *     cdef CallbackInfo info = object_from_cookie(ctx)
 *     iarr = array_New(1, [ilen], NPY_DOUBLE, [sizeof(double)], <char*>iline, 0, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     oarr = array_New(1, [olen], NPY_DOUBLE, [sizeof(double)], <char*>oline, 0, NPY_CARRAY)
 *     info.function(iarr, oarr, *info.args, **info.kwargs)
 */
  __pyx_t_2[0] = __pyx_v_ilen;
  __pyx_t_3[0] = (sizeof(double));
  __pyx_t_1 = ((System::Object^)array_New(1, __pyx_t_2, NPY_DOUBLE, __pyx_t_3, ((char *)__pyx_v_iline), 0, NPY_CARRAY)); 
  __pyx_v_iarr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":481
 *     cdef CallbackInfo info = object_from_cookie(ctx)
 *     iarr = array_New(1, [ilen], NPY_DOUBLE, [sizeof(double)], <char*>iline, 0, NPY_CARRAY)
 *     oarr = array_New(1, [olen], NPY_DOUBLE, [sizeof(double)], <char*>oline, 0, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     info.function(iarr, oarr, *info.args, **info.kwargs)
 *     return 1
 */
  __pyx_t_4[0] = __pyx_v_olen;
  __pyx_t_5[0] = (sizeof(double));
  __pyx_t_1 = ((System::Object^)array_New(1, __pyx_t_4, NPY_DOUBLE, __pyx_t_5, ((char *)__pyx_v_oline), 0, NPY_CARRAY)); 
  __pyx_v_oarr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":482
 *     iarr = array_New(1, [ilen], NPY_DOUBLE, [sizeof(double)], <char*>iline, 0, NPY_CARRAY)
 *     oarr = array_New(1, [olen], NPY_DOUBLE, [sizeof(double)], <char*>oline, 0, NPY_CARRAY)
 *     info.function(iarr, oarr, *info.args, **info.kwargs)             # <<<<<<<<<<<<<<
 *     return 1
 * 
 */
  __pyx_t_1 = __site_call2_ARGS_KWARGS_482_17->Target(__site_call2_ARGS_KWARGS_482_17, __pyx_context, __pyx_v_info->function, __pyx_v_iarr, __pyx_v_oarr, __pyx_v_info->args, __pyx_v_info->kwargs);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":483
 *     oarr = array_New(1, [olen], NPY_DOUBLE, [sizeof(double)], <char*>oline, 0, NPY_CARRAY)
 *     info.function(iarr, oarr, *info.args, **info.kwargs)
 *     return 1             # <<<<<<<<<<<<<<
 * 
 * def generic_filter1d(object input, object callback, npy_intp filter_size,
 */
  __pyx_r = 1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":485
 *     return 1
 * 
 * def generic_filter1d(object input, object callback, npy_intp filter_size,             # <<<<<<<<<<<<<<
 *                      int axis, object output, int mode, double cval,
 *                      npy_intp origin, object extra_arguments, object extra_keywords):
 */

static System::Object^ generic_filter1d(System::Object^ input, System::Object^ callback, System::Object^ filter_size, System::Object^ axis, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin, System::Object^ extra_arguments, System::Object^ extra_keywords) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_callback = nullptr;
  npy_intp __pyx_v_filter_size;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_mode;
  double __pyx_v_cval;
  npy_intp __pyx_v_origin;
  System::Object^ __pyx_v_extra_arguments = nullptr;
  System::Object^ __pyx_v_extra_keywords = nullptr;
  CallbackInfo^ __pyx_v_info;
  void *__pyx_v_ctx;
  int (*__pyx_v_funcptr)(double *, npy_intp, double *, npy_intp, void *);
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  callback_holder __pyx_v_info_holder;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_callback = callback;
  __pyx_v_filter_size = __site_cvt_cvt_npy_intp_485_0->Target(__site_cvt_cvt_npy_intp_485_0, filter_size);
  __pyx_v_axis = __site_cvt_cvt_int_485_0->Target(__site_cvt_cvt_int_485_0, axis);
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_cvt_int_485_0_1->Target(__site_cvt_cvt_int_485_0_1, mode);
  __pyx_v_cval = __site_cvt_cvt_double_485_0->Target(__site_cvt_cvt_double_485_0, cval);
  __pyx_v_origin = __site_cvt_cvt_npy_intp_485_0_1->Target(__site_cvt_cvt_npy_intp_485_0_1, origin);
  __pyx_v_extra_arguments = extra_arguments;
  __pyx_v_extra_keywords = extra_keywords;
  __pyx_v_info = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":491
 *     cdef void *ctx
 *     cdef int (*funcptr)(double*, npy_intp, double*, npy_intp, void*) except 0
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 * ##     if is_capsule(callback):
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":492
 *     cdef int (*funcptr)(double*, npy_intp, double*, npy_intp, void*) except 0
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 * ##     if is_capsule(callback):
 * ##         funcptr = capsule_asvoidptr(callback)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":497
 * ##         ctx = capsule_getdesc(callback)
 *     if True:
 *         funcptr = &cbwrapper_filter_1d             # <<<<<<<<<<<<<<
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)
 *     cdef callback_holder info_holder
 */
  __pyx_v_funcptr = __pyx_function_pointer_cbwrapper_filter_1d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":498
 *     if True:
 *         funcptr = &cbwrapper_filter_1d
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)             # <<<<<<<<<<<<<<
 *     cdef callback_holder info_holder
 *     set_callback_holder(info_holder, info)
 */
  __pyx_t_1 = __site_call3_498_27->Target(__site_call3_498_27, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_7ndimage_9_nd_image_CallbackInfo)), __pyx_v_callback, __pyx_v_extra_arguments, __pyx_v_extra_keywords);
  __pyx_v_info = ((CallbackInfo^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":500
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)
 *     cdef callback_holder info_holder
 *     set_callback_holder(info_holder, info)             # <<<<<<<<<<<<<<
 *     ctx = cookie_from_callback(info_holder)
 *     NI_GenericFilter1D(ARRAY(input_), funcptr, ctx, filter_size, axis,
 */
  set_callback_holder(__pyx_v_info_holder, ((System::Object^)__pyx_v_info));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":501
 *     cdef callback_holder info_holder
 *     set_callback_holder(info_holder, info)
 *     ctx = cookie_from_callback(info_holder)             # <<<<<<<<<<<<<<
 *     NI_GenericFilter1D(ARRAY(input_), funcptr, ctx, filter_size, axis,
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)
 */
  __pyx_v_ctx = cookie_from_callback(__pyx_v_info_holder);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":503
 *     ctx = cookie_from_callback(info_holder)
 *     NI_GenericFilter1D(ARRAY(input_), funcptr, ctx, filter_size, axis,
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)             # <<<<<<<<<<<<<<
 * 
 * cdef int cbwrapper_filter(double *buffer, npy_intp filter_size,
 */
  __pyx_t_2 = NI_GenericFilter1D(ARRAY(__pyx_v_input_), __pyx_v_funcptr, __pyx_v_ctx, __pyx_v_filter_size, __pyx_v_axis, ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, __pyx_v_origin); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":505
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)
 * 
 * cdef int cbwrapper_filter(double *buffer, npy_intp filter_size,             # <<<<<<<<<<<<<<
 *                           double *output, void *ctx) except 0:
 *     cdef CallbackInfo info = object_from_cookie(ctx)
 */

static int (*__pyx_function_pointer_cbwrapper_filter)(double *, npy_intp, double *, void *);
typedef int (*__pyx_fp_t_cbwrapper_filter)(double *, npy_intp, double *, void *);
static __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_filter^ __pyx_delegate_val_cbwrapper_filter;
static  int cbwrapper_filter(double *__pyx_v_buffer, npy_intp __pyx_v_filter_size, double *__pyx_v_output, void *__pyx_v_ctx) {
  CallbackInfo^ __pyx_v_info = nullptr;
  System::Object^ __pyx_v_pybuf;
  System::Object^ __pyx_v_rv;
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  npy_intp __pyx_t_2[1];
  npy_intp __pyx_t_3[1];
  double __pyx_t_4;
  __pyx_v_pybuf = nullptr;
  __pyx_v_rv = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":507
 * cdef int cbwrapper_filter(double *buffer, npy_intp filter_size,
 *                           double *output, void *ctx) except 0:
 *     cdef CallbackInfo info = object_from_cookie(ctx)             # <<<<<<<<<<<<<<
 *     pybuf = array_New(1, [filter_size], NPY_DOUBLE, [sizeof(double)],
 *                       <char*>buffer, 0, NPY_CARRAY)
 */
  __pyx_t_1 = object_from_cookie(__pyx_v_ctx); 
  if (__pyx_t_1 != nullptr && dynamic_cast<CallbackInfo^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_info = ((CallbackInfo^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":508
 *                           double *output, void *ctx) except 0:
 *     cdef CallbackInfo info = object_from_cookie(ctx)
 *     pybuf = array_New(1, [filter_size], NPY_DOUBLE, [sizeof(double)],             # <<<<<<<<<<<<<<
 *                       <char*>buffer, 0, NPY_CARRAY)
 *     rv = info.function(pybuf, *info.args, **info.kwargs)
 */
  __pyx_t_2[0] = __pyx_v_filter_size;
  __pyx_t_3[0] = (sizeof(double));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":509
 *     cdef CallbackInfo info = object_from_cookie(ctx)
 *     pybuf = array_New(1, [filter_size], NPY_DOUBLE, [sizeof(double)],
 *                       <char*>buffer, 0, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     rv = info.function(pybuf, *info.args, **info.kwargs)
 *     output[0] = rv
 */
  __pyx_t_1 = ((System::Object^)array_New(1, __pyx_t_2, NPY_DOUBLE, __pyx_t_3, ((char *)__pyx_v_buffer), 0, NPY_CARRAY)); 
  __pyx_v_pybuf = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":510
 *     pybuf = array_New(1, [filter_size], NPY_DOUBLE, [sizeof(double)],
 *                       <char*>buffer, 0, NPY_CARRAY)
 *     rv = info.function(pybuf, *info.args, **info.kwargs)             # <<<<<<<<<<<<<<
 *     output[0] = rv
 *     return 1
 */
  __pyx_t_1 = __site_call1_ARGS_KWARGS_510_22->Target(__site_call1_ARGS_KWARGS_510_22, __pyx_context, __pyx_v_info->function, __pyx_v_pybuf, __pyx_v_info->args, __pyx_v_info->kwargs);
  __pyx_v_rv = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":511
 *                       <char*>buffer, 0, NPY_CARRAY)
 *     rv = info.function(pybuf, *info.args, **info.kwargs)
 *     output[0] = rv             # <<<<<<<<<<<<<<
 *     return 1
 * 
 */
  __pyx_t_4 = __site_cvt_cvt_double_511_18->Target(__site_cvt_cvt_double_511_18, __pyx_v_rv);
  (__pyx_v_output[0]) = __pyx_t_4;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":512
 *     rv = info.function(pybuf, *info.args, **info.kwargs)
 *     output[0] = rv
 *     return 1             # <<<<<<<<<<<<<<
 * 
 * def generic_filter(object input, object callback, object footprint, object output,
 */
  __pyx_r = 1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":514
 *     return 1
 * 
 * def generic_filter(object input, object callback, object footprint, object output,             # <<<<<<<<<<<<<<
 *                    int mode, double cval, object origin, object extra_arguments,
 *                    object extra_keywords):
 */

static System::Object^ generic_filter(System::Object^ input, System::Object^ callback, System::Object^ footprint, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin, System::Object^ extra_arguments, System::Object^ extra_keywords) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_callback = nullptr;
  System::Object^ __pyx_v_footprint = nullptr;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_mode;
  double __pyx_v_cval;
  System::Object^ __pyx_v_origin = nullptr;
  System::Object^ __pyx_v_extra_arguments = nullptr;
  System::Object^ __pyx_v_extra_keywords = nullptr;
  int (*__pyx_v_funcptr)(double *, npy_intp, double *, void *);
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_footprint_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_origin_ = nullptr;
  CallbackInfo^ __pyx_v_info;
  callback_holder __pyx_v_info_holder;
  void *__pyx_v_ctx;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_v_input = input;
  __pyx_v_callback = callback;
  __pyx_v_footprint = footprint;
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_cvt_int_514_0->Target(__site_cvt_cvt_int_514_0, mode);
  __pyx_v_cval = __site_cvt_cvt_double_514_0->Target(__site_cvt_cvt_double_514_0, cval);
  __pyx_v_origin = origin;
  __pyx_v_extra_arguments = extra_arguments;
  __pyx_v_extra_keywords = extra_keywords;
  __pyx_v_info = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":518
 *                    object extra_keywords):
 *     cdef int (*funcptr)(double*, npy_intp, double*, void*) except 0
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":519
 *     cdef int (*funcptr)(double*, npy_intp, double*, void*) except 0
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_footprint)); 
  __pyx_v_footprint_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":520
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 * ##    if is_capsule(callback):
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":521
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 * ##    if is_capsule(callback):
 * ##        funcptr = capsule_asvoidptr(callback)
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origin, NPY_INTP, NPY_CARRAY)); 
  __pyx_v_origin_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":526
 * ##        ctx = capsule_getdesc(callback)
 *     if True:
 *         funcptr = &cbwrapper_filter             # <<<<<<<<<<<<<<
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)
 *     cdef callback_holder info_holder
 */
  __pyx_v_funcptr = __pyx_function_pointer_cbwrapper_filter;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":527
 *     if True:
 *         funcptr = &cbwrapper_filter
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)             # <<<<<<<<<<<<<<
 *     cdef callback_holder info_holder
 *     set_callback_holder(info_holder, info)
 */
  __pyx_t_1 = __site_call3_527_27->Target(__site_call3_527_27, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_7ndimage_9_nd_image_CallbackInfo)), __pyx_v_callback, __pyx_v_extra_arguments, __pyx_v_extra_keywords);
  __pyx_v_info = ((CallbackInfo^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":529
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)
 *     cdef callback_holder info_holder
 *     set_callback_holder(info_holder, info)             # <<<<<<<<<<<<<<
 *     ctx = cookie_from_callback(info_holder)
 *     NI_GenericFilter(ARRAY(input_), funcptr, ctx, ARRAY(footprint_),
 */
  set_callback_holder(__pyx_v_info_holder, ((System::Object^)__pyx_v_info));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":530
 *     cdef callback_holder info_holder
 *     set_callback_holder(info_holder, info)
 *     ctx = cookie_from_callback(info_holder)             # <<<<<<<<<<<<<<
 *     NI_GenericFilter(ARRAY(input_), funcptr, ctx, ARRAY(footprint_),
 *                      ARRAY(output_), <NI_ExtendMode>mode, cval,
 */
  __pyx_v_ctx = cookie_from_callback(__pyx_v_info_holder);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":533
 *     NI_GenericFilter(ARRAY(input_), funcptr, ctx, ARRAY(footprint_),
 *                      ARRAY(output_), <NI_ExtendMode>mode, cval,
 *                      <npy_intp*>NpyArray_DATA(ARRAY(origin_)))             # <<<<<<<<<<<<<<
 * 
 * def fourier_filter(object input, object parameters, npy_intp n, int axis,
 */
  NI_GenericFilter(ARRAY(__pyx_v_input_), __pyx_v_funcptr, __pyx_v_ctx, ARRAY(__pyx_v_footprint_), ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, ((npy_intp *)NpyArray_DATA(ARRAY(__pyx_v_origin_))));

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":535
 *                      <npy_intp*>NpyArray_DATA(ARRAY(origin_)))
 * 
 * def fourier_filter(object input, object parameters, npy_intp n, int axis,             # <<<<<<<<<<<<<<
 *                    object output, int filter_type):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 */

static System::Object^ fourier_filter(System::Object^ input, System::Object^ parameters, System::Object^ n, System::Object^ axis, System::Object^ output, System::Object^ filter_type) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_parameters = nullptr;
  npy_intp __pyx_v_n;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_filter_type;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_parameters_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_parameters = parameters;
  __pyx_v_n = __site_cvt_cvt_npy_intp_535_0->Target(__site_cvt_cvt_npy_intp_535_0, n);
  __pyx_v_axis = __site_cvt_cvt_int_535_0->Target(__site_cvt_cvt_int_535_0, axis);
  __pyx_v_output = output;
  __pyx_v_filter_type = __site_cvt_cvt_int_535_0_1->Target(__site_cvt_cvt_int_535_0_1, filter_type);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":537
 * def fourier_filter(object input, object parameters, npy_intp n, int axis,
 *                    object output, int filter_type):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray parameters_ = NI_ObjectToInputArray(parameters)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":538
 *                    object output, int filter_type):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray parameters_ = NI_ObjectToInputArray(parameters)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_FourierFilter(ARRAY(input_), ARRAY(parameters_), n, axis,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_parameters)); 
  __pyx_v_parameters_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":539
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray parameters_ = NI_ObjectToInputArray(parameters)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_FourierFilter(ARRAY(input_), ARRAY(parameters_), n, axis,
 *                      ARRAY(output_), filter_type)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":541
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_FourierFilter(ARRAY(input_), ARRAY(parameters_), n, axis,
 *                      ARRAY(output_), filter_type)             # <<<<<<<<<<<<<<
 * 
 * def fourier_shift(object input, object shifts, npy_intp n, int axis,
 */
  __pyx_t_2 = NI_FourierFilter(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_parameters_), __pyx_v_n, __pyx_v_axis, ARRAY(__pyx_v_output_), __pyx_v_filter_type); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":543
 *                      ARRAY(output_), filter_type)
 * 
 * def fourier_shift(object input, object shifts, npy_intp n, int axis,             # <<<<<<<<<<<<<<
 *                   object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 */

static System::Object^ fourier_shift(System::Object^ input, System::Object^ shifts, System::Object^ n, System::Object^ axis, System::Object^ output) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_shifts = nullptr;
  npy_intp __pyx_v_n;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_shifts_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_shifts = shifts;
  __pyx_v_n = __site_cvt_cvt_npy_intp_543_0->Target(__site_cvt_cvt_npy_intp_543_0, n);
  __pyx_v_axis = __site_cvt_cvt_int_543_0->Target(__site_cvt_cvt_int_543_0, axis);
  __pyx_v_output = output;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":545
 * def fourier_shift(object input, object shifts, npy_intp n, int axis,
 *                   object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray shifts_ = NI_ObjectToInputArray(shifts)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":546
 *                   object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray shifts_ = NI_ObjectToInputArray(shifts)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_FourierShift(ARRAY(input_), ARRAY(shifts_), n, axis,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_shifts)); 
  __pyx_v_shifts_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":547
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray shifts_ = NI_ObjectToInputArray(shifts)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_FourierShift(ARRAY(input_), ARRAY(shifts_), n, axis,
 *                     ARRAY(output_))
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":549
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_FourierShift(ARRAY(input_), ARRAY(shifts_), n, axis,
 *                     ARRAY(output_))             # <<<<<<<<<<<<<<
 * 
 * def spline_filter1d(object input, int order, int axis, object output):
 */
  __pyx_t_2 = NI_FourierShift(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_shifts_), __pyx_v_n, __pyx_v_axis, ARRAY(__pyx_v_output_)); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":551
 *                     ARRAY(output_))
 * 
 * def spline_filter1d(object input, int order, int axis, object output):             # <<<<<<<<<<<<<<
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */

static System::Object^ spline_filter1d(System::Object^ input, System::Object^ order, System::Object^ axis, System::Object^ output) {
  System::Object^ __pyx_v_input = nullptr;
  int __pyx_v_order;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_order = __site_cvt_cvt_int_551_0->Target(__site_cvt_cvt_int_551_0, order);
  __pyx_v_axis = __site_cvt_cvt_int_551_0_1->Target(__site_cvt_cvt_int_551_0_1, axis);
  __pyx_v_output = output;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":552
 * 
 * def spline_filter1d(object input, int order, int axis, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_SplineFilter1D(ARRAY(input_), order, axis, ARRAY(output_))
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":553
 * def spline_filter1d(object input, int order, int axis, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_SplineFilter1D(ARRAY(input_), order, axis, ARRAY(output_))
 * 
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":554
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_SplineFilter1D(ARRAY(input_), order, axis, ARRAY(output_))             # <<<<<<<<<<<<<<
 * 
 * cdef int cbwrapper_map(npy_intp *ocoor, double *icoor,
 */
  __pyx_t_2 = NI_SplineFilter1D(ARRAY(__pyx_v_input_), __pyx_v_order, __pyx_v_axis, ARRAY(__pyx_v_output_)); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":556
 *     NI_SplineFilter1D(ARRAY(input_), order, axis, ARRAY(output_))
 * 
 * cdef int cbwrapper_map(npy_intp *ocoor, double *icoor,             # <<<<<<<<<<<<<<
 *                        int orank, int irank, void *ctx) except 0:
 *     cdef CallbackInfo info = object_from_cookie(ctx)
 */

static int (*__pyx_function_pointer_cbwrapper_map)(npy_intp *, double *, int, int, void *);
typedef int (*__pyx_fp_t_cbwrapper_map)(npy_intp *, double *, int, int, void *);
static __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_map^ __pyx_delegate_val_cbwrapper_map;
static  int cbwrapper_map(npy_intp *__pyx_v_ocoor, double *__pyx_v_icoor, int __pyx_v_orank, int __pyx_v_irank, void *__pyx_v_ctx) {
  CallbackInfo^ __pyx_v_info = nullptr;
  npy_intp __pyx_v_i;
  System::Object^ __pyx_v_ret;
  System::Object^ __pyx_v_cList;
  System::Object^ __pyx_v_coors;
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  npy_intp __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  double __pyx_t_6;
  __pyx_v_ret = nullptr;
  __pyx_v_cList = nullptr;
  __pyx_v_coors = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":558
 * cdef int cbwrapper_map(npy_intp *ocoor, double *icoor,
 *                        int orank, int irank, void *ctx) except 0:
 *     cdef CallbackInfo info = object_from_cookie(ctx)             # <<<<<<<<<<<<<<
 *     cdef npy_intp i
 *     cdef tuple ret
 */
  __pyx_t_1 = object_from_cookie(__pyx_v_ctx); 
  if (__pyx_t_1 != nullptr && dynamic_cast<CallbackInfo^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_info = ((CallbackInfo^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":561
 *     cdef npy_intp i
 *     cdef tuple ret
 *     cList = []             # <<<<<<<<<<<<<<
 *     for i in range(orank): cList.append(ocoor[i])
 *     coors = tuple(cList)
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_cList = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":562
 *     cdef tuple ret
 *     cList = []
 *     for i in range(orank): cList.append(ocoor[i])             # <<<<<<<<<<<<<<
 *     coors = tuple(cList)
 *     ret = info.function(coors, *info.args, **info.kwargs)
 */
  __pyx_t_2 = __pyx_v_orank;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;
    __pyx_t_1 = __site_get_append_562_32->Target(__site_get_append_562_32, ((System::Object^)__pyx_v_cList), __pyx_context);
    __pyx_t_4 = (__pyx_v_ocoor[__pyx_v_i]);
    __pyx_t_5 = __site_call1_562_39->Target(__site_call1_562_39, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":563
 *     cList = []
 *     for i in range(orank): cList.append(ocoor[i])
 *     coors = tuple(cList)             # <<<<<<<<<<<<<<
 *     ret = info.function(coors, *info.args, **info.kwargs)
 *     for i in range(irank):
 */
  __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "tuple");
  __pyx_t_4 = __site_call1_563_17->Target(__site_call1_563_17, __pyx_context, ((System::Object^)__pyx_t_5), ((System::Object^)__pyx_v_cList));
  __pyx_t_5 = nullptr;
  __pyx_v_coors = ((System::Object^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":564
 *     for i in range(orank): cList.append(ocoor[i])
 *     coors = tuple(cList)
 *     ret = info.function(coors, *info.args, **info.kwargs)             # <<<<<<<<<<<<<<
 *     for i in range(irank):
 *         icoor[i] = ret[i]
 */
  __pyx_t_4 = __site_call1_ARGS_KWARGS_564_23->Target(__site_call1_ARGS_KWARGS_564_23, __pyx_context, __pyx_v_info->function, ((System::Object^)__pyx_v_coors), __pyx_v_info->args, __pyx_v_info->kwargs);
  if (__pyx_t_4 != nullptr && dynamic_cast<IronPython::Runtime::PythonTuple^>(__pyx_t_4) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_ret = ((System::Object^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":565
 *     coors = tuple(cList)
 *     ret = info.function(coors, *info.args, **info.kwargs)
 *     for i in range(irank):             # <<<<<<<<<<<<<<
 *         icoor[i] = ret[i]
 *     return 1
 */
  __pyx_t_2 = __pyx_v_irank;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":566
 *     ret = info.function(coors, *info.args, **info.kwargs)
 *     for i in range(irank):
 *         icoor[i] = ret[i]             # <<<<<<<<<<<<<<
 *     return 1
 * 
 */
    __pyx_t_4 = __site_getindex_566_22->Target(__site_getindex_566_22, ((System::Object^)__pyx_v_ret), ((System::Object^)__pyx_v_i));
    __pyx_t_6 = __site_cvt_cvt_double_566_22->Target(__site_cvt_cvt_double_566_22, __pyx_t_4);
    __pyx_t_4 = nullptr;
    (__pyx_v_icoor[__pyx_v_i]) = __pyx_t_6;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":567
 *     for i in range(irank):
 *         icoor[i] = ret[i]
 *     return 1             # <<<<<<<<<<<<<<
 * 
 * def geometric_transform(object input, object map_callback, object coordinates,
 */
  __pyx_r = 1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":569
 *     return 1
 * 
 * def geometric_transform(object input, object map_callback, object coordinates,             # <<<<<<<<<<<<<<
 *                         object matrix, object shift, object output,
 *                         int order, int mode, double cval, object extra_arguments,
 */

static System::Object^ geometric_transform(System::Object^ input, System::Object^ map_callback, System::Object^ coordinates, System::Object^ matrix, System::Object^ shift, System::Object^ output, System::Object^ order, System::Object^ mode, System::Object^ cval, System::Object^ extra_arguments, System::Object^ extra_keywords) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_map_callback = nullptr;
  System::Object^ __pyx_v_coordinates = nullptr;
  System::Object^ __pyx_v_matrix = nullptr;
  System::Object^ __pyx_v_shift = nullptr;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_order;
  int __pyx_v_mode;
  double __pyx_v_cval;
  System::Object^ __pyx_v_extra_arguments = nullptr;
  System::Object^ __pyx_v_extra_keywords = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_coordinates_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_matrix_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_shift_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  int (*__pyx_v_funcptr)(npy_intp *, double *, int, int, void *);
  CallbackInfo^ __pyx_v_info;
  void *__pyx_v_ctx;
  callback_holder __pyx_v_info_holder;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  NpyArray *__pyx_t_4;
  NpyArray *__pyx_t_5;
  NpyArray *__pyx_t_6;
  int __pyx_t_7;
  __pyx_v_input = input;
  __pyx_v_map_callback = map_callback;
  __pyx_v_coordinates = coordinates;
  __pyx_v_matrix = matrix;
  __pyx_v_shift = shift;
  __pyx_v_output = output;
  __pyx_v_order = __site_cvt_cvt_int_569_0->Target(__site_cvt_cvt_int_569_0, order);
  __pyx_v_mode = __site_cvt_cvt_int_569_0_1->Target(__site_cvt_cvt_int_569_0_1, mode);
  __pyx_v_cval = __site_cvt_cvt_double_569_0->Target(__site_cvt_cvt_double_569_0, cval);
  __pyx_v_extra_arguments = extra_arguments;
  __pyx_v_extra_keywords = extra_keywords;
  __pyx_v_info = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":573
 *                         int order, int mode, double cval, object extra_arguments,
 *                         object extra_keywords):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray coordinates_ = None if coordinates is None else NI_ObjectToInputArray(coordinates)
 *     cdef ndarray matrix_ = None if matrix is None else NI_ObjectToInputArray(matrix)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":574
 *                         object extra_keywords):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray coordinates_ = None if coordinates is None else NI_ObjectToInputArray(coordinates)             # <<<<<<<<<<<<<<
 *     cdef ndarray matrix_ = None if matrix is None else NI_ObjectToInputArray(matrix)
 *     cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)
 */
  __pyx_t_2 = (__pyx_v_coordinates == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_coordinates)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_coordinates_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":575
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray coordinates_ = None if coordinates is None else NI_ObjectToInputArray(coordinates)
 *     cdef ndarray matrix_ = None if matrix is None else NI_ObjectToInputArray(matrix)             # <<<<<<<<<<<<<<
 *     cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_2 = (__pyx_v_matrix == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_matrix)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_matrix_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":576
 *     cdef ndarray coordinates_ = None if coordinates is None else NI_ObjectToInputArray(coordinates)
 *     cdef ndarray matrix_ = None if matrix is None else NI_ObjectToInputArray(matrix)
 *     cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef int (*funcptr)(npy_intp*, double*, int, int, void*) except 0
 */
  __pyx_t_2 = (__pyx_v_shift == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_shift)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_shift_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":577
 *     cdef ndarray matrix_ = None if matrix is None else NI_ObjectToInputArray(matrix)
 *     cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef int (*funcptr)(npy_intp*, double*, int, int, void*) except 0
 *     cdef CallbackInfo info
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":584
 *     cdef callback_holder info_holder
 * 
 *     if map_callback is not None:             # <<<<<<<<<<<<<<
 *         # TODO: Capsule support
 *         if True:
 */
  __pyx_t_2 = (__pyx_v_map_callback != nullptr);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":587
 *         # TODO: Capsule support
 *         if True:
 *             funcptr = &cbwrapper_map             # <<<<<<<<<<<<<<
 *             info = CallbackInfo(map_callback, extra_arguments, extra_keywords)
 *             set_callback_holder(info_holder, info)
 */
    __pyx_v_funcptr = __pyx_function_pointer_cbwrapper_map;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":588
 *         if True:
 *             funcptr = &cbwrapper_map
 *             info = CallbackInfo(map_callback, extra_arguments, extra_keywords)             # <<<<<<<<<<<<<<
 *             set_callback_holder(info_holder, info)
 *             ctx = cookie_from_callback(info_holder)
 */
    __pyx_t_1 = __site_call3_588_31->Target(__site_call3_588_31, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_7ndimage_9_nd_image_CallbackInfo)), __pyx_v_map_callback, __pyx_v_extra_arguments, __pyx_v_extra_keywords);
    __pyx_v_info = ((CallbackInfo^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":589
 *             funcptr = &cbwrapper_map
 *             info = CallbackInfo(map_callback, extra_arguments, extra_keywords)
 *             set_callback_holder(info_holder, info)             # <<<<<<<<<<<<<<
 *             ctx = cookie_from_callback(info_holder)
 * 
 */
    set_callback_holder(__pyx_v_info_holder, ((System::Object^)__pyx_v_info));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":590
 *             info = CallbackInfo(map_callback, extra_arguments, extra_keywords)
 *             set_callback_holder(info_holder, info)
 *             ctx = cookie_from_callback(info_holder)             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
    __pyx_v_ctx = cookie_from_callback(__pyx_v_info_holder);
    goto __pyx_L5;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":593
 * 
 *     else:
 *         funcptr = ctx = NULL             # <<<<<<<<<<<<<<
 * 
 *     NI_GeometricTransform(ARRAY(input_), funcptr, ctx,
 */
    __pyx_v_funcptr = NULL;
    __pyx_v_ctx = NULL;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":596
 * 
 *     NI_GeometricTransform(ARRAY(input_), funcptr, ctx,
 *                           <NpyArray*>NULL if matrix_ is None else ARRAY(matrix_),             # <<<<<<<<<<<<<<
 *                           <NpyArray*>NULL if shift_ is None else ARRAY(shift_),
 *                           <NpyArray*>NULL if coordinates_ is None else ARRAY(coordinates_),
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_matrix_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = ((NpyArray *)NULL);
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_matrix_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":597
 *     NI_GeometricTransform(ARRAY(input_), funcptr, ctx,
 *                           <NpyArray*>NULL if matrix_ is None else ARRAY(matrix_),
 *                           <NpyArray*>NULL if shift_ is None else ARRAY(shift_),             # <<<<<<<<<<<<<<
 *                           <NpyArray*>NULL if coordinates_ is None else ARRAY(coordinates_),
 *                           ARRAY(output_), order, <NI_ExtendMode>mode, cval)
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_shift_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_5 = ((NpyArray *)NULL);
  } else {
    __pyx_t_5 = ARRAY(__pyx_v_shift_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":598
 *                           <NpyArray*>NULL if matrix_ is None else ARRAY(matrix_),
 *                           <NpyArray*>NULL if shift_ is None else ARRAY(shift_),
 *                           <NpyArray*>NULL if coordinates_ is None else ARRAY(coordinates_),             # <<<<<<<<<<<<<<
 *                           ARRAY(output_), order, <NI_ExtendMode>mode, cval)
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_coordinates_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_6 = ((NpyArray *)NULL);
  } else {
    __pyx_t_6 = ARRAY(__pyx_v_coordinates_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":599
 *                           <NpyArray*>NULL if shift_ is None else ARRAY(shift_),
 *                           <NpyArray*>NULL if coordinates_ is None else ARRAY(coordinates_),
 *                           ARRAY(output_), order, <NI_ExtendMode>mode, cval)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_7 = NI_GeometricTransform(ARRAY(__pyx_v_input_), __pyx_v_funcptr, __pyx_v_ctx, __pyx_t_4, __pyx_t_5, __pyx_t_6, ARRAY(__pyx_v_output_), __pyx_v_order, ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":602
 * 
 * 
 * def zoom_shift(object input, object zoom, object shift, object output,             # <<<<<<<<<<<<<<
 *                int order, int mode, double cval):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 */

static System::Object^ zoom_shift(System::Object^ input, System::Object^ zoom, System::Object^ shift, System::Object^ output, System::Object^ order, System::Object^ mode, System::Object^ cval) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_zoom = nullptr;
  System::Object^ __pyx_v_shift = nullptr;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_order;
  int __pyx_v_mode;
  double __pyx_v_cval;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_zoom_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_shift_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  NpyArray *__pyx_t_4;
  NpyArray *__pyx_t_5;
  int __pyx_t_6;
  __pyx_v_input = input;
  __pyx_v_zoom = zoom;
  __pyx_v_shift = shift;
  __pyx_v_output = output;
  __pyx_v_order = __site_cvt_cvt_int_602_0->Target(__site_cvt_cvt_int_602_0, order);
  __pyx_v_mode = __site_cvt_cvt_int_602_0_1->Target(__site_cvt_cvt_int_602_0_1, mode);
  __pyx_v_cval = __site_cvt_cvt_double_602_0->Target(__site_cvt_cvt_double_602_0, cval);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":604
 * def zoom_shift(object input, object zoom, object shift, object output,
 *                int order, int mode, double cval):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray zoom_ = None if zoom is None else NI_ObjectToInputArray(zoom)
 *     cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":605
 *                int order, int mode, double cval):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray zoom_ = None if zoom is None else NI_ObjectToInputArray(zoom)             # <<<<<<<<<<<<<<
 *     cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_2 = (__pyx_v_zoom == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_zoom)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_zoom_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":606
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray zoom_ = None if zoom is None else NI_ObjectToInputArray(zoom)
 *     cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_ZoomShift(ARRAY(input_),
 */
  __pyx_t_2 = (__pyx_v_shift == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_shift)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_shift_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":607
 *     cdef ndarray zoom_ = None if zoom is None else NI_ObjectToInputArray(zoom)
 *     cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_ZoomShift(ARRAY(input_),
 *                  <NpyArray*>NULL if zoom_ is None else ARRAY(zoom_),
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":609
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_ZoomShift(ARRAY(input_),
 *                  <NpyArray*>NULL if zoom_ is None else ARRAY(zoom_),             # <<<<<<<<<<<<<<
 *                  <NpyArray*>NULL if shift_ is None else ARRAY(shift_),
 *                  ARRAY(output_), order, <NI_ExtendMode>mode, cval)
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_zoom_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = ((NpyArray *)NULL);
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_zoom_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":610
 *     NI_ZoomShift(ARRAY(input_),
 *                  <NpyArray*>NULL if zoom_ is None else ARRAY(zoom_),
 *                  <NpyArray*>NULL if shift_ is None else ARRAY(shift_),             # <<<<<<<<<<<<<<
 *                  ARRAY(output_), order, <NI_ExtendMode>mode, cval)
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_shift_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_5 = ((NpyArray *)NULL);
  } else {
    __pyx_t_5 = ARRAY(__pyx_v_shift_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":611
 *                  <NpyArray*>NULL if zoom_ is None else ARRAY(zoom_),
 *                  <NpyArray*>NULL if shift_ is None else ARRAY(shift_),
 *                  ARRAY(output_), order, <NI_ExtendMode>mode, cval)             # <<<<<<<<<<<<<<
 * 
 * def label(object input, object strct, object output):
 */
  __pyx_t_6 = NI_ZoomShift(ARRAY(__pyx_v_input_), __pyx_t_4, __pyx_t_5, ARRAY(__pyx_v_output_), __pyx_v_order, ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":613
 *                  ARRAY(output_), order, <NI_ExtendMode>mode, cval)
 * 
 * def label(object input, object strct, object output):             # <<<<<<<<<<<<<<
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 */

static System::Object^ label(System::Object^ input, System::Object^ strct, System::Object^ output) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_strct = nullptr;
  System::Object^ __pyx_v_output = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_strct_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  npy_intp __pyx_v_max_label;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_strct = strct;
  __pyx_v_output = output;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":614
 * 
 * def label(object input, object strct, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":615
 * def label(object input, object strct, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef npy_intp max_label
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_strct)); 
  __pyx_v_strct_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":616
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef npy_intp max_label
 *     NI_Label(ARRAY(input_), ARRAY(strct_), &max_label, ARRAY(output_))
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":618
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef npy_intp max_label
 *     NI_Label(ARRAY(input_), ARRAY(strct_), &max_label, ARRAY(output_))             # <<<<<<<<<<<<<<
 *     return max_label
 * 
 */
  __pyx_t_2 = NI_Label(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_strct_), (&__pyx_v_max_label), ARRAY(__pyx_v_output_)); 

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":619
 *     cdef npy_intp max_label
 *     NI_Label(ARRAY(input_), ARRAY(strct_), &max_label, ARRAY(output_))
 *     return max_label             # <<<<<<<<<<<<<<
 * 
 * def find_objects(object input, npy_intp max_label):
 */
  __pyx_t_1 = __pyx_v_max_label;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":621
 *     return max_label
 * 
 * def find_objects(object input, npy_intp max_label):             # <<<<<<<<<<<<<<
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef npy_intp *regions = NULL
 */

static System::Object^ find_objects(System::Object^ input, System::Object^ max_label) {
  System::Object^ __pyx_v_input = nullptr;
  npy_intp __pyx_v_max_label;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  npy_intp *__pyx_v_regions;
  int __pyx_v_ndim;
  System::Object^ __pyx_v_result;
  npy_intp __pyx_v_idx;
  System::Object^ __pyx_v_ii;
  System::Object^ __pyx_v_tup;
  System::Object^ __pyx_v_jj;
  System::Object^ __pyx_v_slc;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> __pyx_t_6;
  System::Object^ __pyx_t_7 = nullptr;
  npy_intp __pyx_t_8;
  System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> __pyx_t_9;
  System::Object^ __pyx_t_10 = nullptr;
  Py_ssize_t __pyx_t_11;
  System::Object^ __pyx_t_12 = nullptr;
  System::Object^ __pyx_t_13 = nullptr;
  Py_ssize_t __pyx_t_14;
  __pyx_v_input = input;
  __pyx_v_max_label = __site_cvt_cvt_npy_intp_621_0->Target(__site_cvt_cvt_npy_intp_621_0, max_label);
  __pyx_v_result = nullptr;
  __pyx_v_ii = nullptr;
  __pyx_v_tup = nullptr;
  __pyx_v_jj = nullptr;
  __pyx_v_slc = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":622
 * 
 * def find_objects(object input, npy_intp max_label):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef npy_intp *regions = NULL
 *     cdef int ndim = NpyArray_NDIM(ARRAY(input_))
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":623
 * def find_objects(object input, npy_intp max_label):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef npy_intp *regions = NULL             # <<<<<<<<<<<<<<
 *     cdef int ndim = NpyArray_NDIM(ARRAY(input_))
 *     cdef list result
 */
  __pyx_v_regions = NULL;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":624
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef npy_intp *regions = NULL
 *     cdef int ndim = NpyArray_NDIM(ARRAY(input_))             # <<<<<<<<<<<<<<
 *     cdef list result
 *     cdef npy_intp i, idx
 */
  __pyx_v_ndim = NpyArray_NDIM(ARRAY(__pyx_v_input_));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":627
 *     cdef list result
 *     cdef npy_intp i, idx
 *     if max_label < 0:             # <<<<<<<<<<<<<<
 *         max_label = 0
 *     if max_label > 0:
 */
  __pyx_t_2 = (__pyx_v_max_label < 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":628
 *     cdef npy_intp i, idx
 *     if max_label < 0:
 *         max_label = 0             # <<<<<<<<<<<<<<
 *     if max_label > 0:
 *         if ndim > 0:
 */
    __pyx_v_max_label = 0;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":629
 *     if max_label < 0:
 *         max_label = 0
 *     if max_label > 0:             # <<<<<<<<<<<<<<
 *         if ndim > 0:
 *             regions = <npy_intp*>malloc(2 * max_label * ndim * sizeof(npy_intp))
 */
  __pyx_t_2 = (__pyx_v_max_label > 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":630
 *         max_label = 0
 *     if max_label > 0:
 *         if ndim > 0:             # <<<<<<<<<<<<<<
 *             regions = <npy_intp*>malloc(2 * max_label * ndim * sizeof(npy_intp))
 *         else:
 */
    __pyx_t_2 = (__pyx_v_ndim > 0);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":631
 *     if max_label > 0:
 *         if ndim > 0:
 *             regions = <npy_intp*>malloc(2 * max_label * ndim * sizeof(npy_intp))             # <<<<<<<<<<<<<<
 *         else:
 *             regions = <npy_intp*>malloc(max_label * sizeof(npy_intp))
 */
      __pyx_v_regions = ((npy_intp *)malloc((((2 * __pyx_v_max_label) * __pyx_v_ndim) * (sizeof(npy_intp)))));
      goto __pyx_L7;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":633
 *             regions = <npy_intp*>malloc(2 * max_label * ndim * sizeof(npy_intp))
 *         else:
 *             regions = <npy_intp*>malloc(max_label * sizeof(npy_intp))             # <<<<<<<<<<<<<<
 *         if regions == NULL:
 *             raise_no_memory()
 */
      __pyx_v_regions = ((npy_intp *)malloc((__pyx_v_max_label * (sizeof(npy_intp)))));
    }
    __pyx_L7:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":634
 *         else:
 *             regions = <npy_intp*>malloc(max_label * sizeof(npy_intp))
 *         if regions == NULL:             # <<<<<<<<<<<<<<
 *             raise_no_memory()
 * 
 */
    __pyx_t_2 = (__pyx_v_regions == NULL);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":635
 *             regions = <npy_intp*>malloc(max_label * sizeof(npy_intp))
 *         if regions == NULL:
 *             raise_no_memory()             # <<<<<<<<<<<<<<
 * 
 *     try:
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "raise_no_memory");
      __pyx_t_3 = __site_call0_635_27->Target(__site_call0_635_27, __pyx_context, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_3 = nullptr;
      goto __pyx_L8;
    }
    __pyx_L8:;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":637
 *             raise_no_memory()
 * 
 *     try:             # <<<<<<<<<<<<<<
 *         NI_FindObjects(ARRAY(input_), max_label, regions)
 *         result = [None] * max_label
 */
  try {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":638
 * 
 *     try:
 *         NI_FindObjects(ARRAY(input_), max_label, regions)             # <<<<<<<<<<<<<<
 *         result = [None] * max_label
 *         for ii in range(max_label):
 */
    __pyx_t_4 = NI_FindObjects(ARRAY(__pyx_v_input_), __pyx_v_max_label, __pyx_v_regions); 

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":639
 *     try:
 *         NI_FindObjects(ARRAY(input_), max_label, regions)
 *         result = [None] * max_label             # <<<<<<<<<<<<<<
 *         for ii in range(max_label):
 *             idx = 2 * ndim * ii if ndim > 0 else ii
 */
    __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{nullptr});
    __pyx_t_1 = __pyx_v_max_label;
    __pyx_t_5 = __site_op_mul_639_24->Target(__site_op_mul_639_24, ((System::Object^)__pyx_t_3), __pyx_t_1);
    __pyx_t_3 = nullptr;
    __pyx_t_1 = nullptr;
    if (__pyx_t_5 != nullptr && dynamic_cast<IronPython::Runtime::List^>(__pyx_t_5) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_result = ((System::Object^)__pyx_t_5);
    __pyx_t_5 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":640
 *         NI_FindObjects(ARRAY(input_), max_label, regions)
 *         result = [None] * max_label
 *         for ii in range(max_label):             # <<<<<<<<<<<<<<
 *             idx = 2 * ndim * ii if ndim > 0 else ii
 *             if regions[idx] >= 0:
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "range");
    __pyx_t_1 = __pyx_v_max_label;
    __pyx_t_3 = __site_call1_640_23->Target(__site_call1_640_23, __pyx_context, __pyx_t_5, __pyx_t_1);
    __pyx_t_5 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_6 = __site_get_iterator_640_8->Target(__site_get_iterator_640_8, __pyx_t_3);
    try {
      while (__pyx_t_6.Key->MoveNext()) {
        __pyx_v_ii = ((System::Object^)__pyx_t_6.Key->Current);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":641
 *         result = [None] * max_label
 *         for ii in range(max_label):
 *             idx = 2 * ndim * ii if ndim > 0 else ii             # <<<<<<<<<<<<<<
 *             if regions[idx] >= 0:
 *                 tup = [None] * ndim
 */
        if ((__pyx_v_ndim > 0)) {
          __pyx_t_5 = (2 * __pyx_v_ndim);
          __pyx_t_7 = __site_op_mul_641_27->Target(__site_op_mul_641_27, __pyx_t_5, __pyx_v_ii);
          __pyx_t_5 = nullptr;
          __pyx_t_1 = __pyx_t_7;
          __pyx_t_7 = nullptr;
        } else {
          __pyx_t_1 = __pyx_v_ii;
        }
        __pyx_t_8 = __site_cvt_cvt_npy_intp_641_18->Target(__site_cvt_cvt_npy_intp_641_18, __pyx_t_1);
        __pyx_t_1 = nullptr;
        __pyx_v_idx = __pyx_t_8;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":642
 *         for ii in range(max_label):
 *             idx = 2 * ndim * ii if ndim > 0 else ii
 *             if regions[idx] >= 0:             # <<<<<<<<<<<<<<
 *                 tup = [None] * ndim
 *                 for jj in range(ndim):
 */
        __pyx_t_2 = ((__pyx_v_regions[__pyx_v_idx]) >= 0);
        if (__pyx_t_2) {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":643
 *             idx = 2 * ndim * ii if ndim > 0 else ii
 *             if regions[idx] >= 0:
 *                 tup = [None] * ndim             # <<<<<<<<<<<<<<
 *                 for jj in range(ndim):
 *                     slc = slice(regions[idx + jj], regions[idx + jj + ndim], None)
 */
          __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{nullptr});
          __pyx_t_7 = __pyx_v_ndim;
          __pyx_t_5 = __site_op_mul_643_29->Target(__site_op_mul_643_29, ((System::Object^)__pyx_t_1), __pyx_t_7);
          __pyx_t_1 = nullptr;
          __pyx_t_7 = nullptr;
          if (__pyx_t_5 != nullptr && dynamic_cast<IronPython::Runtime::List^>(__pyx_t_5) == nullptr) {
            throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
          }
          __pyx_v_tup = ((System::Object^)__pyx_t_5);
          __pyx_t_5 = nullptr;

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":644
 *             if regions[idx] >= 0:
 *                 tup = [None] * ndim
 *                 for jj in range(ndim):             # <<<<<<<<<<<<<<
 *                     slc = slice(regions[idx + jj], regions[idx + jj + ndim], None)
 *                     tup[jj] = slc
 */
          __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "range");
          __pyx_t_7 = __pyx_v_ndim;
          __pyx_t_1 = __site_call1_644_31->Target(__site_call1_644_31, __pyx_context, __pyx_t_5, __pyx_t_7);
          __pyx_t_5 = nullptr;
          __pyx_t_7 = nullptr;
          __pyx_t_9 = __site_get_iterator_644_16->Target(__site_get_iterator_644_16, __pyx_t_1);
          try {
            while (__pyx_t_9.Key->MoveNext()) {
              __pyx_v_jj = ((System::Object^)__pyx_t_9.Key->Current);

              /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":645
 *                 tup = [None] * ndim
 *                 for jj in range(ndim):
 *                     slc = slice(regions[idx + jj], regions[idx + jj + ndim], None)             # <<<<<<<<<<<<<<
 *                     tup[jj] = slc
 *                 result[ii] = tuple(tup)
 */
              __pyx_t_7 = PythonOps::GetGlobal(__pyx_context, "slice");
              __pyx_t_5 = __pyx_v_idx;
              __pyx_t_10 = __site_op_add_645_44->Target(__site_op_add_645_44, __pyx_t_5, __pyx_v_jj);
              __pyx_t_5 = nullptr;
              __pyx_t_11 = __site_cvt_cvt_Py_ssize_t_645_44->Target(__site_cvt_cvt_Py_ssize_t_645_44, __pyx_t_10);
              __pyx_t_10 = nullptr;
              __pyx_t_10 = (__pyx_v_regions[__pyx_t_11]);
              __pyx_t_5 = __pyx_v_idx;
              __pyx_t_12 = __site_op_add_645_63->Target(__site_op_add_645_63, __pyx_t_5, __pyx_v_jj);
              __pyx_t_5 = nullptr;
              __pyx_t_5 = __pyx_v_ndim;
              __pyx_t_13 = __site_op_add_645_68->Target(__site_op_add_645_68, __pyx_t_12, __pyx_t_5);
              __pyx_t_12 = nullptr;
              __pyx_t_5 = nullptr;
              __pyx_t_14 = __site_cvt_cvt_Py_ssize_t_645_68->Target(__site_cvt_cvt_Py_ssize_t_645_68, __pyx_t_13);
              __pyx_t_13 = nullptr;
              __pyx_t_13 = (__pyx_v_regions[__pyx_t_14]);
              __pyx_t_5 = __site_call3_645_31->Target(__site_call3_645_31, __pyx_context, ((System::Object^)__pyx_t_7), __pyx_t_10, __pyx_t_13, nullptr);
              __pyx_t_7 = nullptr;
              __pyx_t_10 = nullptr;
              __pyx_t_13 = nullptr;
              __pyx_v_slc = __pyx_t_5;
              __pyx_t_5 = nullptr;

              /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":646
 *                 for jj in range(ndim):
 *                     slc = slice(regions[idx + jj], regions[idx + jj + ndim], None)
 *                     tup[jj] = slc             # <<<<<<<<<<<<<<
 *                 result[ii] = tuple(tup)
 *             else:
 */
              __site_setindex_646_23->Target(__site_setindex_646_23, ((System::Object^)__pyx_v_tup), __pyx_v_jj, __pyx_v_slc);
            }
          }
          finally {
            PythonOps::ForLoopDispose(__pyx_t_9);
          }

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":647
 *                     slc = slice(regions[idx + jj], regions[idx + jj + ndim], None)
 *                     tup[jj] = slc
 *                 result[ii] = tuple(tup)             # <<<<<<<<<<<<<<
 *             else:
 *                 result[ii] = None
 */
          __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "tuple");
          __pyx_t_13 = __site_call1_647_34->Target(__site_call1_647_34, __pyx_context, ((System::Object^)__pyx_t_5), ((System::Object^)__pyx_v_tup));
          __pyx_t_5 = nullptr;
          __site_setindex_647_22->Target(__site_setindex_647_22, ((System::Object^)__pyx_v_result), __pyx_v_ii, __pyx_t_13);
          __pyx_t_13 = nullptr;
          goto __pyx_L9;
        }
        /*else*/ {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":649
 *                 result[ii] = tuple(tup)
 *             else:
 *                 result[ii] = None             # <<<<<<<<<<<<<<
 *     finally:
 *         free(regions)
 */
          __site_setindex_649_22->Target(__site_setindex_649_22, ((System::Object^)__pyx_v_result), __pyx_v_ii, nullptr);
        }
        __pyx_L9:;
      }
    }
    finally {
      PythonOps::ForLoopDispose(__pyx_t_6);
    }
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":651
 *                 result[ii] = None
 *     finally:
 *         free(regions)             # <<<<<<<<<<<<<<
 * 
 *     return result
 */
  finally {
    free(__pyx_v_regions);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":653
 *         free(regions)
 * 
 *     return result             # <<<<<<<<<<<<<<
 * 
 * def watershed_ift(object input, object markers, object strct, object output):
 */
  __pyx_r = ((System::Object^)__pyx_v_result);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":655
 *     return result
 * 
 * def watershed_ift(object input, object markers, object strct, object output):             # <<<<<<<<<<<<<<
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray markers_ = NI_ObjectToInputArray(markers)
 */

static System::Object^ watershed_ift(System::Object^ input, System::Object^ markers, System::Object^ strct, System::Object^ output) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_markers = nullptr;
  System::Object^ __pyx_v_strct = nullptr;
  System::Object^ __pyx_v_output = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_markers_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_strct_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_markers = markers;
  __pyx_v_strct = strct;
  __pyx_v_output = output;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":656
 * 
 * def watershed_ift(object input, object markers, object strct, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray markers_ = NI_ObjectToInputArray(markers)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":657
 * def watershed_ift(object input, object markers, object strct, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray markers_ = NI_ObjectToInputArray(markers)             # <<<<<<<<<<<<<<
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_markers)); 
  __pyx_v_markers_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":658
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray markers_ = NI_ObjectToInputArray(markers)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_WatershedIFT(ARRAY(input_), ARRAY(markers_), ARRAY(strct_), ARRAY(output_))
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_strct)); 
  __pyx_v_strct_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":659
 *     cdef ndarray markers_ = NI_ObjectToInputArray(markers)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_WatershedIFT(ARRAY(input_), ARRAY(markers_), ARRAY(strct_), ARRAY(output_))
 * 
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":660
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_WatershedIFT(ARRAY(input_), ARRAY(markers_), ARRAY(strct_), ARRAY(output_))             # <<<<<<<<<<<<<<
 * 
 * def distance_transform_bf(object input, int metric, object sampling, object output,
 */
  __pyx_t_2 = NI_WatershedIFT(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_markers_), ARRAY(__pyx_v_strct_), ARRAY(__pyx_v_output_)); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":662
 *     NI_WatershedIFT(ARRAY(input_), ARRAY(markers_), ARRAY(strct_), ARRAY(output_))
 * 
 * def distance_transform_bf(object input, int metric, object sampling, object output,             # <<<<<<<<<<<<<<
 *                           object features):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 */

static System::Object^ distance_transform_bf(System::Object^ input, System::Object^ metric, System::Object^ sampling, System::Object^ output, System::Object^ features) {
  System::Object^ __pyx_v_input = nullptr;
  int __pyx_v_metric;
  System::Object^ __pyx_v_sampling = nullptr;
  System::Object^ __pyx_v_output = nullptr;
  System::Object^ __pyx_v_features = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_sampling_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_features_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  NpyArray *__pyx_t_4;
  NpyArray *__pyx_t_5;
  NpyArray *__pyx_t_6;
  int __pyx_t_7;
  __pyx_v_input = input;
  __pyx_v_metric = __site_cvt_cvt_int_662_0->Target(__site_cvt_cvt_int_662_0, metric);
  __pyx_v_sampling = sampling;
  __pyx_v_output = output;
  __pyx_v_features = features;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":664
 * def distance_transform_bf(object input, int metric, object sampling, object output,
 *                           object features):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
 *     cdef ndarray output_ = None if output is None else NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":665
 *                           object features):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = None if output is None else NI_ObjectToOutputArray(output)
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
 */
  __pyx_t_2 = (__pyx_v_sampling == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_sampling)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_sampling_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":666
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
 *     cdef ndarray output_ = None if output is None else NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
 *     NI_DistanceTransformBruteForce(ARRAY(input_), metric,
 */
  __pyx_t_2 = (__pyx_v_output == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":667
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
 *     cdef ndarray output_ = None if output is None else NI_ObjectToOutputArray(output)
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)             # <<<<<<<<<<<<<<
 *     NI_DistanceTransformBruteForce(ARRAY(input_), metric,
 *                                    <NpyArray*>NULL if sampling_ is None else ARRAY(sampling_),
 */
  __pyx_t_2 = (__pyx_v_features == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_features)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_features_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":669
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
 *     NI_DistanceTransformBruteForce(ARRAY(input_), metric,
 *                                    <NpyArray*>NULL if sampling_ is None else ARRAY(sampling_),             # <<<<<<<<<<<<<<
 *                                    <NpyArray*>NULL if output_ is None else ARRAY(output_),
 *                                    <NpyArray*>NULL if features_ is None else ARRAY(features_))
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_sampling_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = ((NpyArray *)NULL);
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_sampling_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":670
 *     NI_DistanceTransformBruteForce(ARRAY(input_), metric,
 *                                    <NpyArray*>NULL if sampling_ is None else ARRAY(sampling_),
 *                                    <NpyArray*>NULL if output_ is None else ARRAY(output_),             # <<<<<<<<<<<<<<
 *                                    <NpyArray*>NULL if features_ is None else ARRAY(features_))
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_output_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_5 = ((NpyArray *)NULL);
  } else {
    __pyx_t_5 = ARRAY(__pyx_v_output_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":671
 *                                    <NpyArray*>NULL if sampling_ is None else ARRAY(sampling_),
 *                                    <NpyArray*>NULL if output_ is None else ARRAY(output_),
 *                                    <NpyArray*>NULL if features_ is None else ARRAY(features_))             # <<<<<<<<<<<<<<
 * 
 * def distance_transform_op(object strct, object distances, object features):
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_features_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_6 = ((NpyArray *)NULL);
  } else {
    __pyx_t_6 = ARRAY(__pyx_v_features_);
  }
  __pyx_t_7 = NI_DistanceTransformBruteForce(ARRAY(__pyx_v_input_), __pyx_v_metric, __pyx_t_4, __pyx_t_5, __pyx_t_6); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":673
 *                                    <NpyArray*>NULL if features_ is None else ARRAY(features_))
 * 
 * def distance_transform_op(object strct, object distances, object features):             # <<<<<<<<<<<<<<
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray distances_ = NI_ObjectToIoArray(distances)
 */

static System::Object^ distance_transform_op(System::Object^ strct, System::Object^ distances, System::Object^ features) {
  System::Object^ __pyx_v_strct = nullptr;
  System::Object^ __pyx_v_distances = nullptr;
  System::Object^ __pyx_v_features = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_strct_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_distances_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_features_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  NpyArray *__pyx_t_4;
  int __pyx_t_5;
  __pyx_v_strct = strct;
  __pyx_v_distances = distances;
  __pyx_v_features = features;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":674
 * 
 * def distance_transform_op(object strct, object distances, object features):
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)             # <<<<<<<<<<<<<<
 *     cdef ndarray distances_ = NI_ObjectToIoArray(distances)
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_strct)); 
  __pyx_v_strct_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":675
 * def distance_transform_op(object strct, object distances, object features):
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray distances_ = NI_ObjectToIoArray(distances)             # <<<<<<<<<<<<<<
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
 *     NI_DistanceTransformOnePass(ARRAY(strct_), ARRAY(distances_),
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToIoArray(__pyx_v_distances)); 
  __pyx_v_distances_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":676
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray distances_ = NI_ObjectToIoArray(distances)
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)             # <<<<<<<<<<<<<<
 *     NI_DistanceTransformOnePass(ARRAY(strct_), ARRAY(distances_),
 *                                 <NpyArray*>NULL if features_ is None else ARRAY(features_))
 */
  __pyx_t_2 = (__pyx_v_features == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_features)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_features_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":678
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
 *     NI_DistanceTransformOnePass(ARRAY(strct_), ARRAY(distances_),
 *                                 <NpyArray*>NULL if features_ is None else ARRAY(features_))             # <<<<<<<<<<<<<<
 * 
 * def euclidean_feature_transform(object input, object sampling, object features):
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_features_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = ((NpyArray *)NULL);
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_features_);
  }
  __pyx_t_5 = NI_DistanceTransformOnePass(ARRAY(__pyx_v_strct_), ARRAY(__pyx_v_distances_), __pyx_t_4); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":680
 *                                 <NpyArray*>NULL if features_ is None else ARRAY(features_))
 * 
 * def euclidean_feature_transform(object input, object sampling, object features):             # <<<<<<<<<<<<<<
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
 */

static System::Object^ euclidean_feature_transform(System::Object^ input, System::Object^ sampling, System::Object^ features) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_sampling = nullptr;
  System::Object^ __pyx_v_features = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_sampling_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_features_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  NpyArray *__pyx_t_4;
  int __pyx_t_5;
  __pyx_v_input = input;
  __pyx_v_sampling = sampling;
  __pyx_v_features = features;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":681
 * 
 * def euclidean_feature_transform(object input, object sampling, object features):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
 *     cdef ndarray features_ = NI_ObjectToOutputArray(features)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":682
 * def euclidean_feature_transform(object input, object sampling, object features):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)             # <<<<<<<<<<<<<<
 *     cdef ndarray features_ = NI_ObjectToOutputArray(features)
 *     NI_EuclideanFeatureTransform(ARRAY(input_),
 */
  __pyx_t_2 = (__pyx_v_sampling == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_sampling)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_sampling_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":683
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
 *     cdef ndarray features_ = NI_ObjectToOutputArray(features)             # <<<<<<<<<<<<<<
 *     NI_EuclideanFeatureTransform(ARRAY(input_),
 *                                  <NpyArray*>NULL if sampling_ is None else ARRAY(sampling_),
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_features)); 
  __pyx_v_features_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":685
 *     cdef ndarray features_ = NI_ObjectToOutputArray(features)
 *     NI_EuclideanFeatureTransform(ARRAY(input_),
 *                                  <NpyArray*>NULL if sampling_ is None else ARRAY(sampling_),             # <<<<<<<<<<<<<<
 *                                  ARRAY(features_))
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_sampling_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = ((NpyArray *)NULL);
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_sampling_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":686
 *     NI_EuclideanFeatureTransform(ARRAY(input_),
 *                                  <NpyArray*>NULL if sampling_ is None else ARRAY(sampling_),
 *                                  ARRAY(features_))             # <<<<<<<<<<<<<<
 * 
 * cdef class CoordinateListWrapper:
 */
  __pyx_t_5 = NI_EuclideanFeatureTransform(ARRAY(__pyx_v_input_), __pyx_t_4, ARRAY(__pyx_v_features_)); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":688
 *                                  ARRAY(features_))
 * 
 * cdef class CoordinateListWrapper:             # <<<<<<<<<<<<<<
 *     cdef NI_CoordinateList *ptr
 *     def __cinit__(self):
 */
[PythonType]
ref struct CoordinateListWrapper {
  NI_CoordinateList *ptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":690
 * cdef class CoordinateListWrapper:
 *     cdef NI_CoordinateList *ptr
 *     def __cinit__(self):             # <<<<<<<<<<<<<<
 *         self.ptr = NULL
 *     def __dealloc__(self):
 */

  CoordinateListWrapper() {
    int __pyx_r;
    System::Object^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":691
 *     cdef NI_CoordinateList *ptr
 *     def __cinit__(self):
 *         self.ptr = NULL             # <<<<<<<<<<<<<<
 *     def __dealloc__(self):
 *         NI_FreeCoordinateList(self.ptr)
 */
    ((CoordinateListWrapper^)__pyx_v_self)->ptr = NULL;

    __pyx_r = 0;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":692
 *     def __cinit__(self):
 *         self.ptr = NULL
 *     def __dealloc__(self):             # <<<<<<<<<<<<<<
 *         NI_FreeCoordinateList(self.ptr)
 * 
 */

  !CoordinateListWrapper() {
    System::Object^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":693
 *         self.ptr = NULL
 *     def __dealloc__(self):
 *         NI_FreeCoordinateList(self.ptr)             # <<<<<<<<<<<<<<
 * 
 * def binary_erosion(object input, object strct, object mask, object output,
 */
    NI_FreeCoordinateList(((CoordinateListWrapper^)__pyx_v_self)->ptr);

  }
  ~CoordinateListWrapper() { this->!CoordinateListWrapper(); }
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":695
 *         NI_FreeCoordinateList(self.ptr)
 * 
 * def binary_erosion(object input, object strct, object mask, object output,             # <<<<<<<<<<<<<<
 *                    int border_value, object origins, int invert,
 *                    int center_is_true, int return_coordinates):
 */

static System::Object^ binary_erosion(System::Object^ input, System::Object^ strct, System::Object^ mask, System::Object^ output, System::Object^ border_value, System::Object^ origins, System::Object^ invert, System::Object^ center_is_true, System::Object^ return_coordinates) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_strct = nullptr;
  System::Object^ __pyx_v_mask = nullptr;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_border_value;
  System::Object^ __pyx_v_origins = nullptr;
  int __pyx_v_invert;
  int __pyx_v_center_is_true;
  int __pyx_v_return_coordinates;
  NumpyDotNet::ndarray^ __pyx_v_input_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_strct_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_mask_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_output_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_origins_ = nullptr;
  int __pyx_v_changed;
  NI_CoordinateList *__pyx_v_coordinate_list;
  CoordinateListWrapper^ __pyx_v_colist_wrapper;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  NpyArray *__pyx_t_4;
  NI_CoordinateList **__pyx_t_5;
  int __pyx_t_6;
  __pyx_v_input = input;
  __pyx_v_strct = strct;
  __pyx_v_mask = mask;
  __pyx_v_output = output;
  __pyx_v_border_value = __site_cvt_cvt_int_695_0->Target(__site_cvt_cvt_int_695_0, border_value);
  __pyx_v_origins = origins;
  __pyx_v_invert = __site_cvt_cvt_int_695_0_1->Target(__site_cvt_cvt_int_695_0_1, invert);
  __pyx_v_center_is_true = __site_cvt_cvt_int_695_0_2->Target(__site_cvt_cvt_int_695_0_2, center_is_true);
  __pyx_v_return_coordinates = __site_cvt_cvt_int_695_0_3->Target(__site_cvt_cvt_int_695_0_3, return_coordinates);
  __pyx_v_colist_wrapper = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":698
 *                    int border_value, object origins, int invert,
 *                    int center_is_true, int return_coordinates):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":699
 *                    int center_is_true, int return_coordinates):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)             # <<<<<<<<<<<<<<
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_strct)); 
  __pyx_v_strct_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":700
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
 */
  __pyx_t_2 = (__pyx_v_mask == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_mask)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_mask_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":701
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
 *     cdef int changed
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":702
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     cdef int changed
 *     cdef NI_CoordinateList *coordinate_list = NULL
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origins, NPY_INTP, NPY_CARRAY)); 
  __pyx_v_origins_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":704
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
 *     cdef int changed
 *     cdef NI_CoordinateList *coordinate_list = NULL             # <<<<<<<<<<<<<<
 *     NI_BinaryErosion(ARRAY(input_),
 *                      ARRAY(strct_),
 */
  __pyx_v_coordinate_list = NULL;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":707
 *     NI_BinaryErosion(ARRAY(input_),
 *                      ARRAY(strct_),
 *                      <NpyArray*>NULL if mask_ is None else ARRAY(mask_),             # <<<<<<<<<<<<<<
 *                      ARRAY(output_),
 *                      border_value,
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_mask_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = ((NpyArray *)NULL);
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_mask_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":714
 *                      center_is_true,
 *                      &changed,
 *                      &coordinate_list if return_coordinates else NULL)             # <<<<<<<<<<<<<<
 *     if return_coordinates:
 *         colist_wrapper = CoordinateListWrapper()
 */
  if (__pyx_v_return_coordinates) {
    __pyx_t_5 = (&__pyx_v_coordinate_list);
  } else {
    __pyx_t_5 = NULL;
  }
  __pyx_t_6 = NI_BinaryErosion(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_strct_), __pyx_t_4, ARRAY(__pyx_v_output_), __pyx_v_border_value, ((npy_intp *)NpyArray_DATA(ARRAY(__pyx_v_origins_))), __pyx_v_invert, __pyx_v_center_is_true, (&__pyx_v_changed), __pyx_t_5); 

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":715
 *                      &changed,
 *                      &coordinate_list if return_coordinates else NULL)
 *     if return_coordinates:             # <<<<<<<<<<<<<<
 *         colist_wrapper = CoordinateListWrapper()
 *         colist_wrapper.ptr = coordinate_list
 */
  if (__pyx_v_return_coordinates) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":716
 *                      &coordinate_list if return_coordinates else NULL)
 *     if return_coordinates:
 *         colist_wrapper = CoordinateListWrapper()             # <<<<<<<<<<<<<<
 *         colist_wrapper.ptr = coordinate_list
 *         return changed, colist_wrapper
 */
    __pyx_t_1 = __site_call0_716_46->Target(__site_call0_716_46, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_7ndimage_9_nd_image_CoordinateListWrapper)));
    __pyx_v_colist_wrapper = ((CoordinateListWrapper^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":717
 *     if return_coordinates:
 *         colist_wrapper = CoordinateListWrapper()
 *         colist_wrapper.ptr = coordinate_list             # <<<<<<<<<<<<<<
 *         return changed, colist_wrapper
 *     else:
 */
    __pyx_v_colist_wrapper->ptr = __pyx_v_coordinate_list;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":718
 *         colist_wrapper = CoordinateListWrapper()
 *         colist_wrapper.ptr = coordinate_list
 *         return changed, colist_wrapper             # <<<<<<<<<<<<<<
 *     else:
 *         return changed
 */
    __pyx_t_1 = __pyx_v_changed;
    __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1, ((System::Object^)__pyx_v_colist_wrapper)});
    __pyx_t_1 = nullptr;
    __pyx_r = __pyx_t_3;
    __pyx_t_3 = nullptr;
    goto __pyx_L0;
    goto __pyx_L5;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":720
 *         return changed, colist_wrapper
 *     else:
 *         return changed             # <<<<<<<<<<<<<<
 * 
 * def binary_erosion2(object array, object strct, object mask, int niter,
 */
    __pyx_t_3 = __pyx_v_changed;
    __pyx_r = __pyx_t_3;
    __pyx_t_3 = nullptr;
    goto __pyx_L0;
  }
  __pyx_L5:;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":722
 *         return changed
 * 
 * def binary_erosion2(object array, object strct, object mask, int niter,             # <<<<<<<<<<<<<<
 *                     object origins, int invert,
 *                     CoordinateListWrapper colist_wrapper):
 */

static System::Object^ binary_erosion2(System::Object^ array, System::Object^ strct, System::Object^ mask, System::Object^ niter, System::Object^ origins, System::Object^ invert, System::Object^ colist_wrapper) {
  System::Object^ __pyx_v_array = nullptr;
  System::Object^ __pyx_v_strct = nullptr;
  System::Object^ __pyx_v_mask = nullptr;
  int __pyx_v_niter;
  System::Object^ __pyx_v_origins = nullptr;
  int __pyx_v_invert;
  CoordinateListWrapper^ __pyx_v_colist_wrapper = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_array_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_strct_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_mask_ = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_origins_ = nullptr;
  NI_CoordinateList *__pyx_v_ptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  NpyArray *__pyx_t_4;
  int __pyx_t_5;
  __pyx_v_array = array;
  __pyx_v_strct = strct;
  __pyx_v_mask = mask;
  __pyx_v_niter = __site_cvt_cvt_int_722_0->Target(__site_cvt_cvt_int_722_0, niter);
  __pyx_v_origins = origins;
  __pyx_v_invert = __site_cvt_cvt_int_722_0_1->Target(__site_cvt_cvt_int_722_0_1, invert);
  __pyx_v_colist_wrapper = ((CoordinateListWrapper^)colist_wrapper);
  if (unlikely(dynamic_cast<CoordinateListWrapper^>(__pyx_v_colist_wrapper) == nullptr)) {
    throw PythonOps::TypeError("Argument 'colist_wrapper' has incorrect type");
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":725
 *                     object origins, int invert,
 *                     CoordinateListWrapper colist_wrapper):
 *     cdef ndarray array_ = NI_ObjectToIoArray(array)             # <<<<<<<<<<<<<<
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToIoArray(__pyx_v_array)); 
  __pyx_v_array_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":726
 *                     CoordinateListWrapper colist_wrapper):
 *     cdef ndarray array_ = NI_ObjectToIoArray(array)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)             # <<<<<<<<<<<<<<
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_strct)); 
  __pyx_v_strct_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":727
 *     cdef ndarray array_ = NI_ObjectToIoArray(array)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)             # <<<<<<<<<<<<<<
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
 *     cdef NI_CoordinateList *ptr = colist_wrapper.ptr
 */
  __pyx_t_2 = (__pyx_v_mask == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_mask)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_mask_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":728
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     cdef NI_CoordinateList *ptr = colist_wrapper.ptr
 *     NI_BinaryErosion2(ARRAY(array_),
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origins, NPY_INTP, NPY_CARRAY)); 
  __pyx_v_origins_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":729
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
 *     cdef NI_CoordinateList *ptr = colist_wrapper.ptr             # <<<<<<<<<<<<<<
 *     NI_BinaryErosion2(ARRAY(array_),
 *                       ARRAY(strct_),
 */
  __pyx_v_ptr = __pyx_v_colist_wrapper->ptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":732
 *     NI_BinaryErosion2(ARRAY(array_),
 *                       ARRAY(strct_),
 *                       <NpyArray*>NULL if mask_ is None else ARRAY(mask_),             # <<<<<<<<<<<<<<
 *                       niter,
 *                       <npy_intp*>NpyArray_DATA(ARRAY(origins_)),
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_mask_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = ((NpyArray *)NULL);
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_mask_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":736
 *                       <npy_intp*>NpyArray_DATA(ARRAY(origins_)),
 *                       invert,
 *                       &ptr)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_5 = NI_BinaryErosion2(ARRAY(__pyx_v_array_), ARRAY(__pyx_v_strct_), __pyx_t_4, __pyx_v_niter, ((npy_intp *)NpyArray_DATA(ARRAY(__pyx_v_origins_))), __pyx_v_invert, (&__pyx_v_ptr)); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":234
 * ctypedef npy_cdouble     complex_t
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":237
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

/* "../cython/include\numpy.pxd":239
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

  /* "../cython/include\numpy.pxd":240
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":242
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":243
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_243_18->Target(__site_get_append_243_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_243_25->Target(__site_call1_243_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":244
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":245
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):
 */
  __pyx_t_5 = __site_get_zeros_245_16->Target(__site_get_zeros_245_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_245_22->Target(__site_call3_245_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include\numpy.pxd":247
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

  /* "../cython/include\numpy.pxd":248
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":250
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":251
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_251_18->Target(__site_get_append_251_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_251_25->Target(__site_call1_251_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":252
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":253
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Empty(int nd, npy_intp *dims, dtype descr, int fortran):
 */
  __pyx_t_5 = __site_get_empty_253_16->Target(__site_get_empty_253_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_253_22->Target(__site_call3_253_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include\numpy.pxd":255
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

  /* "../cython/include\numpy.pxd":256
 * 
 * cdef inline object PyArray_Empty(int nd, npy_intp *dims, dtype descr, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(nd):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":258
 *     shape_list = []
 *     cdef int i
 *     for i in range(nd):             # <<<<<<<<<<<<<<
 *         shape_list.append(dims[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_nd;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include\numpy.pxd":259
 *     cdef int i
 *     for i in range(nd):
 *         shape_list.append(dims[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_259_18->Target(__site_get_append_259_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_dims[__pyx_v_i]);
    __pyx_t_5 = __site_call1_259_25->Target(__site_call1_259_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include\numpy.pxd":260
 *     for i in range(nd):
 *         shape_list.append(dims[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include\numpy.pxd":261
 *         shape_list.append(dims[i])
 *     import numpy
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_5 = __site_get_empty_261_16->Target(__site_get_empty_261_16, __pyx_v_numpy, __pyx_context);
  if (__pyx_v_fortran) {
    __pyx_t_4 = "F";
  } else {
    __pyx_t_4 = "C";
  }
  __pyx_t_1 = __site_call3_261_22->Target(__site_call3_261_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), ((System::Object^)__pyx_v_descr), ((System::Object^)__pyx_t_4));
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":264
 * 
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):             # <<<<<<<<<<<<<<
 *     assert subtype == NULL
 *     assert obj == NULL
 */

static CYTHON_INLINE System::Object^ PyArray_New(void *__pyx_v_subtype, int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, __pyx_t_5numpy_npy_intp *__pyx_v_strides, void *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags, void *__pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":265
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

  /* "../cython/include\numpy.pxd":266
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

  /* "../cython/include\numpy.pxd":267
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

/* "../cython/include\numpy.pxd":269
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

  /* "../cython/include\numpy.pxd":271
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):
 *      # XXX "long long" is wrong type
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void* PyArray_DATA(ndarray n) nogil:
 */
  __pyx_t_1 = __site_get_Array_271_54->Target(__site_get_Array_271_54, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_271_54->Target(__site_cvt_cvt_PY_LONG_LONG_271_54, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_CHKFLAGS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)), __pyx_v_flags);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":273
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)
 * 
 * cdef inline void* PyArray_DATA(ndarray n) nogil:             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^ __pyx_v_n) {
  void *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":275
 * cdef inline void* PyArray_DATA(ndarray n) nogil:
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n) nogil:
 */
  __pyx_t_1 = __site_get_Array_275_49->Target(__site_get_Array_275_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_275_49->Target(__site_cvt_cvt_PY_LONG_LONG_275_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DATA(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":277
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n) nogil:             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_intp_t *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":279
 * cdef inline intp_t* PyArray_DIMS(ndarray n) nogil:
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_279_49->Target(__site_get_Array_279_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_279_49->Target(__site_cvt_cvt_PY_LONG_LONG_279_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIMS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":281
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

  /* "../cython/include\numpy.pxd":283
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline NpyArray *PyArray_ARRAY(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_283_49->Target(__site_get_Array_283_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_283_49->Target(__site_cvt_cvt_PY_LONG_LONG_283_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_SIZE(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":285
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline NpyArray *PyArray_ARRAY(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return <NpyArray*> <long long>n.Array
 */

static CYTHON_INLINE NpyArray *PyArray_ARRAY(NumpyDotNet::ndarray^ __pyx_v_n) {
  NpyArray *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include\numpy.pxd":287
 * cdef inline NpyArray *PyArray_ARRAY(ndarray n):
 *     # XXX "long long" is wrong type
 *     return <NpyArray*> <long long>n.Array             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 */
  __pyx_t_1 = __site_get_Array_287_35->Target(__site_get_Array_287_35, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_287_35->Target(__site_cvt_cvt_PY_LONG_LONG_287_35, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = ((NpyArray *)((PY_LONG_LONG)__pyx_t_2));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":289
 *     return <NpyArray*> <long long>n.Array
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

  /* "../cython/include\numpy.pxd":290
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":291
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":292
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 */
  __pyx_t_1 = __site_get_NpyArray_292_22->Target(__site_get_NpyArray_292_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_FromAny_292_31->Target(__site_get_FromAny_292_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_292_39->Target(__site_call6_292_39, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":294
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

  /* "../cython/include\numpy.pxd":295
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:             # <<<<<<<<<<<<<<
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_ENSURECOPY);
  __pyx_t_2 = __site_op_and_295_13->Target(__site_op_and_295_13, __pyx_v_flags, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_295_13->Target(__site_istrue_295_13, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_3) {

    /* "../cython/include\numpy.pxd":296
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT             # <<<<<<<<<<<<<<
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 * 
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DEFAULT);
    __pyx_t_1 = __site_op_ior_296_14->Target(__site_op_ior_296_14, __pyx_v_flags, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_flags = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "../cython/include\numpy.pxd":297
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 */
  __pyx_t_4 = __site_cvt_cvt_int_297_77->Target(__site_cvt_cvt_int_297_77, __pyx_v_type);
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

/* "../cython/include\numpy.pxd":299
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
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

  /* "../cython/include\numpy.pxd":300
 * 
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":301
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":302
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Check(obj):
 */
  __pyx_t_1 = __site_get_NpyArray_302_22->Target(__site_get_NpyArray_302_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_CheckFromAny_302_31->Target(__site_get_CheckFromAny_302_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_302_44->Target(__site_call6_302_44, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":304
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

  /* "../cython/include\numpy.pxd":305
 * 
 * cdef inline object PyArray_Check(obj):
 *     import numpy as np             # <<<<<<<<<<<<<<
 *     return isinstance(obj, np.ndarray)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_np = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":306
 * cdef inline object PyArray_Check(obj):
 *     import numpy as np
 *     return isinstance(obj, np.ndarray)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_NDIM(obj):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = __site_get_ndarray_306_29->Target(__site_get_ndarray_306_29, __pyx_v_np, __pyx_context);
  __pyx_t_3 = __site_call2_306_21->Target(__site_call2_306_21, __pyx_context, __pyx_t_1, __pyx_v_obj, __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":308
 *     return isinstance(obj, np.ndarray)
 * 
 * cdef inline object PyArray_NDIM(obj):             # <<<<<<<<<<<<<<
 *     return obj.ndim
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include\numpy.pxd":309
 * 
 * cdef inline object PyArray_NDIM(obj):
 *     return obj.ndim             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
 */
  __pyx_t_1 = __site_get_ndim_309_14->Target(__site_get_ndim_309_14, __pyx_v_obj, __pyx_context);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include\numpy.pxd":311
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
  __site_get_AddReference_743_3 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "AddReference", false));
  __site_call1_743_16 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_Array_186_40 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_186_40 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Dtype_192_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Dtype", false));
  __site_call1_203_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_324_51 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_istrue_326_51 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_istrue_328_54 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_istrue_330_53 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_349_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndarray_358_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndarray", false));
  __site_call2_358_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_358_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_359_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_363_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_392_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_392_0 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_392_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_npy_intp_392_0 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_400_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_400_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_406_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_npy_intp_412_0 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_412_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_412_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_412_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_npy_intp_412_0_1 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_npy_intp_420_0 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_420_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_420_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_420_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_npy_intp_420_0_1 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_420_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_429_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_429_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_429_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_446_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_446_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_446_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_istrue_467_26 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_468_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_469_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_469_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_470_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_471_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_471_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_472_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_ARGS_KWARGS_482_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument(ArgumentType::List), Argument(ArgumentType::Dictionary)})));
  __site_cvt_cvt_npy_intp_485_0 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_485_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_485_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_485_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_npy_intp_485_0_1 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_call3_498_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_call1_ARGS_KWARGS_510_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument(ArgumentType::List), Argument(ArgumentType::Dictionary)})));
  __site_cvt_cvt_double_511_18 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_514_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_514_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call3_527_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_cvt_cvt_npy_intp_535_0 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_535_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_535_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_npy_intp_543_0 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_543_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_551_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_551_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_append_562_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_562_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_563_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_ARGS_KWARGS_564_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument(ArgumentType::List), Argument(ArgumentType::Dictionary)})));
  __site_getindex_566_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_double_566_22 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_569_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_569_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_569_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call3_588_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_cvt_cvt_int_602_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_602_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_602_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_npy_intp_621_0 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_call0_635_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_op_mul_639_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_call1_640_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_iterator_640_8 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_op_mul_641_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_cvt_npy_intp_641_18 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_643_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_call1_644_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_iterator_644_16 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_op_add_645_44 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt_cvt_Py_ssize_t_645_44 = CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, Py_ssize_t::typeid, ConversionResultKind::ExplicitCast));
  __site_op_add_645_63 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_add_645_68 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt_cvt_Py_ssize_t_645_68 = CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, Py_ssize_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call3_645_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_setindex_646_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_call1_647_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_setindex_647_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_setindex_649_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_int_662_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_695_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_695_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_695_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_695_0_3 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call0_716_46 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_cvt_cvt_int_722_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_722_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_append_243_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_243_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_zeros_245_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "zeros", false));
  __site_call3_245_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_append_251_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_251_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_253_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call3_253_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_append_259_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_259_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_261_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call3_261_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_Array_271_54 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_271_54 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_275_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_275_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_279_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_279_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_283_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_283_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_287_35 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_287_35 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_292_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_FromAny_292_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "FromAny", false));
  __site_call6_292_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_op_and_295_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::And));
  __site_istrue_295_13 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ior_296_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::OrAssign));
  __site_cvt_cvt_int_297_77 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_302_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_CheckFromAny_302_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "CheckFromAny", false));
  __site_call6_302_44 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_get_ndarray_306_29 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndarray", false));
  __site_call2_306_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_ndim_309_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
}
[SpecialName]
static void PerformModuleReload(PythonContext^ context, PythonDictionary^ dict) {
  dict["__builtins__"] = context->BuiltinModuleInstance;
  __pyx_context = (gcnew ModuleContext(dict, context))->GlobalContext;
  __Pyx_InitSites(__pyx_context);
  __Pyx_InitGlobals();
  /*--- Type init code ---*/
  __pyx_ptype_5scipy_7ndimage_9_nd_image_CallbackInfo = safe_cast<Types::PythonType^>(dict["CallbackInfo"]);
  __pyx_ptype_5scipy_7ndimage_9_nd_image_CoordinateListWrapper = safe_cast<Types::PythonType^>(dict["CoordinateListWrapper"]);
  /*--- Type import code ---*/
  // XXX skipping type ptr assignment for NumpyDotNet::ndarray
  // XXX skipping type ptr assignment for NumpyDotNet::dtype
  /*--- Create function pointers ---*/
  __pyx_delegate_val_cbwrapper_filter_1d = gcnew __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_filter_1d(cbwrapper_filter_1d);
  __pyx_function_pointer_cbwrapper_filter_1d = (__pyx_fp_t_cbwrapper_filter_1d)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_cbwrapper_filter_1d).ToPointer());
  __pyx_delegate_val_cbwrapper_filter = gcnew __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_filter(cbwrapper_filter);
  __pyx_function_pointer_cbwrapper_filter = (__pyx_fp_t_cbwrapper_filter)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_cbwrapper_filter).ToPointer());
  __pyx_delegate_val_cbwrapper_map = gcnew __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_map(cbwrapper_map);
  __pyx_function_pointer_cbwrapper_map = (__pyx_fp_t_cbwrapper_map)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_cbwrapper_map).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  PythonDictionary^ __pyx_t_3;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":33
 * #
 * 
 * import numpy as np             # <<<<<<<<<<<<<<
 * 
 * DEF DOTNET = True
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":226
 *                        itemsize, flags, NULL)
 * 
 * import_array()             # <<<<<<<<<<<<<<
 * 
 * #
 */
  import_array();

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":742
 * # capsule not implemented yet (npy3_compat.h versions)
 * 
 * import clr             # <<<<<<<<<<<<<<
 * clr.AddReference('IronPython')
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  PythonOps::SetGlobal(__pyx_context, "clr", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":743
 * 
 * import clr
 * clr.AddReference('IronPython')             # <<<<<<<<<<<<<<
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "clr");
  __pyx_t_2 = __site_get_AddReference_743_3->Target(__site_get_AddReference_743_3, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_743_16->Target(__site_call1_743_16, __pyx_context, __pyx_t_2, ((System::Object^)"IronPython"));
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":1
 * # Copyright (C) 2003-2005 Peter J. Verveer             # <<<<<<<<<<<<<<
 * # (ported to Cython by Dag Sverre Seljebotn)
 * #
 */
  __pyx_t_3 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "../cython/include\numpy.pxd":311
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

static Types::PythonType^ __pyx_ptype_5scipy_7ndimage_9_nd_image_CallbackInfo = nullptr;
static Types::PythonType^ __pyx_ptype_5scipy_7ndimage_9_nd_image_CoordinateListWrapper = nullptr;
/* Cython code section 'utility_code_def' */

/* Runtime support code */

#if 0
static CYTHON_INLINE int __Pyx_IsLittleEndian(void) {
  unsigned int n = 1;
  return *(unsigned char*)(&n) != 0;
}

typedef struct {
  __Pyx_StructField root;
  __Pyx_BufFmt_StackElem* head;
  size_t fmt_offset;
  int new_count, enc_count;
  int is_complex;
  char enc_type;
  char packmode;
} __Pyx_BufFmt_Context;

static void __Pyx_BufFmt_Init(__Pyx_BufFmt_Context* ctx,
                              __Pyx_BufFmt_StackElem* stack,
                              __Pyx_TypeInfo* type) {
  stack[0].field = &ctx->root;
  stack[0].parent_offset = 0;
  ctx->root.type = type;
  ctx->root.name = "buffer dtype";
  ctx->root.offset = 0;
  ctx->head = stack;
  ctx->head->field = &ctx->root;
  ctx->fmt_offset = 0;
  ctx->head->parent_offset = 0;
  ctx->packmode = '@';
  ctx->new_count = 1;
  ctx->enc_count = 0;
  ctx->enc_type = 0;
  ctx->is_complex = 0;
  while (type->typegroup == 'S') {
    ++ctx->head;
    ctx->head->field = type->fields;
    ctx->head->parent_offset = 0;
    type = type->fields->type;
  }
}

static int __Pyx_BufFmt_ParseNumber(const char** ts) {
    int count;
    const char* t = *ts;
    if (*t < '0' || *t > '9') {
      return -1;
    } else {
        count = *t++ - '0';
        while (*t >= '0' && *t < '9') {
            count *= 10;
            count += *t++ - '0';
        }
    }
    *ts = t;
    return count;
}

static void __Pyx_BufFmt_RaiseUnexpectedChar(char ch) {
  char msg[] = {ch, 0};
  PyErr_Format(PyExc_ValueError, "Unexpected format string character: '%s'", msg);
}

static const char* __Pyx_BufFmt_DescribeTypeChar(char ch, int is_complex) {
  switch (ch) {
    case 'b': return "'char'";
    case 'B': return "'unsigned char'";
    case 'h': return "'short'";
    case 'H': return "'unsigned short'";
    case 'i': return "'int'";
    case 'I': return "'unsigned int'";
    case 'l': return "'long'";
    case 'L': return "'unsigned long'";
    case 'q': return "'long long'";
    case 'Q': return "'unsigned long long'";
    case 'f': return (is_complex ? "'complex float'" : "'float'");
    case 'd': return (is_complex ? "'complex double'" : "'double'");
    case 'g': return (is_complex ? "'complex long double'" : "'long double'");
    case 'T': return "a struct";
    case 'O': return "Python object";
    case 'P': return "a pointer";
    case 0: return "end";
    default: return "unparseable format string";
  }
}

static size_t __Pyx_BufFmt_TypeCharToStandardSize(char ch, int is_complex) {
  switch (ch) {
    case '?': case 'c': case 'b': case 'B': return 1;
    case 'h': case 'H': return 2;
    case 'i': case 'I': case 'l': case 'L': return 4;
    case 'q': case 'Q': return 8;
    case 'f': return (is_complex ? 8 : 4);
    case 'd': return (is_complex ? 16 : 8);
    case 'g': {
      PyErr_SetString(PyExc_ValueError, "Python does not define a standard format string size for long double ('g')..");
      return 0;
    }
    case 'O': case 'P': return sizeof(void*);
    default:
      __Pyx_BufFmt_RaiseUnexpectedChar(ch);
      return 0;
    }
}

static size_t __Pyx_BufFmt_TypeCharToNativeSize(char ch, int is_complex) {
  switch (ch) {
    case 'c': case 'b': case 'B': return 1;
    case 'h': case 'H': return sizeof(short);
    case 'i': case 'I': return sizeof(int);
    case 'l': case 'L': return sizeof(long);
    #ifdef HAVE_LONG_LONG
    case 'q': case 'Q': return sizeof(PY_LONG_LONG);
    #endif
    case 'f': return sizeof(float) * (is_complex ? 2 : 1);
    case 'd': return sizeof(double) * (is_complex ? 2 : 1);
    case 'g': return sizeof(long double) * (is_complex ? 2 : 1);
    case 'O': case 'P': return sizeof(void*);
    default: {
      __Pyx_BufFmt_RaiseUnexpectedChar(ch);
      return 0;
    }    
  }
}

typedef struct { char c; short x; } __Pyx_st_short;
typedef struct { char c; int x; } __Pyx_st_int;
typedef struct { char c; long x; } __Pyx_st_long;
typedef struct { char c; float x; } __Pyx_st_float;
typedef struct { char c; double x; } __Pyx_st_double;
typedef struct { char c; long double x; } __Pyx_st_longdouble;
typedef struct { char c; void *x; } __Pyx_st_void_p;
#ifdef HAVE_LONG_LONG
typedef struct { char c; PY_LONG_LONG x; } __Pyx_s_long_long;
#endif

static size_t __Pyx_BufFmt_TypeCharToAlignment(char ch, int is_complex) {
  switch (ch) {
    case '?': case 'c': case 'b': case 'B': return 1;
    case 'h': case 'H': return sizeof(__Pyx_st_short) - sizeof(short);
    case 'i': case 'I': return sizeof(__Pyx_st_int) - sizeof(int);
    case 'l': case 'L': return sizeof(__Pyx_st_long) - sizeof(long);
#ifdef HAVE_LONG_LONG
    case 'q': case 'Q': return sizeof(__Pyx_s_long_long) - sizeof(PY_LONG_LONG);
#endif
    case 'f': return sizeof(__Pyx_st_float) - sizeof(float);
    case 'd': return sizeof(__Pyx_st_double) - sizeof(double);
    case 'g': return sizeof(__Pyx_st_longdouble) - sizeof(long double);
    case 'P': case 'O': return sizeof(__Pyx_st_void_p) - sizeof(void*);
    default:
      __Pyx_BufFmt_RaiseUnexpectedChar(ch);
      return 0;
    }
}

static size_t __Pyx_BufFmt_TypeCharToGroup(char ch, int is_complex) {
  switch (ch) {
    case 'c': case 'b': case 'h': case 'i': case 'l': case 'q': return 'I';
    case 'B': case 'H': case 'I': case 'L': case 'Q': return 'U';
    case 'f': case 'd': case 'g': return (is_complex ? 'C' : 'R');
    case 'O': return 'O';
    case 'P': return 'P';
    default: {
      __Pyx_BufFmt_RaiseUnexpectedChar(ch);
      return 0;
    }    
  }
}

static void __Pyx_BufFmt_RaiseExpected(__Pyx_BufFmt_Context* ctx) {
  if (ctx->head == NULL || ctx->head->field == &ctx->root) {
    const char* expected;
    const char* quote;
    if (ctx->head == NULL) {
      expected = "end";
      quote = "";
    } else {
      expected = ctx->head->field->type->name;
      quote = "'";
    }
    PyErr_Format(PyExc_ValueError,
                 "Buffer dtype mismatch, expected %s%s%s but got %s",
                 quote, expected, quote,
                 __Pyx_BufFmt_DescribeTypeChar(ctx->enc_type, ctx->is_complex));
  } else {
    __Pyx_StructField* field = ctx->head->field;
    __Pyx_StructField* parent = (ctx->head - 1)->field;
    PyErr_Format(PyExc_ValueError,
                 "Buffer dtype mismatch, expected '%s' but got %s in '%s.%s'",
                 field->type->name, __Pyx_BufFmt_DescribeTypeChar(ctx->enc_type, ctx->is_complex),
                 parent->type->name, field->name);
  }
}

static int __Pyx_BufFmt_ProcessTypeChunk(__Pyx_BufFmt_Context* ctx) {
  char group;
  size_t size, offset;
  if (ctx->enc_type == 0) return 0;
  group = __Pyx_BufFmt_TypeCharToGroup(ctx->enc_type, ctx->is_complex);
  do {
    __Pyx_StructField* field = ctx->head->field;
    __Pyx_TypeInfo* type = field->type;
  
    if (ctx->packmode == '@' || ctx->packmode == '^') {
      size = __Pyx_BufFmt_TypeCharToNativeSize(ctx->enc_type, ctx->is_complex);
    } else {
      size = __Pyx_BufFmt_TypeCharToStandardSize(ctx->enc_type, ctx->is_complex);
    }
    if (ctx->packmode == '@') {
      int align_at = __Pyx_BufFmt_TypeCharToAlignment(ctx->enc_type, ctx->is_complex);
      int align_mod_offset;
      if (align_at == 0) return -1;
      align_mod_offset = ctx->fmt_offset % align_at;
      if (align_mod_offset > 0) ctx->fmt_offset += align_at - align_mod_offset;
    }

    if (type->size != size || type->typegroup != group) {
      if (type->typegroup == 'C' && type->fields != NULL) {
        /* special case -- treat as struct rather than complex number */
        size_t parent_offset = ctx->head->parent_offset + field->offset;
        ++ctx->head;
        ctx->head->field = type->fields;
        ctx->head->parent_offset = parent_offset;
        continue;
      }
    
      __Pyx_BufFmt_RaiseExpected(ctx);
      return -1;
    }

    offset = ctx->head->parent_offset + field->offset;
    if (ctx->fmt_offset != offset) {
      PyErr_Format(PyExc_ValueError,
                   "Buffer dtype mismatch; next field is at offset %"PY_FORMAT_SIZE_T"d "
                   "but %"PY_FORMAT_SIZE_T"d expected", ctx->fmt_offset, offset);
      return -1;
    }

    ctx->fmt_offset += size;
  
    --ctx->enc_count; /* Consume from buffer string */

    /* Done checking, move to next field, pushing or popping struct stack if needed */
    while (1) {
      if (field == &ctx->root) {
        ctx->head = NULL;
        if (ctx->enc_count != 0) {
          __Pyx_BufFmt_RaiseExpected(ctx);
          return -1;
        }
        break; /* breaks both loops as ctx->enc_count == 0 */
      }
      ctx->head->field = ++field;
      if (field->type == NULL) {
        --ctx->head;
        field = ctx->head->field;
        continue;
      } else if (field->type->typegroup == 'S') {
        size_t parent_offset = ctx->head->parent_offset + field->offset;
        if (field->type->fields->type == NULL) continue; /* empty struct */
        field = field->type->fields;
        ++ctx->head;
        ctx->head->field = field;
        ctx->head->parent_offset = parent_offset;
        break;
      } else {
        break;
      }
    }
  } while (ctx->enc_count);
  ctx->enc_type = 0;
  ctx->is_complex = 0;
  return 0;    
}

static int __Pyx_BufFmt_FirstPack(__Pyx_BufFmt_Context* ctx) {
  if (ctx->enc_type != 0 || ctx->packmode != '@') {
    PyErr_SetString(PyExc_ValueError, "Buffer packing mode currently only allowed at beginning of format string (this is a defect)");
    return -1;
  }
  return 0;
}

static const char* __Pyx_BufFmt_CheckString(__Pyx_BufFmt_Context* ctx, const char* ts) {
  int got_Z = 0;
  while (1) {
    switch(*ts) {
      case 0:
        if (ctx->enc_type != 0 && ctx->head == NULL) {
          __Pyx_BufFmt_RaiseExpected(ctx);
          return NULL;
        }
        if (__Pyx_BufFmt_ProcessTypeChunk(ctx) == -1) return NULL;
        if (ctx->head != NULL) {
          __Pyx_BufFmt_RaiseExpected(ctx);
          return NULL;
        }
        return ts;
      case ' ':
      case 10:
      case 13:
        ++ts;
        break;
      case '<':
        if (!__Pyx_IsLittleEndian()) {
          PyErr_SetString(PyExc_ValueError, "Little-endian buffer not supported on big-endian compiler");
          return NULL;
        }
        if (__Pyx_BufFmt_FirstPack(ctx) == -1) return NULL;
        ctx->packmode = '=';
        ++ts;
        break;
      case '>':
      case '!':
        if (__Pyx_IsLittleEndian()) {
          PyErr_SetString(PyExc_ValueError, "Big-endian buffer not supported on little-endian compiler");
          return NULL;
        }
        if (__Pyx_BufFmt_FirstPack(ctx) == -1) return NULL;
        ctx->packmode = '=';
        ++ts;
        break;
      case '=':
      case '@':
      case '^':
        if (__Pyx_BufFmt_FirstPack(ctx) == -1) return NULL;
        ctx->packmode = *ts++;
        break;
      case 'T': /* substruct */
        {
          int i;
          const char* ts_after_sub;
          int struct_count = ctx->new_count;
          ctx->new_count = 1;
          ++ts;
          if (*ts != '{') {
            PyErr_SetString(PyExc_ValueError, "Buffer acquisition: Expected '{' after 'T'");
            return NULL;
          }
          ++ts;
          ts_after_sub = ts;
          for (i = 0; i != struct_count; ++i) {
            ts_after_sub = __Pyx_BufFmt_CheckString(ctx, ts);
            if (!ts_after_sub) return NULL;
          }
          ts = ts_after_sub;
        }
        break;
      case '}': /* end of substruct; either repeat or move on */
        ++ts;
        return ts;
      case 'x':
        if (__Pyx_BufFmt_ProcessTypeChunk(ctx) == -1) return NULL;
        ctx->fmt_offset += ctx->new_count;
        ctx->new_count = 1;
        ctx->enc_count = 0;
        ctx->enc_type = 0;
        ++ts;
        break;
      case 'Z':
        got_Z = 1;
        ++ts;
        if (*ts != 'f' && *ts != 'd' && *ts != 'g') {
          __Pyx_BufFmt_RaiseUnexpectedChar('Z');
          return NULL;
        }        /* fall through */
      case 'c': case 'b': case 'B': case 'h': case 'H': case 'i': case 'I':
      case 'l': case 'L': case 'q': case 'Q':
      case 'f': case 'd': case 'g':
      case 'O':
        if (ctx->enc_type == *ts && got_Z == ctx->is_complex) {
          /* Continue pooling same type */
          ctx->enc_count += ctx->new_count;
        } else {
          /* New type */
          if (__Pyx_BufFmt_ProcessTypeChunk(ctx) == -1) return NULL;
          ctx->enc_count = ctx->new_count;
          ctx->enc_type = *ts;
          ctx->is_complex = got_Z;
        }
        ++ts;
        ctx->new_count = 1;
        got_Z = 0;
        break;
      default:
        {
          ctx->new_count = __Pyx_BufFmt_ParseNumber(&ts);
          if (ctx->new_count == -1) { /* First char was not a digit */
            char msg[2] = { *ts, 0 };
            PyErr_Format(PyExc_ValueError,
                         "Does not understand character buffer dtype format string ('%s')", msg);
            return NULL;
          }
        }
      
    }
  }
}
#endif

static CYTHON_INLINE void __Pyx_GetBufferAndValidate(NumpyDotNet::IExtBufferProtocol^& buf, System::Object^ obj, __Pyx_TypeInfo* dtype, int flags, int nd, int cast, __Pyx_BufFmt_StackElem* stack) {
  if (obj == Py_None) {
    buf = nullptr;
    return;
  }
  __Pyx_GetBuffer(obj, buf, flags);
  if (buf->NumberDimensions != nd) {
    throw PythonOps::ValueError("Buffer has wrong number of dimensions (expected {0}, got {1})", nd, buf->NumberDimensions);
  }
  if (!cast) {
#if 0
    XXX
    __Pyx_BufFmt_Context ctx;
    __Pyx_BufFmt_Init(&ctx, stack, dtype);
    if (!__Pyx_BufFmt_CheckString(&ctx, buf->format)) goto fail;
#endif
  }
  if ((unsigned)buf->ItemSize != dtype->size) {
    throw PythonOps::ValueError("Item size of buffer ({0} byte{1}) does not match size of '{2}' ({3} byte{4})",
      buf->ItemSize, (buf->ItemSize > 1) ? "s" : "",
      gcnew System::String(dtype->name),
      dtype->size, (dtype->size > 1) ? "s" : "");
  }
#if 0
  XXX
  if (buf->suboffsets == NULL) buf->suboffsets = __Pyx_minusones;
#endif
  return;
#if 0
fail:;
  buf = nullptr;
  throw PythonOps::ValueError("XXX buffer error");
#endif
}

static CYTHON_INLINE void __Pyx_SafeReleaseBuffer(NumpyDotNet::IExtBufferProtocol^ info) {
  if (info == nullptr) return;
#if 0
  XXX
  if (info->buf == NULL) return;
  if (info->suboffsets == __Pyx_minusones) info->suboffsets = NULL;
#endif
  __Pyx_ReleaseBuffer(info);
}

static void __Pyx_GetBuffer(System::Object^ obj, NumpyDotNet::IExtBufferProtocol^& view, int flags) {
  view = NumpyDotNet::NpyBuffer::GetBufferForObject(obj, (NumpyDotNet::NpyBuffer::PyBuf)flags);
}
static void __Pyx_ReleaseBuffer(NumpyDotNet::IExtBufferProtocol^ view) {
  /* do nothing */
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
[assembly: PythonModule("scipy__ndimage___nd_image", module__nd_image::typeid)];
};
