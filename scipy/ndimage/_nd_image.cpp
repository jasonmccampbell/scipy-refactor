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
//#include "npy_cython_macros.h"
#include "stdio.h"
//#include "pythread.h"
#include "npy_arrayobject.h"
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

/* Cython code section 'filename_table' */

static const char *__pyx_f[] = {
  0
};
/* Cython code section 'utility_code_proto_before_types' */
/* Cython code section 'numeric_typedefs' */
/* Cython code section 'complex_type_declarations' */
/* Cython code section 'type_declarations' */

/* Type declarations */
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
static int __Pyx_GetBuffer(System::Object^ obj, NumpyDotNet::IExtBufferProtocol^& view, int flags);
static void __Pyx_ReleaseBuffer(NumpyDotNet::IExtBufferProtocol^ view);

Py_ssize_t __Pyx_zeros[] = {0};
Py_ssize_t __Pyx_minusones[] = {-1};
/* Cython code section 'module_declarations' */
/* Module declarations from cpython.version */
/* Module declarations from cpython.ref */
/* Module declarations from cpython.exc */
/* Module declarations from cpython.module */
/* Module declarations from cpython.mem */
/* Module declarations from cpython.tuple */
/* Module declarations from cpython.list */
/* Module declarations from libc.stdio */
/* Module declarations from cpython.object */
/* Module declarations from cpython.sequence */
/* Module declarations from cpython.mapping */
/* Module declarations from cpython.iterator */
/* Module declarations from cpython.type */
/* Module declarations from cpython.number */
/* Module declarations from cpython.int */
/* Module declarations from cpython.bool */
/* Module declarations from cpython.long */
/* Module declarations from cpython.float */
/* Module declarations from cpython.complex */
/* Module declarations from cpython.string */
/* Module declarations from cpython.unicode */
/* Module declarations from cpython.dict */
/* Module declarations from cpython.instance */
/* Module declarations from cpython.function */
/* Module declarations from cpython.method */
/* Module declarations from cpython.weakref */
/* Module declarations from cpython.getargs */
/* Module declarations from cpython.pythread */
/* Module declarations from cpython.cobject */
/* Module declarations from cpython.oldbuffer */
/* Module declarations from cpython.set */
/* Module declarations from cpython.buffer */
/* Module declarations from cpython.bytes */
/* Module declarations from cpython.pycapsule */
/* Module declarations from cpython */
/* Module declarations from numpy */
/* Module declarations from scipy.ndimage._nd_image */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_7ndimage_9_nd_image_incref(System::Object^);
static CYTHON_INLINE void incref(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5scipy_7ndimage_9_nd_image_decref(System::Object^);
static CYTHON_INLINE void decref(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate PyArray_Descr^ __pyx_delegate_t_5scipy_7ndimage_9_nd_image_DescrFromType(int);
static CYTHON_INLINE PyArray_Descr^ DescrFromType(int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate PyArrayObject^ __pyx_delegate_t_5scipy_7ndimage_9_nd_image_CheckFromAny(System::Object^, PyArray_Descr^, int, int, int, System::Object^);
static CYTHON_INLINE PyArrayObject^ CheckFromAny(System::Object^, PyArray_Descr^, int, int, int, System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate PyArrayObject^ __pyx_delegate_t_5scipy_7ndimage_9_nd_image_array_New(int, npy_intp *, int, npy_intp *, char *, int, int);
static CYTHON_INLINE PyArrayObject^ array_New(int, npy_intp *, int, npy_intp *, char *, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate NpyArray *__pyx_delegate_t_5scipy_7ndimage_9_nd_image_ARRAY(PyArrayObject^);
static CYTHON_INLINE NpyArray *ARRAY(PyArrayObject^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate PyArrayObject^ __pyx_delegate_t_5scipy_7ndimage_9_nd_image_Empty(int, npy_intp *, PyArray_Descr^, int);
static CYTHON_INLINE PyArrayObject^ Empty(int, npy_intp *, PyArray_Descr^, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate PyArray_Descr^ __pyx_delegate_t_5scipy_7ndimage_9_nd_image_DESCR(PyArrayObject^);
static CYTHON_INLINE PyArray_Descr^ DESCR(PyArrayObject^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_7ndimage_9_nd_image_is_callable(System::Object^);
static CYTHON_INLINE int is_callable(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_7ndimage_9_nd_image_raise_no_memory(void);
static CYTHON_INLINE int raise_no_memory(void); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate int __pyx_delegate_t_5scipy_7ndimage_9_nd_image_satisfies(NpyArray *, int, int);
static int satisfies(NpyArray *, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate PyArrayObject^ __pyx_delegate_t_5scipy_7ndimage_9_nd_image_NA_InputArray(System::Object^, int, int);
static PyArrayObject^ NA_InputArray(System::Object^, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate PyArrayObject^ __pyx_delegate_t_5scipy_7ndimage_9_nd_image_NA_IoArray(System::Object^, int, int);
static PyArrayObject^ NA_IoArray(System::Object^, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate PyArrayObject^ __pyx_delegate_t_5scipy_7ndimage_9_nd_image_NA_OutputArray(System::Object^, int, int);
static PyArrayObject^ NA_OutputArray(System::Object^, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate PyArrayObject^ __pyx_delegate_t_5scipy_7ndimage_9_nd_image_NI_ObjectToInputArray(System::Object^);
static PyArrayObject^ NI_ObjectToInputArray(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate PyArrayObject^ __pyx_delegate_t_5scipy_7ndimage_9_nd_image_NI_ObjectToOutputArray(System::Object^);
static PyArrayObject^ NI_ObjectToOutputArray(System::Object^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate PyArrayObject^ __pyx_delegate_t_5scipy_7ndimage_9_nd_image_NI_ObjectToIoArray(System::Object^);
static PyArrayObject^ NI_ObjectToIoArray(System::Object^); /*proto*/
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
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_278_51;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_280_51;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_282_54;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_284_53;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_303_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_312_21;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_312_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_313_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_317_23;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_345_0;
static  CallSite< System::Func< CallSite^, System::Object^, NI_ExtendMode >^ >^ __site_cvt_345_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_345_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >^ __site_cvt_345_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_353_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_353_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_359_24;
static  CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >^ __site_cvt_365_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_365_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_365_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_365_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >^ __site_cvt_365_0_4;
static  CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >^ __site_cvt_373_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_373_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_373_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_373_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >^ __site_cvt_373_0_4;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_373_0_5;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_382_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_382_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_382_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_399_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_399_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_399_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_421_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_422_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_422_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_423_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_424_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_424_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_425_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_ARGS_KWARGS_435_17;
static  CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >^ __site_cvt_438_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_438_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_438_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_438_0_3;
static  CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >^ __site_cvt_438_0_4;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_451_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_ARGS_KWARGS_461_22;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_double_462_18;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_465_0;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_465_0_1;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_478_27;
static  CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >^ __site_cvt_484_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_484_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_484_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >^ __site_cvt_492_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_492_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_500_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_500_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_511_32;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_511_39;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_512_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_ARGS_KWARGS_513_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_515_22;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_double_515_22;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_518_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_518_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_518_0_2;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_535_31;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_548_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_548_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, double >^ >^ __site_cvt_548_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_567_0;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_585_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_586_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_586_8;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_587_27;
static  CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >^ __site_cvt_npy_intp_587_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_589_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_590_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_590_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_591_44;
static  CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >^ __site_cvt_Py_ssize_t_591_44;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_591_63;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_591_68;
static  CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >^ __site_cvt_Py_ssize_t_591_68;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_591_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_592_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_593_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_593_22;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_595_22;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_608_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_641_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_641_0_1;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_641_0_2;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_641_0_3;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_662_46;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_668_0;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_668_0_1;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":124
 *     cdef void* NULL_dtype = NULL
 * 
 *     cdef inline void incref(object o):             # <<<<<<<<<<<<<<
 *         Py_INCREF(o)
 * 
 */

static CYTHON_INLINE void incref(System::Object^ __pyx_v_o) {

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":125
 * 
 *     cdef inline void incref(object o):
 *         Py_INCREF(o)             # <<<<<<<<<<<<<<
 * 
 *     cdef inline void decref(object o):
 */
  Py_INCREF(__pyx_v_o);

}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":127
 *         Py_INCREF(o)
 * 
 *     cdef inline void decref(object o):             # <<<<<<<<<<<<<<
 *         Py_DECREF(o)
 * 
 */

static CYTHON_INLINE void decref(System::Object^ __pyx_v_o) {

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":128
 * 
 *     cdef inline void decref(object o):
 *         Py_DECREF(o)             # <<<<<<<<<<<<<<
 * 
 *     cdef inline dtype DescrFromType(int typenum):
 */
  Py_DECREF(__pyx_v_o);

}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":130
 *         Py_DECREF(o)
 * 
 *     cdef inline dtype DescrFromType(int typenum):             # <<<<<<<<<<<<<<
 *         return PyArray_DescrFromType(typenum)
 * 
 */

static CYTHON_INLINE PyArray_Descr^ DescrFromType(int __pyx_v_typenum) {
  PyArray_Descr^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":131
 * 
 *     cdef inline dtype DescrFromType(int typenum):
 *         return PyArray_DescrFromType(typenum)             # <<<<<<<<<<<<<<
 * 
 *     cdef inline ndarray CheckFromAny(object op, dtype newtype, int min_depth, int max_depth,
 */
  __pyx_t_1 = ((System::Object^)PyArray_DescrFromType(__pyx_v_typenum)); 
  __pyx_r = ((PyArray_Descr^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":133
 *         return PyArray_DescrFromType(typenum)
 * 
 *     cdef inline ndarray CheckFromAny(object op, dtype newtype, int min_depth, int max_depth,             # <<<<<<<<<<<<<<
 *                                      int flags, object context):
 *         cdef PyArray_Descr* pdtype
 */

static CYTHON_INLINE PyArrayObject^ CheckFromAny(System::Object^ __pyx_v_op, PyArray_Descr^ __pyx_v_newtype, int __pyx_v_min_depth, int __pyx_v_max_depth, int __pyx_v_flags, System::Object^ __pyx_v_context) {
  PyArray_Descr *__pyx_v_pdtype;
  PyObject *__pyx_v_pcontext;
  PyArrayObject^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":137
 *         cdef PyArray_Descr* pdtype
 *         cdef PyObject* pcontext
 *         if newtype is None:             # <<<<<<<<<<<<<<
 *             decref(newtype)
 *             pdtype = NULL
 */
  __pyx_t_1 = (((System::Object^)__pyx_v_newtype) == nullptr);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":138
 *         cdef PyObject* pcontext
 *         if newtype is None:
 *             decref(newtype)             # <<<<<<<<<<<<<<
 *             pdtype = NULL
 *         else:
 */
    decref(((System::Object^)__pyx_v_newtype));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":139
 *         if newtype is None:
 *             decref(newtype)
 *             pdtype = NULL             # <<<<<<<<<<<<<<
 *         else:
 *             pdtype = <PyArray_Descr*>newtype
 */
    __pyx_v_pdtype = NULL;
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":141
 *             pdtype = NULL
 *         else:
 *             pdtype = <PyArray_Descr*>newtype             # <<<<<<<<<<<<<<
 *         if context is None:
 *             pcontext = NULL
 */
    __pyx_v_pdtype = ((PyArray_Descr *)__pyx_v_newtype);
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":142
 *         else:
 *             pdtype = <PyArray_Descr*>newtype
 *         if context is None:             # <<<<<<<<<<<<<<
 *             pcontext = NULL
 *         else:
 */
  __pyx_t_1 = (__pyx_v_context == nullptr);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":143
 *             pdtype = <PyArray_Descr*>newtype
 *         if context is None:
 *             pcontext = NULL             # <<<<<<<<<<<<<<
 *         else:
 *             pcontext = <PyObject*>context
 */
    __pyx_v_pcontext = NULL;
    goto __pyx_L4;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":145
 *             pcontext = NULL
 *         else:
 *             pcontext = <PyObject*>context             # <<<<<<<<<<<<<<
 *         return PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, pcontext)
 * 
 */
    __pyx_v_pcontext = ((PyObject *)__pyx_v_context);
  }
  __pyx_L4:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":146
 *         else:
 *             pcontext = <PyObject*>context
 *         return PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, pcontext)             # <<<<<<<<<<<<<<
 * 
 *     cdef inline ndarray array_New(int ndim, npy_intp *shape, int typenum, npy_intp *strides,
 */
  __pyx_t_2 = ((System::Object^)PyArray_CheckFromAny(__pyx_v_op, __pyx_v_newtype, __pyx_v_min_depth, __pyx_v_max_depth, __pyx_v_flags, __pyx_v_pcontext)); 
  __pyx_r = ((PyArrayObject^)__pyx_t_2);
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":148
 *         return PyArray_CheckFromAny(op, newtype, min_depth, max_depth, flags, pcontext)
 * 
 *     cdef inline ndarray array_New(int ndim, npy_intp *shape, int typenum, npy_intp *strides,             # <<<<<<<<<<<<<<
 *                                   char *data, int itemsize, int flags):
 *         return PyArray_New(&PyArray_Type, ndim, shape, typenum, strides, data,
 */

static CYTHON_INLINE PyArrayObject^ array_New(int __pyx_v_ndim, npy_intp *__pyx_v_shape, int __pyx_v_typenum, npy_intp *__pyx_v_strides, char *__pyx_v_data, int __pyx_v_itemsize, int __pyx_v_flags) {
  PyArrayObject^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":151
 *                                   char *data, int itemsize, int flags):
 *         return PyArray_New(&PyArray_Type, ndim, shape, typenum, strides, data,
 *                            itemsize, flags, NULL)             # <<<<<<<<<<<<<<
 * 
 *     cdef inline NpyArray* ARRAY(ndarray a):
 */
  __pyx_t_1 = ((System::Object^)PyArray_New((&PyArray_Type), __pyx_v_ndim, __pyx_v_shape, __pyx_v_typenum, __pyx_v_strides, __pyx_v_data, __pyx_v_itemsize, __pyx_v_flags, NULL)); 
  __pyx_r = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":153
 *                            itemsize, flags, NULL)
 * 
 *     cdef inline NpyArray* ARRAY(ndarray a):             # <<<<<<<<<<<<<<
 *         return PyArray_ARRAY(a)
 * 
 */

static CYTHON_INLINE NpyArray *ARRAY(PyArrayObject^ __pyx_v_a) {
  NpyArray *__pyx_r;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":154
 * 
 *     cdef inline NpyArray* ARRAY(ndarray a):
 *         return PyArray_ARRAY(a)             # <<<<<<<<<<<<<<
 * 
 *     cdef inline ndarray Empty(int nd, npy_intp * dims, dtype descr, int fortran):
 */
  __pyx_r = PyArray_ARRAY(__pyx_v_a);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":156
 *         return PyArray_ARRAY(a)
 * 
 *     cdef inline ndarray Empty(int nd, npy_intp * dims, dtype descr, int fortran):             # <<<<<<<<<<<<<<
 *         return PyArray_Empty(nd, dims, descr, fortran)
 * 
 */

static CYTHON_INLINE PyArrayObject^ Empty(int __pyx_v_nd, npy_intp *__pyx_v_dims, PyArray_Descr^ __pyx_v_descr, int __pyx_v_fortran) {
  PyArrayObject^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":157
 * 
 *     cdef inline ndarray Empty(int nd, npy_intp * dims, dtype descr, int fortran):
 *         return PyArray_Empty(nd, dims, descr, fortran)             # <<<<<<<<<<<<<<
 * 
 *     cdef inline dtype DESCR(ndarray a):
 */
  __pyx_t_1 = ((System::Object^)PyArray_Empty(__pyx_v_nd, __pyx_v_dims, __pyx_v_descr, __pyx_v_fortran)); 
  __pyx_r = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":159
 *         return PyArray_Empty(nd, dims, descr, fortran)
 * 
 *     cdef inline dtype DESCR(ndarray a):             # <<<<<<<<<<<<<<
 *         return PyArray_DESCR(a)
 * 
 */

static CYTHON_INLINE PyArray_Descr^ DESCR(PyArrayObject^ __pyx_v_a) {
  PyArray_Descr^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":160
 * 
 *     cdef inline dtype DESCR(ndarray a):
 *         return PyArray_DESCR(a)             # <<<<<<<<<<<<<<
 * 
 *     cdef inline bint is_callable(obj):
 */
  __pyx_t_1 = ((System::Object^)PyArray_DESCR(__pyx_v_a)); 
  __pyx_r = ((PyArray_Descr^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":162
 *         return PyArray_DESCR(a)
 * 
 *     cdef inline bint is_callable(obj):             # <<<<<<<<<<<<<<
 *         return PyCallable_Check(obj)
 * 
 */

static CYTHON_INLINE int is_callable(System::Object^ __pyx_v_obj) {
  int __pyx_r;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":163
 * 
 *     cdef inline bint is_callable(obj):
 *         return PyCallable_Check(obj)             # <<<<<<<<<<<<<<
 * 
 *     cdef inline int raise_no_memory() except 0:
 */
  __pyx_r = PyCallable_Check(__pyx_v_obj);
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":165
 *         return PyCallable_Check(obj)
 * 
 *     cdef inline int raise_no_memory() except 0:             # <<<<<<<<<<<<<<
 *         PyErr_NoMemory()
 *         return 1
 */

static CYTHON_INLINE int raise_no_memory(void) {
  int __pyx_r;
  PyObject *__pyx_t_1;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":166
 * 
 *     cdef inline int raise_no_memory() except 0:
 *         PyErr_NoMemory()             # <<<<<<<<<<<<<<
 *         return 1
 * 
 */
  XXX skipping exception checks: __pyx_t_1 == NULL
  __pyx_t_1 = PyErr_NoMemory(); 

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":167
 *     cdef inline int raise_no_memory() except 0:
 *         PyErr_NoMemory()
 *         return 1             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = 1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":273
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":275
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":276
 *     cdef bint type_ok
 *     type_ok = (typenum == -1) or (NpyArray_TYPE(a) == typenum)
 *     if NpyArray_ISCARRAY(a):             # <<<<<<<<<<<<<<
 *         return type_ok
 *     if NpyArray_ISBYTESWAPPED(a) and (requirements & NPY_NOTSWAPPED):
 */
  __pyx_t_3 = NpyArray_ISCARRAY(__pyx_v_a);
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":277
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":278
 *     if NpyArray_ISCARRAY(a):
 *         return type_ok
 *     if NpyArray_ISBYTESWAPPED(a) and (requirements & NPY_NOTSWAPPED):             # <<<<<<<<<<<<<<
 *         return False
 *     if not NpyArray_ISALIGNED(a) and (requirements & NPY_ALIGNED):
 */
  __pyx_t_3 = NpyArray_ISBYTESWAPPED(__pyx_v_a);
  if (__pyx_t_3) {
    __pyx_t_4 = (__pyx_v_requirements & NPY_NOTSWAPPED);
    __pyx_t_1 = __site_istrue_278_51->Target(__site_istrue_278_51, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_2 = __pyx_t_1;
  } else {
    __pyx_t_2 = __pyx_t_3;
  }
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":279
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":280
 *     if NpyArray_ISBYTESWAPPED(a) and (requirements & NPY_NOTSWAPPED):
 *         return False
 *     if not NpyArray_ISALIGNED(a) and (requirements & NPY_ALIGNED):             # <<<<<<<<<<<<<<
 *         return False
 *     if not NpyArray_ISCONTIGUOUS(a) and (requirements & NPY_CONTIGUOUS):
 */
  __pyx_t_2 = (!NpyArray_ISALIGNED(__pyx_v_a));
  if (__pyx_t_2) {
    __pyx_t_4 = (__pyx_v_requirements & NPY_ALIGNED);
    __pyx_t_3 = __site_istrue_280_51->Target(__site_istrue_280_51, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_1 = __pyx_t_3;
  } else {
    __pyx_t_1 = __pyx_t_2;
  }
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":281
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":282
 *     if not NpyArray_ISALIGNED(a) and (requirements & NPY_ALIGNED):
 *         return False
 *     if not NpyArray_ISCONTIGUOUS(a) and (requirements & NPY_CONTIGUOUS):             # <<<<<<<<<<<<<<
 *         return False
 *     if not NpyArray_ISWRITEABLE(a) and (requirements & NPY_WRITEABLE):
 */
  __pyx_t_1 = (!NpyArray_ISCONTIGUOUS(__pyx_v_a));
  if (__pyx_t_1) {
    __pyx_t_4 = (__pyx_v_requirements & NPY_CONTIGUOUS);
    __pyx_t_2 = __site_istrue_282_54->Target(__site_istrue_282_54, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_3 = __pyx_t_2;
  } else {
    __pyx_t_3 = __pyx_t_1;
  }
  if (__pyx_t_3) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":283
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":284
 *     if not NpyArray_ISCONTIGUOUS(a) and (requirements & NPY_CONTIGUOUS):
 *         return False
 *     if not NpyArray_ISWRITEABLE(a) and (requirements & NPY_WRITEABLE):             # <<<<<<<<<<<<<<
 *         return False
 *     if requirements & NPY_ENSURECOPY:
 */
  __pyx_t_3 = (!NpyArray_ISWRITEABLE(__pyx_v_a));
  if (__pyx_t_3) {
    __pyx_t_4 = (__pyx_v_requirements & NPY_WRITEABLE);
    __pyx_t_1 = __site_istrue_284_53->Target(__site_istrue_284_53, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_2 = __pyx_t_1;
  } else {
    __pyx_t_2 = __pyx_t_3;
  }
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":285
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":286
 *     if not NpyArray_ISWRITEABLE(a) and (requirements & NPY_WRITEABLE):
 *         return False
 *     if requirements & NPY_ENSURECOPY:             # <<<<<<<<<<<<<<
 *         return False
 *     return type_ok
 */
  __pyx_t_5 = (__pyx_v_requirements & NPY_ENSURECOPY);
  if (__pyx_t_5) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":287
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":288
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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":291
 * 
 * # typenum is either a NumPy type number, *or* -1 for "any type"
 * cdef ndarray NA_InputArray(object a, int typenum, int requires):             # <<<<<<<<<<<<<<
 *     cdef dtype descr
 *     if typenum == -1:
 */

static  PyArrayObject^ NA_InputArray(System::Object^ __pyx_v_a, int __pyx_v_typenum, int __pyx_v_requires) {
  PyArray_Descr^ __pyx_v_descr;
  PyArrayObject^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  __pyx_v_descr = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":293
 * cdef ndarray NA_InputArray(object a, int typenum, int requires):
 *     cdef dtype descr
 *     if typenum == -1:             # <<<<<<<<<<<<<<
 *         descr = None
 *     else:
 */
  __pyx_t_1 = (__pyx_v_typenum == -1);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":294
 *     cdef dtype descr
 *     if typenum == -1:
 *         descr = None             # <<<<<<<<<<<<<<
 *     else:
 *         descr = DescrFromType(typenum)
 */
    __pyx_v_descr = ((PyArray_Descr^)nullptr);
    goto __pyx_L3;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":296
 *         descr = None
 *     else:
 *         descr = DescrFromType(typenum)             # <<<<<<<<<<<<<<
 *     incref(descr) # CheckFromAny steals reference
 *     return CheckFromAny(a, descr, 0, 0, requires, None)
 */
    __pyx_t_2 = ((System::Object^)DescrFromType(__pyx_v_typenum)); 
    __pyx_v_descr = ((PyArray_Descr^)__pyx_t_2);
    __pyx_t_2 = nullptr;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":297
 *     else:
 *         descr = DescrFromType(typenum)
 *     incref(descr) # CheckFromAny steals reference             # <<<<<<<<<<<<<<
 *     return CheckFromAny(a, descr, 0, 0, requires, None)
 * 
 */
  incref(((System::Object^)__pyx_v_descr));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":298
 *         descr = DescrFromType(typenum)
 *     incref(descr) # CheckFromAny steals reference
 *     return CheckFromAny(a, descr, 0, 0, requires, None)             # <<<<<<<<<<<<<<
 * 
 * cdef ndarray NA_IoArray(object a, int typenum, int requires):
 */
  __pyx_t_2 = ((System::Object^)CheckFromAny(__pyx_v_a, __pyx_v_descr, 0, 0, __pyx_v_requires, nullptr)); 
  __pyx_r = ((PyArrayObject^)__pyx_t_2);
  __pyx_t_2 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":300
 *     return CheckFromAny(a, descr, 0, 0, requires, None)
 * 
 * cdef ndarray NA_IoArray(object a, int typenum, int requires):             # <<<<<<<<<<<<<<
 *     cdef ndarray shadow = NA_InputArray(a, typenum, requires | NPY_UPDATEIFCOPY)
 *     if not NpyArray_ISWRITEABLE(ARRAY(shadow)):
 */

static  PyArrayObject^ NA_IoArray(System::Object^ __pyx_v_a, int __pyx_v_typenum, int __pyx_v_requires) {
  PyArrayObject^ __pyx_v_shadow = nullptr;
  PyArrayObject^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":301
 * 
 * cdef ndarray NA_IoArray(object a, int typenum, int requires):
 *     cdef ndarray shadow = NA_InputArray(a, typenum, requires | NPY_UPDATEIFCOPY)             # <<<<<<<<<<<<<<
 *     if not NpyArray_ISWRITEABLE(ARRAY(shadow)):
 *         raise ValueError("NA_IoArray: I/O array must be writable array")
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_a, __pyx_v_typenum, (__pyx_v_requires | NPY_UPDATEIFCOPY))); 
  __pyx_v_shadow = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":302
 * cdef ndarray NA_IoArray(object a, int typenum, int requires):
 *     cdef ndarray shadow = NA_InputArray(a, typenum, requires | NPY_UPDATEIFCOPY)
 *     if not NpyArray_ISWRITEABLE(ARRAY(shadow)):             # <<<<<<<<<<<<<<
 *         raise ValueError("NA_IoArray: I/O array must be writable array")
 *     return shadow
 */
  __pyx_t_2 = (!NpyArray_ISWRITEABLE(ARRAY(__pyx_v_shadow)));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":303
 *     cdef ndarray shadow = NA_InputArray(a, typenum, requires | NPY_UPDATEIFCOPY)
 *     if not NpyArray_ISWRITEABLE(ARRAY(shadow)):
 *         raise ValueError("NA_IoArray: I/O array must be writable array")             # <<<<<<<<<<<<<<
 *     return shadow
 * 
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_303_24->Target(__site_call1_303_24, __pyx_context, __pyx_t_1, ((System::Object^)"NA_IoArray: I/O array must be writable array"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":304
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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":306
 *     return shadow
 * 
 * cdef ndarray NA_OutputArray(object a_obj, int typenum, int requires):             # <<<<<<<<<<<<<<
 *     cdef dtype descr
 *     cdef NpyArray* a
 */

static  PyArrayObject^ NA_OutputArray(System::Object^ __pyx_v_a_obj, int __pyx_v_typenum, int __pyx_v_requires) {
  PyArray_Descr^ __pyx_v_descr;
  NpyArray *__pyx_v_a;
  NpyArray *__pyx_v_ret;
  PyArrayObject^ __pyx_v_ret_obj;
  PyArrayObject^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  int __pyx_t_4;
  __pyx_v_descr = nullptr;
  __pyx_v_ret_obj = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":312
 *     cdef ndarray ret_obj
 * 
 *     if not isinstance(a_obj, ndarray):             # <<<<<<<<<<<<<<
 *         raise TypeError('NA_OutputArray: ndarray instance expected')
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "isinstance");
  __pyx_t_2 = __site_call2_312_21->Target(__site_call2_312_21, __pyx_context, __pyx_t_1, __pyx_v_a_obj, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_7ndimage_9_nd_image_ndarray)));
  __pyx_t_1 = nullptr;
  __pyx_t_3 = __site_istrue_312_21->Target(__site_istrue_312_21, __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_4 = (!__pyx_t_3);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":313
 * 
 *     if not isinstance(a_obj, ndarray):
 *         raise TypeError('NA_OutputArray: ndarray instance expected')             # <<<<<<<<<<<<<<
 * 
 *     a = ARRAY(a_obj)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_1 = __site_call1_313_23->Target(__site_call1_313_23, __pyx_context, __pyx_t_2, ((System::Object^)"NA_OutputArray: ndarray instance expected"));
    __pyx_t_2 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
    __pyx_t_1 = nullptr;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":315
 *         raise TypeError('NA_OutputArray: ndarray instance expected')
 * 
 *     a = ARRAY(a_obj)             # <<<<<<<<<<<<<<
 *     if not NpyArray_ISWRITEABLE(a):
 *         raise TypeError('NA_OutputArray: only writeable arrays work for output.')
 */
  if (__pyx_v_a_obj == nullptr || dynamic_cast<PyArrayObject^>(__pyx_v_a_obj) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_a = ARRAY(((PyArrayObject^)__pyx_v_a_obj));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":316
 * 
 *     a = ARRAY(a_obj)
 *     if not NpyArray_ISWRITEABLE(a):             # <<<<<<<<<<<<<<
 *         raise TypeError('NA_OutputArray: only writeable arrays work for output.')
 *     if satisfies(a, requires, typenum):
 */
  __pyx_t_4 = (!NpyArray_ISWRITEABLE(__pyx_v_a));
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":317
 *     a = ARRAY(a_obj)
 *     if not NpyArray_ISWRITEABLE(a):
 *         raise TypeError('NA_OutputArray: only writeable arrays work for output.')             # <<<<<<<<<<<<<<
 *     if satisfies(a, requires, typenum):
 *         return a_obj
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "TypeError");
    __pyx_t_2 = __site_call1_317_23->Target(__site_call1_317_23, __pyx_context, __pyx_t_1, ((System::Object^)"NA_OutputArray: only writeable arrays work for output."));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
    __pyx_t_2 = nullptr;
    goto __pyx_L4;
  }
  __pyx_L4:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":318
 *     if not NpyArray_ISWRITEABLE(a):
 *         raise TypeError('NA_OutputArray: only writeable arrays work for output.')
 *     if satisfies(a, requires, typenum):             # <<<<<<<<<<<<<<
 *         return a_obj
 *     if typenum == -1:
 */
  __pyx_t_4 = satisfies(__pyx_v_a, __pyx_v_requires, __pyx_v_typenum);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":319
 *         raise TypeError('NA_OutputArray: only writeable arrays work for output.')
 *     if satisfies(a, requires, typenum):
 *         return a_obj             # <<<<<<<<<<<<<<
 *     if typenum == -1:
 *         descr = DESCR(a_obj)
 */
    if (__pyx_v_a_obj == nullptr || dynamic_cast<PyArrayObject^>(__pyx_v_a_obj) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_r = ((PyArrayObject^)__pyx_v_a_obj);
    goto __pyx_L0;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":320
 *     if satisfies(a, requires, typenum):
 *         return a_obj
 *     if typenum == -1:             # <<<<<<<<<<<<<<
 *         descr = DESCR(a_obj)
 *     else:
 */
  __pyx_t_4 = (__pyx_v_typenum == -1);
  if (__pyx_t_4) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":321
 *         return a_obj
 *     if typenum == -1:
 *         descr = DESCR(a_obj)             # <<<<<<<<<<<<<<
 *     else:
 *         descr = DescrFromType(typenum)
 */
    if (__pyx_v_a_obj == nullptr || dynamic_cast<PyArrayObject^>(__pyx_v_a_obj) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_2 = ((System::Object^)DESCR(((PyArrayObject^)__pyx_v_a_obj))); 
    __pyx_v_descr = ((PyArray_Descr^)__pyx_t_2);
    __pyx_t_2 = nullptr;
    goto __pyx_L6;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":323
 *         descr = DESCR(a_obj)
 *     else:
 *         descr = DescrFromType(typenum)             # <<<<<<<<<<<<<<
 *     incref(descr) # Empty steals reference
 *     ret_obj = Empty(NpyArray_NDIM(a), NpyArray_DIMS(a), descr, 0)
 */
    __pyx_t_2 = ((System::Object^)DescrFromType(__pyx_v_typenum)); 
    __pyx_v_descr = ((PyArray_Descr^)__pyx_t_2);
    __pyx_t_2 = nullptr;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":324
 *     else:
 *         descr = DescrFromType(typenum)
 *     incref(descr) # Empty steals reference             # <<<<<<<<<<<<<<
 *     ret_obj = Empty(NpyArray_NDIM(a), NpyArray_DIMS(a), descr, 0)
 *     ret = ARRAY(ret_obj)
 */
  incref(((System::Object^)__pyx_v_descr));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":325
 *         descr = DescrFromType(typenum)
 *     incref(descr) # Empty steals reference
 *     ret_obj = Empty(NpyArray_NDIM(a), NpyArray_DIMS(a), descr, 0)             # <<<<<<<<<<<<<<
 *     ret = ARRAY(ret_obj)
 *     NpyArray_SETFLAGS(ret, (NpyArray_FLAGS(ret) | NPY_UPDATEIFCOPY) & ~NPY_WRITEABLE)
 */
  __pyx_t_2 = ((System::Object^)Empty(NpyArray_NDIM(__pyx_v_a), NpyArray_DIMS(__pyx_v_a), __pyx_v_descr, 0)); 
  __pyx_v_ret_obj = ((PyArrayObject^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":326
 *     incref(descr) # Empty steals reference
 *     ret_obj = Empty(NpyArray_NDIM(a), NpyArray_DIMS(a), descr, 0)
 *     ret = ARRAY(ret_obj)             # <<<<<<<<<<<<<<
 *     NpyArray_SETFLAGS(ret, (NpyArray_FLAGS(ret) | NPY_UPDATEIFCOPY) & ~NPY_WRITEABLE)
 *     incref(a_obj)
 */
  __pyx_v_ret = ARRAY(__pyx_v_ret_obj);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":327
 *     ret_obj = Empty(NpyArray_NDIM(a), NpyArray_DIMS(a), descr, 0)
 *     ret = ARRAY(ret_obj)
 *     NpyArray_SETFLAGS(ret, (NpyArray_FLAGS(ret) | NPY_UPDATEIFCOPY) & ~NPY_WRITEABLE)             # <<<<<<<<<<<<<<
 *     incref(a_obj)
 *     NpyArray_SETBASE(ret, a_obj)
 */
  NpyArray_SETFLAGS(__pyx_v_ret, ((NpyArray_FLAGS(__pyx_v_ret) | NPY_UPDATEIFCOPY) & (~NPY_WRITEABLE)));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":328
 *     ret = ARRAY(ret_obj)
 *     NpyArray_SETFLAGS(ret, (NpyArray_FLAGS(ret) | NPY_UPDATEIFCOPY) & ~NPY_WRITEABLE)
 *     incref(a_obj)             # <<<<<<<<<<<<<<
 *     NpyArray_SETBASE(ret, a_obj)
 *     return ret_obj
 */
  incref(__pyx_v_a_obj);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":329
 *     NpyArray_SETFLAGS(ret, (NpyArray_FLAGS(ret) | NPY_UPDATEIFCOPY) & ~NPY_WRITEABLE)
 *     incref(a_obj)
 *     NpyArray_SETBASE(ret, a_obj)             # <<<<<<<<<<<<<<
 *     return ret_obj
 * 
 */
  NpyArray_SETBASE(__pyx_v_ret, __pyx_v_a_obj);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":330
 *     incref(a_obj)
 *     NpyArray_SETBASE(ret, a_obj)
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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":332
 *     return ret_obj
 * 
 * cdef ndarray NI_ObjectToInputArray(object a):             # <<<<<<<<<<<<<<
 *     return NA_InputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)
 * 
 */

static  PyArrayObject^ NI_ObjectToInputArray(System::Object^ __pyx_v_a) {
  PyArrayObject^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":333
 * 
 * cdef ndarray NI_ObjectToInputArray(object a):
 *     return NA_InputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)             # <<<<<<<<<<<<<<
 * 
 * cdef ndarray NI_ObjectToOutputArray(object a):
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_a, -1, (NPY_ALIGNED | NPY_NOTSWAPPED))); 
  __pyx_r = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":335
 *     return NA_InputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)
 * 
 * cdef ndarray NI_ObjectToOutputArray(object a):             # <<<<<<<<<<<<<<
 *     return NA_OutputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)
 * 
 */

static  PyArrayObject^ NI_ObjectToOutputArray(System::Object^ __pyx_v_a) {
  PyArrayObject^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":336
 * 
 * cdef ndarray NI_ObjectToOutputArray(object a):
 *     return NA_OutputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)             # <<<<<<<<<<<<<<
 * 
 * cdef ndarray NI_ObjectToIoArray(object a):
 */
  __pyx_t_1 = ((System::Object^)NA_OutputArray(__pyx_v_a, -1, (NPY_ALIGNED | NPY_NOTSWAPPED))); 
  __pyx_r = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":338
 *     return NA_OutputArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)
 * 
 * cdef ndarray NI_ObjectToIoArray(object a):             # <<<<<<<<<<<<<<
 *     return NA_IoArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)
 * 
 */

static  PyArrayObject^ NI_ObjectToIoArray(System::Object^ __pyx_v_a) {
  PyArrayObject^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":339
 * 
 * cdef ndarray NI_ObjectToIoArray(object a):
 *     return NA_IoArray(a, -1, NPY_ALIGNED | NPY_NOTSWAPPED)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = ((System::Object^)NA_IoArray(__pyx_v_a, -1, (NPY_ALIGNED | NPY_NOTSWAPPED))); 
  __pyx_r = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":345
 * # Wrappers
 * #
 * def correlate1d(input, weights, int axis, output, NI_ExtendMode mode, double cval,             # <<<<<<<<<<<<<<
 *                 ni_size_t origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 */

static System::Object^ correlate1d(System::Object^ input, System::Object^ weights, System::Object^ axis, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_weights = nullptr;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  NI_ExtendMode __pyx_v_mode;
  double __pyx_v_cval;
  ni_size_t __pyx_v_origin;
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_weights_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_weights = weights;
  __pyx_v_axis = __site_cvt_345_0->Target(__site_cvt_345_0, axis);
  __pyx_v_output = output;
  __pyx_v_mode = ((NI_ExtendMode)__site_cvt_345_0_1->Target(__site_cvt_345_0_1, mode));
  __pyx_v_cval = __site_cvt_345_0_2->Target(__site_cvt_345_0_2, cval);
  __pyx_v_origin = __site_cvt_345_0_3->Target(__site_cvt_345_0_3, origin);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":347
 * def correlate1d(input, weights, int axis, output, NI_ExtendMode mode, double cval,
 *                 ni_size_t origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":348
 *                 ni_size_t origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_Correlate1D(ARRAY(input_), ARRAY(weights_), axis,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_weights)); 
  __pyx_v_weights_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":349
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_Correlate1D(ARRAY(input_), ARRAY(weights_), axis,
 *                    ARRAY(output_), <NI_ExtendMode>mode, cval, origin)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":351
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_Correlate1D(ARRAY(input_), ARRAY(weights_), axis,
 *                    ARRAY(output_), <NI_ExtendMode>mode, cval, origin)             # <<<<<<<<<<<<<<
 * 
 * def correlate(input, weights, output, int mode, double cval, origin):
 */
  XXX skipping exception checks: __pyx_t_2 == 0
  __pyx_t_2 = NI_Correlate1D(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_weights_), __pyx_v_axis, ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, __pyx_v_origin); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":353
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
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_weights_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  PyArrayObject^ __pyx_v_origin_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  __pyx_v_input = input;
  __pyx_v_weights = weights;
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_353_0->Target(__site_cvt_353_0, mode);
  __pyx_v_cval = __site_cvt_353_0_1->Target(__site_cvt_353_0_1, cval);
  __pyx_v_origin = origin;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":354
 * 
 * def correlate(input, weights, output, int mode, double cval, origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":355
 * def correlate(input, weights, output, int mode, double cval, origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_weights)); 
  __pyx_v_weights_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":356
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 *     if NpyArray_DIMS(ARRAY(origin_))[0] != NpyArray_NDIM(ARRAY(input_)):
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":357
 *     cdef ndarray weights_ = NI_ObjectToInputArray(weights)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     if NpyArray_DIMS(ARRAY(origin_))[0] != NpyArray_NDIM(ARRAY(input_)):
 *         raise ValueError('origin.shape[0] != input.ndim')
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origin, NPY_INTP, NPY_CARRAY)); 
  __pyx_v_origin_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":358
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 *     if NpyArray_DIMS(ARRAY(origin_))[0] != NpyArray_NDIM(ARRAY(input_)):             # <<<<<<<<<<<<<<
 *         raise ValueError('origin.shape[0] != input.ndim')
 *     NI_Correlate(ARRAY(input_), ARRAY(weights_),
 */
  __pyx_t_2 = ((NpyArray_DIMS(ARRAY(__pyx_v_origin_))[0]) != NpyArray_NDIM(ARRAY(__pyx_v_input_)));
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":359
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 *     if NpyArray_DIMS(ARRAY(origin_))[0] != NpyArray_NDIM(ARRAY(input_)):
 *         raise ValueError('origin.shape[0] != input.ndim')             # <<<<<<<<<<<<<<
 *     NI_Correlate(ARRAY(input_), ARRAY(weights_),
 *                  ARRAY(output_), <NI_ExtendMode>mode, cval,
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");
    __pyx_t_3 = __site_call1_359_24->Target(__site_call1_359_24, __pyx_context, __pyx_t_1, ((System::Object^)"origin.shape[0] != input.ndim"));
    __pyx_t_1 = nullptr;
    throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
    __pyx_t_3 = nullptr;
    goto __pyx_L5;
  }
  __pyx_L5:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":362
 *     NI_Correlate(ARRAY(input_), ARRAY(weights_),
 *                  ARRAY(output_), <NI_ExtendMode>mode, cval,
 *                  <npy_intp*>NpyArray_DATA(ARRAY(origin_)))             # <<<<<<<<<<<<<<
 * 
 * 
 */
  XXX skipping exception checks: __pyx_t_4 == 0
  __pyx_t_4 = NI_Correlate(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_weights_), ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, ((npy_intp *)NpyArray_DATA(ARRAY(__pyx_v_origin_)))); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":365
 * 
 * 
 * def uniform_filter1d(object input, ni_size_t filter_size, int axis,             # <<<<<<<<<<<<<<
 *                      object output, int mode, double cval,
 *                      ni_size_t origin):
 */

static System::Object^ uniform_filter1d(System::Object^ input, System::Object^ filter_size, System::Object^ axis, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin) {
  System::Object^ __pyx_v_input = nullptr;
  ni_size_t __pyx_v_filter_size;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_mode;
  double __pyx_v_cval;
  ni_size_t __pyx_v_origin;
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_filter_size = __site_cvt_365_0->Target(__site_cvt_365_0, filter_size);
  __pyx_v_axis = __site_cvt_365_0_1->Target(__site_cvt_365_0_1, axis);
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_365_0_2->Target(__site_cvt_365_0_2, mode);
  __pyx_v_cval = __site_cvt_365_0_3->Target(__site_cvt_365_0_3, cval);
  __pyx_v_origin = __site_cvt_365_0_4->Target(__site_cvt_365_0_4, origin);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":368
 *                      object output, int mode, double cval,
 *                      ni_size_t origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_UniformFilter1D(ARRAY(input_), filter_size, axis,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":369
 *                      ni_size_t origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_UniformFilter1D(ARRAY(input_), filter_size, axis,
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":371
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_UniformFilter1D(ARRAY(input_), filter_size, axis,
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)             # <<<<<<<<<<<<<<
 * 
 * def min_or_max_filter1d(object input, ni_size_t filter_size, int axis,
 */
  XXX skipping exception checks: __pyx_t_2 == 0
  __pyx_t_2 = NI_UniformFilter1D(ARRAY(__pyx_v_input_), __pyx_v_filter_size, __pyx_v_axis, ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, __pyx_v_origin); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":373
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)
 * 
 * def min_or_max_filter1d(object input, ni_size_t filter_size, int axis,             # <<<<<<<<<<<<<<
 *                         object output, int mode, double cval,
 *                         ni_size_t origin, int minimum):
 */

static System::Object^ min_or_max_filter1d(System::Object^ input, System::Object^ filter_size, System::Object^ axis, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin, System::Object^ minimum) {
  System::Object^ __pyx_v_input = nullptr;
  ni_size_t __pyx_v_filter_size;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_mode;
  double __pyx_v_cval;
  ni_size_t __pyx_v_origin;
  int __pyx_v_minimum;
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_filter_size = __site_cvt_373_0->Target(__site_cvt_373_0, filter_size);
  __pyx_v_axis = __site_cvt_373_0_1->Target(__site_cvt_373_0_1, axis);
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_373_0_2->Target(__site_cvt_373_0_2, mode);
  __pyx_v_cval = __site_cvt_373_0_3->Target(__site_cvt_373_0_3, cval);
  __pyx_v_origin = __site_cvt_373_0_4->Target(__site_cvt_373_0_4, origin);
  __pyx_v_minimum = __site_cvt_373_0_5->Target(__site_cvt_373_0_5, minimum);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":376
 *                         object output, int mode, double cval,
 *                         ni_size_t origin, int minimum):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_MinOrMaxFilter1D(ARRAY(input_), filter_size, axis,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":377
 *                         ni_size_t origin, int minimum):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_MinOrMaxFilter1D(ARRAY(input_), filter_size, axis,
 *                         ARRAY(output_), <NI_ExtendMode>mode, cval,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":380
 *     NI_MinOrMaxFilter1D(ARRAY(input_), filter_size, axis,
 *                         ARRAY(output_), <NI_ExtendMode>mode, cval,
 *                         origin, minimum)             # <<<<<<<<<<<<<<
 * 
 * def min_or_max_filter(object input, object footprint, object structure,
 */
  XXX skipping exception checks: __pyx_t_2 == 0
  __pyx_t_2 = NI_MinOrMaxFilter1D(ARRAY(__pyx_v_input_), __pyx_v_filter_size, __pyx_v_axis, ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, __pyx_v_origin, __pyx_v_minimum); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":382
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
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_footprint_ = nullptr;
  PyArrayObject^ __pyx_v_structure_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  PyArrayObject^ __pyx_v_origin_ = nullptr;
  NumpyDotNet::IExtBufferProtocol^ __pyx_bstruct_origin_;
  Py_ssize_t __pyx_bstride_0_origin_ = 0;
  Py_ssize_t __pyx_bshape_0_origin_ = 0;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  void *__pyx_t_4;
  int __pyx_t_5;
  __pyx_v_input = input;
  __pyx_v_footprint = footprint;
  __pyx_v_structure = structure;
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_382_0->Target(__site_cvt_382_0, mode);
  __pyx_v_cval = __site_cvt_382_0_1->Target(__site_cvt_382_0_1, cval);
  __pyx_v_origin = origin;
  __pyx_v_minimum = __site_cvt_382_0_2->Target(__site_cvt_382_0_2, minimum);
  __pyx_bstruct_origin_ = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":385
 *                       object output, int mode, double cval, object origin,
 *                       int minimum):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray structure_ = None if structure is None else NI_ObjectToInputArray(structure)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":386
 *                       int minimum):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)             # <<<<<<<<<<<<<<
 *     cdef ndarray structure_ = None if structure is None else NI_ObjectToInputArray(structure)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_footprint)); 
  __pyx_v_footprint_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":387
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
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_structure_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":388
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray structure_ = None if structure is None else NI_ObjectToInputArray(structure)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef ndarray[npy_intp, mode='c'] origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 *     NI_MinOrMaxFilter(ARRAY(input_),
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":389
 *     cdef ndarray structure_ = None if structure is None else NI_ObjectToInputArray(structure)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray[npy_intp, mode='c'] origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     NI_MinOrMaxFilter(ARRAY(input_),
 *                       ARRAY(footprint_),
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origin, NPY_INTP, NPY_CARRAY)); 
  {
    __Pyx_BufFmt_StackElem __pyx_stack[1];
    __Pyx_GetBufferAndValidate(__pyx_bstruct_origin_, ((PyArrayObject^)__pyx_t_1), &__Pyx_TypeInfo_nn_npy_intp, PyBUF_FORMAT| PyBUF_C_CONTIGUOUS, 1, 0, __pyx_stack);
    __pyx_bstride_0_origin_ = __pyx_bstruct_origin_->Strides[0];
    __pyx_bshape_0_origin_ = __pyx_bstruct_origin_->Shape[0];
  }
  __pyx_v_origin_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":392
 *     NI_MinOrMaxFilter(ARRAY(input_),
 *                       ARRAY(footprint_),
 *                       NULL if structure_ is None else ARRAY(structure_),             # <<<<<<<<<<<<<<
 *                       ARRAY(output_),
 *                       <NI_ExtendMode>mode,
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_structure_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_structure_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":397
 *                       cval,
 *                       <npy_intp*>NpyArray_DATA(ARRAY(origin_)),
 *                       minimum)             # <<<<<<<<<<<<<<
 * 
 * def rank_filter(object input, int rank, object footprint,
 */
  XXX skipping exception checks: __pyx_t_5 == 0
  __pyx_t_5 = NI_MinOrMaxFilter(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_footprint_), __pyx_t_4, ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, ((npy_intp *)NpyArray_DATA(ARRAY(((PyArrayObject^)__pyx_v_origin_)))), __pyx_v_minimum); 

  __pyx_r = nullptr;
  __Pyx_SafeReleaseBuffer(__pyx_bstruct_origin_);
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":399
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
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_footprint_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  PyArrayObject^ __pyx_v_origin_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_rank = __site_cvt_399_0->Target(__site_cvt_399_0, rank);
  __pyx_v_footprint = footprint;
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_399_0_1->Target(__site_cvt_399_0_1, mode);
  __pyx_v_cval = __site_cvt_399_0_2->Target(__site_cvt_399_0_2, cval);
  __pyx_v_origin = origin;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":401
 * def rank_filter(object input, int rank, object footprint,
 *                 object output, int mode, double cval, object origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":402
 *                 object output, int mode, double cval, object origin):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_footprint)); 
  __pyx_v_footprint_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":403
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 *     NI_RankFilter(ARRAY(input_),
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":404
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     NI_RankFilter(ARRAY(input_),
 *                   rank,
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origin, NPY_INTP, NPY_CARRAY)); 
  __pyx_v_origin_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":411
 *                   <NI_ExtendMode>mode,
 *                   cval,
 *                   <npy_intp*>NpyArray_DATA(ARRAY(origin_)))             # <<<<<<<<<<<<<<
 * 
 * 
 */
  XXX skipping exception checks: __pyx_t_2 == 0
  __pyx_t_2 = NI_RankFilter(ARRAY(__pyx_v_input_), __pyx_v_rank, ARRAY(__pyx_v_footprint_), ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, ((npy_intp *)NpyArray_DATA(ARRAY(__pyx_v_origin_)))); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":417
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":419
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
    int __pyx_t_1;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_t_3 = nullptr;
    System::Object^ __pyx_t_4 = nullptr;
    int __pyx_t_5;
    System::Object^ __pyx_v_self = this;
    __pyx_v_function = function;
    __pyx_v_args = args;
    __pyx_v_kwargs = kwargs;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":420
 *     cdef object function, args, kwargs
 *     def __init__(self, function, args, kwargs):
 *         if not is_callable(function):             # <<<<<<<<<<<<<<
 *             raise RuntimeError("function parameter is not callable")
 *         if not isinstance(args, tuple):
 */
    __pyx_t_1 = (!is_callable(__pyx_v_function));
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":421
 *     def __init__(self, function, args, kwargs):
 *         if not is_callable(function):
 *             raise RuntimeError("function parameter is not callable")             # <<<<<<<<<<<<<<
 *         if not isinstance(args, tuple):
 *             raise RuntimeError("extra_arguments must be a tuple")
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "RuntimeError");
      __pyx_t_3 = __site_call1_421_30->Target(__site_call1_421_30, __pyx_context, __pyx_t_2, ((System::Object^)"function parameter is not callable"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":422
 *         if not is_callable(function):
 *             raise RuntimeError("function parameter is not callable")
 *         if not isinstance(args, tuple):             # <<<<<<<<<<<<<<
 *             raise RuntimeError("extra_arguments must be a tuple")
 *         if not isinstance(kwargs, dict):
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "isinstance");
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "tuple");
    __pyx_t_4 = __site_call2_422_25->Target(__site_call2_422_25, __pyx_context, __pyx_t_3, __pyx_v_args, ((System::Object^)__pyx_t_2));
    __pyx_t_3 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_t_1 = __site_istrue_422_25->Target(__site_istrue_422_25, __pyx_t_4);
    __pyx_t_4 = nullptr;
    __pyx_t_5 = (!__pyx_t_1);
    if (__pyx_t_5) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":423
 *             raise RuntimeError("function parameter is not callable")
 *         if not isinstance(args, tuple):
 *             raise RuntimeError("extra_arguments must be a tuple")             # <<<<<<<<<<<<<<
 *         if not isinstance(kwargs, dict):
 *             raise RuntimeError("extra_keywords must be a dictionary")
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "RuntimeError");
      __pyx_t_2 = __site_call1_423_30->Target(__site_call1_423_30, __pyx_context, __pyx_t_4, ((System::Object^)"extra_arguments must be a tuple"));
      __pyx_t_4 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":424
 *         if not isinstance(args, tuple):
 *             raise RuntimeError("extra_arguments must be a tuple")
 *         if not isinstance(kwargs, dict):             # <<<<<<<<<<<<<<
 *             raise RuntimeError("extra_keywords must be a dictionary")
 *         self.function = function
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "isinstance");
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "dict");
    __pyx_t_3 = __site_call2_424_25->Target(__site_call2_424_25, __pyx_context, __pyx_t_2, __pyx_v_kwargs, ((System::Object^)__pyx_t_4));
    __pyx_t_2 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = __site_istrue_424_25->Target(__site_istrue_424_25, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_t_1 = (!__pyx_t_5);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":425
 *             raise RuntimeError("extra_arguments must be a tuple")
 *         if not isinstance(kwargs, dict):
 *             raise RuntimeError("extra_keywords must be a dictionary")             # <<<<<<<<<<<<<<
 *         self.function = function
 *         self.args = args
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "RuntimeError");
      __pyx_t_4 = __site_call1_425_30->Target(__site_call1_425_30, __pyx_context, __pyx_t_3, ((System::Object^)"extra_keywords must be a dictionary"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      goto __pyx_L7;
    }
    __pyx_L7:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":426
 *         if not isinstance(kwargs, dict):
 *             raise RuntimeError("extra_keywords must be a dictionary")
 *         self.function = function             # <<<<<<<<<<<<<<
 *         self.args = args
 *         self.kwargs = kwargs
 */
    ((CallbackInfo^)__pyx_v_self)->function = __pyx_v_function;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":427
 *             raise RuntimeError("extra_keywords must be a dictionary")
 *         self.function = function
 *         self.args = args             # <<<<<<<<<<<<<<
 *         self.kwargs = kwargs
 * 
 */
    ((CallbackInfo^)__pyx_v_self)->args = __pyx_v_args;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":428
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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":430
 *         self.kwargs = kwargs
 * 
 * cdef int cbwrapper_filter_1d(double *iline, npy_intp ilen, double *oline, npy_intp olen,             # <<<<<<<<<<<<<<
 *                              void* ctx) except 0:
 *     cdef CallbackInfo info = <CallbackInfo>ctx
 */

static int (*__pyx_function_pointer_cbwrapper_filter_1d)(double *, npy_intp, double *, npy_intp, void *);
typedef int (*__pyx_fp_t_cbwrapper_filter_1d)(double *, npy_intp, double *, npy_intp, void *);
static __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_filter_1d^ __pyx_delegate_val_cbwrapper_filter_1d;
static  int cbwrapper_filter_1d(double *__pyx_v_iline, npy_intp __pyx_v_ilen, double *__pyx_v_oline, npy_intp __pyx_v_olen, void *__pyx_v_ctx) {
  CallbackInfo^ __pyx_v_info = nullptr;
  System::Object^ __pyx_v_iarr;
  System::Object^ __pyx_v_oarr;
  int __pyx_r;
  npy_intp __pyx_t_1[1];
  npy_intp __pyx_t_2[1];
  System::Object^ __pyx_t_3 = nullptr;
  npy_intp __pyx_t_4[1];
  npy_intp __pyx_t_5[1];
  __pyx_v_iarr = nullptr;
  __pyx_v_oarr = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":432
 * cdef int cbwrapper_filter_1d(double *iline, npy_intp ilen, double *oline, npy_intp olen,
 *                              void* ctx) except 0:
 *     cdef CallbackInfo info = <CallbackInfo>ctx             # <<<<<<<<<<<<<<
 *     iarr = array_New(1, [ilen], NPY_DOUBLE, [sizeof(double)], <char*>iline, 0, NPY_CARRAY)
 *     oarr = array_New(1, [olen], NPY_DOUBLE, [sizeof(double)], <char*>oline, 0, NPY_CARRAY)
 */
  __pyx_v_info = ((CallbackInfo^)__pyx_v_ctx);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":433
 *                              void* ctx) except 0:
 *     cdef CallbackInfo info = <CallbackInfo>ctx
 *     iarr = array_New(1, [ilen], NPY_DOUBLE, [sizeof(double)], <char*>iline, 0, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     oarr = array_New(1, [olen], NPY_DOUBLE, [sizeof(double)], <char*>oline, 0, NPY_CARRAY)
 *     info.function(iarr, oarr, *info.args, **info.kwargs)
 */
  __pyx_t_1[0] = __pyx_v_ilen;
  __pyx_t_2[0] = (sizeof(double));
  __pyx_t_3 = ((System::Object^)array_New(1, __pyx_t_1, NPY_DOUBLE, __pyx_t_2, ((char *)__pyx_v_iline), 0, NPY_CARRAY)); 
  __pyx_v_iarr = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":434
 *     cdef CallbackInfo info = <CallbackInfo>ctx
 *     iarr = array_New(1, [ilen], NPY_DOUBLE, [sizeof(double)], <char*>iline, 0, NPY_CARRAY)
 *     oarr = array_New(1, [olen], NPY_DOUBLE, [sizeof(double)], <char*>oline, 0, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     info.function(iarr, oarr, *info.args, **info.kwargs)
 *     return 1
 */
  __pyx_t_4[0] = __pyx_v_olen;
  __pyx_t_5[0] = (sizeof(double));
  __pyx_t_3 = ((System::Object^)array_New(1, __pyx_t_4, NPY_DOUBLE, __pyx_t_5, ((char *)__pyx_v_oline), 0, NPY_CARRAY)); 
  __pyx_v_oarr = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":435
 *     iarr = array_New(1, [ilen], NPY_DOUBLE, [sizeof(double)], <char*>iline, 0, NPY_CARRAY)
 *     oarr = array_New(1, [olen], NPY_DOUBLE, [sizeof(double)], <char*>oline, 0, NPY_CARRAY)
 *     info.function(iarr, oarr, *info.args, **info.kwargs)             # <<<<<<<<<<<<<<
 *     return 1
 * 
 */
  __pyx_t_3 = __site_call2_ARGS_KWARGS_435_17->Target(__site_call2_ARGS_KWARGS_435_17, __pyx_context, __pyx_v_info->function, __pyx_v_iarr, __pyx_v_oarr, __pyx_v_info->args, __pyx_v_info->kwargs);
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":436
 *     oarr = array_New(1, [olen], NPY_DOUBLE, [sizeof(double)], <char*>oline, 0, NPY_CARRAY)
 *     info.function(iarr, oarr, *info.args, **info.kwargs)
 *     return 1             # <<<<<<<<<<<<<<
 * 
 * def generic_filter1d(object input, object callback, ni_size_t filter_size,
 */
  __pyx_r = 1;
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":438
 *     return 1
 * 
 * def generic_filter1d(object input, object callback, ni_size_t filter_size,             # <<<<<<<<<<<<<<
 *                      int axis, object output, int mode, double cval,
 *                      ni_size_t origin, object extra_arguments, object extra_keywords):
 */

static System::Object^ generic_filter1d(System::Object^ input, System::Object^ callback, System::Object^ filter_size, System::Object^ axis, System::Object^ output, System::Object^ mode, System::Object^ cval, System::Object^ origin, System::Object^ extra_arguments, System::Object^ extra_keywords) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_callback = nullptr;
  ni_size_t __pyx_v_filter_size;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_mode;
  double __pyx_v_cval;
  ni_size_t __pyx_v_origin;
  System::Object^ __pyx_v_extra_arguments = nullptr;
  System::Object^ __pyx_v_extra_keywords = nullptr;
  CallbackInfo^ __pyx_v_info;
  void *__pyx_v_ctx;
  int (*__pyx_v_funcptr)(double *, npy_intp, double *, npy_intp, void *);
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_callback = callback;
  __pyx_v_filter_size = __site_cvt_438_0->Target(__site_cvt_438_0, filter_size);
  __pyx_v_axis = __site_cvt_438_0_1->Target(__site_cvt_438_0_1, axis);
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_438_0_2->Target(__site_cvt_438_0_2, mode);
  __pyx_v_cval = __site_cvt_438_0_3->Target(__site_cvt_438_0_3, cval);
  __pyx_v_origin = __site_cvt_438_0_4->Target(__site_cvt_438_0_4, origin);
  __pyx_v_extra_arguments = extra_arguments;
  __pyx_v_extra_keywords = extra_keywords;
  __pyx_v_info = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":444
 *     cdef void *ctx
 *     cdef int (*funcptr)(double*, npy_intp, double*, npy_intp, void*) except 0
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 * ##     if is_capsule(callback):
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":445
 *     cdef int (*funcptr)(double*, npy_intp, double*, npy_intp, void*) except 0
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 * ##     if is_capsule(callback):
 * ##         funcptr = capsule_asvoidptr(callback)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":450
 * ##         ctx = capsule_getdesc(callback)
 *     if True:
 *         funcptr = &cbwrapper_filter_1d             # <<<<<<<<<<<<<<
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)
 *         ctx = <void*>info
 */
  __pyx_v_funcptr = __pyx_function_pointer_cbwrapper_filter_1d;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":451
 *     if True:
 *         funcptr = &cbwrapper_filter_1d
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)             # <<<<<<<<<<<<<<
 *         ctx = <void*>info
 *     NI_GenericFilter1D(ARRAY(input_), funcptr, ctx, filter_size, axis,
 */
  __pyx_t_1 = __site_call3_451_27->Target(__site_call3_451_27, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_7ndimage_9_nd_image_CallbackInfo)), __pyx_v_callback, __pyx_v_extra_arguments, __pyx_v_extra_keywords);
  __pyx_v_info = ((CallbackInfo^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":452
 *         funcptr = &cbwrapper_filter_1d
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)
 *         ctx = <void*>info             # <<<<<<<<<<<<<<
 *     NI_GenericFilter1D(ARRAY(input_), funcptr, ctx, filter_size, axis,
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)
 */
  __pyx_v_ctx = ((void *)__pyx_v_info);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":454
 *         ctx = <void*>info
 *     NI_GenericFilter1D(ARRAY(input_), funcptr, ctx, filter_size, axis,
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)             # <<<<<<<<<<<<<<
 * 
 * cdef int cbwrapper_filter(double *buffer, npy_intp filter_size,
 */
  XXX skipping exception checks: __pyx_t_2 == 0
  __pyx_t_2 = NI_GenericFilter1D(ARRAY(__pyx_v_input_), __pyx_v_funcptr, __pyx_v_ctx, __pyx_v_filter_size, __pyx_v_axis, ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, __pyx_v_origin); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":456
 *                        ARRAY(output_), <NI_ExtendMode>mode, cval, origin)
 * 
 * cdef int cbwrapper_filter(double *buffer, npy_intp filter_size,             # <<<<<<<<<<<<<<
 *                           double *output, void *ctx) except 0:
 *     cdef CallbackInfo info = <CallbackInfo>ctx
 */

static int (*__pyx_function_pointer_cbwrapper_filter)(double *, npy_intp, double *, void *);
typedef int (*__pyx_fp_t_cbwrapper_filter)(double *, npy_intp, double *, void *);
static __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_filter^ __pyx_delegate_val_cbwrapper_filter;
static  int cbwrapper_filter(double *__pyx_v_buffer, npy_intp __pyx_v_filter_size, double *__pyx_v_output, void *__pyx_v_ctx) {
  CallbackInfo^ __pyx_v_info = nullptr;
  System::Object^ __pyx_v_pybuf;
  System::Object^ __pyx_v_rv;
  int __pyx_r;
  npy_intp __pyx_t_1[1];
  npy_intp __pyx_t_2[1];
  System::Object^ __pyx_t_3 = nullptr;
  double __pyx_t_4;
  __pyx_v_pybuf = nullptr;
  __pyx_v_rv = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":458
 * cdef int cbwrapper_filter(double *buffer, npy_intp filter_size,
 *                           double *output, void *ctx) except 0:
 *     cdef CallbackInfo info = <CallbackInfo>ctx             # <<<<<<<<<<<<<<
 *     pybuf = array_New(1, [filter_size], NPY_DOUBLE, [sizeof(double)],
 *                       <char*>buffer, 0, NPY_CARRAY)
 */
  __pyx_v_info = ((CallbackInfo^)__pyx_v_ctx);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":459
 *                           double *output, void *ctx) except 0:
 *     cdef CallbackInfo info = <CallbackInfo>ctx
 *     pybuf = array_New(1, [filter_size], NPY_DOUBLE, [sizeof(double)],             # <<<<<<<<<<<<<<
 *                       <char*>buffer, 0, NPY_CARRAY)
 *     rv = info.function(pybuf, *info.args, **info.kwargs)
 */
  __pyx_t_1[0] = __pyx_v_filter_size;
  __pyx_t_2[0] = (sizeof(double));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":460
 *     cdef CallbackInfo info = <CallbackInfo>ctx
 *     pybuf = array_New(1, [filter_size], NPY_DOUBLE, [sizeof(double)],
 *                       <char*>buffer, 0, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     rv = info.function(pybuf, *info.args, **info.kwargs)
 *     output[0] = rv
 */
  __pyx_t_3 = ((System::Object^)array_New(1, __pyx_t_1, NPY_DOUBLE, __pyx_t_2, ((char *)__pyx_v_buffer), 0, NPY_CARRAY)); 
  __pyx_v_pybuf = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":461
 *     pybuf = array_New(1, [filter_size], NPY_DOUBLE, [sizeof(double)],
 *                       <char*>buffer, 0, NPY_CARRAY)
 *     rv = info.function(pybuf, *info.args, **info.kwargs)             # <<<<<<<<<<<<<<
 *     output[0] = rv
 *     return 1
 */
  __pyx_t_3 = __site_call1_ARGS_KWARGS_461_22->Target(__site_call1_ARGS_KWARGS_461_22, __pyx_context, __pyx_v_info->function, __pyx_v_pybuf, __pyx_v_info->args, __pyx_v_info->kwargs);
  __pyx_v_rv = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":462
 *                       <char*>buffer, 0, NPY_CARRAY)
 *     rv = info.function(pybuf, *info.args, **info.kwargs)
 *     output[0] = rv             # <<<<<<<<<<<<<<
 *     return 1
 * 
 */
  __pyx_t_4 = __site_cvt_double_462_18->Target(__site_cvt_double_462_18, __pyx_v_rv);
  (__pyx_v_output[0]) = __pyx_t_4;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":463
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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":465
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
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_footprint_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  PyArrayObject^ __pyx_v_origin_ = nullptr;
  CallbackInfo^ __pyx_v_info;
  void *__pyx_v_ctx;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  __pyx_v_input = input;
  __pyx_v_callback = callback;
  __pyx_v_footprint = footprint;
  __pyx_v_output = output;
  __pyx_v_mode = __site_cvt_465_0->Target(__site_cvt_465_0, mode);
  __pyx_v_cval = __site_cvt_465_0_1->Target(__site_cvt_465_0_1, cval);
  __pyx_v_origin = origin;
  __pyx_v_extra_arguments = extra_arguments;
  __pyx_v_extra_keywords = extra_keywords;
  __pyx_v_info = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":469
 *                    object extra_keywords):
 *     cdef int (*funcptr)(double*, npy_intp, double*, void*) except 0
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":470
 *     cdef int (*funcptr)(double*, npy_intp, double*, void*) except 0
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_footprint)); 
  __pyx_v_footprint_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":471
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)
 * ##    if is_capsule(callback):
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":472
 *     cdef ndarray footprint_ = NI_ObjectToInputArray(footprint)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origin_ = NA_InputArray(origin, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 * ##    if is_capsule(callback):
 * ##        funcptr = capsule_asvoidptr(callback)
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origin, NPY_INTP, NPY_CARRAY)); 
  __pyx_v_origin_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":477
 * ##        ctx = capsule_getdesc(callback)
 *     if True:
 *         funcptr = &cbwrapper_filter             # <<<<<<<<<<<<<<
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)
 *         ctx = <void*>info
 */
  __pyx_v_funcptr = __pyx_function_pointer_cbwrapper_filter;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":478
 *     if True:
 *         funcptr = &cbwrapper_filter
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)             # <<<<<<<<<<<<<<
 *         ctx = <void*>info
 *     NI_GenericFilter(ARRAY(input_), funcptr, ctx, ARRAY(footprint_),
 */
  __pyx_t_1 = __site_call3_478_27->Target(__site_call3_478_27, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_7ndimage_9_nd_image_CallbackInfo)), __pyx_v_callback, __pyx_v_extra_arguments, __pyx_v_extra_keywords);
  __pyx_v_info = ((CallbackInfo^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":479
 *         funcptr = &cbwrapper_filter
 *         info = CallbackInfo(callback, extra_arguments, extra_keywords)
 *         ctx = <void*>info             # <<<<<<<<<<<<<<
 *     NI_GenericFilter(ARRAY(input_), funcptr, ctx, ARRAY(footprint_),
 *                      ARRAY(output_), <NI_ExtendMode>mode, cval,
 */
  __pyx_v_ctx = ((void *)__pyx_v_info);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":482
 *     NI_GenericFilter(ARRAY(input_), funcptr, ctx, ARRAY(footprint_),
 *                      ARRAY(output_), <NI_ExtendMode>mode, cval,
 *                      <npy_intp*>NpyArray_DATA(ARRAY(origin_)))             # <<<<<<<<<<<<<<
 * 
 * def fourier_filter(object input, object parameters, ni_size_t n, int axis,
 */
  NI_GenericFilter(ARRAY(__pyx_v_input_), __pyx_v_funcptr, __pyx_v_ctx, ARRAY(__pyx_v_footprint_), ARRAY(__pyx_v_output_), ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval, ((npy_intp *)NpyArray_DATA(ARRAY(__pyx_v_origin_))));

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":484
 *                      <npy_intp*>NpyArray_DATA(ARRAY(origin_)))
 * 
 * def fourier_filter(object input, object parameters, ni_size_t n, int axis,             # <<<<<<<<<<<<<<
 *                    object output, int filter_type):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 */

static System::Object^ fourier_filter(System::Object^ input, System::Object^ parameters, System::Object^ n, System::Object^ axis, System::Object^ output, System::Object^ filter_type) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_parameters = nullptr;
  ni_size_t __pyx_v_n;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  int __pyx_v_filter_type;
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_parameters_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_parameters = parameters;
  __pyx_v_n = __site_cvt_484_0->Target(__site_cvt_484_0, n);
  __pyx_v_axis = __site_cvt_484_0_1->Target(__site_cvt_484_0_1, axis);
  __pyx_v_output = output;
  __pyx_v_filter_type = __site_cvt_484_0_2->Target(__site_cvt_484_0_2, filter_type);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":486
 * def fourier_filter(object input, object parameters, ni_size_t n, int axis,
 *                    object output, int filter_type):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray parameters_ = NI_ObjectToInputArray(parameters)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":487
 *                    object output, int filter_type):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray parameters_ = NI_ObjectToInputArray(parameters)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_FourierFilter(ARRAY(input_), ARRAY(parameters_), n, axis,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_parameters)); 
  __pyx_v_parameters_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":488
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray parameters_ = NI_ObjectToInputArray(parameters)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_FourierFilter(ARRAY(input_), ARRAY(parameters_), n, axis,
 *                      ARRAY(output_), filter_type)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":490
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_FourierFilter(ARRAY(input_), ARRAY(parameters_), n, axis,
 *                      ARRAY(output_), filter_type)             # <<<<<<<<<<<<<<
 * 
 * def fourier_shift(object input, object shifts, ni_size_t n, int axis,
 */
  XXX skipping exception checks: __pyx_t_2 == 0
  __pyx_t_2 = NI_FourierFilter(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_parameters_), __pyx_v_n, __pyx_v_axis, ARRAY(__pyx_v_output_), __pyx_v_filter_type); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":492
 *                      ARRAY(output_), filter_type)
 * 
 * def fourier_shift(object input, object shifts, ni_size_t n, int axis,             # <<<<<<<<<<<<<<
 *                   object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 */

static System::Object^ fourier_shift(System::Object^ input, System::Object^ shifts, System::Object^ n, System::Object^ axis, System::Object^ output) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_shifts = nullptr;
  ni_size_t __pyx_v_n;
  int __pyx_v_axis;
  System::Object^ __pyx_v_output = nullptr;
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_shifts_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_shifts = shifts;
  __pyx_v_n = __site_cvt_492_0->Target(__site_cvt_492_0, n);
  __pyx_v_axis = __site_cvt_492_0_1->Target(__site_cvt_492_0_1, axis);
  __pyx_v_output = output;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":494
 * def fourier_shift(object input, object shifts, ni_size_t n, int axis,
 *                   object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray shifts_ = NI_ObjectToInputArray(shifts)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":495
 *                   object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray shifts_ = NI_ObjectToInputArray(shifts)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_FourierShift(ARRAY(input_), ARRAY(shifts_), n, axis,
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_shifts)); 
  __pyx_v_shifts_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":496
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray shifts_ = NI_ObjectToInputArray(shifts)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_FourierShift(ARRAY(input_), ARRAY(shifts_), n, axis,
 *                     ARRAY(output_))
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":498
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_FourierShift(ARRAY(input_), ARRAY(shifts_), n, axis,
 *                     ARRAY(output_))             # <<<<<<<<<<<<<<
 * 
 * def spline_filter1d(object input, int order, int axis, object output):
 */
  XXX skipping exception checks: __pyx_t_2 == 0
  __pyx_t_2 = NI_FourierShift(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_shifts_), __pyx_v_n, __pyx_v_axis, ARRAY(__pyx_v_output_)); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":500
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
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_order = __site_cvt_500_0->Target(__site_cvt_500_0, order);
  __pyx_v_axis = __site_cvt_500_0_1->Target(__site_cvt_500_0_1, axis);
  __pyx_v_output = output;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":501
 * 
 * def spline_filter1d(object input, int order, int axis, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_SplineFilter1D(ARRAY(input_), order, axis, ARRAY(output_))
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":502
 * def spline_filter1d(object input, int order, int axis, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_SplineFilter1D(ARRAY(input_), order, axis, ARRAY(output_))
 * 
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":503
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_SplineFilter1D(ARRAY(input_), order, axis, ARRAY(output_))             # <<<<<<<<<<<<<<
 * 
 * cdef int cbwrapper_map(npy_intp *ocoor, double *icoor,
 */
  XXX skipping exception checks: __pyx_t_2 == 0
  __pyx_t_2 = NI_SplineFilter1D(ARRAY(__pyx_v_input_), __pyx_v_order, __pyx_v_axis, ARRAY(__pyx_v_output_)); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":505
 *     NI_SplineFilter1D(ARRAY(input_), order, axis, ARRAY(output_))
 * 
 * cdef int cbwrapper_map(npy_intp *ocoor, double *icoor,             # <<<<<<<<<<<<<<
 *                        int orank, int irank, void *ctx) except 0:
 *     cdef CallbackInfo info = <CallbackInfo>ctx
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":507
 * cdef int cbwrapper_map(npy_intp *ocoor, double *icoor,
 *                        int orank, int irank, void *ctx) except 0:
 *     cdef CallbackInfo info = <CallbackInfo>ctx             # <<<<<<<<<<<<<<
 *     cdef npy_intp i
 *     cdef tuple ret
 */
  __pyx_v_info = ((CallbackInfo^)__pyx_v_ctx);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":510
 *     cdef npy_intp i
 *     cdef tuple ret
 *     cList = []             # <<<<<<<<<<<<<<
 *     for i in range(orank): cList.append(ocoor[i])
 *     coors = tuple(cList)
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_cList = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":511
 *     cdef tuple ret
 *     cList = []
 *     for i in range(orank): cList.append(ocoor[i])             # <<<<<<<<<<<<<<
 *     coors = tuple(cList)
 *     ret = info.function(coors, *info.args, **info.kwargs)
 */
  __pyx_t_2 = __pyx_v_orank;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;
    __pyx_t_1 = __site_get_append_511_32->Target(__site_get_append_511_32, ((System::Object^)__pyx_v_cList), __pyx_context);
    __pyx_t_4 = (__pyx_v_ocoor[__pyx_v_i]);
    __pyx_t_5 = __site_call1_511_39->Target(__site_call1_511_39, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":512
 *     cList = []
 *     for i in range(orank): cList.append(ocoor[i])
 *     coors = tuple(cList)             # <<<<<<<<<<<<<<
 *     ret = info.function(coors, *info.args, **info.kwargs)
 *     for i in range(irank):
 */
  __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "tuple");
  __pyx_t_4 = __site_call1_512_17->Target(__site_call1_512_17, __pyx_context, ((System::Object^)__pyx_t_5), ((System::Object^)__pyx_v_cList));
  __pyx_t_5 = nullptr;
  __pyx_v_coors = ((System::Object^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":513
 *     for i in range(orank): cList.append(ocoor[i])
 *     coors = tuple(cList)
 *     ret = info.function(coors, *info.args, **info.kwargs)             # <<<<<<<<<<<<<<
 *     for i in range(irank):
 *         icoor[i] = ret[i]
 */
  __pyx_t_4 = __site_call1_ARGS_KWARGS_513_23->Target(__site_call1_ARGS_KWARGS_513_23, __pyx_context, __pyx_v_info->function, ((System::Object^)__pyx_v_coors), __pyx_v_info->args, __pyx_v_info->kwargs);
  if (__pyx_t_4 == nullptr || dynamic_cast<IronPython::Runtime::PythonTuple^>(__pyx_t_4) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_ret = ((System::Object^)__pyx_t_4);
  __pyx_t_4 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":514
 *     coors = tuple(cList)
 *     ret = info.function(coors, *info.args, **info.kwargs)
 *     for i in range(irank):             # <<<<<<<<<<<<<<
 *         icoor[i] = ret[i]
 *     return 1
 */
  __pyx_t_2 = __pyx_v_irank;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":515
 *     ret = info.function(coors, *info.args, **info.kwargs)
 *     for i in range(irank):
 *         icoor[i] = ret[i]             # <<<<<<<<<<<<<<
 *     return 1
 * 
 */
    __pyx_t_4 = __site_getindex_515_22->Target(__site_getindex_515_22, ((System::Object^)__pyx_v_ret), ((System::Object^)__pyx_v_i));
    __pyx_t_6 = __site_cvt_double_515_22->Target(__site_cvt_double_515_22, __pyx_t_4);
    __pyx_t_4 = nullptr;
    (__pyx_v_icoor[__pyx_v_i]) = __pyx_t_6;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":516
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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":518
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
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_coordinates_ = nullptr;
  PyArrayObject^ __pyx_v_matrix_ = nullptr;
  PyArrayObject^ __pyx_v_shift_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  int (*__pyx_v_funcptr)(npy_intp *, double *, int, int, void *);
  CallbackInfo^ __pyx_v_info;
  void *__pyx_v_ctx;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  void *__pyx_t_4;
  void *__pyx_t_5;
  void *__pyx_t_6;
  int __pyx_t_7;
  __pyx_v_input = input;
  __pyx_v_map_callback = map_callback;
  __pyx_v_coordinates = coordinates;
  __pyx_v_matrix = matrix;
  __pyx_v_shift = shift;
  __pyx_v_output = output;
  __pyx_v_order = __site_cvt_518_0->Target(__site_cvt_518_0, order);
  __pyx_v_mode = __site_cvt_518_0_1->Target(__site_cvt_518_0_1, mode);
  __pyx_v_cval = __site_cvt_518_0_2->Target(__site_cvt_518_0_2, cval);
  __pyx_v_extra_arguments = extra_arguments;
  __pyx_v_extra_keywords = extra_keywords;
  __pyx_v_info = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":522
 *                         int order, int mode, double cval, object extra_arguments,
 *                         object extra_keywords):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray coordinates_ = None if coordinates is None else NI_ObjectToInputArray(coordinates)
 *     cdef ndarray matrix_ = None if matrix is None else NI_ObjectToInputArray(matrix)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":523
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
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_coordinates_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":524
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
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_matrix_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":525
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
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_shift_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":526
 *     cdef ndarray matrix_ = None if matrix is None else NI_ObjectToInputArray(matrix)
 *     cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef int (*funcptr)(npy_intp*, double*, int, int, void*) except 0
 *     cdef CallbackInfo info
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":531
 *     cdef void *ctx
 * 
 *     if map_callback is not None:             # <<<<<<<<<<<<<<
 *         # TODO: Capsule support
 *         if True:
 */
  __pyx_t_2 = (__pyx_v_map_callback != nullptr);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":534
 *         # TODO: Capsule support
 *         if True:
 *             funcptr = &cbwrapper_map             # <<<<<<<<<<<<<<
 *             info = CallbackInfo(map_callback, extra_arguments, extra_keywords)
 *             ctx = <void*>info
 */
    __pyx_v_funcptr = __pyx_function_pointer_cbwrapper_map;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":535
 *         if True:
 *             funcptr = &cbwrapper_map
 *             info = CallbackInfo(map_callback, extra_arguments, extra_keywords)             # <<<<<<<<<<<<<<
 *             ctx = <void*>info
 * 
 */
    __pyx_t_1 = __site_call3_535_31->Target(__site_call3_535_31, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_7ndimage_9_nd_image_CallbackInfo)), __pyx_v_map_callback, __pyx_v_extra_arguments, __pyx_v_extra_keywords);
    __pyx_v_info = ((CallbackInfo^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":536
 *             funcptr = &cbwrapper_map
 *             info = CallbackInfo(map_callback, extra_arguments, extra_keywords)
 *             ctx = <void*>info             # <<<<<<<<<<<<<<
 * 
 *     else:
 */
    __pyx_v_ctx = ((void *)__pyx_v_info);
    goto __pyx_L5;
  }
  /*else*/ {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":539
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":542
 * 
 *     NI_GeometricTransform(ARRAY(input_), funcptr, ctx,
 *                           NULL if matrix_ is None else ARRAY(matrix_),             # <<<<<<<<<<<<<<
 *                           NULL if shift_ is None else ARRAY(shift_),
 *                           NULL if coordinates_ is None else ARRAY(coordinates_),
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_matrix_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_matrix_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":543
 *     NI_GeometricTransform(ARRAY(input_), funcptr, ctx,
 *                           NULL if matrix_ is None else ARRAY(matrix_),
 *                           NULL if shift_ is None else ARRAY(shift_),             # <<<<<<<<<<<<<<
 *                           NULL if coordinates_ is None else ARRAY(coordinates_),
 *                           ARRAY(output_), order, <NI_ExtendMode>mode, cval)
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_shift_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_5 = NULL;
  } else {
    __pyx_t_5 = ARRAY(__pyx_v_shift_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":544
 *                           NULL if matrix_ is None else ARRAY(matrix_),
 *                           NULL if shift_ is None else ARRAY(shift_),
 *                           NULL if coordinates_ is None else ARRAY(coordinates_),             # <<<<<<<<<<<<<<
 *                           ARRAY(output_), order, <NI_ExtendMode>mode, cval)
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_coordinates_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_6 = NULL;
  } else {
    __pyx_t_6 = ARRAY(__pyx_v_coordinates_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":545
 *                           NULL if shift_ is None else ARRAY(shift_),
 *                           NULL if coordinates_ is None else ARRAY(coordinates_),
 *                           ARRAY(output_), order, <NI_ExtendMode>mode, cval)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  XXX skipping exception checks: __pyx_t_7 == 0
  __pyx_t_7 = NI_GeometricTransform(ARRAY(__pyx_v_input_), __pyx_v_funcptr, __pyx_v_ctx, __pyx_t_4, __pyx_t_5, __pyx_t_6, ARRAY(__pyx_v_output_), __pyx_v_order, ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":548
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
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_zoom_ = nullptr;
  PyArrayObject^ __pyx_v_shift_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  void *__pyx_t_4;
  void *__pyx_t_5;
  int __pyx_t_6;
  __pyx_v_input = input;
  __pyx_v_zoom = zoom;
  __pyx_v_shift = shift;
  __pyx_v_output = output;
  __pyx_v_order = __site_cvt_548_0->Target(__site_cvt_548_0, order);
  __pyx_v_mode = __site_cvt_548_0_1->Target(__site_cvt_548_0_1, mode);
  __pyx_v_cval = __site_cvt_548_0_2->Target(__site_cvt_548_0_2, cval);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":550
 * def zoom_shift(object input, object zoom, object shift, object output,
 *                int order, int mode, double cval):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray zoom_ = None if zoom is None else NI_ObjectToInputArray(zoom)
 *     cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":551
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
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_zoom_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":552
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
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_shift_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":553
 *     cdef ndarray zoom_ = None if zoom is None else NI_ObjectToInputArray(zoom)
 *     cdef ndarray shift_ = None if shift is None else NI_ObjectToInputArray(shift)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_ZoomShift(ARRAY(input_),
 *                  NULL if zoom_ is None else ARRAY(zoom_),
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":555
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_ZoomShift(ARRAY(input_),
 *                  NULL if zoom_ is None else ARRAY(zoom_),             # <<<<<<<<<<<<<<
 *                  NULL if shift_ is None else ARRAY(shift_),
 *                  ARRAY(output_), order, <NI_ExtendMode>mode, cval)
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_zoom_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_zoom_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":556
 *     NI_ZoomShift(ARRAY(input_),
 *                  NULL if zoom_ is None else ARRAY(zoom_),
 *                  NULL if shift_ is None else ARRAY(shift_),             # <<<<<<<<<<<<<<
 *                  ARRAY(output_), order, <NI_ExtendMode>mode, cval)
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_shift_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_5 = NULL;
  } else {
    __pyx_t_5 = ARRAY(__pyx_v_shift_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":557
 *                  NULL if zoom_ is None else ARRAY(zoom_),
 *                  NULL if shift_ is None else ARRAY(shift_),
 *                  ARRAY(output_), order, <NI_ExtendMode>mode, cval)             # <<<<<<<<<<<<<<
 * 
 * def label(object input, object strct, object output):
 */
  XXX skipping exception checks: __pyx_t_6 == 0
  __pyx_t_6 = NI_ZoomShift(ARRAY(__pyx_v_input_), __pyx_t_4, __pyx_t_5, ARRAY(__pyx_v_output_), __pyx_v_order, ((NI_ExtendMode)__pyx_v_mode), __pyx_v_cval); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":559
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
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_strct_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  npy_intp __pyx_v_max_label;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_strct = strct;
  __pyx_v_output = output;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":560
 * 
 * def label(object input, object strct, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":561
 * def label(object input, object strct, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef npy_intp max_label
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_strct)); 
  __pyx_v_strct_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":562
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef npy_intp max_label
 *     NI_Label(ARRAY(input_), ARRAY(strct_), &max_label, ARRAY(output_))
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":564
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef npy_intp max_label
 *     NI_Label(ARRAY(input_), ARRAY(strct_), &max_label, ARRAY(output_))             # <<<<<<<<<<<<<<
 *     return max_label
 * 
 */
  XXX skipping exception checks: __pyx_t_2 == 0
  __pyx_t_2 = NI_Label(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_strct_), (&__pyx_v_max_label), ARRAY(__pyx_v_output_)); 

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":565
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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":567
 *     return max_label
 * 
 * def find_objects(object input, npy_intp max_label):             # <<<<<<<<<<<<<<
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef npy_intp *regions = NULL
 */

static System::Object^ find_objects(System::Object^ input, System::Object^ max_label) {
  System::Object^ __pyx_v_input = nullptr;
  npy_intp __pyx_v_max_label;
  PyArrayObject^ __pyx_v_input_ = nullptr;
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
  int __pyx_t_3;
  System::Object^ __pyx_t_4 = nullptr;
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
  __pyx_v_max_label = __site_cvt_567_0->Target(__site_cvt_567_0, max_label);
  __pyx_v_result = nullptr;
  __pyx_v_ii = nullptr;
  __pyx_v_tup = nullptr;
  __pyx_v_jj = nullptr;
  __pyx_v_slc = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":568
 * 
 * def find_objects(object input, npy_intp max_label):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef npy_intp *regions = NULL
 *     cdef int ndim = NpyArray_NDIM(ARRAY(input_))
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":569
 * def find_objects(object input, npy_intp max_label):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef npy_intp *regions = NULL             # <<<<<<<<<<<<<<
 *     cdef int ndim = NpyArray_NDIM(ARRAY(input_))
 *     cdef list result
 */
  __pyx_v_regions = NULL;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":570
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef npy_intp *regions = NULL
 *     cdef int ndim = NpyArray_NDIM(ARRAY(input_))             # <<<<<<<<<<<<<<
 *     cdef list result
 *     cdef npy_intp i, idx
 */
  __pyx_v_ndim = NpyArray_NDIM(ARRAY(__pyx_v_input_));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":573
 *     cdef list result
 *     cdef npy_intp i, idx
 *     if max_label < 0:             # <<<<<<<<<<<<<<
 *         max_label = 0
 *     if max_label > 0:
 */
  __pyx_t_2 = (__pyx_v_max_label < 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":574
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

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":575
 *     if max_label < 0:
 *         max_label = 0
 *     if max_label > 0:             # <<<<<<<<<<<<<<
 *         if ndim > 0:
 *             regions = <npy_intp*>malloc(2 * max_label * ndim * sizeof(npy_intp))
 */
  __pyx_t_2 = (__pyx_v_max_label > 0);
  if (__pyx_t_2) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":576
 *         max_label = 0
 *     if max_label > 0:
 *         if ndim > 0:             # <<<<<<<<<<<<<<
 *             regions = <npy_intp*>malloc(2 * max_label * ndim * sizeof(npy_intp))
 *         else:
 */
    __pyx_t_2 = (__pyx_v_ndim > 0);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":577
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

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":579
 *             regions = <npy_intp*>malloc(2 * max_label * ndim * sizeof(npy_intp))
 *         else:
 *             regions = <npy_intp*>malloc(max_label * sizeof(npy_intp))             # <<<<<<<<<<<<<<
 *         if regions == NULL:
 *             raise_no_memory()
 */
      __pyx_v_regions = ((npy_intp *)malloc((__pyx_v_max_label * (sizeof(npy_intp)))));
    }
    __pyx_L7:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":580
 *         else:
 *             regions = <npy_intp*>malloc(max_label * sizeof(npy_intp))
 *         if regions == NULL:             # <<<<<<<<<<<<<<
 *             raise_no_memory()
 * 
 */
    __pyx_t_2 = (__pyx_v_regions == NULL);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":581
 *             regions = <npy_intp*>malloc(max_label * sizeof(npy_intp))
 *         if regions == NULL:
 *             raise_no_memory()             # <<<<<<<<<<<<<<
 * 
 *     try:
 */
      XXX skipping exception checks: __pyx_t_3 == 0
      __pyx_t_3 = raise_no_memory(); 
      goto __pyx_L8;
    }
    __pyx_L8:;
    goto __pyx_L6;
  }
  __pyx_L6:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":583
 *             raise_no_memory()
 * 
 *     try:             # <<<<<<<<<<<<<<
 *         NI_FindObjects(ARRAY(input_), max_label, regions)
 *         result = [None] * max_label
 */
  try {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":584
 * 
 *     try:
 *         NI_FindObjects(ARRAY(input_), max_label, regions)             # <<<<<<<<<<<<<<
 *         result = [None] * max_label
 *         for ii in range(max_label):
 */
    XXX skipping exception checks: __pyx_t_3 == 0
    __pyx_t_3 = NI_FindObjects(ARRAY(__pyx_v_input_), __pyx_v_max_label, __pyx_v_regions); 

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":585
 *     try:
 *         NI_FindObjects(ARRAY(input_), max_label, regions)
 *         result = [None] * max_label             # <<<<<<<<<<<<<<
 *         for ii in range(max_label):
 *             idx = 2 * ndim * ii if ndim > 0 else ii
 */
    __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{nullptr});
    __pyx_t_4 = __pyx_v_max_label;
    __pyx_t_5 = __site_op_mul_585_24->Target(__site_op_mul_585_24, ((System::Object^)__pyx_t_1), __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    if (__pyx_t_5 == nullptr || dynamic_cast<IronPython::Runtime::List^>(__pyx_t_5) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_result = ((System::Object^)__pyx_t_5);
    __pyx_t_5 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":586
 *         NI_FindObjects(ARRAY(input_), max_label, regions)
 *         result = [None] * max_label
 *         for ii in range(max_label):             # <<<<<<<<<<<<<<
 *             idx = 2 * ndim * ii if ndim > 0 else ii
 *             if regions[idx] >= 0:
 */
    __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "range");
    __pyx_t_4 = __pyx_v_max_label;
    __pyx_t_1 = __site_call1_586_23->Target(__site_call1_586_23, __pyx_context, __pyx_t_5, __pyx_t_4);
    __pyx_t_5 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_6 = __site_get_iterator_586_8->Target(__site_get_iterator_586_8, __pyx_t_1);
    try {
      while (__pyx_t_6.Key->MoveNext()) {
        __pyx_v_ii = ((System::Object^)__pyx_t_6.Key->Current);

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":587
 *         result = [None] * max_label
 *         for ii in range(max_label):
 *             idx = 2 * ndim * ii if ndim > 0 else ii             # <<<<<<<<<<<<<<
 *             if regions[idx] >= 0:
 *                 tup = [None] * ndim
 */
        if ((__pyx_v_ndim > 0)) {
          __pyx_t_5 = (2 * __pyx_v_ndim);
          __pyx_t_7 = __site_op_mul_587_27->Target(__site_op_mul_587_27, __pyx_t_5, __pyx_v_ii);
          __pyx_t_5 = nullptr;
          __pyx_t_4 = __pyx_t_7;
          __pyx_t_7 = nullptr;
        } else {
          __pyx_t_4 = __pyx_v_ii;
        }
        __pyx_t_8 = __site_cvt_npy_intp_587_18->Target(__site_cvt_npy_intp_587_18, __pyx_t_4);
        __pyx_t_4 = nullptr;
        __pyx_v_idx = __pyx_t_8;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":588
 *         for ii in range(max_label):
 *             idx = 2 * ndim * ii if ndim > 0 else ii
 *             if regions[idx] >= 0:             # <<<<<<<<<<<<<<
 *                 tup = [None] * ndim
 *                 for jj in range(ndim):
 */
        __pyx_t_2 = ((__pyx_v_regions[__pyx_v_idx]) >= 0);
        if (__pyx_t_2) {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":589
 *             idx = 2 * ndim * ii if ndim > 0 else ii
 *             if regions[idx] >= 0:
 *                 tup = [None] * ndim             # <<<<<<<<<<<<<<
 *                 for jj in range(ndim):
 *                     slc = slice(regions[idx + jj], regions[idx + jj + ndim], None)
 */
          __pyx_t_4 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{nullptr});
          __pyx_t_7 = __pyx_v_ndim;
          __pyx_t_5 = __site_op_mul_589_29->Target(__site_op_mul_589_29, ((System::Object^)__pyx_t_4), __pyx_t_7);
          __pyx_t_4 = nullptr;
          __pyx_t_7 = nullptr;
          if (__pyx_t_5 == nullptr || dynamic_cast<IronPython::Runtime::List^>(__pyx_t_5) == nullptr) {
            throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
          }
          __pyx_v_tup = ((System::Object^)__pyx_t_5);
          __pyx_t_5 = nullptr;

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":590
 *             if regions[idx] >= 0:
 *                 tup = [None] * ndim
 *                 for jj in range(ndim):             # <<<<<<<<<<<<<<
 *                     slc = slice(regions[idx + jj], regions[idx + jj + ndim], None)
 *                     tup[jj] = slc
 */
          __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "range");
          __pyx_t_7 = __pyx_v_ndim;
          __pyx_t_4 = __site_call1_590_31->Target(__site_call1_590_31, __pyx_context, __pyx_t_5, __pyx_t_7);
          __pyx_t_5 = nullptr;
          __pyx_t_7 = nullptr;
          __pyx_t_9 = __site_get_iterator_590_16->Target(__site_get_iterator_590_16, __pyx_t_4);
          try {
            while (__pyx_t_9.Key->MoveNext()) {
              __pyx_v_jj = ((System::Object^)__pyx_t_9.Key->Current);

              /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":591
 *                 tup = [None] * ndim
 *                 for jj in range(ndim):
 *                     slc = slice(regions[idx + jj], regions[idx + jj + ndim], None)             # <<<<<<<<<<<<<<
 *                     tup[jj] = slc
 *                 result[ii] = tuple(tup)
 */
              __pyx_t_7 = PythonOps::GetGlobal(__pyx_context, "slice");
              __pyx_t_5 = __pyx_v_idx;
              __pyx_t_10 = __site_op_add_591_44->Target(__site_op_add_591_44, __pyx_t_5, __pyx_v_jj);
              __pyx_t_5 = nullptr;
              __pyx_t_11 = __site_cvt_Py_ssize_t_591_44->Target(__site_cvt_Py_ssize_t_591_44, __pyx_t_10);
              __pyx_t_10 = nullptr;
              __pyx_t_10 = (__pyx_v_regions[__pyx_t_11]);
              __pyx_t_5 = __pyx_v_idx;
              __pyx_t_12 = __site_op_add_591_63->Target(__site_op_add_591_63, __pyx_t_5, __pyx_v_jj);
              __pyx_t_5 = nullptr;
              __pyx_t_5 = __pyx_v_ndim;
              __pyx_t_13 = __site_op_add_591_68->Target(__site_op_add_591_68, __pyx_t_12, __pyx_t_5);
              __pyx_t_12 = nullptr;
              __pyx_t_5 = nullptr;
              __pyx_t_14 = __site_cvt_Py_ssize_t_591_68->Target(__site_cvt_Py_ssize_t_591_68, __pyx_t_13);
              __pyx_t_13 = nullptr;
              __pyx_t_13 = (__pyx_v_regions[__pyx_t_14]);
              __pyx_t_5 = __site_call3_591_31->Target(__site_call3_591_31, __pyx_context, ((System::Object^)__pyx_t_7), __pyx_t_10, __pyx_t_13, nullptr);
              __pyx_t_7 = nullptr;
              __pyx_t_10 = nullptr;
              __pyx_t_13 = nullptr;
              __pyx_v_slc = __pyx_t_5;
              __pyx_t_5 = nullptr;

              /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":592
 *                 for jj in range(ndim):
 *                     slc = slice(regions[idx + jj], regions[idx + jj + ndim], None)
 *                     tup[jj] = slc             # <<<<<<<<<<<<<<
 *                 result[ii] = tuple(tup)
 *             else:
 */
              __site_setindex_592_23->Target(__site_setindex_592_23, ((System::Object^)__pyx_v_tup), __pyx_v_jj, __pyx_v_slc);
            }
          }
          finally {
            PythonOps::ForLoopDispose(__pyx_t_9);
          }

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":593
 *                     slc = slice(regions[idx + jj], regions[idx + jj + ndim], None)
 *                     tup[jj] = slc
 *                 result[ii] = tuple(tup)             # <<<<<<<<<<<<<<
 *             else:
 *                 result[ii] = None
 */
          __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "tuple");
          __pyx_t_13 = __site_call1_593_34->Target(__site_call1_593_34, __pyx_context, ((System::Object^)__pyx_t_5), ((System::Object^)__pyx_v_tup));
          __pyx_t_5 = nullptr;
          __site_setindex_593_22->Target(__site_setindex_593_22, ((System::Object^)__pyx_v_result), __pyx_v_ii, __pyx_t_13);
          __pyx_t_13 = nullptr;
          goto __pyx_L9;
        }
        /*else*/ {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":595
 *                 result[ii] = tuple(tup)
 *             else:
 *                 result[ii] = None             # <<<<<<<<<<<<<<
 *     finally:
 *         free(regions)
 */
          __site_setindex_595_22->Target(__site_setindex_595_22, ((System::Object^)__pyx_v_result), __pyx_v_ii, nullptr);
        }
        __pyx_L9:;
      }
    }
    finally {
      PythonOps::ForLoopDispose(__pyx_t_6);
    }
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":597
 *                 result[ii] = None
 *     finally:
 *         free(regions)             # <<<<<<<<<<<<<<
 * 
 *     return result
 */
  finally {
    free(__pyx_v_regions);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":599
 *         free(regions)
 * 
 *     return result             # <<<<<<<<<<<<<<
 * 
 * def watershed_ift(object input, object markers, object strct, object output):
 */
  __pyx_r = ((System::Object^)__pyx_v_result);
  __pyx_t_1 = nullptr;
  __pyx_t_4 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":601
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
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_markers_ = nullptr;
  PyArrayObject^ __pyx_v_strct_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  __pyx_v_input = input;
  __pyx_v_markers = markers;
  __pyx_v_strct = strct;
  __pyx_v_output = output;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":602
 * 
 * def watershed_ift(object input, object markers, object strct, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray markers_ = NI_ObjectToInputArray(markers)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":603
 * def watershed_ift(object input, object markers, object strct, object output):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray markers_ = NI_ObjectToInputArray(markers)             # <<<<<<<<<<<<<<
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_markers)); 
  __pyx_v_markers_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":604
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray markers_ = NI_ObjectToInputArray(markers)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)             # <<<<<<<<<<<<<<
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_WatershedIFT(ARRAY(input_), ARRAY(markers_), ARRAY(strct_), ARRAY(output_))
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_strct)); 
  __pyx_v_strct_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":605
 *     cdef ndarray markers_ = NI_ObjectToInputArray(markers)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     NI_WatershedIFT(ARRAY(input_), ARRAY(markers_), ARRAY(strct_), ARRAY(output_))
 * 
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":606
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     NI_WatershedIFT(ARRAY(input_), ARRAY(markers_), ARRAY(strct_), ARRAY(output_))             # <<<<<<<<<<<<<<
 * 
 * def distance_transform_bf(object input, int metric, object sampling, object output,
 */
  XXX skipping exception checks: __pyx_t_2 == 0
  __pyx_t_2 = NI_WatershedIFT(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_markers_), ARRAY(__pyx_v_strct_), ARRAY(__pyx_v_output_)); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":608
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
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_sampling_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  PyArrayObject^ __pyx_v_features_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  void *__pyx_t_4;
  void *__pyx_t_5;
  void *__pyx_t_6;
  int __pyx_t_7;
  __pyx_v_input = input;
  __pyx_v_metric = __site_cvt_608_0->Target(__site_cvt_608_0, metric);
  __pyx_v_sampling = sampling;
  __pyx_v_output = output;
  __pyx_v_features = features;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":610
 * def distance_transform_bf(object input, int metric, object sampling, object output,
 *                           object features):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
 *     cdef ndarray output_ = None if output is None else NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":611
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
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_sampling_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":612
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
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":613
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
 *     cdef ndarray output_ = None if output is None else NI_ObjectToOutputArray(output)
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)             # <<<<<<<<<<<<<<
 *     NI_DistanceTransformBruteForce(ARRAY(input_), metric,
 *                                    NULL if sampling_ is None else ARRAY(sampling_),
 */
  __pyx_t_2 = (__pyx_v_features == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_features)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_features_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":615
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
 *     NI_DistanceTransformBruteForce(ARRAY(input_), metric,
 *                                    NULL if sampling_ is None else ARRAY(sampling_),             # <<<<<<<<<<<<<<
 *                                    NULL if output_ is None else ARRAY(output_),
 *                                    NULL if features_ is None else ARRAY(features_))
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_sampling_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_sampling_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":616
 *     NI_DistanceTransformBruteForce(ARRAY(input_), metric,
 *                                    NULL if sampling_ is None else ARRAY(sampling_),
 *                                    NULL if output_ is None else ARRAY(output_),             # <<<<<<<<<<<<<<
 *                                    NULL if features_ is None else ARRAY(features_))
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_output_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_5 = NULL;
  } else {
    __pyx_t_5 = ARRAY(__pyx_v_output_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":617
 *                                    NULL if sampling_ is None else ARRAY(sampling_),
 *                                    NULL if output_ is None else ARRAY(output_),
 *                                    NULL if features_ is None else ARRAY(features_))             # <<<<<<<<<<<<<<
 * 
 * def distance_transform_op(object strct, object distances, object features):
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_features_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_6 = NULL;
  } else {
    __pyx_t_6 = ARRAY(__pyx_v_features_);
  }
  XXX skipping exception checks: __pyx_t_7 == 0
  __pyx_t_7 = NI_DistanceTransformBruteForce(ARRAY(__pyx_v_input_), __pyx_v_metric, __pyx_t_4, __pyx_t_5, __pyx_t_6); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":619
 *                                    NULL if features_ is None else ARRAY(features_))
 * 
 * def distance_transform_op(object strct, object distances, object features):             # <<<<<<<<<<<<<<
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray distances_ = NI_ObjectToIoArray(distances)
 */

static System::Object^ distance_transform_op(System::Object^ strct, System::Object^ distances, System::Object^ features) {
  System::Object^ __pyx_v_strct = nullptr;
  System::Object^ __pyx_v_distances = nullptr;
  System::Object^ __pyx_v_features = nullptr;
  PyArrayObject^ __pyx_v_strct_ = nullptr;
  PyArrayObject^ __pyx_v_distances_ = nullptr;
  PyArrayObject^ __pyx_v_features_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  void *__pyx_t_4;
  int __pyx_t_5;
  __pyx_v_strct = strct;
  __pyx_v_distances = distances;
  __pyx_v_features = features;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":620
 * 
 * def distance_transform_op(object strct, object distances, object features):
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)             # <<<<<<<<<<<<<<
 *     cdef ndarray distances_ = NI_ObjectToIoArray(distances)
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_strct)); 
  __pyx_v_strct_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":621
 * def distance_transform_op(object strct, object distances, object features):
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray distances_ = NI_ObjectToIoArray(distances)             # <<<<<<<<<<<<<<
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
 *     NI_DistanceTransformOnePass(ARRAY(strct_), ARRAY(distances_),
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToIoArray(__pyx_v_distances)); 
  __pyx_v_distances_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":622
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray distances_ = NI_ObjectToIoArray(distances)
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)             # <<<<<<<<<<<<<<
 *     NI_DistanceTransformOnePass(ARRAY(strct_), ARRAY(distances_),
 *                                 NULL if features_ is None else ARRAY(features_))
 */
  __pyx_t_2 = (__pyx_v_features == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_features)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_features_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":624
 *     cdef ndarray features_ = None if features is None else NI_ObjectToOutputArray(features)
 *     NI_DistanceTransformOnePass(ARRAY(strct_), ARRAY(distances_),
 *                                 NULL if features_ is None else ARRAY(features_))             # <<<<<<<<<<<<<<
 * 
 * def euclidean_feature_transform(object input, object sampling, object features):
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_features_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_features_);
  }
  XXX skipping exception checks: __pyx_t_5 == 0
  __pyx_t_5 = NI_DistanceTransformOnePass(ARRAY(__pyx_v_strct_), ARRAY(__pyx_v_distances_), __pyx_t_4); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":626
 *                                 NULL if features_ is None else ARRAY(features_))
 * 
 * def euclidean_feature_transform(object input, object sampling, object features):             # <<<<<<<<<<<<<<
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
 */

static System::Object^ euclidean_feature_transform(System::Object^ input, System::Object^ sampling, System::Object^ features) {
  System::Object^ __pyx_v_input = nullptr;
  System::Object^ __pyx_v_sampling = nullptr;
  System::Object^ __pyx_v_features = nullptr;
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_sampling_ = nullptr;
  PyArrayObject^ __pyx_v_features_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  void *__pyx_t_4;
  int __pyx_t_5;
  __pyx_v_input = input;
  __pyx_v_sampling = sampling;
  __pyx_v_features = features;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":627
 * 
 * def euclidean_feature_transform(object input, object sampling, object features):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
 *     cdef ndarray features_ = NI_ObjectToOutputArray(features)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":628
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
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_sampling_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":629
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray sampling_ = None if sampling is None else NI_ObjectToInputArray(sampling)
 *     cdef ndarray features_ = NI_ObjectToOutputArray(features)             # <<<<<<<<<<<<<<
 *     NI_EuclideanFeatureTransform(ARRAY(input_),
 *                                  NULL if sampling_ is None else ARRAY(sampling_),
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_features)); 
  __pyx_v_features_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":631
 *     cdef ndarray features_ = NI_ObjectToOutputArray(features)
 *     NI_EuclideanFeatureTransform(ARRAY(input_),
 *                                  NULL if sampling_ is None else ARRAY(sampling_),             # <<<<<<<<<<<<<<
 *                                  ARRAY(features_))
 * 
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_sampling_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_sampling_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":632
 *     NI_EuclideanFeatureTransform(ARRAY(input_),
 *                                  NULL if sampling_ is None else ARRAY(sampling_),
 *                                  ARRAY(features_))             # <<<<<<<<<<<<<<
 * 
 * cdef class CoordinateListWrapper:
 */
  XXX skipping exception checks: __pyx_t_5 == 0
  __pyx_t_5 = NI_EuclideanFeatureTransform(ARRAY(__pyx_v_input_), __pyx_t_4, ARRAY(__pyx_v_features_)); 

  __pyx_r = nullptr;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":634
 *                                  ARRAY(features_))
 * 
 * cdef class CoordinateListWrapper:             # <<<<<<<<<<<<<<
 *     cdef NI_CoordinateList *ptr
 *     def __cinit__(self):
 */
[PythonType]
ref struct CoordinateListWrapper {
  NI_CoordinateList *ptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":636
 * cdef class CoordinateListWrapper:
 *     cdef NI_CoordinateList *ptr
 *     def __cinit__(self):             # <<<<<<<<<<<<<<
 *         self.ptr = NULL
 *     def __dealloc__(self):
 */

  CoordinateListWrapper() {
    int __pyx_r;
    System::Object^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":637
 *     cdef NI_CoordinateList *ptr
 *     def __cinit__(self):
 *         self.ptr = NULL             # <<<<<<<<<<<<<<
 *     def __dealloc__(self):
 *         NI_FreeCoordinateList(self.ptr)
 */
    ((CoordinateListWrapper^)__pyx_v_self)->ptr = NULL;

    __pyx_r = 0;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":638
 *     def __cinit__(self):
 *         self.ptr = NULL
 *     def __dealloc__(self):             # <<<<<<<<<<<<<<
 *         NI_FreeCoordinateList(self.ptr)
 * 
 */

  !CoordinateListWrapper() {
    System::Object^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":639
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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":641
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
  PyArrayObject^ __pyx_v_input_ = nullptr;
  PyArrayObject^ __pyx_v_strct_ = nullptr;
  PyArrayObject^ __pyx_v_mask_ = nullptr;
  PyArrayObject^ __pyx_v_output_ = nullptr;
  PyArrayObject^ __pyx_v_origins_ = nullptr;
  int __pyx_v_changed;
  NI_CoordinateList *__pyx_v_coordinate_list;
  CoordinateListWrapper^ __pyx_v_colist_wrapper;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  void *__pyx_t_4;
  NI_CoordinateList **__pyx_t_5;
  int __pyx_t_6;
  __pyx_v_input = input;
  __pyx_v_strct = strct;
  __pyx_v_mask = mask;
  __pyx_v_output = output;
  __pyx_v_border_value = __site_cvt_641_0->Target(__site_cvt_641_0, border_value);
  __pyx_v_origins = origins;
  __pyx_v_invert = __site_cvt_641_0_1->Target(__site_cvt_641_0_1, invert);
  __pyx_v_center_is_true = __site_cvt_641_0_2->Target(__site_cvt_641_0_2, center_is_true);
  __pyx_v_return_coordinates = __site_cvt_641_0_3->Target(__site_cvt_641_0_3, return_coordinates);
  __pyx_v_colist_wrapper = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":644
 *                    int border_value, object origins, int invert,
 *                    int center_is_true, int return_coordinates):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)             # <<<<<<<<<<<<<<
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_input)); 
  __pyx_v_input_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":645
 *                    int center_is_true, int return_coordinates):
 *     cdef ndarray input_ = NI_ObjectToInputArray(input)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)             # <<<<<<<<<<<<<<
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_strct)); 
  __pyx_v_strct_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":646
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
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_mask_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":647
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)             # <<<<<<<<<<<<<<
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
 *     cdef int changed
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToOutputArray(__pyx_v_output)); 
  __pyx_v_output_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":648
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 *     cdef ndarray output_ = NI_ObjectToOutputArray(output)
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     cdef int changed
 *     cdef NI_CoordinateList *coordinate_list = NULL
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origins, NPY_INTP, NPY_CARRAY)); 
  __pyx_v_origins_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":650
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
 *     cdef int changed
 *     cdef NI_CoordinateList *coordinate_list = NULL             # <<<<<<<<<<<<<<
 *     NI_BinaryErosion(ARRAY(input_),
 *                      ARRAY(strct_),
 */
  __pyx_v_coordinate_list = NULL;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":653
 *     NI_BinaryErosion(ARRAY(input_),
 *                      ARRAY(strct_),
 *                      NULL if mask_ is None else ARRAY(mask_),             # <<<<<<<<<<<<<<
 *                      ARRAY(output_),
 *                      border_value,
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_mask_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_mask_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":660
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
  XXX skipping exception checks: __pyx_t_6 == 0
  __pyx_t_6 = NI_BinaryErosion(ARRAY(__pyx_v_input_), ARRAY(__pyx_v_strct_), __pyx_t_4, ARRAY(__pyx_v_output_), __pyx_v_border_value, ((npy_intp *)NpyArray_DATA(ARRAY(__pyx_v_origins_))), __pyx_v_invert, __pyx_v_center_is_true, (&__pyx_v_changed), __pyx_t_5); 

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":661
 *                      &changed,
 *                      &coordinate_list if return_coordinates else NULL)
 *     if return_coordinates:             # <<<<<<<<<<<<<<
 *         colist_wrapper = CoordinateListWrapper()
 *         colist_wrapper.ptr = coordinate_list
 */
  if (__pyx_v_return_coordinates) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":662
 *                      &coordinate_list if return_coordinates else NULL)
 *     if return_coordinates:
 *         colist_wrapper = CoordinateListWrapper()             # <<<<<<<<<<<<<<
 *         colist_wrapper.ptr = coordinate_list
 *         return changed, colist_wrapper
 */
    __pyx_t_1 = __site_call0_662_46->Target(__site_call0_662_46, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_7ndimage_9_nd_image_CoordinateListWrapper)));
    __pyx_v_colist_wrapper = ((CoordinateListWrapper^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":663
 *     if return_coordinates:
 *         colist_wrapper = CoordinateListWrapper()
 *         colist_wrapper.ptr = coordinate_list             # <<<<<<<<<<<<<<
 *         return changed, colist_wrapper
 *     else:
 */
    __pyx_v_colist_wrapper->ptr = __pyx_v_coordinate_list;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":664
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

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":666
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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":668
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
  PyArrayObject^ __pyx_v_array_ = nullptr;
  PyArrayObject^ __pyx_v_strct_ = nullptr;
  PyArrayObject^ __pyx_v_mask_ = nullptr;
  PyArrayObject^ __pyx_v_origins_ = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  int __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  void *__pyx_t_4;
  int __pyx_t_5;
  __pyx_v_array = array;
  __pyx_v_strct = strct;
  __pyx_v_mask = mask;
  __pyx_v_niter = __site_cvt_668_0->Target(__site_cvt_668_0, niter);
  __pyx_v_origins = origins;
  __pyx_v_invert = __site_cvt_668_0_1->Target(__site_cvt_668_0_1, invert);
  __pyx_v_colist_wrapper = ((CoordinateListWrapper^)colist_wrapper);
  if (unlikely(dynamic_cast<__pyx_obj_5scipy_7ndimage_9_nd_image_CoordinateListWrapper^>(__pyx_v_colist_wrapper) == nullptr)) {
    throw PythonOps::TypeError("Argument 'colist_wrapper' has incorrect type");
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":671
 *                     object origins, int invert,
 *                     CoordinateListWrapper colist_wrapper):
 *     cdef ndarray array_ = NI_ObjectToIoArray(array)             # <<<<<<<<<<<<<<
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToIoArray(__pyx_v_array)); 
  __pyx_v_array_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":672
 *                     CoordinateListWrapper colist_wrapper):
 *     cdef ndarray array_ = NI_ObjectToIoArray(array)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)             # <<<<<<<<<<<<<<
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
 */
  __pyx_t_1 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_strct)); 
  __pyx_v_strct_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":673
 *     cdef ndarray array_ = NI_ObjectToIoArray(array)
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)             # <<<<<<<<<<<<<<
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)
 *     NI_BinaryErosion2(ARRAY(array_),
 */
  __pyx_t_2 = (__pyx_v_mask == nullptr);
  if (__pyx_t_2) {
    __pyx_t_1 = nullptr;
  } else {
    __pyx_t_3 = ((System::Object^)NI_ObjectToInputArray(__pyx_v_mask)); 
    __pyx_t_1 = __pyx_t_3;
    __pyx_t_3 = nullptr;
  }
  if (__pyx_t_1 == nullptr || dynamic_cast<PyArrayObject^>(__pyx_t_1) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_mask_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":674
 *     cdef ndarray strct_ = NI_ObjectToInputArray(strct)
 *     cdef ndarray mask_ = None if mask is None else NI_ObjectToInputArray(mask)
 *     cdef ndarray origins_ = NA_InputArray(origins, NPY_INTP, NPY_CARRAY)             # <<<<<<<<<<<<<<
 *     NI_BinaryErosion2(ARRAY(array_),
 *                       ARRAY(strct_),
 */
  __pyx_t_1 = ((System::Object^)NA_InputArray(__pyx_v_origins, NPY_INTP, NPY_CARRAY)); 
  __pyx_v_origins_ = ((PyArrayObject^)__pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":677
 *     NI_BinaryErosion2(ARRAY(array_),
 *                       ARRAY(strct_),
 *                       NULL if mask_ is None else ARRAY(mask_),             # <<<<<<<<<<<<<<
 *                       niter,
 *                       <npy_intp*>NpyArray_DATA(ARRAY(origins_)),
 */
  __pyx_t_2 = (((System::Object^)__pyx_v_mask_) == nullptr);
  if (__pyx_t_2) {
    __pyx_t_4 = NULL;
  } else {
    __pyx_t_4 = ARRAY(__pyx_v_mask_);
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":681
 *                       <npy_intp*>NpyArray_DATA(ARRAY(origins_)),
 *                       invert,
 *                       &colist_wrapper.ptr)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  XXX skipping exception checks: __pyx_t_5 == 0
  __pyx_t_5 = NI_BinaryErosion2(ARRAY(__pyx_v_array_), ARRAY(__pyx_v_strct_), __pyx_t_4, __pyx_v_niter, ((npy_intp *)NpyArray_DATA(ARRAY(__pyx_v_origins_))), __pyx_v_invert, (&__pyx_v_colist_wrapper->ptr)); 

  __pyx_r = nullptr;
  return __pyx_r;
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
  __site_istrue_278_51 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_istrue_280_51 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_istrue_282_54 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_istrue_284_53 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_303_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_312_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_312_21 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_313_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_317_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_345_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_345_0_1 = CallSite< System::Func< CallSite^, System::Object^, NI_ExtendMode >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, NI_ExtendMode::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_345_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_345_0_3 = CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, ni_size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_353_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_353_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_359_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_365_0 = CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, ni_size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_365_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_365_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_365_0_3 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_365_0_4 = CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, ni_size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_373_0 = CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, ni_size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_373_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_373_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_373_0_3 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_373_0_4 = CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, ni_size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_373_0_5 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_382_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_382_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_382_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_399_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_399_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_399_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_421_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_422_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_422_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_423_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_424_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_424_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_425_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call2_ARGS_KWARGS_435_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument::Simple, Argument(ArgumentType::List), Argument(ArgumentType::Dictionary)})));
  __site_cvt_438_0 = CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, ni_size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_438_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_438_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_438_0_3 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_438_0_4 = CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, ni_size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call3_451_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_call1_ARGS_KWARGS_461_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument(ArgumentType::List), Argument(ArgumentType::Dictionary)})));
  __site_cvt_double_462_18 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_465_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_465_0_1 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call3_478_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_cvt_484_0 = CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, ni_size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_484_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_484_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_492_0 = CallSite< System::Func< CallSite^, System::Object^, ni_size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, ni_size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_492_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_500_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_500_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_append_511_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_511_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_512_17 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_ARGS_KWARGS_513_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument(ArgumentType::List), Argument(ArgumentType::Dictionary)})));
  __site_getindex_515_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_double_515_22 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_518_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_518_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_518_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_call3_535_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_cvt_548_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_548_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_548_0_2 = CallSite< System::Func< CallSite^, System::Object^, double >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, double::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_567_0 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_585_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_call1_586_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_iterator_586_8 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_op_mul_587_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_npy_intp_587_18 = CallSite< System::Func< CallSite^, System::Object^, npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_589_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_call1_590_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_iterator_590_16 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_op_add_591_44 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt_Py_ssize_t_591_44 = CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, Py_ssize_t::typeid, ConversionResultKind::ExplicitCast));
  __site_op_add_591_63 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_op_add_591_68 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt_Py_ssize_t_591_68 = CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, Py_ssize_t::typeid, ConversionResultKind::ExplicitCast));
  __site_call3_591_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_setindex_592_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_call1_593_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_setindex_593_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_setindex_595_22 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_cvt_608_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_641_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_641_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_641_0_2 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_641_0_3 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call0_662_46 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_cvt_668_0 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_668_0_1 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
}
[SpecialName]
static void PerformModuleReload(PythonContext^ context, PythonDictionary^ dict) {
  dict["__builtins__"] = context->BuiltinModuleInstance;
  __pyx_context = (gcnew ModuleContext(dict, context))->GlobalContext;
  __Pyx_InitSites(__pyx_context);
  __Pyx_InitGlobals();
  /*--- Type init code ---*/
  // XXX skipping generate_dotnet_type_init_code for ndarray
  // XXX skipping generate_dotnet_type_init_code for dtype
  __pyx_ptype_5scipy_7ndimage_9_nd_image_CallbackInfo = safe_cast<Types::PythonType^>(dict["CallbackInfo"]);
  __pyx_ptype_5scipy_7ndimage_9_nd_image_CoordinateListWrapper = safe_cast<Types::PythonType^>(dict["CoordinateListWrapper"]);
  /*--- Create function pointers ---*/
  __pyx_delegate_val_cbwrapper_filter_1d = gcnew __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_filter_1d(cbwrapper_filter_1d);
  __pyx_function_pointer_cbwrapper_filter_1d = (__pyx_fp_t_cbwrapper_filter_1d)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_cbwrapper_filter_1d).ToPointer());
  __pyx_delegate_val_cbwrapper_filter = gcnew __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_filter(cbwrapper_filter);
  __pyx_function_pointer_cbwrapper_filter = (__pyx_fp_t_cbwrapper_filter)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_cbwrapper_filter).ToPointer());
  __pyx_delegate_val_cbwrapper_map = gcnew __pyx_delegate_t_5scipy_7ndimage_9_nd_image_cbwrapper_map(cbwrapper_map);
  __pyx_function_pointer_cbwrapper_map = (__pyx_fp_t_cbwrapper_map)(InteropServices::Marshal::GetFunctionPointerForDelegate(__pyx_delegate_val_cbwrapper_map).ToPointer());
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":33
 * #
 * 
 * import numpy as np             # <<<<<<<<<<<<<<
 * 
 * DEF DOTNET = False
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":122
 * 
 * 
 *     cdef void* NULL_dtype = NULL             # <<<<<<<<<<<<<<
 * 
 *     cdef inline void incref(object o):
 */
  __pyx_v_5scipy_7ndimage_9_nd_image_NULL_dtype = NULL;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":180
 * 
 * 
 * import_array()             # <<<<<<<<<<<<<<
 * 
 * #
 */
  import_array();

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\ndimage\_nd_image.pyx":1
 * # Copyright (C) 2003-2005 Peter J. Verveer             # <<<<<<<<<<<<<<
 * # (ported to Cython by Dag Sverre Seljebotn)
 * #
 */
  __pyx_t_2 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_2));
  __pyx_t_2 = nullptr;

  /* "C:\Python26\lib\site-packages\Cython\Includes\cpython\type.pxd":2
 * 
 * cdef extern from "Python.h":             # <<<<<<<<<<<<<<
 *     # The C structure of the objects used to describe built-in types.
 * 
 */
}
/* Cython code section 'cleanup_globals' */
/* Cython code section 'cleanup_module' */
/* Cython code section 'main_method' */
/* Cython code section 'dotnet_globals' */





































static Types::PythonType^ __pyx_ptype_5scipy_7ndimage_9_nd_image_ndarray = nullptr;
static Types::PythonType^ __pyx_ptype_5scipy_7ndimage_9_nd_image_dtype = nullptr;
static Types::PythonType^ __pyx_ptype_5scipy_7ndimage_9_nd_image_CallbackInfo = nullptr;
static Types::PythonType^ __pyx_ptype_5scipy_7ndimage_9_nd_image_CoordinateListWrapper = nullptr;
static void *__pyx_v_5scipy_7ndimage_9_nd_image_NULL_dtype;
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
  if (__Pyx_GetBuffer(obj, buf, flags) == -1) goto fail;
  if (buf->NumberDimensions != nd) {
#if 0
    XXX
    PyErr_Format(PyExc_ValueError,
                 "Buffer has wrong number of dimensions (expected %d, got %d)",
                 nd, buf->ndim);
#endif
    goto fail;
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
#if 0
    XXX
    PyErr_Format(PyExc_ValueError,
      "Item size of buffer (%"PY_FORMAT_SIZE_T"d byte%s) does not match size of '%s' (%"PY_FORMAT_SIZE_T"d byte%s)",
      buf->itemsize, (buf->itemsize > 1) ? "s" : "",
      dtype->name,
      dtype->size, (dtype->size > 1) ? "s" : "");
#endif
    goto fail;
  }
#if 0
  XXX
  if (buf->suboffsets == NULL) buf->suboffsets = __Pyx_minusones;
#endif
  return;
fail:;
  buf = nullptr;
  throw PythonOps::ValueError("XXX buffer error");
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

static int __Pyx_GetBuffer(System::Object^ obj, NumpyDotNet::IExtBufferProtocol^& view, int flags) {
  view = NumpyDotNet::NpyBuffer::GetBufferForObject(obj, (NumpyDotNet::NpyBuffer::PyBuf)flags);
  return 0;
}
static void __Pyx_ReleaseBuffer(NumpyDotNet::IExtBufferProtocol^ view) {
  /* do nothing */
}
/* Cython code section 'end' */
};
[assembly: PythonModule("scipy__ndimage___nd_image", module__nd_image::typeid)];
};
