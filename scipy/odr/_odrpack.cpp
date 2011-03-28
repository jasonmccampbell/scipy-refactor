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
  dict["__module__"] = "scipy.odr._odrpack";
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
#define __PYX_HAVE_API__scipy__odr___odrpack
#include "npy_common.h"
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "string.h"
#include "odrpack.h"

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
static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_ZEROS(int, __pyx_t_5numpy_intp_t *, int, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_EMPTY(int, __pyx_t_5numpy_intp_t *, int, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Empty(int, __pyx_t_5numpy_npy_intp *, NumpyDotNet::dtype^, int); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_New(void *, int, __pyx_t_5numpy_npy_intp *, int, __pyx_t_5numpy_npy_intp *, void *, int, int, void *); /*proto*/
static CYTHON_INLINE int PyArray_CHKFLAGS(NumpyDotNet::ndarray^, int); /*proto*/
static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_DIM(NumpyDotNet::ndarray^, int); /*proto*/
static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE NpyArray *PyArray_ARRAY(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Return(NumpyDotNet::ndarray^); /*proto*/
static CYTHON_INLINE int PyDataType_TYPE_NUM(NumpyDotNet::dtype^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_FromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_CopyFromObject(System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_FROMANY(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_CheckFromAny(System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_Check(System::Object^); /*proto*/
static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^); /*proto*/
static CYTHON_INLINE void import_array(void); /*proto*/
/* Module declarations from scipy.odr._odrpack */
static NpyArray *NpyArray_SimpleNew(int, npy_intp *, NumpyDotNet::dtype^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_3odr_8_odrpack_fcn_callback(int *, int *, int *, int *, int *, int *, int *, double *, double *, int *, int *, int *, int *, double *, double *, double *, int *);
static void fcn_callback(int *, int *, int *, int *, int *, int *, int *, double *, double *, int *, int *, int *, int *, double *, double *, double *, int *); /*proto*/
static System::Object^ gen_output(int, int, int, int, int, int, NpyArray *, NpyArray *, NpyArray *, int, int, int); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.odr._odrpack"

/* Implementation of scipy.odr._odrpack */
namespace clr__odrpack {
  public ref class module__odrpack sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_itemsize_61_85;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_61_85;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_152_44;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_154_45;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_197_50;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_198_50;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_202_50;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_203_50;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_207_48;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_208_47;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_212_48;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_213_47;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_263_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_263_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_263_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_263_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_263_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_263_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_263_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_263_0_4;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_288_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_288_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_288_41;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_289_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_289_34;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_289_34;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_289_61;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_290_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_290_34;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_290_34;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_292_21;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_292_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_294_27;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_295_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_295_34;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_295_34;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_296_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_298_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_298_53;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_298_53;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_298_76;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_298_76;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_299_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_300_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_300_53;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_300_53;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_300_76;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_300_76;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_301_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_303_4;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_305_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_305_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_306_41;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_306_56;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_306_56;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_307_52;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_307_27;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndarray_309_51;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_309_42;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_309_42;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_310_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndarray_311_52;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_311_43;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_311_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_312_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_316_40;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_318_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_319_40;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_321_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_323_9;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_323_15;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_323_15;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_324_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_324_19;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_324_9;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_324_9;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_325_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_326_19;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_326_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_326_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_326_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_326_42;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_326_13;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_330_16;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_330_16;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_334_41;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_335_40;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_337_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_338_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_338_19;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_338_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_341_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_341_20;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_341_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_341_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_341_37;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_341_8;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_342_46;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_344_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_345_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_345_19;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_345_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_350_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_351_10;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_352_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_352_32;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_352_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_353_42;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_355_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_357_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_357_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_357_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_360_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_360_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_360_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_360_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_360_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_360_42;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_360_42;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_365_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_365_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_365_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_365_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_365_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_365_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_370_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_370_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_370_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_370_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_370_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_370_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_375_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_375_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_375_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_375_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_375_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_375_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndum_380_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_380_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_380_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_380_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_380_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_380_39;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_385_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_388_23;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_388_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_392_46;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_393_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_396_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_401_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_402_10;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_isSequenceType_403_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_403_32;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_403_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_404_42;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_406_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_408_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_408_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_408_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_411_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_411_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_411_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_411_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_411_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_411_42;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_411_42;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_416_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_416_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_416_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_416_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_416_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_416_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_421_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_421_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_421_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_421_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_421_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_421_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_426_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_426_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_426_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_426_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_426_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_426_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_431_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_431_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_431_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_431_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_431_39;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_431_39;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_435_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_438_23;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_438_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_442_46;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_443_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_447_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int_451_45;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_452_13;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int_454_48;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_455_33;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_455_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_455_43;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_455_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_456_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int_461_45;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_462_13;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int_465_48;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_467_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_469_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_469_22;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_469_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_469_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_469_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_469_46;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_469_46;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_471_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_471_24;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_471_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_471_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_471_44;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_471_48;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_471_48;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_473_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_473_24;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_473_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_473_38;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_473_45;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_473_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_476_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_481_35;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_481_35;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_485_35;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_485_35;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_489_44;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_490_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_492_46;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_493_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_493_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_493_41;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_493_41;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_494_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_499_44;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_500_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_503_46;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_505_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_507_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_507_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_507_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_507_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_507_40;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_507_44;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_507_44;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_509_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_509_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_509_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_509_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_509_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_509_46;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_509_46;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_511_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_511_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_511_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_511_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_511_43;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_511_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_514_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_518_44;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_519_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_521_46;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_522_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_522_37;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_522_41;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_522_41;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_523_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_528_44;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_529_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_532_46;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_534_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_536_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_536_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_536_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_536_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_536_40;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_536_44;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_536_44;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_538_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_538_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_538_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_538_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_538_42;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_538_46;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_538_46;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_540_17;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_540_23;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_540_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_shape_540_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_540_43;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_540_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_543_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_564_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_569_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_572_46;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_574_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_dim_576_11;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_576_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_576_19;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_576_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_577_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_double_581_44;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int_584_48;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_586_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_dim_588_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_588_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_588_24;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_588_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_589_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_int_592_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_599_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_640_14;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_640_14;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_641_26;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_246_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_246_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_zeros_248_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_248_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_254_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_254_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_256_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_256_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_262_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_262_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_264_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_264_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_274_54;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_274_54;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_278_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_278_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_282_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_282_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_285_47;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_285_47;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_289_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_289_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_293_35;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_293_35;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ArrayReturn_297_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_297_30;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Dtype_301_62;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_cvt_PY_LONG_LONG_301_62;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_306_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_FromAny_306_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_306_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_and_315_13;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_315_13;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ior_316_14;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_317_77;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyArray_322_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_CheckFromAny_322_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call6_322_44;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndarray_326_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_326_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndim_329_14;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
static int^ __pyx_int_0;
static int^ __pyx_int_1;
static int^ __pyx_int_2;
static int^ __pyx_int_3;
static int^ __pyx_int_neg_1;
static double __pyx_k_1;
static double __pyx_k_2;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":60
 * 
 * 
 * cdef NpyArray *NpyArray_SimpleNew(int nd, npy_intp *dims, dtype descr):             # <<<<<<<<<<<<<<
 *     return NpyArray_New(NULL, nd, dims, PyDataType_TYPE_NUM(descr), NULL, NULL, descr.itemsize, 0, NULL)
 * 
 */

static  NpyArray *NpyArray_SimpleNew(int __pyx_v_nd, npy_intp *__pyx_v_dims, NumpyDotNet::dtype^ __pyx_v_descr) {
  NpyArray *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":61
 * 
 * cdef NpyArray *NpyArray_SimpleNew(int nd, npy_intp *dims, dtype descr):
 *     return NpyArray_New(NULL, nd, dims, PyDataType_TYPE_NUM(descr), NULL, NULL, descr.itemsize, 0, NULL)             # <<<<<<<<<<<<<<
 * 
 * cdef void fcn_callback(int *n, int *m, int *np, int *nq, int *ldn, int *ldm,
 */
  __pyx_t_1 = __site_get_itemsize_61_85->Target(__site_get_itemsize_61_85, ((System::Object^)__pyx_v_descr), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_int_61_85->Target(__site_cvt_cvt_int_61_85, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_New(NULL, __pyx_v_nd, ((__pyx_t_5numpy_npy_intp *)__pyx_v_dims), PyDataType_TYPE_NUM(__pyx_v_descr), NULL, NULL, __pyx_t_2, 0, NULL);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":63
 *     return NpyArray_New(NULL, nd, dims, PyDataType_TYPE_NUM(descr), NULL, NULL, descr.itemsize, 0, NULL)
 * 
 * cdef void fcn_callback(int *n, int *m, int *np, int *nq, int *ldn, int *ldm,             # <<<<<<<<<<<<<<
 *     int *ldnp, double *beta, double *xplusd, int *ifixb,
 *     int *ifixx, int *ldfix, int *ideval, double *f,
 */

static void (*__pyx_function_pointer_fcn_callback)(int *, int *, int *, int *, int *, int *, int *, double *, double *, int *, int *, int *, int *, double *, double *, double *, int *);
typedef void (*__pyx_fp_t_fcn_callback)(int *, int *, int *, int *, int *, int *, int *, double *, double *, int *, int *, int *, int *, double *, double *, double *, int *);
static __pyx_delegate_t_5scipy_3odr_8_odrpack_fcn_callback^ __pyx_delegate_val_fcn_callback;
static  void fcn_callback(int *__pyx_v_n, int *__pyx_v_m, int *__pyx_v_np, int *__pyx_v_nq, int *__pyx_v_ldn, int *__pyx_v_ldm, int *__pyx_v_ldnp, double *__pyx_v_beta, double *__pyx_v_xplusd, int *__pyx_v_ifixb, int *__pyx_v_ifixx, int *__pyx_v_ldfix, int *__pyx_v_ideval, double *__pyx_v_f, double *__pyx_v_fjacb, double *__pyx_v_fjacd, int *__pyx_v_istop) {

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":67
 *     int *ifixx, int *ldfix, int *ideval, double *f,
 *     double *fjacb, double *fjacd, int *istop):
 *     print "Called back!!!"             # <<<<<<<<<<<<<<
 * 
 * 
 */
  PythonOps::Print(__pyx_context, ((System::Object^)"Called back!!!"));

}

/* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":70
 * 
 * 
 * cdef object gen_output(int n, int m, int np, int nq, int ldwe, int ld2we,             # <<<<<<<<<<<<<<
 *                        NpyArray *beta, NpyArray *work, NpyArray *iwork,
 *                        int isodr, int info, int full_output):
 */

static  System::Object^ gen_output(int __pyx_v_n, int __pyx_v_m, int __pyx_v_np, int __pyx_v_nq, int __pyx_v_ldwe, int __pyx_v_ld2we, NpyArray *__pyx_v_beta, NpyArray *__pyx_v_work, NpyArray *__pyx_v_iwork, int __pyx_v_isodr, int __pyx_v_info, int __pyx_v_full_output) {
  NpyArray *__pyx_v_sd_beta;
  NpyArray *__pyx_v_cov_beta;
  int __pyx_v_delta;
  int __pyx_v_eps;
  int __pyx_v_xplus;
  int __pyx_v_fn;
  int __pyx_v_sd;
  int __pyx_v_vcv;
  int __pyx_v_rvar;
  int __pyx_v_wss;
  int __pyx_v_wssde;
  int __pyx_v_wssep;
  int __pyx_v_rcond;
  int __pyx_v_eta;
  int __pyx_v_olmav;
  int __pyx_v_tau;
  int __pyx_v_alpha;
  int __pyx_v_actrs;
  int __pyx_v_pnorm;
  int __pyx_v_rnors;
  int __pyx_v_prers;
  int __pyx_v_partl;
  int __pyx_v_sstol;
  int __pyx_v_taufc;
  int __pyx_v_apsma;
  int __pyx_v_betao;
  int __pyx_v_betac;
  int __pyx_v_betas;
  int __pyx_v_betan;
  int __pyx_v_s;
  int __pyx_v_ss;
  int __pyx_v_ssf;
  int __pyx_v_qraux;
  int __pyx_v_u;
  int __pyx_v_fs;
  int __pyx_v_fjacb;
  int __pyx_v_we1;
  int __pyx_v_diff;
  int __pyx_v_delts;
  int __pyx_v_deltn;
  int __pyx_v_t;
  int __pyx_v_tt;
  int __pyx_v_omega;
  int __pyx_v_fjacd;
  int __pyx_v_wrk1;
  int __pyx_v_wrk2;
  int __pyx_v_wrk3;
  int __pyx_v_wrk4;
  int __pyx_v_wrk5;
  int __pyx_v_wrk6;
  int __pyx_v_wrk7;
  int __pyx_v_lwkmn;
  System::Object^ __pyx_v_deltaA;
  System::Object^ __pyx_v_epsA;
  System::Object^ __pyx_v_xplusA;
  System::Object^ __pyx_v_fnA;
  double __pyx_v_res_var;
  double __pyx_v_sum_square;
  double __pyx_v_sum_square_delta;
  double __pyx_v_sum_square_eps;
  double __pyx_v_inv_condnum;
  double __pyx_v_rel_error;
  System::Object^ __pyx_v_work_ind;
  npy_intp __pyx_v_dim1[1];
  npy_intp __pyx_v_dim2[2];
  System::Object^ __pyx_v_retobj;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  PythonDictionary^ __pyx_t_7;
  System::Object^ __pyx_t_8 = nullptr;
  __pyx_v_deltaA = nullptr;
  __pyx_v_epsA = nullptr;
  __pyx_v_xplusA = nullptr;
  __pyx_v_fnA = nullptr;
  __pyx_v_work_ind = nullptr;
  __pyx_v_retobj = nullptr;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":87
 *     cdef npy_intp dim1[1], dim2[2]
 * 
 *     if info == 50005:             # <<<<<<<<<<<<<<
 *         return NULL
 * 
 */
  __pyx_t_1 = (__pyx_v_info == 50005);
  if (__pyx_t_1) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":88
 * 
 *     if info == 50005:
 *         return NULL             # <<<<<<<<<<<<<<
 * 
 *     lwkmn = NpyArray_DIM(work, 0);
 */
    __pyx_t_2 = NULL;
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = nullptr;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":90
 *         return NULL
 * 
 *     lwkmn = NpyArray_DIM(work, 0);             # <<<<<<<<<<<<<<
 * 
 *     dwinf(&n, &m, &np, &nq, &ldwe, &ld2we, &isodr,
 */
  __pyx_v_lwkmn = NpyArray_DIM(__pyx_v_work, 0);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":98
 *         &betas, &betan, &s, &ss, &ssf, &qraux, &u, &fs, &fjacb, &we1,
 *         &diff, &delts, &deltn, &t, &tt, &omega, &fjacd, &wrk1, &wrk2,
 *         &wrk3, &wrk4, &wrk5, &wrk6, &wrk7, &lwkmn);             # <<<<<<<<<<<<<<
 * 
 *     # convert FORTRAN indices to C indices
 */
  F_FUNC(dwinf,DWINF)((&__pyx_v_n), (&__pyx_v_m), (&__pyx_v_np), (&__pyx_v_nq), (&__pyx_v_ldwe), (&__pyx_v_ld2we), (&__pyx_v_isodr), (&__pyx_v_delta), (&__pyx_v_eps), (&__pyx_v_xplus), (&__pyx_v_fn), (&__pyx_v_sd), (&__pyx_v_vcv), (&__pyx_v_rvar), (&__pyx_v_wss), (&__pyx_v_wssde), (&__pyx_v_wssep), (&__pyx_v_rcond), (&__pyx_v_eta), (&__pyx_v_olmav), (&__pyx_v_tau), (&__pyx_v_alpha), (&__pyx_v_actrs), (&__pyx_v_pnorm), (&__pyx_v_rnors), (&__pyx_v_prers), (&__pyx_v_partl), (&__pyx_v_sstol), (&__pyx_v_taufc), (&__pyx_v_apsma), (&__pyx_v_betao), (&__pyx_v_betac), (&__pyx_v_betas), (&__pyx_v_betan), (&__pyx_v_s), (&__pyx_v_ss), (&__pyx_v_ssf), (&__pyx_v_qraux), (&__pyx_v_u), (&__pyx_v_fs), (&__pyx_v_fjacb), (&__pyx_v_we1), (&__pyx_v_diff), (&__pyx_v_delts), (&__pyx_v_deltn), (&__pyx_v_t), (&__pyx_v_tt), (&__pyx_v_omega), (&__pyx_v_fjacd), (&__pyx_v_wrk1), (&__pyx_v_wrk2), (&__pyx_v_wrk3), (&__pyx_v_wrk4), (&__pyx_v_wrk5), (&__pyx_v_wrk6), (&__pyx_v_wrk7), (&__pyx_v_lwkmn));

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":101
 * 
 *     # convert FORTRAN indices to C indices
 *     delta-=1             # <<<<<<<<<<<<<<
 *     eps-=1
 *     xplus-=1
 */
  __pyx_v_delta -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":102
 *     # convert FORTRAN indices to C indices
 *     delta-=1
 *     eps-=1             # <<<<<<<<<<<<<<
 *     xplus-=1
 *     fn-=1
 */
  __pyx_v_eps -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":103
 *     delta-=1
 *     eps-=1
 *     xplus-=1             # <<<<<<<<<<<<<<
 *     fn-=1
 *     sd-=1
 */
  __pyx_v_xplus -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":104
 *     eps-=1
 *     xplus-=1
 *     fn-=1             # <<<<<<<<<<<<<<
 *     sd-=1
 *     vcv-=1
 */
  __pyx_v_fn -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":105
 *     xplus-=1
 *     fn-=1
 *     sd-=1             # <<<<<<<<<<<<<<
 *     vcv-=1
 *     rvar-=1
 */
  __pyx_v_sd -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":106
 *     fn-=1
 *     sd-=1
 *     vcv-=1             # <<<<<<<<<<<<<<
 *     rvar-=1
 *     wss-=1
 */
  __pyx_v_vcv -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":107
 *     sd-=1
 *     vcv-=1
 *     rvar-=1             # <<<<<<<<<<<<<<
 *     wss-=1
 *     wssde-=1
 */
  __pyx_v_rvar -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":108
 *     vcv-=1
 *     rvar-=1
 *     wss-=1             # <<<<<<<<<<<<<<
 *     wssde-=1
 *     wssep-=1
 */
  __pyx_v_wss -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":109
 *     rvar-=1
 *     wss-=1
 *     wssde-=1             # <<<<<<<<<<<<<<
 *     wssep-=1
 *     rcond-=1
 */
  __pyx_v_wssde -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":110
 *     wss-=1
 *     wssde-=1
 *     wssep-=1             # <<<<<<<<<<<<<<
 *     rcond-=1
 *     eta-=1
 */
  __pyx_v_wssep -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":111
 *     wssde-=1
 *     wssep-=1
 *     rcond-=1             # <<<<<<<<<<<<<<
 *     eta-=1
 *     olmav-=1
 */
  __pyx_v_rcond -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":112
 *     wssep-=1
 *     rcond-=1
 *     eta-=1             # <<<<<<<<<<<<<<
 *     olmav-=1
 *     tau-=1
 */
  __pyx_v_eta -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":113
 *     rcond-=1
 *     eta-=1
 *     olmav-=1             # <<<<<<<<<<<<<<
 *     tau-=1
 *     alpha-=1
 */
  __pyx_v_olmav -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":114
 *     eta-=1
 *     olmav-=1
 *     tau-=1             # <<<<<<<<<<<<<<
 *     alpha-=1
 *     actrs-=1
 */
  __pyx_v_tau -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":115
 *     olmav-=1
 *     tau-=1
 *     alpha-=1             # <<<<<<<<<<<<<<
 *     actrs-=1
 *     pnorm-=1
 */
  __pyx_v_alpha -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":116
 *     tau-=1
 *     alpha-=1
 *     actrs-=1             # <<<<<<<<<<<<<<
 *     pnorm-=1
 *     rnors-=1
 */
  __pyx_v_actrs -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":117
 *     alpha-=1
 *     actrs-=1
 *     pnorm-=1             # <<<<<<<<<<<<<<
 *     rnors-=1
 *     prers-=1
 */
  __pyx_v_pnorm -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":118
 *     actrs-=1
 *     pnorm-=1
 *     rnors-=1             # <<<<<<<<<<<<<<
 *     prers-=1
 *     partl-=1
 */
  __pyx_v_rnors -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":119
 *     pnorm-=1
 *     rnors-=1
 *     prers-=1             # <<<<<<<<<<<<<<
 *     partl-=1
 *     sstol-=1
 */
  __pyx_v_prers -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":120
 *     rnors-=1
 *     prers-=1
 *     partl-=1             # <<<<<<<<<<<<<<
 *     sstol-=1
 *     taufc-=1
 */
  __pyx_v_partl -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":121
 *     prers-=1
 *     partl-=1
 *     sstol-=1             # <<<<<<<<<<<<<<
 *     taufc-=1
 *     apsma-=1
 */
  __pyx_v_sstol -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":122
 *     partl-=1
 *     sstol-=1
 *     taufc-=1             # <<<<<<<<<<<<<<
 *     apsma-=1
 *     betao-=1
 */
  __pyx_v_taufc -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":123
 *     sstol-=1
 *     taufc-=1
 *     apsma-=1             # <<<<<<<<<<<<<<
 *     betao-=1
 *     betac-=1
 */
  __pyx_v_apsma -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":124
 *     taufc-=1
 *     apsma-=1
 *     betao-=1             # <<<<<<<<<<<<<<
 *     betac-=1
 *     betas-=1
 */
  __pyx_v_betao -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":125
 *     apsma-=1
 *     betao-=1
 *     betac-=1             # <<<<<<<<<<<<<<
 *     betas-=1
 *     betan-=1
 */
  __pyx_v_betac -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":126
 *     betao-=1
 *     betac-=1
 *     betas-=1             # <<<<<<<<<<<<<<
 *     betan-=1
 *     s-=1
 */
  __pyx_v_betas -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":127
 *     betac-=1
 *     betas-=1
 *     betan-=1             # <<<<<<<<<<<<<<
 *     s-=1
 *     ss-=1
 */
  __pyx_v_betan -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":128
 *     betas-=1
 *     betan-=1
 *     s-=1             # <<<<<<<<<<<<<<
 *     ss-=1
 *     ssf-=1
 */
  __pyx_v_s -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":129
 *     betan-=1
 *     s-=1
 *     ss-=1             # <<<<<<<<<<<<<<
 *     ssf-=1
 *     qraux-=1
 */
  __pyx_v_ss -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":130
 *     s-=1
 *     ss-=1
 *     ssf-=1             # <<<<<<<<<<<<<<
 *     qraux-=1
 *     u-=1
 */
  __pyx_v_ssf -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":131
 *     ss-=1
 *     ssf-=1
 *     qraux-=1             # <<<<<<<<<<<<<<
 *     u-=1
 *     fs-=1
 */
  __pyx_v_qraux -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":132
 *     ssf-=1
 *     qraux-=1
 *     u-=1             # <<<<<<<<<<<<<<
 *     fs-=1
 *     fjacb-=1
 */
  __pyx_v_u -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":133
 *     qraux-=1
 *     u-=1
 *     fs-=1             # <<<<<<<<<<<<<<
 *     fjacb-=1
 *     we1-=1
 */
  __pyx_v_fs -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":134
 *     u-=1
 *     fs-=1
 *     fjacb-=1             # <<<<<<<<<<<<<<
 *     we1-=1
 *     diff-=1
 */
  __pyx_v_fjacb -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":135
 *     fs-=1
 *     fjacb-=1
 *     we1-=1             # <<<<<<<<<<<<<<
 *     diff-=1
 *     delts-=1
 */
  __pyx_v_we1 -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":136
 *     fjacb-=1
 *     we1-=1
 *     diff-=1             # <<<<<<<<<<<<<<
 *     delts-=1
 *     deltn-=1
 */
  __pyx_v_diff -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":137
 *     we1-=1
 *     diff-=1
 *     delts-=1             # <<<<<<<<<<<<<<
 *     deltn-=1
 *     t-=1
 */
  __pyx_v_delts -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":138
 *     diff-=1
 *     delts-=1
 *     deltn-=1             # <<<<<<<<<<<<<<
 *     t-=1
 *     tt-=1
 */
  __pyx_v_deltn -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":139
 *     delts-=1
 *     deltn-=1
 *     t-=1             # <<<<<<<<<<<<<<
 *     tt-=1
 *     omega-=1
 */
  __pyx_v_t -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":140
 *     deltn-=1
 *     t-=1
 *     tt-=1             # <<<<<<<<<<<<<<
 *     omega-=1
 *     fjacd-=1
 */
  __pyx_v_tt -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":141
 *     t-=1
 *     tt-=1
 *     omega-=1             # <<<<<<<<<<<<<<
 *     fjacd-=1
 *     wrk1-=1
 */
  __pyx_v_omega -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":142
 *     tt-=1
 *     omega-=1
 *     fjacd-=1             # <<<<<<<<<<<<<<
 *     wrk1-=1
 *     wrk2-=1
 */
  __pyx_v_fjacd -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":143
 *     omega-=1
 *     fjacd-=1
 *     wrk1-=1             # <<<<<<<<<<<<<<
 *     wrk2-=1
 *     wrk3-=1
 */
  __pyx_v_wrk1 -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":144
 *     fjacd-=1
 *     wrk1-=1
 *     wrk2-=1             # <<<<<<<<<<<<<<
 *     wrk3-=1
 *     wrk4-=1
 */
  __pyx_v_wrk2 -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":145
 *     wrk1-=1
 *     wrk2-=1
 *     wrk3-=1             # <<<<<<<<<<<<<<
 *     wrk4-=1
 *     wrk5-=1
 */
  __pyx_v_wrk3 -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":146
 *     wrk2-=1
 *     wrk3-=1
 *     wrk4-=1             # <<<<<<<<<<<<<<
 *     wrk5-=1
 *     wrk6-=1
 */
  __pyx_v_wrk4 -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":147
 *     wrk3-=1
 *     wrk4-=1
 *     wrk5-=1             # <<<<<<<<<<<<<<
 *     wrk6-=1
 *     wrk7-=1
 */
  __pyx_v_wrk5 -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":148
 *     wrk4-=1
 *     wrk5-=1
 *     wrk6-=1             # <<<<<<<<<<<<<<
 *     wrk7-=1
 * 
 */
  __pyx_v_wrk6 -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":149
 *     wrk5-=1
 *     wrk6-=1
 *     wrk7-=1             # <<<<<<<<<<<<<<
 * 
 *     dim1[0] = NpyArray_DIM(beta, 0);
 */
  __pyx_v_wrk7 -= 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":151
 *     wrk7-=1
 * 
 *     dim1[0] = NpyArray_DIM(beta, 0);             # <<<<<<<<<<<<<<
 *     sd_beta = NpyArray_SimpleNew(1, dim1, np.double);
 *     dim2[0] = dim2[1] = NpyArray_DIM(beta, 0);
 */
  (__pyx_v_dim1[0]) = NpyArray_DIM(__pyx_v_beta, 0);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":152
 * 
 *     dim1[0] = NpyArray_DIM(beta, 0);
 *     sd_beta = NpyArray_SimpleNew(1, dim1, np.double);             # <<<<<<<<<<<<<<
 *     dim2[0] = dim2[1] = NpyArray_DIM(beta, 0);
 *     cov_beta = NpyArray_SimpleNew(2, dim2, np.double);
 */
  __pyx_t_2 = __pyx_v_np;
  __pyx_t_3 = __site_get_double_152_44->Target(__site_get_double_152_44, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_3) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_sd_beta = NpyArray_SimpleNew(1, __pyx_v_dim1, ((NumpyDotNet::dtype^)__pyx_t_3));
  __pyx_t_3 = nullptr;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":153
 *     dim1[0] = NpyArray_DIM(beta, 0);
 *     sd_beta = NpyArray_SimpleNew(1, dim1, np.double);
 *     dim2[0] = dim2[1] = NpyArray_DIM(beta, 0);             # <<<<<<<<<<<<<<
 *     cov_beta = NpyArray_SimpleNew(2, dim2, np.double);
 * 
 */
  __pyx_t_4 = NpyArray_DIM(__pyx_v_beta, 0);
  (__pyx_v_dim2[0]) = __pyx_t_4;
  (__pyx_v_dim2[1]) = __pyx_t_4;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":154
 *     sd_beta = NpyArray_SimpleNew(1, dim1, np.double);
 *     dim2[0] = dim2[1] = NpyArray_DIM(beta, 0);
 *     cov_beta = NpyArray_SimpleNew(2, dim2, np.double);             # <<<<<<<<<<<<<<
 * 
 *     memcpy(NpyArray_DATA(sd_beta), <void *>(<double *>NpyArray_DATA(work) + sd),
 */
  __pyx_t_3 = __pyx_v_np;
  __pyx_t_2 = __site_get_double_154_45->Target(__site_get_double_154_45, __pyx_t_3, __pyx_context);
  __pyx_t_3 = nullptr;
  if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_2) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_cov_beta = NpyArray_SimpleNew(2, __pyx_v_dim2, ((NumpyDotNet::dtype^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":157
 * 
 *     memcpy(NpyArray_DATA(sd_beta), <void *>(<double *>NpyArray_DATA(work) + sd),
 *         np * sizeof(double));             # <<<<<<<<<<<<<<
 *     memcpy(NpyArray_DATA(cov_beta), <void *>(<double *>NpyArray_DATA(work) + vcv),
 *         np * np * sizeof(double));
 */
  memcpy(NpyArray_DATA(__pyx_v_sd_beta), ((void *)(((double *)NpyArray_DATA(__pyx_v_work)) + __pyx_v_sd)), (__pyx_v_np * (sizeof(double))));

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":159
 *         np * sizeof(double));
 *     memcpy(NpyArray_DATA(cov_beta), <void *>(<double *>NpyArray_DATA(work) + vcv),
 *         np * np * sizeof(double));             # <<<<<<<<<<<<<<
 * 
 *     retobj = None
 */
  memcpy(NpyArray_DATA(__pyx_v_cov_beta), ((void *)(((double *)NpyArray_DATA(__pyx_v_work)) + __pyx_v_vcv)), ((__pyx_v_np * __pyx_v_np) * (sizeof(double))));

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":161
 *         np * np * sizeof(double));
 * 
 *     retobj = None             # <<<<<<<<<<<<<<
 *     if not full_output:
 *         retobj = (PyArray_Return(Npy_INTERFACE_array(beta)),
 */
  __pyx_v_retobj = nullptr;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":162
 * 
 *     retobj = None
 *     if not full_output:             # <<<<<<<<<<<<<<
 *         retobj = (PyArray_Return(Npy_INTERFACE_array(beta)),
 *                   PyArray_Return(Npy_INTERFACE_array(sd_beta)),
 */
  __pyx_t_1 = (!__pyx_v_full_output);
  if (__pyx_t_1) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":163
 *     retobj = None
 *     if not full_output:
 *         retobj = (PyArray_Return(Npy_INTERFACE_array(beta)),             # <<<<<<<<<<<<<<
 *                   PyArray_Return(Npy_INTERFACE_array(sd_beta)),
 *                   PyArray_Return(Npy_INTERFACE_array(cov_beta)))
 */
    __pyx_t_2 = Npy_INTERFACE_OBJECT(__pyx_v_beta); 
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_3 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_t_2)); 
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":164
 *     if not full_output:
 *         retobj = (PyArray_Return(Npy_INTERFACE_array(beta)),
 *                   PyArray_Return(Npy_INTERFACE_array(sd_beta)),             # <<<<<<<<<<<<<<
 *                   PyArray_Return(Npy_INTERFACE_array(cov_beta)))
 * 
 */
    __pyx_t_2 = Npy_INTERFACE_OBJECT(__pyx_v_sd_beta); 
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_5 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_t_2)); 
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":165
 *         retobj = (PyArray_Return(Npy_INTERFACE_array(beta)),
 *                   PyArray_Return(Npy_INTERFACE_array(sd_beta)),
 *                   PyArray_Return(Npy_INTERFACE_array(cov_beta)))             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
    __pyx_t_2 = Npy_INTERFACE_OBJECT(__pyx_v_cov_beta); 
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_6 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_t_2)); 
    __pyx_t_2 = nullptr;
    __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_5, __pyx_t_6});
    __pyx_t_3 = nullptr;
    __pyx_t_5 = nullptr;
    __pyx_t_6 = nullptr;
    __pyx_v_retobj = __pyx_t_2;
    __pyx_t_2 = nullptr;
    goto __pyx_L4;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":168
 * 
 *     else:
 *         work_ind = {             # <<<<<<<<<<<<<<
 *             "delta" : delta,             "eps" : eps,
 *             "xplus" : xplus,             "fn" : fn,
 */
    __pyx_t_7 = PythonOps::MakeEmptyDict();

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":169
 *     else:
 *         work_ind = {
 *             "delta" : delta,             "eps" : eps,             # <<<<<<<<<<<<<<
 *             "xplus" : xplus,             "fn" : fn,
 *             "sd" : sd,                   "vcv" : vcv,
 */
    __pyx_t_2 = __pyx_v_delta;
    __pyx_t_7[((System::Object^)"delta")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_eps;
    __pyx_t_7[((System::Object^)"eps")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":170
 *         work_ind = {
 *             "delta" : delta,             "eps" : eps,
 *             "xplus" : xplus,             "fn" : fn,             # <<<<<<<<<<<<<<
 *             "sd" : sd,                   "vcv" : vcv,
 *             "rvar" : rvar,               "wss" : wss,
 */
    __pyx_t_2 = __pyx_v_xplus;
    __pyx_t_7[((System::Object^)"xplus")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_fn;
    __pyx_t_7[((System::Object^)"fn")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":171
 *             "delta" : delta,             "eps" : eps,
 *             "xplus" : xplus,             "fn" : fn,
 *             "sd" : sd,                   "vcv" : vcv,             # <<<<<<<<<<<<<<
 *             "rvar" : rvar,               "wss" : wss,
 *             "wssde" : wssde,             "wssep" : wssep,
 */
    __pyx_t_2 = __pyx_v_sd;
    __pyx_t_7[((System::Object^)"sd")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_vcv;
    __pyx_t_7[((System::Object^)"vcv")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":172
 *             "xplus" : xplus,             "fn" : fn,
 *             "sd" : sd,                   "vcv" : vcv,
 *             "rvar" : rvar,               "wss" : wss,             # <<<<<<<<<<<<<<
 *             "wssde" : wssde,             "wssep" : wssep,
 *             "rcond" : rcond,             "eta" : eta,
 */
    __pyx_t_2 = __pyx_v_rvar;
    __pyx_t_7[((System::Object^)"rvar")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_wss;
    __pyx_t_7[((System::Object^)"wss")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":173
 *             "sd" : sd,                   "vcv" : vcv,
 *             "rvar" : rvar,               "wss" : wss,
 *             "wssde" : wssde,             "wssep" : wssep,             # <<<<<<<<<<<<<<
 *             "rcond" : rcond,             "eta" : eta,
 *             "olmav" : olmav,             "tau" : tau,
 */
    __pyx_t_2 = __pyx_v_wssde;
    __pyx_t_7[((System::Object^)"wssde")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_wssep;
    __pyx_t_7[((System::Object^)"wssep")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":174
 *             "rvar" : rvar,               "wss" : wss,
 *             "wssde" : wssde,             "wssep" : wssep,
 *             "rcond" : rcond,             "eta" : eta,             # <<<<<<<<<<<<<<
 *             "olmav" : olmav,             "tau" : tau,
 *             "alpha" : alpha,             "actrs" : actrs,
 */
    __pyx_t_2 = __pyx_v_rcond;
    __pyx_t_7[((System::Object^)"rcond")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_eta;
    __pyx_t_7[((System::Object^)"eta")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":175
 *             "wssde" : wssde,             "wssep" : wssep,
 *             "rcond" : rcond,             "eta" : eta,
 *             "olmav" : olmav,             "tau" : tau,             # <<<<<<<<<<<<<<
 *             "alpha" : alpha,             "actrs" : actrs,
 *             "pnorm" : pnorm,             "rnors" : rnors,
 */
    __pyx_t_2 = __pyx_v_olmav;
    __pyx_t_7[((System::Object^)"olmav")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_tau;
    __pyx_t_7[((System::Object^)"tau")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":176
 *             "rcond" : rcond,             "eta" : eta,
 *             "olmav" : olmav,             "tau" : tau,
 *             "alpha" : alpha,             "actrs" : actrs,             # <<<<<<<<<<<<<<
 *             "pnorm" : pnorm,             "rnors" : rnors,
 *             "prers" : prers,             "partl" : partl,
 */
    __pyx_t_2 = __pyx_v_alpha;
    __pyx_t_7[((System::Object^)"alpha")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_actrs;
    __pyx_t_7[((System::Object^)"actrs")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":177
 *             "olmav" : olmav,             "tau" : tau,
 *             "alpha" : alpha,             "actrs" : actrs,
 *             "pnorm" : pnorm,             "rnors" : rnors,             # <<<<<<<<<<<<<<
 *             "prers" : prers,             "partl" : partl,
 *             "sstol" : sstol,             "taufc" : taufc,
 */
    __pyx_t_2 = __pyx_v_pnorm;
    __pyx_t_7[((System::Object^)"pnorm")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_rnors;
    __pyx_t_7[((System::Object^)"rnors")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":178
 *             "alpha" : alpha,             "actrs" : actrs,
 *             "pnorm" : pnorm,             "rnors" : rnors,
 *             "prers" : prers,             "partl" : partl,             # <<<<<<<<<<<<<<
 *             "sstol" : sstol,             "taufc" : taufc,
 *             "apsma" : apsma,             "betao" : betao,
 */
    __pyx_t_2 = __pyx_v_prers;
    __pyx_t_7[((System::Object^)"prers")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_partl;
    __pyx_t_7[((System::Object^)"partl")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":179
 *             "pnorm" : pnorm,             "rnors" : rnors,
 *             "prers" : prers,             "partl" : partl,
 *             "sstol" : sstol,             "taufc" : taufc,             # <<<<<<<<<<<<<<
 *             "apsma" : apsma,             "betao" : betao,
 *             "betac" : betac,             "betas" : betas,
 */
    __pyx_t_2 = __pyx_v_sstol;
    __pyx_t_7[((System::Object^)"sstol")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_taufc;
    __pyx_t_7[((System::Object^)"taufc")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":180
 *             "prers" : prers,             "partl" : partl,
 *             "sstol" : sstol,             "taufc" : taufc,
 *             "apsma" : apsma,             "betao" : betao,             # <<<<<<<<<<<<<<
 *             "betac" : betac,             "betas" : betas,
 *             "betan" : betan,             "s" : s,
 */
    __pyx_t_2 = __pyx_v_apsma;
    __pyx_t_7[((System::Object^)"apsma")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_betao;
    __pyx_t_7[((System::Object^)"betao")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":181
 *             "sstol" : sstol,             "taufc" : taufc,
 *             "apsma" : apsma,             "betao" : betao,
 *             "betac" : betac,             "betas" : betas,             # <<<<<<<<<<<<<<
 *             "betan" : betan,             "s" : s,
 *             "ss" : ss,                   "ssf" : ssf,
 */
    __pyx_t_2 = __pyx_v_betac;
    __pyx_t_7[((System::Object^)"betac")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_betas;
    __pyx_t_7[((System::Object^)"betas")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":182
 *             "apsma" : apsma,             "betao" : betao,
 *             "betac" : betac,             "betas" : betas,
 *             "betan" : betan,             "s" : s,             # <<<<<<<<<<<<<<
 *             "ss" : ss,                   "ssf" : ssf,
 *             "qraux" : qraux,             "u" : u,
 */
    __pyx_t_2 = __pyx_v_betan;
    __pyx_t_7[((System::Object^)"betan")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_s;
    __pyx_t_7[((System::Object^)"s")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":183
 *             "betac" : betac,             "betas" : betas,
 *             "betan" : betan,             "s" : s,
 *             "ss" : ss,                   "ssf" : ssf,             # <<<<<<<<<<<<<<
 *             "qraux" : qraux,             "u" : u,
 *             "fs" : fs,                   "fjacb" : fjacb,
 */
    __pyx_t_2 = __pyx_v_ss;
    __pyx_t_7[((System::Object^)"ss")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_ssf;
    __pyx_t_7[((System::Object^)"ssf")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":184
 *             "betan" : betan,             "s" : s,
 *             "ss" : ss,                   "ssf" : ssf,
 *             "qraux" : qraux,             "u" : u,             # <<<<<<<<<<<<<<
 *             "fs" : fs,                   "fjacb" : fjacb,
 *             "we1" : we1,                 "diff" : diff,
 */
    __pyx_t_2 = __pyx_v_qraux;
    __pyx_t_7[((System::Object^)"qraux")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_u;
    __pyx_t_7[((System::Object^)"u")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":185
 *             "ss" : ss,                   "ssf" : ssf,
 *             "qraux" : qraux,             "u" : u,
 *             "fs" : fs,                   "fjacb" : fjacb,             # <<<<<<<<<<<<<<
 *             "we1" : we1,                 "diff" : diff,
 *             "delts" : delts,             "deltn" : deltn,
 */
    __pyx_t_2 = __pyx_v_fs;
    __pyx_t_7[((System::Object^)"fs")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_fjacb;
    __pyx_t_7[((System::Object^)"fjacb")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":186
 *             "qraux" : qraux,             "u" : u,
 *             "fs" : fs,                   "fjacb" : fjacb,
 *             "we1" : we1,                 "diff" : diff,             # <<<<<<<<<<<<<<
 *             "delts" : delts,             "deltn" : deltn,
 *             "t" : t,                     "tt" : tt,
 */
    __pyx_t_2 = __pyx_v_we1;
    __pyx_t_7[((System::Object^)"we1")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_diff;
    __pyx_t_7[((System::Object^)"diff")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":187
 *             "fs" : fs,                   "fjacb" : fjacb,
 *             "we1" : we1,                 "diff" : diff,
 *             "delts" : delts,             "deltn" : deltn,             # <<<<<<<<<<<<<<
 *             "t" : t,                     "tt" : tt,
 *             "omega" : omega,             "fjacd" : fjacd,
 */
    __pyx_t_2 = __pyx_v_delts;
    __pyx_t_7[((System::Object^)"delts")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_deltn;
    __pyx_t_7[((System::Object^)"deltn")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":188
 *             "we1" : we1,                 "diff" : diff,
 *             "delts" : delts,             "deltn" : deltn,
 *             "t" : t,                     "tt" : tt,             # <<<<<<<<<<<<<<
 *             "omega" : omega,             "fjacd" : fjacd,
 *             "wrk1" : wrk1,               "wrk2" : wrk2,
 */
    __pyx_t_2 = __pyx_v_t;
    __pyx_t_7[((System::Object^)"t")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_tt;
    __pyx_t_7[((System::Object^)"tt")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":189
 *             "delts" : delts,             "deltn" : deltn,
 *             "t" : t,                     "tt" : tt,
 *             "omega" : omega,             "fjacd" : fjacd,             # <<<<<<<<<<<<<<
 *             "wrk1" : wrk1,               "wrk2" : wrk2,
 *             "wrk3" : wrk3,               "wrk4" : wrk4,
 */
    __pyx_t_2 = __pyx_v_omega;
    __pyx_t_7[((System::Object^)"omega")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_fjacd;
    __pyx_t_7[((System::Object^)"fjacd")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":190
 *             "t" : t,                     "tt" : tt,
 *             "omega" : omega,             "fjacd" : fjacd,
 *             "wrk1" : wrk1,               "wrk2" : wrk2,             # <<<<<<<<<<<<<<
 *             "wrk3" : wrk3,               "wrk4" : wrk4,
 *             "wrk5" : wrk5,               "wrk6" : wrk6,
 */
    __pyx_t_2 = __pyx_v_wrk1;
    __pyx_t_7[((System::Object^)"wrk1")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_wrk2;
    __pyx_t_7[((System::Object^)"wrk2")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":191
 *             "omega" : omega,             "fjacd" : fjacd,
 *             "wrk1" : wrk1,               "wrk2" : wrk2,
 *             "wrk3" : wrk3,               "wrk4" : wrk4,             # <<<<<<<<<<<<<<
 *             "wrk5" : wrk5,               "wrk6" : wrk6,
 *             "wrk7" : wrk7 }
 */
    __pyx_t_2 = __pyx_v_wrk3;
    __pyx_t_7[((System::Object^)"wrk3")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_wrk4;
    __pyx_t_7[((System::Object^)"wrk4")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":192
 *             "wrk1" : wrk1,               "wrk2" : wrk2,
 *             "wrk3" : wrk3,               "wrk4" : wrk4,
 *             "wrk5" : wrk5,               "wrk6" : wrk6,             # <<<<<<<<<<<<<<
 *             "wrk7" : wrk7 }
 * 
 */
    __pyx_t_2 = __pyx_v_wrk5;
    __pyx_t_7[((System::Object^)"wrk5")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_wrk6;
    __pyx_t_7[((System::Object^)"wrk6")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":193
 *             "wrk3" : wrk3,               "wrk4" : wrk4,
 *             "wrk5" : wrk5,               "wrk6" : wrk6,
 *             "wrk7" : wrk7 }             # <<<<<<<<<<<<<<
 * 
 *         if m == 1:
 */
    __pyx_t_2 = __pyx_v_wrk7;
    __pyx_t_7[((System::Object^)"wrk7")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_v_work_ind = ((System::Object^)__pyx_t_7);
    __pyx_t_7 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":195
 *             "wrk7" : wrk7 }
 * 
 *         if m == 1:             # <<<<<<<<<<<<<<
 *             dim1[0] = n;
 *             deltaA = PyArray_Empty(1, &dim1[0], np.double, False)
 */
    __pyx_t_1 = (__pyx_v_m == 1);
    if (__pyx_t_1) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":196
 * 
 *         if m == 1:
 *             dim1[0] = n;             # <<<<<<<<<<<<<<
 *             deltaA = PyArray_Empty(1, &dim1[0], np.double, False)
 *             xplusA = PyArray_Empty(1, &dim1[0], np.double, False)
 */
      (__pyx_v_dim1[0]) = __pyx_v_n;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":197
 *         if m == 1:
 *             dim1[0] = n;
 *             deltaA = PyArray_Empty(1, &dim1[0], np.double, False)             # <<<<<<<<<<<<<<
 *             xplusA = PyArray_Empty(1, &dim1[0], np.double, False)
 *         else:
 */
      __pyx_t_2 = __pyx_v_np;
      __pyx_t_6 = __site_get_double_197_50->Target(__site_get_double_197_50, __pyx_t_2, __pyx_context);
      __pyx_t_2 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_2 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_6), 0); 
      __pyx_t_6 = nullptr;
      __pyx_v_deltaA = __pyx_t_2;
      __pyx_t_2 = nullptr;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":198
 *             dim1[0] = n;
 *             deltaA = PyArray_Empty(1, &dim1[0], np.double, False)
 *             xplusA = PyArray_Empty(1, &dim1[0], np.double, False)             # <<<<<<<<<<<<<<
 *         else:
 *             dim2[0] = m;
 */
      __pyx_t_2 = __pyx_v_np;
      __pyx_t_6 = __site_get_double_198_50->Target(__site_get_double_198_50, __pyx_t_2, __pyx_context);
      __pyx_t_2 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_2 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_6), 0); 
      __pyx_t_6 = nullptr;
      __pyx_v_xplusA = __pyx_t_2;
      __pyx_t_2 = nullptr;
      goto __pyx_L5;
    }
    /*else*/ {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":200
 *             xplusA = PyArray_Empty(1, &dim1[0], np.double, False)
 *         else:
 *             dim2[0] = m;             # <<<<<<<<<<<<<<
 *             dim2[1] = n;
 *             deltaA = PyArray_Empty(2, &dim2[0], np.double, False)
 */
      (__pyx_v_dim2[0]) = __pyx_v_m;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":201
 *         else:
 *             dim2[0] = m;
 *             dim2[1] = n;             # <<<<<<<<<<<<<<
 *             deltaA = PyArray_Empty(2, &dim2[0], np.double, False)
 *             xplusA = PyArray_Empty(2, &dim2[0], np.double, False)
 */
      (__pyx_v_dim2[1]) = __pyx_v_n;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":202
 *             dim2[0] = m;
 *             dim2[1] = n;
 *             deltaA = PyArray_Empty(2, &dim2[0], np.double, False)             # <<<<<<<<<<<<<<
 *             xplusA = PyArray_Empty(2, &dim2[0], np.double, False)
 * 
 */
      __pyx_t_2 = __pyx_v_np;
      __pyx_t_6 = __site_get_double_202_50->Target(__site_get_double_202_50, __pyx_t_2, __pyx_context);
      __pyx_t_2 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_2 = PyArray_Empty(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), ((NumpyDotNet::dtype^)__pyx_t_6), 0); 
      __pyx_t_6 = nullptr;
      __pyx_v_deltaA = __pyx_t_2;
      __pyx_t_2 = nullptr;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":203
 *             dim2[1] = n;
 *             deltaA = PyArray_Empty(2, &dim2[0], np.double, False)
 *             xplusA = PyArray_Empty(2, &dim2[0], np.double, False)             # <<<<<<<<<<<<<<
 * 
 *         if nq == 1:
 */
      __pyx_t_2 = __pyx_v_np;
      __pyx_t_6 = __site_get_double_203_50->Target(__site_get_double_203_50, __pyx_t_2, __pyx_context);
      __pyx_t_2 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_2 = PyArray_Empty(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), ((NumpyDotNet::dtype^)__pyx_t_6), 0); 
      __pyx_t_6 = nullptr;
      __pyx_v_xplusA = __pyx_t_2;
      __pyx_t_2 = nullptr;
    }
    __pyx_L5:;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":205
 *             xplusA = PyArray_Empty(2, &dim2[0], np.double, False)
 * 
 *         if nq == 1:             # <<<<<<<<<<<<<<
 *             dim1[0] = n;
 *             epsA = PyArray_Empty(1, &dim1[0], np.double, False)
 */
    __pyx_t_1 = (__pyx_v_nq == 1);
    if (__pyx_t_1) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":206
 * 
 *         if nq == 1:
 *             dim1[0] = n;             # <<<<<<<<<<<<<<
 *             epsA = PyArray_Empty(1, &dim1[0], np.double, False)
 *             fnA = PyArray_Empty(1, &dim1[0], np.double, False)
 */
      (__pyx_v_dim1[0]) = __pyx_v_n;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":207
 *         if nq == 1:
 *             dim1[0] = n;
 *             epsA = PyArray_Empty(1, &dim1[0], np.double, False)             # <<<<<<<<<<<<<<
 *             fnA = PyArray_Empty(1, &dim1[0], np.double, False)
 *         else:
 */
      __pyx_t_2 = __pyx_v_np;
      __pyx_t_6 = __site_get_double_207_48->Target(__site_get_double_207_48, __pyx_t_2, __pyx_context);
      __pyx_t_2 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_2 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_6), 0); 
      __pyx_t_6 = nullptr;
      __pyx_v_epsA = __pyx_t_2;
      __pyx_t_2 = nullptr;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":208
 *             dim1[0] = n;
 *             epsA = PyArray_Empty(1, &dim1[0], np.double, False)
 *             fnA = PyArray_Empty(1, &dim1[0], np.double, False)             # <<<<<<<<<<<<<<
 *         else:
 *             dim2[0] = nq;
 */
      __pyx_t_2 = __pyx_v_np;
      __pyx_t_6 = __site_get_double_208_47->Target(__site_get_double_208_47, __pyx_t_2, __pyx_context);
      __pyx_t_2 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_2 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_6), 0); 
      __pyx_t_6 = nullptr;
      __pyx_v_fnA = __pyx_t_2;
      __pyx_t_2 = nullptr;
      goto __pyx_L6;
    }
    /*else*/ {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":210
 *             fnA = PyArray_Empty(1, &dim1[0], np.double, False)
 *         else:
 *             dim2[0] = nq;             # <<<<<<<<<<<<<<
 *             dim2[1] = n;
 *             epsA = PyArray_Empty(2, &dim2[0], np.double, False)
 */
      (__pyx_v_dim2[0]) = __pyx_v_nq;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":211
 *         else:
 *             dim2[0] = nq;
 *             dim2[1] = n;             # <<<<<<<<<<<<<<
 *             epsA = PyArray_Empty(2, &dim2[0], np.double, False)
 *             fnA = PyArray_Empty(2, &dim2[0], np.double, False)
 */
      (__pyx_v_dim2[1]) = __pyx_v_n;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":212
 *             dim2[0] = nq;
 *             dim2[1] = n;
 *             epsA = PyArray_Empty(2, &dim2[0], np.double, False)             # <<<<<<<<<<<<<<
 *             fnA = PyArray_Empty(2, &dim2[0], np.double, False)
 * 
 */
      __pyx_t_2 = __pyx_v_np;
      __pyx_t_6 = __site_get_double_212_48->Target(__site_get_double_212_48, __pyx_t_2, __pyx_context);
      __pyx_t_2 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_2 = PyArray_Empty(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), ((NumpyDotNet::dtype^)__pyx_t_6), 0); 
      __pyx_t_6 = nullptr;
      __pyx_v_epsA = __pyx_t_2;
      __pyx_t_2 = nullptr;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":213
 *             dim2[1] = n;
 *             epsA = PyArray_Empty(2, &dim2[0], np.double, False)
 *             fnA = PyArray_Empty(2, &dim2[0], np.double, False)             # <<<<<<<<<<<<<<
 * 
 *         memcpy(PyArray_DATA(deltaA), <void *>(<double *>PyArray_DATA(work) + delta),
 */
      __pyx_t_2 = __pyx_v_np;
      __pyx_t_6 = __site_get_double_213_47->Target(__site_get_double_213_47, __pyx_t_2, __pyx_context);
      __pyx_t_2 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_2 = PyArray_Empty(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), ((NumpyDotNet::dtype^)__pyx_t_6), 0); 
      __pyx_t_6 = nullptr;
      __pyx_v_fnA = __pyx_t_2;
      __pyx_t_2 = nullptr;
    }
    __pyx_L6:;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":215
 *             fnA = PyArray_Empty(2, &dim2[0], np.double, False)
 * 
 *         memcpy(PyArray_DATA(deltaA), <void *>(<double *>PyArray_DATA(work) + delta),             # <<<<<<<<<<<<<<
 *             m * n * sizeof(double));
 *         memcpy(PyArray_DATA(epsA), <void *>(<double *>PyArray_DATA(work) + eps),
 */
    if (__pyx_v_deltaA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_deltaA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = __pyx_v_work;
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":216
 * 
 *         memcpy(PyArray_DATA(deltaA), <void *>(<double *>PyArray_DATA(work) + delta),
 *             m * n * sizeof(double));             # <<<<<<<<<<<<<<
 *         memcpy(PyArray_DATA(epsA), <void *>(<double *>PyArray_DATA(work) + eps),
 *             nq * n * sizeof(double));
 */
    memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_deltaA)), ((void *)(((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_t_2))) + __pyx_v_delta)), ((__pyx_v_m * __pyx_v_n) * (sizeof(double))));
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":217
 *         memcpy(PyArray_DATA(deltaA), <void *>(<double *>PyArray_DATA(work) + delta),
 *             m * n * sizeof(double));
 *         memcpy(PyArray_DATA(epsA), <void *>(<double *>PyArray_DATA(work) + eps),             # <<<<<<<<<<<<<<
 *             nq * n * sizeof(double));
 *         memcpy(PyArray_DATA(xplusA), <void *>(<double *>PyArray_DATA(work) + xplus),
 */
    if (__pyx_v_epsA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_epsA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = __pyx_v_work;
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":218
 *             m * n * sizeof(double));
 *         memcpy(PyArray_DATA(epsA), <void *>(<double *>PyArray_DATA(work) + eps),
 *             nq * n * sizeof(double));             # <<<<<<<<<<<<<<
 *         memcpy(PyArray_DATA(xplusA), <void *>(<double *>PyArray_DATA(work) + xplus),
 *             m * n * sizeof(double));
 */
    memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_epsA)), ((void *)(((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_t_2))) + __pyx_v_eps)), ((__pyx_v_nq * __pyx_v_n) * (sizeof(double))));
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":219
 *         memcpy(PyArray_DATA(epsA), <void *>(<double *>PyArray_DATA(work) + eps),
 *             nq * n * sizeof(double));
 *         memcpy(PyArray_DATA(xplusA), <void *>(<double *>PyArray_DATA(work) + xplus),             # <<<<<<<<<<<<<<
 *             m * n * sizeof(double));
 *         memcpy(PyArray_DATA(fnA), <void *>(<double *>PyArray_DATA(work) + fn),
 */
    if (__pyx_v_xplusA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_xplusA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = __pyx_v_work;
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":220
 *             nq * n * sizeof(double));
 *         memcpy(PyArray_DATA(xplusA), <void *>(<double *>PyArray_DATA(work) + xplus),
 *             m * n * sizeof(double));             # <<<<<<<<<<<<<<
 *         memcpy(PyArray_DATA(fnA), <void *>(<double *>PyArray_DATA(work) + fn),
 *             nq * n * sizeof(double));
 */
    memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_xplusA)), ((void *)(((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_t_2))) + __pyx_v_xplus)), ((__pyx_v_m * __pyx_v_n) * (sizeof(double))));
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":221
 *         memcpy(PyArray_DATA(xplusA), <void *>(<double *>PyArray_DATA(work) + xplus),
 *             m * n * sizeof(double));
 *         memcpy(PyArray_DATA(fnA), <void *>(<double *>PyArray_DATA(work) + fn),             # <<<<<<<<<<<<<<
 *             nq * n * sizeof(double));
 * 
 */
    if (__pyx_v_fnA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_fnA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = __pyx_v_work;
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":222
 *             m * n * sizeof(double));
 *         memcpy(PyArray_DATA(fnA), <void *>(<double *>PyArray_DATA(work) + fn),
 *             nq * n * sizeof(double));             # <<<<<<<<<<<<<<
 * 
 *         res_var = (<double *>NpyArray_DATA(work))[rvar];
 */
    memcpy(PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_fnA)), ((void *)(((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_t_2))) + __pyx_v_fn)), ((__pyx_v_nq * __pyx_v_n) * (sizeof(double))));
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":224
 *             nq * n * sizeof(double));
 * 
 *         res_var = (<double *>NpyArray_DATA(work))[rvar];             # <<<<<<<<<<<<<<
 *         sum_square = (<double *>NpyArray_DATA(work))[wss]
 *         sum_square_delta = (<double *>NpyArray_DATA(work))[wssde];
 */
    __pyx_v_res_var = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_rvar]);

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":225
 * 
 *         res_var = (<double *>NpyArray_DATA(work))[rvar];
 *         sum_square = (<double *>NpyArray_DATA(work))[wss]             # <<<<<<<<<<<<<<
 *         sum_square_delta = (<double *>NpyArray_DATA(work))[wssde];
 *         sum_square_eps = (<double *>NpyArray_DATA(work))[wssep];
 */
    __pyx_v_sum_square = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_wss]);

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":226
 *         res_var = (<double *>NpyArray_DATA(work))[rvar];
 *         sum_square = (<double *>NpyArray_DATA(work))[wss]
 *         sum_square_delta = (<double *>NpyArray_DATA(work))[wssde];             # <<<<<<<<<<<<<<
 *         sum_square_eps = (<double *>NpyArray_DATA(work))[wssep];
 *         inv_condnum = (<double *>NpyArray_DATA(work))[rcond];
 */
    __pyx_v_sum_square_delta = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_wssde]);

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":227
 *         sum_square = (<double *>NpyArray_DATA(work))[wss]
 *         sum_square_delta = (<double *>NpyArray_DATA(work))[wssde];
 *         sum_square_eps = (<double *>NpyArray_DATA(work))[wssep];             # <<<<<<<<<<<<<<
 *         inv_condnum = (<double *>NpyArray_DATA(work))[rcond];
 *         rel_error = (<double *>NpyArray_DATA(work))[eta];
 */
    __pyx_v_sum_square_eps = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_wssep]);

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":228
 *         sum_square_delta = (<double *>NpyArray_DATA(work))[wssde];
 *         sum_square_eps = (<double *>NpyArray_DATA(work))[wssep];
 *         inv_condnum = (<double *>NpyArray_DATA(work))[rcond];             # <<<<<<<<<<<<<<
 *         rel_error = (<double *>NpyArray_DATA(work))[eta];
 * 
 */
    __pyx_v_inv_condnum = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_rcond]);

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":229
 *         sum_square_eps = (<double *>NpyArray_DATA(work))[wssep];
 *         inv_condnum = (<double *>NpyArray_DATA(work))[rcond];
 *         rel_error = (<double *>NpyArray_DATA(work))[eta];             # <<<<<<<<<<<<<<
 * 
 *         retobj = (PyArray_Return(Npy_INTERFACE_array(beta)),
 */
    __pyx_v_rel_error = (((double *)NpyArray_DATA(__pyx_v_work))[__pyx_v_eta]);

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":231
 *         rel_error = (<double *>NpyArray_DATA(work))[eta];
 * 
 *         retobj = (PyArray_Return(Npy_INTERFACE_array(beta)),             # <<<<<<<<<<<<<<
 *                   PyArray_Return(Npy_INTERFACE_array(sd_beta)),
 *                   PyArray_Return(Npy_INTERFACE_array(cov_beta)),
 */
    __pyx_t_2 = Npy_INTERFACE_OBJECT(__pyx_v_beta); 
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_6 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_t_2)); 
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":232
 * 
 *         retobj = (PyArray_Return(Npy_INTERFACE_array(beta)),
 *                   PyArray_Return(Npy_INTERFACE_array(sd_beta)),             # <<<<<<<<<<<<<<
 *                   PyArray_Return(Npy_INTERFACE_array(cov_beta)),
 *                   { "delta" : PyArray_Return(deltaA),
 */
    __pyx_t_2 = Npy_INTERFACE_OBJECT(__pyx_v_sd_beta); 
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_5 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_t_2)); 
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":233
 *         retobj = (PyArray_Return(Npy_INTERFACE_array(beta)),
 *                   PyArray_Return(Npy_INTERFACE_array(sd_beta)),
 *                   PyArray_Return(Npy_INTERFACE_array(cov_beta)),             # <<<<<<<<<<<<<<
 *                   { "delta" : PyArray_Return(deltaA),
 *                     "eps" : PyArray_Return(epsA),
 */
    __pyx_t_2 = Npy_INTERFACE_OBJECT(__pyx_v_cov_beta); 
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_3 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_t_2)); 
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":234
 *                   PyArray_Return(Npy_INTERFACE_array(sd_beta)),
 *                   PyArray_Return(Npy_INTERFACE_array(cov_beta)),
 *                   { "delta" : PyArray_Return(deltaA),             # <<<<<<<<<<<<<<
 *                     "eps" : PyArray_Return(epsA),
 *                     "xplus" : PyArray_Return(xplusA),
 */
    __pyx_t_7 = PythonOps::MakeEmptyDict();
    if (__pyx_v_deltaA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_deltaA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_deltaA)); 
    __pyx_t_7[((System::Object^)"delta")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":235
 *                   PyArray_Return(Npy_INTERFACE_array(cov_beta)),
 *                   { "delta" : PyArray_Return(deltaA),
 *                     "eps" : PyArray_Return(epsA),             # <<<<<<<<<<<<<<
 *                     "xplus" : PyArray_Return(xplusA),
 *                     "y" : PyArray_Return(fnA),
 */
    if (__pyx_v_epsA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_epsA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_epsA)); 
    __pyx_t_7[((System::Object^)"eps")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":236
 *                   { "delta" : PyArray_Return(deltaA),
 *                     "eps" : PyArray_Return(epsA),
 *                     "xplus" : PyArray_Return(xplusA),             # <<<<<<<<<<<<<<
 *                     "y" : PyArray_Return(fnA),
 *                     "res_var" : res_var,
 */
    if (__pyx_v_xplusA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_xplusA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_xplusA)); 
    __pyx_t_7[((System::Object^)"xplus")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":237
 *                     "eps" : PyArray_Return(epsA),
 *                     "xplus" : PyArray_Return(xplusA),
 *                     "y" : PyArray_Return(fnA),             # <<<<<<<<<<<<<<
 *                     "res_var" : res_var,
 *                     "sum_square" : sum_square,
 */
    if (__pyx_v_fnA != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_fnA) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_v_fnA)); 
    __pyx_t_7[((System::Object^)"y")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":238
 *                     "xplus" : PyArray_Return(xplusA),
 *                     "y" : PyArray_Return(fnA),
 *                     "res_var" : res_var,             # <<<<<<<<<<<<<<
 *                     "sum_square" : sum_square,
 *                     "sum_square_delta" : sum_square_delta,
 */
    __pyx_t_2 = __pyx_v_res_var;
    __pyx_t_7[((System::Object^)"res_var")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":239
 *                     "y" : PyArray_Return(fnA),
 *                     "res_var" : res_var,
 *                     "sum_square" : sum_square,             # <<<<<<<<<<<<<<
 *                     "sum_square_delta" : sum_square_delta,
 *                     "sum_square_eps" : sum_square_eps,
 */
    __pyx_t_2 = __pyx_v_sum_square;
    __pyx_t_7[((System::Object^)"sum_square")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":240
 *                     "res_var" : res_var,
 *                     "sum_square" : sum_square,
 *                     "sum_square_delta" : sum_square_delta,             # <<<<<<<<<<<<<<
 *                     "sum_square_eps" : sum_square_eps,
 *                     "inv_condnum" : inv_condnum,
 */
    __pyx_t_2 = __pyx_v_sum_square_delta;
    __pyx_t_7[((System::Object^)"sum_square_delta")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":241
 *                     "sum_square" : sum_square,
 *                     "sum_square_delta" : sum_square_delta,
 *                     "sum_square_eps" : sum_square_eps,             # <<<<<<<<<<<<<<
 *                     "inv_condnum" : inv_condnum,
 *                     "rel_error" : rel_error,
 */
    __pyx_t_2 = __pyx_v_sum_square_eps;
    __pyx_t_7[((System::Object^)"sum_square_eps")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":242
 *                     "sum_square_delta" : sum_square_delta,
 *                     "sum_square_eps" : sum_square_eps,
 *                     "inv_condnum" : inv_condnum,             # <<<<<<<<<<<<<<
 *                     "rel_error" : rel_error,
 *                     "work" : PyArray_Return(work),
 */
    __pyx_t_2 = __pyx_v_inv_condnum;
    __pyx_t_7[((System::Object^)"inv_condnum")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":243
 *                     "sum_square_eps" : sum_square_eps,
 *                     "inv_condnum" : inv_condnum,
 *                     "rel_error" : rel_error,             # <<<<<<<<<<<<<<
 *                     "work" : PyArray_Return(work),
 *                     "work_ind" : work_ind,
 */
    __pyx_t_2 = __pyx_v_rel_error;
    __pyx_t_7[((System::Object^)"rel_error")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":244
 *                     "inv_condnum" : inv_condnum,
 *                     "rel_error" : rel_error,
 *                     "work" : PyArray_Return(work),             # <<<<<<<<<<<<<<
 *                     "work_ind" : work_ind,
 *                     "iwork" : PyArray_Return(iwork),
 */
    __pyx_t_2 = __pyx_v_work;
    if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_8 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_t_2)); 
    __pyx_t_2 = nullptr;
    __pyx_t_7[((System::Object^)"work")] = __pyx_t_8;
    __pyx_t_8 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":245
 *                     "rel_error" : rel_error,
 *                     "work" : PyArray_Return(work),
 *                     "work_ind" : work_ind,             # <<<<<<<<<<<<<<
 *                     "iwork" : PyArray_Return(iwork),
 *                     "info" : info })
 */
    __pyx_t_7[((System::Object^)"work_ind")] = __pyx_v_work_ind;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":246
 *                     "work" : PyArray_Return(work),
 *                     "work_ind" : work_ind,
 *                     "iwork" : PyArray_Return(iwork),             # <<<<<<<<<<<<<<
 *                     "info" : info })
 * 
 */
    __pyx_t_8 = __pyx_v_iwork;
    if (__pyx_t_8 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_8) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = PyArray_Return(((NumpyDotNet::ndarray^)__pyx_t_8)); 
    __pyx_t_8 = nullptr;
    __pyx_t_7[((System::Object^)"iwork")] = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":247
 *                     "work_ind" : work_ind,
 *                     "iwork" : PyArray_Return(iwork),
 *                     "info" : info })             # <<<<<<<<<<<<<<
 * 
 *     Npy_DECREF(beta)
 */
    __pyx_t_2 = __pyx_v_info;
    __pyx_t_7[((System::Object^)"info")] = __pyx_t_2;
    __pyx_t_2 = nullptr;
    __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_6, __pyx_t_5, __pyx_t_3, ((System::Object^)__pyx_t_7)});
    __pyx_t_6 = nullptr;
    __pyx_t_5 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_7 = nullptr;
    __pyx_v_retobj = __pyx_t_2;
    __pyx_t_2 = nullptr;
  }
  __pyx_L4:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":249
 *                     "info" : info })
 * 
 *     Npy_DECREF(beta)             # <<<<<<<<<<<<<<
 *     Npy_DECREF(sd_beta)
 *     Npy_DECREF(cov_beta)
 */
  Npy_DECREF(__pyx_v_beta);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":250
 * 
 *     Npy_DECREF(beta)
 *     Npy_DECREF(sd_beta)             # <<<<<<<<<<<<<<
 *     Npy_DECREF(cov_beta)
 *     return retobj;
 */
  Npy_DECREF(__pyx_v_sd_beta);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":251
 *     Npy_DECREF(beta)
 *     Npy_DECREF(sd_beta)
 *     Npy_DECREF(cov_beta)             # <<<<<<<<<<<<<<
 *     return retobj;
 * 
 */
  Npy_DECREF(__pyx_v_cov_beta);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":252
 *     Npy_DECREF(sd_beta)
 *     Npy_DECREF(cov_beta)
 *     return retobj;             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_retobj;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":263
 * 
 * 
 * def odr(fcn, initbeta, y, x, we=None, wd=None, fjacb=None, fjacd=None, extra_args=None,             # <<<<<<<<<<<<<<
 *     ifixb=None, ifixx=None, int job=0, int iprint=0, errfile=None, rptfile=None,
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,
 */

static System::Object^ odr(System::Object^ fcn, System::Object^ initbeta, System::Object^ y, System::Object^ x, [InteropServices::Optional]System::Object^ we, [InteropServices::Optional]System::Object^ wd, [InteropServices::Optional]System::Object^ fjacb, [InteropServices::Optional]System::Object^ fjacd, [InteropServices::Optional]System::Object^ extra_args, [InteropServices::Optional]System::Object^ ifixb, [InteropServices::Optional]System::Object^ ifixx, [InteropServices::Optional]System::Object^ job, [InteropServices::Optional]System::Object^ iprint, [InteropServices::Optional]System::Object^ errfile, [InteropServices::Optional]System::Object^ rptfile, [InteropServices::Optional]System::Object^ ndigit, [InteropServices::Optional]System::Object^ taufac, [InteropServices::Optional]System::Object^ sstol, [InteropServices::Optional]System::Object^ partol, [InteropServices::Optional]System::Object^ maxit, [InteropServices::Optional]System::Object^ stpb, [InteropServices::Optional]System::Object^ stpd, [InteropServices::Optional]System::Object^ sclb, [InteropServices::Optional]System::Object^ scld, [InteropServices::Optional]System::Object^ work, [InteropServices::Optional]System::Object^ iwork, [InteropServices::Optional]System::Object^ full_output) {
  System::Object^ __pyx_v_fcn = nullptr;
  System::Object^ __pyx_v_initbeta = nullptr;
  System::Object^ __pyx_v_y = nullptr;
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_we = nullptr;
  System::Object^ __pyx_v_wd = nullptr;
  System::Object^ __pyx_v_fjacb = nullptr;
  System::Object^ __pyx_v_fjacd = nullptr;
  System::Object^ __pyx_v_extra_args = nullptr;
  System::Object^ __pyx_v_ifixb = nullptr;
  System::Object^ __pyx_v_ifixx = nullptr;
  int __pyx_v_job;
  int __pyx_v_iprint;
  System::Object^ __pyx_v_errfile = nullptr;
  System::Object^ __pyx_v_rptfile = nullptr;
  int __pyx_v_ndigit;
  double __pyx_v_taufac;
  double __pyx_v_sstol;
  double __pyx_v_partol;
  int __pyx_v_maxit;
  System::Object^ __pyx_v_stpb = nullptr;
  System::Object^ __pyx_v_stpd = nullptr;
  System::Object^ __pyx_v_sclb = nullptr;
  System::Object^ __pyx_v_scld = nullptr;
  System::Object^ __pyx_v_work = nullptr;
  System::Object^ __pyx_v_iwork = nullptr;
  int __pyx_v_full_output;
  int __pyx_v_n;
  int __pyx_v_m;
  int __pyx_v_np;
  int __pyx_v_nq;
  int __pyx_v_ldy;
  int __pyx_v_ldx;
  int __pyx_v_ldwe;
  int __pyx_v_ld2we;
  int __pyx_v_ldwd;
  int __pyx_v_ld2wd;
  int __pyx_v_ldifx;
  int __pyx_v_lunerr;
  int __pyx_v_lunrpt;
  int __pyx_v_ldstpd;
  int __pyx_v_ldscld;
  int __pyx_v_lwork;
  int __pyx_v_liwork;
  int __pyx_v_info;
  int __pyx_v_isodr;
  int __pyx_v_implicit;
  npy_intp __pyx_v_dim1[1];
  npy_intp __pyx_v_dim2[2];
  npy_intp __pyx_v_dim3[3];
  double __pyx_v_val;
  System::Object^ __pyx_v_e;
  System::Object^ __pyx_v_vn;
  System::Object^ __pyx_v_v;
  System::Object^ __pyx_v_beta;
  System::Object^ __pyx_v_result;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  int __pyx_t_4;
  double __pyx_t_7;
  int __pyx_t_8;
  System::Object^ __pyx_t_9 = nullptr;
  System::Object^ __pyx_t_10 = nullptr;
  System::Object^ __pyx_t_11 = nullptr;
  int __pyx_t_12;
  System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> __pyx_t_13;
  int __pyx_t_14;
  int __pyx_t_15;
  int __pyx_t_16;
  int __pyx_t_17;
  int __pyx_t_18;
  int __pyx_t_19;
  System::Object^ __pyx_t_20 = nullptr;
  double __pyx_t_23;
  double __pyx_t_24;
  char *__pyx_t_27;
  System::IntPtr __pyx_t_28;
  int __pyx_t_29;
  char *__pyx_t_30;
  int __pyx_t_31;
  __pyx_v_fcn = fcn;
  __pyx_v_initbeta = initbeta;
  __pyx_v_y = y;
  __pyx_v_x = x;
  if (dynamic_cast<System::Reflection::Missing^>(we) == nullptr) {
    __pyx_v_we = we;
  } else {
    __pyx_v_we = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(wd) == nullptr) {
    __pyx_v_wd = wd;
  } else {
    __pyx_v_wd = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(fjacb) == nullptr) {
    __pyx_v_fjacb = fjacb;
  } else {
    __pyx_v_fjacb = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(fjacd) == nullptr) {
    __pyx_v_fjacd = fjacd;
  } else {
    __pyx_v_fjacd = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(extra_args) == nullptr) {
    __pyx_v_extra_args = extra_args;
  } else {
    __pyx_v_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(ifixb) == nullptr) {
    __pyx_v_ifixb = ifixb;
  } else {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":264
 * 
 * def odr(fcn, initbeta, y, x, we=None, wd=None, fjacb=None, fjacd=None, extra_args=None,
 *     ifixb=None, ifixx=None, int job=0, int iprint=0, errfile=None, rptfile=None,             # <<<<<<<<<<<<<<
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,
 *     int maxit=-1, stpb=None,
 */
    __pyx_v_ifixb = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(ifixx) == nullptr) {
    __pyx_v_ifixx = ifixx;
  } else {
    __pyx_v_ifixx = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(job) == nullptr) {
    __pyx_v_job = __site_cvt_cvt_int_263_0->Target(__site_cvt_cvt_int_263_0, job);
  } else {
    __pyx_v_job = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(iprint) == nullptr) {
    __pyx_v_iprint = __site_cvt_cvt_int_263_0_1->Target(__site_cvt_cvt_int_263_0_1, iprint);
  } else {
    __pyx_v_iprint = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(errfile) == nullptr) {
    __pyx_v_errfile = errfile;
  } else {
    __pyx_v_errfile = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(rptfile) == nullptr) {
    __pyx_v_rptfile = rptfile;
  } else {
    __pyx_v_rptfile = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(ndigit) == nullptr) {
    __pyx_v_ndigit = __site_cvt_cvt_int_263_0_2->Target(__site_cvt_cvt_int_263_0_2, ndigit);
  } else {
    __pyx_v_ndigit = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(taufac) == nullptr) {
    __pyx_v_taufac = __site_cvt_cvt_double_263_0->Target(__site_cvt_cvt_double_263_0, taufac);
  } else {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":265
 * def odr(fcn, initbeta, y, x, we=None, wd=None, fjacb=None, fjacd=None, extra_args=None,
 *     ifixb=None, ifixx=None, int job=0, int iprint=0, errfile=None, rptfile=None,
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,             # <<<<<<<<<<<<<<
 *     int maxit=-1, stpb=None,
 *     stpd=None, sclb=None, scld=None, work=None, iwork=None, int full_output=0):
 */
    __pyx_v_taufac = ((double)0.0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(sstol) == nullptr) {
    __pyx_v_sstol = __site_cvt_cvt_double_263_0_1->Target(__site_cvt_cvt_double_263_0_1, sstol);
  } else {
    __pyx_v_sstol = __pyx_k_1;
  }
  if (dynamic_cast<System::Reflection::Missing^>(partol) == nullptr) {
    __pyx_v_partol = __site_cvt_cvt_double_263_0_2->Target(__site_cvt_cvt_double_263_0_2, partol);
  } else {
    __pyx_v_partol = __pyx_k_2;
  }
  if (dynamic_cast<System::Reflection::Missing^>(maxit) == nullptr) {
    __pyx_v_maxit = __site_cvt_cvt_int_263_0_3->Target(__site_cvt_cvt_int_263_0_3, maxit);
  } else {
    __pyx_v_maxit = ((int)-1);
  }
  if (dynamic_cast<System::Reflection::Missing^>(stpb) == nullptr) {
    __pyx_v_stpb = stpb;
  } else {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":266
 *     ifixb=None, ifixx=None, int job=0, int iprint=0, errfile=None, rptfile=None,
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,
 *     int maxit=-1, stpb=None,             # <<<<<<<<<<<<<<
 *     stpd=None, sclb=None, scld=None, work=None, iwork=None, int full_output=0):
 *     """
 */
    __pyx_v_stpb = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(stpd) == nullptr) {
    __pyx_v_stpd = stpd;
  } else {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":267
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,
 *     int maxit=-1, stpb=None,
 *     stpd=None, sclb=None, scld=None, work=None, iwork=None, int full_output=0):             # <<<<<<<<<<<<<<
 *     """
 *     odr(fcn, beta0, y, x,
 */
    __pyx_v_stpd = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(sclb) == nullptr) {
    __pyx_v_sclb = sclb;
  } else {
    __pyx_v_sclb = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(scld) == nullptr) {
    __pyx_v_scld = scld;
  } else {
    __pyx_v_scld = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(work) == nullptr) {
    __pyx_v_work = work;
  } else {
    __pyx_v_work = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(iwork) == nullptr) {
    __pyx_v_iwork = iwork;
  } else {
    __pyx_v_iwork = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(full_output) == nullptr) {
    __pyx_v_full_output = __site_cvt_cvt_int_263_0_4->Target(__site_cvt_cvt_int_263_0_4, full_output);
  } else {
    __pyx_v_full_output = ((int)0);
  }
  __pyx_v_e = nullptr;
  __pyx_v_vn = nullptr;
  __pyx_v_v = nullptr;
  __pyx_v_beta = nullptr;
  __pyx_v_result = nullptr;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":279
 *     """
 *     cdef int n, m, np, nq, ldy, ldx, ldwe, ld2we, ldwd, ld2wd, ldifx
 *     cdef int lunerr = -1             # <<<<<<<<<<<<<<
 *     cdef int lunrpt = -1
 *     cdef int ldstpd, ldscld, lwork, liwork, info=0
 */
  __pyx_v_lunerr = -1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":280
 *     cdef int n, m, np, nq, ldy, ldx, ldwe, ld2we, ldwd, ld2wd, ldifx
 *     cdef int lunerr = -1
 *     cdef int lunrpt = -1             # <<<<<<<<<<<<<<
 *     cdef int ldstpd, ldscld, lwork, liwork, info=0
 *     cdef int isodr = 1
 */
  __pyx_v_lunrpt = -1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":281
 *     cdef int lunerr = -1
 *     cdef int lunrpt = -1
 *     cdef int ldstpd, ldscld, lwork, liwork, info=0             # <<<<<<<<<<<<<<
 *     cdef int isodr = 1
 *     cdef int implicit
 */
  __pyx_v_info = 0;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":282
 *     cdef int lunrpt = -1
 *     cdef int ldstpd, ldscld, lwork, liwork, info=0
 *     cdef int isodr = 1             # <<<<<<<<<<<<<<
 *     cdef int implicit
 *     cdef npy_intp dim1[1], dim2[2], dim3[3]
 */
  __pyx_v_isodr = 1;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":288
 * 
 * 
 *     if not callable(fcn): raise TypeError("fcn must be callable")             # <<<<<<<<<<<<<<
 *     if not operator.isSequenceType(initbeta): raise TypeError("initbeta must be a sequence")
 *     if not operator.isSequenceType(y):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "callable");
  __pyx_t_2 = __site_call1_288_19->Target(__site_call1_288_19, __pyx_context, __pyx_t_1, __pyx_v_fcn);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_288_19->Target(__site_istrue_288_19, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = (!__pyx_t_3);
  if (__pyx_t_4) {
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_1 = __site_call1_288_41->Target(__site_call1_288_41, __pyx_context, __pyx_t_2, ((System::Object^)"fcn must be callable"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":289
 * 
 *     if not callable(fcn): raise TypeError("fcn must be callable")
 *     if not operator.isSequenceType(initbeta): raise TypeError("initbeta must be a sequence")             # <<<<<<<<<<<<<<
 *     if not operator.isSequenceType(y):
 *         try:
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "operator");
  __pyx_t_2 = __site_get_isSequenceType_289_19->Target(__site_get_isSequenceType_289_19, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_289_34->Target(__site_call1_289_34, __pyx_context, __pyx_t_2, __pyx_v_initbeta);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = __site_istrue_289_34->Target(__site_istrue_289_34, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = (!__pyx_t_4);
  if (__pyx_t_3) {
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_2 = __site_call1_289_61->Target(__site_call1_289_61, __pyx_context, __pyx_t_1, ((System::Object^)"initbeta must be a sequence"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":290
 *     if not callable(fcn): raise TypeError("fcn must be callable")
 *     if not operator.isSequenceType(initbeta): raise TypeError("initbeta must be a sequence")
 *     if not operator.isSequenceType(y):             # <<<<<<<<<<<<<<
 *         try:
 *             val = int(y)
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "operator");
  __pyx_t_1 = __site_get_isSequenceType_290_19->Target(__site_get_isSequenceType_290_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call1_290_34->Target(__site_call1_290_34, __pyx_context, __pyx_t_1, __pyx_v_y);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_290_34->Target(__site_istrue_290_34, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = (!__pyx_t_3);
  if (__pyx_t_4) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":291
 *     if not operator.isSequenceType(initbeta): raise TypeError("initbeta must be a sequence")
 *     if not operator.isSequenceType(y):
 *         try:             # <<<<<<<<<<<<<<
 *             val = int(y)
 *         except ValueError, e:
 */
    try {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":292
 *     if not operator.isSequenceType(y):
 *         try:
 *             val = int(y)             # <<<<<<<<<<<<<<
 *         except ValueError, e:
 *             raise TypeError("y must be a sequence or integer(if model is implicit)")
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "int");
      __pyx_t_1 = __site_call1_292_21->Target(__site_call1_292_21, __pyx_context, ((System::Object^)__pyx_t_2), __pyx_v_y);
      __pyx_t_2 = nullptr;
      __pyx_t_7 = __site_cvt_cvt_double_292_21->Target(__site_cvt_cvt_double_292_21, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_v_val = __pyx_t_7;
    } catch (System::Exception^ __pyx_lt_5) {
      System::Object^ __pyx_lt_6 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_5);

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":293
 *         try:
 *             val = int(y)
 *         except ValueError, e:             # <<<<<<<<<<<<<<
 *             raise TypeError("y must be a sequence or integer(if model is implicit)")
 *     if not operator.isSequenceType(x):
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_6, __pyx_t_1);
      __pyx_t_1 = nullptr;
      if (__pyx_v_e != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.odr._odrpack.odr");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_5);

        /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":294
 *             val = int(y)
 *         except ValueError, e:
 *             raise TypeError("y must be a sequence or integer(if model is implicit)")             # <<<<<<<<<<<<<<
 *     if not operator.isSequenceType(x):
 *         raise TypeError("x must be a sequence")
 */
        __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "TypeError");
        __pyx_t_2 = __site_call1_294_27->Target(__site_call1_294_27, __pyx_context, __pyx_t_1, ((System::Object^)"y must be a sequence or integer(if model is implicit)"));
        __pyx_t_1 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
        __pyx_t_2 = nullptr;
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_5);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":295
 *         except ValueError, e:
 *             raise TypeError("y must be a sequence or integer(if model is implicit)")
 *     if not operator.isSequenceType(x):             # <<<<<<<<<<<<<<
 *         raise TypeError("x must be a sequence")
 * 
 */
  __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "operator");
  __pyx_t_1 = __site_get_isSequenceType_295_19->Target(__site_get_isSequenceType_295_19, __pyx_t_2, __pyx_context);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = __site_call1_295_34->Target(__site_call1_295_34, __pyx_context, __pyx_t_1, __pyx_v_x);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = __site_istrue_295_34->Target(__site_istrue_295_34, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = (!__pyx_t_4);
  if (__pyx_t_3) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":296
 *             raise TypeError("y must be a sequence or integer(if model is implicit)")
 *     if not operator.isSequenceType(x):
 *         raise TypeError("x must be a sequence")             # <<<<<<<<<<<<<<
 * 
 *     if we is not None and not operator.isSequenceType(we) and not isinstance(we, (int, long, float)):
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_1 = __site_call1_296_23->Target(__site_call1_296_23, __pyx_context, __pyx_t_2, ((System::Object^)"x must be a sequence"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":298
 *         raise TypeError("x must be a sequence")
 * 
 *     if we is not None and not operator.isSequenceType(we) and not isinstance(we, (int, long, float)):             # <<<<<<<<<<<<<<
 *         raise TypeError("we must be a sequence or a number")
 *     if wd is not None and not operator.isSequenceType(wd) and not isinstance(wd, (int, long, float)):
 */
  __pyx_t_3 = (__pyx_v_we != nullptr);
  if (__pyx_t_3) {
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "operator");
    __pyx_t_2 = __site_get_isSequenceType_298_38->Target(__site_get_isSequenceType_298_38, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_call1_298_53->Target(__site_call1_298_53, __pyx_context, __pyx_t_2, __pyx_v_we);
    __pyx_t_2 = nullptr;
    __pyx_t_4 = __site_istrue_298_53->Target(__site_istrue_298_53, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_8 = (!__pyx_t_4);
    if (__pyx_t_8) {
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "int");
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "long");
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "float");
      __pyx_t_11 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_t_2), ((System::Object^)__pyx_t_9), ((System::Object^)__pyx_t_10)});
      __pyx_t_2 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_10 = __site_call2_298_76->Target(__site_call2_298_76, __pyx_context, __pyx_t_1, __pyx_v_we, __pyx_t_11);
      __pyx_t_1 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_4 = __site_istrue_298_76->Target(__site_istrue_298_76, __pyx_t_10);
      __pyx_t_10 = nullptr;
      __pyx_t_12 = (!__pyx_t_4);
      __pyx_t_4 = __pyx_t_12;
    } else {
      __pyx_t_4 = __pyx_t_8;
    }
    __pyx_t_8 = __pyx_t_4;
  } else {
    __pyx_t_8 = __pyx_t_3;
  }
  if (__pyx_t_8) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":299
 * 
 *     if we is not None and not operator.isSequenceType(we) and not isinstance(we, (int, long, float)):
 *         raise TypeError("we must be a sequence or a number")             # <<<<<<<<<<<<<<
 *     if wd is not None and not operator.isSequenceType(wd) and not isinstance(wd, (int, long, float)):
 *         raise TypeError("wd must be a sequence or a number")
 */
    __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_11 = __site_call1_299_23->Target(__site_call1_299_23, __pyx_context, __pyx_t_10, ((System::Object^)"we must be a sequence or a number"));
    __pyx_t_10 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_11, nullptr, nullptr);
    __pyx_t_11 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":300
 *     if we is not None and not operator.isSequenceType(we) and not isinstance(we, (int, long, float)):
 *         raise TypeError("we must be a sequence or a number")
 *     if wd is not None and not operator.isSequenceType(wd) and not isinstance(wd, (int, long, float)):             # <<<<<<<<<<<<<<
 *         raise TypeError("wd must be a sequence or a number")
 * 
 */
  __pyx_t_8 = (__pyx_v_wd != nullptr);
  if (__pyx_t_8) {
    __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "operator");
    __pyx_t_10 = __site_get_isSequenceType_300_38->Target(__site_get_isSequenceType_300_38, __pyx_t_11, __pyx_context);
    __pyx_t_11 = nullptr;
    __pyx_t_11 = __site_call1_300_53->Target(__site_call1_300_53, __pyx_context, __pyx_t_10, __pyx_v_wd);
    __pyx_t_10 = nullptr;
    __pyx_t_3 = __site_istrue_300_53->Target(__site_istrue_300_53, __pyx_t_11);
    __pyx_t_11 = nullptr;
    __pyx_t_4 = (!__pyx_t_3);
    if (__pyx_t_4) {
      __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "isinstance");
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "int");
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "long");
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "float");
      __pyx_t_2 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_t_10), ((System::Object^)__pyx_t_1), ((System::Object^)__pyx_t_9)});
      __pyx_t_10 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_call2_300_76->Target(__site_call2_300_76, __pyx_context, __pyx_t_11, __pyx_v_wd, __pyx_t_2);
      __pyx_t_11 = nullptr;
      __pyx_t_2 = nullptr;
      __pyx_t_3 = __site_istrue_300_76->Target(__site_istrue_300_76, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_12 = (!__pyx_t_3);
      __pyx_t_3 = __pyx_t_12;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    __pyx_t_4 = __pyx_t_3;
  } else {
    __pyx_t_4 = __pyx_t_8;
  }
  if (__pyx_t_4) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":301
 *         raise TypeError("we must be a sequence or a number")
 *     if wd is not None and not operator.isSequenceType(wd) and not isinstance(wd, (int, long, float)):
 *         raise TypeError("wd must be a sequence or a number")             # <<<<<<<<<<<<<<
 * 
 *     for vn in ["fjacb", "fjacd", "extra_args", "ifixx", "ifixb", "stpb", "stpd",
 */
    __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_2 = __site_call1_301_23->Target(__site_call1_301_23, __pyx_context, __pyx_t_9, ((System::Object^)"wd must be a sequence or a number"));
    __pyx_t_9 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":303
 *         raise TypeError("wd must be a sequence or a number")
 * 
 *     for vn in ["fjacb", "fjacd", "extra_args", "ifixx", "ifixb", "stpb", "stpd",             # <<<<<<<<<<<<<<
 *                "sclb", "scld", "work", "iwork"]:
 *         v = vars()[vn]
 */
  __pyx_t_2 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{((System::Object^)"fjacb"), ((System::Object^)"fjacd"), ((System::Object^)"extra_args"), ((System::Object^)"ifixx"), ((System::Object^)"ifixb"), ((System::Object^)"stpb"), ((System::Object^)"stpd"), ((System::Object^)"sclb"), ((System::Object^)"scld"), ((System::Object^)"work"), ((System::Object^)"iwork")});
  __pyx_t_13 = __site_get_iterator_303_4->Target(__site_get_iterator_303_4, ((System::Object^)__pyx_t_2));
  try {
    while (__pyx_t_13.Key->MoveNext()) {
      __pyx_v_vn = ((System::Object^)__pyx_t_13.Key->Current);

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":305
 *     for vn in ["fjacb", "fjacd", "extra_args", "ifixx", "ifixb", "stpb", "stpd",
 *                "sclb", "scld", "work", "iwork"]:
 *         v = vars()[vn]             # <<<<<<<<<<<<<<
 *         if v is not None and not operator.isSequenceType(v):
 *             raise TypeError("%s must be a sequence" % v)
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "vars");
      __pyx_t_11 = __site_call0_305_16->Target(__site_call0_305_16, __pyx_context, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_getindex_305_18->Target(__site_getindex_305_18, __pyx_t_11, __pyx_v_vn);
      __pyx_t_11 = nullptr;
      __pyx_v_v = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":306
 *                "sclb", "scld", "work", "iwork"]:
 *         v = vars()[vn]
 *         if v is not None and not operator.isSequenceType(v):             # <<<<<<<<<<<<<<
 *             raise TypeError("%s must be a sequence" % v)
 * 
 */
      __pyx_t_4 = (__pyx_v_v != nullptr);
      if (__pyx_t_4) {
        __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "operator");
        __pyx_t_11 = __site_get_isSequenceType_306_41->Target(__site_get_isSequenceType_306_41, __pyx_t_9, __pyx_context);
        __pyx_t_9 = nullptr;
        __pyx_t_9 = __site_call1_306_56->Target(__site_call1_306_56, __pyx_context, __pyx_t_11, __pyx_v_v);
        __pyx_t_11 = nullptr;
        __pyx_t_8 = __site_istrue_306_56->Target(__site_istrue_306_56, __pyx_t_9);
        __pyx_t_9 = nullptr;
        __pyx_t_3 = (!__pyx_t_8);
        __pyx_t_8 = __pyx_t_3;
      } else {
        __pyx_t_8 = __pyx_t_4;
      }
      if (__pyx_t_8) {

        /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":307
 *         v = vars()[vn]
 *         if v is not None and not operator.isSequenceType(v):
 *             raise TypeError("%s must be a sequence" % v)             # <<<<<<<<<<<<<<
 * 
 *     if work is not None and not isinstance(work, np.ndarray):
 */
        __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "TypeError");
        __pyx_t_11 = __site_op_mod_307_52->Target(__site_op_mod_307_52, ((System::Object^)"%s must be a sequence"), __pyx_v_v);
        __pyx_t_1 = __site_call1_307_27->Target(__site_call1_307_27, __pyx_context, __pyx_t_9, ((System::Object^)__pyx_t_11));
        __pyx_t_9 = nullptr;
        __pyx_t_11 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
        __pyx_t_1 = nullptr;
        goto __pyx_L11;
      }
      __pyx_L11:;
    }
  }
  finally {
    PythonOps::ForLoopDispose(__pyx_t_13);
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":309
 *             raise TypeError("%s must be a sequence" % v)
 * 
 *     if work is not None and not isinstance(work, np.ndarray):             # <<<<<<<<<<<<<<
 *         raise TypeError("work must be an array")
 *     if iwork is not None and not isinstance(work, np.ndarray):
 */
  __pyx_t_8 = (__pyx_v_work != nullptr);
  if (__pyx_t_8) {
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
    __pyx_t_11 = __pyx_v_np;
    __pyx_t_9 = __site_get_ndarray_309_51->Target(__site_get_ndarray_309_51, __pyx_t_11, __pyx_context);
    __pyx_t_11 = nullptr;
    __pyx_t_11 = __site_call2_309_42->Target(__site_call2_309_42, __pyx_context, __pyx_t_1, __pyx_v_work, __pyx_t_9);
    __pyx_t_1 = nullptr;
    __pyx_t_9 = nullptr;
    __pyx_t_4 = __site_istrue_309_42->Target(__site_istrue_309_42, __pyx_t_11);
    __pyx_t_11 = nullptr;
    __pyx_t_3 = (!__pyx_t_4);
    __pyx_t_4 = __pyx_t_3;
  } else {
    __pyx_t_4 = __pyx_t_8;
  }
  if (__pyx_t_4) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":310
 * 
 *     if work is not None and not isinstance(work, np.ndarray):
 *         raise TypeError("work must be an array")             # <<<<<<<<<<<<<<
 *     if iwork is not None and not isinstance(work, np.ndarray):
 *         raise TypeError("iwork must be an array")
 */
    __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_9 = __site_call1_310_23->Target(__site_call1_310_23, __pyx_context, __pyx_t_11, ((System::Object^)"work must be an array"));
    __pyx_t_11 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
    __pyx_t_9 = nullptr;
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":311
 *     if work is not None and not isinstance(work, np.ndarray):
 *         raise TypeError("work must be an array")
 *     if iwork is not None and not isinstance(work, np.ndarray):             # <<<<<<<<<<<<<<
 *         raise TypeError("iwork must be an array")
 * 
 */
  __pyx_t_4 = (__pyx_v_iwork != nullptr);
  if (__pyx_t_4) {
    __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "isinstance");
    __pyx_t_11 = __pyx_v_np;
    __pyx_t_1 = __site_get_ndarray_311_52->Target(__site_get_ndarray_311_52, __pyx_t_11, __pyx_context);
    __pyx_t_11 = nullptr;
    __pyx_t_11 = __site_call2_311_43->Target(__site_call2_311_43, __pyx_context, __pyx_t_9, __pyx_v_work, __pyx_t_1);
    __pyx_t_9 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_8 = __site_istrue_311_43->Target(__site_istrue_311_43, __pyx_t_11);
    __pyx_t_11 = nullptr;
    __pyx_t_3 = (!__pyx_t_8);
    __pyx_t_8 = __pyx_t_3;
  } else {
    __pyx_t_8 = __pyx_t_4;
  }
  if (__pyx_t_8) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":312
 *         raise TypeError("work must be an array")
 *     if iwork is not None and not isinstance(work, np.ndarray):
 *         raise TypeError("iwork must be an array")             # <<<<<<<<<<<<<<
 * 
 *     implicit = (job % 10 == 1)
 */
    __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_1 = __site_call1_312_23->Target(__site_call1_312_23, __pyx_context, __pyx_t_11, ((System::Object^)"iwork must be an array"));
    __pyx_t_11 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L13;
  }
  __pyx_L13:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":314
 *         raise TypeError("iwork must be an array")
 * 
 *     implicit = (job % 10 == 1)             # <<<<<<<<<<<<<<
 *     if not implicit:
 *         y = PyArray_CopyFromObject(y, np.double, 1, 2)
 */
  __pyx_v_implicit = (__Pyx_mod_long(__pyx_v_job, 10) == 1);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":315
 * 
 *     implicit = (job % 10 == 1)
 *     if not implicit:             # <<<<<<<<<<<<<<
 *         y = PyArray_CopyFromObject(y, np.double, 1, 2)
 *         if y is None:
 */
  __pyx_t_8 = (!__pyx_v_implicit);
  if (__pyx_t_8) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":316
 *     implicit = (job % 10 == 1)
 *     if not implicit:
 *         y = PyArray_CopyFromObject(y, np.double, 1, 2)             # <<<<<<<<<<<<<<
 *         if y is None:
 *             raise ValueError("y could not be made into a suitable array")
 */
    __pyx_t_1 = __pyx_v_np;
    __pyx_t_11 = __site_get_double_316_40->Target(__site_get_double_316_40, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = PyArray_CopyFromObject(__pyx_v_y, __pyx_t_11, __pyx_int_1, __pyx_int_2); 
    __pyx_t_11 = nullptr;
    __pyx_v_y = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":317
 *     if not implicit:
 *         y = PyArray_CopyFromObject(y, np.double, 1, 2)
 *         if y is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("y could not be made into a suitable array")
 *         x = PyArray_CopyFromObject(x, np.double, 1, 2)
 */
    __pyx_t_8 = (__pyx_v_y == nullptr);
    if (__pyx_t_8) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":318
 *         y = PyArray_CopyFromObject(y, np.double, 1, 2)
 *         if y is None:
 *             raise ValueError("y could not be made into a suitable array")             # <<<<<<<<<<<<<<
 *         x = PyArray_CopyFromObject(x, np.double, 1, 2)
 *         if x is None:
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_11 = __site_call1_318_28->Target(__site_call1_318_28, __pyx_context, __pyx_t_1, ((System::Object^)"y could not be made into a suitable array"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_11, nullptr, nullptr);
      __pyx_t_11 = nullptr;
      goto __pyx_L15;
    }
    __pyx_L15:;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":319
 *         if y is None:
 *             raise ValueError("y could not be made into a suitable array")
 *         x = PyArray_CopyFromObject(x, np.double, 1, 2)             # <<<<<<<<<<<<<<
 *         if x is None:
 *             raise ValueError("x could not be made into a suitable array")
 */
    __pyx_t_11 = __pyx_v_np;
    __pyx_t_1 = __site_get_double_319_40->Target(__site_get_double_319_40, __pyx_t_11, __pyx_context);
    __pyx_t_11 = nullptr;
    __pyx_t_11 = PyArray_CopyFromObject(__pyx_v_x, __pyx_t_1, __pyx_int_1, __pyx_int_2); 
    __pyx_t_1 = nullptr;
    __pyx_v_x = __pyx_t_11;
    __pyx_t_11 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":320
 *             raise ValueError("y could not be made into a suitable array")
 *         x = PyArray_CopyFromObject(x, np.double, 1, 2)
 *         if x is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("x could not be made into a suitable array")
 * 
 */
    __pyx_t_8 = (__pyx_v_x == nullptr);
    if (__pyx_t_8) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":321
 *         x = PyArray_CopyFromObject(x, np.double, 1, 2)
 *         if x is None:
 *             raise ValueError("x could not be made into a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     n = y.shape[-1]
 */
      __pyx_t_11 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_321_28->Target(__site_call1_321_28, __pyx_context, __pyx_t_11, ((System::Object^)"x could not be made into a suitable array"));
      __pyx_t_11 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L16;
    }
    __pyx_L16:;
    goto __pyx_L14;
  }
  __pyx_L14:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":323
 *             raise ValueError("x could not be made into a suitable array")
 * 
 *     n = y.shape[-1]             # <<<<<<<<<<<<<<
 *     if n != x.shape[-1]:
 *         raise ValueError("x and y don't have matching numbers of observations")
 */
  __pyx_t_1 = __site_get_shape_323_9->Target(__site_get_shape_323_9, __pyx_v_y, __pyx_context);
  __pyx_t_11 = __site_getindex_323_15->Target(__site_getindex_323_15, __pyx_t_1, ((System::Object^)-1));
  __pyx_t_1 = nullptr;
  __pyx_t_14 = __site_cvt_cvt_int_323_15->Target(__site_cvt_cvt_int_323_15, __pyx_t_11);
  __pyx_t_11 = nullptr;
  __pyx_v_n = __pyx_t_14;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":324
 * 
 *     n = y.shape[-1]
 *     if n != x.shape[-1]:             # <<<<<<<<<<<<<<
 *         raise ValueError("x and y don't have matching numbers of observations")
 *         nq = 1 if y.ndim == 1 else y.shape[0]
 */
  __pyx_t_11 = __pyx_v_n;
  __pyx_t_1 = __site_get_shape_324_13->Target(__site_get_shape_324_13, __pyx_v_x, __pyx_context);
  __pyx_t_9 = __site_getindex_324_19->Target(__site_getindex_324_19, __pyx_t_1, ((System::Object^)-1));
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_ne_324_9->Target(__site_op_ne_324_9, __pyx_t_11, __pyx_t_9);
  __pyx_t_11 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_t_8 = __site_istrue_324_9->Target(__site_istrue_324_9, __pyx_t_1);
  __pyx_t_1 = nullptr;
  if (__pyx_t_8) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":325
 *     n = y.shape[-1]
 *     if n != x.shape[-1]:
 *         raise ValueError("x and y don't have matching numbers of observations")             # <<<<<<<<<<<<<<
 *         nq = 1 if y.ndim == 1 else y.shape[0]
 *         ldx = ldy = n
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_9 = __site_call1_325_24->Target(__site_call1_325_24, __pyx_context, __pyx_t_1, ((System::Object^)"x and y don't have matching numbers of observations"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
    __pyx_t_9 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":326
 *     if n != x.shape[-1]:
 *         raise ValueError("x and y don't have matching numbers of observations")
 *         nq = 1 if y.ndim == 1 else y.shape[0]             # <<<<<<<<<<<<<<
 *         ldx = ldy = n
 *     else:
 */
    __pyx_t_1 = __site_get_ndim_326_19->Target(__site_get_ndim_326_19, __pyx_v_y, __pyx_context);
    __pyx_t_11 = __site_op_eq_326_25->Target(__site_op_eq_326_25, __pyx_t_1, __pyx_int_1);
    __pyx_t_1 = nullptr;
    __pyx_t_8 = __site_istrue_326_25->Target(__site_istrue_326_25, __pyx_t_11);
    __pyx_t_11 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_9 = __pyx_int_1;
    } else {
      __pyx_t_11 = __site_get_shape_326_36->Target(__site_get_shape_326_36, __pyx_v_y, __pyx_context);
      __pyx_t_1 = __site_getindex_326_42->Target(__site_getindex_326_42, __pyx_t_11, ((System::Object^)0));
      __pyx_t_11 = nullptr;
      __pyx_t_9 = __pyx_t_1;
      __pyx_t_1 = nullptr;
    }
    __pyx_t_15 = __site_cvt_cvt_int_326_13->Target(__site_cvt_cvt_int_326_13, __pyx_t_9);
    __pyx_t_9 = nullptr;
    __pyx_v_nq = __pyx_t_15;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":327
 *         raise ValueError("x and y don't have matching numbers of observations")
 *         nq = 1 if y.ndim == 1 else y.shape[0]
 *         ldx = ldy = n             # <<<<<<<<<<<<<<
 *     else:
 *         ldy = 1
 */
    __pyx_v_ldx = __pyx_v_n;
    __pyx_v_ldy = __pyx_v_n;
    goto __pyx_L17;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":329
 *         ldx = ldy = n
 *     else:
 *         ldy = 1             # <<<<<<<<<<<<<<
 *         nq = int(y)
 *         dim1[0] = 1
 */
    __pyx_v_ldy = 1;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":330
 *     else:
 *         ldy = 1
 *         nq = int(y)             # <<<<<<<<<<<<<<
 *         dim1[0] = 1
 * 
 */
    __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "int");
    __pyx_t_1 = __site_call1_330_16->Target(__site_call1_330_16, __pyx_context, ((System::Object^)__pyx_t_9), __pyx_v_y);
    __pyx_t_9 = nullptr;
    __pyx_t_16 = __site_cvt_cvt_int_330_16->Target(__site_cvt_cvt_int_330_16, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_nq = __pyx_t_16;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":331
 *         ldy = 1
 *         nq = int(y)
 *         dim1[0] = 1             # <<<<<<<<<<<<<<
 * 
 *         # Initialize y to a dummy array; never referenced
 */
    (__pyx_v_dim1[0]) = 1;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":334
 * 
 *         # Initialize y to a dummy array; never referenced
 *         y = PyArray_Empty(1, &dim1[0], np.double, False)             # <<<<<<<<<<<<<<
 *         x = PyArray_CopyFromObject(x, np.double, 1, 2)
 *         if x is None:
 */
    __pyx_t_1 = __pyx_v_np;
    __pyx_t_9 = __site_get_double_334_41->Target(__site_get_double_334_41, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    if (__pyx_t_9 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_9) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_1 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_9), 0); 
    __pyx_t_9 = nullptr;
    __pyx_v_y = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":335
 *         # Initialize y to a dummy array; never referenced
 *         y = PyArray_Empty(1, &dim1[0], np.double, False)
 *         x = PyArray_CopyFromObject(x, np.double, 1, 2)             # <<<<<<<<<<<<<<
 *         if x is None:
 *             raise ValueError("x could not be made into a suitable array")
 */
    __pyx_t_1 = __pyx_v_np;
    __pyx_t_9 = __site_get_double_335_40->Target(__site_get_double_335_40, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = PyArray_CopyFromObject(__pyx_v_x, __pyx_t_9, __pyx_int_1, __pyx_int_2); 
    __pyx_t_9 = nullptr;
    __pyx_v_x = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":336
 *         y = PyArray_Empty(1, &dim1[0], np.double, False)
 *         x = PyArray_CopyFromObject(x, np.double, 1, 2)
 *         if x is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("x could not be made into a suitable array")
 *         n = x.shape[-1]
 */
    __pyx_t_8 = (__pyx_v_x == nullptr);
    if (__pyx_t_8) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":337
 *         x = PyArray_CopyFromObject(x, np.double, 1, 2)
 *         if x is None:
 *             raise ValueError("x could not be made into a suitable array")             # <<<<<<<<<<<<<<
 *         n = x.shape[-1]
 *         ldx = n
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_9 = __site_call1_337_28->Target(__site_call1_337_28, __pyx_context, __pyx_t_1, ((System::Object^)"x could not be made into a suitable array"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
      __pyx_t_9 = nullptr;
      goto __pyx_L18;
    }
    __pyx_L18:;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":338
 *         if x is None:
 *             raise ValueError("x could not be made into a suitable array")
 *         n = x.shape[-1]             # <<<<<<<<<<<<<<
 *         ldx = n
 * 
 */
    __pyx_t_9 = __site_get_shape_338_13->Target(__site_get_shape_338_13, __pyx_v_x, __pyx_context);
    __pyx_t_1 = __site_getindex_338_19->Target(__site_getindex_338_19, __pyx_t_9, ((System::Object^)-1));
    __pyx_t_9 = nullptr;
    __pyx_t_17 = __site_cvt_cvt_int_338_19->Target(__site_cvt_cvt_int_338_19, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_n = __pyx_t_17;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":339
 *             raise ValueError("x could not be made into a suitable array")
 *         n = x.shape[-1]
 *         ldx = n             # <<<<<<<<<<<<<<
 * 
 *     m = 1 if x.ndim == 1 else x.shape[0]
 */
    __pyx_v_ldx = __pyx_v_n;
  }
  __pyx_L17:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":341
 *         ldx = n
 * 
 *     m = 1 if x.ndim == 1 else x.shape[0]             # <<<<<<<<<<<<<<
 *     beta = PyArray_CopyFromObject(initbeta, np.double, 1, 1)
 *     if beta is None:
 */
  __pyx_t_9 = __site_get_ndim_341_14->Target(__site_get_ndim_341_14, __pyx_v_x, __pyx_context);
  __pyx_t_11 = __site_op_eq_341_20->Target(__site_op_eq_341_20, __pyx_t_9, __pyx_int_1);
  __pyx_t_9 = nullptr;
  __pyx_t_8 = __site_istrue_341_20->Target(__site_istrue_341_20, __pyx_t_11);
  __pyx_t_11 = nullptr;
  if (__pyx_t_8) {
    __pyx_t_1 = __pyx_int_1;
  } else {
    __pyx_t_11 = __site_get_shape_341_31->Target(__site_get_shape_341_31, __pyx_v_x, __pyx_context);
    __pyx_t_9 = __site_getindex_341_37->Target(__site_getindex_341_37, __pyx_t_11, ((System::Object^)0));
    __pyx_t_11 = nullptr;
    __pyx_t_1 = __pyx_t_9;
    __pyx_t_9 = nullptr;
  }
  __pyx_t_18 = __site_cvt_cvt_int_341_8->Target(__site_cvt_cvt_int_341_8, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_m = __pyx_t_18;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":342
 * 
 *     m = 1 if x.ndim == 1 else x.shape[0]
 *     beta = PyArray_CopyFromObject(initbeta, np.double, 1, 1)             # <<<<<<<<<<<<<<
 *     if beta is None:
 *         raise ValueError("initbeta could not be made into a suitable array")
 */
  __pyx_t_1 = __pyx_v_np;
  __pyx_t_9 = __site_get_double_342_46->Target(__site_get_double_342_46, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PyArray_CopyFromObject(__pyx_v_initbeta, __pyx_t_9, __pyx_int_1, __pyx_int_1); 
  __pyx_t_9 = nullptr;
  __pyx_v_beta = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":343
 *     m = 1 if x.ndim == 1 else x.shape[0]
 *     beta = PyArray_CopyFromObject(initbeta, np.double, 1, 1)
 *     if beta is None:             # <<<<<<<<<<<<<<
 *         raise ValueError("initbeta could not be made into a suitable array")
 *     np = beta.shape[0]
 */
  __pyx_t_8 = (__pyx_v_beta == nullptr);
  if (__pyx_t_8) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":344
 *     beta = PyArray_CopyFromObject(initbeta, np.double, 1, 1)
 *     if beta is None:
 *         raise ValueError("initbeta could not be made into a suitable array")             # <<<<<<<<<<<<<<
 *     np = beta.shape[0]
 * 
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_9 = __site_call1_344_24->Target(__site_call1_344_24, __pyx_context, __pyx_t_1, ((System::Object^)"initbeta could not be made into a suitable array"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
    __pyx_t_9 = nullptr;
    goto __pyx_L19;
  }
  __pyx_L19:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":345
 *     if beta is None:
 *         raise ValueError("initbeta could not be made into a suitable array")
 *     np = beta.shape[0]             # <<<<<<<<<<<<<<
 * 
 *     if we is None:
 */
  __pyx_t_9 = __site_get_shape_345_13->Target(__site_get_shape_345_13, __pyx_v_beta, __pyx_context);
  __pyx_t_1 = __site_getindex_345_19->Target(__site_getindex_345_19, __pyx_t_9, ((System::Object^)0));
  __pyx_t_9 = nullptr;
  __pyx_t_19 = __site_cvt_cvt_int_345_19->Target(__site_cvt_cvt_int_345_19, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_np = __pyx_t_19;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":347
 *     np = beta.shape[0]
 * 
 *     if we is None:             # <<<<<<<<<<<<<<
 *         ldwe = ld2we = 1
 *         dim1[0] = n
 */
  __pyx_t_8 = (__pyx_v_we == nullptr);
  if (__pyx_t_8) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":348
 * 
 *     if we is None:
 *         ldwe = ld2we = 1             # <<<<<<<<<<<<<<
 *         dim1[0] = n
 *         we = PyArray_Empty(1, &dim1[0], np.double, False)
 */
    __pyx_v_ldwe = 1;
    __pyx_v_ld2we = 1;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":349
 *     if we is None:
 *         ldwe = ld2we = 1
 *         dim1[0] = n             # <<<<<<<<<<<<<<
 *         we = PyArray_Empty(1, &dim1[0], np.double, False)
 *         we[0] = -1.0
 */
    (__pyx_v_dim1[0]) = __pyx_v_n;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":350
 *         ldwe = ld2we = 1
 *         dim1[0] = n
 *         we = PyArray_Empty(1, &dim1[0], np.double, False)             # <<<<<<<<<<<<<<
 *         we[0] = -1.0
 *     elif operator.isSequenceType(we):
 */
    __pyx_t_1 = __pyx_v_np;
    __pyx_t_9 = __site_get_double_350_42->Target(__site_get_double_350_42, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    if (__pyx_t_9 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_9) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_1 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_9), 0); 
    __pyx_t_9 = nullptr;
    __pyx_v_we = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":351
 *         dim1[0] = n
 *         we = PyArray_Empty(1, &dim1[0], np.double, False)
 *         we[0] = -1.0             # <<<<<<<<<<<<<<
 *     elif operator.isSequenceType(we):
 *         we = PyArray_CopyFromObject(we, np.double, 1, 3)
 */
    __pyx_t_1 = (-1.0);
    __site_setindex_351_10->Target(__site_setindex_351_10, __pyx_v_we, ((System::Object^)0), __pyx_t_1);
    __pyx_t_1 = nullptr;
    goto __pyx_L20;
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":352
 *         we = PyArray_Empty(1, &dim1[0], np.double, False)
 *         we[0] = -1.0
 *     elif operator.isSequenceType(we):             # <<<<<<<<<<<<<<
 *         we = PyArray_CopyFromObject(we, np.double, 1, 3)
 *         if we is None:
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "operator");
  __pyx_t_9 = __site_get_isSequenceType_352_17->Target(__site_get_isSequenceType_352_17, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call1_352_32->Target(__site_call1_352_32, __pyx_context, __pyx_t_9, __pyx_v_we);
  __pyx_t_9 = nullptr;
  __pyx_t_8 = __site_istrue_352_32->Target(__site_istrue_352_32, __pyx_t_1);
  __pyx_t_1 = nullptr;
  if (__pyx_t_8) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":353
 *         we[0] = -1.0
 *     elif operator.isSequenceType(we):
 *         we = PyArray_CopyFromObject(we, np.double, 1, 3)             # <<<<<<<<<<<<<<
 *         if we is None:
 *             raise ValueError("could not convert we to a suitable array")
 */
    __pyx_t_1 = __pyx_v_np;
    __pyx_t_9 = __site_get_double_353_42->Target(__site_get_double_353_42, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = PyArray_CopyFromObject(__pyx_v_we, __pyx_t_9, __pyx_int_1, __pyx_int_3); 
    __pyx_t_9 = nullptr;
    __pyx_v_we = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":354
 *     elif operator.isSequenceType(we):
 *         we = PyArray_CopyFromObject(we, np.double, 1, 3)
 *         if we is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert we to a suitable array")
 * 
 */
    __pyx_t_8 = (__pyx_v_we == nullptr);
    if (__pyx_t_8) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":355
 *         we = PyArray_CopyFromObject(we, np.double, 1, 3)
 *         if we is None:
 *             raise ValueError("could not convert we to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if we.ndim == 1 and nq == 1:
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_9 = __site_call1_355_28->Target(__site_call1_355_28, __pyx_context, __pyx_t_1, ((System::Object^)"could not convert we to a suitable array"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
      __pyx_t_9 = nullptr;
      goto __pyx_L21;
    }
    __pyx_L21:;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":357
 *             raise ValueError("could not convert we to a suitable array")
 * 
 *         if we.ndim == 1 and nq == 1:             # <<<<<<<<<<<<<<
 *             ldwe = n
 *             ld2we = 1
 */
    __pyx_t_9 = __site_get_ndim_357_13->Target(__site_get_ndim_357_13, __pyx_v_we, __pyx_context);
    __pyx_t_1 = __site_op_eq_357_19->Target(__site_op_eq_357_19, __pyx_t_9, __pyx_int_1);
    __pyx_t_9 = nullptr;
    __pyx_t_8 = __site_istrue_357_19->Target(__site_istrue_357_19, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_4 = (__pyx_v_nq == 1);
      __pyx_t_3 = __pyx_t_4;
    } else {
      __pyx_t_3 = __pyx_t_8;
    }
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":358
 * 
 *         if we.ndim == 1 and nq == 1:
 *             ldwe = n             # <<<<<<<<<<<<<<
 *             ld2we = 1
 *         elif we.ndim == 1 and we.shape[0] == nq:
 */
      __pyx_v_ldwe = __pyx_v_n;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":359
 *         if we.ndim == 1 and nq == 1:
 *             ldwe = n
 *             ld2we = 1             # <<<<<<<<<<<<<<
 *         elif we.ndim == 1 and we.shape[0] == nq:
 *             # we is a rank-1 array with diagonal weightings to be broadcast
 */
      __pyx_v_ld2we = 1;
      goto __pyx_L22;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":360
 *             ldwe = n
 *             ld2we = 1
 *         elif we.ndim == 1 and we.shape[0] == nq:             # <<<<<<<<<<<<<<
 *             # we is a rank-1 array with diagonal weightings to be broadcast
 *             # to all observations
 */
    __pyx_t_1 = __site_get_ndim_360_15->Target(__site_get_ndim_360_15, __pyx_v_we, __pyx_context);
    __pyx_t_9 = __site_op_eq_360_21->Target(__site_op_eq_360_21, __pyx_t_1, __pyx_int_1);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = __site_istrue_360_21->Target(__site_istrue_360_21, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_9 = __site_get_shape_360_32->Target(__site_get_shape_360_32, __pyx_v_we, __pyx_context);
      __pyx_t_1 = __site_getindex_360_38->Target(__site_getindex_360_38, __pyx_t_9, ((System::Object^)0));
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __pyx_v_nq;
      __pyx_t_11 = __site_op_eq_360_42->Target(__site_op_eq_360_42, __pyx_t_1, __pyx_t_9);
      __pyx_t_1 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_8 = __site_istrue_360_42->Target(__site_istrue_360_42, __pyx_t_11);
      __pyx_t_11 = nullptr;
      __pyx_t_4 = __pyx_t_8;
    } else {
      __pyx_t_4 = __pyx_t_3;
    }
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":363
 *             # we is a rank-1 array with diagonal weightings to be broadcast
 *             # to all observations
 *             ldwe = 1             # <<<<<<<<<<<<<<
 *             ld2we = 1
 *         elif we.ndim == 3 and we.shape == (nq, nq, 1):
 */
      __pyx_v_ldwe = 1;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":364
 *             # to all observations
 *             ldwe = 1
 *             ld2we = 1             # <<<<<<<<<<<<<<
 *         elif we.ndim == 3 and we.shape == (nq, nq, 1):
 *             # we is a rank-3 array with the covariant weightings to be broadcast
 */
      __pyx_v_ld2we = 1;
      goto __pyx_L22;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":365
 *             ldwe = 1
 *             ld2we = 1
 *         elif we.ndim == 3 and we.shape == (nq, nq, 1):             # <<<<<<<<<<<<<<
 *             # we is a rank-3 array with the covariant weightings to be broadcast
 *             # to all observations
 */
    __pyx_t_11 = __site_get_ndim_365_15->Target(__site_get_ndim_365_15, __pyx_v_we, __pyx_context);
    __pyx_t_9 = __site_op_eq_365_21->Target(__site_op_eq_365_21, __pyx_t_11, __pyx_int_3);
    __pyx_t_11 = nullptr;
    __pyx_t_4 = __site_istrue_365_21->Target(__site_istrue_365_21, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_9 = __site_get_shape_365_32->Target(__site_get_shape_365_32, __pyx_v_we, __pyx_context);
      __pyx_t_11 = __pyx_v_nq;
      __pyx_t_1 = __pyx_v_nq;
      __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_11, __pyx_t_1, __pyx_int_1});
      __pyx_t_11 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_1 = __site_op_eq_365_39->Target(__site_op_eq_365_39, __pyx_t_9, __pyx_t_10);
      __pyx_t_9 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_3 = __site_istrue_365_39->Target(__site_istrue_365_39, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_8 = __pyx_t_3;
    } else {
      __pyx_t_8 = __pyx_t_4;
    }
    if (__pyx_t_8) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":368
 *             # we is a rank-3 array with the covariant weightings to be broadcast
 *             # to all observations
 *             ldwe = 1             # <<<<<<<<<<<<<<
 *             ld2we = nq
 *         elif we.ndim == 2 and we.shape == (nq, nq):
 */
      __pyx_v_ldwe = 1;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":369
 *             # to all observations
 *             ldwe = 1
 *             ld2we = nq             # <<<<<<<<<<<<<<
 *         elif we.ndim == 2 and we.shape == (nq, nq):
 *             # we is a rank-2 array with the full covariant weightings to be
 */
      __pyx_v_ld2we = __pyx_v_nq;
      goto __pyx_L22;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":370
 *             ldwe = 1
 *             ld2we = nq
 *         elif we.ndim == 2 and we.shape == (nq, nq):             # <<<<<<<<<<<<<<
 *             # we is a rank-2 array with the full covariant weightings to be
 *             # broadcast to all observations.
 */
    __pyx_t_1 = __site_get_ndim_370_15->Target(__site_get_ndim_370_15, __pyx_v_we, __pyx_context);
    __pyx_t_10 = __site_op_eq_370_21->Target(__site_op_eq_370_21, __pyx_t_1, __pyx_int_2);
    __pyx_t_1 = nullptr;
    __pyx_t_8 = __site_istrue_370_21->Target(__site_istrue_370_21, __pyx_t_10);
    __pyx_t_10 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_10 = __site_get_shape_370_32->Target(__site_get_shape_370_32, __pyx_v_we, __pyx_context);
      __pyx_t_1 = __pyx_v_nq;
      __pyx_t_9 = __pyx_v_nq;
      __pyx_t_11 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_9});
      __pyx_t_1 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_op_eq_370_39->Target(__site_op_eq_370_39, __pyx_t_10, __pyx_t_11);
      __pyx_t_10 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_4 = __site_istrue_370_39->Target(__site_istrue_370_39, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_3 = __pyx_t_4;
    } else {
      __pyx_t_3 = __pyx_t_8;
    }
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":373
 *             # we is a rank-2 array with the full covariant weightings to be
 *             # broadcast to all observations.
 *             ldwe = 1             # <<<<<<<<<<<<<<
 *             ld2we = nq
 *         elif we.ndim == 2 and we.shape == (nq, n):
 */
      __pyx_v_ldwe = 1;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":374
 *             # broadcast to all observations.
 *             ldwe = 1
 *             ld2we = nq             # <<<<<<<<<<<<<<
 *         elif we.ndim == 2 and we.shape == (nq, n):
 *             # we is a rank-2 array with the diagonal elements of the covariant
 */
      __pyx_v_ld2we = __pyx_v_nq;
      goto __pyx_L22;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":375
 *             ldwe = 1
 *             ld2we = nq
 *         elif we.ndim == 2 and we.shape == (nq, n):             # <<<<<<<<<<<<<<
 *             # we is a rank-2 array with the diagonal elements of the covariant
 *             # weightings for each observations
 */
    __pyx_t_9 = __site_get_ndim_375_15->Target(__site_get_ndim_375_15, __pyx_v_we, __pyx_context);
    __pyx_t_11 = __site_op_eq_375_21->Target(__site_op_eq_375_21, __pyx_t_9, __pyx_int_2);
    __pyx_t_9 = nullptr;
    __pyx_t_3 = __site_istrue_375_21->Target(__site_istrue_375_21, __pyx_t_11);
    __pyx_t_11 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_11 = __site_get_shape_375_32->Target(__site_get_shape_375_32, __pyx_v_we, __pyx_context);
      __pyx_t_9 = __pyx_v_nq;
      __pyx_t_10 = __pyx_v_n;
      __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_9, __pyx_t_10});
      __pyx_t_9 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_10 = __site_op_eq_375_39->Target(__site_op_eq_375_39, __pyx_t_11, __pyx_t_1);
      __pyx_t_11 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_8 = __site_istrue_375_39->Target(__site_istrue_375_39, __pyx_t_10);
      __pyx_t_10 = nullptr;
      __pyx_t_4 = __pyx_t_8;
    } else {
      __pyx_t_4 = __pyx_t_3;
    }
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":378
 *             # we is a rank-2 array with the diagonal elements of the covariant
 *             # weightings for each observations
 *             ldwe = n             # <<<<<<<<<<<<<<
 *             ld2we = 1
 *         elif we.ndum == 3 and we.shape == (nq, nq, n):
 */
      __pyx_v_ldwe = __pyx_v_n;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":379
 *             # weightings for each observations
 *             ldwe = n
 *             ld2we = 1             # <<<<<<<<<<<<<<
 *         elif we.ndum == 3 and we.shape == (nq, nq, n):
 *             # we is the full specification of the covariant weights for each observation
 */
      __pyx_v_ld2we = 1;
      goto __pyx_L22;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":380
 *             ldwe = n
 *             ld2we = 1
 *         elif we.ndum == 3 and we.shape == (nq, nq, n):             # <<<<<<<<<<<<<<
 *             # we is the full specification of the covariant weights for each observation
 *             ldwe = n
 */
    __pyx_t_10 = __site_get_ndum_380_15->Target(__site_get_ndum_380_15, __pyx_v_we, __pyx_context);
    __pyx_t_1 = __site_op_eq_380_21->Target(__site_op_eq_380_21, __pyx_t_10, __pyx_int_3);
    __pyx_t_10 = nullptr;
    __pyx_t_4 = __site_istrue_380_21->Target(__site_istrue_380_21, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_1 = __site_get_shape_380_32->Target(__site_get_shape_380_32, __pyx_v_we, __pyx_context);
      __pyx_t_10 = __pyx_v_nq;
      __pyx_t_11 = __pyx_v_nq;
      __pyx_t_9 = __pyx_v_n;
      __pyx_t_20 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_10, __pyx_t_11, __pyx_t_9});
      __pyx_t_10 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_op_eq_380_39->Target(__site_op_eq_380_39, __pyx_t_1, __pyx_t_20);
      __pyx_t_1 = nullptr;
      __pyx_t_20 = nullptr;
      __pyx_t_3 = __site_istrue_380_39->Target(__site_istrue_380_39, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_8 = __pyx_t_3;
    } else {
      __pyx_t_8 = __pyx_t_4;
    }
    if (__pyx_t_8) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":382
 *         elif we.ndum == 3 and we.shape == (nq, nq, n):
 *             # we is the full specification of the covariant weights for each observation
 *             ldwe = n             # <<<<<<<<<<<<<<
 *             ld2we = nq
 *         else:
 */
      __pyx_v_ldwe = __pyx_v_n;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":383
 *             # we is the full specification of the covariant weights for each observation
 *             ldwe = n
 *             ld2we = nq             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError("could not convert we to a suitable array")
 */
      __pyx_v_ld2we = __pyx_v_nq;
      goto __pyx_L22;
    }
    /*else*/ {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":385
 *             ld2we = nq
 *         else:
 *             raise ValueError("could not convert we to a suitable array")             # <<<<<<<<<<<<<<
 *     else:
 *         try:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_20 = __site_call1_385_28->Target(__site_call1_385_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert we to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_20, nullptr, nullptr);
      __pyx_t_20 = nullptr;
    }
    __pyx_L22:;
    goto __pyx_L20;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":387
 *             raise ValueError("could not convert we to a suitable array")
 *     else:
 *         try:             # <<<<<<<<<<<<<<
 *             val = float(we)
 *             dim3[0] = nq
 */
    try {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":388
 *     else:
 *         try:
 *             val = float(we)             # <<<<<<<<<<<<<<
 *             dim3[0] = nq
 *             dim3[1] = 1
 */
      __pyx_t_20 = PythonOps::GetGlobal(__pyx_context, "float");
      __pyx_t_9 = __site_call1_388_23->Target(__site_call1_388_23, __pyx_context, ((System::Object^)__pyx_t_20), __pyx_v_we);
      __pyx_t_20 = nullptr;
      __pyx_t_23 = __site_cvt_cvt_double_388_23->Target(__site_cvt_cvt_double_388_23, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_v_val = __pyx_t_23;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":389
 *         try:
 *             val = float(we)
 *             dim3[0] = nq             # <<<<<<<<<<<<<<
 *             dim3[1] = 1
 *             dim3[2] = 1
 */
      (__pyx_v_dim3[0]) = __pyx_v_nq;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":390
 *             val = float(we)
 *             dim3[0] = nq
 *             dim3[1] = 1             # <<<<<<<<<<<<<<
 *             dim3[2] = 1
 *             we = PyArray_Empty(3, &dim3[0], np.double, False)
 */
      (__pyx_v_dim3[1]) = 1;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":391
 *             dim3[0] = nq
 *             dim3[1] = 1
 *             dim3[2] = 1             # <<<<<<<<<<<<<<
 *             we = PyArray_Empty(3, &dim3[0], np.double, False)
 *             we[0,0,0] = val if implicit else -val
 */
      (__pyx_v_dim3[2]) = 1;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":392
 *             dim3[1] = 1
 *             dim3[2] = 1
 *             we = PyArray_Empty(3, &dim3[0], np.double, False)             # <<<<<<<<<<<<<<
 *             we[0,0,0] = val if implicit else -val
 *             ldwe = ld2we = 1
 */
      __pyx_t_9 = __pyx_v_np;
      __pyx_t_20 = __site_get_double_392_46->Target(__site_get_double_392_46, __pyx_t_9, __pyx_context);
      __pyx_t_9 = nullptr;
      if (__pyx_t_20 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_20) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_9 = PyArray_Empty(3, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim3[0]))), ((NumpyDotNet::dtype^)__pyx_t_20), 0); 
      __pyx_t_20 = nullptr;
      __pyx_v_we = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":393
 *             dim3[2] = 1
 *             we = PyArray_Empty(3, &dim3[0], np.double, False)
 *             we[0,0,0] = val if implicit else -val             # <<<<<<<<<<<<<<
 *             ldwe = ld2we = 1
 *         except ValueError, e:
 */
      if (__pyx_v_implicit) {
        __pyx_t_24 = __pyx_v_val;
      } else {
        __pyx_t_24 = (-__pyx_v_val);
      }
      __pyx_t_9 = __pyx_t_24;
      __pyx_t_20 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0, __pyx_int_0, __pyx_int_0});
      __site_setindex_393_14->Target(__site_setindex_393_14, __pyx_v_we, __pyx_t_20, __pyx_t_9);
      __pyx_t_20 = nullptr;
      __pyx_t_9 = nullptr;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":394
 *             we = PyArray_Empty(3, &dim3[0], np.double, False)
 *             we[0,0,0] = val if implicit else -val
 *             ldwe = ld2we = 1             # <<<<<<<<<<<<<<
 *         except ValueError, e:
 *             raise ValueError("could not convert we to a suitable array")
 */
      __pyx_v_ldwe = 1;
      __pyx_v_ld2we = 1;
    } catch (System::Exception^ __pyx_lt_21) {
      System::Object^ __pyx_lt_22 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_21);

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":395
 *             we[0,0,0] = val if implicit else -val
 *             ldwe = ld2we = 1
 *         except ValueError, e:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert we to a suitable array")
 * 
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_22, __pyx_t_9);
      __pyx_t_9 = nullptr;
      if (__pyx_v_e != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.odr._odrpack.odr");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_21);

        /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":396
 *             ldwe = ld2we = 1
 *         except ValueError, e:
 *             raise ValueError("could not convert we to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if wd is None:
 */
        __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
        __pyx_t_20 = __site_call1_396_28->Target(__site_call1_396_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert we to a suitable array"));
        __pyx_t_9 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_20, nullptr, nullptr);
        __pyx_t_20 = nullptr;
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_21);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
  }
  __pyx_L20:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":398
 *             raise ValueError("could not convert we to a suitable array")
 * 
 *     if wd is None:             # <<<<<<<<<<<<<<
 *         ldwd = ld2wd = 1
 *         dim1[0]= m
 */
  __pyx_t_8 = (__pyx_v_wd == nullptr);
  if (__pyx_t_8) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":399
 * 
 *     if wd is None:
 *         ldwd = ld2wd = 1             # <<<<<<<<<<<<<<
 *         dim1[0]= m
 *         wd = PyArray_Empty(1, &dim1[0], np.double, False)
 */
    __pyx_v_ldwd = 1;
    __pyx_v_ld2wd = 1;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":400
 *     if wd is None:
 *         ldwd = ld2wd = 1
 *         dim1[0]= m             # <<<<<<<<<<<<<<
 *         wd = PyArray_Empty(1, &dim1[0], np.double, False)
 *         wd[0] = -1.0
 */
    (__pyx_v_dim1[0]) = __pyx_v_m;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":401
 *         ldwd = ld2wd = 1
 *         dim1[0]= m
 *         wd = PyArray_Empty(1, &dim1[0], np.double, False)             # <<<<<<<<<<<<<<
 *         wd[0] = -1.0
 *     elif operator.isSequenceType(wd):
 */
    __pyx_t_20 = __pyx_v_np;
    __pyx_t_9 = __site_get_double_401_42->Target(__site_get_double_401_42, __pyx_t_20, __pyx_context);
    __pyx_t_20 = nullptr;
    if (__pyx_t_9 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_9) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_20 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_9), 0); 
    __pyx_t_9 = nullptr;
    __pyx_v_wd = __pyx_t_20;
    __pyx_t_20 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":402
 *         dim1[0]= m
 *         wd = PyArray_Empty(1, &dim1[0], np.double, False)
 *         wd[0] = -1.0             # <<<<<<<<<<<<<<
 *     elif operator.isSequenceType(wd):
 *         wd = PyArray_CopyFromObject(wd, np.double, 1, 3)
 */
    __pyx_t_20 = (-1.0);
    __site_setindex_402_10->Target(__site_setindex_402_10, __pyx_v_wd, ((System::Object^)0), __pyx_t_20);
    __pyx_t_20 = nullptr;
    goto __pyx_L23;
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":403
 *         wd = PyArray_Empty(1, &dim1[0], np.double, False)
 *         wd[0] = -1.0
 *     elif operator.isSequenceType(wd):             # <<<<<<<<<<<<<<
 *         wd = PyArray_CopyFromObject(wd, np.double, 1, 3)
 *         if wd is None:
 */
  __pyx_t_20 = PythonOps::GetGlobal(__pyx_context, "operator");
  __pyx_t_9 = __site_get_isSequenceType_403_17->Target(__site_get_isSequenceType_403_17, __pyx_t_20, __pyx_context);
  __pyx_t_20 = nullptr;
  __pyx_t_20 = __site_call1_403_32->Target(__site_call1_403_32, __pyx_context, __pyx_t_9, __pyx_v_wd);
  __pyx_t_9 = nullptr;
  __pyx_t_8 = __site_istrue_403_32->Target(__site_istrue_403_32, __pyx_t_20);
  __pyx_t_20 = nullptr;
  if (__pyx_t_8) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":404
 *         wd[0] = -1.0
 *     elif operator.isSequenceType(wd):
 *         wd = PyArray_CopyFromObject(wd, np.double, 1, 3)             # <<<<<<<<<<<<<<
 *         if wd is None:
 *             raise ValueError("could not convert wd to a suitable array")
 */
    __pyx_t_20 = __pyx_v_np;
    __pyx_t_9 = __site_get_double_404_42->Target(__site_get_double_404_42, __pyx_t_20, __pyx_context);
    __pyx_t_20 = nullptr;
    __pyx_t_20 = PyArray_CopyFromObject(__pyx_v_wd, __pyx_t_9, __pyx_int_1, __pyx_int_3); 
    __pyx_t_9 = nullptr;
    __pyx_v_wd = __pyx_t_20;
    __pyx_t_20 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":405
 *     elif operator.isSequenceType(wd):
 *         wd = PyArray_CopyFromObject(wd, np.double, 1, 3)
 *         if wd is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert wd to a suitable array")
 * 
 */
    __pyx_t_8 = (__pyx_v_wd == nullptr);
    if (__pyx_t_8) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":406
 *         wd = PyArray_CopyFromObject(wd, np.double, 1, 3)
 *         if wd is None:
 *             raise ValueError("could not convert wd to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if wd.ndim == 1 and m == 1:
 */
      __pyx_t_20 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_9 = __site_call1_406_28->Target(__site_call1_406_28, __pyx_context, __pyx_t_20, ((System::Object^)"could not convert wd to a suitable array"));
      __pyx_t_20 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
      __pyx_t_9 = nullptr;
      goto __pyx_L24;
    }
    __pyx_L24:;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":408
 *             raise ValueError("could not convert wd to a suitable array")
 * 
 *         if wd.ndim == 1 and m == 1:             # <<<<<<<<<<<<<<
 *             ldwd = n
 *             ld2wd = 1
 */
    __pyx_t_9 = __site_get_ndim_408_13->Target(__site_get_ndim_408_13, __pyx_v_wd, __pyx_context);
    __pyx_t_20 = __site_op_eq_408_19->Target(__site_op_eq_408_19, __pyx_t_9, __pyx_int_1);
    __pyx_t_9 = nullptr;
    __pyx_t_8 = __site_istrue_408_19->Target(__site_istrue_408_19, __pyx_t_20);
    __pyx_t_20 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_4 = (__pyx_v_m == 1);
      __pyx_t_3 = __pyx_t_4;
    } else {
      __pyx_t_3 = __pyx_t_8;
    }
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":409
 * 
 *         if wd.ndim == 1 and m == 1:
 *             ldwd = n             # <<<<<<<<<<<<<<
 *             ld2wd = 1
 *         elif wd.ndim == 1 and wd.shape[0] == m:
 */
      __pyx_v_ldwd = __pyx_v_n;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":410
 *         if wd.ndim == 1 and m == 1:
 *             ldwd = n
 *             ld2wd = 1             # <<<<<<<<<<<<<<
 *         elif wd.ndim == 1 and wd.shape[0] == m:
 *             # wd is a rank-1 array with diagonal weightings to be broadcast
 */
      __pyx_v_ld2wd = 1;
      goto __pyx_L25;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":411
 *             ldwd = n
 *             ld2wd = 1
 *         elif wd.ndim == 1 and wd.shape[0] == m:             # <<<<<<<<<<<<<<
 *             # wd is a rank-1 array with diagonal weightings to be broadcast
 *             # to all observations
 */
    __pyx_t_20 = __site_get_ndim_411_15->Target(__site_get_ndim_411_15, __pyx_v_wd, __pyx_context);
    __pyx_t_9 = __site_op_eq_411_21->Target(__site_op_eq_411_21, __pyx_t_20, __pyx_int_1);
    __pyx_t_20 = nullptr;
    __pyx_t_3 = __site_istrue_411_21->Target(__site_istrue_411_21, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_9 = __site_get_shape_411_32->Target(__site_get_shape_411_32, __pyx_v_wd, __pyx_context);
      __pyx_t_20 = __site_getindex_411_38->Target(__site_getindex_411_38, __pyx_t_9, ((System::Object^)0));
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __pyx_v_m;
      __pyx_t_1 = __site_op_eq_411_42->Target(__site_op_eq_411_42, __pyx_t_20, __pyx_t_9);
      __pyx_t_20 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_8 = __site_istrue_411_42->Target(__site_istrue_411_42, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_4 = __pyx_t_8;
    } else {
      __pyx_t_4 = __pyx_t_3;
    }
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":414
 *             # wd is a rank-1 array with diagonal weightings to be broadcast
 *             # to all observations
 *             ldwd = 1             # <<<<<<<<<<<<<<
 *             ld2wd = 1
 *         elif wd.ndim == 3 and wd.shape == (m, m, 1):
 */
      __pyx_v_ldwd = 1;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":415
 *             # to all observations
 *             ldwd = 1
 *             ld2wd = 1             # <<<<<<<<<<<<<<
 *         elif wd.ndim == 3 and wd.shape == (m, m, 1):
 *             # wd is a rank-3 array with the covariant weightings to be
 */
      __pyx_v_ld2wd = 1;
      goto __pyx_L25;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":416
 *             ldwd = 1
 *             ld2wd = 1
 *         elif wd.ndim == 3 and wd.shape == (m, m, 1):             # <<<<<<<<<<<<<<
 *             # wd is a rank-3 array with the covariant weightings to be
 *             # broadcast to all observations
 */
    __pyx_t_1 = __site_get_ndim_416_15->Target(__site_get_ndim_416_15, __pyx_v_wd, __pyx_context);
    __pyx_t_9 = __site_op_eq_416_21->Target(__site_op_eq_416_21, __pyx_t_1, __pyx_int_3);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = __site_istrue_416_21->Target(__site_istrue_416_21, __pyx_t_9);
    __pyx_t_9 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_9 = __site_get_shape_416_32->Target(__site_get_shape_416_32, __pyx_v_wd, __pyx_context);
      __pyx_t_1 = __pyx_v_m;
      __pyx_t_20 = __pyx_v_m;
      __pyx_t_11 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_20, __pyx_int_1});
      __pyx_t_1 = nullptr;
      __pyx_t_20 = nullptr;
      __pyx_t_20 = __site_op_eq_416_39->Target(__site_op_eq_416_39, __pyx_t_9, __pyx_t_11);
      __pyx_t_9 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_3 = __site_istrue_416_39->Target(__site_istrue_416_39, __pyx_t_20);
      __pyx_t_20 = nullptr;
      __pyx_t_8 = __pyx_t_3;
    } else {
      __pyx_t_8 = __pyx_t_4;
    }
    if (__pyx_t_8) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":419
 *             # wd is a rank-3 array with the covariant weightings to be
 *             # broadcast to all observations
 *             ldwd = 1             # <<<<<<<<<<<<<<
 *             ld2wd = m
 *         elif wd.ndim == 2 and wd.shape == (m, m):
 */
      __pyx_v_ldwd = 1;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":420
 *             # broadcast to all observations
 *             ldwd = 1
 *             ld2wd = m             # <<<<<<<<<<<<<<
 *         elif wd.ndim == 2 and wd.shape == (m, m):
 *             # wd is a rank-2 array wth the full covariant weightings to be
 */
      __pyx_v_ld2wd = __pyx_v_m;
      goto __pyx_L25;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":421
 *             ldwd = 1
 *             ld2wd = m
 *         elif wd.ndim == 2 and wd.shape == (m, m):             # <<<<<<<<<<<<<<
 *             # wd is a rank-2 array wth the full covariant weightings to be
 *             # broadcast to all observations
 */
    __pyx_t_20 = __site_get_ndim_421_15->Target(__site_get_ndim_421_15, __pyx_v_wd, __pyx_context);
    __pyx_t_11 = __site_op_eq_421_21->Target(__site_op_eq_421_21, __pyx_t_20, __pyx_int_2);
    __pyx_t_20 = nullptr;
    __pyx_t_8 = __site_istrue_421_21->Target(__site_istrue_421_21, __pyx_t_11);
    __pyx_t_11 = nullptr;
    if (__pyx_t_8) {
      __pyx_t_11 = __site_get_shape_421_32->Target(__site_get_shape_421_32, __pyx_v_wd, __pyx_context);
      __pyx_t_20 = __pyx_v_m;
      __pyx_t_9 = __pyx_v_m;
      __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_20, __pyx_t_9});
      __pyx_t_20 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_op_eq_421_39->Target(__site_op_eq_421_39, __pyx_t_11, __pyx_t_1);
      __pyx_t_11 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_4 = __site_istrue_421_39->Target(__site_istrue_421_39, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_3 = __pyx_t_4;
    } else {
      __pyx_t_3 = __pyx_t_8;
    }
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":424
 *             # wd is a rank-2 array wth the full covariant weightings to be
 *             # broadcast to all observations
 *             ldwd = 1             # <<<<<<<<<<<<<<
 *             ld2wd = m
 *         elif wd.ndim == 2 and wd.shape == (m, n):
 */
      __pyx_v_ldwd = 1;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":425
 *             # broadcast to all observations
 *             ldwd = 1
 *             ld2wd = m             # <<<<<<<<<<<<<<
 *         elif wd.ndim == 2 and wd.shape == (m, n):
 *             # wd is a rank-2 array with the diagonal element of the covariant
 */
      __pyx_v_ld2wd = __pyx_v_m;
      goto __pyx_L25;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":426
 *             ldwd = 1
 *             ld2wd = m
 *         elif wd.ndim == 2 and wd.shape == (m, n):             # <<<<<<<<<<<<<<
 *             # wd is a rank-2 array with the diagonal element of the covariant
 *             # weightings for each observation.
 */
    __pyx_t_9 = __site_get_ndim_426_15->Target(__site_get_ndim_426_15, __pyx_v_wd, __pyx_context);
    __pyx_t_1 = __site_op_eq_426_21->Target(__site_op_eq_426_21, __pyx_t_9, __pyx_int_2);
    __pyx_t_9 = nullptr;
    __pyx_t_3 = __site_istrue_426_21->Target(__site_istrue_426_21, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_1 = __site_get_shape_426_32->Target(__site_get_shape_426_32, __pyx_v_wd, __pyx_context);
      __pyx_t_9 = __pyx_v_m;
      __pyx_t_11 = __pyx_v_n;
      __pyx_t_20 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_9, __pyx_t_11});
      __pyx_t_9 = nullptr;
      __pyx_t_11 = nullptr;
      __pyx_t_11 = __site_op_eq_426_39->Target(__site_op_eq_426_39, __pyx_t_1, __pyx_t_20);
      __pyx_t_1 = nullptr;
      __pyx_t_20 = nullptr;
      __pyx_t_8 = __site_istrue_426_39->Target(__site_istrue_426_39, __pyx_t_11);
      __pyx_t_11 = nullptr;
      __pyx_t_4 = __pyx_t_8;
    } else {
      __pyx_t_4 = __pyx_t_3;
    }
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":429
 *             # wd is a rank-2 array with the diagonal element of the covariant
 *             # weightings for each observation.
 *             ldwd = n             # <<<<<<<<<<<<<<
 *             ld2wd = 1
 *         elif wd.ndim == 3 and wd.shape == (m, m, n):
 */
      __pyx_v_ldwd = __pyx_v_n;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":430
 *             # weightings for each observation.
 *             ldwd = n
 *             ld2wd = 1             # <<<<<<<<<<<<<<
 *         elif wd.ndim == 3 and wd.shape == (m, m, n):
 *             ldwd = n
 */
      __pyx_v_ld2wd = 1;
      goto __pyx_L25;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":431
 *             ldwd = n
 *             ld2wd = 1
 *         elif wd.ndim == 3 and wd.shape == (m, m, n):             # <<<<<<<<<<<<<<
 *             ldwd = n
 *             ld2wd = m
 */
    __pyx_t_11 = __site_get_ndim_431_15->Target(__site_get_ndim_431_15, __pyx_v_wd, __pyx_context);
    __pyx_t_20 = __site_op_eq_431_21->Target(__site_op_eq_431_21, __pyx_t_11, __pyx_int_3);
    __pyx_t_11 = nullptr;
    __pyx_t_4 = __site_istrue_431_21->Target(__site_istrue_431_21, __pyx_t_20);
    __pyx_t_20 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_20 = __site_get_shape_431_32->Target(__site_get_shape_431_32, __pyx_v_wd, __pyx_context);
      __pyx_t_11 = __pyx_v_m;
      __pyx_t_1 = __pyx_v_m;
      __pyx_t_9 = __pyx_v_n;
      __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_11, __pyx_t_1, __pyx_t_9});
      __pyx_t_11 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_op_eq_431_39->Target(__site_op_eq_431_39, __pyx_t_20, __pyx_t_10);
      __pyx_t_20 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_3 = __site_istrue_431_39->Target(__site_istrue_431_39, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_8 = __pyx_t_3;
    } else {
      __pyx_t_8 = __pyx_t_4;
    }
    if (__pyx_t_8) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":432
 *             ld2wd = 1
 *         elif wd.ndim == 3 and wd.shape == (m, m, n):
 *             ldwd = n             # <<<<<<<<<<<<<<
 *             ld2wd = m
 *         else:
 */
      __pyx_v_ldwd = __pyx_v_n;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":433
 *         elif wd.ndim == 3 and wd.shape == (m, m, n):
 *             ldwd = n
 *             ld2wd = m             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError("could not convert wd to a suitable array")
 */
      __pyx_v_ld2wd = __pyx_v_m;
      goto __pyx_L25;
    }
    /*else*/ {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":435
 *             ld2wd = m
 *         else:
 *             raise ValueError("could not convert wd to a suitable array")             # <<<<<<<<<<<<<<
 *     else:
 *         try:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_435_28->Target(__site_call1_435_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert wd to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
    }
    __pyx_L25:;
    goto __pyx_L23;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":437
 *             raise ValueError("could not convert wd to a suitable array")
 *     else:
 *         try:             # <<<<<<<<<<<<<<
 *             val = float(wd)
 *             dim3[0] = 1
 */
    try {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":438
 *     else:
 *         try:
 *             val = float(wd)             # <<<<<<<<<<<<<<
 *             dim3[0] = 1
 *             dim3[1] = 1
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "float");
      __pyx_t_9 = __site_call1_438_23->Target(__site_call1_438_23, __pyx_context, ((System::Object^)__pyx_t_10), __pyx_v_wd);
      __pyx_t_10 = nullptr;
      __pyx_t_24 = __site_cvt_cvt_double_438_23->Target(__site_cvt_cvt_double_438_23, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_v_val = __pyx_t_24;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":439
 *         try:
 *             val = float(wd)
 *             dim3[0] = 1             # <<<<<<<<<<<<<<
 *             dim3[1] = 1
 *             dim3[2] = m
 */
      (__pyx_v_dim3[0]) = 1;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":440
 *             val = float(wd)
 *             dim3[0] = 1
 *             dim3[1] = 1             # <<<<<<<<<<<<<<
 *             dim3[2] = m
 *             wd = PyArray_Empty(3, &dim3[0], np.double, False)
 */
      (__pyx_v_dim3[1]) = 1;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":441
 *             dim3[0] = 1
 *             dim3[1] = 1
 *             dim3[2] = m             # <<<<<<<<<<<<<<
 *             wd = PyArray_Empty(3, &dim3[0], np.double, False)
 *             wd[0,0,0] = -val
 */
      (__pyx_v_dim3[2]) = __pyx_v_m;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":442
 *             dim3[1] = 1
 *             dim3[2] = m
 *             wd = PyArray_Empty(3, &dim3[0], np.double, False)             # <<<<<<<<<<<<<<
 *             wd[0,0,0] = -val
 *             ldwd = 1
 */
      __pyx_t_9 = __pyx_v_np;
      __pyx_t_10 = __site_get_double_442_46->Target(__site_get_double_442_46, __pyx_t_9, __pyx_context);
      __pyx_t_9 = nullptr;
      if (__pyx_t_10 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_10) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_t_9 = PyArray_Empty(3, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim3[0]))), ((NumpyDotNet::dtype^)__pyx_t_10), 0); 
      __pyx_t_10 = nullptr;
      __pyx_v_wd = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":443
 *             dim3[2] = m
 *             wd = PyArray_Empty(3, &dim3[0], np.double, False)
 *             wd[0,0,0] = -val             # <<<<<<<<<<<<<<
 *             ldwd = 1
 *             ld2wd = 1
 */
      __pyx_t_9 = (-__pyx_v_val);
      __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0, __pyx_int_0, __pyx_int_0});
      __site_setindex_443_14->Target(__site_setindex_443_14, __pyx_v_wd, __pyx_t_10, __pyx_t_9);
      __pyx_t_10 = nullptr;
      __pyx_t_9 = nullptr;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":444
 *             wd = PyArray_Empty(3, &dim3[0], np.double, False)
 *             wd[0,0,0] = -val
 *             ldwd = 1             # <<<<<<<<<<<<<<
 *             ld2wd = 1
 *         except ValueError, e:
 */
      __pyx_v_ldwd = 1;

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":445
 *             wd[0,0,0] = -val
 *             ldwd = 1
 *             ld2wd = 1             # <<<<<<<<<<<<<<
 *         except ValueError, e:
 *             raise ValueError("could not convert wd to a suitable array")
 */
      __pyx_v_ld2wd = 1;
    } catch (System::Exception^ __pyx_lt_25) {
      System::Object^ __pyx_lt_26 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_25);

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":446
 *             ldwd = 1
 *             ld2wd = 1
 *         except ValueError, e:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert wd to a suitable array")
 * 
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_26, __pyx_t_9);
      __pyx_t_9 = nullptr;
      if (__pyx_v_e != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.odr._odrpack.odr");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_25);

        /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":447
 *             ld2wd = 1
 *         except ValueError, e:
 *             raise ValueError("could not convert wd to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if ifixb is None:
 */
        __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
        __pyx_t_10 = __site_call1_447_28->Target(__site_call1_447_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert wd to a suitable array"));
        __pyx_t_9 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
        __pyx_t_10 = nullptr;
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_25);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
  }
  __pyx_L23:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":449
 *             raise ValueError("could not convert wd to a suitable array")
 * 
 *     if ifixb is None:             # <<<<<<<<<<<<<<
 *         dim1[0] = np
 *         ifixb = PyArray_Empty(1, &dim1[0], np.int, False)
 */
  __pyx_t_8 = (__pyx_v_ifixb == nullptr);
  if (__pyx_t_8) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":450
 * 
 *     if ifixb is None:
 *         dim1[0] = np             # <<<<<<<<<<<<<<
 *         ifixb = PyArray_Empty(1, &dim1[0], np.int, False)
 *         ifixb[0] = -1
 */
    (__pyx_v_dim1[0]) = __pyx_v_np;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":451
 *     if ifixb is None:
 *         dim1[0] = np
 *         ifixb = PyArray_Empty(1, &dim1[0], np.int, False)             # <<<<<<<<<<<<<<
 *         ifixb[0] = -1
 *     else:
 */
    __pyx_t_10 = __pyx_v_np;
    __pyx_t_9 = __site_get_int_451_45->Target(__site_get_int_451_45, __pyx_t_10, __pyx_context);
    __pyx_t_10 = nullptr;
    if (__pyx_t_9 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_9) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_10 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_9), 0); 
    __pyx_t_9 = nullptr;
    __pyx_v_ifixb = __pyx_t_10;
    __pyx_t_10 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":452
 *         dim1[0] = np
 *         ifixb = PyArray_Empty(1, &dim1[0], np.int, False)
 *         ifixb[0] = -1             # <<<<<<<<<<<<<<
 *     else:
 *         ifixb = PyArray_CopyFromObject(ifixb, np.int, 1, 1)
 */
    __site_setindex_452_13->Target(__site_setindex_452_13, __pyx_v_ifixb, ((System::Object^)0), __pyx_int_neg_1);
    goto __pyx_L26;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":454
 *         ifixb[0] = -1
 *     else:
 *         ifixb = PyArray_CopyFromObject(ifixb, np.int, 1, 1)             # <<<<<<<<<<<<<<
 *         if ifixb is None or ifixb.shape[0] != np:
 *             raise ValueError("could not convert ifixb to a suitable array")
 */
    __pyx_t_10 = __pyx_v_np;
    __pyx_t_9 = __site_get_int_454_48->Target(__site_get_int_454_48, __pyx_t_10, __pyx_context);
    __pyx_t_10 = nullptr;
    __pyx_t_10 = PyArray_CopyFromObject(__pyx_v_ifixb, __pyx_t_9, __pyx_int_1, __pyx_int_1); 
    __pyx_t_9 = nullptr;
    __pyx_v_ifixb = __pyx_t_10;
    __pyx_t_10 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":455
 *     else:
 *         ifixb = PyArray_CopyFromObject(ifixb, np.int, 1, 1)
 *         if ifixb is None or ifixb.shape[0] != np:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert ifixb to a suitable array")
 * 
 */
    __pyx_t_8 = (__pyx_v_ifixb == nullptr);
    if (!__pyx_t_8) {
      __pyx_t_10 = __site_get_shape_455_33->Target(__site_get_shape_455_33, __pyx_v_ifixb, __pyx_context);
      __pyx_t_9 = __site_getindex_455_39->Target(__site_getindex_455_39, __pyx_t_10, ((System::Object^)0));
      __pyx_t_10 = nullptr;
      __pyx_t_10 = __pyx_v_np;
      __pyx_t_20 = __site_op_ne_455_43->Target(__site_op_ne_455_43, __pyx_t_9, __pyx_t_10);
      __pyx_t_9 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_4 = __site_istrue_455_43->Target(__site_istrue_455_43, __pyx_t_20);
      __pyx_t_20 = nullptr;
      __pyx_t_3 = __pyx_t_4;
    } else {
      __pyx_t_3 = __pyx_t_8;
    }
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":456
 *         ifixb = PyArray_CopyFromObject(ifixb, np.int, 1, 1)
 *         if ifixb is None or ifixb.shape[0] != np:
 *             raise ValueError("could not convert ifixb to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if ifixx is None:
 */
      __pyx_t_20 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_456_28->Target(__site_call1_456_28, __pyx_context, __pyx_t_20, ((System::Object^)"could not convert ifixb to a suitable array"));
      __pyx_t_20 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
      goto __pyx_L27;
    }
    __pyx_L27:;
  }
  __pyx_L26:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":458
 *             raise ValueError("could not convert ifixb to a suitable array")
 * 
 *     if ifixx is None:             # <<<<<<<<<<<<<<
 *         dim2[0] = m
 *         dim2[1] = 1
 */
  __pyx_t_3 = (__pyx_v_ifixx == nullptr);
  if (__pyx_t_3) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":459
 * 
 *     if ifixx is None:
 *         dim2[0] = m             # <<<<<<<<<<<<<<
 *         dim2[1] = 1
 *         ifixx = PyArray_Empty(2, &dim2[0], np.int, False)
 */
    (__pyx_v_dim2[0]) = __pyx_v_m;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":460
 *     if ifixx is None:
 *         dim2[0] = m
 *         dim2[1] = 1             # <<<<<<<<<<<<<<
 *         ifixx = PyArray_Empty(2, &dim2[0], np.int, False)
 *         ifixx[0,0] = -1
 */
    (__pyx_v_dim2[1]) = 1;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":461
 *         dim2[0] = m
 *         dim2[1] = 1
 *         ifixx = PyArray_Empty(2, &dim2[0], np.int, False)             # <<<<<<<<<<<<<<
 *         ifixx[0,0] = -1
 *         ldifx = 1
 */
    __pyx_t_10 = __pyx_v_np;
    __pyx_t_20 = __site_get_int_461_45->Target(__site_get_int_461_45, __pyx_t_10, __pyx_context);
    __pyx_t_10 = nullptr;
    if (__pyx_t_20 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_20) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_10 = PyArray_Empty(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), ((NumpyDotNet::dtype^)__pyx_t_20), 0); 
    __pyx_t_20 = nullptr;
    __pyx_v_ifixx = __pyx_t_10;
    __pyx_t_10 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":462
 *         dim2[1] = 1
 *         ifixx = PyArray_Empty(2, &dim2[0], np.int, False)
 *         ifixx[0,0] = -1             # <<<<<<<<<<<<<<
 *         ldifx = 1
 *     else:
 */
    __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0, __pyx_int_0});
    __site_setindex_462_13->Target(__site_setindex_462_13, __pyx_v_ifixx, __pyx_t_10, __pyx_int_neg_1);
    __pyx_t_10 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":463
 *         ifixx = PyArray_Empty(2, &dim2[0], np.int, False)
 *         ifixx[0,0] = -1
 *         ldifx = 1             # <<<<<<<<<<<<<<
 *     else:
 *         ifixx = PyArray_CopyFromObject(ifixx, np.int, 1, 2)
 */
    __pyx_v_ldifx = 1;
    goto __pyx_L28;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":465
 *         ldifx = 1
 *     else:
 *         ifixx = PyArray_CopyFromObject(ifixx, np.int, 1, 2)             # <<<<<<<<<<<<<<
 *         if ifixx is None:
 *             raise ValueError("could not convert ifixx to a suitable array")
 */
    __pyx_t_10 = __pyx_v_np;
    __pyx_t_20 = __site_get_int_465_48->Target(__site_get_int_465_48, __pyx_t_10, __pyx_context);
    __pyx_t_10 = nullptr;
    __pyx_t_10 = PyArray_CopyFromObject(__pyx_v_ifixx, __pyx_t_20, __pyx_int_1, __pyx_int_2); 
    __pyx_t_20 = nullptr;
    __pyx_v_ifixx = __pyx_t_10;
    __pyx_t_10 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":466
 *     else:
 *         ifixx = PyArray_CopyFromObject(ifixx, np.int, 1, 2)
 *         if ifixx is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert ifixx to a suitable array")
 * 
 */
    __pyx_t_3 = (__pyx_v_ifixx == nullptr);
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":467
 *         ifixx = PyArray_CopyFromObject(ifixx, np.int, 1, 2)
 *         if ifixx is None:
 *             raise ValueError("could not convert ifixx to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if ifixx.ndim == 1 and ifixx.shape[0] == m:
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_20 = __site_call1_467_28->Target(__site_call1_467_28, __pyx_context, __pyx_t_10, ((System::Object^)"could not convert ifixx to a suitable array"));
      __pyx_t_10 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_20, nullptr, nullptr);
      __pyx_t_20 = nullptr;
      goto __pyx_L29;
    }
    __pyx_L29:;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":469
 *             raise ValueError("could not convert ifixx to a suitable array")
 * 
 *         if ifixx.ndim == 1 and ifixx.shape[0] == m:             # <<<<<<<<<<<<<<
 *             ldifx = 1
 *         elif ifixx.ndim == 1 and ifixx.shape[0] == n and m == 1:
 */
    __pyx_t_20 = __site_get_ndim_469_16->Target(__site_get_ndim_469_16, __pyx_v_ifixx, __pyx_context);
    __pyx_t_10 = __site_op_eq_469_22->Target(__site_op_eq_469_22, __pyx_t_20, __pyx_int_1);
    __pyx_t_20 = nullptr;
    __pyx_t_3 = __site_istrue_469_22->Target(__site_istrue_469_22, __pyx_t_10);
    __pyx_t_10 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_10 = __site_get_shape_469_36->Target(__site_get_shape_469_36, __pyx_v_ifixx, __pyx_context);
      __pyx_t_20 = __site_getindex_469_42->Target(__site_getindex_469_42, __pyx_t_10, ((System::Object^)0));
      __pyx_t_10 = nullptr;
      __pyx_t_10 = __pyx_v_m;
      __pyx_t_9 = __site_op_eq_469_46->Target(__site_op_eq_469_46, __pyx_t_20, __pyx_t_10);
      __pyx_t_20 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_8 = __site_istrue_469_46->Target(__site_istrue_469_46, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_4 = __pyx_t_8;
    } else {
      __pyx_t_4 = __pyx_t_3;
    }
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":470
 * 
 *         if ifixx.ndim == 1 and ifixx.shape[0] == m:
 *             ldifx = 1             # <<<<<<<<<<<<<<
 *         elif ifixx.ndim == 1 and ifixx.shape[0] == n and m == 1:
 *             ldifx = n
 */
      __pyx_v_ldifx = 1;
      goto __pyx_L30;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":471
 *         if ifixx.ndim == 1 and ifixx.shape[0] == m:
 *             ldifx = 1
 *         elif ifixx.ndim == 1 and ifixx.shape[0] == n and m == 1:             # <<<<<<<<<<<<<<
 *             ldifx = n
 *         elif ifixx.ndim == 2 and ifixx.shape == (m, n):
 */
    __pyx_t_9 = __site_get_ndim_471_18->Target(__site_get_ndim_471_18, __pyx_v_ifixx, __pyx_context);
    __pyx_t_10 = __site_op_eq_471_24->Target(__site_op_eq_471_24, __pyx_t_9, __pyx_int_1);
    __pyx_t_9 = nullptr;
    __pyx_t_4 = __site_istrue_471_24->Target(__site_istrue_471_24, __pyx_t_10);
    __pyx_t_10 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_10 = __site_get_shape_471_38->Target(__site_get_shape_471_38, __pyx_v_ifixx, __pyx_context);
      __pyx_t_9 = __site_getindex_471_44->Target(__site_getindex_471_44, __pyx_t_10, ((System::Object^)0));
      __pyx_t_10 = nullptr;
      __pyx_t_10 = __pyx_v_n;
      __pyx_t_20 = __site_op_eq_471_48->Target(__site_op_eq_471_48, __pyx_t_9, __pyx_t_10);
      __pyx_t_9 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_3 = __site_istrue_471_48->Target(__site_istrue_471_48, __pyx_t_20);
      __pyx_t_20 = nullptr;
      if (__pyx_t_3) {
        __pyx_t_8 = (__pyx_v_m == 1);
        __pyx_t_12 = __pyx_t_8;
      } else {
        __pyx_t_12 = __pyx_t_3;
      }
      __pyx_t_3 = __pyx_t_12;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":472
 *             ldifx = 1
 *         elif ifixx.ndim == 1 and ifixx.shape[0] == n and m == 1:
 *             ldifx = n             # <<<<<<<<<<<<<<
 *         elif ifixx.ndim == 2 and ifixx.shape == (m, n):
 *             ldifx = n
 */
      __pyx_v_ldifx = __pyx_v_n;
      goto __pyx_L30;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":473
 *         elif ifixx.ndim == 1 and ifixx.shape[0] == n and m == 1:
 *             ldifx = n
 *         elif ifixx.ndim == 2 and ifixx.shape == (m, n):             # <<<<<<<<<<<<<<
 *             ldifx = n
 *         else:
 */
    __pyx_t_20 = __site_get_ndim_473_18->Target(__site_get_ndim_473_18, __pyx_v_ifixx, __pyx_context);
    __pyx_t_10 = __site_op_eq_473_24->Target(__site_op_eq_473_24, __pyx_t_20, __pyx_int_2);
    __pyx_t_20 = nullptr;
    __pyx_t_3 = __site_istrue_473_24->Target(__site_istrue_473_24, __pyx_t_10);
    __pyx_t_10 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_10 = __site_get_shape_473_38->Target(__site_get_shape_473_38, __pyx_v_ifixx, __pyx_context);
      __pyx_t_20 = __pyx_v_m;
      __pyx_t_9 = __pyx_v_n;
      __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_20, __pyx_t_9});
      __pyx_t_20 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_op_eq_473_45->Target(__site_op_eq_473_45, __pyx_t_10, __pyx_t_1);
      __pyx_t_10 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_4 = __site_istrue_473_45->Target(__site_istrue_473_45, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_12 = __pyx_t_4;
    } else {
      __pyx_t_12 = __pyx_t_3;
    }
    if (__pyx_t_12) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":474
 *             ldifx = n
 *         elif ifixx.ndim == 2 and ifixx.shape == (m, n):
 *             ldifx = n             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError("could not convert ifixx to a suitable array")
 */
      __pyx_v_ldifx = __pyx_v_n;
      goto __pyx_L30;
    }
    /*else*/ {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":476
 *             ldifx = n
 *         else:
 *             raise ValueError("could not convert ifixx to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if errfile is not None:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_476_28->Target(__site_call1_476_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert ifixx to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
    }
    __pyx_L30:;
  }
  __pyx_L28:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":478
 *             raise ValueError("could not convert ifixx to a suitable array")
 * 
 *     if errfile is not None:             # <<<<<<<<<<<<<<
 *         # Call Fortran's OPEN to open the file with a logical unit of 18.
 *         lunerr = 18;
 */
  __pyx_t_12 = (__pyx_v_errfile != nullptr);
  if (__pyx_t_12) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":480
 *     if errfile is not None:
 *         # Call Fortran's OPEN to open the file with a logical unit of 18.
 *         lunerr = 18;             # <<<<<<<<<<<<<<
 *         dluno(&lunerr, errfile, len(errfile))
 * 
 */
    __pyx_v_lunerr = 18;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":481
 *         # Call Fortran's OPEN to open the file with a logical unit of 18.
 *         lunerr = 18;
 *         dluno(&lunerr, errfile, len(errfile))             # <<<<<<<<<<<<<<
 * 
 *     if rptfile is not None:
 */
    __pyx_t_28 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_v_errfile));
    __pyx_t_27 = static_cast<char *>(__pyx_t_28.ToPointer());
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "len");
    __pyx_t_9 = __site_call1_481_35->Target(__site_call1_481_35, __pyx_context, __pyx_t_1, __pyx_v_errfile);
    __pyx_t_1 = nullptr;
    __pyx_t_29 = __site_cvt_cvt_int_481_35->Target(__site_cvt_cvt_int_481_35, __pyx_t_9);
    __pyx_t_9 = nullptr;
    F_FUNC(dluno, DLUNO)((&__pyx_v_lunerr), __pyx_t_27, __pyx_t_29);
    InteropServices::Marshal::FreeHGlobal(__pyx_t_28);
    goto __pyx_L31;
  }
  __pyx_L31:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":483
 *         dluno(&lunerr, errfile, len(errfile))
 * 
 *     if rptfile is not None:             # <<<<<<<<<<<<<<
 *         lunrpt = 19
 *         dluno(&lunrpt, rptfile, len(rptfile))
 */
  __pyx_t_12 = (__pyx_v_rptfile != nullptr);
  if (__pyx_t_12) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":484
 * 
 *     if rptfile is not None:
 *         lunrpt = 19             # <<<<<<<<<<<<<<
 *         dluno(&lunrpt, rptfile, len(rptfile))
 * 
 */
    __pyx_v_lunrpt = 19;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":485
 *     if rptfile is not None:
 *         lunrpt = 19
 *         dluno(&lunrpt, rptfile, len(rptfile))             # <<<<<<<<<<<<<<
 * 
 *     if stpb is None:
 */
    __pyx_t_28 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_v_rptfile));
    __pyx_t_30 = static_cast<char *>(__pyx_t_28.ToPointer());
    __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "len");
    __pyx_t_1 = __site_call1_485_35->Target(__site_call1_485_35, __pyx_context, __pyx_t_9, __pyx_v_rptfile);
    __pyx_t_9 = nullptr;
    __pyx_t_31 = __site_cvt_cvt_int_485_35->Target(__site_cvt_cvt_int_485_35, __pyx_t_1);
    __pyx_t_1 = nullptr;
    F_FUNC(dluno, DLUNO)((&__pyx_v_lunrpt), __pyx_t_30, __pyx_t_31);
    InteropServices::Marshal::FreeHGlobal(__pyx_t_28);
    goto __pyx_L32;
  }
  __pyx_L32:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":487
 *         dluno(&lunrpt, rptfile, len(rptfile))
 * 
 *     if stpb is None:             # <<<<<<<<<<<<<<
 *         dim1[0] = np
 *         stpb = PyArray_Empty(1, &dim1[0], np.double, False)
 */
  __pyx_t_12 = (__pyx_v_stpb == nullptr);
  if (__pyx_t_12) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":488
 * 
 *     if stpb is None:
 *         dim1[0] = np             # <<<<<<<<<<<<<<
 *         stpb = PyArray_Empty(1, &dim1[0], np.double, False)
 *         stpb[0] = 0.0
 */
    (__pyx_v_dim1[0]) = __pyx_v_np;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":489
 *     if stpb is None:
 *         dim1[0] = np
 *         stpb = PyArray_Empty(1, &dim1[0], np.double, False)             # <<<<<<<<<<<<<<
 *         stpb[0] = 0.0
 *     else:
 */
    __pyx_t_1 = __pyx_v_np;
    __pyx_t_9 = __site_get_double_489_44->Target(__site_get_double_489_44, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    if (__pyx_t_9 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_9) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_1 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_9), 0); 
    __pyx_t_9 = nullptr;
    __pyx_v_stpb = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":490
 *         dim1[0] = np
 *         stpb = PyArray_Empty(1, &dim1[0], np.double, False)
 *         stpb[0] = 0.0             # <<<<<<<<<<<<<<
 *     else:
 *         stpb = PyArray_CopyFromObject(stpb, np.double, 1, 1)
 */
    __pyx_t_1 = 0.0;
    __site_setindex_490_12->Target(__site_setindex_490_12, __pyx_v_stpb, ((System::Object^)0), __pyx_t_1);
    __pyx_t_1 = nullptr;
    goto __pyx_L33;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":492
 *         stpb[0] = 0.0
 *     else:
 *         stpb = PyArray_CopyFromObject(stpb, np.double, 1, 1)             # <<<<<<<<<<<<<<
 *         if stpb is None or stpb.shape[0] != np:
 *             raise ValueError("could not convert stpb to a suitable array")
 */
    __pyx_t_1 = __pyx_v_np;
    __pyx_t_9 = __site_get_double_492_46->Target(__site_get_double_492_46, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = PyArray_CopyFromObject(__pyx_v_stpb, __pyx_t_9, __pyx_int_1, __pyx_int_1); 
    __pyx_t_9 = nullptr;
    __pyx_v_stpb = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":493
 *     else:
 *         stpb = PyArray_CopyFromObject(stpb, np.double, 1, 1)
 *         if stpb is None or stpb.shape[0] != np:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert stpb to a suitable array")
 * 
 */
    __pyx_t_12 = (__pyx_v_stpb == nullptr);
    if (!__pyx_t_12) {
      __pyx_t_1 = __site_get_shape_493_31->Target(__site_get_shape_493_31, __pyx_v_stpb, __pyx_context);
      __pyx_t_9 = __site_getindex_493_37->Target(__site_getindex_493_37, __pyx_t_1, ((System::Object^)0));
      __pyx_t_1 = nullptr;
      __pyx_t_1 = __pyx_v_np;
      __pyx_t_10 = __site_op_ne_493_41->Target(__site_op_ne_493_41, __pyx_t_9, __pyx_t_1);
      __pyx_t_9 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_3 = __site_istrue_493_41->Target(__site_istrue_493_41, __pyx_t_10);
      __pyx_t_10 = nullptr;
      __pyx_t_4 = __pyx_t_3;
    } else {
      __pyx_t_4 = __pyx_t_12;
    }
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":494
 *         stpb = PyArray_CopyFromObject(stpb, np.double, 1, 1)
 *         if stpb is None or stpb.shape[0] != np:
 *             raise ValueError("could not convert stpb to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if stpd is None:
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_494_28->Target(__site_call1_494_28, __pyx_context, __pyx_t_10, ((System::Object^)"could not convert stpb to a suitable array"));
      __pyx_t_10 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L34;
    }
    __pyx_L34:;
  }
  __pyx_L33:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":496
 *             raise ValueError("could not convert stpb to a suitable array")
 * 
 *     if stpd is None:             # <<<<<<<<<<<<<<
 *         dim2[0] = 1
 *         dim2[1] = m
 */
  __pyx_t_4 = (__pyx_v_stpd == nullptr);
  if (__pyx_t_4) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":497
 * 
 *     if stpd is None:
 *         dim2[0] = 1             # <<<<<<<<<<<<<<
 *         dim2[1] = m
 *         stpd = PyArray_Empty(2, &dim2[0], np.double, False)
 */
    (__pyx_v_dim2[0]) = 1;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":498
 *     if stpd is None:
 *         dim2[0] = 1
 *         dim2[1] = m             # <<<<<<<<<<<<<<
 *         stpd = PyArray_Empty(2, &dim2[0], np.double, False)
 *         stpd[0,0] = 0.0
 */
    (__pyx_v_dim2[1]) = __pyx_v_m;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":499
 *         dim2[0] = 1
 *         dim2[1] = m
 *         stpd = PyArray_Empty(2, &dim2[0], np.double, False)             # <<<<<<<<<<<<<<
 *         stpd[0,0] = 0.0
 *         ldstpd = 1
 */
    __pyx_t_1 = __pyx_v_np;
    __pyx_t_10 = __site_get_double_499_44->Target(__site_get_double_499_44, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    if (__pyx_t_10 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_10) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_1 = PyArray_Empty(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), ((NumpyDotNet::dtype^)__pyx_t_10), 0); 
    __pyx_t_10 = nullptr;
    __pyx_v_stpd = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":500
 *         dim2[1] = m
 *         stpd = PyArray_Empty(2, &dim2[0], np.double, False)
 *         stpd[0,0] = 0.0             # <<<<<<<<<<<<<<
 *         ldstpd = 1
 *     else:
 */
    __pyx_t_1 = 0.0;
    __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0, __pyx_int_0});
    __site_setindex_500_12->Target(__site_setindex_500_12, __pyx_v_stpd, __pyx_t_10, __pyx_t_1);
    __pyx_t_10 = nullptr;
    __pyx_t_1 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":501
 *         stpd = PyArray_Empty(2, &dim2[0], np.double, False)
 *         stpd[0,0] = 0.0
 *         ldstpd = 1             # <<<<<<<<<<<<<<
 *     else:
 *         stpd = PyArray_CopyFromObject(stpd, np.double, 1, 2)
 */
    __pyx_v_ldstpd = 1;
    goto __pyx_L35;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":503
 *         ldstpd = 1
 *     else:
 *         stpd = PyArray_CopyFromObject(stpd, np.double, 1, 2)             # <<<<<<<<<<<<<<
 *         if stpd is None:
 *             raise ValueError("could not convert stpd to a suitable array")
 */
    __pyx_t_1 = __pyx_v_np;
    __pyx_t_10 = __site_get_double_503_46->Target(__site_get_double_503_46, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = PyArray_CopyFromObject(__pyx_v_stpd, __pyx_t_10, __pyx_int_1, __pyx_int_2); 
    __pyx_t_10 = nullptr;
    __pyx_v_stpd = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":504
 *     else:
 *         stpd = PyArray_CopyFromObject(stpd, np.double, 1, 2)
 *         if stpd is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert stpd to a suitable array")
 * 
 */
    __pyx_t_4 = (__pyx_v_stpd == nullptr);
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":505
 *         stpd = PyArray_CopyFromObject(stpd, np.double, 1, 2)
 *         if stpd is None:
 *             raise ValueError("could not convert stpd to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if stpd.ndim == 1 and stpd.shape[0] == m:
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_505_28->Target(__site_call1_505_28, __pyx_context, __pyx_t_1, ((System::Object^)"could not convert stpd to a suitable array"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
      goto __pyx_L36;
    }
    __pyx_L36:;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":507
 *             raise ValueError("could not convert stpd to a suitable array")
 * 
 *         if stpd.ndim == 1 and stpd.shape[0] == m:             # <<<<<<<<<<<<<<
 *             ldstpd = 1
 *         elif stpd.ndim == 1 and stpd.shape[0] == n and m == 1:
 */
    __pyx_t_10 = __site_get_ndim_507_15->Target(__site_get_ndim_507_15, __pyx_v_stpd, __pyx_context);
    __pyx_t_1 = __site_op_eq_507_21->Target(__site_op_eq_507_21, __pyx_t_10, __pyx_int_1);
    __pyx_t_10 = nullptr;
    __pyx_t_4 = __site_istrue_507_21->Target(__site_istrue_507_21, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_1 = __site_get_shape_507_34->Target(__site_get_shape_507_34, __pyx_v_stpd, __pyx_context);
      __pyx_t_10 = __site_getindex_507_40->Target(__site_getindex_507_40, __pyx_t_1, ((System::Object^)0));
      __pyx_t_1 = nullptr;
      __pyx_t_1 = __pyx_v_m;
      __pyx_t_9 = __site_op_eq_507_44->Target(__site_op_eq_507_44, __pyx_t_10, __pyx_t_1);
      __pyx_t_10 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_12 = __site_istrue_507_44->Target(__site_istrue_507_44, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_3 = __pyx_t_12;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":508
 * 
 *         if stpd.ndim == 1 and stpd.shape[0] == m:
 *             ldstpd = 1             # <<<<<<<<<<<<<<
 *         elif stpd.ndim == 1 and stpd.shape[0] == n and m == 1:
 *             ldstpd = n
 */
      __pyx_v_ldstpd = 1;
      goto __pyx_L37;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":509
 *         if stpd.ndim == 1 and stpd.shape[0] == m:
 *             ldstpd = 1
 *         elif stpd.ndim == 1 and stpd.shape[0] == n and m == 1:             # <<<<<<<<<<<<<<
 *             ldstpd = n
 *         elif stpd.ndim == 2 and stpd.shape == (n, m):
 */
    __pyx_t_9 = __site_get_ndim_509_17->Target(__site_get_ndim_509_17, __pyx_v_stpd, __pyx_context);
    __pyx_t_1 = __site_op_eq_509_23->Target(__site_op_eq_509_23, __pyx_t_9, __pyx_int_1);
    __pyx_t_9 = nullptr;
    __pyx_t_3 = __site_istrue_509_23->Target(__site_istrue_509_23, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_1 = __site_get_shape_509_36->Target(__site_get_shape_509_36, __pyx_v_stpd, __pyx_context);
      __pyx_t_9 = __site_getindex_509_42->Target(__site_getindex_509_42, __pyx_t_1, ((System::Object^)0));
      __pyx_t_1 = nullptr;
      __pyx_t_1 = __pyx_v_n;
      __pyx_t_10 = __site_op_eq_509_46->Target(__site_op_eq_509_46, __pyx_t_9, __pyx_t_1);
      __pyx_t_9 = nullptr;
      __pyx_t_1 = nullptr;
      __pyx_t_4 = __site_istrue_509_46->Target(__site_istrue_509_46, __pyx_t_10);
      __pyx_t_10 = nullptr;
      if (__pyx_t_4) {
        __pyx_t_12 = (__pyx_v_m == 1);
        __pyx_t_8 = __pyx_t_12;
      } else {
        __pyx_t_8 = __pyx_t_4;
      }
      __pyx_t_4 = __pyx_t_8;
    } else {
      __pyx_t_4 = __pyx_t_3;
    }
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":510
 *             ldstpd = 1
 *         elif stpd.ndim == 1 and stpd.shape[0] == n and m == 1:
 *             ldstpd = n             # <<<<<<<<<<<<<<
 *         elif stpd.ndim == 2 and stpd.shape == (n, m):
 *             ldstpd = n
 */
      __pyx_v_ldstpd = __pyx_v_n;
      goto __pyx_L37;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":511
 *         elif stpd.ndim == 1 and stpd.shape[0] == n and m == 1:
 *             ldstpd = n
 *         elif stpd.ndim == 2 and stpd.shape == (n, m):             # <<<<<<<<<<<<<<
 *             ldstpd = n
 *         else:
 */
    __pyx_t_10 = __site_get_ndim_511_17->Target(__site_get_ndim_511_17, __pyx_v_stpd, __pyx_context);
    __pyx_t_1 = __site_op_eq_511_23->Target(__site_op_eq_511_23, __pyx_t_10, __pyx_int_2);
    __pyx_t_10 = nullptr;
    __pyx_t_4 = __site_istrue_511_23->Target(__site_istrue_511_23, __pyx_t_1);
    __pyx_t_1 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_1 = __site_get_shape_511_36->Target(__site_get_shape_511_36, __pyx_v_stpd, __pyx_context);
      __pyx_t_10 = __pyx_v_n;
      __pyx_t_9 = __pyx_v_m;
      __pyx_t_20 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_10, __pyx_t_9});
      __pyx_t_10 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_op_eq_511_43->Target(__site_op_eq_511_43, __pyx_t_1, __pyx_t_20);
      __pyx_t_1 = nullptr;
      __pyx_t_20 = nullptr;
      __pyx_t_3 = __site_istrue_511_43->Target(__site_istrue_511_43, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_8 = __pyx_t_3;
    } else {
      __pyx_t_8 = __pyx_t_4;
    }
    if (__pyx_t_8) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":512
 *             ldstpd = n
 *         elif stpd.ndim == 2 and stpd.shape == (n, m):
 *             ldstpd = n             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError("could not convert stpd to a suitable array")
 */
      __pyx_v_ldstpd = __pyx_v_n;
      goto __pyx_L37;
    }
    /*else*/ {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":514
 *             ldstpd = n
 *         else:
 *             raise ValueError("could not convert stpd to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if sclb is None:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_20 = __site_call1_514_28->Target(__site_call1_514_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert stpd to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_20, nullptr, nullptr);
      __pyx_t_20 = nullptr;
    }
    __pyx_L37:;
  }
  __pyx_L35:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":516
 *             raise ValueError("could not convert stpd to a suitable array")
 * 
 *     if sclb is None:             # <<<<<<<<<<<<<<
 *         dim1[0] = np
 *         sclb = PyArray_Empty(1, &dim1[0], np.double, False)
 */
  __pyx_t_8 = (__pyx_v_sclb == nullptr);
  if (__pyx_t_8) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":517
 * 
 *     if sclb is None:
 *         dim1[0] = np             # <<<<<<<<<<<<<<
 *         sclb = PyArray_Empty(1, &dim1[0], np.double, False)
 *         sclb[0] = 0.0
 */
    (__pyx_v_dim1[0]) = __pyx_v_np;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":518
 *     if sclb is None:
 *         dim1[0] = np
 *         sclb = PyArray_Empty(1, &dim1[0], np.double, False)             # <<<<<<<<<<<<<<
 *         sclb[0] = 0.0
 *     else:
 */
    __pyx_t_20 = __pyx_v_np;
    __pyx_t_9 = __site_get_double_518_44->Target(__site_get_double_518_44, __pyx_t_20, __pyx_context);
    __pyx_t_20 = nullptr;
    if (__pyx_t_9 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_9) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_20 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_9), 0); 
    __pyx_t_9 = nullptr;
    __pyx_v_sclb = __pyx_t_20;
    __pyx_t_20 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":519
 *         dim1[0] = np
 *         sclb = PyArray_Empty(1, &dim1[0], np.double, False)
 *         sclb[0] = 0.0             # <<<<<<<<<<<<<<
 *     else:
 *         sclb = PyArray_CopyFromObject(sclb, np.double, 1, 1)
 */
    __pyx_t_20 = 0.0;
    __site_setindex_519_12->Target(__site_setindex_519_12, __pyx_v_sclb, ((System::Object^)0), __pyx_t_20);
    __pyx_t_20 = nullptr;
    goto __pyx_L38;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":521
 *         sclb[0] = 0.0
 *     else:
 *         sclb = PyArray_CopyFromObject(sclb, np.double, 1, 1)             # <<<<<<<<<<<<<<
 *         if sclb is None or sclb.shape[0] != np:
 *             raise ValueError("could not convert sclb to a suitable array")
 */
    __pyx_t_20 = __pyx_v_np;
    __pyx_t_9 = __site_get_double_521_46->Target(__site_get_double_521_46, __pyx_t_20, __pyx_context);
    __pyx_t_20 = nullptr;
    __pyx_t_20 = PyArray_CopyFromObject(__pyx_v_sclb, __pyx_t_9, __pyx_int_1, __pyx_int_1); 
    __pyx_t_9 = nullptr;
    __pyx_v_sclb = __pyx_t_20;
    __pyx_t_20 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":522
 *     else:
 *         sclb = PyArray_CopyFromObject(sclb, np.double, 1, 1)
 *         if sclb is None or sclb.shape[0] != np:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert sclb to a suitable array")
 * 
 */
    __pyx_t_8 = (__pyx_v_sclb == nullptr);
    if (!__pyx_t_8) {
      __pyx_t_20 = __site_get_shape_522_31->Target(__site_get_shape_522_31, __pyx_v_sclb, __pyx_context);
      __pyx_t_9 = __site_getindex_522_37->Target(__site_getindex_522_37, __pyx_t_20, ((System::Object^)0));
      __pyx_t_20 = nullptr;
      __pyx_t_20 = __pyx_v_np;
      __pyx_t_1 = __site_op_ne_522_41->Target(__site_op_ne_522_41, __pyx_t_9, __pyx_t_20);
      __pyx_t_9 = nullptr;
      __pyx_t_20 = nullptr;
      __pyx_t_4 = __site_istrue_522_41->Target(__site_istrue_522_41, __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_3 = __pyx_t_4;
    } else {
      __pyx_t_3 = __pyx_t_8;
    }
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":523
 *         sclb = PyArray_CopyFromObject(sclb, np.double, 1, 1)
 *         if sclb is None or sclb.shape[0] != np:
 *             raise ValueError("could not convert sclb to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if scld is None:
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_20 = __site_call1_523_28->Target(__site_call1_523_28, __pyx_context, __pyx_t_1, ((System::Object^)"could not convert sclb to a suitable array"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_20, nullptr, nullptr);
      __pyx_t_20 = nullptr;
      goto __pyx_L39;
    }
    __pyx_L39:;
  }
  __pyx_L38:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":525
 *             raise ValueError("could not convert sclb to a suitable array")
 * 
 *     if scld is None:             # <<<<<<<<<<<<<<
 *         dim2[0] = 1
 *         dim2[1] = n
 */
  __pyx_t_3 = (__pyx_v_scld == nullptr);
  if (__pyx_t_3) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":526
 * 
 *     if scld is None:
 *         dim2[0] = 1             # <<<<<<<<<<<<<<
 *         dim2[1] = n
 *         scld = PyArray_Empty(2, &dim2[0], np.double, False)
 */
    (__pyx_v_dim2[0]) = 1;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":527
 *     if scld is None:
 *         dim2[0] = 1
 *         dim2[1] = n             # <<<<<<<<<<<<<<
 *         scld = PyArray_Empty(2, &dim2[0], np.double, False)
 *         scld[0,0] = 0.0
 */
    (__pyx_v_dim2[1]) = __pyx_v_n;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":528
 *         dim2[0] = 1
 *         dim2[1] = n
 *         scld = PyArray_Empty(2, &dim2[0], np.double, False)             # <<<<<<<<<<<<<<
 *         scld[0,0] = 0.0
 *         ldscld = 1
 */
    __pyx_t_20 = __pyx_v_np;
    __pyx_t_1 = __site_get_double_528_44->Target(__site_get_double_528_44, __pyx_t_20, __pyx_context);
    __pyx_t_20 = nullptr;
    if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_1) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_20 = PyArray_Empty(2, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim2[0]))), ((NumpyDotNet::dtype^)__pyx_t_1), 0); 
    __pyx_t_1 = nullptr;
    __pyx_v_scld = __pyx_t_20;
    __pyx_t_20 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":529
 *         dim2[1] = n
 *         scld = PyArray_Empty(2, &dim2[0], np.double, False)
 *         scld[0,0] = 0.0             # <<<<<<<<<<<<<<
 *         ldscld = 1
 *     else:
 */
    __pyx_t_20 = 0.0;
    __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_0, __pyx_int_0});
    __site_setindex_529_12->Target(__site_setindex_529_12, __pyx_v_scld, __pyx_t_1, __pyx_t_20);
    __pyx_t_1 = nullptr;
    __pyx_t_20 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":530
 *         scld = PyArray_Empty(2, &dim2[0], np.double, False)
 *         scld[0,0] = 0.0
 *         ldscld = 1             # <<<<<<<<<<<<<<
 *     else:
 *         scld = PyArray_CopyFromObject(scld, np.double, 1, 2)
 */
    __pyx_v_ldscld = 1;
    goto __pyx_L40;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":532
 *         ldscld = 1
 *     else:
 *         scld = PyArray_CopyFromObject(scld, np.double, 1, 2)             # <<<<<<<<<<<<<<
 *         if scld is None:
 *             raise ValueError("could not convert scld to a suitable array")
 */
    __pyx_t_20 = __pyx_v_np;
    __pyx_t_1 = __site_get_double_532_46->Target(__site_get_double_532_46, __pyx_t_20, __pyx_context);
    __pyx_t_20 = nullptr;
    __pyx_t_20 = PyArray_CopyFromObject(__pyx_v_scld, __pyx_t_1, __pyx_int_1, __pyx_int_2); 
    __pyx_t_1 = nullptr;
    __pyx_v_scld = __pyx_t_20;
    __pyx_t_20 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":533
 *     else:
 *         scld = PyArray_CopyFromObject(scld, np.double, 1, 2)
 *         if scld is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert scld to a suitable array")
 * 
 */
    __pyx_t_3 = (__pyx_v_scld == nullptr);
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":534
 *         scld = PyArray_CopyFromObject(scld, np.double, 1, 2)
 *         if scld is None:
 *             raise ValueError("could not convert scld to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if scld.ndim == 1 and scld.shape[0] == m:
 */
      __pyx_t_20 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_1 = __site_call1_534_28->Target(__site_call1_534_28, __pyx_context, __pyx_t_20, ((System::Object^)"could not convert scld to a suitable array"));
      __pyx_t_20 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
      __pyx_t_1 = nullptr;
      goto __pyx_L41;
    }
    __pyx_L41:;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":536
 *             raise ValueError("could not convert scld to a suitable array")
 * 
 *         if scld.ndim == 1 and scld.shape[0] == m:             # <<<<<<<<<<<<<<
 *             ldscld = 1
 *         elif scld.ndim == 1 and scld.shape[0] == n and m == 1:
 */
    __pyx_t_1 = __site_get_ndim_536_15->Target(__site_get_ndim_536_15, __pyx_v_scld, __pyx_context);
    __pyx_t_20 = __site_op_eq_536_21->Target(__site_op_eq_536_21, __pyx_t_1, __pyx_int_1);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = __site_istrue_536_21->Target(__site_istrue_536_21, __pyx_t_20);
    __pyx_t_20 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_20 = __site_get_shape_536_34->Target(__site_get_shape_536_34, __pyx_v_scld, __pyx_context);
      __pyx_t_1 = __site_getindex_536_40->Target(__site_getindex_536_40, __pyx_t_20, ((System::Object^)0));
      __pyx_t_20 = nullptr;
      __pyx_t_20 = __pyx_v_m;
      __pyx_t_9 = __site_op_eq_536_44->Target(__site_op_eq_536_44, __pyx_t_1, __pyx_t_20);
      __pyx_t_1 = nullptr;
      __pyx_t_20 = nullptr;
      __pyx_t_8 = __site_istrue_536_44->Target(__site_istrue_536_44, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_4 = __pyx_t_8;
    } else {
      __pyx_t_4 = __pyx_t_3;
    }
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":537
 * 
 *         if scld.ndim == 1 and scld.shape[0] == m:
 *             ldscld = 1             # <<<<<<<<<<<<<<
 *         elif scld.ndim == 1 and scld.shape[0] == n and m == 1:
 *             ldscld = n
 */
      __pyx_v_ldscld = 1;
      goto __pyx_L42;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":538
 *         if scld.ndim == 1 and scld.shape[0] == m:
 *             ldscld = 1
 *         elif scld.ndim == 1 and scld.shape[0] == n and m == 1:             # <<<<<<<<<<<<<<
 *             ldscld = n
 *         elif scld.ndim == 2 and scld.shape == (n, m):
 */
    __pyx_t_9 = __site_get_ndim_538_17->Target(__site_get_ndim_538_17, __pyx_v_scld, __pyx_context);
    __pyx_t_20 = __site_op_eq_538_23->Target(__site_op_eq_538_23, __pyx_t_9, __pyx_int_1);
    __pyx_t_9 = nullptr;
    __pyx_t_4 = __site_istrue_538_23->Target(__site_istrue_538_23, __pyx_t_20);
    __pyx_t_20 = nullptr;
    if (__pyx_t_4) {
      __pyx_t_20 = __site_get_shape_538_36->Target(__site_get_shape_538_36, __pyx_v_scld, __pyx_context);
      __pyx_t_9 = __site_getindex_538_42->Target(__site_getindex_538_42, __pyx_t_20, ((System::Object^)0));
      __pyx_t_20 = nullptr;
      __pyx_t_20 = __pyx_v_n;
      __pyx_t_1 = __site_op_eq_538_46->Target(__site_op_eq_538_46, __pyx_t_9, __pyx_t_20);
      __pyx_t_9 = nullptr;
      __pyx_t_20 = nullptr;
      __pyx_t_3 = __site_istrue_538_46->Target(__site_istrue_538_46, __pyx_t_1);
      __pyx_t_1 = nullptr;
      if (__pyx_t_3) {
        __pyx_t_8 = (__pyx_v_m == 1);
        __pyx_t_12 = __pyx_t_8;
      } else {
        __pyx_t_12 = __pyx_t_3;
      }
      __pyx_t_3 = __pyx_t_12;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":539
 *             ldscld = 1
 *         elif scld.ndim == 1 and scld.shape[0] == n and m == 1:
 *             ldscld = n             # <<<<<<<<<<<<<<
 *         elif scld.ndim == 2 and scld.shape == (n, m):
 *             ldscld = n
 */
      __pyx_v_ldscld = __pyx_v_n;
      goto __pyx_L42;
    }

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":540
 *         elif scld.ndim == 1 and scld.shape[0] == n and m == 1:
 *             ldscld = n
 *         elif scld.ndim == 2 and scld.shape == (n, m):             # <<<<<<<<<<<<<<
 *             ldscld = n
 *         else:
 */
    __pyx_t_1 = __site_get_ndim_540_17->Target(__site_get_ndim_540_17, __pyx_v_scld, __pyx_context);
    __pyx_t_20 = __site_op_eq_540_23->Target(__site_op_eq_540_23, __pyx_t_1, __pyx_int_2);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = __site_istrue_540_23->Target(__site_istrue_540_23, __pyx_t_20);
    __pyx_t_20 = nullptr;
    if (__pyx_t_3) {
      __pyx_t_20 = __site_get_shape_540_36->Target(__site_get_shape_540_36, __pyx_v_scld, __pyx_context);
      __pyx_t_1 = __pyx_v_n;
      __pyx_t_9 = __pyx_v_m;
      __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_9});
      __pyx_t_1 = nullptr;
      __pyx_t_9 = nullptr;
      __pyx_t_9 = __site_op_eq_540_43->Target(__site_op_eq_540_43, __pyx_t_20, __pyx_t_10);
      __pyx_t_20 = nullptr;
      __pyx_t_10 = nullptr;
      __pyx_t_4 = __site_istrue_540_43->Target(__site_istrue_540_43, __pyx_t_9);
      __pyx_t_9 = nullptr;
      __pyx_t_12 = __pyx_t_4;
    } else {
      __pyx_t_12 = __pyx_t_3;
    }
    if (__pyx_t_12) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":541
 *             ldscld = n
 *         elif scld.ndim == 2 and scld.shape == (n, m):
 *             ldscld = n             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError("could not convert scld to a suitable array")
 */
      __pyx_v_ldscld = __pyx_v_n;
      goto __pyx_L42;
    }
    /*else*/ {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":543
 *             ldscld = n
 *         else:
 *             raise ValueError("could not convert scld to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if job % 10 < 2:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_543_28->Target(__site_call1_543_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert scld to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
    }
    __pyx_L42:;
  }
  __pyx_L40:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":545
 *             raise ValueError("could not convert scld to a suitable array")
 * 
 *     if job % 10 < 2:             # <<<<<<<<<<<<<<
 *         # ODR not OLS
 *         lwork = \
 */
  __pyx_t_12 = (__Pyx_mod_long(__pyx_v_job, 10) < 2);
  if (__pyx_t_12) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":550
 *             18 + 11 * np + np * np + m + m * m + 4 * n * nq + 6 * n * m + \
 *             2 * n * nq * np + 2 * n * nq * m + nq * nq + 5 * nq + nq * (np + m) + \
 *             ldwe * ld2we * nq             # <<<<<<<<<<<<<<
 *         isodr = 1
 *     else:
 */
    __pyx_v_lwork = ((((((((((((18 + (11 * __pyx_v_np)) + (__pyx_v_np * __pyx_v_np)) + __pyx_v_m) + (__pyx_v_m * __pyx_v_m)) + ((4 * __pyx_v_n) * __pyx_v_nq)) + ((6 * __pyx_v_n) * __pyx_v_m)) + (((2 * __pyx_v_n) * __pyx_v_nq) * __pyx_v_np)) + (((2 * __pyx_v_n) * __pyx_v_nq) * __pyx_v_m)) + (__pyx_v_nq * __pyx_v_nq)) + (5 * __pyx_v_nq)) + (__pyx_v_nq * (__pyx_v_np + __pyx_v_m))) + ((__pyx_v_ldwe * __pyx_v_ld2we) * __pyx_v_nq));

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":551
 *             2 * n * nq * np + 2 * n * nq * m + nq * nq + 5 * nq + nq * (np + m) + \
 *             ldwe * ld2we * nq
 *         isodr = 1             # <<<<<<<<<<<<<<
 *     else:
 *         # OLS, not ODR
 */
    __pyx_v_isodr = 1;
    goto __pyx_L43;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":556
 *         lwork = \
 *             18 + 11 * np + np * np + m + m * m + 4 * n * nq + 2 * n * m + \
 *             2 * n * nq * np + 5 * nq + nq * (np + m) + ldwe * ld2we * nq             # <<<<<<<<<<<<<<
 *         isodr = 0
 * 
 */
    __pyx_v_lwork = ((((((((((18 + (11 * __pyx_v_np)) + (__pyx_v_np * __pyx_v_np)) + __pyx_v_m) + (__pyx_v_m * __pyx_v_m)) + ((4 * __pyx_v_n) * __pyx_v_nq)) + ((2 * __pyx_v_n) * __pyx_v_m)) + (((2 * __pyx_v_n) * __pyx_v_nq) * __pyx_v_np)) + (5 * __pyx_v_nq)) + (__pyx_v_nq * (__pyx_v_np + __pyx_v_m))) + ((__pyx_v_ldwe * __pyx_v_ld2we) * __pyx_v_nq));

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":557
 *             18 + 11 * np + np * np + m + m * m + 4 * n * nq + 2 * n * m + \
 *             2 * n * nq * np + 5 * nq + nq * (np + m) + ldwe * ld2we * nq
 *         isodr = 0             # <<<<<<<<<<<<<<
 * 
 *     liwork = 20 + np + nq * (np + m)
 */
    __pyx_v_isodr = 0;
  }
  __pyx_L43:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":559
 *         isodr = 0
 * 
 *     liwork = 20 + np + nq * (np + m)             # <<<<<<<<<<<<<<
 * 
 *     if (job / 10000) % 10 >= 1:
 */
  __pyx_v_liwork = ((20 + __pyx_v_np) + (__pyx_v_nq * (__pyx_v_np + __pyx_v_m)));

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":561
 *     liwork = 20 + np + nq * (np + m)
 * 
 *     if (job / 10000) % 10 >= 1:             # <<<<<<<<<<<<<<
 *         # Fit is a restart, make sure work and iwork are input
 *         if work is None or iwork is None:
 */
  __pyx_t_12 = (__Pyx_mod_long(__Pyx_div_long(__pyx_v_job, 10000), 10) >= 1);
  if (__pyx_t_12) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":563
 *     if (job / 10000) % 10 >= 1:
 *         # Fit is a restart, make sure work and iwork are input
 *         if work is None or iwork is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("need to input work and iwork arrays to restart")
 * 
 */
    __pyx_t_12 = (__pyx_v_work == nullptr);
    if (!__pyx_t_12) {
      __pyx_t_3 = (__pyx_v_iwork == nullptr);
      __pyx_t_4 = __pyx_t_3;
    } else {
      __pyx_t_4 = __pyx_t_12;
    }
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":564
 *         # Fit is a restart, make sure work and iwork are input
 *         if work is None or iwork is None:
 *             raise ValueError("need to input work and iwork arrays to restart")             # <<<<<<<<<<<<<<
 * 
 *     if (job / 1000) % 10 >= 1:
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_9 = __site_call1_564_28->Target(__site_call1_564_28, __pyx_context, __pyx_t_10, ((System::Object^)"need to input work and iwork arrays to restart"));
      __pyx_t_10 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
      __pyx_t_9 = nullptr;
      goto __pyx_L45;
    }
    __pyx_L45:;
    goto __pyx_L44;
  }
  __pyx_L44:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":566
 *             raise ValueError("need to input work and iwork arrays to restart")
 * 
 *     if (job / 1000) % 10 >= 1:             # <<<<<<<<<<<<<<
 *         # delta should be supplied, make sure the user does
 *         if work is None:
 */
  __pyx_t_4 = (__Pyx_mod_long(__Pyx_div_long(__pyx_v_job, 1000), 10) >= 1);
  if (__pyx_t_4) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":568
 *     if (job / 1000) % 10 >= 1:
 *         # delta should be supplied, make sure the user does
 *         if work is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("need to input work array for delta initialization")
 * 
 */
    __pyx_t_4 = (__pyx_v_work == nullptr);
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":569
 *         # delta should be supplied, make sure the user does
 *         if work is None:
 *             raise ValueError("need to input work array for delta initialization")             # <<<<<<<<<<<<<<
 * 
 *     if work is not None:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_569_28->Target(__site_call1_569_28, __pyx_context, __pyx_t_9, ((System::Object^)"need to input work array for delta initialization"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
      goto __pyx_L47;
    }
    __pyx_L47:;
    goto __pyx_L46;
  }
  __pyx_L46:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":571
 *             raise ValueError("need to input work array for delta initialization")
 * 
 *     if work is not None:             # <<<<<<<<<<<<<<
 *         work = PyArray_CopyFromObject(work, np.double, 1, 1)
 *         if work is None:
 */
  __pyx_t_4 = (__pyx_v_work != nullptr);
  if (__pyx_t_4) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":572
 * 
 *     if work is not None:
 *         work = PyArray_CopyFromObject(work, np.double, 1, 1)             # <<<<<<<<<<<<<<
 *         if work is None:
 *             raise ValueError("could not convert work to a suitable array")
 */
    __pyx_t_10 = __pyx_v_np;
    __pyx_t_9 = __site_get_double_572_46->Target(__site_get_double_572_46, __pyx_t_10, __pyx_context);
    __pyx_t_10 = nullptr;
    __pyx_t_10 = PyArray_CopyFromObject(__pyx_v_work, __pyx_t_9, __pyx_int_1, __pyx_int_1); 
    __pyx_t_9 = nullptr;
    __pyx_v_work = __pyx_t_10;
    __pyx_t_10 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":573
 *     if work is not None:
 *         work = PyArray_CopyFromObject(work, np.double, 1, 1)
 *         if work is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert work to a suitable array")
 * 
 */
    __pyx_t_4 = (__pyx_v_work == nullptr);
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":574
 *         work = PyArray_CopyFromObject(work, np.double, 1, 1)
 *         if work is None:
 *             raise ValueError("could not convert work to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *     if work.dim[0] < lwork:
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_9 = __site_call1_574_28->Target(__site_call1_574_28, __pyx_context, __pyx_t_10, ((System::Object^)"could not convert work to a suitable array"));
      __pyx_t_10 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
      __pyx_t_9 = nullptr;
      goto __pyx_L49;
    }
    __pyx_L49:;
    goto __pyx_L48;
  }
  __pyx_L48:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":576
 *             raise ValueError("could not convert work to a suitable array")
 * 
 *     if work.dim[0] < lwork:             # <<<<<<<<<<<<<<
 *         raise ValueError("work is too small")
 * 
 */
  __pyx_t_9 = __site_get_dim_576_11->Target(__site_get_dim_576_11, __pyx_v_work, __pyx_context);
  __pyx_t_10 = __site_getindex_576_15->Target(__site_getindex_576_15, __pyx_t_9, ((System::Object^)0));
  __pyx_t_9 = nullptr;
  __pyx_t_9 = __pyx_v_lwork;
  __pyx_t_20 = __site_op_lt_576_19->Target(__site_op_lt_576_19, __pyx_t_10, __pyx_t_9);
  __pyx_t_10 = nullptr;
  __pyx_t_9 = nullptr;
  __pyx_t_4 = __site_istrue_576_19->Target(__site_istrue_576_19, __pyx_t_20);
  __pyx_t_20 = nullptr;
  if (__pyx_t_4) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":577
 * 
 *     if work.dim[0] < lwork:
 *         raise ValueError("work is too small")             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
    __pyx_t_20 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_9 = __site_call1_577_24->Target(__site_call1_577_24, __pyx_context, __pyx_t_20, ((System::Object^)"work is too small"));
    __pyx_t_20 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_9, nullptr, nullptr);
    __pyx_t_9 = nullptr;
    goto __pyx_L50;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":580
 * 
 *     else:
 *         dim1[0] = lwork             # <<<<<<<<<<<<<<
 *         work = PyArray_Empty(1, &dim1[0], np.double, False)
 * 
 */
    (__pyx_v_dim1[0]) = __pyx_v_lwork;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":581
 *     else:
 *         dim1[0] = lwork
 *         work = PyArray_Empty(1, &dim1[0], np.double, False)             # <<<<<<<<<<<<<<
 * 
 *     if iwork is not None:
 */
    __pyx_t_9 = __pyx_v_np;
    __pyx_t_20 = __site_get_double_581_44->Target(__site_get_double_581_44, __pyx_t_9, __pyx_context);
    __pyx_t_9 = nullptr;
    if (__pyx_t_20 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_20) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_9 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_20), 0); 
    __pyx_t_20 = nullptr;
    __pyx_v_work = __pyx_t_9;
    __pyx_t_9 = nullptr;
  }
  __pyx_L50:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":583
 *         work = PyArray_Empty(1, &dim1[0], np.double, False)
 * 
 *     if iwork is not None:             # <<<<<<<<<<<<<<
 *         iwork = PyArray_CopyFromObject(iwork, np.int, 1, 1)
 *         if iwork is None:
 */
  __pyx_t_4 = (__pyx_v_iwork != nullptr);
  if (__pyx_t_4) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":584
 * 
 *     if iwork is not None:
 *         iwork = PyArray_CopyFromObject(iwork, np.int, 1, 1)             # <<<<<<<<<<<<<<
 *         if iwork is None:
 *             raise ValueError("could not convert iwork to a suitable array")
 */
    __pyx_t_9 = __pyx_v_np;
    __pyx_t_20 = __site_get_int_584_48->Target(__site_get_int_584_48, __pyx_t_9, __pyx_context);
    __pyx_t_9 = nullptr;
    __pyx_t_9 = PyArray_CopyFromObject(__pyx_v_iwork, __pyx_t_20, __pyx_int_1, __pyx_int_1); 
    __pyx_t_20 = nullptr;
    __pyx_v_iwork = __pyx_t_9;
    __pyx_t_9 = nullptr;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":585
 *     if iwork is not None:
 *         iwork = PyArray_CopyFromObject(iwork, np.int, 1, 1)
 *         if iwork is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("could not convert iwork to a suitable array")
 * 
 */
    __pyx_t_4 = (__pyx_v_iwork == nullptr);
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":586
 *         iwork = PyArray_CopyFromObject(iwork, np.int, 1, 1)
 *         if iwork is None:
 *             raise ValueError("could not convert iwork to a suitable array")             # <<<<<<<<<<<<<<
 * 
 *         if iwork.dim[0] < liwork:
 */
      __pyx_t_9 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_20 = __site_call1_586_28->Target(__site_call1_586_28, __pyx_context, __pyx_t_9, ((System::Object^)"could not convert iwork to a suitable array"));
      __pyx_t_9 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_20, nullptr, nullptr);
      __pyx_t_20 = nullptr;
      goto __pyx_L52;
    }
    __pyx_L52:;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":588
 *             raise ValueError("could not convert iwork to a suitable array")
 * 
 *         if iwork.dim[0] < liwork:             # <<<<<<<<<<<<<<
 *             raise ValueError("iwork is too small")
 *     else:
 */
    __pyx_t_20 = __site_get_dim_588_16->Target(__site_get_dim_588_16, __pyx_v_iwork, __pyx_context);
    __pyx_t_9 = __site_getindex_588_20->Target(__site_getindex_588_20, __pyx_t_20, ((System::Object^)0));
    __pyx_t_20 = nullptr;
    __pyx_t_20 = __pyx_v_liwork;
    __pyx_t_10 = __site_op_lt_588_24->Target(__site_op_lt_588_24, __pyx_t_9, __pyx_t_20);
    __pyx_t_9 = nullptr;
    __pyx_t_20 = nullptr;
    __pyx_t_4 = __site_istrue_588_24->Target(__site_istrue_588_24, __pyx_t_10);
    __pyx_t_10 = nullptr;
    if (__pyx_t_4) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":589
 * 
 *         if iwork.dim[0] < liwork:
 *             raise ValueError("iwork is too small")             # <<<<<<<<<<<<<<
 *     else:
 *         dim1[0] = liwork
 */
      __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_20 = __site_call1_589_28->Target(__site_call1_589_28, __pyx_context, __pyx_t_10, ((System::Object^)"iwork is too small"));
      __pyx_t_10 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_20, nullptr, nullptr);
      __pyx_t_20 = nullptr;
      goto __pyx_L53;
    }
    __pyx_L53:;
    goto __pyx_L51;
  }
  /*else*/ {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":591
 *             raise ValueError("iwork is too small")
 *     else:
 *         dim1[0] = liwork             # <<<<<<<<<<<<<<
 *         iwork = PyArray_Empty(1, &dim1[0], np.int, False)
 * 
 */
    (__pyx_v_dim1[0]) = __pyx_v_liwork;

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":592
 *     else:
 *         dim1[0] = liwork
 *         iwork = PyArray_Empty(1, &dim1[0], np.int, False)             # <<<<<<<<<<<<<<
 * 
 *     # check if what job requests can be done with what the user has input
 */
    __pyx_t_20 = __pyx_v_np;
    __pyx_t_10 = __site_get_int_592_45->Target(__site_get_int_592_45, __pyx_t_20, __pyx_context);
    __pyx_t_20 = nullptr;
    if (__pyx_t_10 != nullptr && dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_10) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_20 = PyArray_Empty(1, ((__pyx_t_5numpy_npy_intp *)(&(__pyx_v_dim1[0]))), ((NumpyDotNet::dtype^)__pyx_t_10), 0); 
    __pyx_t_10 = nullptr;
    __pyx_v_iwork = __pyx_t_20;
    __pyx_t_20 = nullptr;
  }
  __pyx_L51:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":596
 *     # check if what job requests can be done with what the user has input
 *     # into the function.
 *     if (job / 10) % 10 >= 2:             # <<<<<<<<<<<<<<
 *         # derivatives are supported to be supplied.
 *         if fjacb is None or fjacd is None:
 */
  __pyx_t_4 = (__Pyx_mod_long(__Pyx_div_long(__pyx_v_job, 10), 10) >= 2);
  if (__pyx_t_4) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":598
 *     if (job / 10) % 10 >= 2:
 *         # derivatives are supported to be supplied.
 *         if fjacb is None or fjacd is None:             # <<<<<<<<<<<<<<
 *             raise ValueError("need fjacb and fjacd to calculate derivatives")
 * 
 */
    __pyx_t_4 = (__pyx_v_fjacb == nullptr);
    if (!__pyx_t_4) {
      __pyx_t_12 = (__pyx_v_fjacd == nullptr);
      __pyx_t_3 = __pyx_t_12;
    } else {
      __pyx_t_3 = __pyx_t_4;
    }
    if (__pyx_t_3) {

      /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":599
 *         # derivatives are supported to be supplied.
 *         if fjacb is None or fjacd is None:
 *             raise ValueError("need fjacb and fjacd to calculate derivatives")             # <<<<<<<<<<<<<<
 * 
 *     # Setup the global data for the callback.
 */
      __pyx_t_20 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_10 = __site_call1_599_28->Target(__site_call1_599_28, __pyx_context, __pyx_t_20, ((System::Object^)"need fjacb and fjacd to calculate derivatives"));
      __pyx_t_20 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_10, nullptr, nullptr);
      __pyx_t_10 = nullptr;
      goto __pyx_L55;
    }
    __pyx_L55:;
    goto __pyx_L54;
  }
  __pyx_L54:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":602
 * 
 *     # Setup the global data for the callback.
 *     odr_global.fcn = PyArray_ARRAY(fcn)             # <<<<<<<<<<<<<<
 *     Npy_INCREF(odr_global.fcn)
 *     odr_global.fjacb = PyArray_ARRAY(fjacb)
 */
  if (__pyx_v_fcn != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_fcn) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  odr_global.fcn = PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_fcn));

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":603
 *     # Setup the global data for the callback.
 *     odr_global.fcn = PyArray_ARRAY(fcn)
 *     Npy_INCREF(odr_global.fcn)             # <<<<<<<<<<<<<<
 *     odr_global.fjacb = PyArray_ARRAY(fjacb)
 *     Npy_INCREF(odr_global.fjacb)
 */
  Npy_INCREF(odr_global.fcn);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":604
 *     odr_global.fcn = PyArray_ARRAY(fcn)
 *     Npy_INCREF(odr_global.fcn)
 *     odr_global.fjacb = PyArray_ARRAY(fjacb)             # <<<<<<<<<<<<<<
 *     Npy_INCREF(odr_global.fjacb)
 *     odr_global.fjacd = PyArray_ARRAY(fjacd)
 */
  if (__pyx_v_fjacb != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_fjacb) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  odr_global.fjacb = PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_fjacb));

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":605
 *     Npy_INCREF(odr_global.fcn)
 *     odr_global.fjacb = PyArray_ARRAY(fjacb)
 *     Npy_INCREF(odr_global.fjacb)             # <<<<<<<<<<<<<<
 *     odr_global.fjacd = PyArray_ARRAY(fjacd)
 *     Npy_INCREF(odr_global.fjacd)
 */
  Npy_INCREF(odr_global.fjacb);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":606
 *     odr_global.fjacb = PyArray_ARRAY(fjacb)
 *     Npy_INCREF(odr_global.fjacb)
 *     odr_global.fjacd = PyArray_ARRAY(fjacd)             # <<<<<<<<<<<<<<
 *     Npy_INCREF(odr_global.fjacd)
 *     odr_global.pyBeta = PyArray_ARRAY(beta)
 */
  if (__pyx_v_fjacd != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_fjacd) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  odr_global.fjacd = PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_fjacd));

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":607
 *     Npy_INCREF(odr_global.fjacb)
 *     odr_global.fjacd = PyArray_ARRAY(fjacd)
 *     Npy_INCREF(odr_global.fjacd)             # <<<<<<<<<<<<<<
 *     odr_global.pyBeta = PyArray_ARRAY(beta)
 *     Npy_INCREF(odr_global.pyBeta)
 */
  Npy_INCREF(odr_global.fjacd);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":608
 *     odr_global.fjacd = PyArray_ARRAY(fjacd)
 *     Npy_INCREF(odr_global.fjacd)
 *     odr_global.pyBeta = PyArray_ARRAY(beta)             # <<<<<<<<<<<<<<
 *     Npy_INCREF(odr_global.pyBeta)
 *     odr_global.extra_args = PyArray_ARRAY(extra_args)
 */
  if (__pyx_v_beta != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_beta) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  odr_global.pyBeta = PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_beta));

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":609
 *     Npy_INCREF(odr_global.fjacd)
 *     odr_global.pyBeta = PyArray_ARRAY(beta)
 *     Npy_INCREF(odr_global.pyBeta)             # <<<<<<<<<<<<<<
 *     odr_global.extra_args = PyArray_ARRAY(extra_args)
 *     Npy_INCREF(odr_global.extra_args)
 */
  Npy_INCREF(odr_global.pyBeta);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":610
 *     odr_global.pyBeta = PyArray_ARRAY(beta)
 *     Npy_INCREF(odr_global.pyBeta)
 *     odr_global.extra_args = PyArray_ARRAY(extra_args)             # <<<<<<<<<<<<<<
 *     Npy_INCREF(odr_global.extra_args)
 * 
 */
  if (__pyx_v_extra_args != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_extra_args) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  odr_global.extra_args = PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_extra_args));

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":611
 *     Npy_INCREF(odr_global.pyBeta)
 *     odr_global.extra_args = PyArray_ARRAY(extra_args)
 *     Npy_INCREF(odr_global.extra_args)             # <<<<<<<<<<<<<<
 * 
 *     dodrc(fcn_callback, &n, &m, &np, &nq, <double *>PyArray_DATA(beta),
 */
  Npy_INCREF(odr_global.extra_args);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":613
 *     Npy_INCREF(odr_global.extra_args)
 * 
 *     dodrc(fcn_callback, &n, &m, &np, &nq, <double *>PyArray_DATA(beta),             # <<<<<<<<<<<<<<
 *         <double *>PyArray_DATA(y), &ldy, <double *>PyArray_DATA(x), &ldx,
 *         <double *>PyArray_DATA(we), &ldwe, &ld2we,
 */
  if (__pyx_v_beta != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_beta) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":614
 * 
 *     dodrc(fcn_callback, &n, &m, &np, &nq, <double *>PyArray_DATA(beta),
 *         <double *>PyArray_DATA(y), &ldy, <double *>PyArray_DATA(x), &ldx,             # <<<<<<<<<<<<<<
 *         <double *>PyArray_DATA(we), &ldwe, &ld2we,
 *         <double *>PyArray_DATA(wd), &ldwd, &ld2wd,
 */
  if (__pyx_v_y != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_y) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_x != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_x) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":615
 *     dodrc(fcn_callback, &n, &m, &np, &nq, <double *>PyArray_DATA(beta),
 *         <double *>PyArray_DATA(y), &ldy, <double *>PyArray_DATA(x), &ldx,
 *         <double *>PyArray_DATA(we), &ldwe, &ld2we,             # <<<<<<<<<<<<<<
 *         <double *>PyArray_DATA(wd), &ldwd, &ld2wd,
 *         <int *>PyArray_DATA(ifixb), <int *>PyArray_DATA(ifixx), &ldifx,
 */
  if (__pyx_v_we != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_we) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":616
 *         <double *>PyArray_DATA(y), &ldy, <double *>PyArray_DATA(x), &ldx,
 *         <double *>PyArray_DATA(we), &ldwe, &ld2we,
 *         <double *>PyArray_DATA(wd), &ldwd, &ld2wd,             # <<<<<<<<<<<<<<
 *         <int *>PyArray_DATA(ifixb), <int *>PyArray_DATA(ifixx), &ldifx,
 *         &job, &ndigit, &taufac, &sstol, &partol, &maxit,
 */
  if (__pyx_v_wd != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_wd) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":617
 *         <double *>PyArray_DATA(we), &ldwe, &ld2we,
 *         <double *>PyArray_DATA(wd), &ldwd, &ld2wd,
 *         <int *>PyArray_DATA(ifixb), <int *>PyArray_DATA(ifixx), &ldifx,             # <<<<<<<<<<<<<<
 *         &job, &ndigit, &taufac, &sstol, &partol, &maxit,
 *         &iprint, &lunerr, &lunrpt,
 */
  if (__pyx_v_ifixb != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ifixb) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_ifixx != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ifixx) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":620
 *         &job, &ndigit, &taufac, &sstol, &partol, &maxit,
 *         &iprint, &lunerr, &lunrpt,
 *         <double *>PyArray_DATA(stpb), <double *>PyArray_DATA(stpd), &ldstpd,             # <<<<<<<<<<<<<<
 *         <double *>PyArray_DATA(sclb), <double *>PyArray_DATA(scld), &ldscld,
 *         <double *>PyArray_DATA(work), &lwork, <int *>PyArray_DATA(iwork), &liwork,
 */
  if (__pyx_v_stpb != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_stpb) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_stpd != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_stpd) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":621
 *         &iprint, &lunerr, &lunrpt,
 *         <double *>PyArray_DATA(stpb), <double *>PyArray_DATA(stpd), &ldstpd,
 *         <double *>PyArray_DATA(sclb), <double *>PyArray_DATA(scld), &ldscld,             # <<<<<<<<<<<<<<
 *         <double *>PyArray_DATA(work), &lwork, <int *>PyArray_DATA(iwork), &liwork,
 *         &info);
 */
  if (__pyx_v_sclb != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_sclb) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_scld != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_scld) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":622
 *         <double *>PyArray_DATA(stpb), <double *>PyArray_DATA(stpd), &ldstpd,
 *         <double *>PyArray_DATA(sclb), <double *>PyArray_DATA(scld), &ldscld,
 *         <double *>PyArray_DATA(work), &lwork, <int *>PyArray_DATA(iwork), &liwork,             # <<<<<<<<<<<<<<
 *         &info);
 * 
 */
  if (__pyx_v_work != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_work) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_iwork != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_iwork) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":623
 *         <double *>PyArray_DATA(sclb), <double *>PyArray_DATA(scld), &ldscld,
 *         <double *>PyArray_DATA(work), &lwork, <int *>PyArray_DATA(iwork), &liwork,
 *         &info);             # <<<<<<<<<<<<<<
 * 
 *     result = gen_output(n, m, np, nq, ldwe, ld2we,
 */
  F_FUNC(dodrc,DODRC)(__pyx_function_pointer_fcn_callback, (&__pyx_v_n), (&__pyx_v_m), (&__pyx_v_np), (&__pyx_v_nq), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_beta))), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_y))), (&__pyx_v_ldy), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_x))), (&__pyx_v_ldx), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_we))), (&__pyx_v_ldwe), (&__pyx_v_ld2we), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_wd))), (&__pyx_v_ldwd), (&__pyx_v_ld2wd), ((int *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ifixb))), ((int *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_ifixx))), (&__pyx_v_ldifx), (&__pyx_v_job), (&__pyx_v_ndigit), (&__pyx_v_taufac), (&__pyx_v_sstol), (&__pyx_v_partol), (&__pyx_v_maxit), (&__pyx_v_iprint), (&__pyx_v_lunerr), (&__pyx_v_lunrpt), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_stpb))), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_stpd))), (&__pyx_v_ldstpd), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_sclb))), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_scld))), (&__pyx_v_ldscld), ((double *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_work))), (&__pyx_v_lwork), ((int *)PyArray_DATA(((NumpyDotNet::ndarray^)__pyx_v_iwork))), (&__pyx_v_liwork), (&__pyx_v_info));

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":626
 * 
 *     result = gen_output(n, m, np, nq, ldwe, ld2we,
 *         PyArray_ARRAY(beta), PyArray_ARRAY(work),             # <<<<<<<<<<<<<<
 *         PyArray_ARRAY(iwork), isodr, info, full_output);
 * 
 */
  if (__pyx_v_beta != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_beta) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  if (__pyx_v_work != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_work) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":627
 *     result = gen_output(n, m, np, nq, ldwe, ld2we,
 *         PyArray_ARRAY(beta), PyArray_ARRAY(work),
 *         PyArray_ARRAY(iwork), isodr, info, full_output);             # <<<<<<<<<<<<<<
 * 
 *     Npy_DECREF(odr_global.fcn)
 */
  if (__pyx_v_iwork != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_iwork) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_t_10 = gen_output(__pyx_v_n, __pyx_v_m, __pyx_v_np, __pyx_v_nq, __pyx_v_ldwe, __pyx_v_ld2we, PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_beta)), PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_work)), PyArray_ARRAY(((NumpyDotNet::ndarray^)__pyx_v_iwork)), __pyx_v_isodr, __pyx_v_info, __pyx_v_full_output); 
  __pyx_v_result = __pyx_t_10;
  __pyx_t_10 = nullptr;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":629
 *         PyArray_ARRAY(iwork), isodr, info, full_output);
 * 
 *     Npy_DECREF(odr_global.fcn)             # <<<<<<<<<<<<<<
 *     odr_global.fcn = NULL
 *     Npy_DECREF(odr_global.fjacb)
 */
  Npy_DECREF(odr_global.fcn);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":630
 * 
 *     Npy_DECREF(odr_global.fcn)
 *     odr_global.fcn = NULL             # <<<<<<<<<<<<<<
 *     Npy_DECREF(odr_global.fjacb)
 *     odr_global.fjacb = NULL
 */
  odr_global.fcn = NULL;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":631
 *     Npy_DECREF(odr_global.fcn)
 *     odr_global.fcn = NULL
 *     Npy_DECREF(odr_global.fjacb)             # <<<<<<<<<<<<<<
 *     odr_global.fjacb = NULL
 *     Npy_DECREF(odr_global.fjacd)
 */
  Npy_DECREF(odr_global.fjacb);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":632
 *     odr_global.fcn = NULL
 *     Npy_DECREF(odr_global.fjacb)
 *     odr_global.fjacb = NULL             # <<<<<<<<<<<<<<
 *     Npy_DECREF(odr_global.fjacd)
 *     odr_global.fjacd = NULL
 */
  odr_global.fjacb = NULL;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":633
 *     Npy_DECREF(odr_global.fjacb)
 *     odr_global.fjacb = NULL
 *     Npy_DECREF(odr_global.fjacd)             # <<<<<<<<<<<<<<
 *     odr_global.fjacd = NULL
 *     Npy_DECREF(odr_global.pyBeta)
 */
  Npy_DECREF(odr_global.fjacd);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":634
 *     odr_global.fjacb = NULL
 *     Npy_DECREF(odr_global.fjacd)
 *     odr_global.fjacd = NULL             # <<<<<<<<<<<<<<
 *     Npy_DECREF(odr_global.pyBeta)
 *     odr_global.pyBeta = NULL
 */
  odr_global.fjacd = NULL;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":635
 *     Npy_DECREF(odr_global.fjacd)
 *     odr_global.fjacd = NULL
 *     Npy_DECREF(odr_global.pyBeta)             # <<<<<<<<<<<<<<
 *     odr_global.pyBeta = NULL
 *     Npy_DECREF(odr_global.extra_args)
 */
  Npy_DECREF(odr_global.pyBeta);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":636
 *     odr_global.fjacd = NULL
 *     Npy_DECREF(odr_global.pyBeta)
 *     odr_global.pyBeta = NULL             # <<<<<<<<<<<<<<
 *     Npy_DECREF(odr_global.extra_args)
 *     odr_global.extra_args = NULL
 */
  odr_global.pyBeta = NULL;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":637
 *     Npy_DECREF(odr_global.pyBeta)
 *     odr_global.pyBeta = NULL
 *     Npy_DECREF(odr_global.extra_args)             # <<<<<<<<<<<<<<
 *     odr_global.extra_args = NULL
 * 
 */
  Npy_DECREF(odr_global.extra_args);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":638
 *     odr_global.pyBeta = NULL
 *     Npy_DECREF(odr_global.extra_args)
 *     odr_global.extra_args = NULL             # <<<<<<<<<<<<<<
 * 
 *     if result == None:
 */
  odr_global.extra_args = NULL;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":640
 *     odr_global.extra_args = NULL
 * 
 *     if result == None:             # <<<<<<<<<<<<<<
 *         raise RuntimeError("could not generate output")
 *     if lunerr != -1:
 */
  __pyx_t_10 = __site_op_eq_640_14->Target(__site_op_eq_640_14, __pyx_v_result, nullptr);
  __pyx_t_3 = __site_istrue_640_14->Target(__site_istrue_640_14, __pyx_t_10);
  __pyx_t_10 = nullptr;
  if (__pyx_t_3) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":641
 * 
 *     if result == None:
 *         raise RuntimeError("could not generate output")             # <<<<<<<<<<<<<<
 *     if lunerr != -1:
 *         dlunc(&lunerr)
 */
    __pyx_t_10 = PythonOps::GetGlobal(__pyx_context, "RuntimeError");
    __pyx_t_20 = __site_call1_641_26->Target(__site_call1_641_26, __pyx_context, __pyx_t_10, ((System::Object^)"could not generate output"));
    __pyx_t_10 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_20, nullptr, nullptr);
    __pyx_t_20 = nullptr;
    goto __pyx_L56;
  }
  __pyx_L56:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":642
 *     if result == None:
 *         raise RuntimeError("could not generate output")
 *     if lunerr != -1:             # <<<<<<<<<<<<<<
 *         dlunc(&lunerr)
 *     if lunrpt != -1:
 */
  __pyx_t_3 = (__pyx_v_lunerr != -1);
  if (__pyx_t_3) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":643
 *         raise RuntimeError("could not generate output")
 *     if lunerr != -1:
 *         dlunc(&lunerr)             # <<<<<<<<<<<<<<
 *     if lunrpt != -1:
 *         dlunc(&lunrpt)
 */
    F_FUNC(dlunc, DLUNC)((&__pyx_v_lunerr));
    goto __pyx_L57;
  }
  __pyx_L57:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":644
 *     if lunerr != -1:
 *         dlunc(&lunerr)
 *     if lunrpt != -1:             # <<<<<<<<<<<<<<
 *         dlunc(&lunrpt)
 * 
 */
  __pyx_t_3 = (__pyx_v_lunrpt != -1);
  if (__pyx_t_3) {

    /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":645
 *         dlunc(&lunerr)
 *     if lunrpt != -1:
 *         dlunc(&lunrpt)             # <<<<<<<<<<<<<<
 * 
 *     return result
 */
    F_FUNC(dlunc, DLUNC)((&__pyx_v_lunrpt));
    goto __pyx_L58;
  }
  __pyx_L58:;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":647
 *         dlunc(&lunrpt)
 * 
 *     return result             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_result;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":237
 * ctypedef npy_cdouble     complex_t
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":240
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

/* "../cython/include/numpy.pxd":242
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

  /* "../cython/include/numpy.pxd":243
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":245
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include/numpy.pxd":246
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_246_18->Target(__site_get_append_246_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_246_25->Target(__site_call1_246_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include/numpy.pxd":247
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include/numpy.pxd":248
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):
 */
  __pyx_t_5 = __site_get_zeros_248_16->Target(__site_get_zeros_248_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_248_22->Target(__site_call3_248_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include/numpy.pxd":250
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

  /* "../cython/include/numpy.pxd":251
 * 
 * cdef inline object PyArray_EMPTY(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":253
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include/numpy.pxd":254
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_254_18->Target(__site_get_append_254_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_254_25->Target(__site_call1_254_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include/numpy.pxd":255
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include/numpy.pxd":256
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.empty(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Empty(int nd, npy_intp *dims, dtype descr, int fortran):
 */
  __pyx_t_5 = __site_get_empty_256_16->Target(__site_get_empty_256_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_256_22->Target(__site_call3_256_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "../cython/include/numpy.pxd":258
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

  /* "../cython/include/numpy.pxd":259
 * 
 * cdef inline object PyArray_Empty(int nd, npy_intp *dims, dtype descr, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(nd):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":261
 *     shape_list = []
 *     cdef int i
 *     for i in range(nd):             # <<<<<<<<<<<<<<
 *         shape_list.append(dims[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_nd;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "../cython/include/numpy.pxd":262
 *     cdef int i
 *     for i in range(nd):
 *         shape_list.append(dims[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_262_18->Target(__site_get_append_262_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_dims[__pyx_v_i]);
    __pyx_t_5 = __site_call1_262_25->Target(__site_call1_262_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "../cython/include/numpy.pxd":263
 *     for i in range(nd):
 *         shape_list.append(dims[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "../cython/include/numpy.pxd":264
 *         shape_list.append(dims[i])
 *     import numpy
 *     return numpy.empty(shape_list, descr, 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_5 = __site_get_empty_264_16->Target(__site_get_empty_264_16, __pyx_v_numpy, __pyx_context);
  if (__pyx_v_fortran) {
    __pyx_t_4 = "F";
  } else {
    __pyx_t_4 = "C";
  }
  __pyx_t_1 = __site_call3_264_22->Target(__site_call3_264_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), ((System::Object^)__pyx_v_descr), ((System::Object^)__pyx_t_4));
  __pyx_t_5 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":267
 * 
 * 
 * cdef inline object PyArray_New(void *subtype, int nd, npy_intp *dims, int type_num, npy_intp *strides, void *data, int itemsize, int flags, void *obj):             # <<<<<<<<<<<<<<
 *     assert subtype == NULL
 *     assert obj == NULL
 */

static CYTHON_INLINE System::Object^ PyArray_New(void *__pyx_v_subtype, int __pyx_v_nd, __pyx_t_5numpy_npy_intp *__pyx_v_dims, int __pyx_v_type_num, __pyx_t_5numpy_npy_intp *__pyx_v_strides, void *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags, void *__pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":268
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

  /* "../cython/include/numpy.pxd":269
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

  /* "../cython/include/numpy.pxd":270
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

/* "../cython/include/numpy.pxd":272
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

  /* "../cython/include/numpy.pxd":274
 * cdef inline bint PyArray_CHKFLAGS(ndarray n, int flags):
 *      # XXX "long long" is wrong type
 *     return  NpyArray_CHKFLAGS(<NpyArray*> <long long>n.Array, flags)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void* PyArray_DATA(ndarray n) nogil:
 */
  __pyx_t_1 = __site_get_Array_274_54->Target(__site_get_Array_274_54, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_274_54->Target(__site_cvt_cvt_PY_LONG_LONG_274_54, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_CHKFLAGS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)), __pyx_v_flags);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":276
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

  /* "../cython/include/numpy.pxd":278
 * cdef inline void* PyArray_DATA(ndarray n) nogil:
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n) nogil:
 */
  __pyx_t_1 = __site_get_Array_278_49->Target(__site_get_Array_278_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_278_49->Target(__site_cvt_cvt_PY_LONG_LONG_278_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DATA(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":280
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

  /* "../cython/include/numpy.pxd":282
 * cdef inline intp_t* PyArray_DIMS(ndarray n) nogil:
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t PyArray_DIM(ndarray n, int dim):
 */
  __pyx_t_1 = __site_get_Array_282_49->Target(__site_get_Array_282_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_282_49->Target(__site_cvt_cvt_PY_LONG_LONG_282_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIMS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":284
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
 * 
 * cdef inline intp_t PyArray_DIM(ndarray n, int dim):             # <<<<<<<<<<<<<<
 *     return NpyArray_DIM(<NpyArray*><long long>n.Array, dim)
 * 
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_DIM(NumpyDotNet::ndarray^ __pyx_v_n, int __pyx_v_dim) {
  __pyx_t_5numpy_intp_t __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include/numpy.pxd":285
 * 
 * cdef inline intp_t PyArray_DIM(ndarray n, int dim):
 *     return NpyArray_DIM(<NpyArray*><long long>n.Array, dim)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_285_47->Target(__site_get_Array_285_47, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_285_47->Target(__site_cvt_cvt_PY_LONG_LONG_285_47, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIM(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)), __pyx_v_dim);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":287
 *     return NpyArray_DIM(<NpyArray*><long long>n.Array, dim)
 * 
 * cdef inline intp_t PyArray_SIZE(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE __pyx_t_5numpy_intp_t PyArray_SIZE(NumpyDotNet::ndarray^ __pyx_v_n) {
  __pyx_t_5numpy_intp_t __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include/numpy.pxd":289
 * cdef inline intp_t PyArray_SIZE(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_SIZE(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline NpyArray *PyArray_ARRAY(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_289_49->Target(__site_get_Array_289_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_289_49->Target(__site_cvt_cvt_PY_LONG_LONG_289_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_SIZE(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":291
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

  /* "../cython/include/numpy.pxd":293
 * cdef inline NpyArray *PyArray_ARRAY(ndarray n):
 *     # XXX "long long" is wrong type
 *     return <NpyArray*> <long long>n.Array             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = __site_get_Array_293_35->Target(__site_get_Array_293_35, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_293_35->Target(__site_cvt_cvt_PY_LONG_LONG_293_35, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = ((NpyArray *)((PY_LONG_LONG)__pyx_t_2));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":296
 * 
 * 
 * cdef inline object PyArray_Return(ndarray arr):             # <<<<<<<<<<<<<<
 *     return ndarray.ArrayReturn(arr)
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_Return(NumpyDotNet::ndarray^ __pyx_v_arr) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;

  /* "../cython/include/numpy.pxd":297
 * 
 * cdef inline object PyArray_Return(ndarray arr):
 *     return ndarray.ArrayReturn(arr)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = __site_get_ArrayReturn_297_18->Target(__site_get_ArrayReturn_297_18, ((System::Object^)((System::Object^)__pyx_ptype_5numpy_ndarray)), __pyx_context);
  __pyx_t_2 = __site_call1_297_30->Target(__site_call1_297_30, __pyx_context, __pyx_t_1, ((System::Object^)__pyx_v_arr));
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":300
 * 
 * 
 * cdef inline int PyDataType_TYPE_NUM(dtype t):             # <<<<<<<<<<<<<<
 *     return NpyDataType_TYPE_NUM(<NpyArray_Descr *><long long>t.Dtype)
 * 
 */

static CYTHON_INLINE int PyDataType_TYPE_NUM(NumpyDotNet::dtype^ __pyx_v_t) {
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "../cython/include/numpy.pxd":301
 * 
 * cdef inline int PyDataType_TYPE_NUM(dtype t):
 *     return NpyDataType_TYPE_NUM(<NpyArray_Descr *><long long>t.Dtype)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 */
  __pyx_t_1 = __site_get_Dtype_301_62->Target(__site_get_Dtype_301_62, ((System::Object^)__pyx_v_t), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt_PY_LONG_LONG_301_62->Target(__site_cvt_cvt_PY_LONG_LONG_301_62, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyDataType_TYPE_NUM(((NpyArray_Descr *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":303
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

  /* "../cython/include/numpy.pxd":304
 * 
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":305
 * cdef inline object PyArray_FromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":306
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.FromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = __site_get_NpyArray_306_22->Target(__site_get_NpyArray_306_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_FromAny_306_31->Target(__site_get_FromAny_306_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_306_39->Target(__site_call6_306_39, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":309
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

  /* "../cython/include/numpy.pxd":311
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

/* "../cython/include/numpy.pxd":314
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

  /* "../cython/include/numpy.pxd":315
 * 
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:             # <<<<<<<<<<<<<<
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 */
  __pyx_t_1 = (System::Object^)(long long)(NPY_ENSURECOPY);
  __pyx_t_2 = __site_op_and_315_13->Target(__site_op_and_315_13, __pyx_v_flags, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_315_13->Target(__site_istrue_315_13, __pyx_t_2);
  __pyx_t_2 = nullptr;
  if (__pyx_t_3) {

    /* "../cython/include/numpy.pxd":316
 * cdef inline object PyArray_FROMANY(m, type, min, max, flags):
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT             # <<<<<<<<<<<<<<
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)
 * 
 */
    __pyx_t_2 = (System::Object^)(long long)(NPY_DEFAULT);
    __pyx_t_1 = __site_op_ior_316_14->Target(__site_op_ior_316_14, __pyx_v_flags, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_v_flags = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "../cython/include/numpy.pxd":317
 *     if flags & NPY_ENSURECOPY:
 *         flags |= NPY_DEFAULT
 *     return PyArray_FromAny(m, Npy_INTERFACE_descr(NpyArray_DescrFromType(type)), min, max, flags, None)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 */
  __pyx_t_4 = __site_cvt_cvt_int_317_77->Target(__site_cvt_cvt_int_317_77, __pyx_v_type);
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

/* "../cython/include/numpy.pxd":319
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

  /* "../cython/include/numpy.pxd":320
 * 
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":321
 * cdef inline object PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, context):
 *     import clr
 *     import NumpyDotNet.NpyArray             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyArray", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":322
 *     import clr
 *     import NumpyDotNet.NpyArray
 *     return NumpyDotNet.NpyArray.CheckFromAny(op, newtype, min_depth, max_depth, flags, context)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_Check(obj):
 */
  __pyx_t_1 = __site_get_NpyArray_322_22->Target(__site_get_NpyArray_322_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_CheckFromAny_322_31->Target(__site_get_CheckFromAny_322_31, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_call6_322_44->Target(__site_call6_322_44, __pyx_context, __pyx_t_2, __pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_context);
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":324
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

  /* "../cython/include/numpy.pxd":325
 * 
 * cdef inline object PyArray_Check(obj):
 *     import numpy as np             # <<<<<<<<<<<<<<
 *     return isinstance(obj, np.ndarray)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_np = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":326
 * cdef inline object PyArray_Check(obj):
 *     import numpy as np
 *     return isinstance(obj, np.ndarray)             # <<<<<<<<<<<<<<
 * 
 * cdef inline object PyArray_NDIM(obj):
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = __site_get_ndarray_326_29->Target(__site_get_ndarray_326_29, __pyx_v_np, __pyx_context);
  __pyx_t_3 = __site_call2_326_21->Target(__site_call2_326_21, __pyx_context, __pyx_t_1, __pyx_v_obj, __pyx_t_2);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":328
 *     return isinstance(obj, np.ndarray)
 * 
 * cdef inline object PyArray_NDIM(obj):             # <<<<<<<<<<<<<<
 *     return obj.ndim
 * 
 */

static CYTHON_INLINE System::Object^ PyArray_NDIM(System::Object^ __pyx_v_obj) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":329
 * 
 * cdef inline object PyArray_NDIM(obj):
 *     return obj.ndim             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
 */
  __pyx_t_1 = __site_get_ndim_329_14->Target(__site_get_ndim_329_14, __pyx_v_obj, __pyx_context);
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":331
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
  __pyx_int_3 = 3;
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
  __site_get_itemsize_61_85 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "itemsize", false));
  __site_cvt_cvt_int_61_85 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_double_152_44 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_double_154_45 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_double_197_50 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_double_198_50 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_double_202_50 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_double_203_50 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_double_207_48 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_double_208_47 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_double_212_48 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_double_213_47 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_cvt_cvt_int_263_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_263_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_263_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_263_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_263_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_263_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_263_0_3 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_263_0_4 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_288_19 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_288_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_288_41 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_289_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_289_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_289_34 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_289_61 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_290_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_290_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_290_34 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_292_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_double_292_21 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_294_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_295_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_295_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_295_34 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_296_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_298_38 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_298_53 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_298_53 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call2_298_76 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_298_76 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_299_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_isSequenceType_300_38 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_300_53 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_300_53 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call2_300_76 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_300_76 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_301_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_iterator_303_4 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_call0_305_16 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_getindex_305_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_get_isSequenceType_306_41 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_306_56 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_306_56 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mod_307_52 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_307_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndarray_309_51 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndarray", false));
  __site_call2_309_42 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_309_42 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_310_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndarray_311_52 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndarray", false));
  __site_call2_311_43 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_311_43 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_312_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_double_316_40 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_call1_318_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_double_319_40 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_call1_321_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_shape_323_9 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_323_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_int_323_15 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_324_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_324_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_ne_324_9 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_324_9 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_325_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_326_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_326_25 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_326_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_326_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_326_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_int_326_13 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_330_16 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_330_16 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_double_334_41 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_double_335_40 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_call1_337_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_shape_338_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_338_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_int_338_19 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_341_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_341_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_341_20 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_341_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_341_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_int_341_8 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_double_342_46 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_call1_344_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_shape_345_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_345_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_cvt_int_345_19 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_double_350_42 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_setindex_351_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_isSequenceType_352_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_352_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_352_32 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_double_353_42 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_call1_355_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_357_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_357_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_357_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_360_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_360_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_360_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_360_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_360_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_360_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_360_42 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_365_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_365_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_365_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_365_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_365_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_365_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_370_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_370_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_370_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_370_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_370_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_370_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_375_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_375_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_375_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_375_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_375_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_375_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndum_380_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndum", false));
  __site_op_eq_380_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_380_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_380_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_380_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_380_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_385_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_388_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_double_388_23 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_get_double_392_46 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_setindex_393_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_call1_396_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_double_401_42 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_setindex_402_10 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_isSequenceType_403_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "isSequenceType", false));
  __site_call1_403_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_403_32 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_double_404_42 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_call1_406_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_408_13 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_408_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_408_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_411_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_411_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_411_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_411_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_411_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_411_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_411_42 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_416_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_416_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_416_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_416_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_416_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_416_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_421_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_421_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_421_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_421_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_421_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_421_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_426_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_426_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_426_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_426_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_426_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_426_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_431_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_431_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_431_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_431_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_431_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_431_39 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_435_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_438_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_double_438_23 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_get_double_442_46 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_setindex_443_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_call1_447_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_int_451_45 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int", false));
  __site_setindex_452_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_int_454_48 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int", false));
  __site_get_shape_455_33 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_455_39 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_ne_455_43 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_455_43 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_456_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_int_461_45 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int", false));
  __site_setindex_462_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_int_465_48 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int", false));
  __site_call1_467_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_469_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_469_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_469_22 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_469_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_469_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_469_46 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_469_46 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_471_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_471_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_471_24 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_471_38 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_471_44 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_471_48 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_471_48 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_473_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_473_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_473_24 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_473_38 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_473_45 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_473_45 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_476_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_481_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_481_35 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_485_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_int_485_35 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_double_489_44 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_setindex_490_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_double_492_46 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_shape_493_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_493_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_ne_493_41 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_493_41 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_494_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_double_499_44 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_setindex_500_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_double_503_46 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_call1_505_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_507_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_507_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_507_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_507_34 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_507_40 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_507_44 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_507_44 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_509_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_509_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_509_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_509_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_509_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_509_46 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_509_46 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_511_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_511_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_511_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_511_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_511_43 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_511_43 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_514_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_double_518_44 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_setindex_519_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_double_521_46 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_shape_522_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_522_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_ne_522_41 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_522_41 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_523_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_double_528_44 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_setindex_529_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_double_532_46 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_call1_534_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_ndim_536_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_536_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_536_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_536_34 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_536_40 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_536_44 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_536_44 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_538_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_538_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_538_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_538_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_getindex_538_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_538_46 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_538_46 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndim_540_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
  __site_op_eq_540_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_540_23 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_shape_540_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "shape", false));
  __site_op_eq_540_43 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_540_43 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_543_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_564_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_569_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_double_572_46 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_call1_574_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_dim_576_11 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "dim", false));
  __site_getindex_576_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_lt_576_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_576_19 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_577_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_double_581_44 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "double", false));
  __site_get_int_584_48 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int", false));
  __site_call1_586_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_dim_588_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "dim", false));
  __site_getindex_588_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_lt_588_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_588_24 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_589_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_int_592_45 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "int", false));
  __site_call1_599_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_eq_640_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_640_14 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_641_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_append_246_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_246_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_zeros_248_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "zeros", false));
  __site_call3_248_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_append_254_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_254_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_256_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call3_256_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_append_262_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_262_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_264_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call3_264_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_Array_274_54 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_274_54 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_278_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_278_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_282_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_282_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_285_47 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_285_47 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_289_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_289_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_293_35 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt_PY_LONG_LONG_293_35 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ArrayReturn_297_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ArrayReturn", false));
  __site_call1_297_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_Dtype_301_62 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Dtype", false));
  __site_cvt_cvt_PY_LONG_LONG_301_62 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_306_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_FromAny_306_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "FromAny", false));
  __site_call6_306_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_op_and_315_13 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::And));
  __site_istrue_315_13 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ior_316_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::OrAssign));
  __site_cvt_cvt_int_317_77 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_NpyArray_322_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyArray", false));
  __site_get_CheckFromAny_322_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "CheckFromAny", false));
  __site_call6_322_44 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(6)));
  __site_get_ndarray_326_29 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndarray", false));
  __site_call2_326_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_ndim_329_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndim", false));
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
  __pyx_delegate_val_fcn_callback = gcnew __pyx_delegate_t_5scipy_3odr_8_odrpack_fcn_callback(fcn_callback);
  __pyx_function_pointer_fcn_callback = (__pyx_fp_t_fcn_callback)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_fcn_callback).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":2
 * 
 * import operator             # <<<<<<<<<<<<<<
 * cimport numpy as np
 * from numpy cimport Npy_INTERFACE_descr, NpyArray_DescrFromType, PyArray_CheckFromAny
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "operator", -1));
  PythonOps::SetGlobal(__pyx_context, "operator", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":10
 * from numpy cimport ndarray, dtype
 * 
 * np.import_array()             # <<<<<<<<<<<<<<
 * 
 * cdef extern from "string.h":
 */
  import_array();

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":256
 * 
 * 
 * class odr_error(Exception):             # <<<<<<<<<<<<<<
 *     pass
 * 
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "Exception");
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1});
  __pyx_t_1 = nullptr;
  FunctionCode^ func_code_odr_error = PythonOps::MakeFunctionCode(__pyx_context, "func_code_odr_error", nullptr, gcnew array<System::String^>{"arg0"}, FunctionAttributes::None, 0, 0, "", gcnew System::Func<CodeContext^, CodeContext^>(mk_empty_context), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), 0);
  PythonTuple^ tbases_odr_error = safe_cast<PythonTuple^>(__pyx_t_3);
  array<System::Object^>^ bases_odr_error = gcnew array<System::Object^>(tbases_odr_error->Count);
  tbases_odr_error->CopyTo(bases_odr_error, 0);
  __pyx_t_1 = PythonOps::MakeClass(func_code_odr_error, nullptr, __pyx_context, "odr_error", bases_odr_error, "");
  __pyx_t_3 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "odr_error", __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":259
 *     pass
 * 
 * class ord_stop(Exception):             # <<<<<<<<<<<<<<
 *     pass
 * 
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "Exception");
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1});
  __pyx_t_1 = nullptr;
  FunctionCode^ func_code_ord_stop = PythonOps::MakeFunctionCode(__pyx_context, "func_code_ord_stop", nullptr, gcnew array<System::String^>{"arg0"}, FunctionAttributes::None, 0, 0, "", gcnew System::Func<CodeContext^, CodeContext^>(mk_empty_context), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), 0);
  PythonTuple^ tbases_ord_stop = safe_cast<PythonTuple^>(__pyx_t_3);
  array<System::Object^>^ bases_ord_stop = gcnew array<System::Object^>(tbases_ord_stop->Count);
  tbases_ord_stop->CopyTo(bases_ord_stop, 0);
  __pyx_t_1 = PythonOps::MakeClass(func_code_ord_stop, nullptr, __pyx_context, "ord_stop", bases_ord_stop, "");
  __pyx_t_3 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "ord_stop", __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":265
 * def odr(fcn, initbeta, y, x, we=None, wd=None, fjacb=None, fjacd=None, extra_args=None,
 *     ifixb=None, ifixx=None, int job=0, int iprint=0, errfile=None, rptfile=None,
 *     int ndigit=0, double taufac=0.0, double sstol=-1.0, double partol=-1.0,             # <<<<<<<<<<<<<<
 *     int maxit=-1, stpb=None,
 *     stpd=None, sclb=None, scld=None, work=None, iwork=None, int full_output=0):
 */
  __pyx_k_1 = (-1.0);
  __pyx_k_2 = (-1.0);

  /* "/Users/jasonmccampbell/dev/Enthought/scipy-refactor/scipy/odr/_odrpack.pyx":2
 * 
 * import operator             # <<<<<<<<<<<<<<
 * cimport numpy as np
 * from numpy cimport Npy_INTERFACE_descr, NpyArray_DescrFromType, PyArray_CheckFromAny
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "../cython/include/numpy.pxd":331
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
[assembly: PythonModule("scipy__odr___odrpack", module__odrpack::typeid)];
};
