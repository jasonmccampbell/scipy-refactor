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
  dict["__module__"] = "scipy.stats.statlib";
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
#define __PYX_HAVE_API__scipy__stats__statlib
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "fwrap_ktp_header.h"
#include "statlib_fc.h"
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

typedef System::Object^ __pyx_t_5scipy_5stats_9fwrap_ktp_fw_bytes;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":159
 * 
 * 
 * cdef np.ndarray fw_asfortranarray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.intp_t * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 */

public ref struct __pyx_opt_args_5scipy_5stats_7statlib_fw_asfortranarray {
  int __pyx_n;
  int alignment;
};
/* Cython code section 'utility_code_proto' */

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
/* Module declarations from scipy.stats.fwrap_ktp */
/* Module declarations from scipy.stats.statlib_fc */
/* Module declarations from scipy.stats.statlib */
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.stats.statlib"

/* Implementation of scipy.stats.statlib */
namespace clr_statlib {
  public ref class module_statlib sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_25_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_25_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_55_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_60_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_60_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_90_24;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_95_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_95_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_116_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_fwi_integer_t_145_10;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_147_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_149_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_153_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_171_27;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_176_59;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_183_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_185_60;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_185_24;
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
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":25
 * cdef extern from "string.h":
 *     void *memcpy(void *dest, void *src, size_t n)
 * def wprob(fwi_integer_t test, fwi_integer_t other, object a1=None):             # <<<<<<<<<<<<<<
 *     """wprob(test, other[, a1]) -> (astart, a1, ifault)
 * 
 */

static System::Object^ wprob(System::Object^ test, System::Object^ other, [InteropServices::Optional]System::Object^ a1) {
  fwi_integer_t __pyx_v_test;
  fwi_integer_t __pyx_v_other;
  System::Object^ __pyx_v_a1 = nullptr;
  fwi_integer_t __pyx_v_l1;
  fwi_integer_t __pyx_v_ifault;
  NumpyDotNet::ndarray^ __pyx_v_a1_;
  NumpyDotNet::ndarray^ __pyx_v_a2_;
  NumpyDotNet::ndarray^ __pyx_v_a3_;
  __pyx_t_5numpy_npy_intp __pyx_v_a1_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_a2_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_a3_shape[1];
  fwr_real_t __pyx_v_astart;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;
  __pyx_v_test = __site_cvt_25_0->Target(__site_cvt_25_0, test);
  __pyx_v_other = __site_cvt_25_0_1->Target(__site_cvt_25_0_1, other);
  if (dynamic_cast<System::Reflection::Missing^>(a1) == nullptr) {
    __pyx_v_a1 = a1;
  } else {
    __pyx_v_a1 = ((System::Object^)nullptr);
  }
  __pyx_v_a1_ = nullptr;
  __pyx_v_a2_ = nullptr;
  __pyx_v_a3_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":45
 *     cdef np.npy_intp a1_shape[1], a2_shape[1], a3_shape[1]
 *     cdef fwr_real_t astart
 *     astart = 0             # <<<<<<<<<<<<<<
 *     l1 = 1 + ((test * other) // 2)
 *     a2_shape[0] = l1
 */
  __pyx_v_astart = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":46
 *     cdef fwr_real_t astart
 *     astart = 0
 *     l1 = 1 + ((test * other) // 2)             # <<<<<<<<<<<<<<
 *     a2_shape[0] = l1
 *     a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)
 */
  __pyx_v_l1 = (1 + __Pyx_div_long((__pyx_v_test * __pyx_v_other), 2));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":47
 *     astart = 0
 *     l1 = 1 + ((test * other) // 2)
 *     a2_shape[0] = l1             # <<<<<<<<<<<<<<
 *     a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)
 *     a3_shape[0] = l1
 */
  (__pyx_v_a2_shape[0]) = __pyx_v_l1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":48
 *     l1 = 1 + ((test * other) // 2)
 *     a2_shape[0] = l1
 *     a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)             # <<<<<<<<<<<<<<
 *     a3_shape[0] = l1
 *     a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_FLOAT, 1, __pyx_v_a2_shape, 0, 1, nullptr)); 
  __pyx_v_a2_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":49
 *     a2_shape[0] = l1
 *     a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)
 *     a3_shape[0] = l1             # <<<<<<<<<<<<<<
 *     a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)
 *     ifault = 0
 */
  (__pyx_v_a3_shape[0]) = __pyx_v_l1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":50
 *     a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)
 *     a3_shape[0] = l1
 *     a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)             # <<<<<<<<<<<<<<
 *     ifault = 0
 *     a1_shape[0] = l1
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_FLOAT, 1, __pyx_v_a3_shape, 0, 1, nullptr)); 
  __pyx_v_a3_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":51
 *     a3_shape[0] = l1
 *     a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)
 *     ifault = 0             # <<<<<<<<<<<<<<
 *     a1_shape[0] = l1
 *     a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)
 */
  __pyx_v_ifault = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":52
 *     a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)
 *     ifault = 0
 *     a1_shape[0] = l1             # <<<<<<<<<<<<<<
 *     a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)
 *     if l1 != a1_shape[0]:
 */
  (__pyx_v_a1_shape[0]) = __pyx_v_l1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":53
 *     ifault = 0
 *     a1_shape[0] = l1
 *     a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)             # <<<<<<<<<<<<<<
 *     if l1 != a1_shape[0]:
 *         raise ValueError("(l1 == a1.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a1, NPY_FLOAT, 1, __pyx_v_a1_shape, 0, 1, nullptr)); 
  __pyx_v_a1_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":54
 *     a1_shape[0] = l1
 *     a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)
 *     if l1 != a1_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(l1 == a1.shape[0]) not satisifed")
 *     fc.wprob(&test, &other, &astart, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, <fwr_real_t*>np.PyArray_DATA(a2_), <fwr_real_t*>np.PyArray_DATA(a3_), &ifault)
 */
  __pyx_t_2 = (__pyx_v_l1 != (__pyx_v_a1_shape[0]));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":55
 *     a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)
 *     if l1 != a1_shape[0]:
 *         raise ValueError("(l1 == a1.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.wprob(&test, &other, &astart, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, <fwr_real_t*>np.PyArray_DATA(a2_), <fwr_real_t*>np.PyArray_DATA(a3_), &ifault)
 *     return (astart, a1_, ifault,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_55_24->Target(__site_call1_55_24, __pyx_context, __pyx_t_1, ((System::Object^)"(l1 == a1.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":56
 *     if l1 != a1_shape[0]:
 *         raise ValueError("(l1 == a1.shape[0]) not satisifed")
 *     fc.wprob(&test, &other, &astart, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, <fwr_real_t*>np.PyArray_DATA(a2_), <fwr_real_t*>np.PyArray_DATA(a3_), &ifault)             # <<<<<<<<<<<<<<
 *     return (astart, a1_, ifault,)
 * 
 */
  F_FUNC(wprob,WPROB)((&__pyx_v_test), (&__pyx_v_other), (&__pyx_v_astart), ((fwr_real_t *)PyArray_DATA(__pyx_v_a1_)), (&__pyx_v_l1), ((fwr_real_t *)PyArray_DATA(__pyx_v_a2_)), ((fwr_real_t *)PyArray_DATA(__pyx_v_a3_)), (&__pyx_v_ifault));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":57
 *         raise ValueError("(l1 == a1.shape[0]) not satisifed")
 *     fc.wprob(&test, &other, &astart, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, <fwr_real_t*>np.PyArray_DATA(a2_), <fwr_real_t*>np.PyArray_DATA(a3_), &ifault)
 *     return (astart, a1_, ifault,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = __pyx_v_astart;
  __pyx_t_1 = __pyx_v_ifault;
  __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, ((System::Object^)__pyx_v_a1_), __pyx_t_1});
  __pyx_t_3 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_4;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":60
 * 
 * 
 * def gscale(fwi_integer_t test, fwi_integer_t other, object a1=None):             # <<<<<<<<<<<<<<
 *     """gscale(test, other[, a1]) -> (astart, a1, ifault)
 * 
 */

static System::Object^ gscale(System::Object^ test, System::Object^ other, [InteropServices::Optional]System::Object^ a1) {
  fwi_integer_t __pyx_v_test;
  fwi_integer_t __pyx_v_other;
  System::Object^ __pyx_v_a1 = nullptr;
  fwi_integer_t __pyx_v_l1;
  fwi_integer_t __pyx_v_ifault;
  NumpyDotNet::ndarray^ __pyx_v_a1_;
  NumpyDotNet::ndarray^ __pyx_v_a2_;
  NumpyDotNet::ndarray^ __pyx_v_a3_;
  __pyx_t_5numpy_npy_intp __pyx_v_a1_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_a2_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_a3_shape[1];
  fwr_real_t __pyx_v_astart;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_test = __site_cvt_60_0->Target(__site_cvt_60_0, test);
  __pyx_v_other = __site_cvt_60_0_1->Target(__site_cvt_60_0_1, other);
  if (dynamic_cast<System::Reflection::Missing^>(a1) == nullptr) {
    __pyx_v_a1 = a1;
  } else {
    __pyx_v_a1 = ((System::Object^)nullptr);
  }
  __pyx_v_a1_ = nullptr;
  __pyx_v_a2_ = nullptr;
  __pyx_v_a3_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":80
 *     cdef np.npy_intp a1_shape[1], a2_shape[1], a3_shape[1]
 *     cdef fwr_real_t astart
 *     astart = 0             # <<<<<<<<<<<<<<
 *     l1 = 1 + ((test * other) // 2)
 *     a2_shape[0] = l1
 */
  __pyx_v_astart = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":81
 *     cdef fwr_real_t astart
 *     astart = 0
 *     l1 = 1 + ((test * other) // 2)             # <<<<<<<<<<<<<<
 *     a2_shape[0] = l1
 *     a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)
 */
  __pyx_v_l1 = (1 + __Pyx_div_long((__pyx_v_test * __pyx_v_other), 2));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":82
 *     astart = 0
 *     l1 = 1 + ((test * other) // 2)
 *     a2_shape[0] = l1             # <<<<<<<<<<<<<<
 *     a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)
 *     a3_shape[0] = l1
 */
  (__pyx_v_a2_shape[0]) = __pyx_v_l1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":83
 *     l1 = 1 + ((test * other) // 2)
 *     a2_shape[0] = l1
 *     a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)             # <<<<<<<<<<<<<<
 *     a3_shape[0] = l1
 *     a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_FLOAT, 1, __pyx_v_a2_shape, 0, 1, nullptr)); 
  __pyx_v_a2_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":84
 *     a2_shape[0] = l1
 *     a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)
 *     a3_shape[0] = l1             # <<<<<<<<<<<<<<
 *     a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)
 *     ifault = 0
 */
  (__pyx_v_a3_shape[0]) = __pyx_v_l1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":85
 *     a2_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a2_shape, False, True)
 *     a3_shape[0] = l1
 *     a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)             # <<<<<<<<<<<<<<
 *     ifault = 0
 *     a1_shape[0] = l1
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(nullptr, NPY_FLOAT, 1, __pyx_v_a3_shape, 0, 1, nullptr)); 
  __pyx_v_a3_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":86
 *     a3_shape[0] = l1
 *     a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)
 *     ifault = 0             # <<<<<<<<<<<<<<
 *     a1_shape[0] = l1
 *     a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)
 */
  __pyx_v_ifault = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":87
 *     a3_ = fw_asfortranarray(None, fwr_real_t_enum, 1, a3_shape, False, True)
 *     ifault = 0
 *     a1_shape[0] = l1             # <<<<<<<<<<<<<<
 *     a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)
 *     if not (0 <= l1 <= a1_shape[0]):
 */
  (__pyx_v_a1_shape[0]) = __pyx_v_l1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":88
 *     ifault = 0
 *     a1_shape[0] = l1
 *     a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)             # <<<<<<<<<<<<<<
 *     if not (0 <= l1 <= a1_shape[0]):
 *         raise ValueError("(0 <= l1 <= a1.shape[0]) not satisifed")
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_a1, NPY_FLOAT, 1, __pyx_v_a1_shape, 0, 1, nullptr)); 
  __pyx_v_a1_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":89
 *     a1_shape[0] = l1
 *     a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)
 *     if not (0 <= l1 <= a1_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= l1 <= a1.shape[0]) not satisifed")
 *     fc.gscale(&test, &other, &astart, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, <fwr_real_t*>np.PyArray_DATA(a2_), <fwr_real_t*>np.PyArray_DATA(a3_), &ifault)
 */
  __pyx_t_2 = (0 <= __pyx_v_l1);
  if (__pyx_t_2) {
    __pyx_t_2 = (__pyx_v_l1 <= (__pyx_v_a1_shape[0]));
  }
  __pyx_t_3 = (!__pyx_t_2);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":90
 *     a1_ = fw_asfortranarray(a1, fwr_real_t_enum, 1, a1_shape, False, True)
 *     if not (0 <= l1 <= a1_shape[0]):
 *         raise ValueError("(0 <= l1 <= a1.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.gscale(&test, &other, &astart, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, <fwr_real_t*>np.PyArray_DATA(a2_), <fwr_real_t*>np.PyArray_DATA(a3_), &ifault)
 *     return (astart, a1_, ifault,)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_90_24->Target(__site_call1_90_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= l1 <= a1.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":91
 *     if not (0 <= l1 <= a1_shape[0]):
 *         raise ValueError("(0 <= l1 <= a1.shape[0]) not satisifed")
 *     fc.gscale(&test, &other, &astart, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, <fwr_real_t*>np.PyArray_DATA(a2_), <fwr_real_t*>np.PyArray_DATA(a3_), &ifault)             # <<<<<<<<<<<<<<
 *     return (astart, a1_, ifault,)
 * 
 */
  F_FUNC(gscale,GSCALE)((&__pyx_v_test), (&__pyx_v_other), (&__pyx_v_astart), ((fwr_real_t *)PyArray_DATA(__pyx_v_a1_)), (&__pyx_v_l1), ((fwr_real_t *)PyArray_DATA(__pyx_v_a2_)), ((fwr_real_t *)PyArray_DATA(__pyx_v_a3_)), (&__pyx_v_ifault));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":92
 *         raise ValueError("(0 <= l1 <= a1.shape[0]) not satisifed")
 *     fc.gscale(&test, &other, &astart, <fwr_real_t*>np.PyArray_DATA(a1_), &l1, <fwr_real_t*>np.PyArray_DATA(a2_), <fwr_real_t*>np.PyArray_DATA(a3_), &ifault)
 *     return (astart, a1_, ifault,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_astart;
  __pyx_t_1 = __pyx_v_ifault;
  __pyx_t_5 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, ((System::Object^)__pyx_v_a1_), __pyx_t_1});
  __pyx_t_4 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":95
 * 
 * 
 * def prho(fwi_integer_t n, fwi_integer_t is__):             # <<<<<<<<<<<<<<
 *     """prho(n, is__) -> (fw_ret_arg, ifault)
 * 
 */

static System::Object^ prho(System::Object^ n, System::Object^ is__) {
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_is__;
  fwi_integer_t __pyx_v_ifault;
  fwr_dbl_t __pyx_v_fw_ret_arg;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  __pyx_v_n = __site_cvt_95_0->Target(__site_cvt_95_0, n);
  __pyx_v_is__ = __site_cvt_95_0_1->Target(__site_cvt_95_0_1, is__);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":111
 *     cdef fwi_integer_t ifault
 *     cdef fwr_dbl_t fw_ret_arg
 *     ifault = 0             # <<<<<<<<<<<<<<
 *     fw_ret_arg = fc.prho(&n, &is__, &ifault)
 *     return (fw_ret_arg, ifault,)
 */
  __pyx_v_ifault = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":112
 *     cdef fwr_dbl_t fw_ret_arg
 *     ifault = 0
 *     fw_ret_arg = fc.prho(&n, &is__, &ifault)             # <<<<<<<<<<<<<<
 *     return (fw_ret_arg, ifault,)
 * 
 */
  __pyx_v_fw_ret_arg = F_FUNC(prho,PRHO)((&__pyx_v_n), (&__pyx_v_is__), (&__pyx_v_ifault));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":113
 *     ifault = 0
 *     fw_ret_arg = fc.prho(&n, &is__, &ifault)
 *     return (fw_ret_arg, ifault,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = __pyx_v_fw_ret_arg;
  __pyx_t_2 = __pyx_v_ifault;
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1, __pyx_t_2});
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_r = __pyx_t_3;
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":116
 * 
 * 
 * def swilk(object x, object a, bint init=0, object n1=None):             # <<<<<<<<<<<<<<
 *     """swilk(x, a[, init, n1]) -> (a, w, pw, ifault)
 * 
 */

static System::Object^ swilk(System::Object^ x, System::Object^ a, [InteropServices::Optional]System::Object^ init, [InteropServices::Optional]System::Object^ n1) {
  System::Object^ __pyx_v_x = nullptr;
  System::Object^ __pyx_v_a = nullptr;
  int __pyx_v_init;
  System::Object^ __pyx_v_n1 = nullptr;
  fwi_integer_t __pyx_v_n1_;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_n2;
  fwi_integer_t __pyx_v_ifault;
  NumpyDotNet::ndarray^ __pyx_v_x_;
  NumpyDotNet::ndarray^ __pyx_v_a_;
  __pyx_t_5numpy_npy_intp __pyx_v_x_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_a_shape[1];
  fwr_real_t __pyx_v_w;
  fwr_real_t __pyx_v_pw;
  fwl_logical_t __pyx_v_init_;
  System::Object^ __pyx_r = nullptr;
  long __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  fwi_integer_t __pyx_t_5;
  int __pyx_t_6;
  System::Object^ __pyx_t_7 = nullptr;
  System::Object^ __pyx_t_8 = nullptr;
  __pyx_v_x = x;
  __pyx_v_a = a;
  if (dynamic_cast<System::Reflection::Missing^>(init) == nullptr) {
    __pyx_v_init = __site_cvt_116_0->Target(__site_cvt_116_0, init);
  } else {
    __pyx_v_init = ((int)0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(n1) == nullptr) {
    __pyx_v_n1 = n1;
  } else {
    __pyx_v_n1 = ((System::Object^)nullptr);
  }
  __pyx_v_x_ = nullptr;
  __pyx_v_a_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":139
 *     cdef fwr_real_t w, pw
 *     cdef fwl_logical_t init_
 *     init_ = 1 if init else 0             # <<<<<<<<<<<<<<
 *     w = 0
 *     pw = 0
 */
  if (__pyx_v_init) {
    __pyx_t_1 = 1;
  } else {
    __pyx_t_1 = 0;
  }
  __pyx_v_init_ = __pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":140
 *     cdef fwl_logical_t init_
 *     init_ = 1 if init else 0
 *     w = 0             # <<<<<<<<<<<<<<
 *     pw = 0
 *     ifault = 0
 */
  __pyx_v_w = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":141
 *     init_ = 1 if init else 0
 *     w = 0
 *     pw = 0             # <<<<<<<<<<<<<<
 *     ifault = 0
 *     x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
 */
  __pyx_v_pw = 0.0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":142
 *     w = 0
 *     pw = 0
 *     ifault = 0             # <<<<<<<<<<<<<<
 *     x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
 *     n = x_shape[0]
 */
  __pyx_v_ifault = 0;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":143
 *     pw = 0
 *     ifault = 0
 *     x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)             # <<<<<<<<<<<<<<
 *     n = x_shape[0]
 *     n1_ = n1 if (n1 is not None) else n
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_x, NPY_FLOAT, 1, __pyx_v_x_shape, 0, 0, nullptr)); 
  __pyx_v_x_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":144
 *     ifault = 0
 *     x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
 *     n = x_shape[0]             # <<<<<<<<<<<<<<
 *     n1_ = n1 if (n1 is not None) else n
 *     if not (n1_ <= n):
 */
  __pyx_v_n = (__pyx_v_x_shape[0]);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":145
 *     x_ = fw_asfortranarray(x, fwr_real_t_enum, 1, x_shape, False, False)
 *     n = x_shape[0]
 *     n1_ = n1 if (n1 is not None) else n             # <<<<<<<<<<<<<<
 *     if not (n1_ <= n):
 *         raise ValueError('Condition on arguments not satisfied: n1 <= n')
 */
  __pyx_t_3 = (__pyx_v_n1 != nullptr);
  if (__pyx_t_3) {
    __pyx_t_2 = __pyx_v_n1;
  } else {
    __pyx_t_4 = __pyx_v_n;
    __pyx_t_2 = __pyx_t_4;
    __pyx_t_4 = nullptr;
  }
  __pyx_t_5 = __site_cvt_fwi_integer_t_145_10->Target(__site_cvt_fwi_integer_t_145_10, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_v_n1_ = __pyx_t_5;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":146
 *     n = x_shape[0]
 *     n1_ = n1 if (n1 is not None) else n
 *     if not (n1_ <= n):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: n1 <= n')
 *     if not (0 <= n <= x_shape[0]):
 */
  __pyx_t_3 = (!(__pyx_v_n1_ <= __pyx_v_n));
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":147
 *     n1_ = n1 if (n1 is not None) else n
 *     if not (n1_ <= n):
 *         raise ValueError('Condition on arguments not satisfied: n1 <= n')             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= x_shape[0]):
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_147_24->Target(__site_call1_147_24, __pyx_context, __pyx_t_2, ((System::Object^)"Condition on arguments not satisfied: n1 <= n"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":148
 *     if not (n1_ <= n):
 *         raise ValueError('Condition on arguments not satisfied: n1 <= n')
 *     if not (0 <= n <= x_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 1, a_shape, False, False)
 */
  __pyx_t_3 = (0 <= __pyx_v_n);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_v_n <= (__pyx_v_x_shape[0]));
  }
  __pyx_t_6 = (!__pyx_t_3);
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":149
 *         raise ValueError('Condition on arguments not satisfied: n1 <= n')
 *     if not (0 <= n <= x_shape[0]):
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 1, a_shape, False, False)
 *     n2 = n // 2
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __site_call1_149_24->Target(__site_call1_149_24, __pyx_context, __pyx_t_4, ((System::Object^)"(0 <= n <= x.shape[0]) not satisifed"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":150
 *     if not (0 <= n <= x_shape[0]):
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 1, a_shape, False, False)             # <<<<<<<<<<<<<<
 *     n2 = n // 2
 *     if n2 != a_shape[0]:
 */
  __pyx_t_2 = ((System::Object^)fw_asfortranarray(__pyx_v_a, NPY_FLOAT, 1, __pyx_v_a_shape, 0, 0, nullptr)); 
  __pyx_v_a_ = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":151
 *         raise ValueError("(0 <= n <= x.shape[0]) not satisifed")
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 1, a_shape, False, False)
 *     n2 = n // 2             # <<<<<<<<<<<<<<
 *     if n2 != a_shape[0]:
 *         raise ValueError("(n2 == a.shape[0]) not satisifed")
 */
  __pyx_v_n2 = __Pyx_div_long(__pyx_v_n, 2);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":152
 *     a_ = fw_asfortranarray(a, fwr_real_t_enum, 1, a_shape, False, False)
 *     n2 = n // 2
 *     if n2 != a_shape[0]:             # <<<<<<<<<<<<<<
 *         raise ValueError("(n2 == a.shape[0]) not satisifed")
 *     fc.swilk(&init_, <fwr_real_t*>np.PyArray_DATA(x_), &n, &n1_, &n2, <fwr_real_t*>np.PyArray_DATA(a_), &w, &pw, &ifault)
 */
  __pyx_t_6 = (__pyx_v_n2 != (__pyx_v_a_shape[0]));
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":153
 *     n2 = n // 2
 *     if n2 != a_shape[0]:
 *         raise ValueError("(n2 == a.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     fc.swilk(&init_, <fwr_real_t*>np.PyArray_DATA(x_), &n, &n1_, &n2, <fwr_real_t*>np.PyArray_DATA(a_), &w, &pw, &ifault)
 *     return (a_, w, pw, ifault,)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_153_24->Target(__site_call1_153_24, __pyx_context, __pyx_t_2, ((System::Object^)"(n2 == a.shape[0]) not satisifed"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":154
 *     if n2 != a_shape[0]:
 *         raise ValueError("(n2 == a.shape[0]) not satisifed")
 *     fc.swilk(&init_, <fwr_real_t*>np.PyArray_DATA(x_), &n, &n1_, &n2, <fwr_real_t*>np.PyArray_DATA(a_), &w, &pw, &ifault)             # <<<<<<<<<<<<<<
 *     return (a_, w, pw, ifault,)
 * 
 */
  F_FUNC(swilk,SWILK)((&__pyx_v_init_), ((fwr_real_t *)PyArray_DATA(__pyx_v_x_)), (&__pyx_v_n), (&__pyx_v_n1_), (&__pyx_v_n2), ((fwr_real_t *)PyArray_DATA(__pyx_v_a_)), (&__pyx_v_w), (&__pyx_v_pw), (&__pyx_v_ifault));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":155
 *         raise ValueError("(n2 == a.shape[0]) not satisifed")
 *     fc.swilk(&init_, <fwr_real_t*>np.PyArray_DATA(x_), &n, &n1_, &n2, <fwr_real_t*>np.PyArray_DATA(a_), &w, &pw, &ifault)
 *     return (a_, w, pw, ifault,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_w;
  __pyx_t_2 = __pyx_v_pw;
  __pyx_t_7 = __pyx_v_ifault;
  __pyx_t_8 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_a_), __pyx_t_4, __pyx_t_2, __pyx_t_7});
  __pyx_t_4 = nullptr;
  __pyx_t_2 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_r = __pyx_t_8;
  __pyx_t_8 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":159
 * 
 * 
 * cdef np.ndarray fw_asfortranarray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.intp_t * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 */

static  NumpyDotNet::ndarray^ fw_asfortranarray(System::Object^ __pyx_v_value, int __pyx_v_typenum, int __pyx_v_ndim, __pyx_t_5numpy_intp_t *__pyx_v_coerced_shape, int __pyx_v_copy, int __pyx_v_create, ref struct __pyx_opt_args_5scipy_5stats_7statlib_fw_asfortranarray ^__pyx_optional_args) {
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":162
 *                                   np.intp_t * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 *     cdef int flags = np.NPY_F_CONTIGUOUS | np.NPY_FORCECAST             # <<<<<<<<<<<<<<
 *     cdef np.ndarray result
 *     cdef np.npy_intp * in_shape
 */
  __pyx_v_flags = (NPY_F_CONTIGUOUS | NPY_FORCECAST);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":167
 *     cdef int in_ndim
 *     cdef int i
 *     if value is None:             # <<<<<<<<<<<<<<
 *         if create:
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 */
  __pyx_t_1 = (__pyx_v_value == nullptr);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":168
 *     cdef int i
 *     if value is None:
 *         if create:             # <<<<<<<<<<<<<<
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 *         else:
 */
    if (__pyx_v_create) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":169
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

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":171
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 *         else:
 *             raise TypeError('Expected array but None provided')             # <<<<<<<<<<<<<<
 *     else:
 *         if ndim <= 1:
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
      __pyx_t_3 = __site_call1_171_27->Target(__site_call1_171_27, __pyx_context, __pyx_t_2, ((System::Object^)"Expected array but None provided"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
    }
    __pyx_L4:;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":173
 *             raise TypeError('Expected array but None provided')
 *     else:
 *         if ndim <= 1:             # <<<<<<<<<<<<<<
 *             # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
 *             flags |= np.NPY_C_CONTIGUOUS
 */
    __pyx_t_1 = (__pyx_v_ndim <= 1);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":175
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

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":176
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
        __pyx_t_5 = __site_istrue_176_59->Target(__site_istrue_176_59, __pyx_t_3);
        __pyx_t_3 = nullptr;
        if (__pyx_t_5) {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":177
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

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":179
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

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":180
 *             # mis-aligned array
 *             copy = True
 *         if copy:             # <<<<<<<<<<<<<<
 *             flags |= np.NPY_ENSURECOPY
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 */
    if (__pyx_v_copy) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":181
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

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":182
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":183
 *             flags |= np.NPY_ENSURECOPY
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 *     in_ndim = np.PyArray_NDIM(result)             # <<<<<<<<<<<<<<
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 */
  __pyx_t_8 = PyArray_NDIM(((System::Object^)__pyx_v_result)); 
  __pyx_t_9 = __site_cvt_int_183_29->Target(__site_cvt_int_183_29, __pyx_t_8);
  __pyx_t_8 = nullptr;
  __pyx_v_in_ndim = __pyx_t_9;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":184
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 *     in_ndim = np.PyArray_NDIM(result)
 *     if in_ndim > ndim:             # <<<<<<<<<<<<<<
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)
 */
  __pyx_t_4 = (__pyx_v_in_ndim > __pyx_v_ndim);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":185
 *     in_ndim = np.PyArray_NDIM(result)
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)             # <<<<<<<<<<<<<<
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __pyx_v_ndim;
    __pyx_t_3 = __site_op_mod_185_60->Target(__site_op_mod_185_60, ((System::Object^)"Dimension of array must be <= %d"), __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_call1_185_24->Target(__site_call1_185_24, __pyx_context, __pyx_t_8, ((System::Object^)__pyx_t_3));
    __pyx_t_8 = nullptr;
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":186
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)             # <<<<<<<<<<<<<<
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]
 */
  __pyx_v_in_shape = PyArray_DIMS(__pyx_v_result);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":187
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):             # <<<<<<<<<<<<<<
 *         coerced_shape[i] = in_shape[i]
 *     for i in range(in_ndim, ndim):
 */
  __pyx_t_10 = __pyx_v_in_ndim;
  for (__pyx_t_11 = 0; __pyx_t_11 < __pyx_t_10; __pyx_t_11+=1) {
    __pyx_v_i = __pyx_t_11;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":188
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]             # <<<<<<<<<<<<<<
 *     for i in range(in_ndim, ndim):
 *         # Pad shape with ones on right side if necessarry
 */
    (__pyx_v_coerced_shape[__pyx_v_i]) = (__pyx_v_in_shape[__pyx_v_i]);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":189
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]
 *     for i in range(in_ndim, ndim):             # <<<<<<<<<<<<<<
 *         # Pad shape with ones on right side if necessarry
 *         coerced_shape[i] = 1
 */
  __pyx_t_10 = __pyx_v_ndim;
  for (__pyx_t_11 = __pyx_v_in_ndim; __pyx_t_11 < __pyx_t_10; __pyx_t_11+=1) {
    __pyx_v_i = __pyx_t_11;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":191
 *     for i in range(in_ndim, ndim):
 *         # Pad shape with ones on right side if necessarry
 *         coerced_shape[i] = 1             # <<<<<<<<<<<<<<
 *     return result
 * 
 */
    (__pyx_v_coerced_shape[__pyx_v_i]) = 1;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":192
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
  __site_cvt_25_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_25_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_55_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_60_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_60_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_90_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_95_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_95_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_116_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_fwi_integer_t_145_10 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_147_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_149_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_153_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_171_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_176_59 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_183_29 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mod_185_60 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_185_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":21
 * cimport statlib_fc as fc
 * 
 * np.import_array()             # <<<<<<<<<<<<<<
 * __all__ = ['wprob', 'gscale', 'prho', 'swilk']
 * cdef extern from "string.h":
 */
  import_array();

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":22
 * 
 * np.import_array()
 * __all__ = ['wprob', 'gscale', 'prho', 'swilk']             # <<<<<<<<<<<<<<
 * cdef extern from "string.h":
 *     void *memcpy(void *dest, void *src, size_t n)
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{((System::Object^)"wprob"), ((System::Object^)"gscale"), ((System::Object^)"prho"), ((System::Object^)"swilk")});
  PythonOps::SetGlobal(__pyx_context, "__all__", ((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\stats\statlib.pyx":1
 * #cython: ccomplex=True             # <<<<<<<<<<<<<<
 * 
 * """The statlib module was generated with Fwrap v0.2.0dev_3a09519.
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
[assembly: PythonModule("scipy__stats__statlib", module_statlib::typeid)];
};
