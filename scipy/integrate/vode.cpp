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
  dict["__module__"] = "scipy.integrate.vode";
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
#define __PYX_HAVE_API__scipy__integrate__vode
#include "npy_common.h"
#include "npy_defs.h"
#include "npy_descriptor.h"
#include "npy_arrayobject.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_iterators.h"
#include "npy_ironpython.h"
#include "fwrap_ktp_header.h"
#include "vode_fc.h"
#include "setjmp.h"
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":353
 * 
 * 
 * cdef np.ndarray fw_asfortranarray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.npy_intp * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 */

public ref struct __pyx_opt_args_5scipy_9integrate_4vode_fw_asfortranarray {
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
/* Module declarations from scipy.integrate.vode_fc */
/* Module declarations from scipy.integrate.vode */
static int dvode_f_cb_wrapper_core(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_9integrate_4vode_dvode_f_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *);
static void dvode_f_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *); /*proto*/
static int dvode_jac_cb_wrapper_core(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, void *, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_9integrate_4vode_dvode_jac_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, void *, void *);
static void dvode_jac_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, void *, void *); /*proto*/
static int zvode_f_cb_wrapper_core(fwi_integer_t *, fwr_dbl_t *, __pyx_t_double_complex *, __pyx_t_double_complex *, void *, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_9integrate_4vode_zvode_f_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, __pyx_t_double_complex *, __pyx_t_double_complex *, void *, void *);
static void zvode_f_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, __pyx_t_double_complex *, __pyx_t_double_complex *, void *, void *); /*proto*/
static int zvode_jac_cb_wrapper_core(fwi_integer_t *, fwr_dbl_t *, __pyx_t_double_complex *, fwi_integer_t *, fwi_integer_t *, __pyx_t_double_complex *, fwi_integer_t *, void *, void *); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_9integrate_4vode_zvode_jac_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, __pyx_t_double_complex *, fwi_integer_t *, fwi_integer_t *, __pyx_t_double_complex *, fwi_integer_t *, void *, void *);
static void zvode_jac_cb_wrapper(fwi_integer_t *, fwr_dbl_t *, __pyx_t_double_complex *, fwi_integer_t *, fwi_integer_t *, __pyx_t_double_complex *, fwi_integer_t *, void *, void *); /*proto*/
static NumpyDotNet::ndarray^ fw_asfortranarray(System::Object^, int, int, __pyx_t_5numpy_npy_intp *, int, int, ref struct __pyx_opt_args_5scipy_9integrate_4vode_fw_asfortranarray ^__pyx_optional_args); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.integrate.vode"

/* Implementation of scipy.integrate.vode */
namespace clr_vode {
  public ref class module_vode sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_63_36;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_ARGS_65_36;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_69_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_info_75_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_75_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_97_35;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_ARGS_99_35;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_103_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_info_109_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_109_31;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_cvt_fwr_dbl_t_117_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_cvt_fwr_dbl_t_117_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_117_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_117_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_117_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_117_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_161_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_163_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_165_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_167_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_169_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_171_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_173_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_175_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_177_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_178_47;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_179_51;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_211_36;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_ARGS_213_36;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_217_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_info_223_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_223_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_245_35;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_ARGS_247_35;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_251_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_exc_info_257_22;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_257_31;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_cvt_fwr_dbl_t_265_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >^ __site_cvt_cvt_fwr_dbl_t_265_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_265_0;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_265_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >^ __site_cvt_cvt_fwi_integer_t_265_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_265_0;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_312_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_314_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_316_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_318_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_320_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_322_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_324_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_326_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_328_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_330_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_332_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_333_47;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_334_51;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_365_27;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_370_59;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_cvt_int_377_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_379_60;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_379_24;
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
static int^ __pyx_int_2;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":31
 *     void *memcpy(void *dest, void *src, int n)
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
  jmp_buf (&jmp);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":43
 *     # For use by longjmp
 *     cdef jmp_buf jmp
 *     def __cinit__(self, object callback, object extra_args):             # <<<<<<<<<<<<<<
 *         self.callback = callback
 *         self.extra_args = extra_args
 */

  fw_CallbackInfo(System::Object^ callback, System::Object^ extra_args) : jmp(*(new jmp_buf)) {
    System::Object^ __pyx_v_callback = nullptr;
    System::Object^ __pyx_v_extra_args = nullptr;
    int __pyx_r;
    System::Object^ __pyx_v_self = this;
    __pyx_v_callback = callback;
    __pyx_v_extra_args = extra_args;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":44
 *     cdef jmp_buf jmp
 *     def __cinit__(self, object callback, object extra_args):
 *         self.callback = callback             # <<<<<<<<<<<<<<
 *         self.extra_args = extra_args
 * 
 */
    ((fw_CallbackInfo^)__pyx_v_self)->callback = __pyx_v_callback;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":45
 *     def __cinit__(self, object callback, object extra_args):
 *         self.callback = callback
 *         self.extra_args = extra_args             # <<<<<<<<<<<<<<
 * 
 * 
 */
    ((fw_CallbackInfo^)__pyx_v_self)->extra_args = __pyx_v_extra_args;

    __pyx_r = 0;
  }
  !fw_CallbackInfo() {
    delete &jmp;
  }
};

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":51
 * 
 * cdef fw_CallbackInfo dvode_f_cb_info
 * cdef int dvode_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwr_dbl_t * ydot, void * rpar, void * ipar):             # <<<<<<<<<<<<<<
 *     global dvode_f_cb_info;
 *     cdef fw_CallbackInfo info
 */

static  int dvode_f_cb_wrapper_core(fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_t, fwr_dbl_t *__pyx_v_y, fwr_dbl_t *__pyx_v_ydot, void *__pyx_v_rpar, void *__pyx_v_ipar) {
  fw_CallbackInfo^ __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_ydot_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_ydot_shape[1];
  System::Object^ __pyx_v_ydot_ret;
  int __pyx_r;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  __pyx_v_info = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_ydot_ = nullptr;
  __pyx_v_ydot_ret = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":56
 *     cdef np.ndarray y_, ydot_
 *     cdef np.npy_intp y_shape[1], ydot_shape[1]
 *     info = dvode_f_cb_info             # <<<<<<<<<<<<<<
 *     try:
 *         y_shape[0] = n[0]
 */
  __pyx_v_info = __pyx_v_5scipy_9integrate_4vode_dvode_f_cb_info;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":57
 *     cdef np.npy_intp y_shape[1], ydot_shape[1]
 *     info = dvode_f_cb_info
 *     try:             # <<<<<<<<<<<<<<
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":58
 *     info = dvode_f_cb_info
 *     try:
 *         y_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         ydot_shape[0] = n[0]
 */
    (__pyx_v_y_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":59
 *     try:
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         ydot_shape[0] = n[0]
 *         ydot_ = np.PyArray_New(NULL, 1, ydot_shape, fwr_dbl_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_y_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_y), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":60
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         ydot_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         ydot_ = np.PyArray_New(NULL, 1, ydot_shape, fwr_dbl_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 */
    (__pyx_v_ydot_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":61
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         ydot_shape[0] = n[0]
 *         ydot_ = np.PyArray_New(NULL, 1, ydot_shape, fwr_dbl_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         if info.extra_args is None:
 *             ydot_ret = info.callback(t[0], y_)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_ydot_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_ydot), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ydot_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":62
 *         ydot_shape[0] = n[0]
 *         ydot_ = np.PyArray_New(NULL, 1, ydot_shape, fwr_dbl_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:             # <<<<<<<<<<<<<<
 *             ydot_ret = info.callback(t[0], y_)
 *         else:
 */
    __pyx_t_4 = (__pyx_v_info->extra_args == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":63
 *         ydot_ = np.PyArray_New(NULL, 1, ydot_shape, fwr_dbl_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 *             ydot_ret = info.callback(t[0], y_)             # <<<<<<<<<<<<<<
 *         else:
 *             ydot_ret = info.callback(t[0], y_, *info.extra_args)
 */
      __pyx_t_3 = (__pyx_v_t[0]);
      __pyx_t_5 = __site_call2_63_36->Target(__site_call2_63_36, __pyx_context, __pyx_v_info->callback, __pyx_t_3, ((System::Object^)__pyx_v_y_));
      __pyx_t_3 = nullptr;
      __pyx_v_ydot_ret = __pyx_t_5;
      __pyx_t_5 = nullptr;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":65
 *             ydot_ret = info.callback(t[0], y_)
 *         else:
 *             ydot_ret = info.callback(t[0], y_, *info.extra_args)             # <<<<<<<<<<<<<<
 *         if ydot_ is not ydot_ret:
 *             ydot_ = np.PyArray_FROMANY(ydot_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 */
      __pyx_t_5 = (__pyx_v_t[0]);
      __pyx_t_3 = __site_call2_ARGS_65_36->Target(__site_call2_ARGS_65_36, __pyx_context, __pyx_v_info->callback, __pyx_t_5, ((System::Object^)__pyx_v_y_), __pyx_v_info->extra_args);
      __pyx_t_5 = nullptr;
      __pyx_v_ydot_ret = __pyx_t_3;
      __pyx_t_3 = nullptr;
    }
    __pyx_L3:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":66
 *         else:
 *             ydot_ret = info.callback(t[0], y_, *info.extra_args)
 *         if ydot_ is not ydot_ret:             # <<<<<<<<<<<<<<
 *             ydot_ = np.PyArray_FROMANY(ydot_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:
 */
    __pyx_t_4 = (((System::Object^)__pyx_v_ydot_) != __pyx_v_ydot_ret);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":67
 *             ydot_ret = info.callback(t[0], y_, *info.extra_args)
 *         if ydot_ is not ydot_ret:
 *             ydot_ = np.PyArray_FROMANY(ydot_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *             if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 */
      __pyx_t_3 = (System::Object^)(long long)(NPY_DOUBLE);
      __pyx_t_5 = (System::Object^)(long long)((NPY_C_CONTIGUOUS | NPY_F_CONTIGUOUS));
      __pyx_t_6 = PyArray_FROMANY(__pyx_v_ydot_ret, __pyx_t_3, __pyx_int_1, __pyx_int_1, __pyx_t_5); 
      __pyx_t_3 = nullptr;
      __pyx_t_5 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ydot_ = ((NumpyDotNet::ndarray^)__pyx_t_6);
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":68
 *         if ydot_ is not ydot_ret:
 *             ydot_ = np.PyArray_FROMANY(ydot_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:             # <<<<<<<<<<<<<<
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))
 */
      __pyx_t_4 = ((__pyx_v_ydot_shape[0]) != (PyArray_DIMS(__pyx_v_ydot_)[0]));
      if (__pyx_t_4) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":69
 *             ydot_ = np.PyArray_FROMANY(ydot_ret, fwr_dbl_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")             # <<<<<<<<<<<<<<
 *             memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))
 *         dvode_f_cb_info = info
 */
        __pyx_t_6 = PythonOps::GetGlobal(__pyx_context, "ValueError");
        __pyx_t_5 = __site_call1_69_32->Target(__site_call1_69_32, __pyx_context, __pyx_t_6, ((System::Object^)"Array returned from callback has illegal shape"));
        __pyx_t_6 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
        __pyx_t_5 = nullptr;
        goto __pyx_L5;
      }
      __pyx_L5:;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":70
 *             if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))             # <<<<<<<<<<<<<<
 *         dvode_f_cb_info = info
 *         return 0
 */
      memcpy(__pyx_v_ydot, PyArray_DATA(__pyx_v_ydot_), PyArray_NBYTES(__pyx_v_ydot_));
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":71
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))
 *         dvode_f_cb_info = info             # <<<<<<<<<<<<<<
 *         return 0
 *     except:
 */
    __pyx_v_5scipy_9integrate_4vode_dvode_f_cb_info = __pyx_v_info;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":72
 *             memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))
 *         dvode_f_cb_info = info
 *         return 0             # <<<<<<<<<<<<<<
 *     except:
 *         dvode_f_cb_info = info
 */
    __pyx_r = 0;
    goto __pyx_L0;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":73
 *         dvode_f_cb_info = info
 *         return 0
 *     except:             # <<<<<<<<<<<<<<
 *         dvode_f_cb_info = info
 *         info.exc = sys.exc_info()
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate.vode.dvode_f_cb_wrapper_core");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":74
 *         return 0
 *     except:
 *         dvode_f_cb_info = info             # <<<<<<<<<<<<<<
 *         info.exc = sys.exc_info()
 *         return -1
 */
      __pyx_v_5scipy_9integrate_4vode_dvode_f_cb_info = __pyx_v_info;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":75
 *     except:
 *         dvode_f_cb_info = info
 *         info.exc = sys.exc_info()             # <<<<<<<<<<<<<<
 *         return -1
 * 
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "sys");
      __pyx_t_6 = __site_get_exc_info_75_22->Target(__site_get_exc_info_75_22, __pyx_t_5, __pyx_context);
      __pyx_t_5 = nullptr;
      __pyx_t_5 = __site_call0_75_31->Target(__site_call0_75_31, __pyx_context, __pyx_t_6);
      __pyx_t_6 = nullptr;
      __pyx_v_info->exc = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":76
 *         dvode_f_cb_info = info
 *         info.exc = sys.exc_info()
 *         return -1             # <<<<<<<<<<<<<<
 * 
 * cdef void dvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwr_dbl_t * ydot, void * rpar, void * ipar):
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":78
 *         return -1
 * 
 * cdef void dvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwr_dbl_t * ydot, void * rpar, void * ipar):             # <<<<<<<<<<<<<<
 *     if dvode_f_cb_wrapper_core(n, t, y, ydot, rpar, ipar) != 0:
 *         longjmp(dvode_f_cb_info.jmp, 1)
 */

static void (*__pyx_function_pointer_dvode_f_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *);
typedef void (*__pyx_fp_t_dvode_f_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwr_dbl_t *, void *, void *);
static __pyx_delegate_t_5scipy_9integrate_4vode_dvode_f_cb_wrapper^ __pyx_delegate_val_dvode_f_cb_wrapper;
static  void dvode_f_cb_wrapper(fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_t, fwr_dbl_t *__pyx_v_y, fwr_dbl_t *__pyx_v_ydot, void *__pyx_v_rpar, void *__pyx_v_ipar) {
  int __pyx_t_1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":79
 * 
 * cdef void dvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwr_dbl_t * ydot, void * rpar, void * ipar):
 *     if dvode_f_cb_wrapper_core(n, t, y, ydot, rpar, ipar) != 0:             # <<<<<<<<<<<<<<
 *         longjmp(dvode_f_cb_info.jmp, 1)
 * 
 */
  __pyx_t_1 = (dvode_f_cb_wrapper_core(__pyx_v_n, __pyx_v_t, __pyx_v_y, __pyx_v_ydot, __pyx_v_rpar, __pyx_v_ipar) != 0);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":80
 * cdef void dvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwr_dbl_t * ydot, void * rpar, void * ipar):
 *     if dvode_f_cb_wrapper_core(n, t, y, ydot, rpar, ipar) != 0:
 *         longjmp(dvode_f_cb_info.jmp, 1)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    longjmp(__pyx_v_5scipy_9integrate_4vode_dvode_f_cb_info->jmp, 1);
    goto __pyx_L3;
  }
  __pyx_L3:;

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":85
 * 
 * cdef fw_CallbackInfo dvode_jac_cb_info
 * cdef int dvode_jac_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwr_dbl_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):             # <<<<<<<<<<<<<<
 *     global dvode_jac_cb_info;
 *     cdef fw_CallbackInfo info
 */

static  int dvode_jac_cb_wrapper_core(fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_t, fwr_dbl_t *__pyx_v_y, fwi_integer_t *__pyx_v_ml, fwi_integer_t *__pyx_v_mu, fwr_dbl_t *__pyx_v_jac, fwi_integer_t *__pyx_v_nrowpd, void *__pyx_v_rpar, void *__pyx_v_ipar) {
  fw_CallbackInfo^ __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_jac_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_jac_shape[2];
  System::Object^ __pyx_v_jac_ret;
  int __pyx_r;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  int __pyx_t_7;
  int __pyx_t_8;
  __pyx_v_info = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_jac_ = nullptr;
  __pyx_v_jac_ret = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":90
 *     cdef np.ndarray y_, jac_
 *     cdef np.npy_intp y_shape[1], jac_shape[2]
 *     info = dvode_jac_cb_info             # <<<<<<<<<<<<<<
 *     try:
 *         y_shape[0] = n[0]
 */
  __pyx_v_info = __pyx_v_5scipy_9integrate_4vode_dvode_jac_cb_info;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":91
 *     cdef np.npy_intp y_shape[1], jac_shape[2]
 *     info = dvode_jac_cb_info
 *     try:             # <<<<<<<<<<<<<<
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":92
 *     info = dvode_jac_cb_info
 *     try:
 *         y_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]
 */
    (__pyx_v_y_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":93
 *     try:
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]
 *         jac_ = np.PyArray_New(NULL, 2, jac_shape, fwr_dbl_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_y_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_y), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":94
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]             # <<<<<<<<<<<<<<
 *         jac_ = np.PyArray_New(NULL, 2, jac_shape, fwr_dbl_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 */
    (__pyx_v_jac_shape[0]) = (__pyx_v_nrowpd[0]);
    (__pyx_v_jac_shape[1]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":95
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwr_dbl_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]
 *         jac_ = np.PyArray_New(NULL, 2, jac_shape, fwr_dbl_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         if info.extra_args is None:
 *             jac_ret = info.callback(t[0], y_)
 */
    __pyx_t_3 = PyArray_New(NULL, 2, __pyx_v_jac_shape, NPY_DOUBLE, NULL, ((char *)__pyx_v_jac), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_jac_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":96
 *         jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]
 *         jac_ = np.PyArray_New(NULL, 2, jac_shape, fwr_dbl_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:             # <<<<<<<<<<<<<<
 *             jac_ret = info.callback(t[0], y_)
 *         else:
 */
    __pyx_t_4 = (__pyx_v_info->extra_args == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":97
 *         jac_ = np.PyArray_New(NULL, 2, jac_shape, fwr_dbl_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 *             jac_ret = info.callback(t[0], y_)             # <<<<<<<<<<<<<<
 *         else:
 *             jac_ret = info.callback(t[0], y_, *info.extra_args)
 */
      __pyx_t_3 = (__pyx_v_t[0]);
      __pyx_t_5 = __site_call2_97_35->Target(__site_call2_97_35, __pyx_context, __pyx_v_info->callback, __pyx_t_3, ((System::Object^)__pyx_v_y_));
      __pyx_t_3 = nullptr;
      __pyx_v_jac_ret = __pyx_t_5;
      __pyx_t_5 = nullptr;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":99
 *             jac_ret = info.callback(t[0], y_)
 *         else:
 *             jac_ret = info.callback(t[0], y_, *info.extra_args)             # <<<<<<<<<<<<<<
 *         if jac_ is not jac_ret:
 *             jac_ = np.PyArray_FROMANY(jac_ret, fwr_dbl_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
 */
      __pyx_t_5 = (__pyx_v_t[0]);
      __pyx_t_3 = __site_call2_ARGS_99_35->Target(__site_call2_ARGS_99_35, __pyx_context, __pyx_v_info->callback, __pyx_t_5, ((System::Object^)__pyx_v_y_), __pyx_v_info->extra_args);
      __pyx_t_5 = nullptr;
      __pyx_v_jac_ret = __pyx_t_3;
      __pyx_t_3 = nullptr;
    }
    __pyx_L3:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":100
 *         else:
 *             jac_ret = info.callback(t[0], y_, *info.extra_args)
 *         if jac_ is not jac_ret:             # <<<<<<<<<<<<<<
 *             jac_ = np.PyArray_FROMANY(jac_ret, fwr_dbl_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
 *             if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:
 */
    __pyx_t_4 = (((System::Object^)__pyx_v_jac_) != __pyx_v_jac_ret);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":101
 *             jac_ret = info.callback(t[0], y_, *info.extra_args)
 *         if jac_ is not jac_ret:
 *             jac_ = np.PyArray_FROMANY(jac_ret, fwr_dbl_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *             if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 */
      __pyx_t_3 = (System::Object^)(long long)(NPY_DOUBLE);
      __pyx_t_5 = (System::Object^)(long long)(NPY_F_CONTIGUOUS);
      __pyx_t_6 = PyArray_FROMANY(__pyx_v_jac_ret, __pyx_t_3, __pyx_int_2, __pyx_int_2, __pyx_t_5); 
      __pyx_t_3 = nullptr;
      __pyx_t_5 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_jac_ = ((NumpyDotNet::ndarray^)__pyx_t_6);
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":102
 *         if jac_ is not jac_ret:
 *             jac_ = np.PyArray_FROMANY(jac_ret, fwr_dbl_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
 *             if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:             # <<<<<<<<<<<<<<
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))
 */
      __pyx_t_4 = ((__pyx_v_jac_shape[0]) != (PyArray_DIMS(__pyx_v_jac_)[0]));
      if (!__pyx_t_4) {
        __pyx_t_7 = ((__pyx_v_jac_shape[1]) != (PyArray_DIMS(__pyx_v_jac_)[1]));
        __pyx_t_8 = __pyx_t_7;
      } else {
        __pyx_t_8 = __pyx_t_4;
      }
      if (__pyx_t_8) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":103
 *             jac_ = np.PyArray_FROMANY(jac_ret, fwr_dbl_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
 *             if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:
 *                 raise ValueError("Array returned from callback has illegal shape")             # <<<<<<<<<<<<<<
 *             memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))
 *         dvode_jac_cb_info = info
 */
        __pyx_t_6 = PythonOps::GetGlobal(__pyx_context, "ValueError");
        __pyx_t_5 = __site_call1_103_32->Target(__site_call1_103_32, __pyx_context, __pyx_t_6, ((System::Object^)"Array returned from callback has illegal shape"));
        __pyx_t_6 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
        __pyx_t_5 = nullptr;
        goto __pyx_L5;
      }
      __pyx_L5:;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":104
 *             if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))             # <<<<<<<<<<<<<<
 *         dvode_jac_cb_info = info
 *         return 0
 */
      memcpy(__pyx_v_jac, PyArray_DATA(__pyx_v_jac_), PyArray_NBYTES(__pyx_v_jac_));
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":105
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))
 *         dvode_jac_cb_info = info             # <<<<<<<<<<<<<<
 *         return 0
 *     except:
 */
    __pyx_v_5scipy_9integrate_4vode_dvode_jac_cb_info = __pyx_v_info;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":106
 *             memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))
 *         dvode_jac_cb_info = info
 *         return 0             # <<<<<<<<<<<<<<
 *     except:
 *         dvode_jac_cb_info = info
 */
    __pyx_r = 0;
    goto __pyx_L0;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":107
 *         dvode_jac_cb_info = info
 *         return 0
 *     except:             # <<<<<<<<<<<<<<
 *         dvode_jac_cb_info = info
 *         info.exc = sys.exc_info()
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate.vode.dvode_jac_cb_wrapper_core");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":108
 *         return 0
 *     except:
 *         dvode_jac_cb_info = info             # <<<<<<<<<<<<<<
 *         info.exc = sys.exc_info()
 *         return -1
 */
      __pyx_v_5scipy_9integrate_4vode_dvode_jac_cb_info = __pyx_v_info;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":109
 *     except:
 *         dvode_jac_cb_info = info
 *         info.exc = sys.exc_info()             # <<<<<<<<<<<<<<
 *         return -1
 * 
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "sys");
      __pyx_t_6 = __site_get_exc_info_109_22->Target(__site_get_exc_info_109_22, __pyx_t_5, __pyx_context);
      __pyx_t_5 = nullptr;
      __pyx_t_5 = __site_call0_109_31->Target(__site_call0_109_31, __pyx_context, __pyx_t_6);
      __pyx_t_6 = nullptr;
      __pyx_v_info->exc = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":110
 *         dvode_jac_cb_info = info
 *         info.exc = sys.exc_info()
 *         return -1             # <<<<<<<<<<<<<<
 * 
 * cdef void dvode_jac_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwr_dbl_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":112
 *         return -1
 * 
 * cdef void dvode_jac_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwr_dbl_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):             # <<<<<<<<<<<<<<
 *     if dvode_jac_cb_wrapper_core(n, t, y, ml, mu, jac, nrowpd, rpar, ipar) != 0:
 *         longjmp(dvode_jac_cb_info.jmp, 1)
 */

static void (*__pyx_function_pointer_dvode_jac_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, void *, void *);
typedef void (*__pyx_fp_t_dvode_jac_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, fwr_dbl_t *, fwi_integer_t *, fwi_integer_t *, fwr_dbl_t *, fwi_integer_t *, void *, void *);
static __pyx_delegate_t_5scipy_9integrate_4vode_dvode_jac_cb_wrapper^ __pyx_delegate_val_dvode_jac_cb_wrapper;
static  void dvode_jac_cb_wrapper(fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_t, fwr_dbl_t *__pyx_v_y, fwi_integer_t *__pyx_v_ml, fwi_integer_t *__pyx_v_mu, fwr_dbl_t *__pyx_v_jac, fwi_integer_t *__pyx_v_nrowpd, void *__pyx_v_rpar, void *__pyx_v_ipar) {
  int __pyx_t_1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":113
 * 
 * cdef void dvode_jac_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwr_dbl_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):
 *     if dvode_jac_cb_wrapper_core(n, t, y, ml, mu, jac, nrowpd, rpar, ipar) != 0:             # <<<<<<<<<<<<<<
 *         longjmp(dvode_jac_cb_info.jmp, 1)
 * 
 */
  __pyx_t_1 = (dvode_jac_cb_wrapper_core(__pyx_v_n, __pyx_v_t, __pyx_v_y, __pyx_v_ml, __pyx_v_mu, __pyx_v_jac, __pyx_v_nrowpd, __pyx_v_rpar, __pyx_v_ipar) != 0);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":114
 * cdef void dvode_jac_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwr_dbl_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwr_dbl_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):
 *     if dvode_jac_cb_wrapper_core(n, t, y, ml, mu, jac, nrowpd, rpar, ipar) != 0:
 *         longjmp(dvode_jac_cb_info.jmp, 1)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    longjmp(__pyx_v_5scipy_9integrate_4vode_dvode_jac_cb_info->jmp, 1);
    goto __pyx_L3;
  }
  __pyx_L3:;

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":117
 * 
 * 
 * def dvode(object f, object jac, object y, fwr_dbl_t t, fwr_dbl_t tout, object rtol, object atol, fwi_integer_t itask, fwi_integer_t istate, object rwork, object iwork, fwi_integer_t mf, object f_extra_args=None, object jac_extra_args=None, bint overwrite_y=False):             # <<<<<<<<<<<<<<
 *     """dvode(f, jac, y, t, tout, rtol, atol, itask, istate, rwork, iwork, mf[, f_extra_args, jac_extra_args]) -> (y, t, istate)
 * 
 */

static System::Object^ dvode(System::Object^ f, System::Object^ jac, System::Object^ y, System::Object^ t, System::Object^ tout, System::Object^ rtol, System::Object^ atol, System::Object^ itask, System::Object^ istate, System::Object^ rwork, System::Object^ iwork, System::Object^ mf, [InteropServices::Optional]System::Object^ f_extra_args, [InteropServices::Optional]System::Object^ jac_extra_args, [InteropServices::Optional]System::Object^ overwrite_y) {
  System::Object^ __pyx_v_f = nullptr;
  System::Object^ __pyx_v_jac = nullptr;
  System::Object^ __pyx_v_y = nullptr;
  fwr_dbl_t __pyx_v_t;
  fwr_dbl_t __pyx_v_tout;
  System::Object^ __pyx_v_rtol = nullptr;
  System::Object^ __pyx_v_atol = nullptr;
  fwi_integer_t __pyx_v_itask;
  fwi_integer_t __pyx_v_istate;
  System::Object^ __pyx_v_rwork = nullptr;
  System::Object^ __pyx_v_iwork = nullptr;
  fwi_integer_t __pyx_v_mf;
  System::Object^ __pyx_v_f_extra_args = nullptr;
  System::Object^ __pyx_v_jac_extra_args = nullptr;
  int __pyx_v_overwrite_y;
  fw_CallbackInfo^ __pyx_v_fw_f_cb;
  fw_CallbackInfo^ __pyx_v_fw_jac_cb;
  fwi_integer_t __pyx_v_neq;
  fwi_integer_t __pyx_v_itol;
  fwi_integer_t __pyx_v_iopt;
  fwi_integer_t __pyx_v_lrw;
  fwi_integer_t __pyx_v_liw;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_rtol_;
  NumpyDotNet::ndarray^ __pyx_v_atol_;
  NumpyDotNet::ndarray^ __pyx_v_rwork_;
  NumpyDotNet::ndarray^ __pyx_v_iwork_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_rtol_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_atol_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_rwork_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_iwork_shape[1];
  System::Object^ __pyx_v_fw_exctype;
  System::Object^ __pyx_v_fw_excval;
  System::Object^ __pyx_v_fw_exctb;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  long __pyx_t_2;
  int __pyx_t_3;
  int __pyx_t_4;
  int __pyx_t_5;
  long __pyx_t_6;
  long __pyx_t_7;
  System::Object^ __pyx_t_8 = nullptr;
  array<System::Object^>^ __pyx_t_9;
  System::Object^ __pyx_t_10 = nullptr;
  __pyx_v_f = f;
  __pyx_v_jac = jac;
  __pyx_v_y = y;
  __pyx_v_t = __site_cvt_cvt_fwr_dbl_t_117_0->Target(__site_cvt_cvt_fwr_dbl_t_117_0, t);
  __pyx_v_tout = __site_cvt_cvt_fwr_dbl_t_117_0_1->Target(__site_cvt_cvt_fwr_dbl_t_117_0_1, tout);
  __pyx_v_rtol = rtol;
  __pyx_v_atol = atol;
  __pyx_v_itask = __site_cvt_cvt_fwi_integer_t_117_0->Target(__site_cvt_cvt_fwi_integer_t_117_0, itask);
  __pyx_v_istate = __site_cvt_cvt_fwi_integer_t_117_0_1->Target(__site_cvt_cvt_fwi_integer_t_117_0_1, istate);
  __pyx_v_rwork = rwork;
  __pyx_v_iwork = iwork;
  __pyx_v_mf = __site_cvt_cvt_fwi_integer_t_117_0_2->Target(__site_cvt_cvt_fwi_integer_t_117_0_2, mf);
  if (dynamic_cast<System::Reflection::Missing^>(f_extra_args) == nullptr) {
    __pyx_v_f_extra_args = f_extra_args;
  } else {
    __pyx_v_f_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(jac_extra_args) == nullptr) {
    __pyx_v_jac_extra_args = jac_extra_args;
  } else {
    __pyx_v_jac_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_y) == nullptr) {
    __pyx_v_overwrite_y = __site_cvt_cvt_int_117_0->Target(__site_cvt_cvt_int_117_0, overwrite_y);
  } else {
    __pyx_v_overwrite_y = ((int)0);
  }
  __pyx_v_fw_f_cb = nullptr;
  __pyx_v_fw_jac_cb = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_rtol_ = nullptr;
  __pyx_v_atol_ = nullptr;
  __pyx_v_rwork_ = nullptr;
  __pyx_v_iwork_ = nullptr;
  __pyx_v_fw_exctype = nullptr;
  __pyx_v_fw_excval = nullptr;
  __pyx_v_fw_exctb = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":150
 *     cdef np.ndarray y_, rtol_, atol_, rwork_, iwork_
 *     cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], rwork_shape[1], iwork_shape[1]
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)             # <<<<<<<<<<<<<<
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
 *     itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_rtol, NPY_DOUBLE, 1, __pyx_v_rtol_shape, 0, 0, nullptr)); 
  __pyx_v_rtol_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":151
 *     cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], rwork_shape[1], iwork_shape[1]
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)             # <<<<<<<<<<<<<<
 *     itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))
 *     iopt = 1
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_atol, NPY_DOUBLE, 1, __pyx_v_atol_shape, 0, 0, nullptr)); 
  __pyx_v_atol_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":152
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
 *     itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))             # <<<<<<<<<<<<<<
 *     iopt = 1
 *     rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
 */
  __pyx_t_3 = ((__pyx_v_atol_shape[0]) <= 1);
  if (__pyx_t_3) {
    __pyx_t_4 = ((__pyx_v_rtol_shape[0]) <= 1);
    __pyx_t_5 = __pyx_t_4;
  } else {
    __pyx_t_5 = __pyx_t_3;
  }
  if (__pyx_t_5) {
    __pyx_t_2 = 1;
  } else {
    if (((__pyx_v_rtol_shape[0]) <= 1)) {
      __pyx_t_6 = 2;
    } else {
      if (((__pyx_v_atol_shape[0]) <= 1)) {
        __pyx_t_7 = 3;
      } else {
        __pyx_t_7 = 4;
      }
      __pyx_t_6 = __pyx_t_7;
    }
    __pyx_t_2 = __pyx_t_6;
  }
  __pyx_v_itol = __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":153
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
 *     itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))
 *     iopt = 1             # <<<<<<<<<<<<<<
 *     rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 */
  __pyx_v_iopt = 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":154
 *     itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))
 *     iopt = 1
 *     rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)             # <<<<<<<<<<<<<<
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_rwork, NPY_DOUBLE, 1, __pyx_v_rwork_shape, 0, 0, nullptr)); 
  __pyx_v_rwork_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":155
 *     iopt = 1
 *     rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)             # <<<<<<<<<<<<<<
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 *     neq = y_shape[0]
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_iwork, NPY_INT, 1, __pyx_v_iwork_shape, 0, 0, nullptr)); 
  __pyx_v_iwork_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":156
 *     rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)             # <<<<<<<<<<<<<<
 *     neq = y_shape[0]
 *     lrw = rwork_shape[0]
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_y, NPY_DOUBLE, 1, __pyx_v_y_shape, (!__pyx_v_overwrite_y), 0, nullptr)); 
  __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":157
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 *     neq = y_shape[0]             # <<<<<<<<<<<<<<
 *     lrw = rwork_shape[0]
 *     liw = iwork_shape[0]
 */
  __pyx_v_neq = (__pyx_v_y_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":158
 *     y_ = fw_asfortranarray(y, fwr_dbl_t_enum, 1, y_shape, not overwrite_y, False)
 *     neq = y_shape[0]
 *     lrw = rwork_shape[0]             # <<<<<<<<<<<<<<
 *     liw = iwork_shape[0]
 *     if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):
 */
  __pyx_v_lrw = (__pyx_v_rwork_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":159
 *     neq = y_shape[0]
 *     lrw = rwork_shape[0]
 *     liw = iwork_shape[0]             # <<<<<<<<<<<<<<
 *     if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')
 */
  __pyx_v_liw = (__pyx_v_iwork_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":160
 *     lrw = rwork_shape[0]
 *     liw = iwork_shape[0]
 *     if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):
 */
  __pyx_t_5 = ((__pyx_v_rtol_shape[0]) <= 1);
  if (!__pyx_t_5) {
    __pyx_t_3 = ((__pyx_v_rtol_shape[0]) >= __pyx_v_neq);
    __pyx_t_4 = __pyx_t_3;
  } else {
    __pyx_t_4 = __pyx_t_5;
  }
  __pyx_t_5 = (!__pyx_t_4);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":161
 *     liw = iwork_shape[0]
 *     if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')             # <<<<<<<<<<<<<<
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_8 = __site_call1_161_24->Target(__site_call1_161_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_8, nullptr, nullptr);
    __pyx_t_8 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":162
 *     if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')
 *     if not ((itask > 0) and (itask < 6)):
 */
  __pyx_t_5 = ((__pyx_v_atol_shape[0]) <= 1);
  if (!__pyx_t_5) {
    __pyx_t_4 = ((__pyx_v_atol_shape[0]) >= __pyx_v_neq);
    __pyx_t_3 = __pyx_t_4;
  } else {
    __pyx_t_3 = __pyx_t_5;
  }
  __pyx_t_5 = (!__pyx_t_3);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":163
 *         raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')             # <<<<<<<<<<<<<<
 *     if not ((itask > 0) and (itask < 6)):
 *         raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_163_24->Target(__site_call1_163_24, __pyx_context, __pyx_t_8, ((System::Object^)"Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)"));
    __pyx_t_8 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":164
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')
 *     if not ((itask > 0) and (itask < 6)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')
 *     if not ((istate > 0) and (istate < 4)):
 */
  __pyx_t_5 = (__pyx_v_itask > 0);
  if (__pyx_t_5) {
    __pyx_t_3 = (__pyx_v_itask < 6);
    __pyx_t_4 = __pyx_t_3;
  } else {
    __pyx_t_4 = __pyx_t_5;
  }
  __pyx_t_5 = (!__pyx_t_4);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":165
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')
 *     if not ((itask > 0) and (itask < 6)):
 *         raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')             # <<<<<<<<<<<<<<
 *     if not ((istate > 0) and (istate < 4)):
 *         raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_8 = __site_call1_165_24->Target(__site_call1_165_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: (itask > 0) and (itask < 6)"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_8, nullptr, nullptr);
    __pyx_t_8 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":166
 *     if not ((itask > 0) and (itask < 6)):
 *         raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')
 *     if not ((istate > 0) and (istate < 4)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')
 *     if not (rwork_shape[0] >= lrw):
 */
  __pyx_t_5 = (__pyx_v_istate > 0);
  if (__pyx_t_5) {
    __pyx_t_4 = (__pyx_v_istate < 4);
    __pyx_t_3 = __pyx_t_4;
  } else {
    __pyx_t_3 = __pyx_t_5;
  }
  __pyx_t_5 = (!__pyx_t_3);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":167
 *         raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')
 *     if not ((istate > 0) and (istate < 4)):
 *         raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')             # <<<<<<<<<<<<<<
 *     if not (rwork_shape[0] >= lrw):
 *         raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_167_24->Target(__site_call1_167_24, __pyx_context, __pyx_t_8, ((System::Object^)"Condition on arguments not satisfied: (istate > 0) and (istate < 4)"));
    __pyx_t_8 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":168
 *     if not ((istate > 0) and (istate < 4)):
 *         raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')
 *     if not (rwork_shape[0] >= lrw):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')
 *     if not (iwork_shape[0] >= liw):
 */
  __pyx_t_5 = (!((__pyx_v_rwork_shape[0]) >= __pyx_v_lrw));
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":169
 *         raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')
 *     if not (rwork_shape[0] >= lrw):
 *         raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')             # <<<<<<<<<<<<<<
 *     if not (iwork_shape[0] >= liw):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_8 = __site_call1_169_24->Target(__site_call1_169_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: rwork.shape[0] >= lrw"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_8, nullptr, nullptr);
    __pyx_t_8 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":170
 *     if not (rwork_shape[0] >= lrw):
 *         raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')
 *     if not (iwork_shape[0] >= liw):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')
 *     if not (0 <= neq <= y_shape[0]):
 */
  __pyx_t_5 = (!((__pyx_v_iwork_shape[0]) >= __pyx_v_liw));
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":171
 *         raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')
 *     if not (iwork_shape[0] >= liw):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')             # <<<<<<<<<<<<<<
 *     if not (0 <= neq <= y_shape[0]):
 *         raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_171_24->Target(__site_call1_171_24, __pyx_context, __pyx_t_8, ((System::Object^)"Condition on arguments not satisfied: iwork.shape[0] >= liw"));
    __pyx_t_8 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":172
 *     if not (iwork_shape[0] >= liw):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')
 *     if not (0 <= neq <= y_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")
 *     if not (0 <= lrw <= rwork_shape[0]):
 */
  __pyx_t_5 = (0 <= __pyx_v_neq);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_v_neq <= (__pyx_v_y_shape[0]));
  }
  __pyx_t_3 = (!__pyx_t_5);
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":173
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')
 *     if not (0 <= neq <= y_shape[0]):
 *         raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= lrw <= rwork_shape[0]):
 *         raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_8 = __site_call1_173_24->Target(__site_call1_173_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= neq <= y.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_8, nullptr, nullptr);
    __pyx_t_8 = nullptr;
    goto __pyx_L11;
  }
  __pyx_L11:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":174
 *     if not (0 <= neq <= y_shape[0]):
 *         raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")
 *     if not (0 <= lrw <= rwork_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
 *     if not (0 <= liw <= iwork_shape[0]):
 */
  __pyx_t_3 = (0 <= __pyx_v_lrw);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_v_lrw <= (__pyx_v_rwork_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_3);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":175
 *         raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")
 *     if not (0 <= lrw <= rwork_shape[0]):
 *         raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= liw <= iwork_shape[0]):
 *         raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_175_24->Target(__site_call1_175_24, __pyx_context, __pyx_t_8, ((System::Object^)"(0 <= lrw <= rwork.shape[0]) not satisifed"));
    __pyx_t_8 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":176
 *     if not (0 <= lrw <= rwork_shape[0]):
 *         raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
 *     if not (0 <= liw <= iwork_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
 *     dvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)
 */
  __pyx_t_5 = (0 <= __pyx_v_liw);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_v_liw <= (__pyx_v_iwork_shape[0]));
  }
  __pyx_t_3 = (!__pyx_t_5);
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":177
 *         raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
 *     if not (0 <= liw <= iwork_shape[0]):
 *         raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     dvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)
 *     dvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_8 = __site_call1_177_24->Target(__site_call1_177_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= liw <= iwork.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_8, nullptr, nullptr);
    __pyx_t_8 = nullptr;
    goto __pyx_L13;
  }
  __pyx_L13:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":178
 *     if not (0 <= liw <= iwork_shape[0]):
 *         raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
 *     dvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)             # <<<<<<<<<<<<<<
 *     dvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)
 *     try:
 */
  __pyx_t_8 = __site_call2_178_47->Target(__site_call2_178_47, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_9integrate_4vode_fw_CallbackInfo)), __pyx_v_f, __pyx_v_f_extra_args);
  __pyx_v_5scipy_9integrate_4vode_dvode_f_cb_info = ((fw_CallbackInfo^)__pyx_t_8);
  __pyx_v_fw_f_cb = ((fw_CallbackInfo^)__pyx_t_8);
  __pyx_t_8 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":179
 *         raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
 *     dvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)
 *     dvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)             # <<<<<<<<<<<<<<
 *     try:
 *         if setjmp(dvode_f_cb_info.jmp) == 0:
 */
  __pyx_t_8 = __site_call2_179_51->Target(__site_call2_179_51, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_9integrate_4vode_fw_CallbackInfo)), __pyx_v_jac, __pyx_v_jac_extra_args);
  __pyx_v_5scipy_9integrate_4vode_dvode_jac_cb_info = ((fw_CallbackInfo^)__pyx_t_8);
  __pyx_v_fw_jac_cb = ((fw_CallbackInfo^)__pyx_t_8);
  __pyx_t_8 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":180
 *     dvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)
 *     dvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)
 *     try:             # <<<<<<<<<<<<<<
 *         if setjmp(dvode_f_cb_info.jmp) == 0:
 *             if setjmp(dvode_jac_cb_info.jmp) == 0:
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":181
 *     dvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)
 *     try:
 *         if setjmp(dvode_f_cb_info.jmp) == 0:             # <<<<<<<<<<<<<<
 *             if setjmp(dvode_jac_cb_info.jmp) == 0:
 *                 fc.dvode(&dvode_f_cb_wrapper, &neq, <fwr_dbl_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &dvode_jac_cb_wrapper, &mf, NULL, NULL)
 */
    __pyx_t_3 = (setjmp(__pyx_v_5scipy_9integrate_4vode_dvode_f_cb_info->jmp) == 0);
    if (__pyx_t_3) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":182
 *     try:
 *         if setjmp(dvode_f_cb_info.jmp) == 0:
 *             if setjmp(dvode_jac_cb_info.jmp) == 0:             # <<<<<<<<<<<<<<
 *                 fc.dvode(&dvode_f_cb_wrapper, &neq, <fwr_dbl_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &dvode_jac_cb_wrapper, &mf, NULL, NULL)
 *             else:
 */
      __pyx_t_3 = (setjmp(__pyx_v_5scipy_9integrate_4vode_dvode_jac_cb_info->jmp) == 0);
      if (__pyx_t_3) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":183
 *         if setjmp(dvode_f_cb_info.jmp) == 0:
 *             if setjmp(dvode_jac_cb_info.jmp) == 0:
 *                 fc.dvode(&dvode_f_cb_wrapper, &neq, <fwr_dbl_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &dvode_jac_cb_wrapper, &mf, NULL, NULL)             # <<<<<<<<<<<<<<
 *             else:
 *                 fw_exctype, fw_excval, fw_exctb = dvode_jac_cb_info.exc
 */
        F_FUNC(dvode,DVODE)(__pyx_function_pointer_dvode_f_cb_wrapper, (&__pyx_v_neq), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_y_)), (&__pyx_v_t), (&__pyx_v_tout), (&__pyx_v_itol), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_rtol_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_atol_)), (&__pyx_v_itask), (&__pyx_v_istate), (&__pyx_v_iopt), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_rwork_)), (&__pyx_v_lrw), ((fwi_integer_t *)PyArray_DATA(__pyx_v_iwork_)), (&__pyx_v_liw), __pyx_function_pointer_dvode_jac_cb_wrapper, (&__pyx_v_mf), NULL, NULL);
        goto __pyx_L15;
      }
      /*else*/ {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":185
 *                 fc.dvode(&dvode_f_cb_wrapper, &neq, <fwr_dbl_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &dvode_jac_cb_wrapper, &mf, NULL, NULL)
 *             else:
 *                 fw_exctype, fw_excval, fw_exctb = dvode_jac_cb_info.exc             # <<<<<<<<<<<<<<
 *                 dvode_jac_cb_info.exc = None
 *                 raise fw_exctype, fw_excval, fw_exctb
 */
        __pyx_t_9 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_v_5scipy_9integrate_4vode_dvode_jac_cb_info->exc, 3)));
        __pyx_t_8 = __pyx_t_9[0];
        __pyx_t_1 = __pyx_t_9[1];
        __pyx_t_10 = __pyx_t_9[2];
        __pyx_t_9 = nullptr;
        __pyx_v_fw_exctype = __pyx_t_8;
        __pyx_t_8 = nullptr;
        __pyx_v_fw_excval = __pyx_t_1;
        __pyx_t_1 = nullptr;
        __pyx_v_fw_exctb = __pyx_t_10;
        __pyx_t_10 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":186
 *             else:
 *                 fw_exctype, fw_excval, fw_exctb = dvode_jac_cb_info.exc
 *                 dvode_jac_cb_info.exc = None             # <<<<<<<<<<<<<<
 *                 raise fw_exctype, fw_excval, fw_exctb
 *         else:
 */
        __pyx_v_5scipy_9integrate_4vode_dvode_jac_cb_info->exc = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":187
 *                 fw_exctype, fw_excval, fw_exctb = dvode_jac_cb_info.exc
 *                 dvode_jac_cb_info.exc = None
 *                 raise fw_exctype, fw_excval, fw_exctb             # <<<<<<<<<<<<<<
 *         else:
 *             fw_exctype, fw_excval, fw_exctb = dvode_f_cb_info.exc
 */
        throw PythonOps::MakeException(__pyx_context, __pyx_v_fw_exctype, __pyx_v_fw_excval, __pyx_v_fw_exctb);
      }
      __pyx_L15:;
      goto __pyx_L14;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":189
 *                 raise fw_exctype, fw_excval, fw_exctb
 *         else:
 *             fw_exctype, fw_excval, fw_exctb = dvode_f_cb_info.exc             # <<<<<<<<<<<<<<
 *             dvode_f_cb_info.exc = None
 *             raise fw_exctype, fw_excval, fw_exctb
 */
      __pyx_t_9 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_v_5scipy_9integrate_4vode_dvode_f_cb_info->exc, 3)));
      __pyx_t_10 = __pyx_t_9[0];
      __pyx_t_1 = __pyx_t_9[1];
      __pyx_t_8 = __pyx_t_9[2];
      __pyx_t_9 = nullptr;
      __pyx_v_fw_exctype = __pyx_t_10;
      __pyx_t_10 = nullptr;
      __pyx_v_fw_excval = __pyx_t_1;
      __pyx_t_1 = nullptr;
      __pyx_v_fw_exctb = __pyx_t_8;
      __pyx_t_8 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":190
 *         else:
 *             fw_exctype, fw_excval, fw_exctb = dvode_f_cb_info.exc
 *             dvode_f_cb_info.exc = None             # <<<<<<<<<<<<<<
 *             raise fw_exctype, fw_excval, fw_exctb
 *     finally:
 */
      __pyx_v_5scipy_9integrate_4vode_dvode_f_cb_info->exc = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":191
 *             fw_exctype, fw_excval, fw_exctb = dvode_f_cb_info.exc
 *             dvode_f_cb_info.exc = None
 *             raise fw_exctype, fw_excval, fw_exctb             # <<<<<<<<<<<<<<
 *     finally:
 *         dvode_f_cb_info = None
 */
      throw PythonOps::MakeException(__pyx_context, __pyx_v_fw_exctype, __pyx_v_fw_excval, __pyx_v_fw_exctb);
    }
    __pyx_L14:;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":193
 *             raise fw_exctype, fw_excval, fw_exctb
 *     finally:
 *         dvode_f_cb_info = None             # <<<<<<<<<<<<<<
 *     return (y_, t, istate,)
 * 
 */
  finally {
    __pyx_v_5scipy_9integrate_4vode_dvode_f_cb_info = ((fw_CallbackInfo^)nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":194
 *     finally:
 *         dvode_f_cb_info = None
 *     return (y_, t, istate,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_8 = __pyx_v_t;
  __pyx_t_1 = __pyx_v_istate;
  __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_y_), __pyx_t_8, __pyx_t_1});
  __pyx_t_8 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_10;
  __pyx_t_10 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":199
 * 
 * cdef fw_CallbackInfo zvode_f_cb_info
 * cdef int zvode_f_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwc_dbl_complex_t * ydot, void * rpar, void * ipar):             # <<<<<<<<<<<<<<
 *     global zvode_f_cb_info;
 *     cdef fw_CallbackInfo info
 */

static  int zvode_f_cb_wrapper_core(fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_t, __pyx_t_double_complex *__pyx_v_y, __pyx_t_double_complex *__pyx_v_ydot, void *__pyx_v_rpar, void *__pyx_v_ipar) {
  fw_CallbackInfo^ __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_ydot_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_ydot_shape[1];
  System::Object^ __pyx_v_ydot_ret;
  int __pyx_r;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  __pyx_v_info = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_ydot_ = nullptr;
  __pyx_v_ydot_ret = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":204
 *     cdef np.ndarray y_, ydot_
 *     cdef np.npy_intp y_shape[1], ydot_shape[1]
 *     info = zvode_f_cb_info             # <<<<<<<<<<<<<<
 *     try:
 *         y_shape[0] = n[0]
 */
  __pyx_v_info = __pyx_v_5scipy_9integrate_4vode_zvode_f_cb_info;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":205
 *     cdef np.npy_intp y_shape[1], ydot_shape[1]
 *     info = zvode_f_cb_info
 *     try:             # <<<<<<<<<<<<<<
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":206
 *     info = zvode_f_cb_info
 *     try:
 *         y_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         ydot_shape[0] = n[0]
 */
    (__pyx_v_y_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":207
 *     try:
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         ydot_shape[0] = n[0]
 *         ydot_ = np.PyArray_New(NULL, 1, ydot_shape, fwc_dbl_complex_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_y_shape, NPY_CDOUBLE, NULL, ((char *)__pyx_v_y), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":208
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         ydot_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         ydot_ = np.PyArray_New(NULL, 1, ydot_shape, fwc_dbl_complex_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 */
    (__pyx_v_ydot_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":209
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         ydot_shape[0] = n[0]
 *         ydot_ = np.PyArray_New(NULL, 1, ydot_shape, fwc_dbl_complex_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         if info.extra_args is None:
 *             ydot_ret = info.callback(t[0], y_)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_ydot_shape, NPY_CDOUBLE, NULL, ((char *)__pyx_v_ydot), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_ydot_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":210
 *         ydot_shape[0] = n[0]
 *         ydot_ = np.PyArray_New(NULL, 1, ydot_shape, fwc_dbl_complex_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:             # <<<<<<<<<<<<<<
 *             ydot_ret = info.callback(t[0], y_)
 *         else:
 */
    __pyx_t_4 = (__pyx_v_info->extra_args == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":211
 *         ydot_ = np.PyArray_New(NULL, 1, ydot_shape, fwc_dbl_complex_t_enum, NULL, <char*>ydot, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 *             ydot_ret = info.callback(t[0], y_)             # <<<<<<<<<<<<<<
 *         else:
 *             ydot_ret = info.callback(t[0], y_, *info.extra_args)
 */
      __pyx_t_3 = (__pyx_v_t[0]);
      __pyx_t_5 = __site_call2_211_36->Target(__site_call2_211_36, __pyx_context, __pyx_v_info->callback, __pyx_t_3, ((System::Object^)__pyx_v_y_));
      __pyx_t_3 = nullptr;
      __pyx_v_ydot_ret = __pyx_t_5;
      __pyx_t_5 = nullptr;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":213
 *             ydot_ret = info.callback(t[0], y_)
 *         else:
 *             ydot_ret = info.callback(t[0], y_, *info.extra_args)             # <<<<<<<<<<<<<<
 *         if ydot_ is not ydot_ret:
 *             ydot_ = np.PyArray_FROMANY(ydot_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 */
      __pyx_t_5 = (__pyx_v_t[0]);
      __pyx_t_3 = __site_call2_ARGS_213_36->Target(__site_call2_ARGS_213_36, __pyx_context, __pyx_v_info->callback, __pyx_t_5, ((System::Object^)__pyx_v_y_), __pyx_v_info->extra_args);
      __pyx_t_5 = nullptr;
      __pyx_v_ydot_ret = __pyx_t_3;
      __pyx_t_3 = nullptr;
    }
    __pyx_L3:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":214
 *         else:
 *             ydot_ret = info.callback(t[0], y_, *info.extra_args)
 *         if ydot_ is not ydot_ret:             # <<<<<<<<<<<<<<
 *             ydot_ = np.PyArray_FROMANY(ydot_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:
 */
    __pyx_t_4 = (((System::Object^)__pyx_v_ydot_) != __pyx_v_ydot_ret);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":215
 *             ydot_ret = info.callback(t[0], y_, *info.extra_args)
 *         if ydot_ is not ydot_ret:
 *             ydot_ = np.PyArray_FROMANY(ydot_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *             if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 */
      __pyx_t_3 = (System::Object^)(long long)(NPY_CDOUBLE);
      __pyx_t_5 = (System::Object^)(long long)((NPY_C_CONTIGUOUS | NPY_F_CONTIGUOUS));
      __pyx_t_6 = PyArray_FROMANY(__pyx_v_ydot_ret, __pyx_t_3, __pyx_int_1, __pyx_int_1, __pyx_t_5); 
      __pyx_t_3 = nullptr;
      __pyx_t_5 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_ydot_ = ((NumpyDotNet::ndarray^)__pyx_t_6);
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":216
 *         if ydot_ is not ydot_ret:
 *             ydot_ = np.PyArray_FROMANY(ydot_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:             # <<<<<<<<<<<<<<
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))
 */
      __pyx_t_4 = ((__pyx_v_ydot_shape[0]) != (PyArray_DIMS(__pyx_v_ydot_)[0]));
      if (__pyx_t_4) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":217
 *             ydot_ = np.PyArray_FROMANY(ydot_ret, fwc_dbl_complex_t_enum, 1, 1, np.NPY_C_CONTIGUOUS|np.NPY_F_CONTIGUOUS)
 *             if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")             # <<<<<<<<<<<<<<
 *             memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))
 *         zvode_f_cb_info = info
 */
        __pyx_t_6 = PythonOps::GetGlobal(__pyx_context, "ValueError");
        __pyx_t_5 = __site_call1_217_32->Target(__site_call1_217_32, __pyx_context, __pyx_t_6, ((System::Object^)"Array returned from callback has illegal shape"));
        __pyx_t_6 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
        __pyx_t_5 = nullptr;
        goto __pyx_L5;
      }
      __pyx_L5:;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":218
 *             if ydot_shape[0] != np.PyArray_DIMS(ydot_)[0]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))             # <<<<<<<<<<<<<<
 *         zvode_f_cb_info = info
 *         return 0
 */
      memcpy(__pyx_v_ydot, PyArray_DATA(__pyx_v_ydot_), PyArray_NBYTES(__pyx_v_ydot_));
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":219
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))
 *         zvode_f_cb_info = info             # <<<<<<<<<<<<<<
 *         return 0
 *     except:
 */
    __pyx_v_5scipy_9integrate_4vode_zvode_f_cb_info = __pyx_v_info;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":220
 *             memcpy(ydot, np.PyArray_DATA(ydot_), np.PyArray_NBYTES(ydot_))
 *         zvode_f_cb_info = info
 *         return 0             # <<<<<<<<<<<<<<
 *     except:
 *         zvode_f_cb_info = info
 */
    __pyx_r = 0;
    goto __pyx_L0;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":221
 *         zvode_f_cb_info = info
 *         return 0
 *     except:             # <<<<<<<<<<<<<<
 *         zvode_f_cb_info = info
 *         info.exc = sys.exc_info()
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate.vode.zvode_f_cb_wrapper_core");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":222
 *         return 0
 *     except:
 *         zvode_f_cb_info = info             # <<<<<<<<<<<<<<
 *         info.exc = sys.exc_info()
 *         return -1
 */
      __pyx_v_5scipy_9integrate_4vode_zvode_f_cb_info = __pyx_v_info;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":223
 *     except:
 *         zvode_f_cb_info = info
 *         info.exc = sys.exc_info()             # <<<<<<<<<<<<<<
 *         return -1
 * 
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "sys");
      __pyx_t_6 = __site_get_exc_info_223_22->Target(__site_get_exc_info_223_22, __pyx_t_5, __pyx_context);
      __pyx_t_5 = nullptr;
      __pyx_t_5 = __site_call0_223_31->Target(__site_call0_223_31, __pyx_context, __pyx_t_6);
      __pyx_t_6 = nullptr;
      __pyx_v_info->exc = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":224
 *         zvode_f_cb_info = info
 *         info.exc = sys.exc_info()
 *         return -1             # <<<<<<<<<<<<<<
 * 
 * cdef void zvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwc_dbl_complex_t * ydot, void * rpar, void * ipar):
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":226
 *         return -1
 * 
 * cdef void zvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwc_dbl_complex_t * ydot, void * rpar, void * ipar):             # <<<<<<<<<<<<<<
 *     if zvode_f_cb_wrapper_core(n, t, y, ydot, rpar, ipar) != 0:
 *         longjmp(zvode_f_cb_info.jmp, 1)
 */

static void (*__pyx_function_pointer_zvode_f_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, __pyx_t_double_complex *, __pyx_t_double_complex *, void *, void *);
typedef void (*__pyx_fp_t_zvode_f_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, __pyx_t_double_complex *, __pyx_t_double_complex *, void *, void *);
static __pyx_delegate_t_5scipy_9integrate_4vode_zvode_f_cb_wrapper^ __pyx_delegate_val_zvode_f_cb_wrapper;
static  void zvode_f_cb_wrapper(fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_t, __pyx_t_double_complex *__pyx_v_y, __pyx_t_double_complex *__pyx_v_ydot, void *__pyx_v_rpar, void *__pyx_v_ipar) {
  int __pyx_t_1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":227
 * 
 * cdef void zvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwc_dbl_complex_t * ydot, void * rpar, void * ipar):
 *     if zvode_f_cb_wrapper_core(n, t, y, ydot, rpar, ipar) != 0:             # <<<<<<<<<<<<<<
 *         longjmp(zvode_f_cb_info.jmp, 1)
 * 
 */
  __pyx_t_1 = (zvode_f_cb_wrapper_core(__pyx_v_n, __pyx_v_t, __pyx_v_y, __pyx_v_ydot, __pyx_v_rpar, __pyx_v_ipar) != 0);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":228
 * cdef void zvode_f_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwc_dbl_complex_t * ydot, void * rpar, void * ipar):
 *     if zvode_f_cb_wrapper_core(n, t, y, ydot, rpar, ipar) != 0:
 *         longjmp(zvode_f_cb_info.jmp, 1)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    longjmp(__pyx_v_5scipy_9integrate_4vode_zvode_f_cb_info->jmp, 1);
    goto __pyx_L3;
  }
  __pyx_L3:;

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":233
 * 
 * cdef fw_CallbackInfo zvode_jac_cb_info
 * cdef int zvode_jac_cb_wrapper_core(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwc_dbl_complex_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):             # <<<<<<<<<<<<<<
 *     global zvode_jac_cb_info;
 *     cdef fw_CallbackInfo info
 */

static  int zvode_jac_cb_wrapper_core(fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_t, __pyx_t_double_complex *__pyx_v_y, fwi_integer_t *__pyx_v_ml, fwi_integer_t *__pyx_v_mu, __pyx_t_double_complex *__pyx_v_jac, fwi_integer_t *__pyx_v_nrowpd, void *__pyx_v_rpar, void *__pyx_v_ipar) {
  fw_CallbackInfo^ __pyx_v_info;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_jac_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_jac_shape[2];
  System::Object^ __pyx_v_jac_ret;
  int __pyx_r;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  System::Object^ __pyx_t_5 = nullptr;
  System::Object^ __pyx_t_6 = nullptr;
  int __pyx_t_7;
  int __pyx_t_8;
  __pyx_v_info = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_jac_ = nullptr;
  __pyx_v_jac_ret = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":238
 *     cdef np.ndarray y_, jac_
 *     cdef np.npy_intp y_shape[1], jac_shape[2]
 *     info = zvode_jac_cb_info             # <<<<<<<<<<<<<<
 *     try:
 *         y_shape[0] = n[0]
 */
  __pyx_v_info = __pyx_v_5scipy_9integrate_4vode_zvode_jac_cb_info;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":239
 *     cdef np.npy_intp y_shape[1], jac_shape[2]
 *     info = zvode_jac_cb_info
 *     try:             # <<<<<<<<<<<<<<
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":240
 *     info = zvode_jac_cb_info
 *     try:
 *         y_shape[0] = n[0]             # <<<<<<<<<<<<<<
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]
 */
    (__pyx_v_y_shape[0]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":241
 *     try:
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]
 *         jac_ = np.PyArray_New(NULL, 2, jac_shape, fwc_dbl_complex_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)
 */
    __pyx_t_3 = PyArray_New(NULL, 1, __pyx_v_y_shape, NPY_CDOUBLE, NULL, ((char *)__pyx_v_y), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":242
 *         y_shape[0] = n[0]
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]             # <<<<<<<<<<<<<<
 *         jac_ = np.PyArray_New(NULL, 2, jac_shape, fwc_dbl_complex_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 */
    (__pyx_v_jac_shape[0]) = (__pyx_v_nrowpd[0]);
    (__pyx_v_jac_shape[1]) = (__pyx_v_n[0]);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":243
 *         y_ = np.PyArray_New(NULL, 1, y_shape, fwc_dbl_complex_t_enum, NULL, <char*>y, 0, np.NPY_FARRAY, NULL)
 *         jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]
 *         jac_ = np.PyArray_New(NULL, 2, jac_shape, fwc_dbl_complex_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)             # <<<<<<<<<<<<<<
 *         if info.extra_args is None:
 *             jac_ret = info.callback(t[0], y_)
 */
    __pyx_t_3 = PyArray_New(NULL, 2, __pyx_v_jac_shape, NPY_CDOUBLE, NULL, ((char *)__pyx_v_jac), 0, NPY_FARRAY, NULL); 
    if (__pyx_t_3 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_jac_ = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":244
 *         jac_shape[0] = nrowpd[0]; jac_shape[1] = n[0]
 *         jac_ = np.PyArray_New(NULL, 2, jac_shape, fwc_dbl_complex_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:             # <<<<<<<<<<<<<<
 *             jac_ret = info.callback(t[0], y_)
 *         else:
 */
    __pyx_t_4 = (__pyx_v_info->extra_args == nullptr);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":245
 *         jac_ = np.PyArray_New(NULL, 2, jac_shape, fwc_dbl_complex_t_enum, NULL, <char*>jac, 0, np.NPY_FARRAY, NULL)
 *         if info.extra_args is None:
 *             jac_ret = info.callback(t[0], y_)             # <<<<<<<<<<<<<<
 *         else:
 *             jac_ret = info.callback(t[0], y_, *info.extra_args)
 */
      __pyx_t_3 = (__pyx_v_t[0]);
      __pyx_t_5 = __site_call2_245_35->Target(__site_call2_245_35, __pyx_context, __pyx_v_info->callback, __pyx_t_3, ((System::Object^)__pyx_v_y_));
      __pyx_t_3 = nullptr;
      __pyx_v_jac_ret = __pyx_t_5;
      __pyx_t_5 = nullptr;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":247
 *             jac_ret = info.callback(t[0], y_)
 *         else:
 *             jac_ret = info.callback(t[0], y_, *info.extra_args)             # <<<<<<<<<<<<<<
 *         if jac_ is not jac_ret:
 *             jac_ = np.PyArray_FROMANY(jac_ret, fwc_dbl_complex_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
 */
      __pyx_t_5 = (__pyx_v_t[0]);
      __pyx_t_3 = __site_call2_ARGS_247_35->Target(__site_call2_ARGS_247_35, __pyx_context, __pyx_v_info->callback, __pyx_t_5, ((System::Object^)__pyx_v_y_), __pyx_v_info->extra_args);
      __pyx_t_5 = nullptr;
      __pyx_v_jac_ret = __pyx_t_3;
      __pyx_t_3 = nullptr;
    }
    __pyx_L3:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":248
 *         else:
 *             jac_ret = info.callback(t[0], y_, *info.extra_args)
 *         if jac_ is not jac_ret:             # <<<<<<<<<<<<<<
 *             jac_ = np.PyArray_FROMANY(jac_ret, fwc_dbl_complex_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
 *             if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:
 */
    __pyx_t_4 = (((System::Object^)__pyx_v_jac_) != __pyx_v_jac_ret);
    if (__pyx_t_4) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":249
 *             jac_ret = info.callback(t[0], y_, *info.extra_args)
 *         if jac_ is not jac_ret:
 *             jac_ = np.PyArray_FROMANY(jac_ret, fwc_dbl_complex_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)             # <<<<<<<<<<<<<<
 *             if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 */
      __pyx_t_3 = (System::Object^)(long long)(NPY_CDOUBLE);
      __pyx_t_5 = (System::Object^)(long long)(NPY_F_CONTIGUOUS);
      __pyx_t_6 = PyArray_FROMANY(__pyx_v_jac_ret, __pyx_t_3, __pyx_int_2, __pyx_int_2, __pyx_t_5); 
      __pyx_t_3 = nullptr;
      __pyx_t_5 = nullptr;
      if (__pyx_t_6 != nullptr && dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_6) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_jac_ = ((NumpyDotNet::ndarray^)__pyx_t_6);
      __pyx_t_6 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":250
 *         if jac_ is not jac_ret:
 *             jac_ = np.PyArray_FROMANY(jac_ret, fwc_dbl_complex_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
 *             if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:             # <<<<<<<<<<<<<<
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))
 */
      __pyx_t_4 = ((__pyx_v_jac_shape[0]) != (PyArray_DIMS(__pyx_v_jac_)[0]));
      if (!__pyx_t_4) {
        __pyx_t_7 = ((__pyx_v_jac_shape[1]) != (PyArray_DIMS(__pyx_v_jac_)[1]));
        __pyx_t_8 = __pyx_t_7;
      } else {
        __pyx_t_8 = __pyx_t_4;
      }
      if (__pyx_t_8) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":251
 *             jac_ = np.PyArray_FROMANY(jac_ret, fwc_dbl_complex_t_enum, 2, 2, np.NPY_F_CONTIGUOUS)
 *             if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:
 *                 raise ValueError("Array returned from callback has illegal shape")             # <<<<<<<<<<<<<<
 *             memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))
 *         zvode_jac_cb_info = info
 */
        __pyx_t_6 = PythonOps::GetGlobal(__pyx_context, "ValueError");
        __pyx_t_5 = __site_call1_251_32->Target(__site_call1_251_32, __pyx_context, __pyx_t_6, ((System::Object^)"Array returned from callback has illegal shape"));
        __pyx_t_6 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
        __pyx_t_5 = nullptr;
        goto __pyx_L5;
      }
      __pyx_L5:;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":252
 *             if jac_shape[0] != np.PyArray_DIMS(jac_)[0] or jac_shape[1] != np.PyArray_DIMS(jac_)[1]:
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))             # <<<<<<<<<<<<<<
 *         zvode_jac_cb_info = info
 *         return 0
 */
      memcpy(__pyx_v_jac, PyArray_DATA(__pyx_v_jac_), PyArray_NBYTES(__pyx_v_jac_));
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":253
 *                 raise ValueError("Array returned from callback has illegal shape")
 *             memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))
 *         zvode_jac_cb_info = info             # <<<<<<<<<<<<<<
 *         return 0
 *     except:
 */
    __pyx_v_5scipy_9integrate_4vode_zvode_jac_cb_info = __pyx_v_info;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":254
 *             memcpy(jac, np.PyArray_DATA(jac_), np.PyArray_NBYTES(jac_))
 *         zvode_jac_cb_info = info
 *         return 0             # <<<<<<<<<<<<<<
 *     except:
 *         zvode_jac_cb_info = info
 */
    __pyx_r = 0;
    goto __pyx_L0;
  } catch (System::Exception^ __pyx_lt_1) {
    System::Object^ __pyx_lt_2 = PythonOps::SetCurrentException(__pyx_context, __pyx_lt_1);

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":255
 *         zvode_jac_cb_info = info
 *         return 0
 *     except:             # <<<<<<<<<<<<<<
 *         zvode_jac_cb_info = info
 *         info.exc = sys.exc_info()
 */
    /*except:*/ {
      // XXX should update traceback here __Pyx_AddTraceback("scipy.integrate.vode.zvode_jac_cb_wrapper_core");
      PythonOps::BuildExceptionInfo(__pyx_context, __pyx_lt_1);

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":256
 *         return 0
 *     except:
 *         zvode_jac_cb_info = info             # <<<<<<<<<<<<<<
 *         info.exc = sys.exc_info()
 *         return -1
 */
      __pyx_v_5scipy_9integrate_4vode_zvode_jac_cb_info = __pyx_v_info;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":257
 *     except:
 *         zvode_jac_cb_info = info
 *         info.exc = sys.exc_info()             # <<<<<<<<<<<<<<
 *         return -1
 * 
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "sys");
      __pyx_t_6 = __site_get_exc_info_257_22->Target(__site_get_exc_info_257_22, __pyx_t_5, __pyx_context);
      __pyx_t_5 = nullptr;
      __pyx_t_5 = __site_call0_257_31->Target(__site_call0_257_31, __pyx_context, __pyx_t_6);
      __pyx_t_6 = nullptr;
      __pyx_v_info->exc = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":258
 *         zvode_jac_cb_info = info
 *         info.exc = sys.exc_info()
 *         return -1             # <<<<<<<<<<<<<<
 * 
 * cdef void zvode_jac_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwc_dbl_complex_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):
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

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":260
 *         return -1
 * 
 * cdef void zvode_jac_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwc_dbl_complex_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):             # <<<<<<<<<<<<<<
 *     if zvode_jac_cb_wrapper_core(n, t, y, ml, mu, jac, nrowpd, rpar, ipar) != 0:
 *         longjmp(zvode_jac_cb_info.jmp, 1)
 */

static void (*__pyx_function_pointer_zvode_jac_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, __pyx_t_double_complex *, fwi_integer_t *, fwi_integer_t *, __pyx_t_double_complex *, fwi_integer_t *, void *, void *);
typedef void (*__pyx_fp_t_zvode_jac_cb_wrapper)(fwi_integer_t *, fwr_dbl_t *, __pyx_t_double_complex *, fwi_integer_t *, fwi_integer_t *, __pyx_t_double_complex *, fwi_integer_t *, void *, void *);
static __pyx_delegate_t_5scipy_9integrate_4vode_zvode_jac_cb_wrapper^ __pyx_delegate_val_zvode_jac_cb_wrapper;
static  void zvode_jac_cb_wrapper(fwi_integer_t *__pyx_v_n, fwr_dbl_t *__pyx_v_t, __pyx_t_double_complex *__pyx_v_y, fwi_integer_t *__pyx_v_ml, fwi_integer_t *__pyx_v_mu, __pyx_t_double_complex *__pyx_v_jac, fwi_integer_t *__pyx_v_nrowpd, void *__pyx_v_rpar, void *__pyx_v_ipar) {
  int __pyx_t_1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":261
 * 
 * cdef void zvode_jac_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwc_dbl_complex_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):
 *     if zvode_jac_cb_wrapper_core(n, t, y, ml, mu, jac, nrowpd, rpar, ipar) != 0:             # <<<<<<<<<<<<<<
 *         longjmp(zvode_jac_cb_info.jmp, 1)
 * 
 */
  __pyx_t_1 = (zvode_jac_cb_wrapper_core(__pyx_v_n, __pyx_v_t, __pyx_v_y, __pyx_v_ml, __pyx_v_mu, __pyx_v_jac, __pyx_v_nrowpd, __pyx_v_rpar, __pyx_v_ipar) != 0);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":262
 * cdef void zvode_jac_cb_wrapper(fwi_integer_t * n, fwr_dbl_t * t, fwc_dbl_complex_t * y, fwi_integer_t * ml, fwi_integer_t * mu, fwc_dbl_complex_t * jac, fwi_integer_t * nrowpd, void * rpar, void * ipar):
 *     if zvode_jac_cb_wrapper_core(n, t, y, ml, mu, jac, nrowpd, rpar, ipar) != 0:
 *         longjmp(zvode_jac_cb_info.jmp, 1)             # <<<<<<<<<<<<<<
 * 
 * 
 */
    longjmp(__pyx_v_5scipy_9integrate_4vode_zvode_jac_cb_info->jmp, 1);
    goto __pyx_L3;
  }
  __pyx_L3:;

}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":265
 * 
 * 
 * def zvode(object f, object jac, object y, fwr_dbl_t t, fwr_dbl_t tout, object rtol, object atol, fwi_integer_t itask, fwi_integer_t istate, object zwork, object rwork, object iwork, fwi_integer_t mf, object f_extra_args=None, object jac_extra_args=None, bint overwrite_y=False):             # <<<<<<<<<<<<<<
 *     """zvode(f, jac, y, t, tout, rtol, atol, itask, istate, zwork, rwork, iwork, mf[, overwrite_y]) -> (y, t, istate)
 * 
 */

static System::Object^ zvode(System::Object^ f, System::Object^ jac, System::Object^ y, System::Object^ t, System::Object^ tout, System::Object^ rtol, System::Object^ atol, System::Object^ itask, System::Object^ istate, System::Object^ zwork, System::Object^ rwork, System::Object^ iwork, System::Object^ mf, [InteropServices::Optional]System::Object^ f_extra_args, [InteropServices::Optional]System::Object^ jac_extra_args, [InteropServices::Optional]System::Object^ overwrite_y) {
  System::Object^ __pyx_v_f = nullptr;
  System::Object^ __pyx_v_jac = nullptr;
  System::Object^ __pyx_v_y = nullptr;
  fwr_dbl_t __pyx_v_t;
  fwr_dbl_t __pyx_v_tout;
  System::Object^ __pyx_v_rtol = nullptr;
  System::Object^ __pyx_v_atol = nullptr;
  fwi_integer_t __pyx_v_itask;
  fwi_integer_t __pyx_v_istate;
  System::Object^ __pyx_v_zwork = nullptr;
  System::Object^ __pyx_v_rwork = nullptr;
  System::Object^ __pyx_v_iwork = nullptr;
  fwi_integer_t __pyx_v_mf;
  System::Object^ __pyx_v_f_extra_args = nullptr;
  System::Object^ __pyx_v_jac_extra_args = nullptr;
  int __pyx_v_overwrite_y;
  fw_CallbackInfo^ __pyx_v_fw_f_cb;
  fw_CallbackInfo^ __pyx_v_fw_jac_cb;
  fwi_integer_t __pyx_v_neq;
  fwi_integer_t __pyx_v_itol;
  fwi_integer_t __pyx_v_iopt;
  fwi_integer_t __pyx_v_lzw;
  fwi_integer_t __pyx_v_lrw;
  fwi_integer_t __pyx_v_liw;
  NumpyDotNet::ndarray^ __pyx_v_y_;
  NumpyDotNet::ndarray^ __pyx_v_rtol_;
  NumpyDotNet::ndarray^ __pyx_v_atol_;
  NumpyDotNet::ndarray^ __pyx_v_zwork_;
  NumpyDotNet::ndarray^ __pyx_v_rwork_;
  NumpyDotNet::ndarray^ __pyx_v_iwork_;
  __pyx_t_5numpy_npy_intp __pyx_v_y_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_rtol_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_atol_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_zwork_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_rwork_shape[1];
  __pyx_t_5numpy_npy_intp __pyx_v_iwork_shape[1];
  System::Object^ __pyx_v_fw_exctype;
  System::Object^ __pyx_v_fw_excval;
  System::Object^ __pyx_v_fw_exctb;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  long __pyx_t_2;
  int __pyx_t_3;
  int __pyx_t_4;
  int __pyx_t_5;
  long __pyx_t_6;
  long __pyx_t_7;
  System::Object^ __pyx_t_8 = nullptr;
  array<System::Object^>^ __pyx_t_9;
  System::Object^ __pyx_t_10 = nullptr;
  __pyx_v_f = f;
  __pyx_v_jac = jac;
  __pyx_v_y = y;
  __pyx_v_t = __site_cvt_cvt_fwr_dbl_t_265_0->Target(__site_cvt_cvt_fwr_dbl_t_265_0, t);
  __pyx_v_tout = __site_cvt_cvt_fwr_dbl_t_265_0_1->Target(__site_cvt_cvt_fwr_dbl_t_265_0_1, tout);
  __pyx_v_rtol = rtol;
  __pyx_v_atol = atol;
  __pyx_v_itask = __site_cvt_cvt_fwi_integer_t_265_0->Target(__site_cvt_cvt_fwi_integer_t_265_0, itask);
  __pyx_v_istate = __site_cvt_cvt_fwi_integer_t_265_0_1->Target(__site_cvt_cvt_fwi_integer_t_265_0_1, istate);
  __pyx_v_zwork = zwork;
  __pyx_v_rwork = rwork;
  __pyx_v_iwork = iwork;
  __pyx_v_mf = __site_cvt_cvt_fwi_integer_t_265_0_2->Target(__site_cvt_cvt_fwi_integer_t_265_0_2, mf);
  if (dynamic_cast<System::Reflection::Missing^>(f_extra_args) == nullptr) {
    __pyx_v_f_extra_args = f_extra_args;
  } else {
    __pyx_v_f_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(jac_extra_args) == nullptr) {
    __pyx_v_jac_extra_args = jac_extra_args;
  } else {
    __pyx_v_jac_extra_args = ((System::Object^)nullptr);
  }
  if (dynamic_cast<System::Reflection::Missing^>(overwrite_y) == nullptr) {
    __pyx_v_overwrite_y = __site_cvt_cvt_int_265_0->Target(__site_cvt_cvt_int_265_0, overwrite_y);
  } else {
    __pyx_v_overwrite_y = ((int)0);
  }
  __pyx_v_fw_f_cb = nullptr;
  __pyx_v_fw_jac_cb = nullptr;
  __pyx_v_y_ = nullptr;
  __pyx_v_rtol_ = nullptr;
  __pyx_v_atol_ = nullptr;
  __pyx_v_zwork_ = nullptr;
  __pyx_v_rwork_ = nullptr;
  __pyx_v_iwork_ = nullptr;
  __pyx_v_fw_exctype = nullptr;
  __pyx_v_fw_excval = nullptr;
  __pyx_v_fw_exctb = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":299
 *     cdef np.ndarray y_, rtol_, atol_, zwork_, rwork_, iwork_
 *     cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], zwork_shape[1], rwork_shape[1], iwork_shape[1]
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)             # <<<<<<<<<<<<<<
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
 *     itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_rtol, NPY_DOUBLE, 1, __pyx_v_rtol_shape, 0, 0, nullptr)); 
  __pyx_v_rtol_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":300
 *     cdef np.npy_intp y_shape[1], rtol_shape[1], atol_shape[1], zwork_shape[1], rwork_shape[1], iwork_shape[1]
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)             # <<<<<<<<<<<<<<
 *     itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))
 *     iopt = 1
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_atol, NPY_DOUBLE, 1, __pyx_v_atol_shape, 0, 0, nullptr)); 
  __pyx_v_atol_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":301
 *     rtol_ = fw_asfortranarray(rtol, fwr_dbl_t_enum, 1, rtol_shape, False, False)
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
 *     itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))             # <<<<<<<<<<<<<<
 *     iopt = 1
 *     zwork_ = fw_asfortranarray(zwork, fwc_dbl_complex_t_enum, 1, zwork_shape, False, False)
 */
  __pyx_t_3 = ((__pyx_v_atol_shape[0]) <= 1);
  if (__pyx_t_3) {
    __pyx_t_4 = ((__pyx_v_rtol_shape[0]) <= 1);
    __pyx_t_5 = __pyx_t_4;
  } else {
    __pyx_t_5 = __pyx_t_3;
  }
  if (__pyx_t_5) {
    __pyx_t_2 = 1;
  } else {
    if (((__pyx_v_rtol_shape[0]) <= 1)) {
      __pyx_t_6 = 2;
    } else {
      if (((__pyx_v_atol_shape[0]) <= 1)) {
        __pyx_t_7 = 3;
      } else {
        __pyx_t_7 = 4;
      }
      __pyx_t_6 = __pyx_t_7;
    }
    __pyx_t_2 = __pyx_t_6;
  }
  __pyx_v_itol = __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":302
 *     atol_ = fw_asfortranarray(atol, fwr_dbl_t_enum, 1, atol_shape, False, False)
 *     itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))
 *     iopt = 1             # <<<<<<<<<<<<<<
 *     zwork_ = fw_asfortranarray(zwork, fwc_dbl_complex_t_enum, 1, zwork_shape, False, False)
 *     rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
 */
  __pyx_v_iopt = 1;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":303
 *     itol = 1 if ((atol_shape[0] <= 1) and (rtol_shape[0] <= 1)) else (2 if (rtol_shape[0] <= 1) else (3 if (atol_shape[0] <= 1) else 4))
 *     iopt = 1
 *     zwork_ = fw_asfortranarray(zwork, fwc_dbl_complex_t_enum, 1, zwork_shape, False, False)             # <<<<<<<<<<<<<<
 *     rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_zwork, NPY_CDOUBLE, 1, __pyx_v_zwork_shape, 0, 0, nullptr)); 
  __pyx_v_zwork_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":304
 *     iopt = 1
 *     zwork_ = fw_asfortranarray(zwork, fwc_dbl_complex_t_enum, 1, zwork_shape, False, False)
 *     rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)             # <<<<<<<<<<<<<<
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, not overwrite_y, False)
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_rwork, NPY_DOUBLE, 1, __pyx_v_rwork_shape, 0, 0, nullptr)); 
  __pyx_v_rwork_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":305
 *     zwork_ = fw_asfortranarray(zwork, fwc_dbl_complex_t_enum, 1, zwork_shape, False, False)
 *     rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)             # <<<<<<<<<<<<<<
 *     y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, not overwrite_y, False)
 *     neq = y_shape[0]
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_iwork, NPY_INT, 1, __pyx_v_iwork_shape, 0, 0, nullptr)); 
  __pyx_v_iwork_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":306
 *     rwork_ = fw_asfortranarray(rwork, fwr_dbl_t_enum, 1, rwork_shape, False, False)
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, not overwrite_y, False)             # <<<<<<<<<<<<<<
 *     neq = y_shape[0]
 *     lzw = zwork_shape[0]
 */
  __pyx_t_1 = ((System::Object^)fw_asfortranarray(__pyx_v_y, NPY_CDOUBLE, 1, __pyx_v_y_shape, (!__pyx_v_overwrite_y), 0, nullptr)); 
  __pyx_v_y_ = ((NumpyDotNet::ndarray^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":307
 *     iwork_ = fw_asfortranarray(iwork, fwi_integer_t_enum, 1, iwork_shape, False, False)
 *     y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, not overwrite_y, False)
 *     neq = y_shape[0]             # <<<<<<<<<<<<<<
 *     lzw = zwork_shape[0]
 *     lrw = rwork_shape[0]
 */
  __pyx_v_neq = (__pyx_v_y_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":308
 *     y_ = fw_asfortranarray(y, fwc_dbl_complex_t_enum, 1, y_shape, not overwrite_y, False)
 *     neq = y_shape[0]
 *     lzw = zwork_shape[0]             # <<<<<<<<<<<<<<
 *     lrw = rwork_shape[0]
 *     liw = iwork_shape[0]
 */
  __pyx_v_lzw = (__pyx_v_zwork_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":309
 *     neq = y_shape[0]
 *     lzw = zwork_shape[0]
 *     lrw = rwork_shape[0]             # <<<<<<<<<<<<<<
 *     liw = iwork_shape[0]
 *     if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):
 */
  __pyx_v_lrw = (__pyx_v_rwork_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":310
 *     lzw = zwork_shape[0]
 *     lrw = rwork_shape[0]
 *     liw = iwork_shape[0]             # <<<<<<<<<<<<<<
 *     if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')
 */
  __pyx_v_liw = (__pyx_v_iwork_shape[0]);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":311
 *     lrw = rwork_shape[0]
 *     liw = iwork_shape[0]
 *     if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):
 */
  __pyx_t_5 = ((__pyx_v_rtol_shape[0]) <= 1);
  if (!__pyx_t_5) {
    __pyx_t_3 = ((__pyx_v_rtol_shape[0]) >= __pyx_v_neq);
    __pyx_t_4 = __pyx_t_3;
  } else {
    __pyx_t_4 = __pyx_t_5;
  }
  __pyx_t_5 = (!__pyx_t_4);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":312
 *     liw = iwork_shape[0]
 *     if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')             # <<<<<<<<<<<<<<
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_8 = __site_call1_312_24->Target(__site_call1_312_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_8, nullptr, nullptr);
    __pyx_t_8 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":313
 *     if not ((rtol_shape[0] <= 1) or (rtol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')
 *     if not ((itask > 0) and (itask < 6)):
 */
  __pyx_t_5 = ((__pyx_v_atol_shape[0]) <= 1);
  if (!__pyx_t_5) {
    __pyx_t_4 = ((__pyx_v_atol_shape[0]) >= __pyx_v_neq);
    __pyx_t_3 = __pyx_t_4;
  } else {
    __pyx_t_3 = __pyx_t_5;
  }
  __pyx_t_5 = (!__pyx_t_3);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":314
 *         raise ValueError('Condition on arguments not satisfied: (rtol.shape[0] <= 1) or (rtol.shape[0] >= neq)')
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')             # <<<<<<<<<<<<<<
 *     if not ((itask > 0) and (itask < 6)):
 *         raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_314_24->Target(__site_call1_314_24, __pyx_context, __pyx_t_8, ((System::Object^)"Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)"));
    __pyx_t_8 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":315
 *     if not ((atol_shape[0] <= 1) or (atol_shape[0] >= neq)):
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')
 *     if not ((itask > 0) and (itask < 6)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')
 *     if not ((istate > 0) and (istate < 4)):
 */
  __pyx_t_5 = (__pyx_v_itask > 0);
  if (__pyx_t_5) {
    __pyx_t_3 = (__pyx_v_itask < 6);
    __pyx_t_4 = __pyx_t_3;
  } else {
    __pyx_t_4 = __pyx_t_5;
  }
  __pyx_t_5 = (!__pyx_t_4);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":316
 *         raise ValueError('Condition on arguments not satisfied: (atol.shape[0] <= 1) or (atol.shape[0] >= neq)')
 *     if not ((itask > 0) and (itask < 6)):
 *         raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')             # <<<<<<<<<<<<<<
 *     if not ((istate > 0) and (istate < 4)):
 *         raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_8 = __site_call1_316_24->Target(__site_call1_316_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: (itask > 0) and (itask < 6)"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_8, nullptr, nullptr);
    __pyx_t_8 = nullptr;
    goto __pyx_L7;
  }
  __pyx_L7:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":317
 *     if not ((itask > 0) and (itask < 6)):
 *         raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')
 *     if not ((istate > 0) and (istate < 4)):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')
 *     if not (zwork_shape[0] >= lzw):
 */
  __pyx_t_5 = (__pyx_v_istate > 0);
  if (__pyx_t_5) {
    __pyx_t_4 = (__pyx_v_istate < 4);
    __pyx_t_3 = __pyx_t_4;
  } else {
    __pyx_t_3 = __pyx_t_5;
  }
  __pyx_t_5 = (!__pyx_t_3);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":318
 *         raise ValueError('Condition on arguments not satisfied: (itask > 0) and (itask < 6)')
 *     if not ((istate > 0) and (istate < 4)):
 *         raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')             # <<<<<<<<<<<<<<
 *     if not (zwork_shape[0] >= lzw):
 *         raise ValueError('Condition on arguments not satisfied: zwork.shape[0] >= lzw')
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_318_24->Target(__site_call1_318_24, __pyx_context, __pyx_t_8, ((System::Object^)"Condition on arguments not satisfied: (istate > 0) and (istate < 4)"));
    __pyx_t_8 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":319
 *     if not ((istate > 0) and (istate < 4)):
 *         raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')
 *     if not (zwork_shape[0] >= lzw):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: zwork.shape[0] >= lzw')
 *     if not (rwork_shape[0] >= lrw):
 */
  __pyx_t_5 = (!((__pyx_v_zwork_shape[0]) >= __pyx_v_lzw));
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":320
 *         raise ValueError('Condition on arguments not satisfied: (istate > 0) and (istate < 4)')
 *     if not (zwork_shape[0] >= lzw):
 *         raise ValueError('Condition on arguments not satisfied: zwork.shape[0] >= lzw')             # <<<<<<<<<<<<<<
 *     if not (rwork_shape[0] >= lrw):
 *         raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_8 = __site_call1_320_24->Target(__site_call1_320_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: zwork.shape[0] >= lzw"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_8, nullptr, nullptr);
    __pyx_t_8 = nullptr;
    goto __pyx_L9;
  }
  __pyx_L9:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":321
 *     if not (zwork_shape[0] >= lzw):
 *         raise ValueError('Condition on arguments not satisfied: zwork.shape[0] >= lzw')
 *     if not (rwork_shape[0] >= lrw):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')
 *     if not (iwork_shape[0] >= liw):
 */
  __pyx_t_5 = (!((__pyx_v_rwork_shape[0]) >= __pyx_v_lrw));
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":322
 *         raise ValueError('Condition on arguments not satisfied: zwork.shape[0] >= lzw')
 *     if not (rwork_shape[0] >= lrw):
 *         raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')             # <<<<<<<<<<<<<<
 *     if not (iwork_shape[0] >= liw):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_322_24->Target(__site_call1_322_24, __pyx_context, __pyx_t_8, ((System::Object^)"Condition on arguments not satisfied: rwork.shape[0] >= lrw"));
    __pyx_t_8 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L10;
  }
  __pyx_L10:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":323
 *     if not (rwork_shape[0] >= lrw):
 *         raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')
 *     if not (iwork_shape[0] >= liw):             # <<<<<<<<<<<<<<
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')
 *     if not (0 <= neq <= y_shape[0]):
 */
  __pyx_t_5 = (!((__pyx_v_iwork_shape[0]) >= __pyx_v_liw));
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":324
 *         raise ValueError('Condition on arguments not satisfied: rwork.shape[0] >= lrw')
 *     if not (iwork_shape[0] >= liw):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')             # <<<<<<<<<<<<<<
 *     if not (0 <= neq <= y_shape[0]):
 *         raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_8 = __site_call1_324_24->Target(__site_call1_324_24, __pyx_context, __pyx_t_1, ((System::Object^)"Condition on arguments not satisfied: iwork.shape[0] >= liw"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_8, nullptr, nullptr);
    __pyx_t_8 = nullptr;
    goto __pyx_L11;
  }
  __pyx_L11:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":325
 *     if not (iwork_shape[0] >= liw):
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')
 *     if not (0 <= neq <= y_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")
 *     if not (0 <= lzw <= zwork_shape[0]):
 */
  __pyx_t_5 = (0 <= __pyx_v_neq);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_v_neq <= (__pyx_v_y_shape[0]));
  }
  __pyx_t_3 = (!__pyx_t_5);
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":326
 *         raise ValueError('Condition on arguments not satisfied: iwork.shape[0] >= liw')
 *     if not (0 <= neq <= y_shape[0]):
 *         raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= lzw <= zwork_shape[0]):
 *         raise ValueError("(0 <= lzw <= zwork.shape[0]) not satisifed")
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_326_24->Target(__site_call1_326_24, __pyx_context, __pyx_t_8, ((System::Object^)"(0 <= neq <= y.shape[0]) not satisifed"));
    __pyx_t_8 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L12;
  }
  __pyx_L12:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":327
 *     if not (0 <= neq <= y_shape[0]):
 *         raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")
 *     if not (0 <= lzw <= zwork_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= lzw <= zwork.shape[0]) not satisifed")
 *     if not (0 <= lrw <= rwork_shape[0]):
 */
  __pyx_t_3 = (0 <= __pyx_v_lzw);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_v_lzw <= (__pyx_v_zwork_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_3);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":328
 *         raise ValueError("(0 <= neq <= y.shape[0]) not satisifed")
 *     if not (0 <= lzw <= zwork_shape[0]):
 *         raise ValueError("(0 <= lzw <= zwork.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= lrw <= rwork_shape[0]):
 *         raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_8 = __site_call1_328_24->Target(__site_call1_328_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= lzw <= zwork.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_8, nullptr, nullptr);
    __pyx_t_8 = nullptr;
    goto __pyx_L13;
  }
  __pyx_L13:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":329
 *     if not (0 <= lzw <= zwork_shape[0]):
 *         raise ValueError("(0 <= lzw <= zwork.shape[0]) not satisifed")
 *     if not (0 <= lrw <= rwork_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
 *     if not (0 <= liw <= iwork_shape[0]):
 */
  __pyx_t_5 = (0 <= __pyx_v_lrw);
  if (__pyx_t_5) {
    __pyx_t_5 = (__pyx_v_lrw <= (__pyx_v_rwork_shape[0]));
  }
  __pyx_t_3 = (!__pyx_t_5);
  if (__pyx_t_3) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":330
 *         raise ValueError("(0 <= lzw <= zwork.shape[0]) not satisifed")
 *     if not (0 <= lrw <= rwork_shape[0]):
 *         raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     if not (0 <= liw <= iwork_shape[0]):
 *         raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_1 = __site_call1_330_24->Target(__site_call1_330_24, __pyx_context, __pyx_t_8, ((System::Object^)"(0 <= lrw <= rwork.shape[0]) not satisifed"));
    __pyx_t_8 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L14;
  }
  __pyx_L14:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":331
 *     if not (0 <= lrw <= rwork_shape[0]):
 *         raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
 *     if not (0 <= liw <= iwork_shape[0]):             # <<<<<<<<<<<<<<
 *         raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
 *     zvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)
 */
  __pyx_t_3 = (0 <= __pyx_v_liw);
  if (__pyx_t_3) {
    __pyx_t_3 = (__pyx_v_liw <= (__pyx_v_iwork_shape[0]));
  }
  __pyx_t_5 = (!__pyx_t_3);
  if (__pyx_t_5) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":332
 *         raise ValueError("(0 <= lrw <= rwork.shape[0]) not satisifed")
 *     if not (0 <= liw <= iwork_shape[0]):
 *         raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")             # <<<<<<<<<<<<<<
 *     zvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)
 *     zvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_8 = __site_call1_332_24->Target(__site_call1_332_24, __pyx_context, __pyx_t_1, ((System::Object^)"(0 <= liw <= iwork.shape[0]) not satisifed"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_8, nullptr, nullptr);
    __pyx_t_8 = nullptr;
    goto __pyx_L15;
  }
  __pyx_L15:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":333
 *     if not (0 <= liw <= iwork_shape[0]):
 *         raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
 *     zvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)             # <<<<<<<<<<<<<<
 *     zvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)
 *     try:
 */
  __pyx_t_8 = __site_call2_333_47->Target(__site_call2_333_47, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_9integrate_4vode_fw_CallbackInfo)), __pyx_v_f, __pyx_v_f_extra_args);
  __pyx_v_5scipy_9integrate_4vode_zvode_f_cb_info = ((fw_CallbackInfo^)__pyx_t_8);
  __pyx_v_fw_f_cb = ((fw_CallbackInfo^)__pyx_t_8);
  __pyx_t_8 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":334
 *         raise ValueError("(0 <= liw <= iwork.shape[0]) not satisifed")
 *     zvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)
 *     zvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)             # <<<<<<<<<<<<<<
 *     try:
 *         if setjmp(zvode_f_cb_info.jmp) == 0:
 */
  __pyx_t_8 = __site_call2_334_51->Target(__site_call2_334_51, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_9integrate_4vode_fw_CallbackInfo)), __pyx_v_jac, __pyx_v_jac_extra_args);
  __pyx_v_5scipy_9integrate_4vode_zvode_jac_cb_info = ((fw_CallbackInfo^)__pyx_t_8);
  __pyx_v_fw_jac_cb = ((fw_CallbackInfo^)__pyx_t_8);
  __pyx_t_8 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":335
 *     zvode_f_cb_info = fw_f_cb = fw_CallbackInfo(f, f_extra_args)
 *     zvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)
 *     try:             # <<<<<<<<<<<<<<
 *         if setjmp(zvode_f_cb_info.jmp) == 0:
 *             if setjmp(zvode_jac_cb_info.jmp) == 0:
 */
  try {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":336
 *     zvode_jac_cb_info = fw_jac_cb = fw_CallbackInfo(jac, jac_extra_args)
 *     try:
 *         if setjmp(zvode_f_cb_info.jmp) == 0:             # <<<<<<<<<<<<<<
 *             if setjmp(zvode_jac_cb_info.jmp) == 0:
 *                 fc.zvode(&zvode_f_cb_wrapper, &neq, <fwc_dbl_complex_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwc_dbl_complex_t*>np.PyArray_DATA(zwork_), &lzw, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &zvode_jac_cb_wrapper, &mf, NULL, NULL)
 */
    __pyx_t_5 = (setjmp(__pyx_v_5scipy_9integrate_4vode_zvode_f_cb_info->jmp) == 0);
    if (__pyx_t_5) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":337
 *     try:
 *         if setjmp(zvode_f_cb_info.jmp) == 0:
 *             if setjmp(zvode_jac_cb_info.jmp) == 0:             # <<<<<<<<<<<<<<
 *                 fc.zvode(&zvode_f_cb_wrapper, &neq, <fwc_dbl_complex_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwc_dbl_complex_t*>np.PyArray_DATA(zwork_), &lzw, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &zvode_jac_cb_wrapper, &mf, NULL, NULL)
 *             else:
 */
      __pyx_t_5 = (setjmp(__pyx_v_5scipy_9integrate_4vode_zvode_jac_cb_info->jmp) == 0);
      if (__pyx_t_5) {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":338
 *         if setjmp(zvode_f_cb_info.jmp) == 0:
 *             if setjmp(zvode_jac_cb_info.jmp) == 0:
 *                 fc.zvode(&zvode_f_cb_wrapper, &neq, <fwc_dbl_complex_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwc_dbl_complex_t*>np.PyArray_DATA(zwork_), &lzw, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &zvode_jac_cb_wrapper, &mf, NULL, NULL)             # <<<<<<<<<<<<<<
 *             else:
 *                 fw_exctype, fw_excval, fw_exctb = zvode_jac_cb_info.exc
 */
        F_FUNC(zvode,ZVODE)(__pyx_function_pointer_zvode_f_cb_wrapper, (&__pyx_v_neq), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_y_)), (&__pyx_v_t), (&__pyx_v_tout), (&__pyx_v_itol), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_rtol_)), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_atol_)), (&__pyx_v_itask), (&__pyx_v_istate), (&__pyx_v_iopt), ((__pyx_t_double_complex *)PyArray_DATA(__pyx_v_zwork_)), (&__pyx_v_lzw), ((fwr_dbl_t *)PyArray_DATA(__pyx_v_rwork_)), (&__pyx_v_lrw), ((fwi_integer_t *)PyArray_DATA(__pyx_v_iwork_)), (&__pyx_v_liw), __pyx_function_pointer_zvode_jac_cb_wrapper, (&__pyx_v_mf), NULL, NULL);
        goto __pyx_L17;
      }
      /*else*/ {

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":340
 *                 fc.zvode(&zvode_f_cb_wrapper, &neq, <fwc_dbl_complex_t*>np.PyArray_DATA(y_), &t, &tout, &itol, <fwr_dbl_t*>np.PyArray_DATA(rtol_), <fwr_dbl_t*>np.PyArray_DATA(atol_), &itask, &istate, &iopt, <fwc_dbl_complex_t*>np.PyArray_DATA(zwork_), &lzw, <fwr_dbl_t*>np.PyArray_DATA(rwork_), &lrw, <fwi_integer_t*>np.PyArray_DATA(iwork_), &liw, &zvode_jac_cb_wrapper, &mf, NULL, NULL)
 *             else:
 *                 fw_exctype, fw_excval, fw_exctb = zvode_jac_cb_info.exc             # <<<<<<<<<<<<<<
 *                 zvode_jac_cb_info.exc = None
 *                 raise fw_exctype, fw_excval, fw_exctb
 */
        __pyx_t_9 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_v_5scipy_9integrate_4vode_zvode_jac_cb_info->exc, 3)));
        __pyx_t_8 = __pyx_t_9[0];
        __pyx_t_1 = __pyx_t_9[1];
        __pyx_t_10 = __pyx_t_9[2];
        __pyx_t_9 = nullptr;
        __pyx_v_fw_exctype = __pyx_t_8;
        __pyx_t_8 = nullptr;
        __pyx_v_fw_excval = __pyx_t_1;
        __pyx_t_1 = nullptr;
        __pyx_v_fw_exctb = __pyx_t_10;
        __pyx_t_10 = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":341
 *             else:
 *                 fw_exctype, fw_excval, fw_exctb = zvode_jac_cb_info.exc
 *                 zvode_jac_cb_info.exc = None             # <<<<<<<<<<<<<<
 *                 raise fw_exctype, fw_excval, fw_exctb
 *         else:
 */
        __pyx_v_5scipy_9integrate_4vode_zvode_jac_cb_info->exc = nullptr;

        /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":342
 *                 fw_exctype, fw_excval, fw_exctb = zvode_jac_cb_info.exc
 *                 zvode_jac_cb_info.exc = None
 *                 raise fw_exctype, fw_excval, fw_exctb             # <<<<<<<<<<<<<<
 *         else:
 *             fw_exctype, fw_excval, fw_exctb = zvode_f_cb_info.exc
 */
        throw PythonOps::MakeException(__pyx_context, __pyx_v_fw_exctype, __pyx_v_fw_excval, __pyx_v_fw_exctb);
      }
      __pyx_L17:;
      goto __pyx_L16;
    }
    /*else*/ {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":344
 *                 raise fw_exctype, fw_excval, fw_exctb
 *         else:
 *             fw_exctype, fw_excval, fw_exctb = zvode_f_cb_info.exc             # <<<<<<<<<<<<<<
 *             zvode_f_cb_info.exc = None
 *             raise fw_exctype, fw_excval, fw_exctb
 */
      __pyx_t_9 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_v_5scipy_9integrate_4vode_zvode_f_cb_info->exc, 3)));
      __pyx_t_10 = __pyx_t_9[0];
      __pyx_t_1 = __pyx_t_9[1];
      __pyx_t_8 = __pyx_t_9[2];
      __pyx_t_9 = nullptr;
      __pyx_v_fw_exctype = __pyx_t_10;
      __pyx_t_10 = nullptr;
      __pyx_v_fw_excval = __pyx_t_1;
      __pyx_t_1 = nullptr;
      __pyx_v_fw_exctb = __pyx_t_8;
      __pyx_t_8 = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":345
 *         else:
 *             fw_exctype, fw_excval, fw_exctb = zvode_f_cb_info.exc
 *             zvode_f_cb_info.exc = None             # <<<<<<<<<<<<<<
 *             raise fw_exctype, fw_excval, fw_exctb
 *     finally:
 */
      __pyx_v_5scipy_9integrate_4vode_zvode_f_cb_info->exc = nullptr;

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":346
 *             fw_exctype, fw_excval, fw_exctb = zvode_f_cb_info.exc
 *             zvode_f_cb_info.exc = None
 *             raise fw_exctype, fw_excval, fw_exctb             # <<<<<<<<<<<<<<
 *     finally:
 *         zvode_f_cb_info = None
 */
      throw PythonOps::MakeException(__pyx_context, __pyx_v_fw_exctype, __pyx_v_fw_excval, __pyx_v_fw_exctb);
    }
    __pyx_L16:;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":348
 *             raise fw_exctype, fw_excval, fw_exctb
 *     finally:
 *         zvode_f_cb_info = None             # <<<<<<<<<<<<<<
 *     return (y_, t, istate,)
 * 
 */
  finally {
    __pyx_v_5scipy_9integrate_4vode_zvode_f_cb_info = ((fw_CallbackInfo^)nullptr);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":349
 *     finally:
 *         zvode_f_cb_info = None
 *     return (y_, t, istate,)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_8 = __pyx_v_t;
  __pyx_t_1 = __pyx_v_istate;
  __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_y_), __pyx_t_8, __pyx_t_1});
  __pyx_t_8 = nullptr;
  __pyx_t_1 = nullptr;
  __pyx_r = __pyx_t_10;
  __pyx_t_10 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":353
 * 
 * 
 * cdef np.ndarray fw_asfortranarray(object value, int typenum, int ndim,             # <<<<<<<<<<<<<<
 *                                   np.npy_intp * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 */

static  NumpyDotNet::ndarray^ fw_asfortranarray(System::Object^ __pyx_v_value, int __pyx_v_typenum, int __pyx_v_ndim, __pyx_t_5numpy_npy_intp *__pyx_v_coerced_shape, int __pyx_v_copy, int __pyx_v_create, ref struct __pyx_opt_args_5scipy_9integrate_4vode_fw_asfortranarray ^__pyx_optional_args) {
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":356
 *                                   np.npy_intp * coerced_shape,
 *                                   bint copy, bint create, int alignment=1):
 *     cdef int flags = np.NPY_F_CONTIGUOUS | np.NPY_FORCECAST             # <<<<<<<<<<<<<<
 *     cdef np.ndarray result
 *     cdef np.npy_intp * in_shape
 */
  __pyx_v_flags = (NPY_F_CONTIGUOUS | NPY_FORCECAST);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":361
 *     cdef int in_ndim
 *     cdef int i
 *     if value is None:             # <<<<<<<<<<<<<<
 *         if create:
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 */
  __pyx_t_1 = (__pyx_v_value == nullptr);
  if (__pyx_t_1) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":362
 *     cdef int i
 *     if value is None:
 *         if create:             # <<<<<<<<<<<<<<
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 *         else:
 */
    if (__pyx_v_create) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":363
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":365
 *             result = np.PyArray_ZEROS(ndim, coerced_shape, typenum, 1)
 *         else:
 *             raise TypeError('Expected array but None provided')             # <<<<<<<<<<<<<<
 *     else:
 *         if ndim <= 1:
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
      __pyx_t_3 = __site_call1_365_27->Target(__site_call1_365_27, __pyx_context, __pyx_t_2, ((System::Object^)"Expected array but None provided"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
    }
    __pyx_L4:;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":367
 *             raise TypeError('Expected array but None provided')
 *     else:
 *         if ndim <= 1:             # <<<<<<<<<<<<<<
 *             # See http://projects.scipy.org/numpy/ticket/1691 for why this is needed
 *             flags |= np.NPY_C_CONTIGUOUS
 */
    __pyx_t_1 = (__pyx_v_ndim <= 1);
    if (__pyx_t_1) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":369
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":370
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
        __pyx_t_5 = __site_istrue_370_59->Target(__site_istrue_370_59, __pyx_t_3);
        __pyx_t_3 = nullptr;
        if (__pyx_t_5) {

          /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":371
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

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":373
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":374
 *             # mis-aligned array
 *             copy = True
 *         if copy:             # <<<<<<<<<<<<<<
 *             flags |= np.NPY_ENSURECOPY
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 */
    if (__pyx_v_copy) {

      /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":375
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

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":376
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

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":377
 *             flags |= np.NPY_ENSURECOPY
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 *     in_ndim = np.PyArray_NDIM(result)             # <<<<<<<<<<<<<<
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 */
  __pyx_t_8 = PyArray_NDIM(__pyx_v_result); 
  __pyx_t_9 = __site_cvt_cvt_int_377_29->Target(__site_cvt_cvt_int_377_29, __pyx_t_8);
  __pyx_t_8 = nullptr;
  __pyx_v_in_ndim = __pyx_t_9;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":378
 *         result = np.PyArray_FROMANY(value, typenum, 0, 0, flags)
 *     in_ndim = np.PyArray_NDIM(result)
 *     if in_ndim > ndim:             # <<<<<<<<<<<<<<
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)
 */
  __pyx_t_4 = (__pyx_v_in_ndim > __pyx_v_ndim);
  if (__pyx_t_4) {

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":379
 *     in_ndim = np.PyArray_NDIM(result)
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)             # <<<<<<<<<<<<<<
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):
 */
    __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_2 = __pyx_v_ndim;
    __pyx_t_3 = __site_op_mod_379_60->Target(__site_op_mod_379_60, ((System::Object^)"Dimension of array must be <= %d"), __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_call1_379_24->Target(__site_call1_379_24, __pyx_context, __pyx_t_8, ((System::Object^)__pyx_t_3));
    __pyx_t_8 = nullptr;
    __pyx_t_3 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L8;
  }
  __pyx_L8:;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":380
 *     if in_ndim > ndim:
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)             # <<<<<<<<<<<<<<
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]
 */
  __pyx_v_in_shape = PyArray_DIMS(__pyx_v_result);

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":381
 *         raise ValueError("Dimension of array must be <= %d" % ndim)
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):             # <<<<<<<<<<<<<<
 *         coerced_shape[i] = in_shape[i]
 *     for i in range(in_ndim, ndim):
 */
  __pyx_t_10 = __pyx_v_in_ndim;
  for (__pyx_t_11 = 0; __pyx_t_11 < __pyx_t_10; __pyx_t_11+=1) {
    __pyx_v_i = __pyx_t_11;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":382
 *     in_shape = np.PyArray_DIMS(result)
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]             # <<<<<<<<<<<<<<
 *     for i in range(in_ndim, ndim):
 *         # Pad shape with ones on right side if necessarry
 */
    (__pyx_v_coerced_shape[__pyx_v_i]) = (__pyx_v_in_shape[__pyx_v_i]);
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":383
 *     for i in range(in_ndim):
 *         coerced_shape[i] = in_shape[i]
 *     for i in range(in_ndim, ndim):             # <<<<<<<<<<<<<<
 *         # Pad shape with ones on right side if necessarry
 *         coerced_shape[i] = 1
 */
  __pyx_t_10 = __pyx_v_ndim;
  for (__pyx_t_11 = __pyx_v_in_ndim; __pyx_t_11 < __pyx_t_10; __pyx_t_11+=1) {
    __pyx_v_i = __pyx_t_11;

    /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":385
 *     for i in range(in_ndim, ndim):
 *         # Pad shape with ones on right side if necessarry
 *         coerced_shape[i] = 1             # <<<<<<<<<<<<<<
 *     return result
 * 
 */
    (__pyx_v_coerced_shape[__pyx_v_i]) = 1;
  }

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":386
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
  __site_call2_63_36 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_ARGS_65_36 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument(ArgumentType::List)})));
  __site_call1_69_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_exc_info_75_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc_info", false));
  __site_call0_75_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_call2_97_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_ARGS_99_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument(ArgumentType::List)})));
  __site_call1_103_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_exc_info_109_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc_info", false));
  __site_call0_109_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_cvt_cvt_fwr_dbl_t_117_0 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_fwr_dbl_t_117_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_fwi_integer_t_117_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_fwi_integer_t_117_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_fwi_integer_t_117_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_117_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_161_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_163_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_165_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_167_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_169_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_171_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_173_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_175_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_177_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_178_47 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_179_51 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_211_36 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_ARGS_213_36 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument(ArgumentType::List)})));
  __site_call1_217_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_exc_info_223_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc_info", false));
  __site_call0_223_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_call2_245_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_ARGS_247_35 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument(ArgumentType::List)})));
  __site_call1_251_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_exc_info_257_22 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "exc_info", false));
  __site_call0_257_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_cvt_cvt_fwr_dbl_t_265_0 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_fwr_dbl_t_265_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwr_dbl_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwr_dbl_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_fwi_integer_t_265_0 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_fwi_integer_t_265_0_1 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_fwi_integer_t_265_0_2 = CallSite< System::Func< CallSite^, System::Object^, fwi_integer_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, fwi_integer_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_265_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_312_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_314_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_316_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_318_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_320_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_322_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_324_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_326_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_328_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_330_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_332_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_333_47 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call2_334_51 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_call1_365_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_istrue_370_59 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_cvt_int_377_29 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mod_379_60 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_379_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
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
  __pyx_ptype_5scipy_9integrate_4vode_fw_CallbackInfo = safe_cast<Types::PythonType^>(dict["fw_CallbackInfo"]);
  /*--- Type import code ---*/
  // XXX skipping type ptr assignment for NumpyDotNet::ndarray
  // XXX skipping type ptr assignment for NumpyDotNet::dtype
  /*--- Create function pointers ---*/
  __pyx_delegate_val_dvode_f_cb_wrapper = gcnew __pyx_delegate_t_5scipy_9integrate_4vode_dvode_f_cb_wrapper(dvode_f_cb_wrapper);
  __pyx_function_pointer_dvode_f_cb_wrapper = (__pyx_fp_t_dvode_f_cb_wrapper)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_dvode_f_cb_wrapper).ToPointer());
  __pyx_delegate_val_dvode_jac_cb_wrapper = gcnew __pyx_delegate_t_5scipy_9integrate_4vode_dvode_jac_cb_wrapper(dvode_jac_cb_wrapper);
  __pyx_function_pointer_dvode_jac_cb_wrapper = (__pyx_fp_t_dvode_jac_cb_wrapper)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_dvode_jac_cb_wrapper).ToPointer());
  __pyx_delegate_val_zvode_f_cb_wrapper = gcnew __pyx_delegate_t_5scipy_9integrate_4vode_zvode_f_cb_wrapper(zvode_f_cb_wrapper);
  __pyx_function_pointer_zvode_f_cb_wrapper = (__pyx_fp_t_zvode_f_cb_wrapper)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_zvode_f_cb_wrapper).ToPointer());
  __pyx_delegate_val_zvode_jac_cb_wrapper = gcnew __pyx_delegate_t_5scipy_9integrate_4vode_zvode_jac_cb_wrapper(zvode_jac_cb_wrapper);
  __pyx_function_pointer_zvode_jac_cb_wrapper = (__pyx_fp_t_zvode_jac_cb_wrapper)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_zvode_jac_cb_wrapper).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":19
 * cimport vode_fc as fc
 * 
 * np.import_array()             # <<<<<<<<<<<<<<
 * import sys
 * 
 */
  import_array();

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":20
 * 
 * np.import_array()
 * import sys             # <<<<<<<<<<<<<<
 * 
 * cdef extern from "setjmp.h":
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "sys", -1));
  PythonOps::SetGlobal(__pyx_context, "sys", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":48
 * 
 * 
 * __all__ = ['dvode', 'zvode']             # <<<<<<<<<<<<<<
 * 
 * cdef fw_CallbackInfo dvode_f_cb_info
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{((System::Object^)"dvode"), ((System::Object^)"zvode")});
  PythonOps::SetGlobal(__pyx_context, "__all__", ((System::Object^)__pyx_t_1));
  __pyx_t_1 = nullptr;

  /* "/cygdrive/z/dev/scipy-refactor/scipy/integrate/vode.pyx":1
 * #cython: ccomplex=True             # <<<<<<<<<<<<<<
 * 
 * """The vode module was generated with Fwrap v0.2.0dev_00843a8.
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



static Types::PythonType^ __pyx_ptype_5scipy_9integrate_4vode_fw_CallbackInfo = nullptr;
static fw_CallbackInfo^ __pyx_v_5scipy_9integrate_4vode_dvode_f_cb_info = nullptr;
static fw_CallbackInfo^ __pyx_v_5scipy_9integrate_4vode_dvode_jac_cb_info = nullptr;
static fw_CallbackInfo^ __pyx_v_5scipy_9integrate_4vode_zvode_f_cb_info = nullptr;
static fw_CallbackInfo^ __pyx_v_5scipy_9integrate_4vode_zvode_jac_cb_info = nullptr;
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
[assembly: PythonModule("scipy__integrate__vode", module_vode::typeid)];
};
