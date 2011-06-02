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
  dict["__module__"] = "scipy.signal.correlate_nd";
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
#define __PYX_HAVE_API__scipy__signal__correlate_nd
#include "npy_common.h"
#include "npy_defs.h"
#include "npy_descriptor.h"
#include "npy_arrayobject.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_iterators.h"
#include "npy_ironpython.h"
#include "stdlib.h"
#include "iterhelper.h"
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

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":15
 *     np.PyArray_CopySwapFunc ARRAY_COPYSWAP_FUNC(np.NpyArray *arr)
 * 
 * cdef enum:             # <<<<<<<<<<<<<<
 *     CORR_MODE_VALID = 0
 *     CORR_MODE_SAME  = 1
 */

public enum  {
  __pyx_e_5scipy_6signal_12correlate_nd_CORR_MODE_VALID = 0,
  __pyx_e_5scipy_6signal_12correlate_nd_CORR_MODE_SAME = 1,
  __pyx_e_5scipy_6signal_12correlate_nd_CORR_MODE_FULL = 2
};
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
/* Module declarations from scipy.signal.correlate_nd */
static int _imp_correlate_nd_ubyte(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_byte(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_ushort(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_short(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_uint(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_int(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_ulong(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_long(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_ulonglong(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_longlong(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_float(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_double(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_longdouble(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_cfloat(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_cdouble(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_clongdouble(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static int _imp_correlate_nd_object(NpyArrayNeighborhoodIterObject *, NpyArrayNeighborhoodIterObject *, NpyArrayIterObject *, NpyArrayIterObject *); /*proto*/
static System::Object^ _correlate_nd_imp(NpyArrayIterObject *, NpyArrayIterObject *, NpyArrayIterObject *, int, int); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.signal.correlate_nd"

/* Implementation of scipy.signal.correlate_nd */
namespace clr_correlate_nd {
  public ref class module_correlate_nd sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_20_0;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ne_33_27;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_33_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_34_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_36_27;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_36_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_37_24;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_num_43_27;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_43_27;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_45_26;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_460_48;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_459_42;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_PyDataMem_FREE_472_6;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_472_21;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_488_38;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_494_38;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_505_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_514_25;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_cvt_long_518_34;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_563_24;
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
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":20
 *     CORR_MODE_FULL  = 2
 * 
 * def scipy_signal_sigtools_correlateND(np.ndarray ax, np.ndarray ay, np.ndarray aout, int mode):             # <<<<<<<<<<<<<<
 *     cdef np.NpyArrayIterObject *itx, *ity, *itz
 *     cdef int st
 */

static System::Object^ scipy_signal_sigtools_correlateND(System::Object^ ax, System::Object^ ay, System::Object^ aout, System::Object^ mode) {
  NumpyDotNet::ndarray^ __pyx_v_ax = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_ay = nullptr;
  NumpyDotNet::ndarray^ __pyx_v_aout = nullptr;
  int __pyx_v_mode;
  NpyArrayIterObject *__pyx_v_itx;
  NpyArrayIterObject *__pyx_v_ity;
  NpyArrayIterObject *__pyx_v_itz;
  int __pyx_v_st;
  NumpyDotNet::dtype^ __pyx_v_type;
  int __pyx_v_typenum;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_t_6;
  __pyx_v_ax = ((NumpyDotNet::ndarray^)ax);
  __pyx_v_ay = ((NumpyDotNet::ndarray^)ay);
  __pyx_v_aout = ((NumpyDotNet::ndarray^)aout);
  __pyx_v_mode = __site_cvt_cvt_int_20_0->Target(__site_cvt_cvt_int_20_0, mode);
  __pyx_v_type = nullptr;
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ax) == nullptr)) {
    throw PythonOps::TypeError("Argument 'ax' has incorrect type");
  }
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_ay) == nullptr)) {
    throw PythonOps::TypeError("Argument 'ay' has incorrect type");
  }
  if (unlikely(dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_aout) == nullptr)) {
    throw PythonOps::TypeError("Argument 'aout' has incorrect type");
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":25
 *     cdef np.dtype type
 * 
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(ax)))             # <<<<<<<<<<<<<<
 *     type = np.NpyArray_FindArrayType_2args(ay, type)
 *     type = np.NpyArray_FindArrayType_2args(aout, type)
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(PyArray_TYPE(__pyx_v_ax)))); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":26
 * 
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(ax)))
 *     type = np.NpyArray_FindArrayType_2args(ay, type)             # <<<<<<<<<<<<<<
 *     type = np.NpyArray_FindArrayType_2args(aout, type)
 * 
 */
  __pyx_t_1 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_ay), __pyx_v_type)); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":27
 *     type = np.Npy_INTERFACE_descr(np.NpyArray_DescrFromType(np.PyArray_TYPE(ax)))
 *     type = np.NpyArray_FindArrayType_2args(ay, type)
 *     type = np.NpyArray_FindArrayType_2args(aout, type)             # <<<<<<<<<<<<<<
 * 
 *     ax = np.PyArray_FromAny(ax, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 */
  __pyx_t_1 = ((System::Object^)NpyArray_FindArrayType_2args(((System::Object^)__pyx_v_aout), __pyx_v_type)); 
  __pyx_v_type = ((NumpyDotNet::dtype^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":29
 *     type = np.NpyArray_FindArrayType_2args(aout, type)
 * 
 *     ax = np.PyArray_FromAny(ax, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);             # <<<<<<<<<<<<<<
 *     ay = np.PyArray_FromAny(ay, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 *     aout = np.PyArray_FromAny(aout, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 */
  __pyx_t_1 = (System::Object^)(long long)((NPY_BEHAVED | NPY_ENSUREARRAY));
  __pyx_t_2 = PyArray_FromAny(((System::Object^)__pyx_v_ax), ((System::Object^)__pyx_v_type), __pyx_int_0, __pyx_int_0, __pyx_t_1, nullptr); 
  __pyx_t_1 = nullptr;
  if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_ax = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":30
 * 
 *     ax = np.PyArray_FromAny(ax, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 *     ay = np.PyArray_FromAny(ay, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);             # <<<<<<<<<<<<<<
 *     aout = np.PyArray_FromAny(aout, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 * 
 */
  __pyx_t_2 = (System::Object^)(long long)((NPY_BEHAVED | NPY_ENSUREARRAY));
  __pyx_t_1 = PyArray_FromAny(((System::Object^)__pyx_v_ay), ((System::Object^)__pyx_v_type), __pyx_int_0, __pyx_int_0, __pyx_t_2, nullptr); 
  __pyx_t_2 = nullptr;
  if (__pyx_t_1 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_ay = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":31
 *     ax = np.PyArray_FromAny(ax, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 *     ay = np.PyArray_FromAny(ay, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 *     aout = np.PyArray_FromAny(aout, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);             # <<<<<<<<<<<<<<
 * 
 *     if np.PyArray_NDIM(ax) != np.PyArray_NDIM(ay):
 */
  __pyx_t_1 = (System::Object^)(long long)((NPY_BEHAVED | NPY_ENSUREARRAY));
  __pyx_t_2 = PyArray_FromAny(((System::Object^)__pyx_v_aout), ((System::Object^)__pyx_v_type), __pyx_int_0, __pyx_int_0, __pyx_t_1, nullptr); 
  __pyx_t_1 = nullptr;
  if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_aout = ((NumpyDotNet::ndarray^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":33
 *     aout = np.PyArray_FromAny(aout, type, 0, 0, np.NPY_BEHAVED | np.NPY_ENSUREARRAY, None);
 * 
 *     if np.PyArray_NDIM(ax) != np.PyArray_NDIM(ay):             # <<<<<<<<<<<<<<
 *         raise ValueError("Arrays must have the same number of dimensions.")
 * 
 */
  __pyx_t_2 = PyArray_NDIM(__pyx_v_ax); 
  __pyx_t_1 = PyArray_NDIM(__pyx_v_ay); 
  __pyx_t_3 = __site_op_ne_33_27->Target(__site_op_ne_33_27, __pyx_t_2, __pyx_t_1);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_4 = __site_istrue_33_27->Target(__site_istrue_33_27, __pyx_t_3);
  __pyx_t_3 = nullptr;
  if (__pyx_t_4) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":34
 * 
 *     if np.PyArray_NDIM(ax) != np.PyArray_NDIM(ay):
 *         raise ValueError("Arrays must have the same number of dimensions.")             # <<<<<<<<<<<<<<
 * 
 *     if np.PyArray_NDIM(ax) == 0:
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_34_24->Target(__site_call1_34_24, __pyx_context, __pyx_t_3, ((System::Object^)"Arrays must have the same number of dimensions."));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":36
 *         raise ValueError("Arrays must have the same number of dimensions.")
 * 
 *     if np.PyArray_NDIM(ax) == 0:             # <<<<<<<<<<<<<<
 *         raise ValueError("Cannot convolve zero-dimensional arrays.")
 * 
 */
  __pyx_t_1 = PyArray_NDIM(__pyx_v_ax); 
  __pyx_t_3 = __site_op_eq_36_27->Target(__site_op_eq_36_27, __pyx_t_1, __pyx_int_0);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = __site_istrue_36_27->Target(__site_istrue_36_27, __pyx_t_3);
  __pyx_t_3 = nullptr;
  if (__pyx_t_4) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":37
 * 
 *     if np.PyArray_NDIM(ax) == 0:
 *         raise ValueError("Cannot convolve zero-dimensional arrays.")             # <<<<<<<<<<<<<<
 * 
 *     itx = np.PyArray_IterNew(ax)
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_37_24->Target(__site_call1_37_24, __pyx_context, __pyx_t_3, ((System::Object^)"Cannot convolve zero-dimensional arrays."));
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":39
 *         raise ValueError("Cannot convolve zero-dimensional arrays.")
 * 
 *     itx = np.PyArray_IterNew(ax)             # <<<<<<<<<<<<<<
 *     ity = np.PyArray_IterNew(ay)
 *     itz = np.PyArray_IterNew(aout)
 */
  __pyx_v_itx = PyArray_IterNew(__pyx_v_ax);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":40
 * 
 *     itx = np.PyArray_IterNew(ax)
 *     ity = np.PyArray_IterNew(ay)             # <<<<<<<<<<<<<<
 *     itz = np.PyArray_IterNew(aout)
 * 
 */
  __pyx_v_ity = PyArray_IterNew(__pyx_v_ay);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":41
 *     itx = np.PyArray_IterNew(ax)
 *     ity = np.PyArray_IterNew(ay)
 *     itz = np.PyArray_IterNew(aout)             # <<<<<<<<<<<<<<
 * 
 *     cdef int typenum = type.num
 */
  __pyx_v_itz = PyArray_IterNew(__pyx_v_aout);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":43
 *     itz = np.PyArray_IterNew(aout)
 * 
 *     cdef int typenum = type.num             # <<<<<<<<<<<<<<
 * 
 *     st = _correlate_nd_imp(itx, ity, itz, typenum, mode);
 */
  __pyx_t_1 = __site_get_num_43_27->Target(__site_get_num_43_27, ((System::Object^)__pyx_v_type), __pyx_context);
  __pyx_t_5 = __site_cvt_cvt_int_43_27->Target(__site_cvt_cvt_int_43_27, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_typenum = __pyx_t_5;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":45
 *     cdef int typenum = type.num
 * 
 *     st = _correlate_nd_imp(itx, ity, itz, typenum, mode);             # <<<<<<<<<<<<<<
 *     if st:
 *         return None
 */
  __pyx_t_1 = _correlate_nd_imp(__pyx_v_itx, __pyx_v_ity, __pyx_v_itz, __pyx_v_typenum, __pyx_v_mode); 
  __pyx_t_6 = __site_cvt_cvt_int_45_26->Target(__site_cvt_cvt_int_45_26, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_st = __pyx_t_6;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":46
 * 
 *     st = _correlate_nd_imp(itx, ity, itz, typenum, mode);
 *     if st:             # <<<<<<<<<<<<<<
 *         return None
 * 
 */
  if (__pyx_v_st) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":47
 *     st = _correlate_nd_imp(itx, ity, itz, typenum, mode);
 *     if st:
 *         return None             # <<<<<<<<<<<<<<
 * 
 *     return np.PyArray_Return(aout)
 */
    __pyx_r = nullptr;
    goto __pyx_L0;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":49
 *         return None
 * 
 *     return np.PyArray_Return(aout)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = PyArray_Return(((System::Object^)__pyx_v_aout)); 
  __pyx_r = __pyx_t_1;
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":55
 * # Implementation of the type-specific correlation 'kernels'
 * #
 * cdef int _imp_correlate_nd_ubyte(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_ubyte(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_ubyte __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":61
 *     cdef np.npy_ubyte acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":62
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":63
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ubyte*>curneighx.dataptr)[0] * (<np.npy_ubyte*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":64
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_ubyte*>curneighx.dataptr)[0] * (<np.npy_ubyte*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":65
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ubyte*>curneighx.dataptr)[0] * (<np.npy_ubyte*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_ubyte *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_ubyte *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":67
 *             acc += (<np.npy_ubyte*>curneighx.dataptr)[0] * (<np.npy_ubyte*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":68
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":70
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_ubyte*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":72
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_ubyte*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_ubyte *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":74
 *         (<np.npy_ubyte*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":75
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":77
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_byte(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":78
 * 
 *     return 0
 * cdef int _imp_correlate_nd_byte(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_byte(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_byte __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":84
 *     cdef np.npy_byte acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":85
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":86
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_byte*>curneighx.dataptr)[0] * (<np.npy_byte*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":87
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_byte*>curneighx.dataptr)[0] * (<np.npy_byte*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":88
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_byte*>curneighx.dataptr)[0] * (<np.npy_byte*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_byte *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_byte *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":90
 *             acc += (<np.npy_byte*>curneighx.dataptr)[0] * (<np.npy_byte*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":91
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":93
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_byte*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":95
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_byte*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_byte *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":97
 *         (<np.npy_byte*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":98
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":100
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_ushort(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":101
 * 
 *     return 0
 * cdef int _imp_correlate_nd_ushort(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_ushort(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_ushort __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":107
 *     cdef np.npy_ushort acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":108
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":109
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ushort*>curneighx.dataptr)[0] * (<np.npy_ushort*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":110
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_ushort*>curneighx.dataptr)[0] * (<np.npy_ushort*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":111
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ushort*>curneighx.dataptr)[0] * (<np.npy_ushort*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_ushort *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_ushort *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":113
 *             acc += (<np.npy_ushort*>curneighx.dataptr)[0] * (<np.npy_ushort*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":114
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":116
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_ushort*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":118
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_ushort*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_ushort *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":120
 *         (<np.npy_ushort*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":121
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":123
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_short(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":124
 * 
 *     return 0
 * cdef int _imp_correlate_nd_short(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_short(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  short __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":130
 *     cdef short acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":131
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":132
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<short*>curneighx.dataptr)[0] * (<short*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":133
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<short*>curneighx.dataptr)[0] * (<short*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":134
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<short*>curneighx.dataptr)[0] * (<short*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((short *)__pyx_v_curneighx->dataptr)[0]) * (((short *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":136
 *             acc += (<short*>curneighx.dataptr)[0] * (<short*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":137
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":139
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<short*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":141
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<short*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((short *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":143
 *         (<short*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":144
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":146
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_uint(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":147
 * 
 *     return 0
 * cdef int _imp_correlate_nd_uint(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_uint(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_uint __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":153
 *     cdef np.npy_uint acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":154
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":155
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_uint*>curneighx.dataptr)[0] * (<np.npy_uint*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":156
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_uint*>curneighx.dataptr)[0] * (<np.npy_uint*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":157
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_uint*>curneighx.dataptr)[0] * (<np.npy_uint*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_uint *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_uint *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":159
 *             acc += (<np.npy_uint*>curneighx.dataptr)[0] * (<np.npy_uint*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":160
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":162
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_uint*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":164
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_uint*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_uint *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":166
 *         (<np.npy_uint*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":167
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":169
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_int(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":170
 * 
 *     return 0
 * cdef int _imp_correlate_nd_int(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_int(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  int __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":176
 *     cdef int acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":177
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":178
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<int*>curneighx.dataptr)[0] * (<int*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":179
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<int*>curneighx.dataptr)[0] * (<int*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":180
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<int*>curneighx.dataptr)[0] * (<int*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((int *)__pyx_v_curneighx->dataptr)[0]) * (((int *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":182
 *             acc += (<int*>curneighx.dataptr)[0] * (<int*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":183
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":185
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<int*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":187
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<int*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((int *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":189
 *         (<int*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":190
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":192
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_ulong(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":193
 * 
 *     return 0
 * cdef int _imp_correlate_nd_ulong(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_ulong(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_ulong __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":199
 *     cdef np.npy_ulong acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":200
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":201
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ulong*>curneighx.dataptr)[0] * (<np.npy_ulong*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":202
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_ulong*>curneighx.dataptr)[0] * (<np.npy_ulong*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":203
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ulong*>curneighx.dataptr)[0] * (<np.npy_ulong*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_ulong *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_ulong *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":205
 *             acc += (<np.npy_ulong*>curneighx.dataptr)[0] * (<np.npy_ulong*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":206
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":208
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_ulong*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":210
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_ulong*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_ulong *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":212
 *         (<np.npy_ulong*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":213
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":215
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_long(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":216
 * 
 *     return 0
 * cdef int _imp_correlate_nd_long(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_long(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  long __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":222
 *     cdef long acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":223
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":224
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<long*>curneighx.dataptr)[0] * (<long*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":225
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<long*>curneighx.dataptr)[0] * (<long*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":226
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<long*>curneighx.dataptr)[0] * (<long*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((long *)__pyx_v_curneighx->dataptr)[0]) * (((long *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":228
 *             acc += (<long*>curneighx.dataptr)[0] * (<long*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":229
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":231
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<long*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":233
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<long*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((long *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":235
 *         (<long*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":236
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":238
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_ulonglong(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":239
 * 
 *     return 0
 * cdef int _imp_correlate_nd_ulonglong(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_ulonglong(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_ulonglong __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":245
 *     cdef np.npy_ulonglong acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":246
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":247
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ulonglong*>curneighx.dataptr)[0] * (<np.npy_ulonglong*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":248
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_ulonglong*>curneighx.dataptr)[0] * (<np.npy_ulonglong*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":249
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_ulonglong*>curneighx.dataptr)[0] * (<np.npy_ulonglong*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_ulonglong *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_ulonglong *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":251
 *             acc += (<np.npy_ulonglong*>curneighx.dataptr)[0] * (<np.npy_ulonglong*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":252
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":254
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_ulonglong*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":256
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_ulonglong*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_ulonglong *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":258
 *         (<np.npy_ulonglong*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":259
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":261
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_longlong(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":262
 * 
 *     return 0
 * cdef int _imp_correlate_nd_longlong(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_longlong(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_longlong __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":268
 *     cdef np.npy_longlong acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":269
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":270
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_longlong*>curneighx.dataptr)[0] * (<np.npy_longlong*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":271
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_longlong*>curneighx.dataptr)[0] * (<np.npy_longlong*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":272
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_longlong*>curneighx.dataptr)[0] * (<np.npy_longlong*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_longlong *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_longlong *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":274
 *             acc += (<np.npy_longlong*>curneighx.dataptr)[0] * (<np.npy_longlong*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":275
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":277
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_longlong*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":279
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_longlong*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_longlong *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":281
 *         (<np.npy_longlong*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":282
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":284
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_float(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":285
 * 
 *     return 0
 * cdef int _imp_correlate_nd_float(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_float(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  float __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":291
 *     cdef float acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":292
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0.0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":293
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<float*>curneighx.dataptr)[0] * (<float*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":294
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<float*>curneighx.dataptr)[0] * (<float*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":295
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<float*>curneighx.dataptr)[0] * (<float*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((float *)__pyx_v_curneighx->dataptr)[0]) * (((float *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":297
 *             acc += (<float*>curneighx.dataptr)[0] * (<float*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":298
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":300
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<float*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":302
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<float*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((float *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":304
 *         (<float*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":305
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":307
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_double(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":308
 * 
 *     return 0
 * cdef int _imp_correlate_nd_double(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_double(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  double __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":314
 *     cdef double acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":315
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0.0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":316
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<double*>curneighx.dataptr)[0] * (<double*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":317
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<double*>curneighx.dataptr)[0] * (<double*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":318
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<double*>curneighx.dataptr)[0] * (<double*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((double *)__pyx_v_curneighx->dataptr)[0]) * (((double *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":320
 *             acc += (<double*>curneighx.dataptr)[0] * (<double*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":321
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":323
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<double*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":325
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<double*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((double *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":327
 *         (<double*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":328
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":330
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_longdouble(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":331
 * 
 *     return 0
 * cdef int _imp_correlate_nd_longdouble(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_longdouble(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_j;
  __pyx_t_5numpy_npy_longdouble __pyx_v_acc;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":337
 *     cdef np.npy_longdouble acc
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":338
 * 
 *     for i in range(curx.size):
 *         acc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_acc = 0.0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":339
 *     for i in range(curx.size):
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_longdouble*>curneighx.dataptr)[0] * (<np.npy_longdouble*>ity.dataptr)[0]
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":340
 *         acc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             acc += (<np.npy_longdouble*>curneighx.dataptr)[0] * (<np.npy_longdouble*>ity.dataptr)[0]
 * 
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":341
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             acc += (<np.npy_longdouble*>curneighx.dataptr)[0] * (<np.npy_longdouble*>ity.dataptr)[0]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_acc += ((((__pyx_t_5numpy_npy_longdouble *)__pyx_v_curneighx->dataptr)[0]) * (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ity->dataptr)[0]));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":343
 *             acc += (<np.npy_longdouble*>curneighx.dataptr)[0] * (<np.npy_longdouble*>ity.dataptr)[0]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":344
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":346
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_longdouble*>itz.dataptr)[0] = acc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":348
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_longdouble*>itz.dataptr)[0] = acc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_itz->dataptr)[0]) = __pyx_v_acc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":350
 *         (<np.npy_longdouble*>itz.dataptr)[0] = acc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":351
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":353
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_cfloat(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":354
 * 
 *     return 0
 * cdef int _imp_correlate_nd_cfloat(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_cfloat(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  int __pyx_v_i;
  int __pyx_v_j;
  float __pyx_v_racc;
  float __pyx_v_iacc;
  float *__pyx_v_ptr1;
  float *__pyx_v_ptr2;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  int __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  int __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":361
 *     cdef float *ptr1, *ptr2
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         racc = 0
 *         iacc = 0
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":362
 * 
 *     for i in range(curx.size):
 *         racc = 0             # <<<<<<<<<<<<<<
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
    __pyx_v_racc = 0.0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":363
 *     for i in range(curx.size):
 *         racc = 0
 *         iacc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_iacc = 0.0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":364
 *         racc = 0
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             ptr1 = <float*>curneighx.dataptr
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":365
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             ptr1 = <float*>curneighx.dataptr
 *             ptr2 = <float*>ity.dataptr
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":366
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             ptr1 = <float*>curneighx.dataptr             # <<<<<<<<<<<<<<
 *             ptr2 = <float*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 */
      __pyx_v_ptr1 = ((float *)__pyx_v_curneighx->dataptr);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":367
 *         for j in range(curneighx.size):
 *             ptr1 = <float*>curneighx.dataptr
 *             ptr2 = <float*>ity.dataptr             # <<<<<<<<<<<<<<
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 */
      __pyx_v_ptr2 = ((float *)__pyx_v_ity->dataptr);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":368
 *             ptr1 = <float*>curneighx.dataptr
 *             ptr2 = <float*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]             # <<<<<<<<<<<<<<
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 */
      __pyx_v_racc += (((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[0])) + ((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[1])));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":369
 *             ptr2 = <float*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_iacc += (((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[0])) - ((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[1])));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":371
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":372
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":374
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<float*>itz.dataptr)[0] = racc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":376
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<float*>itz.dataptr)[0] = racc             # <<<<<<<<<<<<<<
 *         (<float*>itz.dataptr)[1] = iacc
 * 
 */
    (((float *)__pyx_v_itz->dataptr)[0]) = __pyx_v_racc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":377
 * 
 *         (<float*>itz.dataptr)[0] = racc
 *         (<float*>itz.dataptr)[1] = iacc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((float *)__pyx_v_itz->dataptr)[1]) = __pyx_v_iacc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":379
 *         (<float*>itz.dataptr)[1] = iacc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":380
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":382
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_cdouble(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":383
 * 
 *     return 0
 * cdef int _imp_correlate_nd_cdouble(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_cdouble(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  int __pyx_v_i;
  int __pyx_v_j;
  double __pyx_v_racc;
  double __pyx_v_iacc;
  double *__pyx_v_ptr1;
  double *__pyx_v_ptr2;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  int __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  int __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":390
 *     cdef double *ptr1, *ptr2
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         racc = 0
 *         iacc = 0
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":391
 * 
 *     for i in range(curx.size):
 *         racc = 0             # <<<<<<<<<<<<<<
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
    __pyx_v_racc = 0.0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":392
 *     for i in range(curx.size):
 *         racc = 0
 *         iacc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_iacc = 0.0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":393
 *         racc = 0
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             ptr1 = <double*>curneighx.dataptr
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":394
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             ptr1 = <double*>curneighx.dataptr
 *             ptr2 = <double*>ity.dataptr
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":395
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             ptr1 = <double*>curneighx.dataptr             # <<<<<<<<<<<<<<
 *             ptr2 = <double*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 */
      __pyx_v_ptr1 = ((double *)__pyx_v_curneighx->dataptr);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":396
 *         for j in range(curneighx.size):
 *             ptr1 = <double*>curneighx.dataptr
 *             ptr2 = <double*>ity.dataptr             # <<<<<<<<<<<<<<
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 */
      __pyx_v_ptr2 = ((double *)__pyx_v_ity->dataptr);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":397
 *             ptr1 = <double*>curneighx.dataptr
 *             ptr2 = <double*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]             # <<<<<<<<<<<<<<
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 */
      __pyx_v_racc += (((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[0])) + ((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[1])));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":398
 *             ptr2 = <double*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_iacc += (((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[0])) - ((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[1])));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":400
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":401
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":403
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<double*>itz.dataptr)[0] = racc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":405
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<double*>itz.dataptr)[0] = racc             # <<<<<<<<<<<<<<
 *         (<double*>itz.dataptr)[1] = iacc
 * 
 */
    (((double *)__pyx_v_itz->dataptr)[0]) = __pyx_v_racc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":406
 * 
 *         (<double*>itz.dataptr)[0] = racc
 *         (<double*>itz.dataptr)[1] = iacc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((double *)__pyx_v_itz->dataptr)[1]) = __pyx_v_iacc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":408
 *         (<double*>itz.dataptr)[1] = iacc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":409
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":411
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * cdef int _imp_correlate_nd_clongdouble(np.NpyArrayNeighborhoodIterObject *curx,
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":412
 * 
 *     return 0
 * cdef int _imp_correlate_nd_clongdouble(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_clongdouble(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  int __pyx_v_i;
  int __pyx_v_j;
  __pyx_t_5numpy_npy_longdouble __pyx_v_racc;
  __pyx_t_5numpy_npy_longdouble __pyx_v_iacc;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_ptr1;
  __pyx_t_5numpy_npy_longdouble *__pyx_v_ptr2;
  int __pyx_r;
  __pyx_t_5numpy_npy_intp __pyx_t_1;
  int __pyx_t_2;
  __pyx_t_5numpy_npy_intp __pyx_t_3;
  int __pyx_t_4;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":419
 *     cdef np.npy_longdouble *ptr1, *ptr2
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         racc = 0
 *         iacc = 0
 */
  __pyx_t_1 = __pyx_v_curx->size;
  for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
    __pyx_v_i = __pyx_t_2;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":420
 * 
 *     for i in range(curx.size):
 *         racc = 0             # <<<<<<<<<<<<<<
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 */
    __pyx_v_racc = 0.0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":421
 *     for i in range(curx.size):
 *         racc = 0
 *         iacc = 0             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 */
    __pyx_v_iacc = 0.0;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":422
 *         racc = 0
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         for j in range(curneighx.size):
 *             ptr1 = <np.npy_longdouble*>curneighx.dataptr
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":423
 *         iacc = 0
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             ptr1 = <np.npy_longdouble*>curneighx.dataptr
 *             ptr2 = <np.npy_longdouble*>ity.dataptr
 */
    __pyx_t_3 = __pyx_v_curneighx->size;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_j = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":424
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         for j in range(curneighx.size):
 *             ptr1 = <np.npy_longdouble*>curneighx.dataptr             # <<<<<<<<<<<<<<
 *             ptr2 = <np.npy_longdouble*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 */
      __pyx_v_ptr1 = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_curneighx->dataptr);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":425
 *         for j in range(curneighx.size):
 *             ptr1 = <np.npy_longdouble*>curneighx.dataptr
 *             ptr2 = <np.npy_longdouble*>ity.dataptr             # <<<<<<<<<<<<<<
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 */
      __pyx_v_ptr2 = ((__pyx_t_5numpy_npy_longdouble *)__pyx_v_ity->dataptr);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":426
 *             ptr1 = <np.npy_longdouble*>curneighx.dataptr
 *             ptr2 = <np.npy_longdouble*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]             # <<<<<<<<<<<<<<
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 */
      __pyx_v_racc += (((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[0])) + ((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[1])));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":427
 *             ptr2 = <np.npy_longdouble*>ity.dataptr
 *             racc += ptr1[0] * ptr2[0] + ptr1[1] * ptr2[1]
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      __pyx_v_iacc += (((__pyx_v_ptr1[1]) * (__pyx_v_ptr2[0])) - ((__pyx_v_ptr1[0]) * (__pyx_v_ptr2[1])));

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":429
 *             iacc += ptr1[1] * ptr2[0] - ptr1[0] * ptr2[1]
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":430
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":432
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         (<np.npy_longdouble*>itz.dataptr)[0] = racc
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":434
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         (<np.npy_longdouble*>itz.dataptr)[0] = racc             # <<<<<<<<<<<<<<
 *         (<np.npy_longdouble*>itz.dataptr)[1] = iacc
 * 
 */
    (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_itz->dataptr)[0]) = __pyx_v_racc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":435
 * 
 *         (<np.npy_longdouble*>itz.dataptr)[0] = racc
 *         (<np.npy_longdouble*>itz.dataptr)[1] = iacc             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    (((__pyx_t_5numpy_npy_longdouble *)__pyx_v_itz->dataptr)[1]) = __pyx_v_iacc;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":437
 *         (<np.npy_longdouble*>itz.dataptr)[1] = iacc
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":438
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":440
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * cdef int _imp_correlate_nd_object(np.NpyArrayNeighborhoodIterObject *curx,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":442
 *     return 0
 * 
 * cdef int _imp_correlate_nd_object(np.NpyArrayNeighborhoodIterObject *curx,             # <<<<<<<<<<<<<<
 *         np.NpyArrayNeighborhoodIterObject *curneighx, np.NpyArrayIterObject *ity,
 *         np.NpyArrayIterObject *itz):
 */

static  int _imp_correlate_nd_object(NpyArrayNeighborhoodIterObject *__pyx_v_curx, NpyArrayNeighborhoodIterObject *__pyx_v_curneighx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz) {
  int __pyx_v_i;
  int __pyx_v_j;
  char *__pyx_v_zero;
  __pyx_t_5numpy_PyArray_CopySwapFunc __pyx_v_copyswap;
  System::Object^ __pyx_v_tmp;
  int __pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_t_5numpy_npy_intp __pyx_t_2;
  int __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;
  int __pyx_t_5;
  System::Object^ __pyx_t_6 = nullptr;
  System::Object^ __pyx_t_7 = nullptr;
  System::Object^ __pyx_t_8 = nullptr;
  __pyx_v_tmp = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":447
 *     cdef int i, j
 *     cdef char *zero
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(curx.ao)             # <<<<<<<<<<<<<<
 * 
 *     zero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(curx.ao))
 */
  __pyx_v_copyswap = ARRAY_COPYSWAP_FUNC(__pyx_v_curx->ao);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":449
 *     cdef np.PyArray_CopySwapFunc copyswap = ARRAY_COPYSWAP_FUNC(curx.ao)
 * 
 *     zero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(curx.ao))             # <<<<<<<<<<<<<<
 * 
 *     for i in range(curx.size):
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_curx->ao)); 
  __pyx_v_zero = ((char *)PyArray_Zero(__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":451
 *     zero = <char *>np.PyArray_Zero(np.Npy_INTERFACE_array(curx.ao))
 * 
 *     for i in range(curx.size):             # <<<<<<<<<<<<<<
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         copyswap(<void *>itz.dataptr, <void *>zero, 0, NULL)
 */
  __pyx_t_2 = __pyx_v_curx->size;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":452
 * 
 *     for i in range(curx.size):
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)             # <<<<<<<<<<<<<<
 *         copyswap(<void *>itz.dataptr, <void *>zero, 0, NULL)
 * 
 */
    PyArrayNeighborhoodIter_Reset(__pyx_v_curneighx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":453
 *     for i in range(curx.size):
 *         np.PyArrayNeighborhoodIter_Reset(curneighx)
 *         copyswap(<void *>itz.dataptr, <void *>zero, 0, NULL)             # <<<<<<<<<<<<<<
 * 
 *         for j in range(curneighx.size):
 */
    __pyx_v_copyswap(((void *)__pyx_v_itz->dataptr), ((void *)__pyx_v_zero), 0, NULL);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":455
 *         copyswap(<void *>itz.dataptr, <void *>zero, 0, NULL)
 * 
 *         for j in range(curneighx.size):             # <<<<<<<<<<<<<<
 *             # compute tmp = acc + x * y. Not all objects supporting the
 *             # number protocol support inplace operations, so we do it the most
 */
    __pyx_t_4 = __pyx_v_curneighx->size;
    for (__pyx_t_5 = 0; __pyx_t_5 < __pyx_t_4; __pyx_t_5+=1) {
      __pyx_v_j = __pyx_t_5;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":459
 *             # number protocol support inplace operations, so we do it the most
 *             # straightfoward way.
 *             tmp = NpyIter_READOBJECT(itz) + \             # <<<<<<<<<<<<<<
 *                   NpyIter_READOBJECT(curneighx) * NpyIter_READOBJECT(ity)
 * 
 */
      __pyx_t_1 = NpyIter_READOBJECT(__pyx_v_itz); 

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":460
 *             # straightfoward way.
 *             tmp = NpyIter_READOBJECT(itz) + \
 *                   NpyIter_READOBJECT(curneighx) * NpyIter_READOBJECT(ity)             # <<<<<<<<<<<<<<
 * 
 *             NpyIter_ASSIGNOBJECT(itz, tmp)
 */
      __pyx_t_6 = NpyIter_READOBJECT(__pyx_v_curneighx); 
      __pyx_t_7 = NpyIter_READOBJECT(__pyx_v_ity); 
      __pyx_t_8 = __site_op_mul_460_48->Target(__site_op_mul_460_48, __pyx_t_6, __pyx_t_7);
      __pyx_t_6 = nullptr;
      __pyx_t_7 = nullptr;
      __pyx_t_7 = __site_op_add_459_42->Target(__site_op_add_459_42, __pyx_t_1, __pyx_t_8);
      __pyx_t_1 = nullptr;
      __pyx_t_8 = nullptr;
      __pyx_v_tmp = __pyx_t_7;
      __pyx_t_7 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":462
 *                   NpyIter_READOBJECT(curneighx) * NpyIter_READOBJECT(ity)
 * 
 *             NpyIter_ASSIGNOBJECT(itz, tmp)             # <<<<<<<<<<<<<<
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 */
      NpyIter_ASSIGNOBJECT(__pyx_v_itz, __pyx_v_tmp);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":464
 *             NpyIter_ASSIGNOBJECT(itz, tmp)
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)             # <<<<<<<<<<<<<<
 *             np.PyArray_ITER_NEXT(ity)
 * 
 */
      PyArrayNeighborhoodIter_Next(__pyx_v_curneighx);

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":465
 * 
 *             np.PyArrayNeighborhoodIter_Next(curneighx)
 *             np.PyArray_ITER_NEXT(ity)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)
 */
      PyArray_ITER_NEXT(__pyx_v_ity);
    }

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":467
 *             np.PyArray_ITER_NEXT(ity)
 * 
 *         np.PyArrayNeighborhoodIter_Next(curx)             # <<<<<<<<<<<<<<
 * 
 *         np.PyArray_ITER_NEXT(itz)
 */
    PyArrayNeighborhoodIter_Next(__pyx_v_curx);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":469
 *         np.PyArrayNeighborhoodIter_Next(curx)
 * 
 *         np.PyArray_ITER_NEXT(itz)             # <<<<<<<<<<<<<<
 *         np.PyArray_ITER_RESET(ity)
 * 
 */
    PyArray_ITER_NEXT(__pyx_v_itz);

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":470
 * 
 *         np.PyArray_ITER_NEXT(itz)
 *         np.PyArray_ITER_RESET(ity)             # <<<<<<<<<<<<<<
 * 
 *     np.PyDataMem_FREE(zero)
 */
    PyArray_ITER_RESET(__pyx_v_ity);
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":472
 *         np.PyArray_ITER_RESET(ity)
 * 
 *     np.PyDataMem_FREE(zero)             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
  __pyx_t_7 = PythonOps::GetGlobal(__pyx_context, "np");
  __pyx_t_8 = __site_get_PyDataMem_FREE_472_6->Target(__site_get_PyDataMem_FREE_472_6, __pyx_t_7, __pyx_context);
  __pyx_t_7 = nullptr;
  __pyx_t_7 = gcnew System::String(__pyx_v_zero);
  __pyx_t_1 = __site_call1_472_21->Target(__site_call1_472_21, __pyx_context, __pyx_t_8, ((System::Object^)__pyx_t_7));
  __pyx_t_8 = nullptr;
  __pyx_t_7 = nullptr;
  __pyx_t_1 = nullptr;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":474
 *     np.PyDataMem_FREE(zero)
 * 
 *     return 0             # <<<<<<<<<<<<<<
 * 
 * cdef _correlate_nd_imp(np.NpyArrayIterObject* itx, np.NpyArrayIterObject *ity,
 */
  __pyx_r = 0;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":476
 *     return 0
 * 
 * cdef _correlate_nd_imp(np.NpyArrayIterObject* itx, np.NpyArrayIterObject *ity,             # <<<<<<<<<<<<<<
 *         np.NpyArrayIterObject *itz, int typenum, int mode):
 *     cdef np.NpyArrayNeighborhoodIterObject *curneighx, *curx
 */

static  System::Object^ _correlate_nd_imp(NpyArrayIterObject *__pyx_v_itx, NpyArrayIterObject *__pyx_v_ity, NpyArrayIterObject *__pyx_v_itz, int __pyx_v_typenum, int __pyx_v_mode) {
  NpyArrayNeighborhoodIterObject *__pyx_v_curneighx;
  NpyArrayNeighborhoodIterObject *__pyx_v_curx;
  __pyx_t_5numpy_npy_intp __pyx_v_i;
  __pyx_t_5numpy_npy_intp __pyx_v_nz;
  __pyx_t_5numpy_npy_intp __pyx_v_nx;
  __pyx_t_5numpy_npy_intp __pyx_v_bounds[(NPY_MAXDIMS * 2)];
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  long __pyx_t_3;
  __pyx_t_5numpy_npy_intp __pyx_t_4;
  long __pyx_t_5;
  int __pyx_t_6;
  long __pyx_t_7;
  long __pyx_t_8;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":485
 *     # traverse x directly, such as each point of the output is the
 *     # innerproduct of y with the neighborhood around curx *[inserted by cython to avoid comment closer]/
 *     if mode == CORR_MODE_VALID:             # <<<<<<<<<<<<<<
 *         # Only walk through the input points such as the correponding
 *         # output will not depend on 0 padding
 */
  switch (__pyx_v_mode) {
    case __pyx_e_5scipy_6signal_12correlate_nd_CORR_MODE_VALID:

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":488
 *         # Only walk through the input points such as the correponding
 *         # output will not depend on 0 padding
 *         for i in range(np.PyArray_NDIM(np.NpyIter_ARRAY(itx))):             # <<<<<<<<<<<<<<
 *             bounds[2*i] = np.PyArray_DIMS(np.NpyIter_ARRAY(ity))[i] - 1
 *             bounds[2*i+1] = np.PyArray_DIMS(np.NpyIter_ARRAY(itx))[i] - 1
 */
    __pyx_t_1 = ((System::Object^)NpyIter_ARRAY(__pyx_v_itx)); 
    __pyx_t_2 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_t_1)); 
    __pyx_t_1 = nullptr;
    __pyx_t_3 = __site_cvt_cvt_long_488_38->Target(__site_cvt_cvt_long_488_38, __pyx_t_2);
    __pyx_t_2 = nullptr;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_3; __pyx_t_4+=1) {
      __pyx_v_i = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":489
 *         # output will not depend on 0 padding
 *         for i in range(np.PyArray_NDIM(np.NpyIter_ARRAY(itx))):
 *             bounds[2*i] = np.PyArray_DIMS(np.NpyIter_ARRAY(ity))[i] - 1             # <<<<<<<<<<<<<<
 *             bounds[2*i+1] = np.PyArray_DIMS(np.NpyIter_ARRAY(itx))[i] - 1
 *     elif mode == CORR_MODE_SAME:
 */
      __pyx_t_2 = ((System::Object^)NpyIter_ARRAY(__pyx_v_ity)); 
      (__pyx_v_bounds[(2 * __pyx_v_i)]) = ((PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_2))[__pyx_v_i]) - 1);
      __pyx_t_2 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":490
 *         for i in range(np.PyArray_NDIM(np.NpyIter_ARRAY(itx))):
 *             bounds[2*i] = np.PyArray_DIMS(np.NpyIter_ARRAY(ity))[i] - 1
 *             bounds[2*i+1] = np.PyArray_DIMS(np.NpyIter_ARRAY(itx))[i] - 1             # <<<<<<<<<<<<<<
 *     elif mode == CORR_MODE_SAME:
 *         # Only walk through the input such as the output will be centered
 */
      __pyx_t_2 = ((System::Object^)NpyIter_ARRAY(__pyx_v_itx)); 
      (__pyx_v_bounds[((2 * __pyx_v_i) + 1)]) = ((PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_2))[__pyx_v_i]) - 1);
      __pyx_t_2 = nullptr;
    }
    break;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":491
 *             bounds[2*i] = np.PyArray_DIMS(np.NpyIter_ARRAY(ity))[i] - 1
 *             bounds[2*i+1] = np.PyArray_DIMS(np.NpyIter_ARRAY(itx))[i] - 1
 *     elif mode == CORR_MODE_SAME:             # <<<<<<<<<<<<<<
 *         # Only walk through the input such as the output will be centered
 *         # relatively to the output as computed in the full mode
 */
    case __pyx_e_5scipy_6signal_12correlate_nd_CORR_MODE_SAME:

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":494
 *         # Only walk through the input such as the output will be centered
 *         # relatively to the output as computed in the full mode
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):             # <<<<<<<<<<<<<<
 *             nz = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i]
 *             # Recover 'original' nx, before it was zero-padded *[inserted by cython to avoid comment closer]/
 */
    __pyx_t_2 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_itx->ao)); 
    __pyx_t_1 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_t_2)); 
    __pyx_t_2 = nullptr;
    __pyx_t_5 = __site_cvt_cvt_long_494_38->Target(__site_cvt_cvt_long_494_38, __pyx_t_1);
    __pyx_t_1 = nullptr;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_5; __pyx_t_4+=1) {
      __pyx_v_i = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":495
 *         # relatively to the output as computed in the full mode
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
 *             nz = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i]             # <<<<<<<<<<<<<<
 *             # Recover 'original' nx, before it was zero-padded *[inserted by cython to avoid comment closer]/
 *             nx = nz - np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
 */
      __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_itx->ao)); 
      __pyx_v_nz = (PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_1))[__pyx_v_i]);
      __pyx_t_1 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":497
 *             nz = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i]
 *             # Recover 'original' nx, before it was zero-padded *[inserted by cython to avoid comment closer]/
 *             nx = nz - np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1             # <<<<<<<<<<<<<<
 *             if (nz - nx) % 2 == 0:
 *                 bounds[2*i] = (nz - nx) / 2
 */
      __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_ity->ao)); 
      __pyx_v_nx = ((__pyx_v_nz - (PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_1))[__pyx_v_i])) + 1);
      __pyx_t_1 = nullptr;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":498
 *             # Recover 'original' nx, before it was zero-padded *[inserted by cython to avoid comment closer]/
 *             nx = nz - np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
 *             if (nz - nx) % 2 == 0:             # <<<<<<<<<<<<<<
 *                 bounds[2*i] = (nz - nx) / 2
 *             else:
 */
      __pyx_t_6 = (__Pyx_mod_long((__pyx_v_nz - __pyx_v_nx), 2) == 0);
      if (__pyx_t_6) {

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":499
 *             nx = nz - np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
 *             if (nz - nx) % 2 == 0:
 *                 bounds[2*i] = (nz - nx) / 2             # <<<<<<<<<<<<<<
 *             else:
 *                 bounds[2*i] = (nz - nx - 1) / 2
 */
        (__pyx_v_bounds[(2 * __pyx_v_i)]) = __Pyx_div_long((__pyx_v_nz - __pyx_v_nx), 2);
        goto __pyx_L7;
      }
      /*else*/ {

        /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":501
 *                 bounds[2*i] = (nz - nx) / 2
 *             else:
 *                 bounds[2*i] = (nz - nx - 1) / 2             # <<<<<<<<<<<<<<
 * 
 *             bounds[2*i+1] = bounds[2*i] + nx - 1
 */
        (__pyx_v_bounds[(2 * __pyx_v_i)]) = __Pyx_div_long(((__pyx_v_nz - __pyx_v_nx) - 1), 2);
      }
      __pyx_L7:;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":503
 *                 bounds[2*i] = (nz - nx - 1) / 2
 * 
 *             bounds[2*i+1] = bounds[2*i] + nx - 1             # <<<<<<<<<<<<<<
 *     elif mode == CORR_MODE_FULL:
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
 */
      (__pyx_v_bounds[((2 * __pyx_v_i) + 1)]) = (((__pyx_v_bounds[(2 * __pyx_v_i)]) + __pyx_v_nx) - 1);
    }
    break;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":504
 * 
 *             bounds[2*i+1] = bounds[2*i] + nx - 1
 *     elif mode == CORR_MODE_FULL:             # <<<<<<<<<<<<<<
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
 *             bounds[2*i] = 0;
 */
    case __pyx_e_5scipy_6signal_12correlate_nd_CORR_MODE_FULL:

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":505
 *             bounds[2*i+1] = bounds[2*i] + nx - 1
 *     elif mode == CORR_MODE_FULL:
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):             # <<<<<<<<<<<<<<
 *             bounds[2*i] = 0;
 *             bounds[2*i+1] = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i] - 1
 */
    __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_itx->ao)); 
    __pyx_t_2 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_t_1)); 
    __pyx_t_1 = nullptr;
    __pyx_t_7 = __site_cvt_cvt_long_505_38->Target(__site_cvt_cvt_long_505_38, __pyx_t_2);
    __pyx_t_2 = nullptr;
    for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_7; __pyx_t_4+=1) {
      __pyx_v_i = __pyx_t_4;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":506
 *     elif mode == CORR_MODE_FULL:
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
 *             bounds[2*i] = 0;             # <<<<<<<<<<<<<<
 *             bounds[2*i+1] = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i] - 1
 *     else:
 */
      (__pyx_v_bounds[(2 * __pyx_v_i)]) = 0;

      /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":507
 *         for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(itx.ao))):
 *             bounds[2*i] = 0;
 *             bounds[2*i+1] = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i] - 1             # <<<<<<<<<<<<<<
 *     else:
 *         raise SystemError
 */
      __pyx_t_2 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_itx->ao)); 
      (__pyx_v_bounds[((2 * __pyx_v_i) + 1)]) = ((PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_2))[__pyx_v_i]) - 1);
      __pyx_t_2 = nullptr;
    }
    break;
    default:

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":509
 *             bounds[2*i+1] = np.PyArray_DIMS(np.Npy_INTERFACE_array(itx.ao))[i] - 1
 *     else:
 *         raise SystemError             # <<<<<<<<<<<<<<
 * 
 *     curx = np.PyArray_NeighborhoodIterNew(itx, bounds,
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "SystemError");
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    break;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":512
 * 
 *     curx = np.PyArray_NeighborhoodIterNew(itx, bounds,
 *                                 np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)             # <<<<<<<<<<<<<<
 *     if (curx == NULL):
 *         raise SystemError("Could not create curx ?")
 */
  __pyx_v_curx = PyArray_NeighborhoodIterNew(__pyx_v_itx, __pyx_v_bounds, NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":513
 *     curx = np.PyArray_NeighborhoodIterNew(itx, bounds,
 *                                 np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)
 *     if (curx == NULL):             # <<<<<<<<<<<<<<
 *         raise SystemError("Could not create curx ?")
 * 
 */
  __pyx_t_6 = (__pyx_v_curx == NULL);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":514
 *                                 np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)
 *     if (curx == NULL):
 *         raise SystemError("Could not create curx ?")             # <<<<<<<<<<<<<<
 * 
 *     # Compute boundaries for the neighborhood iterator: the neighborhood for x
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "SystemError");
    __pyx_t_1 = __site_call1_514_25->Target(__site_call1_514_25, __pyx_context, __pyx_t_2, ((System::Object^)"Could not create curx ?"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":518
 *     # Compute boundaries for the neighborhood iterator: the neighborhood for x
 *     #   should have the same dimensions as y
 *     for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(ity.ao))):             # <<<<<<<<<<<<<<
 *         bounds[2*i] = -np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
 *         bounds[2*i+1] = 0
 */
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_ity->ao)); 
  __pyx_t_2 = PyArray_NDIM(((NumpyDotNet::ndarray^)__pyx_t_1)); 
  __pyx_t_1 = nullptr;
  __pyx_t_8 = __site_cvt_cvt_long_518_34->Target(__site_cvt_cvt_long_518_34, __pyx_t_2);
  __pyx_t_2 = nullptr;
  for (__pyx_t_4 = 0; __pyx_t_4 < __pyx_t_8; __pyx_t_4+=1) {
    __pyx_v_i = __pyx_t_4;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":519
 *     #   should have the same dimensions as y
 *     for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(ity.ao))):
 *         bounds[2*i] = -np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1             # <<<<<<<<<<<<<<
 *         bounds[2*i+1] = 0
 * 
 */
    __pyx_t_2 = ((System::Object^)Npy_INTERFACE_OBJECT(__pyx_v_ity->ao)); 
    (__pyx_v_bounds[(2 * __pyx_v_i)]) = ((-(PyArray_DIMS(((NumpyDotNet::ndarray^)__pyx_t_2))[__pyx_v_i])) + 1);
    __pyx_t_2 = nullptr;

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":520
 *     for i in range(np.PyArray_NDIM(np.Npy_INTERFACE_array(ity.ao))):
 *         bounds[2*i] = -np.PyArray_DIMS(np.Npy_INTERFACE_array(ity.ao))[i] + 1
 *         bounds[2*i+1] = 0             # <<<<<<<<<<<<<<
 * 
 *     curneighx = np.PyArray_NeighborhoodIterNew(<np.NpyArrayIterObject *>curx,
 */
    (__pyx_v_bounds[((2 * __pyx_v_i) + 1)]) = 0;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":523
 * 
 *     curneighx = np.PyArray_NeighborhoodIterNew(<np.NpyArrayIterObject *>curx,
 *                         bounds, np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)             # <<<<<<<<<<<<<<
 * 
 *     if typenum == np.NPY_OBJECT:
 */
  __pyx_v_curneighx = PyArray_NeighborhoodIterNew(((NpyArrayIterObject *)__pyx_v_curx), __pyx_v_bounds, NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free);

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":525
 *                         bounds, np.NPY_NEIGHBORHOOD_ITER_ZERO_PADDING, NULL, free)
 * 
 *     if typenum == np.NPY_OBJECT:             # <<<<<<<<<<<<<<
 *         # The object array case does not worth being optimized, since most of
 *     	# the cost is numerical operations, not iterators moving in this case ?
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_OBJECT);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":528
 *         # The object array case does not worth being optimized, since most of
 *     	# the cost is numerical operations, not iterators moving in this case ?
 *         _imp_correlate_nd_object(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_UBYTE:
 *         _imp_correlate_nd_ubyte(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_object(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":529
 *     	# the cost is numerical operations, not iterators moving in this case ?
 *         _imp_correlate_nd_object(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_UBYTE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_ubyte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_BYTE:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_UBYTE);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":530
 *         _imp_correlate_nd_object(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_UBYTE:
 *         _imp_correlate_nd_ubyte(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_BYTE:
 *         _imp_correlate_nd_byte(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_ubyte(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":531
 *     elif typenum == np.NPY_UBYTE:
 *         _imp_correlate_nd_ubyte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_BYTE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_byte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_USHORT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_BYTE);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":532
 *         _imp_correlate_nd_ubyte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_BYTE:
 *         _imp_correlate_nd_byte(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_USHORT:
 *         _imp_correlate_nd_ushort(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_byte(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":533
 *     elif typenum == np.NPY_BYTE:
 *         _imp_correlate_nd_byte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_USHORT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_ushort(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_SHORT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_USHORT);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":534
 *         _imp_correlate_nd_byte(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_USHORT:
 *         _imp_correlate_nd_ushort(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_SHORT:
 *         _imp_correlate_nd_short(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_ushort(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":535
 *     elif typenum == np.NPY_USHORT:
 *         _imp_correlate_nd_ushort(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_SHORT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_short(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_UINT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_SHORT);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":536
 *         _imp_correlate_nd_ushort(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_SHORT:
 *         _imp_correlate_nd_short(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_UINT:
 *         _imp_correlate_nd_uint(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_short(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":537
 *     elif typenum == np.NPY_SHORT:
 *         _imp_correlate_nd_short(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_UINT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_uint(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_INT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_UINT);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":538
 *         _imp_correlate_nd_short(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_UINT:
 *         _imp_correlate_nd_uint(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_INT:
 *         _imp_correlate_nd_int(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_uint(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":539
 *     elif typenum == np.NPY_UINT:
 *         _imp_correlate_nd_uint(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_INT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_int(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONG:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_INT);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":540
 *         _imp_correlate_nd_uint(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_INT:
 *         _imp_correlate_nd_int(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_ULONG:
 *         _imp_correlate_nd_ulong(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_int(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":541
 *     elif typenum == np.NPY_INT:
 *         _imp_correlate_nd_int(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONG:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_ulong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONG:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_ULONG);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":542
 *         _imp_correlate_nd_int(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONG:
 *         _imp_correlate_nd_ulong(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_LONG:
 *         _imp_correlate_nd_long(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_ulong(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":543
 *     elif typenum == np.NPY_ULONG:
 *         _imp_correlate_nd_ulong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONG:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_long(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONGLONG:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_LONG);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":544
 *         _imp_correlate_nd_ulong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONG:
 *         _imp_correlate_nd_long(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_ULONGLONG:
 *         _imp_correlate_nd_ulonglong(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_long(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":545
 *     elif typenum == np.NPY_LONG:
 *         _imp_correlate_nd_long(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONGLONG:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_ulonglong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGLONG:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_ULONGLONG);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":546
 *         _imp_correlate_nd_long(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_ULONGLONG:
 *         _imp_correlate_nd_ulonglong(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_LONGLONG:
 *         _imp_correlate_nd_longlong(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_ulonglong(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":547
 *     elif typenum == np.NPY_ULONGLONG:
 *         _imp_correlate_nd_ulonglong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGLONG:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_longlong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_FLOAT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_LONGLONG);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":548
 *         _imp_correlate_nd_ulonglong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGLONG:
 *         _imp_correlate_nd_longlong(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_FLOAT:
 *         _imp_correlate_nd_float(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_longlong(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":549
 *     elif typenum == np.NPY_LONGLONG:
 *         _imp_correlate_nd_longlong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_FLOAT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_float(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_DOUBLE:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_FLOAT);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":550
 *         _imp_correlate_nd_longlong(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_FLOAT:
 *         _imp_correlate_nd_float(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_DOUBLE:
 *         _imp_correlate_nd_double(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_float(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":551
 *     elif typenum == np.NPY_FLOAT:
 *         _imp_correlate_nd_float(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_DOUBLE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_double(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGDOUBLE:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_DOUBLE);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":552
 *         _imp_correlate_nd_float(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_DOUBLE:
 *         _imp_correlate_nd_double(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_LONGDOUBLE:
 *         _imp_correlate_nd_longdouble(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_double(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":553
 *     elif typenum == np.NPY_DOUBLE:
 *         _imp_correlate_nd_double(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGDOUBLE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_longdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CFLOAT:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_LONGDOUBLE);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":554
 *         _imp_correlate_nd_double(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_LONGDOUBLE:
 *         _imp_correlate_nd_longdouble(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_CFLOAT:
 *         _imp_correlate_nd_cfloat(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_longdouble(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":555
 *     elif typenum == np.NPY_LONGDOUBLE:
 *         _imp_correlate_nd_longdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CFLOAT:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_cfloat(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CDOUBLE:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_CFLOAT);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":556
 *         _imp_correlate_nd_longdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CFLOAT:
 *         _imp_correlate_nd_cfloat(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_CDOUBLE:
 *         _imp_correlate_nd_cdouble(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_cfloat(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":557
 *     elif typenum == np.NPY_CFLOAT:
 *         _imp_correlate_nd_cfloat(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CDOUBLE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_cdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CLONGDOUBLE:
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_CDOUBLE);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":558
 *         _imp_correlate_nd_cfloat(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CDOUBLE:
 *         _imp_correlate_nd_cdouble(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 *     elif typenum == np.NPY_CLONGDOUBLE:
 *         _imp_correlate_nd_clongdouble(curx, curneighx, ity, itz)
 */
    _imp_correlate_nd_cdouble(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":559
 *     elif typenum == np.NPY_CDOUBLE:
 *         _imp_correlate_nd_cdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CLONGDOUBLE:             # <<<<<<<<<<<<<<
 *         _imp_correlate_nd_clongdouble(curx, curneighx, ity, itz)
 * 
 */
  __pyx_t_6 = (__pyx_v_typenum == NPY_CLONGDOUBLE);
  if (__pyx_t_6) {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":560
 *         _imp_correlate_nd_cdouble(curx, curneighx, ity, itz)
 *     elif typenum == np.NPY_CLONGDOUBLE:
 *         _imp_correlate_nd_clongdouble(curx, curneighx, ity, itz)             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
    _imp_correlate_nd_clongdouble(__pyx_v_curx, __pyx_v_curneighx, __pyx_v_ity, __pyx_v_itz);
    goto __pyx_L13;
  }
  /*else*/ {

    /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":563
 * 
 *     else:
 *         raise ValueError("Unsupported type")             # <<<<<<<<<<<<<<
 * 
 *     return 0
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_563_24->Target(__site_call1_563_24, __pyx_context, __pyx_t_2, ((System::Object^)"Unsupported type"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
  }
  __pyx_L13:;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":565
 *         raise ValueError("Unsupported type")
 * 
 *     return 0             # <<<<<<<<<<<<<<
 */
  __pyx_r = __pyx_int_0;
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
  __site_cvt_cvt_int_20_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_ne_33_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::NotEqual));
  __site_istrue_33_27 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_34_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_eq_36_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_36_27 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_37_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_num_43_27 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "num", false));
  __site_cvt_cvt_int_43_27 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_45_26 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_460_48 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_459_42 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_get_PyDataMem_FREE_472_6 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "PyDataMem_FREE", false));
  __site_call1_472_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_long_488_38 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_494_38 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_long_505_38 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_514_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_long_518_34 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_563_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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
  /*--- Execution code ---*/
  PythonDictionary^ __pyx_t_1;

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":3
 * 
 * cimport numpy as np
 * np.import_array()             # <<<<<<<<<<<<<<
 * 
 * cdef extern from "stdlib.h":
 */
  import_array();

  /* "/home/cwitty/git-scipy/scipy-refactor/scipy/signal/correlate_nd.pyx":2
 * 
 * cimport numpy as np             # <<<<<<<<<<<<<<
 * np.import_array()
 * 
 */
  __pyx_t_1 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

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
[assembly: PythonModule("scipy__signal__correlate_nd", module_correlate_nd::typeid)];
};
