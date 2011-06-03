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
  dict["__module__"] = "scipy.integrate._dop";
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
#define __PYX_HAVE_API__scipy__integrate___dop
#include "npy_common.h"
#include "npy_defs.h"
#include "npy_descriptor.h"
#include "npy_arrayobject.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_iterators.h"
#include "npy_ironpython.h"
#include "fwrap_ktp_header.h"
#include "_dop_fc.h"
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

typedef System::Object^ __pyx_t_5scipy_9integrate_9fwrap_ktp_fw_bytes;

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":282
 * 
 * 
 * cdef np.ndarray fw_asfortranarray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.npy_intp * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 */

public ref struct __pyx_opt_args_5scipy_9integrate_4_dop_fw_asfortranarray {
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
static CYTHON_INLINE System::Object^ PyArray_Cast(System::Object^, System::Object^); /*proto*/
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
/* Module declarations from scipy.integrate.fwrap_ktp */
/* Module declarations from scipy.integrate._dop_fc */
/* Module declarations from scipy.integrate._dop */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_9integrate_4_dop_dopri5_fcn_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *);
static void dopri5_fcn_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_9integrate_4_dop_dopri5_solout_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, void *, void *, fwi_integer_t *);
static void dopri5_solout_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, void *, void *, fwi_integer_t *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_9integrate_4_dop_dop853_fcn_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *);
static void dop853_fcn_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_9integrate_4_dop_dop853_solout_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, void *, void *, fwi_integer_t *);
static void dop853_solout_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, void *, void *, fwi_integer_t *); /*proto*/
static NumpyDotNet::ndarray^ fw_asfortranarray(System::Object^, int, int, __pyx_t_5numpy_npy_intp *, int, int, ref struct __pyx_opt_args_5scipy_9integrate_4_dop_fw_asfortranarray ^__pyx_optional_args); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.integrate._dop"

/* Implementation of scipy.integrate._dop */
namespace clr__dop {
  public ref class module__dop sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_set___cbInfo_28_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_29_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_set_exc_29_12;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_61_33;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_ARGS_63_33;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_67_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_info_72_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_72_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_73_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call7_91_35;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_91_35;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call7_ARGS_93_35;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_93_35;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_info_97_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_97_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_98_26;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_cvt_fwr_dbl_t_100_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_cvt_fwr_dbl_t_100_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_100_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_143_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_145_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_147_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_149_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_151_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_152_52;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_153_58;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_157_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_178_33;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_ARGS_180_33;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_184_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_info_189_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_189_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_190_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call7_208_35;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_208_35;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call7_ARGS_210_35;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_210_35;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_info_214_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_214_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_215_26;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_cvt_fwr_dbl_t_218_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_cvt_fwr_dbl_t_218_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_218_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_260_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_262_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_264_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_266_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_268_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_269_52;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_270_58;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_274_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_294_27;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_299_59;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_306_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_308_60;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_308_24;
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
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_NpyCoreApi_443_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_CastToType_443_33;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_443_100;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_443_44;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_451_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_cvt_bool_451_45;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ScalarGeneric_451_73;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_451_58;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_454_51;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_454_51;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_457_58;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt_cvt___pyx_t_5numpy_npy_intp_457_58;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
static int^ __pyx_int_0;
static int^ __pyx_int_1;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":27
 * 
 * class DopErrorCode(Exception):
 *     def __init__(self, callbackInfo):             # <<<<<<<<<<<<<<
 *         self.__cbInfo = callbackInfo
 *         self.exc = callbackInfo.exc
 */

static System::Object^ __pyx_pf_5scipy_9integrate_4_dop_12DopErrorCode___init__(System::Object^ self, System::Object^ callbackInfo) {
  System::Object^ __pyx_v_self = nullptr;
  System::Object^ __pyx_v_callbackInfo = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_v_self = self;
  __pyx_v_callbackInfo = callbackInfo;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":28
 * class DopErrorCode(Exception):
 *     def __init__(self, callbackInfo):
 *         self.__cbInfo = callbackInfo             # <<<<<<<<<<<<<<
 *         self.exc = callbackInfo.exc
 * 
 */
  __site_set___cbInfo_28_12->Target(__site_set___cbInfo_28_12, __pyx_v_self, __pyx_v_callbackInfo);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":29
 *     def __init__(self, callbackInfo):
 *         self.__cbInfo = callbackInfo
 *         self.exc = callbackInfo.exc             # <<<<<<<<<<<<<<
 * 
 * cdef class fw_CallbackInfo(object):
 */
  __pyx_t_1 = __site_get_exc_29_31->Target(__site_get_exc_29_31, __pyx_v_callbackInfo, __pyx_context);
  __site_set_exc_29_12->Target(__site_set_exc_29_12, __pyx_v_self, __pyx_t_1);
  __pyx_t_1 = nullptr;

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":31
 *         self.exc = callbackInfo.exc
 * 
 * cdef class fw_CallbackInfo(object):             # <<<<<<<<<<<<<<
 *     # Callable object to call
 *     cdef object callback
 */
[PythonType]
ref struct fw_CallbackInfo {
  System::Object^ callback;
  System::Object^ extra_args;
  System::Object^ exc;
  System::Object^ arg0;
  System::Object^ arg1;
  System::Object^ arg2;
  System::Object^ arg3;
  System::Object^ arg4;
  System::Object^ arg5;
  System::Object^ arg6;
  System::Object^ arg7;
  System::Object^ arg8;
  System::Object^ arg9;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":41
 *     # simply passed through in Fortran (in particular NumPy arrays)
 *     cdef object arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9
 *     def __cinit__(self, object callback, object extra_args):             # <<<<<<<<<<<<<<
 *         self.callback = callback
 *         self.extra_args = extra_args
 */

  fw_CallbackInfo(System::Object^ callback, System::Object^ extra_args) {
    System::Object^ __pyx_v_callback = nullptr;
    System::Object^ __pyx_v_extra_args = nullptr;
    int __pyx_r;
    System::Object^ __pyx_v_self = this;
    __pyx_v_callback = callback;
    __pyx_v_extra_args = extra_args;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":42
 *     cdef object arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9
 *     def __cinit__(self, object callback, object extra_args):
 *         self.callback = callback             # <<<<<<<<<<<<<<
 *         self.extra_args = extra_args
 * 
 */
    ((fw_CallbackInfo^)__pyx_v_self)->callback = __pyx_v_callback;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":43
 *     def __cinit__(self, object callback, object extra_args):
 *         self.callback = callback
 *         self.extra_args = extra_args             # <<<<<<<<<<<<<<
 * 
 * 
 */
    ((fw_CallbackInfo^)__pyx_v_self)->extra_args = __pyx_v_extra_args;

    __pyx_r = 0;
  }
};

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":49
 * 
 * cdef fw_CallbackInfo dopri5_fcn_cb_info
 * cdef void dopri5_fcn_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * x, fwr_dbl_t * y, fwr_dbl_t * f, void * rpar, void * ipar):             # <<<<<<<<<<<<<<
 *     global dopri5_fcn_cb_info;
 *     cdef fw_CallbackInfo info
 */

static void (*__pyx_function_pointer_dopri5_fcn_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *);
typedef void (*__pyx_fp_t_dopri5_fcn_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *);
static __pyx_delegate_t_5scipy_9integrate_4_dop_dopri5_fcn_cb_wrapper^ __pyx_delegate_val_dopri5_fcn_cb_wrapper;
static  void dopri5_fcn_cb_wrapper(fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_x, fwr_dbl_t *__pyx_v_y, fwr_dbl_t *__pyx_v_f, void *__pyx_v_rpar, void *__pyx_v_ipar) {
  fw_CallbackInfo^ __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_f_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_f_shape[1];
  System::Object^ __pyx_v_f_ret;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  __pyx_v_info = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_f_ = nullptr;
  __pyx_v_f_ret = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":54
 *     cdef np.ndarray y_, f_
 *     cdef np.npy_intp y_shape[1], f_shape[1]
 *     info = dopri5_fcn_cb_info             # <<<<<<<<<<<<<<
 *     try:
 *         y_shape[0] = n[0]
 */
  __pyx_v_info = __pyx_v_5scipy_9integrate_4_dop_dopri5_fcn_cb_info;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":55
 *     cdef np.npy_intp y_shape[1], f_shape[1]
 *     info = dopri5_fcn_cb_info
 *     try:             # <<<<<<<<<<<<<<
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":56
 *     info = dopri5_fcn_cb_info
 *     try:
 *         y_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         f_shape[0] = n[0]
 */
    (__pyx_v_y_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":57
 *     try:
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         f_shape[0] = n[0]
 *         f_ = np.PyArray_New(NULL, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_y_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_y), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":58
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         f_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         f_ = np.PyArray_New(NULL, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 */
    (__pyx_v_f_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":59
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         f_shape[0] = n[0]
 *         f_ = np.PyArray_New(NULL, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         if info.extra_args is None:
 *             f_ret = info.callback(x[0], y_)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_f_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_f), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_f_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":60
 *         f_shape[0] = n[0]
 *         f_ = np.PyArray_New(NULL, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:             # <<<<<<<<<<<<<<
 *             f_ret = info.callback(x[0], y_)
 *         else:
 */
    __pyx_t_4 = (__pyx_v_info->extra_args == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":61
 *         f_ = np.PyArray_New(NULL, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 *             f_ret = info.callback(x[0], y_)             # <<<<<<<<<<<<<<
 *         else:
 *             f_ret = info.callback(x[0], y_, *info.extra_args)
 */
      __pyx_t_3 = (__pyx_v_x[0]);
      __pyx_t_5 = __site_call2_61_33->Target(__site_call2_61_33, __pyx_context, __pyx_v_info->callback, __pyx_t_3, ((System::Object^)__pyx_v_y_));
      __pyx_t_3 = nullptr;
      __pyx_v_f_ret = __pyx_t_5;
      __pyx_t_5 = nullptr;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":63
 *             f_ret = info.callback(x[0], y_)
 *         else:
 *             f_ret = info.callback(x[0], y_, *info.extra_args)             # <<<<<<<<<<<<<<
 *         if f_ is not f_ret:
 *             f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_FORCECAST | np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 */
      __pyx_t_5 = (__pyx_v_x[0]);
      __pyx_t_3 = __site_call2_ARGS_63_33->Target(__site_call2_ARGS_63_33, __pyx_context, __pyx_v_info->callback, __pyx_t_5, ((System::Object^)__pyx_v_y_), __pyx_v_info->extra_args);
      __pyx_t_5 = nullptr;
      __pyx_v_f_ret = __pyx_t_3;
      __pyx_t_3 = nullptr;
    }
    __pyx_L3:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":64
 *         else:
 *             f_ret = info.callback(x[0], y_, *info.extra_args)
 *         if f_ is not f_ret:             # <<<<<<<<<<<<<<
 *             f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_FORCECAST | np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if f_shape[0] != np.PyArray_DIMS(f_)[0]:
 */
    __pyx_t_4 = (((System::Object^)__pyx_v_f_) != __pyx_v_f_ret);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":65
 *             f_ret = info.callback(x[0], y_, *info.extra_args)
 *         if f_ is not f_ret:
 *             f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_FORCECAST | np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *             if f_shape[0] != np.PyArray_DIMS(f_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 */
      __pyx_t_3 = (System::Object^)(long long)(NPY_DOUBLE);
      __pyx_t_5 = (System::Object^)(long long)(((NPY_FORCECAST | NPY_C_CONTIGUOUS) | NPY_F_CONTIGUOUS));
      __pyx_t_6 = PyArray_FROMANY(__pyx_v_f_ret, __pyx_t_3, __pyx_int_1, __pyx_int_1, __pyx_t_5); 
      __pyx_t_3 = nullptr;
      __pyx_t_5 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_f_ = ((NumpyDotNet::ndarray^)__pyx_t_6);
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":66
 *         if f_ is not f_ret:
 *             f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_FORCECAST | np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if f_shape[0] != np.PyArray_DIMS(f_)[0]:             # <<<<<<<<<<<<<<
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))
 */
      __pyx_t_4 = ((__pyx_v_f_shape[0]) != (PyArray_DIMS(__pyx_v_f_)[0]));
      if (__pyx_t_4) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":67
 *             f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_FORCECAST | np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if f_shape[0] != np.PyArray_DIMS(f_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")             # <<<<<<<<<<<<<<
 *             memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))
 *         dopri5_fcn_cb_info = info
 */
        __pyx_t_6 = PythonOps::GetGlobal(__pyx_context, "ValueError");
        __pyx_t_5 = __site_call1_67_32->Target(__site_call1_67_32, __pyx_context, __pyx_t_6, ((System::Object^)"Array returned from callback has illegal shape"));
        __pyx_t_6 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
        __pyx_t_5 = nullptr;
        goto __pyx_L5;
      }
      __pyx_L5:;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":68
 *             if f_shape[0] != np.PyArray_DIMS(f_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))             # <<<<<<<<<<<<<<
 *         dopri5_fcn_cb_info = info
 *     except:
 */
      memcpy(__pyx_v_f, PyArray_DATA(__pyx_v_f_), PyArray_NBYTES(__pyx_v_f_));
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":69
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))
 *         dopri5_fcn_cb_info = info             # <<<<<<<<<<<<<<
 *     except:
 *         dopri5_fcn_cb_info = info
 */
    __pyx_v_5scipy_9integrate_4_dop_dopri5_fcn_cb_info = __pyx_v_info;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":70
 *             memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))
 *         dopri5_fcn_cb_info = info
 *     except:             # <<<<<<<<<<<<<<
 *         dopri5_fcn_cb_info = info
 *         info.exc = sys.exc_info()
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate._dop.dopri5_fcn_cb_wrapper");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":71
 *         dopri5_fcn_cb_info = info
 *     except:
 *         dopri5_fcn_cb_info = info             # <<<<<<<<<<<<<<
 *         info.exc = sys.exc_info()
 *         raise DopErrorCode(dopri5_fcn_cb_info)
 */
      __pyx_v_5scipy_9integrate_4_dop_dopri5_fcn_cb_info = __pyx_v_info;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":72
 *     except:
 *         dopri5_fcn_cb_info = info
 *         info.exc = sys.exc_info()             # <<<<<<<<<<<<<<
 *         raise DopErrorCode(dopri5_fcn_cb_info)
 * 
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "sys");
      __pyx_t_6 = __site_get_exc_info_72_22->Target(__site_get_exc_info_72_22, __pyx_t_5, __pyx_context);
      __pyx_t_5 = nullptr;
      __pyx_t_5 = __site_call0_72_31->Target(__site_call0_72_31, __pyx_context, __pyx_t_6);
      __pyx_t_6 = nullptr;
      __pyx_v_info->exc = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":73
 *         dopri5_fcn_cb_info = info
 *         info.exc = sys.exc_info()
 *         raise DopErrorCode(dopri5_fcn_cb_info)             # <<<<<<<<<<<<<<
 * 
 * 
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "DopErrorCode");
      __pyx_t_6 = __site_call1_73_26->Target(__site_call1_73_26, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_5scipy_9integrate_4_dop_dopri5_fcn_cb_info));
      __pyx_t_5 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_6, nullptr, nullptr);
      __pyx_t_6 = nullptr;
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":77
 * 
 * cdef fw_CallbackInfo dopri5_solout_cb_info
 * cdef void dopri5_solout_cb_wrapper(fwi_integer_t * nr, fwr_dbl_t * xold, fwr_dbl_t * x, fwr_dbl_t * y, fwi_integer_t * n, fwr_dbl_t * con, fwi_integer_t * icomp, fwi_integer_t * nd, void * rpar, void * ipar, fwi_integer_t * irtn):             # <<<<<<<<<<<<<<
 *     global dopri5_solout_cb_info;
 *     cdef fw_CallbackInfo info
 */

static void (*__pyx_function_pointer_dopri5_solout_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, void *, void *, fwi_integer_t *);
typedef void (*__pyx_fp_t_dopri5_solout_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, void *, void *, fwi_integer_t *);
static __pyx_delegate_t_5scipy_9integrate_4_dop_dopri5_solout_cb_wrapper^ __pyx_delegate_val_dopri5_solout_cb_wrapper;
static  void dopri5_solout_cb_wrapper(fwi_integer_t *__pyx_v_nr, fwr_dbl_t *__pyx_v_xold, fwr_dbl_t *__pyx_v_x, fwr_dbl_t *__pyx_v_y, fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_con, fwi_integer_t *__pyx_v_icomp, fwi_integer_t *__pyx_v_nd, void *__pyx_v_rpar, void *__pyx_v_ipar, fwi_integer_t *__pyx_v_irtn) {
  fw_CallbackInfo^ __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_con_;
  NumpyDotNet::ndarray^ __pyx_v_icomp_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_con_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_icomp_shape[1];
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  System::Object^ __pyx_t_7 = nullptr;
  System::Object^ __pyx_t_8 = nullptr;
  fwi_integer_t __pyx_t_9;
  fwi_integer_t __pyx_t_10;
  __pyx_v_info = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_con_ = nullptr;
  __pyx_v_icomp_ = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":82
 *     cdef np.ndarray y_, con_, icomp_
 *     cdef np.npy_intp y_shape[1], con_shape[1], icomp_shape[1]
 *     info = dopri5_solout_cb_info             # <<<<<<<<<<<<<<
 *     try:
 *         y_shape[0] = n[0]
 */
  __pyx_v_info = __pyx_v_5scipy_9integrate_4_dop_dopri5_solout_cb_info;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":83
 *     cdef np.npy_intp y_shape[1], con_shape[1], icomp_shape[1]
 *     info = dopri5_solout_cb_info
 *     try:             # <<<<<<<<<<<<<<
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":84
 *     info = dopri5_solout_cb_info
 *     try:
 *         y_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         con_shape[0] = 5*nd[0]
 */
    (__pyx_v_y_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":85
 *     try:
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         con_shape[0] = 5*nd[0]
 *         con_ = np.PyArray_New(NULL, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_y_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_y), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":86
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         con_shape[0] = 5*nd[0]             # <<<<<<<<<<<<<<
 *         con_ = np.PyArray_New(NULL, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)
 *         icomp_shape[0] = nd[0]
 */
    (__pyx_v_con_shape[0]) = (5 * (__pyx_v_nd[0]));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":87
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         con_shape[0] = 5*nd[0]
 *         con_ = np.PyArray_New(NULL, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         icomp_shape[0] = nd[0]
 *         icomp_ = np.PyArray_New(NULL, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_con_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_con), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_con_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":88
 *         con_shape[0] = 5*nd[0]
 *         con_ = np.PyArray_New(NULL, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)
 *         icomp_shape[0] = nd[0]             # <<<<<<<<<<<<<<
 *         icomp_ = np.PyArray_New(NULL, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 */
    (__pyx_v_icomp_shape[0]) = (__pyx_v_nd[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":89
 *         con_ = np.PyArray_New(NULL, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)
 *         icomp_shape[0] = nd[0]
 *         icomp_ = np.PyArray_New(NULL, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         if info.extra_args is None:
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0])
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_icomp_shape, NPY_INT, NULL, ((char *)__pyx_v_icomp), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_icomp_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":90
 *         icomp_shape[0] = nd[0]
 *         icomp_ = np.PyArray_New(NULL, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:             # <<<<<<<<<<<<<<
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0])
 *         else:
 */
    __pyx_t_4 = (__pyx_v_info->extra_args == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":91
 *         icomp_ = np.PyArray_New(NULL, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0])             # <<<<<<<<<<<<<<
 *         else:
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0], *info.extra_args)
 */
      __pyx_t_3 = (__pyx_v_nr[0]);
      __pyx_t_5 = (__pyx_v_xold[0]);
      __pyx_t_6 = (__pyx_v_x[0]);
      __pyx_t_7 = (__pyx_v_nd[0]);
      __pyx_t_8 = __site_call7_91_35->Target(__site_call7_91_35, __pyx_context, __pyx_v_info->callback, __pyx_t_3, __pyx_t_5, __pyx_t_6, ((System::Object^)__pyx_v_y_), ((System::Object^)__pyx_v_con_), ((System::Object^)__pyx_v_icomp_), __pyx_t_7);
      __pyx_t_3 = nullptr;
      __pyx_t_5 = nullptr;
      __pyx_t_6 = nullptr;
      __pyx_t_7 = nullptr;
      __pyx_t_9 = __site_cvt_cvt_fwi_integer_t_91_35->Target(__site_cvt_cvt_fwi_integer_t_91_35, __pyx_t_8);
      __pyx_t_8 = nullptr;
      (__pyx_v_irtn[0]) = __pyx_t_9;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":93
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0])
 *         else:
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0], *info.extra_args)             # <<<<<<<<<<<<<<
 *         dopri5_solout_cb_info = info
 *     except:
 */
      __pyx_t_8 = (__pyx_v_nr[0]);
      __pyx_t_7 = (__pyx_v_xold[0]);
      __pyx_t_6 = (__pyx_v_x[0]);
      __pyx_t_5 = (__pyx_v_nd[0]);
      __pyx_t_3 = __site_call7_ARGS_93_35->Target(__site_call7_ARGS_93_35, __pyx_context, __pyx_v_info->callback, __pyx_t_8, __pyx_t_7, __pyx_t_6, ((System::Object^)__pyx_v_y_), ((System::Object^)__pyx_v_con_), ((System::Object^)__pyx_v_icomp_), __pyx_t_5, __pyx_v_info->extra_args);
      __pyx_t_8 = nullptr;
      __pyx_t_7 = nullptr;
      __pyx_t_6 = nullptr;
      __pyx_t_5 = nullptr;
      __pyx_t_10 = __site_cvt_cvt_fwi_integer_t_93_35->Target(__site_cvt_cvt_fwi_integer_t_93_35, __pyx_t_3);
      __pyx_t_3 = nullptr;
      (__pyx_v_irtn[0]) = __pyx_t_10;
    }
    __pyx_L3:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":94
 *         else:
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0], *info.extra_args)
 *         dopri5_solout_cb_info = info             # <<<<<<<<<<<<<<
 *     except:
 *         dopri5_solout_cb_info = info
 */
    __pyx_v_5scipy_9integrate_4_dop_dopri5_solout_cb_info = __pyx_v_info;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":95
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0], *info.extra_args)
 *         dopri5_solout_cb_info = info
 *     except:             # <<<<<<<<<<<<<<
 *         dopri5_solout_cb_info = info
 *         info.exc = sys.exc_info()
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate._dop.dopri5_solout_cb_wrapper");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":96
 *         dopri5_solout_cb_info = info
 *     except:
 *         dopri5_solout_cb_info = info             # <<<<<<<<<<<<<<
 *         info.exc = sys.exc_info()
 *         raise DopErrorCode(dopri5_solout_cb_info)
 */
      __pyx_v_5scipy_9integrate_4_dop_dopri5_solout_cb_info = __pyx_v_info;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":97
 *     except:
 *         dopri5_solout_cb_info = info
 *         info.exc = sys.exc_info()             # <<<<<<<<<<<<<<
 *         raise DopErrorCode(dopri5_solout_cb_info)
 * 
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "sys");
      __pyx_t_5 = __site_get_exc_info_97_22->Target(__site_get_exc_info_97_22, __pyx_t_3, __pyx_context);
      __pyx_t_3 = nullptr;
      __pyx_t_3 = __site_call0_97_31->Target(__site_call0_97_31, __pyx_context, __pyx_t_5);
      __pyx_t_5 = nullptr;
      __pyx_v_info->exc = __pyx_t_3;
      __pyx_t_3 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":98
 *         dopri5_solout_cb_info = info
 *         info.exc = sys.exc_info()
 *         raise DopErrorCode(dopri5_solout_cb_info)             # <<<<<<<<<<<<<<
 * 
 * def dopri5(object fcn, fwr_dbl_t x, object y, fwr_dbl_t xend, object rtol, object atol, object solout, object work, object iwork, object fcn_extra_args=None, object solout_extra_args=None, bint overwrite_y=False):
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "DopErrorCode");
      __pyx_t_5 = __site_call1_98_26->Target(__site_call1_98_26, __pyx_context, __pyx_t_3, ((System::Object^)__pyx_v_5scipy_9integrate_4_dop_dopri5_solout_cb_info));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
      __pyx_t_5 = nullptr;
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":100
 *         raise DopErrorCode(dopri5_solout_cb_info)
 * 
 * def dopri5(object fcn, fwr_dbl_t x, object y, fwr_dbl_t xend, object rtol, object atol, object solout, object work, object iwork, object fcn_extra_args=None, object solout_extra_args=None, bint overwrite_y=False):             # <<<<<<<<<<<<<<
 *     """dopri5(fcn, x, y, xend, rtol, atol, solout, work, iwork[, fcn_extra_args, solout_extra_args, overwrite_y]) -> (x, y, iwork, idid)
 * 
 */

static System::Object^ dopri5(System::Object^ fcn, System::Object^ x, System::Object^ y, System::Object^ xend, System::Object^ rtol, System::Object^ atol, System::Object^ solout, System::Object^ work, System::Object^ iwork, [InteropServices::Optional]System::Object^ fcn_extra_args, [InteropServices::Optional]System::Object^ solout_extra_args, [InteropServices::Optional]System::Object^ overwrite_y) {
  System::Object^ __pyx_v_fcn = nullptr;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_y = nullptr;
  fwr_dbl_t __pyx_v_xend;
  System::Object^ __pyx_v_rtol = nullptr;
  System::Object^ __pyx_v_atol = nullptr;
  System::Object^ __pyx_v_solout = nullptr;
  System::Object^ __pyx_v_work = nullptr;
  System::Object^ __pyx_v_iwork = nullptr;
  System::Object^ __pyx_v_fcn_extra_args = nullptr;
  System::Object^ __pyx_v_solout_extra_args = nullptr;
  int __pyx_v_overwrite_y;
  fw_CallbackInfo^ __pyx_v_fw_fcn_cb;
  fw_CallbackInfo^ __pyx_v_fw_solout_cb;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_itol;
  fwi_integer_t __pyx_v_iout;
  fwi_integer_t __pyx_v_lwork;
  fwi_integer_t __pyx_v_liwork;
  fwi_integer_t __pyx_v_idid;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_rtol_;
  NumpyDotNet::ndarray^ __pyx_v_atol_;
  NumpyDotNet::ndarray^ __pyx_v_work_;
  NumpyDotNet::ndarray^ __pyx_v_iwork_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_rtol_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_atol_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_work_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_iwork_shape[1];
  System::Object^ __pyx_v_e;
  System::Object^ __pyx_v_fw_exctype;
  System::Object^ __pyx_v_fw_excval;
  System::Object^ __pyx_v_fw_exctb;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  long __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  int __pyx_t_6;
  array<System::Object^>^ __pyx_t_9;
  System::Object^ __pyx_t_10 = nullptr;
  System::Object^ __pyx_t_11 = nullptr;
  __pyx_v_fcn = fcn;
  __pyx_v_x = __site_cvt_cvt_fwr_dbl_t_100_0->Target(__site_cvt_cvt_fwr_dbl_t_100_0, x);
  __pyx_v_y = y;
  __pyx_v_xend = __site_cvt_cvt_fwr_dbl_t_100_0_1->Target(__site_cvt_cvt_fwr_dbl_t_100_0_1, xend);
  __pyx_v_rtol = rtol;
  __pyx_v_atol = atol;
  __pyx_v_solout = solout;
  __pyx_v_work = work;
  __pyx_v_iwork = iwork;
  if (dynamic_cast<System::Reflection::Missing^>(fcn_extra_args) == nullptr) {
    __pyx_v_fcn_extra_args = fcn_extra_args;
  } else {
    __pyx_v_fcn_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(solout_extra_args) == nullptr) {
    __pyx_v_solout_extra_args = solout_extra_args;
  } else {
    __pyx_v_solout_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_y) == nullptr) {
    __pyx_v_overwrite_y = __site_cvt_cvt_int_100_0->Target(__site_cvt_cvt_int_100_0, overwrite_y);
  } else {
    __pyx_v_overwrite_y = ((int)0);
  }
  __pyx_v_fw_fcn_cb = nullptr;
  __pyx_v_fw_solout_cb = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_rtol_ = nullptr;
  __pyx_v_atol_ = nullptr;
  __pyx_v_work_ = nullptr;
  __pyx_v_iwork_ = nullptr;
  __pyx_v_e = nullptr;
  __pyx_v_fw_exctype = nullptr;
  __pyx_v_fw_excval = nullptr;
  __pyx_v_fw_exctb = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":131
 *     cdef np.ndarray y_, rtol_, atol_, work_, iwork_
 *     cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], work_shape[1], iwork_shape[1]
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)             # <<<<<<<<<<<<<<
 *     itol = 0 if (atol_shape[0] <= 1) else 1
 *     iout = 0
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_atol, NPY_DOUBLE, 1, __pyx_v_atol_shape, 0, 0, nullptr)); 
  __pyx_v_atol_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":132
 *     cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], work_shape[1], iwork_shape[1]
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
 *     itol = 0 if (atol_shape[0] <= 1) else 1             # <<<<<<<<<<<<<<
 *     iout = 0
 *     work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)
 */
  if (((__pyx_v_atol_shape[0]) <= 1)) {
    __pyx_t_2 = 0;
  } else {
    __pyx_t_2 = 1;
  }
  __pyx_v_itol = __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":133
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
 *     itol = 0 if (atol_shape[0] <= 1) else 1
 *     iout = 0             # <<<<<<<<<<<<<<
 *     work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)
 *     lwork = work_shape[0]
 */
  __pyx_v_iout = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":134
 *     itol = 0 if (atol_shape[0] <= 1) else 1
 *     iout = 0
 *     work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)             # <<<<<<<<<<<<<<
 *     lwork = work_shape[0]
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_work, NPY_DOUBLE, 1, __pyx_v_work_shape, 0, 0, nullptr)); 
  __pyx_v_work_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":135
 *     iout = 0
 *     work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)
 *     lwork = work_shape[0]             # <<<<<<<<<<<<<<
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     liwork = iwork_shape[0]
 */
  __pyx_v_lwork = (__pyx_v_work_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":136
 *     work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)
 *     lwork = work_shape[0]
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)             # <<<<<<<<<<<<<<
 *     liwork = iwork_shape[0]
 *     idid = 0
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_iwork, NPY_INT, 1, __pyx_v_iwork_shape, 0, 0, nullptr)); 
  __pyx_v_iwork_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":137
 *     lwork = work_shape[0]
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     liwork = iwork_shape[0]             # <<<<<<<<<<<<<<
 *     idid = 0
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 */
  __pyx_v_liwork = (__pyx_v_iwork_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":138
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     liwork = iwork_shape[0]
 *     idid = 0             # <<<<<<<<<<<<<<
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 */
  __pyx_v_idid = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":139
 *     liwork = iwork_shape[0]
 *     idid = 0
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)             # <<<<<<<<<<<<<<
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 *     n = y_shape[0]
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_rtol, NPY_DOUBLE, 1, __pyx_v_rtol_shape, 0, 0, nullptr)); 
  __pyx_v_rtol_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":140
 *     idid = 0
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)             # <<<<<<<<<<<<<<
 *     n = y_shape[0]
 *     if not (rtol_shape[0] == atol_shape[0]):
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_y, NPY_DOUBLE, 1, __pyx_v_y_shape, (!__pyx_v_overwrite_y), 0, nullptr)); 
  __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":141
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 *     n = y_shape[0]             # <<<<<<<<<<<<<<
 *     if not (rtol_shape[0] == atol_shape[0]):
 *         raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')
 */
  __pyx_v_n = (__pyx_v_y_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":142
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 *     n = y_shape[0]
 *     if not (rtol_shape[0] == atol_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):
 */
  __pyx_t_3 = (!((__pyx_v_rtol_shape[0]) == (__pyx_v_atol_shape[0])));
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":143
 *     n = y_shape[0]
 *     if not (rtol_shape[0] == atol_shape[0]):
 *         raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')             # <<<<<<<<<<<<<<
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_143_24->Target(__site_call1_143_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":144
 *     if not (rtol_shape[0] == atol_shape[0]):
 *         raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')
 *     if not (work_shape[0] >= ((8 * n) + 21)):
 */
  __pyx_t_3 = ((__pyx_v_atol_shape[0]) <= 1);
  if (!__pyx_t_3) {
    __pyx_t_5 = ((__pyx_v_atol_shape[0]) >= __pyx_v_n);
    __pyx_t_6 = __pyx_t_5;
  } else {
    __pyx_t_6 = __pyx_t_3;
  }
  __pyx_t_3 = (!__pyx_t_6);
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":145
 *         raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')             # <<<<<<<<<<<<<<
 *     if not (work_shape[0] >= ((8 * n) + 21)):
 *         raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_145_24->Target(__site_call1_145_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":146
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')
 *     if not (work_shape[0] >= ((8 * n) + 21)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')
 *     if not (iwork_shape[0] >= 21):
 */
  __pyx_t_3 = (!((__pyx_v_work_shape[0]) >= ((8 * __pyx_v_n) + 21)));
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":147
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')
 *     if not (work_shape[0] >= ((8 * n) + 21)):
 *         raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')             # <<<<<<<<<<<<<<
 *     if not (iwork_shape[0] >= 21):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_147_24->Target(__site_call1_147_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":148
 *     if not (work_shape[0] >= ((8 * n) + 21)):
 *         raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')
 *     if not (iwork_shape[0] >= 21):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')
 *     if not (0 <= n <= y_shape[0]):
 */
  __pyx_t_3 = (!((__pyx_v_iwork_shape[0]) >= 21));
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":149
 *         raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')
 *     if not (iwork_shape[0] >= 21):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= y_shape[0]):
 *         raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_149_24->Target(__site_call1_149_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: iwork.shape[0] >= 21"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":150
 *     if not (iwork_shape[0] >= 21):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')
 *     if not (0 <= n <= y_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
 *     dopri5_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, fcn_extra_args)
 */
  __pyx_t_3 = (0 <= __pyx_v_n);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_v_n <= (__pyx_v_y_shape[0]));
  }
  __pyx_t_6 = (!__pyx_t_3);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":151
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')
 *     if not (0 <= n <= y_shape[0]):
 *         raise ValueError("(0 <= n <= y.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dopri5_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, fcn_extra_args)
 *     dopri5_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, solout_extra_args)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_151_24->Target(__site_call1_151_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= y.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":152
 *     if not (0 <= n <= y_shape[0]):
 *         raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
 *     dopri5_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, fcn_extra_args)             # <<<<<<<<<<<<<<
 *     dopri5_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, solout_extra_args)
 *     try:
 */
  __pyx_t_4 = __site_call2_152_52->Target(__site_call2_152_52, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_9integrate_4_dop_fw_CallbackInfo)), __pyx_v_fcn, __pyx_v_fcn_extra_args);
  __pyx_v_5scipy_9integrate_4_dop_dopri5_fcn_cb_info = ((fw_CallbackInfo^)__pyx_t_4);
  __pyx_v_fw_fcn_cb = ((fw_CallbackInfo^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":153
 *         raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
 *     dopri5_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, fcn_extra_args)
 *     dopri5_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, solout_extra_args)             # <<<<<<<<<<<<<<
 *     try:
 *         fc.dopri5(&n, &dopri5_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dopri5_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, NULL, NULL, &idid)
 */
  __pyx_t_4 = __site_call2_153_58->Target(__site_call2_153_58, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_9integrate_4_dop_fw_CallbackInfo)), __pyx_v_solout, __pyx_v_solout_extra_args);
  __pyx_v_5scipy_9integrate_4_dop_dopri5_solout_cb_info = ((fw_CallbackInfo^)__pyx_t_4);
  __pyx_v_fw_solout_cb = ((fw_CallbackInfo^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":154
 *     dopri5_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, fcn_extra_args)
 *     dopri5_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, solout_extra_args)
 *     try:             # <<<<<<<<<<<<<<
 *         fc.dopri5(&n, &dopri5_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dopri5_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, NULL, NULL, &idid)
 *     except DopErrorCode, e:
 */
  try {
    try {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":155
 *     dopri5_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, solout_extra_args)
 *     try:
 *         fc.dopri5(&n, &dopri5_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dopri5_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, NULL, NULL, &idid)             # <<<<<<<<<<<<<<
 *     except DopErrorCode, e:
 *         fw_exctype, fw_excval, fw_exctb = e.exc
 */
      F_FUNC(dopri5,DOPRI5)((&__pyx_v_n), __pyx_function_pointer_dopri5_fcn_cb_wrapper, (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_y_)), (&__pyx_v_xend), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_rtol_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_atol_)), (&__pyx_v_itol), __pyx_function_pointer_dopri5_solout_cb_wrapper, (&__pyx_v_iout), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_work_)), (&__pyx_v_lwork), ((fwi_integer_t *)PyArray_DATA(__pyx_v_iwork_)), (&__pyx_v_liwork), NULL, NULL, (&__pyx_v_idid));
    } catch (System::Exception^ __pyx_lt_7) {
      System::Object^ __pyx_lt_8 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_7);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":156
 *     try:
 *         fc.dopri5(&n, &dopri5_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dopri5_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, NULL, NULL, &idid)
 *     except DopErrorCode, e:             # <<<<<<<<<<<<<<
 *         fw_exctype, fw_excval, fw_exctb = e.exc
 *         raise fw_exctype, fw_excval, fw_exctb
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "DopErrorCode");
      __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_8, __pyx_t_4);
      __pyx_t_4 = nullptr;
      if (__pyx_v_e != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate._dop.dopri5");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_7);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":157
 *         fc.dopri5(&n, &dopri5_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dopri5_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, NULL, NULL, &idid)
 *     except DopErrorCode, e:
 *         fw_exctype, fw_excval, fw_exctb = e.exc             # <<<<<<<<<<<<<<
 *         raise fw_exctype, fw_excval, fw_exctb
 *     finally:
 */
        __pyx_t_4 = __site_get_exc_157_43->Target(__site_get_exc_157_43, __pyx_v_e, __pyx_context);
        __pyx_t_9 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_4, 3)));
        __pyx_t_1 = __pyx_t_9[0];
        __pyx_t_10 = __pyx_t_9[1];
        __pyx_t_11 = __pyx_t_9[2];
        __pyx_t_4 = nullptr;
        __pyx_t_9 = nullptr;
        __pyx_v_fw_exctype = __pyx_t_1;
        __pyx_t_1 = nullptr;
        __pyx_v_fw_excval = __pyx_t_10;
        __pyx_t_10 = nullptr;
        __pyx_v_fw_exctb = __pyx_t_11;
        __pyx_t_11 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":158
 *     except DopErrorCode, e:
 *         fw_exctype, fw_excval, fw_exctb = e.exc
 *         raise fw_exctype, fw_excval, fw_exctb             # <<<<<<<<<<<<<<
 *     finally:
 *         dopri5_fcn_cb_info = None
 */
        throw PythonOps::MakeException(__pyx_context, __pyx_v_fw_exctype, __pyx_v_fw_excval, __pyx_v_fw_exctb);
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_7);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":160
 *         raise fw_exctype, fw_excval, fw_exctb
 *     finally:
 *         dopri5_fcn_cb_info = None             # <<<<<<<<<<<<<<
 *     return (x, y_, iwork_, idid,)
 * 
 */
  finally {
    __pyx_v_5scipy_9integrate_4_dop_dopri5_fcn_cb_info = ((fw_CallbackInfo^)nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":161
 *     finally:
 *         dopri5_fcn_cb_info = None
 *     return (x, y_, iwork_, idid,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_x;
  __pyx_t_11 = __pyx_v_idid;
  __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, ((System::Object^)__pyx_v_y_), ((System::Object^)__pyx_v_iwork_), __pyx_t_11});
  __pyx_t_4 = nullptr;
  __pyx_t_11 = nullptr;
  __pyx_r = __pyx_t_10;
  __pyx_t_10 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":166
 * 
 * cdef fw_CallbackInfo dop853_fcn_cb_info
 * cdef void dop853_fcn_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * x, fwr_dbl_t * y, fwr_dbl_t * f, void * rpar, void * ipar):             # <<<<<<<<<<<<<<
 *     global dop853_fcn_cb_info;
 *     cdef fw_CallbackInfo info
 */

static void (*__pyx_function_pointer_dop853_fcn_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *);
typedef void (*__pyx_fp_t_dop853_fcn_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *);
static __pyx_delegate_t_5scipy_9integrate_4_dop_dop853_fcn_cb_wrapper^ __pyx_delegate_val_dop853_fcn_cb_wrapper;
static  void dop853_fcn_cb_wrapper(fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_x, fwr_dbl_t *__pyx_v_y, fwr_dbl_t *__pyx_v_f, void *__pyx_v_rpar, void *__pyx_v_ipar) {
  fw_CallbackInfo^ __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_f_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_f_shape[1];
  System::Object^ __pyx_v_f_ret;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  __pyx_v_info = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_f_ = nullptr;
  __pyx_v_f_ret = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":171
 *     cdef np.ndarray y_, f_
 *     cdef np.npy_intp y_shape[1], f_shape[1]
 *     info = dop853_fcn_cb_info             # <<<<<<<<<<<<<<
 *     try:
 *         y_shape[0] = n[0]
 */
  __pyx_v_info = __pyx_v_5scipy_9integrate_4_dop_dop853_fcn_cb_info;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":172
 *     cdef np.npy_intp y_shape[1], f_shape[1]
 *     info = dop853_fcn_cb_info
 *     try:             # <<<<<<<<<<<<<<
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":173
 *     info = dop853_fcn_cb_info
 *     try:
 *         y_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         f_shape[0] = n[0]
 */
    (__pyx_v_y_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":174
 *     try:
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         f_shape[0] = n[0]
 *         f_ = np.PyArray_New(NULL, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_y_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_y), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":175
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         f_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         f_ = np.PyArray_New(NULL, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 */
    (__pyx_v_f_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":176
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         f_shape[0] = n[0]
 *         f_ = np.PyArray_New(NULL, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         if info.extra_args is None:
 *             f_ret = info.callback(x[0], y_)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_f_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_f), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_f_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":177
 *         f_shape[0] = n[0]
 *         f_ = np.PyArray_New(NULL, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:             # <<<<<<<<<<<<<<
 *             f_ret = info.callback(x[0], y_)
 *         else:
 */
    __pyx_t_4 = (__pyx_v_info->extra_args == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":178
 *         f_ = np.PyArray_New(NULL, 1, f_shape, fwr_dbl_t_enum, NULL, <char*>f, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 *             f_ret = info.callback(x[0], y_)             # <<<<<<<<<<<<<<
 *         else:
 *             f_ret = info.callback(x[0], y_, *info.extra_args)
 */
      __pyx_t_3 = (__pyx_v_x[0]);
      __pyx_t_5 = __site_call2_178_33->Target(__site_call2_178_33, __pyx_context, __pyx_v_info->callback, __pyx_t_3, ((System::Object^)__pyx_v_y_));
      __pyx_t_3 = nullptr;
      __pyx_v_f_ret = __pyx_t_5;
      __pyx_t_5 = nullptr;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":180
 *             f_ret = info.callback(x[0], y_)
 *         else:
 *             f_ret = info.callback(x[0], y_, *info.extra_args)             # <<<<<<<<<<<<<<
 *         if f_ is not f_ret:
 *             f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 */
      __pyx_t_5 = (__pyx_v_x[0]);
      __pyx_t_3 = __site_call2_ARGS_180_33->Target(__site_call2_ARGS_180_33, __pyx_context, __pyx_v_info->callback, __pyx_t_5, ((System::Object^)__pyx_v_y_), __pyx_v_info->extra_args);
      __pyx_t_5 = nullptr;
      __pyx_v_f_ret = __pyx_t_3;
      __pyx_t_3 = nullptr;
    }
    __pyx_L3:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":181
 *         else:
 *             f_ret = info.callback(x[0], y_, *info.extra_args)
 *         if f_ is not f_ret:             # <<<<<<<<<<<<<<
 *             f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if f_shape[0] != np.PyArray_DIMS(f_)[0]:
 */
    __pyx_t_4 = (((System::Object^)__pyx_v_f_) != __pyx_v_f_ret);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":182
 *             f_ret = info.callback(x[0], y_, *info.extra_args)
 *         if f_ is not f_ret:
 *             f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *             if f_shape[0] != np.PyArray_DIMS(f_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 */
      __pyx_t_3 = (System::Object^)(long long)(NPY_DOUBLE);
      __pyx_t_5 = (System::Object^)(long long)((NPY_C_CONTIGUOUS | NPY_F_CONTIGUOUS));
      __pyx_t_6 = PyArray_FROMANY(__pyx_v_f_ret, __pyx_t_3, __pyx_int_1, __pyx_int_1, __pyx_t_5); 
      __pyx_t_3 = nullptr;
      __pyx_t_5 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_f_ = ((NumpyDotNet::ndarray^)__pyx_t_6);
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":183
 *         if f_ is not f_ret:
 *             f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if f_shape[0] != np.PyArray_DIMS(f_)[0]:             # <<<<<<<<<<<<<<
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))
 */
      __pyx_t_4 = ((__pyx_v_f_shape[0]) != (PyArray_DIMS(__pyx_v_f_)[0]));
      if (__pyx_t_4) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":184
 *             f_ = np.PyArray_FROMANY(f_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if f_shape[0] != np.PyArray_DIMS(f_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")             # <<<<<<<<<<<<<<
 *             memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))
 *         dop853_fcn_cb_info = info
 */
        __pyx_t_6 = PythonOps::GetGlobal(__pyx_context, "ValueError");
        __pyx_t_5 = __site_call1_184_32->Target(__site_call1_184_32, __pyx_context, __pyx_t_6, ((System::Object^)"Array returned from callback has illegal shape"));
        __pyx_t_6 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
        __pyx_t_5 = nullptr;
        goto __pyx_L5;
      }
      __pyx_L5:;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":185
 *             if f_shape[0] != np.PyArray_DIMS(f_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))             # <<<<<<<<<<<<<<
 *         dop853_fcn_cb_info = info
 *     except:
 */
      memcpy(__pyx_v_f, PyArray_DATA(__pyx_v_f_), PyArray_NBYTES(__pyx_v_f_));
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":186
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))
 *         dop853_fcn_cb_info = info             # <<<<<<<<<<<<<<
 *     except:
 *         dop853_fcn_cb_info = info
 */
    __pyx_v_5scipy_9integrate_4_dop_dop853_fcn_cb_info = __pyx_v_info;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":187
 *             memcpy(f, np.PyArray_DATA(f_), np.PyArray_NBYTES(f_))
 *         dop853_fcn_cb_info = info
 *     except:             # <<<<<<<<<<<<<<
 *         dop853_fcn_cb_info = info
 *         info.exc = sys.exc_info()
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate._dop.dop853_fcn_cb_wrapper");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":188
 *         dop853_fcn_cb_info = info
 *     except:
 *         dop853_fcn_cb_info = info             # <<<<<<<<<<<<<<
 *         info.exc = sys.exc_info()
 *         raise DopErrorCode(dop853_fcn_cb_info)
 */
      __pyx_v_5scipy_9integrate_4_dop_dop853_fcn_cb_info = __pyx_v_info;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":189
 *     except:
 *         dop853_fcn_cb_info = info
 *         info.exc = sys.exc_info()             # <<<<<<<<<<<<<<
 *         raise DopErrorCode(dop853_fcn_cb_info)
 * 
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "sys");
      __pyx_t_6 = __site_get_exc_info_189_22->Target(__site_get_exc_info_189_22, __pyx_t_5, __pyx_context);
      __pyx_t_5 = nullptr;
      __pyx_t_5 = __site_call0_189_31->Target(__site_call0_189_31, __pyx_context, __pyx_t_6);
      __pyx_t_6 = nullptr;
      __pyx_v_info->exc = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":190
 *         dop853_fcn_cb_info = info
 *         info.exc = sys.exc_info()
 *         raise DopErrorCode(dop853_fcn_cb_info)             # <<<<<<<<<<<<<<
 * 
 * 
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "DopErrorCode");
      __pyx_t_6 = __site_call1_190_26->Target(__site_call1_190_26, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_5scipy_9integrate_4_dop_dop853_fcn_cb_info));
      __pyx_t_5 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_6, nullptr, nullptr);
      __pyx_t_6 = nullptr;
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":194
 * 
 * cdef fw_CallbackInfo dop853_solout_cb_info
 * cdef void dop853_solout_cb_wrapper(fwi_integer_t * nr, fwr_dbl_t * xold, fwr_dbl_t * x, fwr_dbl_t * y, fwi_integer_t * n, fwr_dbl_t * con, fwi_integer_t * icomp, fwi_integer_t * nd, void * rpar, void * ipar, fwi_integer_t * irtn):             # <<<<<<<<<<<<<<
 *     global dop853_solout_cb_info;
 *     cdef fw_CallbackInfo info
 */

static void (*__pyx_function_pointer_dop853_solout_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, void *, void *, fwi_integer_t *);
typedef void (*__pyx_fp_t_dop853_solout_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, void *, void *, fwi_integer_t *);
static __pyx_delegate_t_5scipy_9integrate_4_dop_dop853_solout_cb_wrapper^ __pyx_delegate_val_dop853_solout_cb_wrapper;
static  void dop853_solout_cb_wrapper(fwi_integer_t *__pyx_v_nr, fwr_dbl_t *__pyx_v_xold, fwr_dbl_t *__pyx_v_x, fwr_dbl_t *__pyx_v_y, fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_con, fwi_integer_t *__pyx_v_icomp, fwi_integer_t *__pyx_v_nd, void *__pyx_v_rpar, void *__pyx_v_ipar, fwi_integer_t *__pyx_v_irtn) {
  fw_CallbackInfo^ __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_con_;
  NumpyDotNet::ndarray^ __pyx_v_icomp_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_con_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_icomp_shape[1];
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  System::Object^ __pyx_t_7 = nullptr;
  System::Object^ __pyx_t_8 = nullptr;
  fwi_integer_t __pyx_t_9;
  fwi_integer_t __pyx_t_10;
  __pyx_v_info = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_con_ = nullptr;
  __pyx_v_icomp_ = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":199
 *     cdef np.ndarray y_, con_, icomp_
 *     cdef np.npy_intp y_shape[1], con_shape[1], icomp_shape[1]
 *     info = dop853_solout_cb_info             # <<<<<<<<<<<<<<
 *     try:
 *         y_shape[0] = n[0]
 */
  __pyx_v_info = __pyx_v_5scipy_9integrate_4_dop_dop853_solout_cb_info;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":200
 *     cdef np.npy_intp y_shape[1], con_shape[1], icomp_shape[1]
 *     info = dop853_solout_cb_info
 *     try:             # <<<<<<<<<<<<<<
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":201
 *     info = dop853_solout_cb_info
 *     try:
 *         y_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         con_shape[0] = 5*nd[0]
 */
    (__pyx_v_y_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":202
 *     try:
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         con_shape[0] = 5*nd[0]
 *         con_ = np.PyArray_New(NULL, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_y_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_y), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":203
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         con_shape[0] = 5*nd[0]             # <<<<<<<<<<<<<<
 *         con_ = np.PyArray_New(NULL, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)
 *         icomp_shape[0] = nd[0]
 */
    (__pyx_v_con_shape[0]) = (5 * (__pyx_v_nd[0]));

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":204
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         con_shape[0] = 5*nd[0]
 *         con_ = np.PyArray_New(NULL, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         icomp_shape[0] = nd[0]
 *         icomp_ = np.PyArray_New(NULL, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_con_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_con), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_con_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":205
 *         con_shape[0] = 5*nd[0]
 *         con_ = np.PyArray_New(NULL, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)
 *         icomp_shape[0] = nd[0]             # <<<<<<<<<<<<<<
 *         icomp_ = np.PyArray_New(NULL, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 */
    (__pyx_v_icomp_shape[0]) = (__pyx_v_nd[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":206
 *         con_ = np.PyArray_New(NULL, 1, con_shape, fwr_dbl_t_enum, NULL, <char*>con, 0, np.NPY_FARRAY, NULL)
 *         icomp_shape[0] = nd[0]
 *         icomp_ = np.PyArray_New(NULL, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         if info.extra_args is None:
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0])
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_icomp_shape, NPY_INT, NULL, ((char *)__pyx_v_icomp), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_icomp_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":207
 *         icomp_shape[0] = nd[0]
 *         icomp_ = np.PyArray_New(NULL, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:             # <<<<<<<<<<<<<<
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0])
 *         else:
 */
    __pyx_t_4 = (__pyx_v_info->extra_args == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":208
 *         icomp_ = np.PyArray_New(NULL, 1, icomp_shape, fwi_integer_t_enum, NULL, <char*>icomp, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0])             # <<<<<<<<<<<<<<
 *         else:
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0], *info.extra_args)
 */
      __pyx_t_3 = (__pyx_v_nr[0]);
      __pyx_t_5 = (__pyx_v_xold[0]);
      __pyx_t_6 = (__pyx_v_x[0]);
      __pyx_t_7 = (__pyx_v_nd[0]);
      __pyx_t_8 = __site_call7_208_35->Target(__site_call7_208_35, __pyx_context, __pyx_v_info->callback, __pyx_t_3, __pyx_t_5, __pyx_t_6, ((System::Object^)__pyx_v_y_), ((System::Object^)__pyx_v_con_), ((System::Object^)__pyx_v_icomp_), __pyx_t_7);
      __pyx_t_3 = nullptr;
      __pyx_t_5 = nullptr;
      __pyx_t_6 = nullptr;
      __pyx_t_7 = nullptr;
      __pyx_t_9 = __site_cvt_cvt_fwi_integer_t_208_35->Target(__site_cvt_cvt_fwi_integer_t_208_35, __pyx_t_8);
      __pyx_t_8 = nullptr;
      (__pyx_v_irtn[0]) = __pyx_t_9;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":210
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0])
 *         else:
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0], *info.extra_args)             # <<<<<<<<<<<<<<
 *         dop853_solout_cb_info = info
 *     except:
 */
      __pyx_t_8 = (__pyx_v_nr[0]);
      __pyx_t_7 = (__pyx_v_xold[0]);
      __pyx_t_6 = (__pyx_v_x[0]);
      __pyx_t_5 = (__pyx_v_nd[0]);
      __pyx_t_3 = __site_call7_ARGS_210_35->Target(__site_call7_ARGS_210_35, __pyx_context, __pyx_v_info->callback, __pyx_t_8, __pyx_t_7, __pyx_t_6, ((System::Object^)__pyx_v_y_), ((System::Object^)__pyx_v_con_), ((System::Object^)__pyx_v_icomp_), __pyx_t_5, __pyx_v_info->extra_args);
      __pyx_t_8 = nullptr;
      __pyx_t_7 = nullptr;
      __pyx_t_6 = nullptr;
      __pyx_t_5 = nullptr;
      __pyx_t_10 = __site_cvt_cvt_fwi_integer_t_210_35->Target(__site_cvt_cvt_fwi_integer_t_210_35, __pyx_t_3);
      __pyx_t_3 = nullptr;
      (__pyx_v_irtn[0]) = __pyx_t_10;
    }
    __pyx_L3:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":211
 *         else:
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0], *info.extra_args)
 *         dop853_solout_cb_info = info             # <<<<<<<<<<<<<<
 *     except:
 *         dop853_solout_cb_info = info
 */
    __pyx_v_5scipy_9integrate_4_dop_dop853_solout_cb_info = __pyx_v_info;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":212
 *             irtn[0] = info.callback(nr[0], xold[0], x[0], y_, con_, icomp_, nd[0], *info.extra_args)
 *         dop853_solout_cb_info = info
 *     except:             # <<<<<<<<<<<<<<
 *         dop853_solout_cb_info = info
 *         info.exc = sys.exc_info()
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate._dop.dop853_solout_cb_wrapper");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":213
 *         dop853_solout_cb_info = info
 *     except:
 *         dop853_solout_cb_info = info             # <<<<<<<<<<<<<<
 *         info.exc = sys.exc_info()
 *         raise DopErrorCode(dop853_solout_cb_info)
 */
      __pyx_v_5scipy_9integrate_4_dop_dop853_solout_cb_info = __pyx_v_info;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":214
 *     except:
 *         dop853_solout_cb_info = info
 *         info.exc = sys.exc_info()             # <<<<<<<<<<<<<<
 *         raise DopErrorCode(dop853_solout_cb_info)
 * 
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "sys");
      __pyx_t_5 = __site_get_exc_info_214_22->Target(__site_get_exc_info_214_22, __pyx_t_3, __pyx_context);
      __pyx_t_3 = nullptr;
      __pyx_t_3 = __site_call0_214_31->Target(__site_call0_214_31, __pyx_context, __pyx_t_5);
      __pyx_t_5 = nullptr;
      __pyx_v_info->exc = __pyx_t_3;
      __pyx_t_3 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":215
 *         dop853_solout_cb_info = info
 *         info.exc = sys.exc_info()
 *         raise DopErrorCode(dop853_solout_cb_info)             # <<<<<<<<<<<<<<
 * 
 * 
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "DopErrorCode");
      __pyx_t_5 = __site_call1_215_26->Target(__site_call1_215_26, __pyx_context, __pyx_t_3, ((System::Object^)__pyx_v_5scipy_9integrate_4_dop_dop853_solout_cb_info));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
      __pyx_t_5 = nullptr;
    }
    PythonOps::ExceptionHandled(__pyx_context);
  }

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":218
 * 
 * 
 * def dop853(object fcn, fwr_dbl_t x, object y, fwr_dbl_t xend, object rtol, object atol, object solout, object work, object iwork, object fcn_extra_args=None, object solout_extra_args=None, bint overwrite_y=False):             # <<<<<<<<<<<<<<
 *     """dop853(fcn, x, y, xend, rtol, atol, solout, work, iwork[, fcn_extra_args, solout_extra_args, overwrite_y]) -> (x, y, iwork, idid)
 * 
 */

static System::Object^ dop853(System::Object^ fcn, System::Object^ x, System::Object^ y, System::Object^ xend, System::Object^ rtol, System::Object^ atol, System::Object^ solout, System::Object^ work, System::Object^ iwork, [InteropServices::Optional]System::Object^ fcn_extra_args, [InteropServices::Optional]System::Object^ solout_extra_args, [InteropServices::Optional]System::Object^ overwrite_y) {
  System::Object^ __pyx_v_fcn = nullptr;
  fwr_dbl_t __pyx_v_x;
  System::Object^ __pyx_v_y = nullptr;
  fwr_dbl_t __pyx_v_xend;
  System::Object^ __pyx_v_rtol = nullptr;
  System::Object^ __pyx_v_atol = nullptr;
  System::Object^ __pyx_v_solout = nullptr;
  System::Object^ __pyx_v_work = nullptr;
  System::Object^ __pyx_v_iwork = nullptr;
  System::Object^ __pyx_v_fcn_extra_args = nullptr;
  System::Object^ __pyx_v_solout_extra_args = nullptr;
  int __pyx_v_overwrite_y;
  fw_CallbackInfo^ __pyx_v_fw_fcn_cb;
  fw_CallbackInfo^ __pyx_v_fw_solout_cb;
  fwi_integer_t __pyx_v_n;
  fwi_integer_t __pyx_v_itol;
  fwi_integer_t __pyx_v_iout;
  fwi_integer_t __pyx_v_lwork;
  fwi_integer_t __pyx_v_liwork;
  fwi_integer_t __pyx_v_idid;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_rtol_;
  NumpyDotNet::ndarray^ __pyx_v_atol_;
  NumpyDotNet::ndarray^ __pyx_v_work_;
  NumpyDotNet::ndarray^ __pyx_v_iwork_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_rtol_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_atol_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_work_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_iwork_shape[1];
  System::Object^ __pyx_v_e;
  System::Object^ __pyx_v_fw_exctype;
  System::Object^ __pyx_v_fw_excval;
  System::Object^ __pyx_v_fw_exctb;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  long __pyx_t_2;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  int __pyx_t_5;
  int __pyx_t_6;
  array<System::Object^>^ __pyx_t_9;
  System::Object^ __pyx_t_10 = nullptr;
  System::Object^ __pyx_t_11 = nullptr;
  __pyx_v_fcn = fcn;
  __pyx_v_x = __site_cvt_cvt_fwr_dbl_t_218_0->Target(__site_cvt_cvt_fwr_dbl_t_218_0, x);
  __pyx_v_y = y;
  __pyx_v_xend = __site_cvt_cvt_fwr_dbl_t_218_0_1->Target(__site_cvt_cvt_fwr_dbl_t_218_0_1, xend);
  __pyx_v_rtol = rtol;
  __pyx_v_atol = atol;
  __pyx_v_solout = solout;
  __pyx_v_work = work;
  __pyx_v_iwork = iwork;
  if (dynamic_cast<System::Reflection::Missing^>(fcn_extra_args) == nullptr) {
    __pyx_v_fcn_extra_args = fcn_extra_args;
  } else {
    __pyx_v_fcn_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(solout_extra_args) == nullptr) {
    __pyx_v_solout_extra_args = solout_extra_args;
  } else {
    __pyx_v_solout_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_y) == nullptr) {
    __pyx_v_overwrite_y = __site_cvt_cvt_int_218_0->Target(__site_cvt_cvt_int_218_0, overwrite_y);
  } else {
    __pyx_v_overwrite_y = ((int)0);
  }
  __pyx_v_fw_fcn_cb = nullptr;
  __pyx_v_fw_solout_cb = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_rtol_ = nullptr;
  __pyx_v_atol_ = nullptr;
  __pyx_v_work_ = nullptr;
  __pyx_v_iwork_ = nullptr;
  __pyx_v_e = nullptr;
  __pyx_v_fw_exctype = nullptr;
  __pyx_v_fw_excval = nullptr;
  __pyx_v_fw_exctb = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":249
 *     cdef np.ndarray y_, rtol_, atol_, work_, iwork_
 *     cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], work_shape[1], iwork_shape[1]
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)             # <<<<<<<<<<<<<<
 *     itol = 0 if (atol_shape[0] <= 1) else 1
 *     work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_atol, NPY_DOUBLE, 1, __pyx_v_atol_shape, 0, 0, nullptr)); 
  __pyx_v_atol_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":250
 *     cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], work_shape[1], iwork_shape[1]
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
 *     itol = 0 if (atol_shape[0] <= 1) else 1             # <<<<<<<<<<<<<<
 *     work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)
 *     lwork = work_shape[0]
 */
  if (((__pyx_v_atol_shape[0]) <= 1)) {
    __pyx_t_2 = 0;
  } else {
    __pyx_t_2 = 1;
  }
  __pyx_v_itol = __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":251
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
 *     itol = 0 if (atol_shape[0] <= 1) else 1
 *     work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)             # <<<<<<<<<<<<<<
 *     lwork = work_shape[0]
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_work, NPY_DOUBLE, 1, __pyx_v_work_shape, 0, 0, nullptr)); 
  __pyx_v_work_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":252
 *     itol = 0 if (atol_shape[0] <= 1) else 1
 *     work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)
 *     lwork = work_shape[0]             # <<<<<<<<<<<<<<
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     liwork = iwork_shape[0]
 */
  __pyx_v_lwork = (__pyx_v_work_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":253
 *     work_ = fw_asfortranarray(work, fwr_dbl_t_enum, 1, work_shape, False, False)
 *     lwork = work_shape[0]
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)             # <<<<<<<<<<<<<<
 *     liwork = iwork_shape[0]
 *     idid = 0
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_iwork, NPY_INT, 1, __pyx_v_iwork_shape, 0, 0, nullptr)); 
  __pyx_v_iwork_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":254
 *     lwork = work_shape[0]
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     liwork = iwork_shape[0]             # <<<<<<<<<<<<<<
 *     idid = 0
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 */
  __pyx_v_liwork = (__pyx_v_iwork_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":255
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     liwork = iwork_shape[0]
 *     idid = 0             # <<<<<<<<<<<<<<
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 */
  __pyx_v_idid = 0;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":256
 *     liwork = iwork_shape[0]
 *     idid = 0
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)             # <<<<<<<<<<<<<<
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 *     n = y_shape[0]
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_rtol, NPY_DOUBLE, 1, __pyx_v_rtol_shape, 0, 0, nullptr)); 
  __pyx_v_rtol_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":257
 *     idid = 0
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)             # <<<<<<<<<<<<<<
 *     n = y_shape[0]
 *     if not (rtol_shape[0] == atol_shape[0]):
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_y, NPY_DOUBLE, 1, __pyx_v_y_shape, (!__pyx_v_overwrite_y), 0, nullptr)); 
  __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":258
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 *     n = y_shape[0]             # <<<<<<<<<<<<<<
 *     if not (rtol_shape[0] == atol_shape[0]):
 *         raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')
 */
  __pyx_v_n = (__pyx_v_y_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":259
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 *     n = y_shape[0]
 *     if not (rtol_shape[0] == atol_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):
 */
  __pyx_t_3 = (!((__pyx_v_rtol_shape[0]) == (__pyx_v_atol_shape[0])));
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":260
 *     n = y_shape[0]
 *     if not (rtol_shape[0] == atol_shape[0]):
 *         raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')             # <<<<<<<<<<<<<<
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_260_24->Target(__site_call1_260_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":261
 *     if not (rtol_shape[0] == atol_shape[0]):
 *         raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')
 *     if not (work_shape[0] >= ((8 * n) + 21)):
 */
  __pyx_t_3 = ((__pyx_v_atol_shape[0]) <= 1);
  if (!__pyx_t_3) {
    __pyx_t_5 = ((__pyx_v_atol_shape[0]) >= __pyx_v_n);
    __pyx_t_6 = __pyx_t_5;
  } else {
    __pyx_t_6 = __pyx_t_3;
  }
  __pyx_t_3 = (!__pyx_t_6);
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":262
 *         raise ValueError('Condition on arguments not satisfied: rtol.shape[0] == atol.shape[0]')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')             # <<<<<<<<<<<<<<
 *     if not (work_shape[0] >= ((8 * n) + 21)):
 *         raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_262_24->Target(__site_call1_262_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":263
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= n)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')
 *     if not (work_shape[0] >= ((8 * n) + 21)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')
 *     if not (iwork_shape[0] >= 21):
 */
  __pyx_t_3 = (!((__pyx_v_work_shape[0]) >= ((8 * __pyx_v_n) + 21)));
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":264
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= n)')
 *     if not (work_shape[0] >= ((8 * n) + 21)):
 *         raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')             # <<<<<<<<<<<<<<
 *     if not (iwork_shape[0] >= 21):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_264_24->Target(__site_call1_264_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":265
 *     if not (work_shape[0] >= ((8 * n) + 21)):
 *         raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')
 *     if not (iwork_shape[0] >= 21):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')
 *     if not (0 <= n <= y_shape[0]):
 */
  __pyx_t_3 = (!((__pyx_v_iwork_shape[0]) >= 21));
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":266
 *         raise ValueError('Condition on arguments not satisfied: work.shape[0] >= ((8 * n) + 21)')
 *     if not (iwork_shape[0] >= 21):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')             # <<<<<<<<<<<<<<
 *     if not (0 <= n <= y_shape[0]):
 *         raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_266_24->Target(__site_call1_266_24, __pyx_context, __pyx_t_4, ((System::Object^)"Condition on arguments not satisfied: iwork.shape[0] >= 21"));
    __pyx_t_4 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":267
 *     if not (iwork_shape[0] >= 21):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')
 *     if not (0 <= n <= y_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
 *     dop853_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, fcn_extra_args)
 */
  __pyx_t_3 = (0 <= __pyx_v_n);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_v_n <= (__pyx_v_y_shape[0]));
  }
  __pyx_t_6 = (!__pyx_t_3);
  if (__pyx_t_6) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":268
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= 21')
 *     if not (0 <= n <= y_shape[0]):
 *         raise ValueError("(0 <= n <= y.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dop853_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, fcn_extra_args)
 *     dop853_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, solout_extra_args)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_4 = __site_call1_268_24->Target(__site_call1_268_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= n <= y.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
    __pyx_t_4 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":269
 *     if not (0 <= n <= y_shape[0]):
 *         raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
 *     dop853_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, fcn_extra_args)             # <<<<<<<<<<<<<<
 *     dop853_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, solout_extra_args)
 *     try:
 */
  __pyx_t_4 = __site_call2_269_52->Target(__site_call2_269_52, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_9integrate_4_dop_fw_CallbackInfo)), __pyx_v_fcn, __pyx_v_fcn_extra_args);
  __pyx_v_5scipy_9integrate_4_dop_dop853_fcn_cb_info = ((fw_CallbackInfo^)__pyx_t_4);
  __pyx_v_fw_fcn_cb = ((fw_CallbackInfo^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":270
 *         raise ValueError("(0 <= n <= y.shape[0]) not satisifed")
 *     dop853_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, fcn_extra_args)
 *     dop853_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, solout_extra_args)             # <<<<<<<<<<<<<<
 *     try:
 *         fc.dop853(&n, &dop853_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dop853_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, NULL, NULL, &idid)
 */
  __pyx_t_4 = __site_call2_270_58->Target(__site_call2_270_58, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_9integrate_4_dop_fw_CallbackInfo)), __pyx_v_solout, __pyx_v_solout_extra_args);
  __pyx_v_5scipy_9integrate_4_dop_dop853_solout_cb_info = ((fw_CallbackInfo^)__pyx_t_4);
  __pyx_v_fw_solout_cb = ((fw_CallbackInfo^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":271
 *     dop853_fcn_cb_info = fw_fcn_cb = fw_CallbackInfo(fcn, fcn_extra_args)
 *     dop853_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, solout_extra_args)
 *     try:             # <<<<<<<<<<<<<<
 *         fc.dop853(&n, &dop853_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dop853_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, NULL, NULL, &idid)
 *     except DopErrorCode, e:
 */
  try {
    try {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":272
 *     dop853_solout_cb_info = fw_solout_cb = fw_CallbackInfo(solout, solout_extra_args)
 *     try:
 *         fc.dop853(&n, &dop853_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dop853_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, NULL, NULL, &idid)             # <<<<<<<<<<<<<<
 *     except DopErrorCode, e:
 *         fw_exctype, fw_excval, fw_exctb = e.exc
 */
      F_FUNC(dop853,DOP853)((&__pyx_v_n), __pyx_function_pointer_dop853_fcn_cb_wrapper, (&__pyx_v_x), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_y_)), (&__pyx_v_xend), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_rtol_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_atol_)), (&__pyx_v_itol), __pyx_function_pointer_dop853_solout_cb_wrapper, (&__pyx_v_iout), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_work_)), (&__pyx_v_lwork), ((fwi_integer_t *)PyArray_DATA(__pyx_v_iwork_)), (&__pyx_v_liwork), NULL, NULL, (&__pyx_v_idid));
    } catch (System::Exception^ __pyx_lt_7) {
      System::Object^ __pyx_lt_8 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_7);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":273
 *     try:
 *         fc.dop853(&n, &dop853_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dop853_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, NULL, NULL, &idid)
 *     except DopErrorCode, e:             # <<<<<<<<<<<<<<
 *         fw_exctype, fw_excval, fw_exctb = e.exc
 *         raise fw_exctype, fw_excval, fw_exctb
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "DopErrorCode");
      __pyx_v_e = PythonOps::CheckException(__pyx_context, __pyx_lt_8, __pyx_t_4);
      __pyx_t_4 = nullptr;
      if (__pyx_v_e != nullptr) {
        // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate._dop.dop853");
        PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_7);

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":274
 *         fc.dop853(&n, &dop853_fcn_cb_wrapper, &x, <fwr_dbl_t*>np.PyArray_DATA(y_), &xend, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itol, &dop853_solout_cb_wrapper, &iout, <fwr_dbl_t*>np.PyArray_DATA(work_), &lwork, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liwork, NULL, NULL, &idid)
 *     except DopErrorCode, e:
 *         fw_exctype, fw_excval, fw_exctb = e.exc             # <<<<<<<<<<<<<<
 *         raise fw_exctype, fw_excval, fw_exctb
 *     finally:
 */
        __pyx_t_4 = __site_get_exc_274_43->Target(__site_get_exc_274_43, __pyx_v_e, __pyx_context);
        __pyx_t_9 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_t_4, 3)));
        __pyx_t_1 = __pyx_t_9[0];
        __pyx_t_10 = __pyx_t_9[1];
        __pyx_t_11 = __pyx_t_9[2];
        __pyx_t_4 = nullptr;
        __pyx_t_9 = nullptr;
        __pyx_v_fw_exctype = __pyx_t_1;
        __pyx_t_1 = nullptr;
        __pyx_v_fw_excval = __pyx_t_10;
        __pyx_t_10 = nullptr;
        __pyx_v_fw_exctb = __pyx_t_11;
        __pyx_t_11 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":275
 *     except DopErrorCode, e:
 *         fw_exctype, fw_excval, fw_exctb = e.exc
 *         raise fw_exctype, fw_excval, fw_exctb             # <<<<<<<<<<<<<<
 *     finally:
 *         dop853_fcn_cb_info = None
 */
        throw PythonOps::MakeException(__pyx_context, __pyx_v_fw_exctype, __pyx_v_fw_excval, __pyx_v_fw_exctb);
      }
      else {
        // XXX we should set traceback here
        throw ExceptionHelpers::UpdateForRethrow(__pyx_lt_7);
      }
      PythonOps::ExceptionHandled(__pyx_context);
    }
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":277
 *         raise fw_exctype, fw_excval, fw_exctb
 *     finally:
 *         dop853_fcn_cb_info = None             # <<<<<<<<<<<<<<
 *     return (x, y_, iwork_, idid,)
 * 
 */
  finally {
    __pyx_v_5scipy_9integrate_4_dop_dop853_fcn_cb_info = ((fw_CallbackInfo^)nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":278
 *     finally:
 *         dop853_fcn_cb_info = None
 *     return (x, y_, iwork_, idid,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_4 = __pyx_v_x;
  __pyx_t_11 = __pyx_v_idid;
  __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_4, ((System::Object^)__pyx_v_y_), ((System::Object^)__pyx_v_iwork_), __pyx_t_11});
  __pyx_t_4 = nullptr;
  __pyx_t_11 = nullptr;
  __pyx_r = __pyx_t_10;
  __pyx_t_10 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":282
 * 
 * 
 * cdef np.ndarray fw_asfortranarray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.npy_intp * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 */

static  NumpyDotNet::ndarray^ fw_asfortranarray(System::Object^ __pyx_v_value, int __pyx_v_typenum, int __pyx_v_ndim, __pyx_t_5numpy_npy_intp *__pyx_v_coerced_shape, int __pyx_v_copy, int __pyx_v_create, ref struct __pyx_opt_args_5scipy_9integrate_4_dop_fw_asfortranarray ^__pyx_optional_args) {
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":285
 *                                   np.npy_intp * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 *     cdef int flags = np.NPY_F_CONTIGUOUS | np.NPY_FORCECAST             # <<<<<<<<<<<<<<
 *     cdef np.ndarray result
 *     cdef np.npy_intp * in_shape
 */
  __pyx_v_flags = (NPY_F_CONTIGUOUS | NPY_FORCECAST);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":290
 *     cdef int in_ndim
 *     cdef int i
 *     if value is None:             # <<<<<<<<<<<<<<
 *         if create:
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 */
  __pyx_t_1 = (__pyx_v_value == nullptr);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":291
 *     cdef int i
 *     if value is None:
 *         if create:             # <<<<<<<<<<<<<<
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 *         else:
 */
    if (__pyx_v_create) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":292
 *     if value is None:
 *         if create:
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)             # <<<<<<<<<<<<<<
 *         else:
 *             raise TypeError('Expected array but None provided')
 */
      __pyx_t_2 = PyArray_ZEROS(__pyx_v_ndim, __pyx_v_coerced_shape, __pyx_v_typenum, 1); 
      if (__pyx_t_2 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_result = ((NumpyDotNet::ndarray^)__pyx_t_2);
      __pyx_t_2 = nullptr;
      goto __pyx_L4;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":294
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 *         else:
 *             raise TypeError('Expected array but None provided')             # <<<<<<<<<<<<<<
 *     else:
 *         if ndim <= 1:
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
      __pyx_t_3 = __site_call1_294_27->Target(__site_call1_294_27, __pyx_context, __pyx_t_2, ((System::Object^)"Expected array but None provided"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
    }
    __pyx_L4:;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":296
 *             raise TypeError('Expected array but None provided')
 *     else:
 *         if ndim <= 1:             # <<<<<<<<<<<<<<
 *             # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
 *             flags |= np.NPY_C_CONTIGUOUS
 */
    __pyx_t_1 = (__pyx_v_ndim <= 1);
    if (__pyx_t_1) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":298
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":299
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
        __pyx_t_5 = __site_istrue_299_59->Target(__site_istrue_299_59, __pyx_t_3);
        __pyx_t_3 = nullptr;
        if (__pyx_t_5) {

          /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":300
 *             flags |= np.NPY_C_CONTIGUOUS
 *         if (not copy and alignment > 1 and np.PyArray_Check(value) and
 *             (<Py_ssize_t>np.PyArray_DATA(value) & (alignment - 1) != 0)):             # <<<<<<<<<<<<<<
 *             # mis-aligned array
 *             copy = True
 */
          if (__pyx_v_value != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_v_value) == nullptr) {
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":302
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":303
 *             # mis-aligned array
 *             copy = True
 *         if copy:             # <<<<<<<<<<<<<<
 *             flags |= np.NPY_ENSURECOPY
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 */
    if (__pyx_v_copy) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":304
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":305
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
    if (__pyx_t_8 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_8) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_result = ((NumpyDotNet::ndarray^)__pyx_t_8);
    __pyx_t_8 = nullptr;
  }
  __pyx_L3:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":306
 *             flags |= np.NPY_ENSURECOPY
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 *     in_ndim = np.PyArray_NDIM(result)             # <<<<<<<<<<<<<<
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 */
  __pyx_t_8 = PyArray_NDIM(__pyx_v_result); 
  __pyx_t_9 = __site_cvt_cvt_int_306_29->Target(__site_cvt_cvt_int_306_29, __pyx_t_8);
  __pyx_t_8 = nullptr;
  __pyx_v_in_ndim = __pyx_t_9;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":307
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 *     in_ndim = np.PyArray_NDIM(result)
 *     if in_ndim > ndim:             # <<<<<<<<<<<<<<
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)
 */
  __pyx_t_4 = (__pyx_v_in_ndim > __pyx_v_ndim);
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":308
 *     in_ndim = np.PyArray_NDIM(result)
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)             # <<<<<<<<<<<<<<
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __pyx_v_ndim;
    __pyx_t_3 = __site_op_mod_308_60->Target(__site_op_mod_308_60, ((System::Object^)"Dimension of array must be <= %d"), __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_call1_308_24->Target(__site_call1_308_24, __pyx_context, __pyx_t_8, ((System::Object^)__pyx_t_3));
    __pyx_t_8 = nullptr;
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":309
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)             # <<<<<<<<<<<<<<
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]
 */
  __pyx_v_in_shape = PyArray_DIMS(__pyx_v_result);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":310
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):             # <<<<<<<<<<<<<<
 *         coerced_shape[i] = in_shape[i]
 *     for i in range(in_ndim, ndim):
 */
  __pyx_t_10 = __pyx_v_in_ndim;
  for (__pyx_t_11 = 0; __pyx_t_11 < __pyx_t_10; __pyx_t_11+=1) {
    __pyx_v_i = __pyx_t_11;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":311
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]             # <<<<<<<<<<<<<<
 *     for i in range(in_ndim, ndim):
 *         # Pad shape with ones on right side if necessarry
 */
    (__pyx_v_coerced_shape[__pyx_v_i]) = (__pyx_v_in_shape[__pyx_v_i]);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":312
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]
 *     for i in range(in_ndim, ndim):             # <<<<<<<<<<<<<<
 *         # Pad shape with ones on right side if necessarry
 *         coerced_shape[i] = 1
 */
  __pyx_t_10 = __pyx_v_ndim;
  for (__pyx_t_11 = __pyx_v_in_ndim; __pyx_t_11 < __pyx_t_10; __pyx_t_11+=1) {
    __pyx_v_i = __pyx_t_11;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":314
 *     for i in range(in_ndim, ndim):
 *         # Pad shape with ones on right side if necessarry
 *         coerced_shape[i] = 1             # <<<<<<<<<<<<<<
 *     return result
 * 
 */
    (__pyx_v_coerced_shape[__pyx_v_i]) = 1;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":315
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
 * cdef inline object PyArray_Cast(arr, typenum):
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
 * cdef inline object PyArray_Cast(arr, typenum):             # <<<<<<<<<<<<<<
 *     import clr
 *     import NumpyDotNet.NpyCoreApi
 */

static CYTHON_INLINE System::Object^ PyArray_Cast(System::Object^ __pyx_v_arr, System::Object^ __pyx_v_typenum) {
  System::Object^ __pyx_v_clr;
  System::Object^ __pyx_v_NumpyDotNet;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
  System::Object^ __pyx_t_5 = nullptr;
  __pyx_v_clr = nullptr;
  __pyx_v_NumpyDotNet = nullptr;

  /* "../cython/include/numpy.pxd":441
 * 
 * cdef inline object PyArray_Cast(arr, typenum):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.NpyCoreApi
 *     return NumpyDotNet.NpyCoreApi.CastToType(arr, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), False)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":442
 * cdef inline object PyArray_Cast(arr, typenum):
 *     import clr
 *     import NumpyDotNet.NpyCoreApi             # <<<<<<<<<<<<<<
 *     return NumpyDotNet.NpyCoreApi.CastToType(arr, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), False)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.NpyCoreApi", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":443
 *     import clr
 *     import NumpyDotNet.NpyCoreApi
 *     return NumpyDotNet.NpyCoreApi.CastToType(arr, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), False)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
 */
  __pyx_t_1 = __site_get_NpyCoreApi_443_22->Target(__site_get_NpyCoreApi_443_22, __pyx_v_NumpyDotNet, __pyx_context);
  __pyx_t_2 = __site_get_CastToType_443_33->Target(__site_get_CastToType_443_33, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_cvt_cvt_int_443_100->Target(__site_cvt_cvt_int_443_100, __pyx_v_typenum);
  __pyx_t_1 = ((System::Object^)Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_t_3))); 
  __pyx_t_4 = 0;
  __pyx_t_5 = __site_call3_443_44->Target(__site_call3_443_44, __pyx_context, __pyx_t_2, __pyx_v_arr, __pyx_t_1, __pyx_t_4);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  __pyx_r = __pyx_t_5;
  __pyx_t_5 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":445
 *     return NumpyDotNet.NpyCoreApi.CastToType(arr, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), False)
 * 
 * cdef inline void import_array():             # <<<<<<<<<<<<<<
 *     pass
 * 
 */

static CYTHON_INLINE void import_array(void) {

}

/* "../cython/include/numpy.pxd":448
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

  /* "../cython/include/numpy.pxd":449
 * 
 * cdef inline PyNumber_Check(o):
 *     import clr             # <<<<<<<<<<<<<<
 *     import NumpyDotNet.ScalarGeneric
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "clr", -1));
  __pyx_v_clr = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":450
 * cdef inline PyNumber_Check(o):
 *     import clr
 *     import NumpyDotNet.ScalarGeneric             # <<<<<<<<<<<<<<
 *     return isinstance(o, (int, long, float)) or isinstance(o, NumpyDotNet.ScalarGeneric)
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "NumpyDotNet.ScalarGeneric", -1));
  __pyx_v_NumpyDotNet = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":451
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
  __pyx_t_4 = __site_call2_451_21->Target(__site_call2_451_21, __pyx_context, __pyx_t_1, __pyx_v_o, __pyx_t_5);
  __pyx_t_1 = nullptr;
  __pyx_t_5 = nullptr;
  __pyx_t_6 = __site_cvt_bool_451_45->Target(__site_cvt_bool_451_45, __pyx_t_4);
  if (!__pyx_t_6) {
    __pyx_t_4 = nullptr;
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "isinstance");
    __pyx_t_1 = __site_get_ScalarGeneric_451_73->Target(__site_get_ScalarGeneric_451_73, __pyx_v_NumpyDotNet, __pyx_context);
    __pyx_t_3 = __site_call2_451_58->Target(__site_call2_451_58, __pyx_context, __pyx_t_5, __pyx_v_o, __pyx_t_1);
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

/* "../cython/include/numpy.pxd":453
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

  /* "../cython/include/numpy.pxd":454
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterNew(ndarray n):
 *     return NpyArray_IterNew(<NpyArray*> <npy_intp>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterAllButAxis(ndarray n, int *inaxis):
 */
  __pyx_t_1 = __site_get_Array_454_51->Target(__site_get_Array_454_51, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_454_51->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_454_51, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_IterNew(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":456
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

  /* "../cython/include/numpy.pxd":457
 * 
 * cdef inline NpyArrayIterObject *PyArray_IterAllButAxis(ndarray n, int *inaxis):
 *     return NpyArray_IterAllButAxis(<NpyArray*> <npy_intp>n.Array, inaxis)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):
 */
  __pyx_t_1 = __site_get_Array_457_58->Target(__site_get_Array_457_58, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_cvt___pyx_t_5numpy_npy_intp_457_58->Target(__site_cvt_cvt___pyx_t_5numpy_npy_intp_457_58, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_IterAllButAxis(((NpyArray *)((__pyx_t_5numpy_npy_intp)__pyx_t_2)), __pyx_v_inaxis);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "../cython/include/numpy.pxd":459
 *     return NpyArray_IterAllButAxis(<NpyArray*> <npy_intp>n.Array, inaxis)
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_NEXT(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_NEXT(NpyArrayIterObject *__pyx_v_obj) {

  /* "../cython/include/numpy.pxd":460
 * 
 * cdef inline void PyArray_ITER_NEXT(NpyArrayIterObject *obj):
 *     NpyArray_ITER_NEXT(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_NEXT(__pyx_v_obj);

}

/* "../cython/include/numpy.pxd":462
 *     NpyArray_ITER_NEXT(obj)
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     NpyArray_ITER_RESET(obj)
 * 
 */

static CYTHON_INLINE void PyArray_ITER_RESET(NpyArrayIterObject *__pyx_v_obj) {

  /* "../cython/include/numpy.pxd":463
 * 
 * cdef inline void PyArray_ITER_RESET(NpyArrayIterObject *obj):
 *     NpyArray_ITER_RESET(obj)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):
 */
  NpyArray_ITER_RESET(__pyx_v_obj);

}

/* "../cython/include/numpy.pxd":465
 *     NpyArray_ITER_RESET(obj)
 * 
 * cdef inline void * PyArray_ITER_DATA(NpyArrayIterObject *obj):             # <<<<<<<<<<<<<<
 *     return NpyArray_ITER_DATA(obj)
 * 
 */

static CYTHON_INLINE void *PyArray_ITER_DATA(NpyArrayIterObject *__pyx_v_obj) {
  void *__pyx_r;

  /* "../cython/include/numpy.pxd":466
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

/* "../cython/include/numpy.pxd":468
 *     return NpyArray_ITER_DATA(obj)
 * 
 * cdef inline NpyArrayNeighborhoodIterObject* PyArray_NeighborhoodIterNew(NpyArrayIterObject *obj,             # <<<<<<<<<<<<<<
 *                                                                         npy_intp *bounds,
 *                                                                         int mode,
 */

static CYTHON_INLINE NpyArrayNeighborhoodIterObject *PyArray_NeighborhoodIterNew(NpyArrayIterObject *__pyx_v_obj, __pyx_t_5numpy_npy_intp *__pyx_v_bounds, int __pyx_v_mode, void *__pyx_v_fill, npy_free_func __pyx_v_fillfree) {
  NpyArrayNeighborhoodIterObject *__pyx_r;

  /* "../cython/include/numpy.pxd":473
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

/* "../cython/include/numpy.pxd":475
 *     return NpyArray_NeighborhoodIterNew(obj, bounds, mode, fill, fillfree)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Reset(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "../cython/include/numpy.pxd":476
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

/* "../cython/include/numpy.pxd":478
 *     return NpyArrayNeighborhoodIter_Reset(iter)
 * 
 * cdef inline int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject* iter):             # <<<<<<<<<<<<<<
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 */

static CYTHON_INLINE int PyArrayNeighborhoodIter_Next(NpyArrayNeighborhoodIterObject *__pyx_v_iter) {
  int __pyx_r;

  /* "../cython/include/numpy.pxd":479
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

/* "../cython/include/numpy.pxd":481
 *     return NpyArrayNeighborhoodIter_Next(iter)
 * 
 * cdef inline ndarray NpyIter_ARRAY(NpyArrayIterObject *iter):             # <<<<<<<<<<<<<<
 *     return Npy_INTERFACE_array(iter.ao)
 */

static CYTHON_INLINE NumpyDotNet::ndarray^ NpyIter_ARRAY(NpyArrayIterObject *__pyx_v_iter) {
  NumpyDotNet::ndarray^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "../cython/include/numpy.pxd":482
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
  __pyx_int_1 = 1;

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
  __site_set___cbInfo_28_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetAction(__pyx_context, "__cbInfo"));
  __site_get_exc_29_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc", false));
  __site_set_exc_29_12 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetAction(__pyx_context, "exc"));
  __site_call2_61_33 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_ARGS_63_33 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument(ArgumentType::List)})));
  __site_call1_67_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_exc_info_72_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc_info", false));
  __site_call0_72_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_call1_73_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call7_91_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(7)));
  __site_cvt_cvt_fwi_integer_t_91_35 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call7_ARGS_93_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument::Simple, Argument::Simple, Argument::Simple, Argument::Simple, Argument::Simple, Argument(ArgumentType::List)})));
  __site_cvt_cvt_fwi_integer_t_93_35 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_get_exc_info_97_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc_info", false));
  __site_call0_97_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_call1_98_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_fwr_dbl_t_100_0 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_fwr_dbl_t_100_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_100_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_143_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_145_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_147_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_149_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_151_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_152_52 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_153_58 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_exc_157_43 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc", false));
  __site_call2_178_33 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_ARGS_180_33 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument(ArgumentType::List)})));
  __site_call1_184_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_exc_info_189_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc_info", false));
  __site_call0_189_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_call1_190_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call7_208_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(7)));
  __site_cvt_cvt_fwi_integer_t_208_35 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call7_ARGS_210_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument::Simple, Argument::Simple, Argument::Simple, Argument::Simple, Argument::Simple, Argument(ArgumentType::List)})));
  __site_cvt_cvt_fwi_integer_t_210_35 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_get_exc_info_214_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc_info", false));
  __site_call0_214_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_call1_215_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_cvt_fwr_dbl_t_218_0 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_fwr_dbl_t_218_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_218_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_260_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_262_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_264_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_266_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_268_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_269_52 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_270_58 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_exc_274_43 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc", false));
  __site_call1_294_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_299_59 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_306_29 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mod_308_60 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_308_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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
  __site_get_NpyCoreApi_443_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "NpyCoreApi", false));
  __site_get_CastToType_443_33 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "CastToType", false));
  __site_cvt_cvt_int_443_100 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call3_443_44 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_call2_451_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_cvt_bool_451_45 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ScalarGeneric_451_73 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ScalarGeneric", false));
  __site_call2_451_58 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_Array_454_51 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_454_51 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_457_58 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_cvt___pyx_t_5numpy_npy_intp_457_58 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
}
[SpecialName]
static void PerformModuleReload(PythonContext^ context, PythonDictionary^ dict) {
  dict["__builtins__"] = context->BuiltinModuleInstance;
  __pyx_context = (gcnew ModuleContext(dict, context))->GlobalContext;
  __Pyx_InitSites(__pyx_context);
  __Pyx_InitGlobals();
  /*--- Type init code ---*/
  __pyx_ptype_5scipy_9integrate_4_dop_fw_CallbackInfo = safe_cast<Types::PythonType^>(dict["fw_CallbackInfo"]);
  /*--- Type import code ---*/
  // XXX skipping type ptr assignment for NumpyDotNet::ndarray
  // XXX skipping type ptr assignment for NumpyDotNet::dtype
  /*--- Create function pointers ---*/
  __pyx_delegate_val_dopri5_fcn_cb_wrapper = gcnew __pyx_delegate_t_5scipy_9integrate_4_dop_dopri5_fcn_cb_wrapper(dopri5_fcn_cb_wrapper);
  __pyx_function_pointer_dopri5_fcn_cb_wrapper = (__pyx_fp_t_dopri5_fcn_cb_wrapper)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_dopri5_fcn_cb_wrapper).ToPointer());
  __pyx_delegate_val_dopri5_solout_cb_wrapper = gcnew __pyx_delegate_t_5scipy_9integrate_4_dop_dopri5_solout_cb_wrapper(dopri5_solout_cb_wrapper);
  __pyx_function_pointer_dopri5_solout_cb_wrapper = (__pyx_fp_t_dopri5_solout_cb_wrapper)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_dopri5_solout_cb_wrapper).ToPointer());
  __pyx_delegate_val_dop853_fcn_cb_wrapper = gcnew __pyx_delegate_t_5scipy_9integrate_4_dop_dop853_fcn_cb_wrapper(dop853_fcn_cb_wrapper);
  __pyx_function_pointer_dop853_fcn_cb_wrapper = (__pyx_fp_t_dop853_fcn_cb_wrapper)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_dop853_fcn_cb_wrapper).ToPointer());
  __pyx_delegate_val_dop853_solout_cb_wrapper = gcnew __pyx_delegate_t_5scipy_9integrate_4_dop_dop853_solout_cb_wrapper(dop853_solout_cb_wrapper);
  __pyx_function_pointer_dop853_solout_cb_wrapper = (__pyx_fp_t_dop853_solout_cb_wrapper)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_dop853_solout_cb_wrapper).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  System::Object^ __pyx_t_4 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":16
 * 
 * cimport numpy as np
 * import numpy as np             # <<<<<<<<<<<<<<
 * from fwrap_ktp cimport *
 * cimport _dop_fc as fc
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":20
 * cimport _dop_fc as fc
 * 
 * np.import_array()             # <<<<<<<<<<<<<<
 * import sys
 * 
 */
  import_array();

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":21
 * 
 * np.import_array()
 * import sys             # <<<<<<<<<<<<<<
 * 
 * cdef extern from "string.h":
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "sys", -1));
  PythonOps::SetGlobal(__pyx_context, "sys", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":26
 *     void *memcpy(void *dest, void *src, int n)
 * 
 * class DopErrorCode(Exception):             # <<<<<<<<<<<<<<
 *     def __init__(self, callbackInfo):
 *         self.__cbInfo = callbackInfo
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "Exception");
  __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_1});
  __pyx_t_1 = nullptr;
  FunctionCode^ func_code_DopErrorCode = PythonOps::MakeFunctionCode(__pyx_context, "func_code_DopErrorCode", nullptr, gcnew array<System::String^>{"arg0"}, FunctionAttributes::None, 0, 0, "", gcnew System::Func<CodeContext^, CodeContext^>(mk_empty_context), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), gcnew array<System::String^>(0), 0);
  PythonTuple^ tbases_DopErrorCode = safe_cast<PythonTuple^>(__pyx_t_3);
  array<System::Object^>^ bases_DopErrorCode = gcnew array<System::Object^>(tbases_DopErrorCode->Count);
  tbases_DopErrorCode->CopyTo(bases_DopErrorCode, 0);
  __pyx_t_1 = PythonOps::MakeClass(func_code_DopErrorCode, nullptr, __pyx_context, "DopErrorCode", bases_DopErrorCode, "");
  __pyx_t_3 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":27
 * 
 * class DopErrorCode(Exception):
 *     def __init__(self, callbackInfo):             # <<<<<<<<<<<<<<
 *         self.__cbInfo = callbackInfo
 *         self.exc = callbackInfo.exc
 */
  __pyx_t_3 = dict["__pyx_pf_5scipy_9integrate_4_dop_12DopErrorCode___init__"];
  __pyx_t_4 = gcnew Method(__pyx_t_3, nullptr, __pyx_t_1);
  __pyx_t_3 = nullptr;
  PythonOps::SetAttr(__pyx_context, __pyx_t_1, "__init__", __pyx_t_4);
  __pyx_t_4 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "DopErrorCode", __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":46
 * 
 * 
 * __all__ = ['dopri5', 'dop853']             # <<<<<<<<<<<<<<
 * 
 * cdef fw_CallbackInfo dopri5_fcn_cb_info
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{((System::Object^)"dopri5"), ((System::Object^)"dop853")});
  PythonOps::SetGlobal(__pyx_context, "__all__", ((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/_dop.pyx":1
 * #cython: ccomplex=True             # <<<<<<<<<<<<<<
 * 
 * """The _dop module was generated with Fwrap v0.2.0dev_00843a8.
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "../cython/include/numpy.pxd":481
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



static Types::PythonType^ __pyx_ptype_5scipy_9integrate_4_dop_fw_CallbackInfo = nullptr;
static fw_CallbackInfo^ __pyx_v_5scipy_9integrate_4_dop_dopri5_fcn_cb_info = nullptr;
static fw_CallbackInfo^ __pyx_v_5scipy_9integrate_4_dop_dopri5_solout_cb_info = nullptr;
static fw_CallbackInfo^ __pyx_v_5scipy_9integrate_4_dop_dop853_fcn_cb_info = nullptr;
static fw_CallbackInfo^ __pyx_v_5scipy_9integrate_4_dop_dop853_solout_cb_info = nullptr;
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
[assembly: PythonModule("scipy__integrate___dop", module__dop::typeid)];
};
