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
  dict["__module__"] = "scipy.signal.spline";
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
#define __PYX_HAVE_API__scipy__signal__spline
#include "npy_common.h"
#include "npy_defs.h"
#include "npy_descriptor.h"
#include "npy_arrayobject.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_iterators.h"
#include "npy_ironpython.h"
#include "S_bspline_util.h"
#include "D_bspline_util.h"

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
    typedef ::std::complex< double > __pyx_t_double_complex;
  #else
    typedef double _Complex __pyx_t_double_complex;
  #endif
#else
    typedef struct { double real, imag; } __pyx_t_double_complex;
#endif

#if CYTHON_CCOMPLEX
  #ifdef __cplusplus
    typedef ::std::complex< float > __pyx_t_float_complex;
  #else
    typedef float _Complex __pyx_t_float_complex;
  #endif
#else
    typedef struct { float real, imag; } __pyx_t_float_complex;
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":207
 * 
 * 
 * cpdef symiirorder1(np.ndarray sig, Py_complex c0, Py_complex z1, double precision=-1.0):             # <<<<<<<<<<<<<<
 *     """symiirorder1(input, c0, z1 {, precision}) -> output
 * 
 */

public ref struct __pyx_opt_args_5scipy_6signal_6spline_symiirorder1 {
  int __pyx_n;
  double precision;
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
/* Module declarations from scipy.signal.spline */
static void convert_strides(__pyx_t_5numpy_npy_intp *, __pyx_t_5numpy_npy_intp *, int, int); /*proto*/
static System::Object^ symiirorder1(NumpyDotNet::ndarray^, __pyx_t_double_complex, __pyx_t_double_complex, int __pyx_skip_dispatch, ref struct __pyx_opt_args_5scipy_6signal_6spline_symiirorder1 ^__pyx_optional_args); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.signal.spline"

/* Implementation of scipy.signal.spline */
namespace clr_spline {
  public ref class module_spline sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_41_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_41_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_type_57_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_57_31;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_57_31;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_57_31;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_elsize_66_45;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_66_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_87_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_90_23;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_95_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_111_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_type_114_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_114_31;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_114_31;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_114_31;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_elsize_122_45;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_122_45;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_127_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_127_34;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_127_21;
static  CallSite< System::Func< CallSite^, System::Object^, float >^ >^ __site_cvt_cvt_float_132_48;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_le_135_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_135_33;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_135_20;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_140_47;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_143_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_146_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_type_166_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_166_31;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_166_31;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_166_31;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_elsize_176_45;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_176_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_199_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_202_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_type_240_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_240_31;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_240_31;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_240_31;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_elsize_247_43;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_247_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_271_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_274_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_276_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_278_23;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_284_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_284_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_cvt_double_284_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_type_317_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_lt_317_31;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_317_31;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_317_31;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_elsize_324_43;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_324_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_342_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_345_23;
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
static int^ __pyx_int_1;
static int^ __pyx_int_2;
static double __pyx_k_1;
static System::Object^ __pyx_k_2;
static double __pyx_k_3;
static double __pyx_k_4;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":28
 * ctypedef double complex Py_complex
 * 
 * cdef void convert_strides(np.npy_intp* instrides, np.npy_intp* convstrides, int size, int num):             # <<<<<<<<<<<<<<
 *     cdef int n
 *     cdef np.npy_intp bitshift
 */

static  void convert_strides(__pyx_t_5numpy_npy_intp *__pyx_v_instrides, __pyx_t_5numpy_npy_intp *__pyx_v_convstrides, int __pyx_v_size, int __pyx_v_num) {
  int __pyx_v_n;
  __pyx_t_5numpy_npy_intp __pyx_v_bitshift;
  int __pyx_t_1;
  int __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":32
 *     cdef np.npy_intp bitshift
 * 
 *     bitshift = -1             # <<<<<<<<<<<<<<
 *     while size != 0:
 *         size >>= 1
 */
  __pyx_v_bitshift = -1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":33
 * 
 *     bitshift = -1
 *     while size != 0:             # <<<<<<<<<<<<<<
 *         size >>= 1
 *         bitshift += 1
 */
  while (1) {
    __pyx_t_1 = (__pyx_v_size != 0);
    if (!__pyx_t_1) break;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":34
 *     bitshift = -1
 *     while size != 0:
 *         size >>= 1             # <<<<<<<<<<<<<<
 *         bitshift += 1
 * 
 */
    __pyx_v_size >>= 1;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":35
 *     while size != 0:
 *         size >>= 1
 *         bitshift += 1             # <<<<<<<<<<<<<<
 * 
 *     for n from 0 <= n < num:
 */
    __pyx_v_bitshift += 1;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":37
 *         bitshift += 1
 * 
 *     for n from 0 <= n < num:             # <<<<<<<<<<<<<<
 *         convstrides[n] = instrides[n] >> bitshift
 * 
 */
  __pyx_t_2 = __pyx_v_num;
  for (__pyx_v_n = 0; __pyx_v_n < __pyx_t_2; __pyx_v_n++) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":38
 * 
 *     for n from 0 <= n < num:
 *         convstrides[n] = instrides[n] >> bitshift             # <<<<<<<<<<<<<<
 * 
 * 
 */
    (__pyx_v_convstrides[__pyx_v_n]) = ((__pyx_v_instrides[__pyx_v_n]) >> __pyx_v_bitshift);
  }

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":41
 * 
 * 
 * def cspline2d(np.ndarray image, double lambda_=0.0, double precision=-1.0):             # <<<<<<<<<<<<<<
 *     """cspline2d(input {, lambda, precision}) -> ck
 * 
 */

static System::Object^ cspline2d(System::Object^ image, [InteropServices::Optional]System::Object^ lambda_, [InteropServices::Optional]System::Object^ precision) {
  NumpyDotNet::ndarray^ __pyx_v_image = nullptr;
  double __pyx_v_lambda_;
  double __pyx_v_precision;
  int __pyx_v_thetype;
  int __pyx_v_M;
  int __pyx_v_N;
  int __pyx_v_retval;
  __pyx_t_5numpy_npy_intp __pyx_v_outstrides[2];
  __pyx_t_5numpy_npy_intp __pyx_v_instrides[2];
  NumpyDotNet::ndarray^ __pyx_v_a_image;
  NumpyDotNet::ndarray^ __pyx_v_ck;
  System::Object^ __pyx_v_type;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  enum NPY_TYPES __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_t_8;
  int __pyx_t_9;
  __pyx_v_image = ((NumpyDotNet::ndarray^)image);
  if (dynamic_cast<System::Reflection::Missing^>(lambda_) == nullptr) {
    __pyx_v_lambda_ = __site_cvt_cvt_double_41_0->Target(__site_cvt_cvt_double_41_0, lambda_);
  } else {
    __pyx_v_lambda_ = ((double)0.0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(precision) == nullptr) {
    __pyx_v_precision = __site_cvt_cvt_double_41_0_1->Target(__site_cvt_cvt_double_41_0_1, precision);
  } else {
    __pyx_v_precision = __pyx_k_1;
  }
  __pyx_v_a_image = nullptr;
  __pyx_v_ck = nullptr;
  __pyx_v_type = nullptr;
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_image) == nullptr)) {
    throw PythonOps::TypeError("Argument 'image' has incorrect type");
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":52
 *     symmetric boundary conditions.
 *     """
 *     cdef int thetype, M, N, retval=0             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp outstrides[2], instrides[2]
 *     cdef np.ndarray a_image, ck
 */
  __pyx_v_retval = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":56
 *     cdef np.ndarray a_image, ck
 * 
 *     type = np.NpyArray_FindArrayType_2args(image, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))             # <<<<<<<<<<<<<<
 *     thetype = min(type.type, np.NPY_DOUBLE)
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(NPY_FLOAT))); 
  __pyx_t_2 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_image), ((NumpyDotNet::dtype^)__pyx_t_1))); 
  __pyx_t_1 = nullptr;
  __pyx_v_type = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":57
 * 
 *     type = np.NpyArray_FindArrayType_2args(image, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))
 *     thetype = min(type.type, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 * 
 */
  __pyx_t_3 = NPY_DOUBLE;
  __pyx_t_2 = __site_get_type_57_22->Target(__site_get_type_57_22, __pyx_v_type, __pyx_context);
  __pyx_t_4 = (System::Object^)(long long)(__pyx_t_3);
  __pyx_t_5 = __site_op_lt_57_31->Target(__site_op_lt_57_31, __pyx_t_4, __pyx_t_2);
  __pyx_t_4 = nullptr;
  __pyx_t_6 = __site_istrue_57_31->Target(__site_istrue_57_31, __pyx_t_5);
  __pyx_t_5 = nullptr;
  if (__pyx_t_6) {
    __pyx_t_5 = (System::Object^)(long long)(__pyx_t_3);
    __pyx_t_1 = __pyx_t_5;
    __pyx_t_5 = nullptr;
  } else {
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_t_7 = __site_cvt_cvt_int_57_31->Target(__site_cvt_cvt_int_57_31, __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_v_thetype = __pyx_t_7;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":58
 *     type = np.NpyArray_FindArrayType_2args(image, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))
 *     thetype = min(type.type, np.NPY_DOUBLE)
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 * 
 *     ck = np.PyArray_New(NULL, 2, np.PyArray_DIMS(a_image), thetype, NULL, NULL, 0,
 */
  __pyx_t_1 = __pyx_v_thetype;
  __pyx_t_2 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_5 = PyArray_FROMANY(((System::Object^)__pyx_v_image), __pyx_t_1, __pyx_int_2, __pyx_int_2, __pyx_t_2); 
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_image = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":61
 * 
 *     ck = np.PyArray_New(NULL, 2, np.PyArray_DIMS(a_image), thetype, NULL, NULL, 0,
 *                         np.NPY_CONTIGUOUS, NULL)             # <<<<<<<<<<<<<<
 *     M = np.PyArray_DIMS(a_image)[0]
 *     N = np.PyArray_DIMS(a_image)[1]
 */
  __pyx_t_5 = PyArray_New(NULL, 2, PyArray_DIMS(__pyx_v_a_image), __pyx_v_thetype, NULL, NULL, 0, NPY_CONTIGUOUS, NULL); 
  if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_ck = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":62
 *     ck = np.PyArray_New(NULL, 2, np.PyArray_DIMS(a_image), thetype, NULL, NULL, 0,
 *                         np.NPY_CONTIGUOUS, NULL)
 *     M = np.PyArray_DIMS(a_image)[0]             # <<<<<<<<<<<<<<
 *     N = np.PyArray_DIMS(a_image)[1]
 * 
 */
  __pyx_v_M = (PyArray_DIMS(__pyx_v_a_image)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":63
 *                         np.NPY_CONTIGUOUS, NULL)
 *     M = np.PyArray_DIMS(a_image)[0]
 *     N = np.PyArray_DIMS(a_image)[1]             # <<<<<<<<<<<<<<
 * 
 *     convert_strides(np.PyArray_STRIDES(a_image), instrides,
 */
  __pyx_v_N = (PyArray_DIMS(__pyx_v_a_image)[1]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":66
 * 
 *     convert_strides(np.PyArray_STRIDES(a_image), instrides,
 *                     np.PyArray_DESCR(a_image).elsize, 2)             # <<<<<<<<<<<<<<
 *     outstrides[0] = N
 *     outstrides[1] = 1
 */
  __pyx_t_5 = PyArray_DESCR(__pyx_v_a_image); 
  __pyx_t_2 = __site_get_elsize_66_45->Target(__site_get_elsize_66_45, __pyx_t_5, __pyx_context);
  __pyx_t_5 = nullptr;
  __pyx_t_8 = __site_cvt_cvt_int_66_45->Target(__site_cvt_cvt_int_66_45, __pyx_t_2);
  __pyx_t_2 = nullptr;
  convert_strides(PyArray_STRIDES(__pyx_v_a_image), __pyx_v_instrides, __pyx_t_8, 2);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":67
 *     convert_strides(np.PyArray_STRIDES(a_image), instrides,
 *                     np.PyArray_DESCR(a_image).elsize, 2)
 *     outstrides[0] = N             # <<<<<<<<<<<<<<
 *     outstrides[1] = 1
 * 
 */
  (__pyx_v_outstrides[0]) = __pyx_v_N;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":68
 *                     np.PyArray_DESCR(a_image).elsize, 2)
 *     outstrides[0] = N
 *     outstrides[1] = 1             # <<<<<<<<<<<<<<
 * 
 *     if thetype == np.NPY_FLOAT:
 */
  (__pyx_v_outstrides[1]) = 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":70
 *     outstrides[1] = 1
 * 
 *     if thetype == np.NPY_FLOAT:             # <<<<<<<<<<<<<<
 *         if not (0.0 < precision <= 1.0):
 *             precision = 1e-3
 */
  __pyx_t_6 = (__pyx_v_thetype == NPY_FLOAT);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":71
 * 
 *     if thetype == np.NPY_FLOAT:
 *         if not (0.0 < precision <= 1.0):             # <<<<<<<<<<<<<<
 *             precision = 1e-3
 *         retval = S_cubic_spline2D(<float *> np.PyArray_DATA(a_image),
 */
    __pyx_t_6 = (0.0 < __pyx_v_precision);
    if (__pyx_t_6) {
      __pyx_t_6 = (__pyx_v_precision <= 1.0);
    }
    __pyx_t_9 = (!__pyx_t_6);
    if (__pyx_t_9) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":72
 *     if thetype == np.NPY_FLOAT:
 *         if not (0.0 < precision <= 1.0):
 *             precision = 1e-3             # <<<<<<<<<<<<<<
 *         retval = S_cubic_spline2D(<float *> np.PyArray_DATA(a_image),
 *                                   <float *> np.PyArray_DATA(ck),
 */
      __pyx_v_precision = 1e-3;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":76
 *                                   <float *> np.PyArray_DATA(ck),
 *                                   M, N, lambda_, instrides, outstrides,
 *                                   precision)             # <<<<<<<<<<<<<<
 * 
 *     elif thetype == np.NPY_DOUBLE:
 */
    __pyx_v_retval = S_cubic_spline2D(((float *)PyArray_DATA(__pyx_v_a_image)), ((float *)PyArray_DATA(__pyx_v_ck)), __pyx_v_M, __pyx_v_N, __pyx_v_lambda_, __pyx_v_instrides, __pyx_v_outstrides, __pyx_v_precision);
    goto __pyx_L5;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":78
 *                                   precision)
 * 
 *     elif thetype == np.NPY_DOUBLE:             # <<<<<<<<<<<<<<
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-6
 */
  __pyx_t_9 = (__pyx_v_thetype == NPY_DOUBLE);
  if (__pyx_t_9) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":79
 * 
 *     elif thetype == np.NPY_DOUBLE:
 *         if not (0.0 <= precision < 1.0):             # <<<<<<<<<<<<<<
 *             precision = 1e-6
 *         retval = D_cubic_spline2D(<double *> np.PyArray_DATA(a_image),
 */
    __pyx_t_9 = (0.0 <= __pyx_v_precision);
    if (__pyx_t_9) {
      __pyx_t_9 = (__pyx_v_precision < 1.0);
    }
    __pyx_t_6 = (!__pyx_t_9);
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":80
 *     elif thetype == np.NPY_DOUBLE:
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-6             # <<<<<<<<<<<<<<
 *         retval = D_cubic_spline2D(<double *> np.PyArray_DATA(a_image),
 *                                   <double *> np.PyArray_DATA(ck),
 */
      __pyx_v_precision = 1e-6;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":84
 *                                   <double *> np.PyArray_DATA(ck),
 *                                   M, N, lambda_, instrides, outstrides,
 *                                   precision)             # <<<<<<<<<<<<<<
 * 
 *     if retval == -3:
 */
    __pyx_v_retval = D_cubic_spline2D(((double *)PyArray_DATA(__pyx_v_a_image)), ((double *)PyArray_DATA(__pyx_v_ck)), __pyx_v_M, __pyx_v_N, __pyx_v_lambda_, __pyx_v_instrides, __pyx_v_outstrides, __pyx_v_precision);
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":86
 *                                   precision)
 * 
 *     if retval == -3:             # <<<<<<<<<<<<<<
 *         raise Exception("Precision too high.  Error did not converge.")
 * 
 */
  __pyx_t_6 = (__pyx_v_retval == -3);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":87
 * 
 *     if retval == -3:
 *         raise Exception("Precision too high.  Error did not converge.")             # <<<<<<<<<<<<<<
 * 
 *     if retval < 0:
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_5 = __site_call1_87_23->Target(__site_call1_87_23, __pyx_context, __pyx_t_2, ((System::Object^)"Precision too high.  Error did not converge."));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":89
 *         raise Exception("Precision too high.  Error did not converge.")
 * 
 *     if retval < 0:             # <<<<<<<<<<<<<<
 *         raise Exception("Problem occurred inside routine")
 * 
 */
  __pyx_t_6 = (__pyx_v_retval < 0);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":90
 * 
 *     if retval < 0:
 *         raise Exception("Problem occurred inside routine")             # <<<<<<<<<<<<<<
 * 
 *     return np.PyArray_Return(ck)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_2 = __site_call1_90_23->Target(__site_call1_90_23, __pyx_context, __pyx_t_5, ((System::Object^)"Problem occurred inside routine"));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":92
 *         raise Exception("Problem occurred inside routine")
 * 
 *     return np.PyArray_Return(ck)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PyArray_Return(((System::Object^)__pyx_v_ck)); 
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":95
 * 
 * 
 * def qspline2d(np.ndarray image, double lambda_=0.0, precision=-1.0):             # <<<<<<<<<<<<<<
 *     """qspline2d(input {, lambda, precision}) -> qk
 * 
 */

static System::Object^ qspline2d(System::Object^ image, [InteropServices::Optional]System::Object^ lambda_, [InteropServices::Optional]System::Object^ precision) {
  NumpyDotNet::ndarray^ __pyx_v_image = nullptr;
  double __pyx_v_lambda_;
  System::Object^ __pyx_v_precision = nullptr;
  int __pyx_v_thetype;
  int __pyx_v_M;
  int __pyx_v_N;
  int __pyx_v_retval;
  __pyx_t_5numpy_npy_intp __pyx_v_outstrides[2];
  __pyx_t_5numpy_npy_intp __pyx_v_instrides[2];
  NumpyDotNet::ndarray^ __pyx_v_a_image;
  NumpyDotNet::ndarray^ __pyx_v_ck;
  System::Object^ __pyx_v_type;
  System::Object^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  enum NPY_TYPES __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  int __pyx_t_7;
  int __pyx_t_8;
  int __pyx_t_9;
  float __pyx_t_10;
  double __pyx_t_11;
  __pyx_v_image = ((NumpyDotNet::ndarray^)image);
  if (dynamic_cast<System::Reflection::Missing^>(lambda_) == nullptr) {
    __pyx_v_lambda_ = __site_cvt_cvt_double_95_0->Target(__site_cvt_cvt_double_95_0, lambda_);
  } else {
    __pyx_v_lambda_ = ((double)0.0);
  }
  if (dynamic_cast<System::Reflection::Missing^>(precision) == nullptr) {
    __pyx_v_precision = precision;
  } else {
    __pyx_v_precision = __pyx_k_2;
  }
  __pyx_v_a_image = nullptr;
  __pyx_v_ck = nullptr;
  __pyx_v_type = nullptr;
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_image) == nullptr)) {
    throw PythonOps::TypeError("Argument 'image' has incorrect type");
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":106
 *     symmetric boundary conditions.
 *     """
 *     cdef int thetype, M, N, retval=0             # <<<<<<<<<<<<<<
 *     cdef np.npy_intp outstrides[2], instrides[2]
 *     cdef np.ndarray a_image, ck
 */
  __pyx_v_retval = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":110
 *     cdef np.ndarray a_image, ck
 * 
 *     if lambda_ != 0.0:             # <<<<<<<<<<<<<<
 *         raise Exception("Smoothing spline not yet implemented.")
 * 
 */
  __pyx_t_1 = (__pyx_v_lambda_ != 0.0);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":111
 * 
 *     if lambda_ != 0.0:
 *         raise Exception("Smoothing spline not yet implemented.")             # <<<<<<<<<<<<<<
 * 
 *     type = np.NpyArray_FindArrayType_2args(image, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_3 = __site_call1_111_23->Target(__site_call1_111_23, __pyx_context, __pyx_t_2, ((System::Object^)"Smoothing spline not yet implemented."));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":113
 *         raise Exception("Smoothing spline not yet implemented.")
 * 
 *     type = np.NpyArray_FindArrayType_2args(image, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))             # <<<<<<<<<<<<<<
 *     thetype = min(type.type, np.NPY_DOUBLE)
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 */
  __pyx_t_3 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(NPY_FLOAT))); 
  __pyx_t_2 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_image), ((NumpyDotNet::dtype^)__pyx_t_3))); 
  __pyx_t_3 = nullptr;
  __pyx_v_type = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":114
 * 
 *     type = np.NpyArray_FindArrayType_2args(image, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))
 *     thetype = min(type.type, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 * 
 */
  __pyx_t_4 = NPY_DOUBLE;
  __pyx_t_2 = __site_get_type_114_22->Target(__site_get_type_114_22, __pyx_v_type, __pyx_context);
  __pyx_t_5 = (System::Object^)(long long)(__pyx_t_4);
  __pyx_t_6 = __site_op_lt_114_31->Target(__site_op_lt_114_31, __pyx_t_5, __pyx_t_2);
  __pyx_t_5 = nullptr;
  __pyx_t_1 = __site_istrue_114_31->Target(__site_istrue_114_31, __pyx_t_6);
  __pyx_t_6 = nullptr;
  if (__pyx_t_1) {
    __pyx_t_6 = (System::Object^)(long long)(__pyx_t_4);
    __pyx_t_3 = __pyx_t_6;
    __pyx_t_6 = nullptr;
  } else {
    __pyx_t_3 = __pyx_t_2;
  }
  __pyx_t_7 = __site_cvt_cvt_int_114_31->Target(__site_cvt_cvt_int_114_31, __pyx_t_3);
  __pyx_t_2 = nullptr;
  __pyx_t_3 = nullptr;
  __pyx_v_thetype = __pyx_t_7;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":115
 *     type = np.NpyArray_FindArrayType_2args(image, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))
 *     thetype = min(type.type, np.NPY_DOUBLE)
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 * 
 *     ck = np.PyArray_FROMANY(a_image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 */
  __pyx_t_3 = __pyx_v_thetype;
  __pyx_t_2 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_6 = PyArray_FROMANY(((System::Object^)__pyx_v_image), __pyx_t_3, __pyx_int_2, __pyx_int_2, __pyx_t_2); 
  __pyx_t_3 = nullptr;
  __pyx_t_2 = nullptr;
  if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_6) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_image = ((NumpyDotNet::ndarray^)__pyx_t_6);
  __pyx_t_6 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":117
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 * 
 *     ck = np.PyArray_FROMANY(a_image, thetype, 2, 2, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *     M = np.PyArray_DIMS(a_image)[0]
 *     N = np.PyArray_DIMS(a_image)[1]
 */
  __pyx_t_6 = __pyx_v_thetype;
  __pyx_t_2 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_3 = PyArray_FROMANY(((System::Object^)__pyx_v_a_image), __pyx_t_6, __pyx_int_2, __pyx_int_2, __pyx_t_2); 
  __pyx_t_6 = nullptr;
  __pyx_t_2 = nullptr;
  if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_ck = ((NumpyDotNet::ndarray^)__pyx_t_3);
  __pyx_t_3 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":118
 * 
 *     ck = np.PyArray_FROMANY(a_image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 *     M = np.PyArray_DIMS(a_image)[0]             # <<<<<<<<<<<<<<
 *     N = np.PyArray_DIMS(a_image)[1]
 * 
 */
  __pyx_v_M = (PyArray_DIMS(__pyx_v_a_image)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":119
 *     ck = np.PyArray_FROMANY(a_image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 *     M = np.PyArray_DIMS(a_image)[0]
 *     N = np.PyArray_DIMS(a_image)[1]             # <<<<<<<<<<<<<<
 * 
 *     convert_strides(np.PyArray_STRIDES(a_image), instrides,
 */
  __pyx_v_N = (PyArray_DIMS(__pyx_v_a_image)[1]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":122
 * 
 *     convert_strides(np.PyArray_STRIDES(a_image), instrides,
 *                     np.PyArray_DESCR(a_image).elsize, 2)             # <<<<<<<<<<<<<<
 *     outstrides[0] = N
 *     outstrides[1] = 1
 */
  __pyx_t_3 = PyArray_DESCR(__pyx_v_a_image); 
  __pyx_t_2 = __site_get_elsize_122_45->Target(__site_get_elsize_122_45, __pyx_t_3, __pyx_context);
  __pyx_t_3 = nullptr;
  __pyx_t_8 = __site_cvt_cvt_int_122_45->Target(__site_cvt_cvt_int_122_45, __pyx_t_2);
  __pyx_t_2 = nullptr;
  convert_strides(PyArray_STRIDES(__pyx_v_a_image), __pyx_v_instrides, __pyx_t_8, 2);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":123
 *     convert_strides(np.PyArray_STRIDES(a_image), instrides,
 *                     np.PyArray_DESCR(a_image).elsize, 2)
 *     outstrides[0] = N             # <<<<<<<<<<<<<<
 *     outstrides[1] = 1
 * 
 */
  (__pyx_v_outstrides[0]) = __pyx_v_N;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":124
 *                     np.PyArray_DESCR(a_image).elsize, 2)
 *     outstrides[0] = N
 *     outstrides[1] = 1             # <<<<<<<<<<<<<<
 * 
 *     if thetype == np.NPY_FLOAT:
 */
  (__pyx_v_outstrides[1]) = 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":126
 *     outstrides[1] = 1
 * 
 *     if thetype == np.NPY_FLOAT:             # <<<<<<<<<<<<<<
 *          if not (0.0 <= precision < 1.0):
 *             precision = 1e-3
 */
  __pyx_t_1 = (__pyx_v_thetype == NPY_FLOAT);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":127
 * 
 *     if thetype == np.NPY_FLOAT:
 *          if not (0.0 <= precision < 1.0):             # <<<<<<<<<<<<<<
 *             precision = 1e-3
 *          retval = S_quadratic_spline2D(<float *> np.PyArray_DATA(a_image),
 */
    __pyx_t_2 = 0.0;
    __pyx_t_3 = __site_op_le_127_21->Target(__site_op_le_127_21, __pyx_t_2, __pyx_v_precision);
    if (__pyx_t_3) {
      __pyx_t_6 = 1.0;
      __pyx_t_3 = __site_op_lt_127_34->Target(__site_op_lt_127_34, __pyx_v_precision, __pyx_t_6);
      __pyx_t_6 = nullptr;
    }
    __pyx_t_2 = nullptr;
    __pyx_t_1 = __site_istrue_127_21->Target(__site_istrue_127_21, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_t_9 = (!__pyx_t_1);
    if (__pyx_t_9) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":128
 *     if thetype == np.NPY_FLOAT:
 *          if not (0.0 <= precision < 1.0):
 *             precision = 1e-3             # <<<<<<<<<<<<<<
 *          retval = S_quadratic_spline2D(<float *> np.PyArray_DATA(a_image),
 *                                        <float *> np.PyArray_DATA(ck),
 */
      __pyx_t_3 = 1e-3;
      __pyx_v_precision = __pyx_t_3;
      __pyx_t_3 = nullptr;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":132
 *                                        <float *> np.PyArray_DATA(ck),
 *                                        M, N, lambda_, instrides, outstrides,
 *                                        precision)             # <<<<<<<<<<<<<<
 * 
 *     elif thetype == np.NPY_DOUBLE:
 */
    __pyx_t_10 = __site_cvt_cvt_float_132_48->Target(__site_cvt_cvt_float_132_48, __pyx_v_precision);
    __pyx_v_retval = S_quadratic_spline2D(((float *)PyArray_DATA(__pyx_v_a_image)), ((float *)PyArray_DATA(__pyx_v_ck)), __pyx_v_M, __pyx_v_N, __pyx_v_lambda_, __pyx_v_instrides, __pyx_v_outstrides, __pyx_t_10);
    goto __pyx_L6;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":134
 *                                        precision)
 * 
 *     elif thetype == np.NPY_DOUBLE:             # <<<<<<<<<<<<<<
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-6
 */
  __pyx_t_9 = (__pyx_v_thetype == NPY_DOUBLE);
  if (__pyx_t_9) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":135
 * 
 *     elif thetype == np.NPY_DOUBLE:
 *         if not (0.0 <= precision < 1.0):             # <<<<<<<<<<<<<<
 *             precision = 1e-6
 *         retval = D_quadratic_spline2D(<double *> np.PyArray_DATA(a_image),
 */
    __pyx_t_3 = 0.0;
    __pyx_t_2 = __site_op_le_135_20->Target(__site_op_le_135_20, __pyx_t_3, __pyx_v_precision);
    if (__pyx_t_2) {
      __pyx_t_6 = 1.0;
      __pyx_t_2 = __site_op_lt_135_33->Target(__site_op_lt_135_33, __pyx_v_precision, __pyx_t_6);
      __pyx_t_6 = nullptr;
    }
    __pyx_t_3 = nullptr;
    __pyx_t_9 = __site_istrue_135_20->Target(__site_istrue_135_20, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_1 = (!__pyx_t_9);
    if (__pyx_t_1) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":136
 *     elif thetype == np.NPY_DOUBLE:
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-6             # <<<<<<<<<<<<<<
 *         retval = D_quadratic_spline2D(<double *> np.PyArray_DATA(a_image),
 *                                       <double *> np.PyArray_DATA(ck),
 */
      __pyx_t_2 = 1e-6;
      __pyx_v_precision = __pyx_t_2;
      __pyx_t_2 = nullptr;
      goto __pyx_L8;
    }
    __pyx_L8:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":140
 *                                       <double *> np.PyArray_DATA(ck),
 *                                       M, N, lambda_, instrides, outstrides,
 *                                       precision)             # <<<<<<<<<<<<<<
 * 
 *     if retval == -3:
 */
    __pyx_t_11 = __site_cvt_cvt_double_140_47->Target(__site_cvt_cvt_double_140_47, __pyx_v_precision);
    __pyx_v_retval = D_quadratic_spline2D(((double *)PyArray_DATA(__pyx_v_a_image)), ((double *)PyArray_DATA(__pyx_v_ck)), __pyx_v_M, __pyx_v_N, __pyx_v_lambda_, __pyx_v_instrides, __pyx_v_outstrides, __pyx_t_11);
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":142
 *                                       precision)
 * 
 *     if retval == -3:             # <<<<<<<<<<<<<<
 *         raise Exception("Precision too high.  Error did not converge.")
 * 
 */
  __pyx_t_1 = (__pyx_v_retval == -3);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":143
 * 
 *     if retval == -3:
 *         raise Exception("Precision too high.  Error did not converge.")             # <<<<<<<<<<<<<<
 * 
 *     if retval < 0:
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_3 = __site_call1_143_23->Target(__site_call1_143_23, __pyx_context, __pyx_t_2, ((System::Object^)"Precision too high.  Error did not converge."));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":145
 *         raise Exception("Precision too high.  Error did not converge.")
 * 
 *     if retval < 0:             # <<<<<<<<<<<<<<
 *         raise Exception("Problem occurred inside routine")
 * 
 */
  __pyx_t_1 = (__pyx_v_retval < 0);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":146
 * 
 *     if retval < 0:
 *         raise Exception("Problem occurred inside routine")             # <<<<<<<<<<<<<<
 * 
 *     return np.PyArray_Return(ck)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_2 = __site_call1_146_23->Target(__site_call1_146_23, __pyx_context, __pyx_t_3, ((System::Object^)"Problem occurred inside routine"));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":148
 *         raise Exception("Problem occurred inside routine")
 * 
 *     return np.PyArray_Return(ck)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PyArray_Return(((System::Object^)__pyx_v_ck)); 
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":151
 * 
 * 
 * def sepfir2d(np.ndarray image, np.ndarray hrow, np.ndarray hcol):             # <<<<<<<<<<<<<<
 *     """sepfir2d(input, hrow, hcol) -> output
 * 
 */

static System::Object^ sepfir2d(System::Object^ image, System::Object^ hrow, System::Object^ hcol) {
  NumpyDotNet::ndarray^ __pyx_v_image = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_hrow = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_hcol = nullptr;
  int __pyx_v_thetype;
  int __pyx_v_M;
  int __pyx_v_N;
  int __pyx_v_ret;
  __pyx_t_5numpy_npy_intp __pyx_v_outstrides[2];
  __pyx_t_5numpy_npy_intp __pyx_v_instrides[2];
  NumpyDotNet::ndarray^ __pyx_v_a_image;
  NumpyDotNet::ndarray^ __pyx_v_a_hrow;
  NumpyDotNet::ndarray^ __pyx_v_a_hcol;
  NumpyDotNet::ndarray^ __pyx_v_out;
  System::Object^ __pyx_v_type;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  enum NPY_TYPES __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_t_8;
  __pyx_v_image = ((NumpyDotNet::ndarray^)image);
  __pyx_v_hrow = ((NumpyDotNet::ndarray^)hrow);
  __pyx_v_hcol = ((NumpyDotNet::ndarray^)hcol);
  __pyx_v_a_image = nullptr;
  __pyx_v_a_hrow = nullptr;
  __pyx_v_a_hcol = nullptr;
  __pyx_v_out = nullptr;
  __pyx_v_type = nullptr;
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_image) == nullptr)) {
    throw PythonOps::TypeError("Argument 'image' has incorrect type");
  }
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_hrow) == nullptr)) {
    throw PythonOps::TypeError("Argument 'hrow' has incorrect type");
  }
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_hcol) == nullptr)) {
    throw PythonOps::TypeError("Argument 'hcol' has incorrect type");
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":165
 *     cdef np.ndarray a_image, a_hrow, a_hcol, out
 * 
 *     type = np.NpyArray_FindArrayType_2args(image, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))             # <<<<<<<<<<<<<<
 *     thetype = min(type.type, np.NPY_DOUBLE)
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(NPY_FLOAT))); 
  __pyx_t_2 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_image), ((NumpyDotNet::dtype^)__pyx_t_1))); 
  __pyx_t_1 = nullptr;
  __pyx_v_type = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":166
 * 
 *     type = np.NpyArray_FindArrayType_2args(image, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))
 *     thetype = min(type.type, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 *     a_hrow = np.PyArray_FROMANY(hrow, thetype, 1, 1, np.NPY_CONTIGUOUS)
 */
  __pyx_t_3 = NPY_DOUBLE;
  __pyx_t_2 = __site_get_type_166_22->Target(__site_get_type_166_22, __pyx_v_type, __pyx_context);
  __pyx_t_4 = (System::Object^)(long long)(__pyx_t_3);
  __pyx_t_5 = __site_op_lt_166_31->Target(__site_op_lt_166_31, __pyx_t_4, __pyx_t_2);
  __pyx_t_4 = nullptr;
  __pyx_t_6 = __site_istrue_166_31->Target(__site_istrue_166_31, __pyx_t_5);
  __pyx_t_5 = nullptr;
  if (__pyx_t_6) {
    __pyx_t_5 = (System::Object^)(long long)(__pyx_t_3);
    __pyx_t_1 = __pyx_t_5;
    __pyx_t_5 = nullptr;
  } else {
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_t_7 = __site_cvt_cvt_int_166_31->Target(__site_cvt_cvt_int_166_31, __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_v_thetype = __pyx_t_7;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":167
 *     type = np.NpyArray_FindArrayType_2args(image, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))
 *     thetype = min(type.type, np.NPY_DOUBLE)
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *     a_hrow = np.PyArray_FROMANY(hrow, thetype, 1, 1, np.NPY_CONTIGUOUS)
 *     a_hcol = np.PyArray_FROMANY(hcol, thetype, 1, 1, np.NPY_CONTIGUOUS)
 */
  __pyx_t_1 = __pyx_v_thetype;
  __pyx_t_2 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_5 = PyArray_FROMANY(((System::Object^)__pyx_v_image), __pyx_t_1, __pyx_int_2, __pyx_int_2, __pyx_t_2); 
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_image = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":168
 *     thetype = min(type.type, np.NPY_DOUBLE)
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 *     a_hrow = np.PyArray_FROMANY(hrow, thetype, 1, 1, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *     a_hcol = np.PyArray_FROMANY(hcol, thetype, 1, 1, np.NPY_CONTIGUOUS)
 * 
 */
  __pyx_t_5 = __pyx_v_thetype;
  __pyx_t_2 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_1 = PyArray_FROMANY(((System::Object^)__pyx_v_hrow), __pyx_t_5, __pyx_int_1, __pyx_int_1, __pyx_t_2); 
  __pyx_t_5 = nullptr;
  __pyx_t_2 = nullptr;
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_hrow = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":169
 *     a_image = np.PyArray_FROMANY(image, thetype, 2, 2, np.NPY_CONTIGUOUS)
 *     a_hrow = np.PyArray_FROMANY(hrow, thetype, 1, 1, np.NPY_CONTIGUOUS)
 *     a_hcol = np.PyArray_FROMANY(hcol, thetype, 1, 1, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 * 
 *     out = np.PyArray_SimpleNew(2, np.PyArray_DIMS(a_image), thetype)
 */
  __pyx_t_1 = __pyx_v_thetype;
  __pyx_t_2 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_5 = PyArray_FROMANY(((System::Object^)__pyx_v_hcol), __pyx_t_1, __pyx_int_1, __pyx_int_1, __pyx_t_2); 
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_hcol = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":171
 *     a_hcol = np.PyArray_FROMANY(hcol, thetype, 1, 1, np.NPY_CONTIGUOUS)
 * 
 *     out = np.PyArray_SimpleNew(2, np.PyArray_DIMS(a_image), thetype)             # <<<<<<<<<<<<<<
 *     M = np.PyArray_DIMS(a_image)[0]
 *     N = np.PyArray_DIMS(a_image)[1]
 */
  __pyx_t_5 = PyArray_SimpleNew(2, PyArray_DIMS(__pyx_v_a_image), __pyx_v_thetype); 
  if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_out = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":172
 * 
 *     out = np.PyArray_SimpleNew(2, np.PyArray_DIMS(a_image), thetype)
 *     M = np.PyArray_DIMS(a_image)[0]             # <<<<<<<<<<<<<<
 *     N = np.PyArray_DIMS(a_image)[1]
 * 
 */
  __pyx_v_M = (PyArray_DIMS(__pyx_v_a_image)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":173
 *     out = np.PyArray_SimpleNew(2, np.PyArray_DIMS(a_image), thetype)
 *     M = np.PyArray_DIMS(a_image)[0]
 *     N = np.PyArray_DIMS(a_image)[1]             # <<<<<<<<<<<<<<
 * 
 *     convert_strides(np.PyArray_STRIDES(a_image), instrides,
 */
  __pyx_v_N = (PyArray_DIMS(__pyx_v_a_image)[1]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":176
 * 
 *     convert_strides(np.PyArray_STRIDES(a_image), instrides,
 *                     np.PyArray_DESCR(a_image).elsize, 2)             # <<<<<<<<<<<<<<
 *     outstrides[0] = N
 *     outstrides[1] = 1
 */
  __pyx_t_5 = PyArray_DESCR(__pyx_v_a_image); 
  __pyx_t_2 = __site_get_elsize_176_45->Target(__site_get_elsize_176_45, __pyx_t_5, __pyx_context);
  __pyx_t_5 = nullptr;
  __pyx_t_8 = __site_cvt_cvt_int_176_45->Target(__site_cvt_cvt_int_176_45, __pyx_t_2);
  __pyx_t_2 = nullptr;
  convert_strides(PyArray_STRIDES(__pyx_v_a_image), __pyx_v_instrides, __pyx_t_8, 2);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":177
 *     convert_strides(np.PyArray_STRIDES(a_image), instrides,
 *                     np.PyArray_DESCR(a_image).elsize, 2)
 *     outstrides[0] = N             # <<<<<<<<<<<<<<
 *     outstrides[1] = 1
 * 
 */
  (__pyx_v_outstrides[0]) = __pyx_v_N;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":178
 *                     np.PyArray_DESCR(a_image).elsize, 2)
 *     outstrides[0] = N
 *     outstrides[1] = 1             # <<<<<<<<<<<<<<
 * 
 *     if thetype == np.NPY_FLOAT:
 */
  (__pyx_v_outstrides[1]) = 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":180
 *     outstrides[1] = 1
 * 
 *     if thetype == np.NPY_FLOAT:             # <<<<<<<<<<<<<<
 *         ret = S_separable_2Dconvolve_mirror(
 *             <float *> np.PyArray_DATA(a_image),
 */
  __pyx_t_6 = (__pyx_v_thetype == NPY_FLOAT);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":187
 *             <float *> np.PyArray_DATA(a_hcol),
 *             np.PyArray_DIMS(a_hrow)[0], np.PyArray_DIMS(a_hcol)[0],
 *             instrides, outstrides)             # <<<<<<<<<<<<<<
 * 
 *     elif thetype == np.NPY_DOUBLE:
 */
    __pyx_v_ret = S_separable_2Dconvolve_mirror(((float *)PyArray_DATA(__pyx_v_a_image)), ((float *)PyArray_DATA(__pyx_v_out)), __pyx_v_M, __pyx_v_N, ((float *)PyArray_DATA(__pyx_v_a_hrow)), ((float *)PyArray_DATA(__pyx_v_a_hcol)), (PyArray_DIMS(__pyx_v_a_hrow)[0]), (PyArray_DIMS(__pyx_v_a_hcol)[0]), __pyx_v_instrides, __pyx_v_outstrides);
    goto __pyx_L5;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":189
 *             instrides, outstrides)
 * 
 *     elif thetype == np.NPY_DOUBLE:             # <<<<<<<<<<<<<<
 *         ret = D_separable_2Dconvolve_mirror(
 *             <double *> np.PyArray_DATA(a_image),
 */
  __pyx_t_6 = (__pyx_v_thetype == NPY_DOUBLE);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":196
 *             <double *> np.PyArray_DATA(a_hcol),
 *             np.PyArray_DIMS(a_hrow)[0],np.PyArray_DIMS(a_hcol)[0],
 *             instrides, outstrides)             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
    __pyx_v_ret = D_separable_2Dconvolve_mirror(((double *)PyArray_DATA(__pyx_v_a_image)), ((double *)PyArray_DATA(__pyx_v_out)), __pyx_v_M, __pyx_v_N, ((double *)PyArray_DATA(__pyx_v_a_hrow)), ((double *)PyArray_DATA(__pyx_v_a_hcol)), (PyArray_DIMS(__pyx_v_a_hrow)[0]), (PyArray_DIMS(__pyx_v_a_hcol)[0]), __pyx_v_instrides, __pyx_v_outstrides);
    goto __pyx_L5;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":199
 * 
 *     else:
 *         raise Exception("Incorrect type.")             # <<<<<<<<<<<<<<
 * 
 *     if ret < 0:
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_5 = __site_call1_199_23->Target(__site_call1_199_23, __pyx_context, __pyx_t_2, ((System::Object^)"Incorrect type."));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":201
 *         raise Exception("Incorrect type.")
 * 
 *     if ret < 0:             # <<<<<<<<<<<<<<
 *         raise Exception("Problem occurred inside routine.")
 * 
 */
  __pyx_t_6 = (__pyx_v_ret < 0);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":202
 * 
 *     if ret < 0:
 *         raise Exception("Problem occurred inside routine.")             # <<<<<<<<<<<<<<
 * 
 *     return np.PyArray_Return(out)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_2 = __site_call1_202_23->Target(__site_call1_202_23, __pyx_context, __pyx_t_5, ((System::Object^)"Problem occurred inside routine."));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":204
 *         raise Exception("Problem occurred inside routine.")
 * 
 *     return np.PyArray_Return(out)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PyArray_Return(((System::Object^)__pyx_v_out)); 
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":207
 * 
 * 
 * cpdef symiirorder1(np.ndarray sig, Py_complex c0, Py_complex z1, double precision=-1.0):             # <<<<<<<<<<<<<<
 *     """symiirorder1(input, c0, z1 {, precision}) -> output
 * 
 */

static  System::Object^ symiirorder1(NumpyDotNet::ndarray^ __pyx_v_sig, __pyx_t_double_complex __pyx_v_c0, __pyx_t_double_complex __pyx_v_z1, ref struct __pyx_opt_args_5scipy_6signal_6spline_symiirorder1 ^__pyx_optional_args) {
  double __pyx_v_precision = __pyx_k_3;
  int __pyx_v_thetype;
  int __pyx_v_N;
  int __pyx_v_ret;
  __pyx_t_5numpy_npy_intp __pyx_v_outstrides;
  __pyx_t_5numpy_npy_intp __pyx_v_instrides;
  float __pyx_v_rc0;
  float __pyx_v_rz1;
  NumpyDotNet::ndarray^ __pyx_v_a_sig;
  NumpyDotNet::ndarray^ __pyx_v_out;
  System::Object^ __pyx_v_type;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  enum NPY_TYPES __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_t_8;
  int __pyx_t_9;
  if (__pyx_optional_args) {
    if (__pyx_optional_args->__pyx_n > 0) {
      __pyx_v_precision = __pyx_optional_args->precision;
    }
  }
  __pyx_v_a_sig = nullptr;
  __pyx_v_out = nullptr;
  __pyx_v_type = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":239
 *     cdef np.ndarray a_sig, out
 * 
 *     type = np.NpyArray_FindArrayType_2args(sig, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))             # <<<<<<<<<<<<<<
 *     thetype = min(type.type, np.NPY_CDOUBLE)
 *     a_sig = np.PyArray_FROMANY(sig, thetype, 1, 1, np.NPY_CONTIGUOUS)
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(NPY_FLOAT))); 
  __pyx_t_2 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_sig), ((NumpyDotNet::dtype^)__pyx_t_1))); 
  __pyx_t_1 = nullptr;
  __pyx_v_type = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":240
 * 
 *     type = np.NpyArray_FindArrayType_2args(sig, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))
 *     thetype = min(type.type, np.NPY_CDOUBLE)             # <<<<<<<<<<<<<<
 *     a_sig = np.PyArray_FROMANY(sig, thetype, 1, 1, np.NPY_CONTIGUOUS)
 * 
 */
  __pyx_t_3 = NPY_CDOUBLE;
  __pyx_t_2 = __site_get_type_240_22->Target(__site_get_type_240_22, __pyx_v_type, __pyx_context);
  __pyx_t_4 = (System::Object^)(long long)(__pyx_t_3);
  __pyx_t_5 = __site_op_lt_240_31->Target(__site_op_lt_240_31, __pyx_t_4, __pyx_t_2);
  __pyx_t_4 = nullptr;
  __pyx_t_6 = __site_istrue_240_31->Target(__site_istrue_240_31, __pyx_t_5);
  __pyx_t_5 = nullptr;
  if (__pyx_t_6) {
    __pyx_t_5 = (System::Object^)(long long)(__pyx_t_3);
    __pyx_t_1 = __pyx_t_5;
    __pyx_t_5 = nullptr;
  } else {
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_t_7 = __site_cvt_cvt_int_240_31->Target(__site_cvt_cvt_int_240_31, __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_v_thetype = __pyx_t_7;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":241
 *     type = np.NpyArray_FindArrayType_2args(sig, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))
 *     thetype = min(type.type, np.NPY_CDOUBLE)
 *     a_sig = np.PyArray_FROMANY(sig, thetype, 1, 1, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 * 
 *     out = np.PyArray_SimpleNew(1, np.PyArray_DIMS(a_sig), thetype)
 */
  __pyx_t_1 = __pyx_v_thetype;
  __pyx_t_2 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_5 = PyArray_FROMANY(((System::Object^)__pyx_v_sig), __pyx_t_1, __pyx_int_1, __pyx_int_1, __pyx_t_2); 
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_sig = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":243
 *     a_sig = np.PyArray_FROMANY(sig, thetype, 1, 1, np.NPY_CONTIGUOUS)
 * 
 *     out = np.PyArray_SimpleNew(1, np.PyArray_DIMS(a_sig), thetype)             # <<<<<<<<<<<<<<
 *     N = np.PyArray_DIMS(a_sig)[0]
 * 
 */
  __pyx_t_5 = PyArray_SimpleNew(1, PyArray_DIMS(__pyx_v_a_sig), __pyx_v_thetype); 
  if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_out = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":244
 * 
 *     out = np.PyArray_SimpleNew(1, np.PyArray_DIMS(a_sig), thetype)
 *     N = np.PyArray_DIMS(a_sig)[0]             # <<<<<<<<<<<<<<
 * 
 *     convert_strides(np.PyArray_STRIDES(a_sig), &instrides,
 */
  __pyx_v_N = (PyArray_DIMS(__pyx_v_a_sig)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":247
 * 
 *     convert_strides(np.PyArray_STRIDES(a_sig), &instrides,
 *                     np.PyArray_DESCR(a_sig).elsize, 1)             # <<<<<<<<<<<<<<
 *     outstrides = 1
 * 
 */
  __pyx_t_5 = PyArray_DESCR(__pyx_v_a_sig); 
  __pyx_t_2 = __site_get_elsize_247_43->Target(__site_get_elsize_247_43, __pyx_t_5, __pyx_context);
  __pyx_t_5 = nullptr;
  __pyx_t_8 = __site_cvt_cvt_int_247_43->Target(__site_cvt_cvt_int_247_43, __pyx_t_2);
  __pyx_t_2 = nullptr;
  convert_strides(PyArray_STRIDES(__pyx_v_a_sig), (&__pyx_v_instrides), __pyx_t_8, 1);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":248
 *     convert_strides(np.PyArray_STRIDES(a_sig), &instrides,
 *                     np.PyArray_DESCR(a_sig).elsize, 1)
 *     outstrides = 1             # <<<<<<<<<<<<<<
 * 
 *     if thetype == np.NPY_FLOAT:
 */
  __pyx_v_outstrides = 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":250
 *     outstrides = 1
 * 
 *     if thetype == np.NPY_FLOAT:             # <<<<<<<<<<<<<<
 *         rc0 = c0.real
 *         rz1 = z1.real
 */
  __pyx_t_6 = (__pyx_v_thetype == NPY_FLOAT);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":251
 * 
 *     if thetype == np.NPY_FLOAT:
 *         rc0 = c0.real             # <<<<<<<<<<<<<<
 *         rz1 = z1.real
 *         if not (0.0 <= precision < 1.0):
 */
    __pyx_v_rc0 = __Pyx_CREAL(__pyx_v_c0);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":252
 *     if thetype == np.NPY_FLOAT:
 *         rc0 = c0.real
 *         rz1 = z1.real             # <<<<<<<<<<<<<<
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-6
 */
    __pyx_v_rz1 = __Pyx_CREAL(__pyx_v_z1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":253
 *         rc0 = c0.real
 *         rz1 = z1.real
 *         if not (0.0 <= precision < 1.0):             # <<<<<<<<<<<<<<
 *             precision = 1e-6
 *         ret = S_IIR_forback1(rc0, rz1,
 */
    __pyx_t_6 = (0.0 <= __pyx_v_precision);
    if (__pyx_t_6) {
      __pyx_t_6 = (__pyx_v_precision < 1.0);
    }
    __pyx_t_9 = (!__pyx_t_6);
    if (__pyx_t_9) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":254
 *         rz1 = z1.real
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-6             # <<<<<<<<<<<<<<
 *         ret = S_IIR_forback1(rc0, rz1,
 *                              <float *> np.PyArray_DATA(a_sig),
 */
      __pyx_v_precision = 1e-6;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":258
 *                              <float *> np.PyArray_DATA(a_sig),
 *                              <float *> np.PyArray_DATA(out), N,
 *                              instrides, outstrides, <float> precision)             # <<<<<<<<<<<<<<
 * 
 *     elif thetype == np.NPY_DOUBLE:
 */
    __pyx_v_ret = S_IIR_forback1(__pyx_v_rc0, __pyx_v_rz1, ((float *)PyArray_DATA(__pyx_v_a_sig)), ((float *)PyArray_DATA(__pyx_v_out)), __pyx_v_N, __pyx_v_instrides, __pyx_v_outstrides, ((float)__pyx_v_precision));
    goto __pyx_L3;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":260
 *                              instrides, outstrides, <float> precision)
 * 
 *     elif thetype == np.NPY_DOUBLE:             # <<<<<<<<<<<<<<
 *         rc0 = c0.real
 *         rz1 = z1.real
 */
  __pyx_t_9 = (__pyx_v_thetype == NPY_DOUBLE);
  if (__pyx_t_9) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":261
 * 
 *     elif thetype == np.NPY_DOUBLE:
 *         rc0 = c0.real             # <<<<<<<<<<<<<<
 *         rz1 = z1.real
 *         if not (0.0 <= precision < 1.0):
 */
    __pyx_v_rc0 = __Pyx_CREAL(__pyx_v_c0);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":262
 *     elif thetype == np.NPY_DOUBLE:
 *         rc0 = c0.real
 *         rz1 = z1.real             # <<<<<<<<<<<<<<
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-11
 */
    __pyx_v_rz1 = __Pyx_CREAL(__pyx_v_z1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":263
 *         rc0 = c0.real
 *         rz1 = z1.real
 *         if not (0.0 <= precision < 1.0):             # <<<<<<<<<<<<<<
 *             precision = 1e-11
 *         ret = D_IIR_forback1(rc0, rz1,
 */
    __pyx_t_9 = (0.0 <= __pyx_v_precision);
    if (__pyx_t_9) {
      __pyx_t_9 = (__pyx_v_precision < 1.0);
    }
    __pyx_t_6 = (!__pyx_t_9);
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":264
 *         rz1 = z1.real
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-11             # <<<<<<<<<<<<<<
 *         ret = D_IIR_forback1(rc0, rz1,
 *                              <double *> np.PyArray_DATA(a_sig),
 */
      __pyx_v_precision = 1e-11;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":268
 *                              <double *> np.PyArray_DATA(a_sig),
 *                              <double *> np.PyArray_DATA(out), N,
 *                              instrides, outstrides, precision)             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
    __pyx_v_ret = D_IIR_forback1(__pyx_v_rc0, __pyx_v_rz1, ((double *)PyArray_DATA(__pyx_v_a_sig)), ((double *)PyArray_DATA(__pyx_v_out)), __pyx_v_N, __pyx_v_instrides, __pyx_v_outstrides, __pyx_v_precision);
    goto __pyx_L3;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":271
 * 
 *     else:
 *         raise Exception("Incorrect type.")             # <<<<<<<<<<<<<<
 * 
 *     if ret == -1:
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_5 = __site_call1_271_23->Target(__site_call1_271_23, __pyx_context, __pyx_t_2, ((System::Object^)"Incorrect type."));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":273
 *         raise Exception("Incorrect type.")
 * 
 *     if ret == -1:             # <<<<<<<<<<<<<<
 *         raise Exception("Could not allocate enough memory.")
 *     if ret == -2:
 */
  __pyx_t_6 = (__pyx_v_ret == -1);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":274
 * 
 *     if ret == -1:
 *         raise Exception("Could not allocate enough memory.")             # <<<<<<<<<<<<<<
 *     if ret == -2:
 *         raise Exception("|z1| must be less than 1.0")
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_2 = __site_call1_274_23->Target(__site_call1_274_23, __pyx_context, __pyx_t_5, ((System::Object^)"Could not allocate enough memory."));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":275
 *     if ret == -1:
 *         raise Exception("Could not allocate enough memory.")
 *     if ret == -2:             # <<<<<<<<<<<<<<
 *         raise Exception("|z1| must be less than 1.0")
 *     if ret == -3:
 */
  __pyx_t_6 = (__pyx_v_ret == -2);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":276
 *         raise Exception("Could not allocate enough memory.")
 *     if ret == -2:
 *         raise Exception("|z1| must be less than 1.0")             # <<<<<<<<<<<<<<
 *     if ret == -3:
 *         raise Exception("Sum to find symmetric boundary conditions did not "
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_5 = __site_call1_276_23->Target(__site_call1_276_23, __pyx_context, __pyx_t_2, ((System::Object^)"|z1| must be less than 1.0"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":277
 *     if ret == -2:
 *         raise Exception("|z1| must be less than 1.0")
 *     if ret == -3:             # <<<<<<<<<<<<<<
 *         raise Exception("Sum to find symmetric boundary conditions did not "
 *                         "converge.")
 */
  __pyx_t_6 = (__pyx_v_ret == -3);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":278
 *         raise Exception("|z1| must be less than 1.0")
 *     if ret == -3:
 *         raise Exception("Sum to find symmetric boundary conditions did not "             # <<<<<<<<<<<<<<
 *                         "converge.")
 * 
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_2 = __site_call1_278_23->Target(__site_call1_278_23, __pyx_context, __pyx_t_5, ((System::Object^)"Sum to find symmetric boundary conditions did not converge."));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":281
 *                         "converge.")
 * 
 *     return np.PyArray_Return(out)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_2 = PyArray_Return(((System::Object^)__pyx_v_out)); 
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":284
 * 
 * 
 * def symiirorder2(np.ndarray sig, double r, double omega, double precision=-1.0):             # <<<<<<<<<<<<<<
 *     """symiirorder2(input, r, omega {, precision}) -> output
 * 
 */

static System::Object^ symiirorder2(System::Object^ sig, System::Object^ r, System::Object^ omega, [InteropServices::Optional]System::Object^ precision) {
  NumpyDotNet::ndarray^ __pyx_v_sig = nullptr;
  double __pyx_v_r;
  double __pyx_v_omega;
  double __pyx_v_precision;
  int __pyx_v_thetype;
  int __pyx_v_N;
  int __pyx_v_ret;
  __pyx_t_5numpy_npy_intp __pyx_v_outstrides;
  __pyx_t_5numpy_npy_intp __pyx_v_instrides;
  NumpyDotNet::ndarray^ __pyx_v_a_sig;
  NumpyDotNet::ndarray^ __pyx_v_out;
  System::Object^ __pyx_v_type;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  enum NPY_TYPES __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  int __pyx_t_6;
  int __pyx_t_7;
  int __pyx_t_8;
  int __pyx_t_9;
  __pyx_v_sig = ((NumpyDotNet::ndarray^)sig);
  __pyx_v_r = __site_cvt_cvt_double_284_0->Target(__site_cvt_cvt_double_284_0, r);
  __pyx_v_omega = __site_cvt_cvt_double_284_0_1->Target(__site_cvt_cvt_double_284_0_1, omega);
  if (dynamic_cast<System::Reflection::Missing^>(precision) == nullptr) {
    __pyx_v_precision = __site_cvt_cvt_double_284_0_2->Target(__site_cvt_cvt_double_284_0_2, precision);
  } else {
    __pyx_v_precision = __pyx_k_4;
  }
  __pyx_v_a_sig = nullptr;
  __pyx_v_out = nullptr;
  __pyx_v_type = nullptr;
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_sig) == nullptr)) {
    throw PythonOps::TypeError("Argument 'sig' has incorrect type");
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":316
 *     cdef np.ndarray a_sig, out
 * 
 *     type = np.NpyArray_FindArrayType_2args(sig, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))             # <<<<<<<<<<<<<<
 *     thetype = min(type.type, np.NPY_DOUBLE)
 *     a_sig = np.PyArray_FROMANY(sig, thetype, 1, 1, np.NPY_CONTIGUOUS)
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(NPY_FLOAT))); 
  __pyx_t_2 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_sig), ((NumpyDotNet::dtype^)__pyx_t_1))); 
  __pyx_t_1 = nullptr;
  __pyx_v_type = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":317
 * 
 *     type = np.NpyArray_FindArrayType_2args(sig, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))
 *     thetype = min(type.type, np.NPY_DOUBLE)             # <<<<<<<<<<<<<<
 *     a_sig = np.PyArray_FROMANY(sig, thetype, 1, 1, np.NPY_CONTIGUOUS)
 * 
 */
  __pyx_t_3 = NPY_DOUBLE;
  __pyx_t_2 = __site_get_type_317_22->Target(__site_get_type_317_22, __pyx_v_type, __pyx_context);
  __pyx_t_4 = (System::Object^)(long long)(__pyx_t_3);
  __pyx_t_5 = __site_op_lt_317_31->Target(__site_op_lt_317_31, __pyx_t_4, __pyx_t_2);
  __pyx_t_4 = nullptr;
  __pyx_t_6 = __site_istrue_317_31->Target(__site_istrue_317_31, __pyx_t_5);
  __pyx_t_5 = nullptr;
  if (__pyx_t_6) {
    __pyx_t_5 = (System::Object^)(long long)(__pyx_t_3);
    __pyx_t_1 = __pyx_t_5;
    __pyx_t_5 = nullptr;
  } else {
    __pyx_t_1 = __pyx_t_2;
  }
  __pyx_t_7 = __site_cvt_cvt_int_317_31->Target(__site_cvt_cvt_int_317_31, __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_v_thetype = __pyx_t_7;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":318
 *     type = np.NpyArray_FindArrayType_2args(sig, np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.NPY_FLOAT)))
 *     thetype = min(type.type, np.NPY_DOUBLE)
 *     a_sig = np.PyArray_FROMANY(sig, thetype, 1, 1, np.NPY_CONTIGUOUS)             # <<<<<<<<<<<<<<
 * 
 *     out = np.PyArray_SimpleNew(1, np.PyArray_DIMS(a_sig),thetype)
 */
  __pyx_t_1 = __pyx_v_thetype;
  __pyx_t_2 = (System::Object^)(long long)(NPY_CONTIGUOUS);
  __pyx_t_5 = PyArray_FROMANY(((System::Object^)__pyx_v_sig), __pyx_t_1, __pyx_int_1, __pyx_int_1, __pyx_t_2); 
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;
  if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a_sig = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":320
 *     a_sig = np.PyArray_FROMANY(sig, thetype, 1, 1, np.NPY_CONTIGUOUS)
 * 
 *     out = np.PyArray_SimpleNew(1, np.PyArray_DIMS(a_sig),thetype)             # <<<<<<<<<<<<<<
 *     N = np.PyArray_DIMS(a_sig)[0]
 * 
 */
  __pyx_t_5 = PyArray_SimpleNew(1, PyArray_DIMS(__pyx_v_a_sig), __pyx_v_thetype); 
  if (__pyx_t_5 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_out = ((NumpyDotNet::ndarray^)__pyx_t_5);
  __pyx_t_5 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":321
 * 
 *     out = np.PyArray_SimpleNew(1, np.PyArray_DIMS(a_sig),thetype)
 *     N = np.PyArray_DIMS(a_sig)[0]             # <<<<<<<<<<<<<<
 * 
 *     convert_strides(np.PyArray_STRIDES(a_sig), &instrides,
 */
  __pyx_v_N = (PyArray_DIMS(__pyx_v_a_sig)[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":324
 * 
 *     convert_strides(np.PyArray_STRIDES(a_sig), &instrides,
 *                     np.PyArray_DESCR(a_sig).elsize, 1)             # <<<<<<<<<<<<<<
 *     outstrides = 1
 * 
 */
  __pyx_t_5 = PyArray_DESCR(__pyx_v_a_sig); 
  __pyx_t_2 = __site_get_elsize_324_43->Target(__site_get_elsize_324_43, __pyx_t_5, __pyx_context);
  __pyx_t_5 = nullptr;
  __pyx_t_8 = __site_cvt_cvt_int_324_43->Target(__site_cvt_cvt_int_324_43, __pyx_t_2);
  __pyx_t_2 = nullptr;
  convert_strides(PyArray_STRIDES(__pyx_v_a_sig), (&__pyx_v_instrides), __pyx_t_8, 1);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":325
 *     convert_strides(np.PyArray_STRIDES(a_sig), &instrides,
 *                     np.PyArray_DESCR(a_sig).elsize, 1)
 *     outstrides = 1             # <<<<<<<<<<<<<<
 * 
 *     if thetype == np.NPY_FLOAT:
 */
  __pyx_v_outstrides = 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":327
 *     outstrides = 1
 * 
 *     if thetype == np.NPY_FLOAT:             # <<<<<<<<<<<<<<
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-6
 */
  __pyx_t_6 = (__pyx_v_thetype == NPY_FLOAT);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":328
 * 
 *     if thetype == np.NPY_FLOAT:
 *         if not (0.0 <= precision < 1.0):             # <<<<<<<<<<<<<<
 *             precision = 1e-6
 *         ret = S_IIR_forback2(r, omega, <float *> np.PyArray_DATA(a_sig),
 */
    __pyx_t_6 = (0.0 <= __pyx_v_precision);
    if (__pyx_t_6) {
      __pyx_t_6 = (__pyx_v_precision < 1.0);
    }
    __pyx_t_9 = (!__pyx_t_6);
    if (__pyx_t_9) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":329
 *     if thetype == np.NPY_FLOAT:
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-6             # <<<<<<<<<<<<<<
 *         ret = S_IIR_forback2(r, omega, <float *> np.PyArray_DATA(a_sig),
 *                              <float *> np.PyArray_DATA(out), N,
 */
      __pyx_v_precision = 1e-6;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":332
 *         ret = S_IIR_forback2(r, omega, <float *> np.PyArray_DATA(a_sig),
 *                              <float *> np.PyArray_DATA(out), N,
 *                              instrides, outstrides, precision)             # <<<<<<<<<<<<<<
 * 
 *     elif thetype == np.NPY_DOUBLE:
 */
    __pyx_v_ret = S_IIR_forback2(__pyx_v_r, __pyx_v_omega, ((float *)PyArray_DATA(__pyx_v_a_sig)), ((float *)PyArray_DATA(__pyx_v_out)), __pyx_v_N, __pyx_v_instrides, __pyx_v_outstrides, __pyx_v_precision);
    goto __pyx_L5;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":334
 *                              instrides, outstrides, precision)
 * 
 *     elif thetype == np.NPY_DOUBLE:             # <<<<<<<<<<<<<<
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-11
 */
  __pyx_t_9 = (__pyx_v_thetype == NPY_DOUBLE);
  if (__pyx_t_9) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":335
 * 
 *     elif thetype == np.NPY_DOUBLE:
 *         if not (0.0 <= precision < 1.0):             # <<<<<<<<<<<<<<
 *             precision = 1e-11
 *         ret = D_IIR_forback2(r, omega, <double *> np.PyArray_DATA(a_sig),
 */
    __pyx_t_9 = (0.0 <= __pyx_v_precision);
    if (__pyx_t_9) {
      __pyx_t_9 = (__pyx_v_precision < 1.0);
    }
    __pyx_t_6 = (!__pyx_t_9);
    if (__pyx_t_6) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":336
 *     elif thetype == np.NPY_DOUBLE:
 *         if not (0.0 <= precision < 1.0):
 *             precision = 1e-11             # <<<<<<<<<<<<<<
 *         ret = D_IIR_forback2(r, omega, <double *> np.PyArray_DATA(a_sig),
 *                              <double *> np.PyArray_DATA(out), N,
 */
      __pyx_v_precision = 1e-11;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":339
 *         ret = D_IIR_forback2(r, omega, <double *> np.PyArray_DATA(a_sig),
 *                              <double *> np.PyArray_DATA(out), N,
 *                              instrides, outstrides, precision)             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
    __pyx_v_ret = D_IIR_forback2(__pyx_v_r, __pyx_v_omega, ((double *)PyArray_DATA(__pyx_v_a_sig)), ((double *)PyArray_DATA(__pyx_v_out)), __pyx_v_N, __pyx_v_instrides, __pyx_v_outstrides, __pyx_v_precision);
    goto __pyx_L5;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":342
 * 
 *     else:
 *         raise Exception("Incorrect type.")             # <<<<<<<<<<<<<<
 * 
 *     if ret < 0:
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_5 = __site_call1_342_23->Target(__site_call1_342_23, __pyx_context, __pyx_t_2, ((System::Object^)"Incorrect type."));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
    __pyx_t_5 = nullptr;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":344
 *         raise Exception("Incorrect type.")
 * 
 *     if ret < 0:             # <<<<<<<<<<<<<<
 *         raise Exception("Problem occurred inside routine.")
 * 
 */
  __pyx_t_6 = (__pyx_v_ret < 0);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":345
 * 
 *     if ret < 0:
 *         raise Exception("Problem occurred inside routine.")             # <<<<<<<<<<<<<<
 * 
 *     return np.PyArray_Return(out)
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "Exception");
    __pyx_t_2 = __site_call1_345_23->Target(__site_call1_345_23, __pyx_context, __pyx_t_5, ((System::Object^)"Problem occurred inside routine."));
    __pyx_t_5 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":347
 *         raise Exception("Problem occurred inside routine.")
 * 
 *     return np.PyArray_Return(out)             # <<<<<<<<<<<<<<
 */
  __pyx_t_2 = PyArray_Return(((System::Object^)__pyx_v_out)); 
  __pyx_r = __pyx_t_2;
  __pyx_t_2 = nullptr;
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
  __site_cvt_cvt_double_41_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_41_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_get_type_57_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "type", false));
  __site_op_lt_57_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_57_31 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_57_31 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_elsize_66_45 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "elsize", false));
  __site_cvt_cvt_int_66_45 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_87_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_90_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_double_95_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_111_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_type_114_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "type", false));
  __site_op_lt_114_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_114_31 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_114_31 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_elsize_122_45 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "elsize", false));
  __site_cvt_cvt_int_122_45 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_le_127_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_op_lt_127_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_127_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_float_132_48 = CallSite< System::Func< CallSite^, System::Object^, float >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, float::typeid, ConversionResultKind::ExplicitCast));
  __site_op_le_135_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThanOrEqual));
  __site_op_lt_135_33 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_135_20 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_140_47 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_143_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_146_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_type_166_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "type", false));
  __site_op_lt_166_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_166_31 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_166_31 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_elsize_176_45 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "elsize", false));
  __site_cvt_cvt_int_176_45 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_199_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_202_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_type_240_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "type", false));
  __site_op_lt_240_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_240_31 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_240_31 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_elsize_247_43 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "elsize", false));
  __site_cvt_cvt_int_247_43 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_271_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_274_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_276_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_278_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_double_284_0 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_284_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_double_284_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_get_type_317_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "type", false));
  __site_op_lt_317_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::LessThan));
  __site_istrue_317_31 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_317_31 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_elsize_324_43 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "elsize", false));
  __site_cvt_cvt_int_324_43 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_342_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_345_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":1
 * __version__ = '0.2'             # <<<<<<<<<<<<<<
 * 
 * cimport numpy as np
 */
  PythonOps::SetGlobal(__pyx_context, "__version__", ((System::Object^)"0.2"));

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":41
 * 
 * 
 * def cspline2d(np.ndarray image, double lambda_=0.0, double precision=-1.0):             # <<<<<<<<<<<<<<
 *     """cspline2d(input {, lambda, precision}) -> ck
 * 
 */
  __pyx_k_1 = (-1.0);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":95
 * 
 * 
 * def qspline2d(np.ndarray image, double lambda_=0.0, precision=-1.0):             # <<<<<<<<<<<<<<
 *     """qspline2d(input {, lambda, precision}) -> qk
 * 
 */
  __pyx_t_1 = (-1.0);
  __pyx_k_2 = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":207
 * 
 * 
 * cpdef symiirorder1(np.ndarray sig, Py_complex c0, Py_complex z1, double precision=-1.0):             # <<<<<<<<<<<<<<
 *     """symiirorder1(input, c0, z1 {, precision}) -> output
 * 
 */
  __pyx_k_3 = (-1.0);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":284
 * 
 * 
 * def symiirorder2(np.ndarray sig, double r, double omega, double precision=-1.0):             # <<<<<<<<<<<<<<
 *     """symiirorder2(input, r, omega {, precision}) -> output
 * 
 */
  __pyx_k_4 = (-1.0);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/signal/spline.pyx":1
 * __version__ = '0.2'             # <<<<<<<<<<<<<<
 * 
 * cimport numpy as np
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

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
/* Cython code section 'end' */
};
[assembly: PythonModule("scipy__signal__spline", module_spline::typeid)];
};
