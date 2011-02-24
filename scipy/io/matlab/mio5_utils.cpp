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
  dict["__module__"] = "scipy.io.matlab.mio5_utils";
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
#define __PYX_HAVE_API__scipy__io__matlab__mio5_utils
#include "stdlib.h"
#include "string.h"
#include "stdio.h"
#include "pythread.h"
#include "npy_defs.h"
#include "npy_arrayobject.h"
#include "npy_descriptor.h"
#include "npy_ufunc_object.h"
#include "npy_api.h"
#include "npy_ironpython.h"
#include "numpy_rephrasing.h"

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
  "mio5_utils.pyx",
};
/* Cython code section 'utility_code_proto_before_types' */
/* Cython code section 'numeric_typedefs' */

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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pxd":6
 *     cdef object fobj
 * 
 *     cpdef int seek(self, long int offset, int whence=*) except -1             # <<<<<<<<<<<<<<
 *     cpdef long int tell(self) except -1
 *     cdef int read_into(self, void *buf, size_t n) except -1
 */

ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13GenericStream_seek {
  int __pyx_n;
  int whence;
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pxd":9
 *     cpdef long int tell(self) except -1
 *     cdef int read_into(self, void *buf, size_t n) except -1
 *     cdef object read_string(self, size_t n, void **pp, int copy=*)             # <<<<<<<<<<<<<<
 * 
 * cpdef GenericStream make_stream(object fobj)
 */

ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13GenericStream_read_string {
  int __pyx_n;
  int copy;
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":68
 * 
 * 
 * cdef enum:             # <<<<<<<<<<<<<<
 *     miINT8 = 1
 *     miUINT8 = 2
 */

enum  {
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miINT8 = 1,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miUINT8 = 2,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miINT16 = 3,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miUINT16 = 4,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miINT32 = 5,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miUINT32 = 6,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miSINGLE = 7,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miDOUBLE = 9,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miINT64 = 12,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miUINT64 = 13,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miMATRIX = 14,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miCOMPRESSED = 15,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miUTF8 = 16,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miUTF16 = 17,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_miUTF32 = 18
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":85
 *     miUTF32 = 18
 * 
 * cdef enum: # see comments in mio5_params             # <<<<<<<<<<<<<<
 *     mxCELL_CLASS = 1
 *     mxSTRUCT_CLASS = 2
 */

enum  {
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxCELL_CLASS = 1,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxSTRUCT_CLASS = 2,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxOBJECT_CLASS = 3,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxCHAR_CLASS = 4,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxSPARSE_CLASS = 5,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxDOUBLE_CLASS = 6,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxSINGLE_CLASS = 7,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxINT8_CLASS = 8,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxUINT8_CLASS = 9,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxINT16_CLASS = 10,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxUINT16_CLASS = 11,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxINT32_CLASS = 12,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxUINT32_CLASS = 13,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxINT64_CLASS = 14,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxUINT64_CLASS = 15,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxFUNCTION_CLASS = 16,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxOPAQUE_CLASS = 17,
  __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxOBJECT_CLASS_FROM_MATRIX_H = 18
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":314
 *         return 1
 * 
 *     cdef object read_element(self,             # <<<<<<<<<<<<<<
 *                              cnp.uint32_t *mdtype_ptr,
 *                              cnp.uint32_t *byte_count_ptr,
 */

ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_read_element {
  int __pyx_n;
  int copy;
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":410
 *         return 0
 * 
 *     cpdef inline cnp.ndarray read_numeric(self, int copy=True):             # <<<<<<<<<<<<<<
 *         ''' Read numeric data element into ndarray
 * 
 */

ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_read_numeric {
  int __pyx_n;
  int copy;
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":590
 *         return size
 * 
 *     cdef read_mi_matrix(self, int process=1):             # <<<<<<<<<<<<<<
 *         ''' Read header with matrix at sub-levels
 * 
 */

ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_read_mi_matrix {
  int __pyx_n;
  int process;
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":622
 *         return self.array_from_header(header, process)
 * 
 *     cpdef array_from_header(self, VarHeader5 header, int process=1):             # <<<<<<<<<<<<<<
 *         ''' Read array of any class, given matrix `header`
 * 
 */

ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_array_from_header {
  int __pyx_n;
  int process;
};


/* Cython code section 'utility_code_proto' */

static CYTHON_INLINE long __Pyx_mod_long(long, long); /* proto */

static CYTHON_INLINE long __Pyx_div_long(long, long); /* proto */

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
static void __Pyx_RaiseBufferIndexError(int axis); /*proto*/
#define __Pyx_BufPtrFull1d(type, buf, i0, s0, o0) (type)(__Pyx_BufPtrFull1d_imp(buf, i0, s0, o0))
static CYTHON_INLINE void* __Pyx_BufPtrFull1d_imp(void* buf, Py_ssize_t i0, Py_ssize_t s0, Py_ssize_t o0);

static CYTHON_INLINE Py_ssize_t __Pyx_div_Py_ssize_t(Py_ssize_t, Py_ssize_t); /* proto */

#define UNARY_NEG_WOULD_OVERFLOW(x)		(((x) < 0) & ((unsigned long)(x) == 0-(unsigned long)(x)))
static int __Pyx_GetBuffer(System::Object^ obj, NumpyDotNet::IExtBufferProtocol^& view, int flags);
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
/* Module declarations from libc.stdlib */
/* Module declarations from libc.string */
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
/* Module declarations from numpy */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int);
static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *, void **, char *, int, int, int, int, char *, char *, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5numpy_PyArray_ZEROS(int, __pyx_t_5numpy_intp_t *, int, int);
static CYTHON_INLINE System::Object^ PyArray_ZEROS(int, __pyx_t_5numpy_intp_t *, int, int); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void *__pyx_delegate_t_5numpy_PyArray_DATA(NumpyDotNet::ndarray^);
static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_5numpy_intp_t *__pyx_delegate_t_5numpy_PyArray_DIMS(NumpyDotNet::ndarray^);
static CYTHON_INLINE __pyx_t_5numpy_intp_t *PyArray_DIMS(NumpyDotNet::ndarray^); /*proto*/
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate void __pyx_delegate_t_5numpy_import_array(void);
static CYTHON_INLINE void import_array(void); /*proto*/
/* Module declarations from scipy.io.matlab.streams */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate GenericStream^ (*__pyx_delegate_t_5scipy_2io_6matlab_7streams_make_stream)(System::Object^, int __pyx_skip_dispatch);
static GenericStream^ (*make_stream)(System::Object^, int __pyx_skip_dispatch); /*proto*/
/* Module declarations from scipy.io.matlab.mio5_utils */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate __pyx_t_5numpy_uint32_t __pyx_delegate_t_5scipy_2io_6matlab_10mio5_utils_byteswap_u4(__pyx_t_5numpy_uint32_t, int __pyx_skip_dispatch);
static __pyx_t_5numpy_uint32_t byteswap_u4(__pyx_t_5numpy_uint32_t, int __pyx_skip_dispatch); /*proto*/
/* Cython code section 'typeinfo' */
static __Pyx_TypeInfo __Pyx_TypeInfo_object = { "Python object", NULL, sizeof(System::Object^), 'O' };
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.io.matlab.mio5_utils"

/* Implementation of scipy.io.matlab.mio5_utils */
namespace clr_mio5_utils {
  public ref class module_mio5_utils sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_byteorder_105_15;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_105_26;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_cvt_bool_106_24;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_cvt_bool_106_32;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_cvt_bool_107_25;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_cvt_bool_107_33;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_OPAQUE_DTYPE_109_35;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_127_20;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_136_25;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_136_25;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_137_8;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_137_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_138_47;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_int32_t >^ >^ __site_cvt___pyx_t_5numpy_int32_t_138_47;
static  CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >^ __site_cvt_Py_ssize_t_138_27;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_142_20;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_142_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_byte_order_173_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_174_37;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_174_37;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_176_46;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_178_42;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_struct_as_record_180_39;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_180_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_MDTYPES_182_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_182_35;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_182_47;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_copy_182_57;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_182_62;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_uint16_codec_183_35;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_encode_186_44;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_186_51;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_186_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_encode_187_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_187_32;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_187_21;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_sub_187_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_186_19;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_188_19;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_set_stream_190_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_mat_stream_190_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_190_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_mat_dtype_192_32;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_192_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_chars_as_strings_193_39;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_193_39;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_squeeze_me_194_33;
static  CallSite< System::Func< CallSite^, System::Object^, int >^ >^ __site_cvt_int_194_33;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_MDTYPES_197_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_197_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_197_48;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_items_197_58;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_197_64;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_197_8;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_198_29;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_198_29;
static  CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >^ __site_cvt_Py_ssize_t_199_31;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_MDTYPES_201_28;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_201_36;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_201_48;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_items_201_59;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_201_65;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_201_8;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_202_29;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_202_29;
static  CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >^ __site_cvt_Py_ssize_t_203_37;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_dtype_206_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_206_36;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_dtype_208_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_208_36;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_dtype_209_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_209_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_299_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_itemsize_425_35;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_floordiv_425_30;
static  CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >^ __site_cvt___pyx_t_5numpy_npy_intp_425_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_456_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_478_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_543_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_559_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_558_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_563_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_563_30;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_613_27;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_array_616_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_616_31;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_array_618_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_618_31;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_astype_657_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_657_32;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_665_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_671_29;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_MatlabObject_673_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_673_36;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_MatlabFunction_676_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_676_38;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_MatlabOpaque_681_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_681_36;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_685_34;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_itemsize_698_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_698_28;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_698_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_astype_699_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_699_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_astype_701_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_701_32;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_set_imag_702_15;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_reshape_705_18;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_705_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_705_26;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_T_705_45;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_717_34;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_add_717_24;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_size_t_732_8;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_size_t_732_8_1;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getslice_733_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_734_20;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_size_t_734_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getslice_735_23;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getslice_736_21;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_sparse_737_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_csc_matrix_737_27;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_shape_737_38;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_array_774_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_774_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_dtype_774_26;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndarray_775_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call0_shape_dtype_buffer_order_775_29;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_786_26;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_eq_786_41;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_786_41;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndarray_787_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call0_shape_dtype_buffer_787_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_astype_790_26;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_uint8_790_36;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_790_33;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_tostring_790_43;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_790_52;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, bool >^ >^ __site_contains_793_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_794_31;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_795_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_796_61;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_796_31;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_799_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_798_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_decode_800_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_800_28;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_array_802_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_dtype_802_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_ndarray_805_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call0_shape_dtype_buffer_order_805_25;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_816_35;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_816_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_818_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_dtype_818_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_reshape_821_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_821_29;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_T_821_38;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_839_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_853_24;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mod_863_32;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_864_23;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_864_30;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_886_35;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_886_23;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_893_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_dtype_893_31;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_T_893_54;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_895_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_895_45;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_895_52;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_897_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_dtype_897_30;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_899_16;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_900_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_900_30;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_reshape_901_26;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_901_34;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_T_901_43;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_mat_struct_903_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_903_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_set__fieldnames_904_20;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_905_19;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_dtype_905_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_907_25;
static  CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >^ __site_get_iterator_908_12;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get___dict___909_20;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_909_29;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_reshape_911_21;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_911_29;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_T_911_38;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_empty_929_33;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_dtype_929_39;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_930_11;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_930_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_931_11;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_931_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_932_11;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_932_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_933_11;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_setindex_933_14;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_append_189_18;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_189_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_zeros_191_16;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call3_191_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_195_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_195_49;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_Array_199_49;
static  CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >^ __site_cvt_PY_LONG_LONG_199_49;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
static int^ __pyx_int_0;
static int^ __pyx_int_1;
static int^ __pyx_int_4;
static int^ __pyx_int_neg_1;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":112
 * 
 * 
 * cpdef cnp.uint32_t byteswap_u4(cnp.uint32_t u4):             # <<<<<<<<<<<<<<
 *     return ((u4 << 24) |
 *            ((u4 << 8) & 0xff0000U) |
 */

static  __pyx_t_5numpy_uint32_t byteswap_u4(__pyx_t_5numpy_uint32_t __pyx_v_u4) {
  __pyx_t_5numpy_uint32_t __pyx_r;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":116
 *            ((u4 << 8) & 0xff0000U) |
 *            ((u4 >> 8 & 0xff00u)) |
 *            (u4 >> 24))             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((((__pyx_v_u4 << 24) | ((__pyx_v_u4 << 8) & 0xff0000U)) | ((__pyx_v_u4 >> 8) & 0xff00U)) | (__pyx_v_u4 >> 24));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":119
 * 
 * 
 * cdef class VarHeader5:             # <<<<<<<<<<<<<<
 *     cdef readonly object name
 *     cdef readonly int mclass
 */
[PythonType]
ref struct VarHeader5 {
  System::Object^ name;
  int mclass;
  System::Object^ dims;
  __pyx_t_5numpy_int32_t (&dims_ptr)[32];
  int n_dims;
  int is_complex;
  int is_logical;
  int is_global;
  size_t nzmax;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":120
 * 
 * cdef class VarHeader5:
 *     cdef readonly object name             # <<<<<<<<<<<<<<
 *     cdef readonly int mclass
 *     cdef readonly object dims
 */

  virtual System::Object^ __pyx_pf_5scipy_2io_6matlab_10mio5_utils_10VarHeader5_4name___get__() {
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_v_self = this;
    __pyx_r = ((VarHeader5^)__pyx_v_self)->name;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":121
 * cdef class VarHeader5:
 *     cdef readonly object name
 *     cdef readonly int mclass             # <<<<<<<<<<<<<<
 *     cdef readonly object dims
 *     cdef cnp.int32_t dims_ptr[_MAT_MAXDIMS]
 */

  virtual System::Object^ __pyx_pf_5scipy_2io_6matlab_10mio5_utils_10VarHeader5_6mclass___get__() {
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_v_self = this;
    __pyx_t_1 = ((VarHeader5^)__pyx_v_self)->mclass;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":122
 *     cdef readonly object name
 *     cdef readonly int mclass
 *     cdef readonly object dims             # <<<<<<<<<<<<<<
 *     cdef cnp.int32_t dims_ptr[_MAT_MAXDIMS]
 *     cdef int n_dims
 */

  virtual System::Object^ __pyx_pf_5scipy_2io_6matlab_10mio5_utils_10VarHeader5_4dims___get__() {
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_v_self = this;
    __pyx_r = ((VarHeader5^)__pyx_v_self)->dims;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":127
 *     cdef int is_complex
 *     cdef int is_logical
 *     cdef public int is_global             # <<<<<<<<<<<<<<
 *     cdef size_t nzmax
 * 
 */

  virtual System::Object^ __pyx_pf_5scipy_2io_6matlab_10mio5_utils_10VarHeader5_9is_global___get__() {
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_v_self = this;
    __pyx_t_1 = ((VarHeader5^)__pyx_v_self)->is_global;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  virtual int __pyx_pf_5scipy_2io_6matlab_10mio5_utils_10VarHeader5_9is_global___set__(System::Object^ value) {
    System::Object^ __pyx_v_value = nullptr;
    int __pyx_r;
    int __pyx_t_1;
    System::Object^ __pyx_v_self = this;
    __pyx_v_value = value;
    __pyx_t_1 = __site_cvt_int_127_20->Target(__site_cvt_int_127_20, __pyx_v_value);
    ((VarHeader5^)__pyx_v_self)->is_global = __pyx_t_1;

    __pyx_r = 0;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":130
 *     cdef size_t nzmax
 * 
 *     def set_dims(self, dims):             # <<<<<<<<<<<<<<
 *         """ Allow setting of dimensions from python
 * 
 */

  virtual System::Object^ set_dims(System::Object^ dims) {
    System::Object^ __pyx_v_dims = nullptr;
    System::Object^ __pyx_v_i;
    System::Object^ __pyx_v_dim;
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_t_2 = nullptr;
    int __pyx_t_3;
    System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> __pyx_t_4;
    System::Object^ __pyx_t_5 = nullptr;
    __pyx_t_5numpy_int32_t __pyx_t_6;
    Py_ssize_t __pyx_t_7;
    System::Object^ __pyx_v_self = this;
    __pyx_v_dims = dims;
    __pyx_v_i = nullptr;
    __pyx_v_dim = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":135
 *         This is for constructing headers for tests
 *         """
 *         self.dims = dims             # <<<<<<<<<<<<<<
 *         self.n_dims = len(dims)
 *         for i, dim in enumerate(dims):
 */
    ((VarHeader5^)__pyx_v_self)->dims = __pyx_v_dims;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":136
 *         """
 *         self.dims = dims
 *         self.n_dims = len(dims)             # <<<<<<<<<<<<<<
 *         for i, dim in enumerate(dims):
 *             self.dims_ptr[i] = <cnp.int32_t>int(dim)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "len");
    __pyx_t_2 = __site_call1_136_25->Target(__site_call1_136_25, __pyx_context, __pyx_t_1, __pyx_v_dims);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = __site_cvt_int_136_25->Target(__site_cvt_int_136_25, __pyx_t_2);
    __pyx_t_2 = nullptr;
    ((VarHeader5^)__pyx_v_self)->n_dims = __pyx_t_3;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":137
 *         self.dims = dims
 *         self.n_dims = len(dims)
 *         for i, dim in enumerate(dims):             # <<<<<<<<<<<<<<
 *             self.dims_ptr[i] = <cnp.int32_t>int(dim)
 * 
 */
    __pyx_t_2 = __pyx_int_0;
    __pyx_t_4 = __site_get_iterator_137_8->Target(__site_get_iterator_137_8, __pyx_v_dims);
    try {
      while (__pyx_t_4.Key->MoveNext()) {
        __pyx_v_dim = ((System::Object^)__pyx_t_4.Key->Current);
        __pyx_v_i = __pyx_t_2;
        __pyx_t_1 = __site_op_add_137_31->Target(__site_op_add_137_31, __pyx_t_2, __pyx_int_1);
        XXX ResultRefNode
        __pyx_t_2 = __pyx_t_1;
        __pyx_t_1 = nullptr;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":138
 *         self.n_dims = len(dims)
 *         for i, dim in enumerate(dims):
 *             self.dims_ptr[i] = <cnp.int32_t>int(dim)             # <<<<<<<<<<<<<<
 * 
 * 
 */
        __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "int");
        __pyx_t_5 = __site_call1_138_47->Target(__site_call1_138_47, __pyx_context, ((System::Object^)__pyx_t_1), __pyx_v_dim);
        __pyx_t_1 = nullptr;
        __pyx_t_6 = __site_cvt___pyx_t_5numpy_int32_t_138_47->Target(__site_cvt___pyx_t_5numpy_int32_t_138_47, __pyx_t_5);
        __pyx_t_5 = nullptr;
        __pyx_t_7 = __site_cvt_Py_ssize_t_138_27->Target(__site_cvt_Py_ssize_t_138_27, __pyx_v_i);
        (((VarHeader5^)__pyx_v_self)->dims_ptr[__pyx_t_7]) = ((__pyx_t_5numpy_int32_t)__pyx_t_6);
      }
    }
    finally {
      PythonOps::ForLoopDispose(__pyx_t_4);
    }
    __pyx_t_2 = nullptr;

    __pyx_r = nullptr;
    return __pyx_r;
  }
  VarHeader5() : dims_ptr(*(new __pyx_t_5numpy_int32_t [32])) {
  }
  !VarHeader5() {
    delete[] &dims_ptr;
  }
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":141
 * 
 * 
 * cdef class VarReader5:             # <<<<<<<<<<<<<<
 *     cdef public int is_swapped, little_endian
 *     cdef int struct_as_record
 */
[PythonType]
ref struct VarReader5 {
  int is_swapped;
  int little_endian;
  int struct_as_record;
  System::Object^ codecs;
  System::Object^ uint16_codec;
  GenericStream^ cstream;
  PyObject *(&dtypes)[20];
  PyObject *(&class_dtypes)[20];
  NumpyDotNet::dtype^ U1_dtype;
  NumpyDotNet::dtype^ bool_dtype;
  int mat_dtype;
  int squeeze_me;
  int chars_as_strings;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":142
 * 
 * cdef class VarReader5:
 *     cdef public int is_swapped, little_endian             # <<<<<<<<<<<<<<
 *     cdef int struct_as_record
 *     cdef object codecs, uint16_codec
 */

  virtual System::Object^ __pyx_pf_5scipy_2io_6matlab_10mio5_utils_10VarReader5_10is_swapped___get__() {
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_v_self = this;
    __pyx_t_1 = ((VarReader5^)__pyx_v_self)->is_swapped;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  virtual int __pyx_pf_5scipy_2io_6matlab_10mio5_utils_10VarReader5_10is_swapped___set__(System::Object^ value) {
    System::Object^ __pyx_v_value = nullptr;
    int __pyx_r;
    int __pyx_t_1;
    System::Object^ __pyx_v_self = this;
    __pyx_v_value = value;
    __pyx_t_1 = __site_cvt_int_142_20->Target(__site_cvt_int_142_20, __pyx_v_value);
    ((VarReader5^)__pyx_v_self)->is_swapped = __pyx_t_1;

    __pyx_r = 0;
    return __pyx_r;
  }

  virtual System::Object^ __pyx_pf_5scipy_2io_6matlab_10mio5_utils_10VarReader5_13little_endian___get__() {
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_v_self = this;
    __pyx_t_1 = ((VarReader5^)__pyx_v_self)->little_endian;
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  virtual int __pyx_pf_5scipy_2io_6matlab_10mio5_utils_10VarReader5_13little_endian___set__(System::Object^ value) {
    System::Object^ __pyx_v_value = nullptr;
    int __pyx_r;
    int __pyx_t_1;
    System::Object^ __pyx_v_self = this;
    __pyx_v_value = value;
    __pyx_t_1 = __site_cvt_int_142_32->Target(__site_cvt_int_142_32, __pyx_v_value);
    ((VarReader5^)__pyx_v_self)->little_endian = __pyx_t_1;

    __pyx_r = 0;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":172
 *     * squeeze_me (bool)
 *     """
 *     def __new__(self, preader):             # <<<<<<<<<<<<<<
 *         byte_order = preader.byte_order
 *         self.is_swapped = byte_order == swapped_code
 */

  VarReader5(System::Object^ preader) : dtypes(*(new PyObject *[20])), class_dtypes(*(new PyObject *[20])) {
    System::Object^ __pyx_v_preader = nullptr;
    System::Object^ __pyx_v_byte_order;
    System::Object^ __pyx_v_uint16_codec;
    System::Object^ __pyx_v_key;
    System::Object^ __pyx_v_dt;
    System::Object^ __pyx_v_bool_dtype;
    int __pyx_r;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_t_2 = nullptr;
    int __pyx_t_3;
    int __pyx_t_4;
    int __pyx_t_5;
    int __pyx_t_6;
    System::Object^ __pyx_t_7 = nullptr;
    System::Object^ __pyx_t_8 = nullptr;
    int __pyx_t_9;
    int __pyx_t_10;
    int __pyx_t_11;
    System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> __pyx_t_12;
    array<System::Object^>^ __pyx_t_13;
    int __pyx_t_14;
    Py_ssize_t __pyx_t_15;
    System::Object^ __pyx_t_16 = nullptr;
    Py_ssize_t __pyx_t_17;
    System::Object^ __pyx_v_self = this;
    __pyx_v_preader = preader;
    __pyx_v_byte_order = nullptr;
    __pyx_v_uint16_codec = nullptr;
    __pyx_v_key = nullptr;
    __pyx_v_dt = nullptr;
    __pyx_v_bool_dtype = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":173
 *     """
 *     def __new__(self, preader):
 *         byte_order = preader.byte_order             # <<<<<<<<<<<<<<
 *         self.is_swapped = byte_order == swapped_code
 *         if self.is_swapped:
 */
    __pyx_t_1 = __site_get_byte_order_173_28->Target(__site_get_byte_order_173_28, __pyx_v_preader, __pyx_context);
    __pyx_v_byte_order = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":174
 *     def __new__(self, preader):
 *         byte_order = preader.byte_order
 *         self.is_swapped = byte_order == swapped_code             # <<<<<<<<<<<<<<
 *         if self.is_swapped:
 *             self.little_endian = not sys_is_le
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "swapped_code");
    __pyx_t_2 = __site_op_eq_174_37->Target(__site_op_eq_174_37, __pyx_v_byte_order, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = __site_cvt_int_174_37->Target(__site_cvt_int_174_37, __pyx_t_2);
    __pyx_t_2 = nullptr;
    ((VarReader5^)__pyx_v_self)->is_swapped = __pyx_t_3;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":175
 *         byte_order = preader.byte_order
 *         self.is_swapped = byte_order == swapped_code
 *         if self.is_swapped:             # <<<<<<<<<<<<<<
 *             self.little_endian = not sys_is_le
 *         else:
 */
    if (((VarReader5^)__pyx_v_self)->is_swapped) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":176
 *         self.is_swapped = byte_order == swapped_code
 *         if self.is_swapped:
 *             self.little_endian = not sys_is_le             # <<<<<<<<<<<<<<
 *         else:
 *             self.little_endian = sys_is_le
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "sys_is_le");
      __pyx_t_4 = __site_istrue_176_46->Target(__site_istrue_176_46, __pyx_t_2);
      __pyx_t_2 = nullptr;
      ((VarReader5^)__pyx_v_self)->little_endian = (!__pyx_t_4);
      goto __pyx_L5;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":178
 *             self.little_endian = not sys_is_le
 *         else:
 *             self.little_endian = sys_is_le             # <<<<<<<<<<<<<<
 *         # option affecting reading of matlab struct arrays
 *         self.struct_as_record = preader.struct_as_record
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "sys_is_le");
      __pyx_t_5 = __site_cvt_int_178_42->Target(__site_cvt_int_178_42, __pyx_t_2);
      __pyx_t_2 = nullptr;
      ((VarReader5^)__pyx_v_self)->little_endian = __pyx_t_5;
    }
    __pyx_L5:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":180
 *             self.little_endian = sys_is_le
 *         # option affecting reading of matlab struct arrays
 *         self.struct_as_record = preader.struct_as_record             # <<<<<<<<<<<<<<
 *         # store codecs for text matrix reading
 *         self.codecs = mio5p.MDTYPES[byte_order]['codecs'].copy()
 */
    __pyx_t_2 = __site_get_struct_as_record_180_39->Target(__site_get_struct_as_record_180_39, __pyx_v_preader, __pyx_context);
    __pyx_t_6 = __site_cvt_int_180_39->Target(__site_cvt_int_180_39, __pyx_t_2);
    __pyx_t_2 = nullptr;
    ((VarReader5^)__pyx_v_self)->struct_as_record = __pyx_t_6;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":182
 *         self.struct_as_record = preader.struct_as_record
 *         # store codecs for text matrix reading
 *         self.codecs = mio5p.MDTYPES[byte_order]['codecs'].copy()             # <<<<<<<<<<<<<<
 *         self.uint16_codec = preader.uint16_codec
 *         uint16_codec = self.uint16_codec
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "mio5p");
    __pyx_t_1 = __site_get_MDTYPES_182_27->Target(__site_get_MDTYPES_182_27, __pyx_t_2, __pyx_context);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_getindex_182_35->Target(__site_getindex_182_35, __pyx_t_1, __pyx_v_byte_order);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_getindex_182_47->Target(__site_getindex_182_47, __pyx_t_2, ((System::Object^)"codecs"));
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_get_copy_182_57->Target(__site_get_copy_182_57, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_call0_182_62->Target(__site_call0_182_62, __pyx_context, __pyx_t_2);
    __pyx_t_2 = nullptr;
    ((VarReader5^)__pyx_v_self)->codecs = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":183
 *         # store codecs for text matrix reading
 *         self.codecs = mio5p.MDTYPES[byte_order]['codecs'].copy()
 *         self.uint16_codec = preader.uint16_codec             # <<<<<<<<<<<<<<
 *         uint16_codec = self.uint16_codec
 *         # Set length of miUINT16 char encoding
 */
    __pyx_t_1 = __site_get_uint16_codec_183_35->Target(__site_get_uint16_codec_183_35, __pyx_v_preader, __pyx_context);
    ((VarReader5^)__pyx_v_self)->uint16_codec = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":184
 *         self.codecs = mio5p.MDTYPES[byte_order]['codecs'].copy()
 *         self.uint16_codec = preader.uint16_codec
 *         uint16_codec = self.uint16_codec             # <<<<<<<<<<<<<<
 *         # Set length of miUINT16 char encoding
 *         self.codecs['uint16_len'] = len("  ".encode(uint16_codec)) \
 */
    __pyx_v_uint16_codec = ((VarReader5^)__pyx_v_self)->uint16_codec;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":186
 *         uint16_codec = self.uint16_codec
 *         # Set length of miUINT16 char encoding
 *         self.codecs['uint16_len'] = len("  ".encode(uint16_codec)) \             # <<<<<<<<<<<<<<
 *                 - len(" ".encode(uint16_codec))
 *         self.codecs['uint16_codec'] = uint16_codec
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "len");
    __pyx_t_2 = __site_get_encode_186_44->Target(__site_get_encode_186_44, ((System::Object^)"  "), __pyx_context);
    __pyx_t_7 = __site_call1_186_51->Target(__site_call1_186_51, __pyx_context, __pyx_t_2, __pyx_v_uint16_codec);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_call1_186_39->Target(__site_call1_186_39, __pyx_context, __pyx_t_1, __pyx_t_7);
    __pyx_t_1 = nullptr;
    __pyx_t_7 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":187
 *         # Set length of miUINT16 char encoding
 *         self.codecs['uint16_len'] = len("  ".encode(uint16_codec)) \
 *                 - len(" ".encode(uint16_codec))             # <<<<<<<<<<<<<<
 *         self.codecs['uint16_codec'] = uint16_codec
 *         # set c-optimized stream object from python file-like object
 */
    __pyx_t_7 = PythonOps::GetGlobal(__pyx_context, "len");
    __pyx_t_1 = __site_get_encode_187_25->Target(__site_get_encode_187_25, ((System::Object^)" "), __pyx_context);
    __pyx_t_8 = __site_call1_187_32->Target(__site_call1_187_32, __pyx_context, __pyx_t_1, __pyx_v_uint16_codec);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_call1_187_21->Target(__site_call1_187_21, __pyx_context, __pyx_t_7, __pyx_t_8);
    __pyx_t_7 = nullptr;
    __pyx_t_8 = nullptr;
    __pyx_t_8 = __site_op_sub_187_16->Target(__site_op_sub_187_16, __pyx_t_2, __pyx_t_1);
    __pyx_t_2 = nullptr;
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":186
 *         uint16_codec = self.uint16_codec
 *         # Set length of miUINT16 char encoding
 *         self.codecs['uint16_len'] = len("  ".encode(uint16_codec)) \             # <<<<<<<<<<<<<<
 *                 - len(" ".encode(uint16_codec))
 *         self.codecs['uint16_codec'] = uint16_codec
 */
    __site_setindex_186_19->Target(__site_setindex_186_19, ((VarReader5^)__pyx_v_self)->codecs, ((System::Object^)"uint16_len"), __pyx_t_8);
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":188
 *         self.codecs['uint16_len'] = len("  ".encode(uint16_codec)) \
 *                 - len(" ".encode(uint16_codec))
 *         self.codecs['uint16_codec'] = uint16_codec             # <<<<<<<<<<<<<<
 *         # set c-optimized stream object from python file-like object
 *         self.set_stream(preader.mat_stream)
 */
    __site_setindex_188_19->Target(__site_setindex_188_19, ((VarReader5^)__pyx_v_self)->codecs, ((System::Object^)"uint16_codec"), __pyx_v_uint16_codec);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":190
 *         self.codecs['uint16_codec'] = uint16_codec
 *         # set c-optimized stream object from python file-like object
 *         self.set_stream(preader.mat_stream)             # <<<<<<<<<<<<<<
 *         # options for element processing
 *         self.mat_dtype = preader.mat_dtype
 */
    __pyx_t_8 = __site_get_set_stream_190_12->Target(__site_get_set_stream_190_12, __pyx_v_self, __pyx_context);
    __pyx_t_1 = __site_get_mat_stream_190_31->Target(__site_get_mat_stream_190_31, __pyx_v_preader, __pyx_context);
    __pyx_t_2 = __site_call1_190_23->Target(__site_call1_190_23, __pyx_context, __pyx_t_8, __pyx_t_1);
    __pyx_t_8 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_2 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":192
 *         self.set_stream(preader.mat_stream)
 *         # options for element processing
 *         self.mat_dtype = preader.mat_dtype             # <<<<<<<<<<<<<<
 *         self.chars_as_strings = preader.chars_as_strings
 *         self.squeeze_me = preader.squeeze_me
 */
    __pyx_t_2 = __site_get_mat_dtype_192_32->Target(__site_get_mat_dtype_192_32, __pyx_v_preader, __pyx_context);
    __pyx_t_9 = __site_cvt_int_192_32->Target(__site_cvt_int_192_32, __pyx_t_2);
    __pyx_t_2 = nullptr;
    ((VarReader5^)__pyx_v_self)->mat_dtype = __pyx_t_9;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":193
 *         # options for element processing
 *         self.mat_dtype = preader.mat_dtype
 *         self.chars_as_strings = preader.chars_as_strings             # <<<<<<<<<<<<<<
 *         self.squeeze_me = preader.squeeze_me
 *         # copy refs to dtypes into object pointer array. We only need the
 */
    __pyx_t_2 = __site_get_chars_as_strings_193_39->Target(__site_get_chars_as_strings_193_39, __pyx_v_preader, __pyx_context);
    __pyx_t_10 = __site_cvt_int_193_39->Target(__site_cvt_int_193_39, __pyx_t_2);
    __pyx_t_2 = nullptr;
    ((VarReader5^)__pyx_v_self)->chars_as_strings = __pyx_t_10;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":194
 *         self.mat_dtype = preader.mat_dtype
 *         self.chars_as_strings = preader.chars_as_strings
 *         self.squeeze_me = preader.squeeze_me             # <<<<<<<<<<<<<<
 *         # copy refs to dtypes into object pointer array. We only need the
 *         # integer-keyed dtypes
 */
    __pyx_t_2 = __site_get_squeeze_me_194_33->Target(__site_get_squeeze_me_194_33, __pyx_v_preader, __pyx_context);
    __pyx_t_11 = __site_cvt_int_194_33->Target(__site_cvt_int_194_33, __pyx_t_2);
    __pyx_t_2 = nullptr;
    ((VarReader5^)__pyx_v_self)->squeeze_me = __pyx_t_11;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":197
 *         # copy refs to dtypes into object pointer array. We only need the
 *         # integer-keyed dtypes
 *         for key, dt in mio5p.MDTYPES[byte_order]['dtypes'].items():             # <<<<<<<<<<<<<<
 *             if not isinstance(key, str):
 *                 self.dtypes[key] = <PyObject*>dt
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "mio5p");
    __pyx_t_1 = __site_get_MDTYPES_197_28->Target(__site_get_MDTYPES_197_28, __pyx_t_2, __pyx_context);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_getindex_197_36->Target(__site_getindex_197_36, __pyx_t_1, __pyx_v_byte_order);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_getindex_197_48->Target(__site_getindex_197_48, __pyx_t_2, ((System::Object^)"dtypes"));
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_get_items_197_58->Target(__site_get_items_197_58, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_call0_197_64->Target(__site_call0_197_64, __pyx_context, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_12 = __site_get_iterator_197_8->Target(__site_get_iterator_197_8, __pyx_t_1);
    try {
      while (__pyx_t_12.Key->MoveNext()) {
        __pyx_t_13 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, ((System::Object^)__pyx_t_12.Key->Current), 2)));
        __pyx_t_2 = __pyx_t_13[0];
        __pyx_t_8 = __pyx_t_13[1];
        __pyx_t_13 = nullptr;
        __pyx_v_key = __pyx_t_2;
        __pyx_t_2 = nullptr;
        __pyx_v_dt = __pyx_t_8;
        __pyx_t_8 = nullptr;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":198
 *         # integer-keyed dtypes
 *         for key, dt in mio5p.MDTYPES[byte_order]['dtypes'].items():
 *             if not isinstance(key, str):             # <<<<<<<<<<<<<<
 *                 self.dtypes[key] = <PyObject*>dt
 *         # copy refs to class_dtypes into object pointer array
 */
        __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "isinstance");
        __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "str");
        __pyx_t_7 = __site_call2_198_29->Target(__site_call2_198_29, __pyx_context, __pyx_t_8, __pyx_v_key, ((System::Object^)__pyx_t_2));
        __pyx_t_8 = nullptr;
        __pyx_t_2 = nullptr;
        __pyx_t_4 = __site_istrue_198_29->Target(__site_istrue_198_29, __pyx_t_7);
        __pyx_t_7 = nullptr;
        __pyx_t_14 = (!__pyx_t_4);
        if (__pyx_t_14) {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":199
 *         for key, dt in mio5p.MDTYPES[byte_order]['dtypes'].items():
 *             if not isinstance(key, str):
 *                 self.dtypes[key] = <PyObject*>dt             # <<<<<<<<<<<<<<
 *         # copy refs to class_dtypes into object pointer array
 *         for key, dt in mio5p.MDTYPES[byte_order]['classes'].items():
 */
          __pyx_t_15 = __site_cvt_Py_ssize_t_199_31->Target(__site_cvt_Py_ssize_t_199_31, __pyx_v_key);
          (((VarReader5^)__pyx_v_self)->dtypes[__pyx_t_15]) = ((PyObject *)__pyx_v_dt);
          goto __pyx_L6;
        }
        __pyx_L6:;
      }
    }
    finally {
      PythonOps::ForLoopDispose(__pyx_t_12);
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":201
 *                 self.dtypes[key] = <PyObject*>dt
 *         # copy refs to class_dtypes into object pointer array
 *         for key, dt in mio5p.MDTYPES[byte_order]['classes'].items():             # <<<<<<<<<<<<<<
 *             if not isinstance(key, str):
 *                 self.class_dtypes[key] = <PyObject*>dt
 */
    __pyx_t_7 = PythonOps::GetGlobal(__pyx_context, "mio5p");
    __pyx_t_2 = __site_get_MDTYPES_201_28->Target(__site_get_MDTYPES_201_28, __pyx_t_7, __pyx_context);
    __pyx_t_7 = nullptr;
    __pyx_t_7 = __site_getindex_201_36->Target(__site_getindex_201_36, __pyx_t_2, __pyx_v_byte_order);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_getindex_201_48->Target(__site_getindex_201_48, __pyx_t_7, ((System::Object^)"classes"));
    __pyx_t_7 = nullptr;
    __pyx_t_7 = __site_get_items_201_59->Target(__site_get_items_201_59, __pyx_t_2, __pyx_context);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_call0_201_65->Target(__site_call0_201_65, __pyx_context, __pyx_t_7);
    __pyx_t_7 = nullptr;
    __pyx_t_12 = __site_get_iterator_201_8->Target(__site_get_iterator_201_8, __pyx_t_2);
    try {
      while (__pyx_t_12.Key->MoveNext()) {
        __pyx_t_13 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, ((System::Object^)__pyx_t_12.Key->Current), 2)));
        __pyx_t_7 = __pyx_t_13[0];
        __pyx_t_8 = __pyx_t_13[1];
        __pyx_t_13 = nullptr;
        __pyx_v_key = __pyx_t_7;
        __pyx_t_7 = nullptr;
        __pyx_v_dt = __pyx_t_8;
        __pyx_t_8 = nullptr;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":202
 *         # copy refs to class_dtypes into object pointer array
 *         for key, dt in mio5p.MDTYPES[byte_order]['classes'].items():
 *             if not isinstance(key, str):             # <<<<<<<<<<<<<<
 *                 self.class_dtypes[key] = <PyObject*>dt
 *         # cache correctly byte ordered dtypes
 */
        __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "isinstance");
        __pyx_t_7 = PythonOps::GetGlobal(__pyx_context, "str");
        __pyx_t_16 = __site_call2_202_29->Target(__site_call2_202_29, __pyx_context, __pyx_t_8, __pyx_v_key, ((System::Object^)__pyx_t_7));
        __pyx_t_8 = nullptr;
        __pyx_t_7 = nullptr;
        __pyx_t_14 = __site_istrue_202_29->Target(__site_istrue_202_29, __pyx_t_16);
        __pyx_t_16 = nullptr;
        __pyx_t_4 = (!__pyx_t_14);
        if (__pyx_t_4) {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":203
 *         for key, dt in mio5p.MDTYPES[byte_order]['classes'].items():
 *             if not isinstance(key, str):
 *                 self.class_dtypes[key] = <PyObject*>dt             # <<<<<<<<<<<<<<
 *         # cache correctly byte ordered dtypes
 *         if self.little_endian:
 */
          __pyx_t_17 = __site_cvt_Py_ssize_t_203_37->Target(__site_cvt_Py_ssize_t_203_37, __pyx_v_key);
          (((VarReader5^)__pyx_v_self)->class_dtypes[__pyx_t_17]) = ((PyObject *)__pyx_v_dt);
          goto __pyx_L7;
        }
        __pyx_L7:;
      }
    }
    finally {
      PythonOps::ForLoopDispose(__pyx_t_12);
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":205
 *                 self.class_dtypes[key] = <PyObject*>dt
 *         # cache correctly byte ordered dtypes
 *         if self.little_endian:             # <<<<<<<<<<<<<<
 *             self.U1_dtype = np.dtype('<U1')
 *         else:
 */
    if (((VarReader5^)__pyx_v_self)->little_endian) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":206
 *         # cache correctly byte ordered dtypes
 *         if self.little_endian:
 *             self.U1_dtype = np.dtype('<U1')             # <<<<<<<<<<<<<<
 *         else:
 *             self.U1_dtype = np.dtype('>U1')
 */
      __pyx_t_16 = PythonOps::GetGlobal(__pyx_context, "np");
      __pyx_t_7 = __site_get_dtype_206_30->Target(__site_get_dtype_206_30, __pyx_t_16, __pyx_context);
      __pyx_t_16 = nullptr;
      __pyx_t_16 = __site_call1_206_36->Target(__site_call1_206_36, __pyx_context, __pyx_t_7, ((System::Object^)"<U1"));
      __pyx_t_7 = nullptr;
      if (__pyx_t_16 == nullptr || dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_16) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      ((VarReader5^)__pyx_v_self)->U1_dtype = ((NumpyDotNet::dtype^)__pyx_t_16);
      __pyx_t_16 = nullptr;
      goto __pyx_L8;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":208
 *             self.U1_dtype = np.dtype('<U1')
 *         else:
 *             self.U1_dtype = np.dtype('>U1')             # <<<<<<<<<<<<<<
 *         bool_dtype = np.dtype('bool')
 * 
 */
      __pyx_t_16 = PythonOps::GetGlobal(__pyx_context, "np");
      __pyx_t_7 = __site_get_dtype_208_30->Target(__site_get_dtype_208_30, __pyx_t_16, __pyx_context);
      __pyx_t_16 = nullptr;
      __pyx_t_16 = __site_call1_208_36->Target(__site_call1_208_36, __pyx_context, __pyx_t_7, ((System::Object^)">U1"));
      __pyx_t_7 = nullptr;
      if (__pyx_t_16 == nullptr || dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_16) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      ((VarReader5^)__pyx_v_self)->U1_dtype = ((NumpyDotNet::dtype^)__pyx_t_16);
      __pyx_t_16 = nullptr;
    }
    __pyx_L8:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":209
 *         else:
 *             self.U1_dtype = np.dtype('>U1')
 *         bool_dtype = np.dtype('bool')             # <<<<<<<<<<<<<<
 * 
 *     def set_stream(self, fobj):
 */
    __pyx_t_16 = PythonOps::GetGlobal(__pyx_context, "np");
    __pyx_t_7 = __site_get_dtype_209_23->Target(__site_get_dtype_209_23, __pyx_t_16, __pyx_context);
    __pyx_t_16 = nullptr;
    __pyx_t_16 = __site_call1_209_29->Target(__site_call1_209_29, __pyx_context, __pyx_t_7, ((System::Object^)"bool"));
    __pyx_t_7 = nullptr;
    __pyx_v_bool_dtype = __pyx_t_16;
    __pyx_t_16 = nullptr;

    __pyx_r = 0;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":211
 *         bool_dtype = np.dtype('bool')
 * 
 *     def set_stream(self, fobj):             # <<<<<<<<<<<<<<
 *         ''' Set stream of best type from file-like `fobj`
 * 
 */

  virtual System::Object^ set_stream(System::Object^ fobj) {
    System::Object^ __pyx_v_fobj = nullptr;
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_v_self = this;
    __pyx_v_fobj = fobj;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":216
 *         Called from Python when initiating a variable read
 *         '''
 *         self.cstream = streams.make_stream(fobj)             # <<<<<<<<<<<<<<
 * 
 *     def read_tag(self):
 */
    __pyx_t_1 = ((System::Object^)make_stream(__pyx_v_fobj, 0)); 
    ((VarReader5^)__pyx_v_self)->cstream = ((GenericStream^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    __pyx_r = nullptr;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":218
 *         self.cstream = streams.make_stream(fobj)
 * 
 *     def read_tag(self):             # <<<<<<<<<<<<<<
 *         ''' Read tag mdtype and byte_count
 * 
 */

  virtual System::Object^ read_tag() {
    __pyx_t_5numpy_uint32_t __pyx_v_mdtype;
    __pyx_t_5numpy_uint32_t __pyx_v_byte_count;
    char __pyx_v_tag_ptr[4];
    int __pyx_v_tag_res;
    System::Object^ __pyx_v_tag_data = nullptr;
    System::Object^ __pyx_r = nullptr;
    int __pyx_t_1;
    int __pyx_t_2;
    System::Object^ __pyx_t_3 = nullptr;
    Py_ssize_t __pyx_t_4;
    array<unsigned char>^ __pyx_t_5;
    System::Object^ __pyx_t_6 = nullptr;
    System::Object^ __pyx_t_7 = nullptr;
    System::Object^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":239
 *         cdef char tag_ptr[4]
 *         cdef int tag_res
 *         cdef object tag_data = None             # <<<<<<<<<<<<<<
 *         tag_res = self.cread_tag(&mdtype, &byte_count, tag_ptr)
 *         if tag_res == 2: # sde format
 */
    __pyx_v_tag_data = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":240
 *         cdef int tag_res
 *         cdef object tag_data = None
 *         tag_res = self.cread_tag(&mdtype, &byte_count, tag_ptr)             # <<<<<<<<<<<<<<
 *         if tag_res == 2: # sde format
 *             tag_data = tag_ptr[:byte_count]
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = ((VarReader5^)__pyx_v_self)->cread_tag((&__pyx_v_mdtype), (&__pyx_v_byte_count), __pyx_v_tag_ptr); 
    __pyx_v_tag_res = __pyx_t_1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":241
 *         cdef object tag_data = None
 *         tag_res = self.cread_tag(&mdtype, &byte_count, tag_ptr)
 *         if tag_res == 2: # sde format             # <<<<<<<<<<<<<<
 *             tag_data = tag_ptr[:byte_count]
 *         return (mdtype, byte_count, tag_data)
 */
    __pyx_t_2 = (__pyx_v_tag_res == 2);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":242
 *         tag_res = self.cread_tag(&mdtype, &byte_count, tag_ptr)
 *         if tag_res == 2: # sde format
 *             tag_data = tag_ptr[:byte_count]             # <<<<<<<<<<<<<<
 *         return (mdtype, byte_count, tag_data)
 * 
 */
      __pyx_t_5 = gcnew array<unsigned char>(0 - __pyx_v_byte_count);
      for (py_ssize_t __pyx_t_4 = 0; __pyx_t_4 < 0 - __pyx_v_byte_count; __pyx_t_4++) {
        __pyx_t_5[__pyx_t_4] = __pyx_v_tag_ptr[0 + __pyx_t_4];
      }
      __pyx_t_3 = PythonOps::MakeBytes(__pyx_t_5);
      __pyx_v_tag_data = ((System::Object^)__pyx_t_3);
      __pyx_t_3 = nullptr;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":243
 *         if tag_res == 2: # sde format
 *             tag_data = tag_ptr[:byte_count]
 *         return (mdtype, byte_count, tag_data)             # <<<<<<<<<<<<<<
 * 
 *     cdef int cread_tag(self,
 */
    __pyx_t_3 = __pyx_v_mdtype;
    __pyx_t_6 = __pyx_v_byte_count;
    __pyx_t_7 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_3, __pyx_t_6, __pyx_v_tag_data});
    __pyx_t_3 = nullptr;
    __pyx_t_6 = nullptr;
    __pyx_r = __pyx_t_7;
    __pyx_t_7 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":245
 *         return (mdtype, byte_count, tag_data)
 * 
 *     cdef int cread_tag(self,             # <<<<<<<<<<<<<<
 *                      cnp.uint32_t *mdtype_ptr,
 *                      cnp.uint32_t *byte_count_ptr,
 */

  virtual  int cread_tag(__pyx_t_5numpy_uint32_t *__pyx_v_mdtype_ptr, __pyx_t_5numpy_uint32_t *__pyx_v_byte_count_ptr, char *__pyx_v_data_ptr) {
    __pyx_t_5numpy_uint16_t __pyx_v_mdtype_sde;
    __pyx_t_5numpy_uint16_t __pyx_v_byte_count_sde;
    __pyx_t_5numpy_uint32_t __pyx_v_mdtype;
    __pyx_t_5numpy_uint32_t *__pyx_v_u4_ptr;
    __pyx_t_5numpy_uint32_t __pyx_v_u4s[2];
    int __pyx_r;
    int __pyx_t_1;
    int __pyx_t_2;
    System::Object^ __pyx_t_3 = nullptr;
    System::Object^ __pyx_t_4 = nullptr;
    VarReader5^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":260
 *         cdef cnp.uint16_t mdtype_sde, byte_count_sde
 *         cdef cnp.uint32_t mdtype
 *         cdef cnp.uint32_t* u4_ptr = <cnp.uint32_t*>data_ptr             # <<<<<<<<<<<<<<
 *         cdef cnp.uint32_t u4s[2]
 *         # First read 8 bytes.  The 8 bytes can be in one of two formats.
 */
    __pyx_v_u4_ptr = ((__pyx_t_5numpy_uint32_t *)__pyx_v_data_ptr);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":288
 *         # first four bytes are two little-endian uint16 values, first
 *         # ``mdtype`` and second ``byte_count``.
 *         self.cstream.read_into(<void *>u4s, 8)             # <<<<<<<<<<<<<<
 *         if self.is_swapped:
 *             mdtype = byteswap_u4(u4s[0])
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = __pyx_v_self->cstream->read_into(((void *)__pyx_v_u4s), 8); 

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":289
 *         # ``mdtype`` and second ``byte_count``.
 *         self.cstream.read_into(<void *>u4s, 8)
 *         if self.is_swapped:             # <<<<<<<<<<<<<<
 *             mdtype = byteswap_u4(u4s[0])
 *         else:
 */
    if (__pyx_v_self->is_swapped) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":290
 *         self.cstream.read_into(<void *>u4s, 8)
 *         if self.is_swapped:
 *             mdtype = byteswap_u4(u4s[0])             # <<<<<<<<<<<<<<
 *         else:
 *             mdtype = u4s[0]
 */
      __pyx_v_mdtype = byteswap_u4((__pyx_v_u4s[0]), 0);
      goto __pyx_L3;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":292
 *             mdtype = byteswap_u4(u4s[0])
 *         else:
 *             mdtype = u4s[0]             # <<<<<<<<<<<<<<
 *         # The most significant two bytes of a U4 *mdtype* will always be
 *         # 0, if they are not, this must be SDE format
 */
      __pyx_v_mdtype = (__pyx_v_u4s[0]);
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":295
 *         # The most significant two bytes of a U4 *mdtype* will always be
 *         # 0, if they are not, this must be SDE format
 *         byte_count_sde = mdtype >> 16             # <<<<<<<<<<<<<<
 *         if byte_count_sde: # small data element format
 *             mdtype_sde = mdtype & 0xffff
 */
    __pyx_v_byte_count_sde = (__pyx_v_mdtype >> 16);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":296
 *         # 0, if they are not, this must be SDE format
 *         byte_count_sde = mdtype >> 16
 *         if byte_count_sde: # small data element format             # <<<<<<<<<<<<<<
 *             mdtype_sde = mdtype & 0xffff
 *             if byte_count_sde > 4:
 */
    if (__pyx_v_byte_count_sde) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":297
 *         byte_count_sde = mdtype >> 16
 *         if byte_count_sde: # small data element format
 *             mdtype_sde = mdtype & 0xffff             # <<<<<<<<<<<<<<
 *             if byte_count_sde > 4:
 *                 raise ValueError('Error in SDE format data')
 */
      __pyx_v_mdtype_sde = (__pyx_v_mdtype & 0xffff);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":298
 *         if byte_count_sde: # small data element format
 *             mdtype_sde = mdtype & 0xffff
 *             if byte_count_sde > 4:             # <<<<<<<<<<<<<<
 *                 raise ValueError('Error in SDE format data')
 *                 return -1
 */
      __pyx_t_2 = (__pyx_v_byte_count_sde > 4);
      if (__pyx_t_2) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":299
 *             mdtype_sde = mdtype & 0xffff
 *             if byte_count_sde > 4:
 *                 raise ValueError('Error in SDE format data')             # <<<<<<<<<<<<<<
 *                 return -1
 *             u4_ptr[0] = u4s[1]
 */
        __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
        __pyx_t_4 = __site_call1_299_32->Target(__site_call1_299_32, __pyx_context, __pyx_t_3, ((System::Object^)"Error in SDE format data"));
        __pyx_t_3 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
        __pyx_t_4 = nullptr;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":300
 *             if byte_count_sde > 4:
 *                 raise ValueError('Error in SDE format data')
 *                 return -1             # <<<<<<<<<<<<<<
 *             u4_ptr[0] = u4s[1]
 *             mdtype_ptr[0] = mdtype_sde
 */
        __pyx_r = -1;
        goto __pyx_L0;
        goto __pyx_L5;
      }
      __pyx_L5:;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":301
 *                 raise ValueError('Error in SDE format data')
 *                 return -1
 *             u4_ptr[0] = u4s[1]             # <<<<<<<<<<<<<<
 *             mdtype_ptr[0] = mdtype_sde
 *             byte_count_ptr[0] = byte_count_sde
 */
      (__pyx_v_u4_ptr[0]) = (__pyx_v_u4s[1]);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":302
 *                 return -1
 *             u4_ptr[0] = u4s[1]
 *             mdtype_ptr[0] = mdtype_sde             # <<<<<<<<<<<<<<
 *             byte_count_ptr[0] = byte_count_sde
 *             return 2
 */
      (__pyx_v_mdtype_ptr[0]) = __pyx_v_mdtype_sde;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":303
 *             u4_ptr[0] = u4s[1]
 *             mdtype_ptr[0] = mdtype_sde
 *             byte_count_ptr[0] = byte_count_sde             # <<<<<<<<<<<<<<
 *             return 2
 *         # regular element
 */
      (__pyx_v_byte_count_ptr[0]) = __pyx_v_byte_count_sde;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":304
 *             mdtype_ptr[0] = mdtype_sde
 *             byte_count_ptr[0] = byte_count_sde
 *             return 2             # <<<<<<<<<<<<<<
 *         # regular element
 *         if self.is_swapped:
 */
      __pyx_r = 2;
      goto __pyx_L0;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":306
 *             return 2
 *         # regular element
 *         if self.is_swapped:             # <<<<<<<<<<<<<<
 *             byte_count_ptr[0] = byteswap_u4(u4s[1])
 *         else:
 */
    if (__pyx_v_self->is_swapped) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":307
 *         # regular element
 *         if self.is_swapped:
 *             byte_count_ptr[0] = byteswap_u4(u4s[1])             # <<<<<<<<<<<<<<
 *         else:
 *             byte_count_ptr[0] = u4s[1]
 */
      (__pyx_v_byte_count_ptr[0]) = byteswap_u4((__pyx_v_u4s[1]), 0);
      goto __pyx_L6;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":309
 *             byte_count_ptr[0] = byteswap_u4(u4s[1])
 *         else:
 *             byte_count_ptr[0] = u4s[1]             # <<<<<<<<<<<<<<
 *         mdtype_ptr[0] = mdtype
 *         u4_ptr[0] = 0
 */
      (__pyx_v_byte_count_ptr[0]) = (__pyx_v_u4s[1]);
    }
    __pyx_L6:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":310
 *         else:
 *             byte_count_ptr[0] = u4s[1]
 *         mdtype_ptr[0] = mdtype             # <<<<<<<<<<<<<<
 *         u4_ptr[0] = 0
 *         return 1
 */
    (__pyx_v_mdtype_ptr[0]) = __pyx_v_mdtype;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":311
 *             byte_count_ptr[0] = u4s[1]
 *         mdtype_ptr[0] = mdtype
 *         u4_ptr[0] = 0             # <<<<<<<<<<<<<<
 *         return 1
 * 
 */
    (__pyx_v_u4_ptr[0]) = 0;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":312
 *         mdtype_ptr[0] = mdtype
 *         u4_ptr[0] = 0
 *         return 1             # <<<<<<<<<<<<<<
 * 
 *     cdef object read_element(self,
 */
    __pyx_r = 1;
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":314
 *         return 1
 * 
 *     cdef object read_element(self,             # <<<<<<<<<<<<<<
 *                              cnp.uint32_t *mdtype_ptr,
 *                              cnp.uint32_t *byte_count_ptr,
 */

  virtual  System::Object^ read_element(__pyx_t_5numpy_uint32_t *__pyx_v_mdtype_ptr, __pyx_t_5numpy_uint32_t *__pyx_v_byte_count_ptr, void **__pyx_v_pp, ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_read_element ^__pyx_optional_args) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":318
 *                              cnp.uint32_t *byte_count_ptr,
 *                              void **pp,
 *                              int copy=True):             # <<<<<<<<<<<<<<
 *         ''' Read data element into string buffer, return buffer
 * 
 */
    int __pyx_v_copy = ((int)1);
    __pyx_t_5numpy_uint32_t __pyx_v_mdtype;
    __pyx_t_5numpy_uint32_t __pyx_v_byte_count;
    char __pyx_v_tag_data[4];
    System::Object^ __pyx_v_data;
    int __pyx_v_mod8;
    int __pyx_v_tag_res;
    System::Object^ __pyx_r = nullptr;
    int __pyx_t_1;
    int __pyx_t_2;
    System::Object^ __pyx_t_3 = nullptr;
    ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13GenericStream_read_string __pyx_t_4;
    ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13GenericStream_seek __pyx_t_5;
    char *__pyx_t_6;
    System::IntPtr __pyx_t_7;
    VarReader5^ __pyx_v_self = this;
    if (__pyx_optional_args) {
      if (__pyx_optional_args->__pyx_n > 0) {
        __pyx_v_copy = __pyx_optional_args->copy;
      }
    }
    __pyx_v_data = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":354
 *         cdef int tag_res = self.cread_tag(mdtype_ptr,
 *                                           byte_count_ptr,
 *                                           tag_data)             # <<<<<<<<<<<<<<
 *         mdtype = mdtype_ptr[0]
 *         byte_count = byte_count_ptr[0]
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = __pyx_v_self->cread_tag(__pyx_v_mdtype_ptr, __pyx_v_byte_count_ptr, __pyx_v_tag_data); 
    __pyx_v_tag_res = __pyx_t_1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":355
 *                                           byte_count_ptr,
 *                                           tag_data)
 *         mdtype = mdtype_ptr[0]             # <<<<<<<<<<<<<<
 *         byte_count = byte_count_ptr[0]
 *         if tag_res == 1: # full format
 */
    __pyx_v_mdtype = (__pyx_v_mdtype_ptr[0]);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":356
 *                                           tag_data)
 *         mdtype = mdtype_ptr[0]
 *         byte_count = byte_count_ptr[0]             # <<<<<<<<<<<<<<
 *         if tag_res == 1: # full format
 *             data = self.cstream.read_string(
 */
    __pyx_v_byte_count = (__pyx_v_byte_count_ptr[0]);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":357
 *         mdtype = mdtype_ptr[0]
 *         byte_count = byte_count_ptr[0]
 *         if tag_res == 1: # full format             # <<<<<<<<<<<<<<
 *             data = self.cstream.read_string(
 *                 byte_count,
 */
    __pyx_t_2 = (__pyx_v_tag_res == 1);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":361
 *                 byte_count,
 *                 pp,
 *                 copy)             # <<<<<<<<<<<<<<
 *             # Seek to next 64-bit boundary
 *             mod8 = byte_count % 8
 */
      __pyx_t_4.__pyx_n = 1;
      __pyx_t_4.copy = __pyx_v_copy;
      __pyx_t_3 = __pyx_v_self->cstream->read_string(__pyx_v_byte_count, __pyx_v_pp, %__pyx_t_4); 
      __pyx_v_data = __pyx_t_3;
      __pyx_t_3 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":363
 *                 copy)
 *             # Seek to next 64-bit boundary
 *             mod8 = byte_count % 8             # <<<<<<<<<<<<<<
 *             if mod8:
 *                 self.cstream.seek(8 - mod8, 1)
 */
      __pyx_v_mod8 = __Pyx_mod_long(__pyx_v_byte_count, 8);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":364
 *             # Seek to next 64-bit boundary
 *             mod8 = byte_count % 8
 *             if mod8:             # <<<<<<<<<<<<<<
 *                 self.cstream.seek(8 - mod8, 1)
 *         else: # SDE format, make safer home for data
 */
      if (__pyx_v_mod8) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":365
 *             mod8 = byte_count % 8
 *             if mod8:
 *                 self.cstream.seek(8 - mod8, 1)             # <<<<<<<<<<<<<<
 *         else: # SDE format, make safer home for data
 *             data = PyBytes_FromStringAndSize(tag_data, byte_count)
 */
        __pyx_t_5.__pyx_n = 1;
        __pyx_t_5.whence = 1;
        XXX skipping exception checks: __pyx_t_1 == -1
        __pyx_t_1 = __pyx_v_self->cstream->seek((8 - __pyx_v_mod8), 0, %__pyx_t_5); 
        goto __pyx_L4;
      }
      __pyx_L4:;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":367
 *                 self.cstream.seek(8 - mod8, 1)
 *         else: # SDE format, make safer home for data
 *             data = PyBytes_FromStringAndSize(tag_data, byte_count)             # <<<<<<<<<<<<<<
 *             pp[0] = <char *>data
 *         return data
 */
      __pyx_t_3 = ((System::Object^)PyBytes_FromStringAndSize(__pyx_v_tag_data, __pyx_v_byte_count)); 
      __pyx_v_data = __pyx_t_3;
      __pyx_t_3 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":368
 *         else: # SDE format, make safer home for data
 *             data = PyBytes_FromStringAndSize(tag_data, byte_count)
 *             pp[0] = <char *>data             # <<<<<<<<<<<<<<
 *         return data
 * 
 */
      __pyx_t_7 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_v_data));
      __pyx_t_6 = static_cast<char *>(__pyx_t_7.ToPointer());
      (__pyx_v_pp[0]) = ((char *)__pyx_t_6);
      InteropServices::Marshal::FreeHGlobal(__pyx_t_7);
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":369
 *             data = PyBytes_FromStringAndSize(tag_data, byte_count)
 *             pp[0] = <char *>data
 *         return data             # <<<<<<<<<<<<<<
 * 
 *     cdef int read_element_into(self,
 */
    __pyx_r = __pyx_v_data;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":371
 *         return data
 * 
 *     cdef int read_element_into(self,             # <<<<<<<<<<<<<<
 *                                cnp.uint32_t *mdtype_ptr,
 *                                cnp.uint32_t *byte_count_ptr,
 */

  virtual  int read_element_into(__pyx_t_5numpy_uint32_t *__pyx_v_mdtype_ptr, __pyx_t_5numpy_uint32_t *__pyx_v_byte_count_ptr, void *__pyx_v_ptr) {
    int __pyx_v_mod8;
    int __pyx_v_res;
    __pyx_t_5numpy_uint32_t __pyx_v_byte_count;
    int __pyx_r;
    int __pyx_t_1;
    int __pyx_t_2;
    ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13GenericStream_seek __pyx_t_3;
    VarReader5^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":400
 *             mdtype_ptr,
 *             byte_count_ptr,
 *             <char *>ptr)             # <<<<<<<<<<<<<<
 *         cdef cnp.uint32_t byte_count = byte_count_ptr[0]
 *         if res == 1: # full format
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = __pyx_v_self->cread_tag(__pyx_v_mdtype_ptr, __pyx_v_byte_count_ptr, ((char *)__pyx_v_ptr)); 
    __pyx_v_res = __pyx_t_1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":401
 *             byte_count_ptr,
 *             <char *>ptr)
 *         cdef cnp.uint32_t byte_count = byte_count_ptr[0]             # <<<<<<<<<<<<<<
 *         if res == 1: # full format
 *             res = self.cstream.read_into(ptr, byte_count)
 */
    __pyx_v_byte_count = (__pyx_v_byte_count_ptr[0]);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":402
 *             <char *>ptr)
 *         cdef cnp.uint32_t byte_count = byte_count_ptr[0]
 *         if res == 1: # full format             # <<<<<<<<<<<<<<
 *             res = self.cstream.read_into(ptr, byte_count)
 *             # Seek to next 64-bit boundary
 */
    __pyx_t_2 = (__pyx_v_res == 1);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":403
 *         cdef cnp.uint32_t byte_count = byte_count_ptr[0]
 *         if res == 1: # full format
 *             res = self.cstream.read_into(ptr, byte_count)             # <<<<<<<<<<<<<<
 *             # Seek to next 64-bit boundary
 *             mod8 = byte_count % 8
 */
      XXX skipping exception checks: __pyx_t_1 == -1
      __pyx_t_1 = __pyx_v_self->cstream->read_into(__pyx_v_ptr, __pyx_v_byte_count); 
      __pyx_v_res = __pyx_t_1;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":405
 *             res = self.cstream.read_into(ptr, byte_count)
 *             # Seek to next 64-bit boundary
 *             mod8 = byte_count % 8             # <<<<<<<<<<<<<<
 *             if mod8:
 *                 self.cstream.seek(8 - mod8, 1)
 */
      __pyx_v_mod8 = __Pyx_mod_long(__pyx_v_byte_count, 8);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":406
 *             # Seek to next 64-bit boundary
 *             mod8 = byte_count % 8
 *             if mod8:             # <<<<<<<<<<<<<<
 *                 self.cstream.seek(8 - mod8, 1)
 *         return 0
 */
      if (__pyx_v_mod8) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":407
 *             mod8 = byte_count % 8
 *             if mod8:
 *                 self.cstream.seek(8 - mod8, 1)             # <<<<<<<<<<<<<<
 *         return 0
 * 
 */
        __pyx_t_3.__pyx_n = 1;
        __pyx_t_3.whence = 1;
        XXX skipping exception checks: __pyx_t_1 == -1
        __pyx_t_1 = __pyx_v_self->cstream->seek((8 - __pyx_v_mod8), 0, %__pyx_t_3); 
        goto __pyx_L4;
      }
      __pyx_L4:;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":408
 *             if mod8:
 *                 self.cstream.seek(8 - mod8, 1)
 *         return 0             # <<<<<<<<<<<<<<
 * 
 *     cpdef inline cnp.ndarray read_numeric(self, int copy=True):
 */
    __pyx_r = 0;
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":410
 *         return 0
 * 
 *     cpdef inline cnp.ndarray read_numeric(self, int copy=True):             # <<<<<<<<<<<<<<
 *         ''' Read numeric data element into ndarray
 * 
 */

  virtual CYTHON_INLINE NumpyDotNet::ndarray^ read_numeric(ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_read_numeric ^__pyx_optional_args) {
    int __pyx_v_copy = ((int)1);
    __pyx_t_5numpy_uint32_t __pyx_v_mdtype;
    __pyx_t_5numpy_uint32_t __pyx_v_byte_count;
    void *__pyx_v_data_ptr;
    __pyx_t_5numpy_npy_intp __pyx_v_el_count;
    NumpyDotNet::ndarray^ __pyx_v_el;
    System::Object^ __pyx_v_data = nullptr;
    NumpyDotNet::dtype^ __pyx_v_dt = nullptr;
    int __pyx_v_flags;
    NumpyDotNet::ndarray^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_read_element __pyx_t_2;
    PyObject *__pyx_t_3;
    System::Object^ __pyx_t_4 = nullptr;
    System::Object^ __pyx_t_5 = nullptr;
    __pyx_t_5numpy_npy_intp __pyx_t_6;
    VarReader5^ __pyx_v_self = this;
    if (__pyx_optional_args) {
      if (__pyx_optional_args->__pyx_n > 0) {
        __pyx_v_copy = __pyx_optional_args->copy;
      }
    }
    __pyx_v_el = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":423
 *         cdef cnp.ndarray el
 *         cdef object data = self.read_element(
 *             &mdtype, &byte_count, <void **>&data_ptr, copy)             # <<<<<<<<<<<<<<
 *         cdef cnp.dtype dt = <cnp.dtype>self.dtypes[mdtype]
 *         el_count = byte_count // dt.itemsize
 */
    __pyx_t_2.__pyx_n = 1;
    __pyx_t_2.copy = __pyx_v_copy;
    __pyx_t_1 = __pyx_v_self->read_element((&__pyx_v_mdtype), (&__pyx_v_byte_count), ((void **)(&__pyx_v_data_ptr)), %__pyx_t_2); 
    __pyx_v_data = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":424
 *         cdef object data = self.read_element(
 *             &mdtype, &byte_count, <void **>&data_ptr, copy)
 *         cdef cnp.dtype dt = <cnp.dtype>self.dtypes[mdtype]             # <<<<<<<<<<<<<<
 *         el_count = byte_count // dt.itemsize
 *         cdef int flags = 0
 */
    __pyx_t_3 = (__pyx_v_self->dtypes[__pyx_v_mdtype]);
    __pyx_v_dt = ((NumpyDotNet::dtype^)__pyx_t_3);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":425
 *             &mdtype, &byte_count, <void **>&data_ptr, copy)
 *         cdef cnp.dtype dt = <cnp.dtype>self.dtypes[mdtype]
 *         el_count = byte_count // dt.itemsize             # <<<<<<<<<<<<<<
 *         cdef int flags = 0
 *         if copy:
 */
    __pyx_t_1 = __pyx_v_byte_count;
    __pyx_t_4 = __site_get_itemsize_425_35->Target(__site_get_itemsize_425_35, ((System::Object^)__pyx_v_dt), __pyx_context);
    __pyx_t_5 = __site_op_floordiv_425_30->Target(__site_op_floordiv_425_30, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_6 = __site_cvt___pyx_t_5numpy_npy_intp_425_30->Target(__site_cvt___pyx_t_5numpy_npy_intp_425_30, __pyx_t_5);
    __pyx_t_5 = nullptr;
    __pyx_v_el_count = __pyx_t_6;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":426
 *         cdef cnp.dtype dt = <cnp.dtype>self.dtypes[mdtype]
 *         el_count = byte_count // dt.itemsize
 *         cdef int flags = 0             # <<<<<<<<<<<<<<
 *         if copy:
 *             flags = cnp.NPY_WRITEABLE
 */
    __pyx_v_flags = 0;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":427
 *         el_count = byte_count // dt.itemsize
 *         cdef int flags = 0
 *         if copy:             # <<<<<<<<<<<<<<
 *             flags = cnp.NPY_WRITEABLE
 *         Py_INCREF(<object> dt)
 */
    if (__pyx_v_copy) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":428
 *         cdef int flags = 0
 *         if copy:
 *             flags = cnp.NPY_WRITEABLE             # <<<<<<<<<<<<<<
 *         Py_INCREF(<object> dt)
 *         el = PyArray_NewFromDescr(&PyArray_Type,
 */
      __pyx_v_flags = NPY_WRITEABLE;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":429
 *         if copy:
 *             flags = cnp.NPY_WRITEABLE
 *         Py_INCREF(<object> dt)             # <<<<<<<<<<<<<<
 *         el = PyArray_NewFromDescr(&PyArray_Type,
 *                                    dt,
 */
    Py_INCREF(((System::Object^)__pyx_v_dt));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":437
 *                                    <void*>data_ptr,
 *                                    flags,
 *                                    <object>NULL)             # <<<<<<<<<<<<<<
 *         Py_INCREF(<object> data)
 *         PyArray_Set_BASE(el, data)
 */
    __pyx_t_5 = ((System::Object^)PyArray_NewFromDescr((&PyArray_Type), __pyx_v_dt, 1, (&__pyx_v_el_count), NULL, ((void *)__pyx_v_data_ptr), __pyx_v_flags, ((System::Object^)NULL))); 
    __pyx_v_el = ((NumpyDotNet::ndarray^)__pyx_t_5);
    __pyx_t_5 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":438
 *                                    flags,
 *                                    <object>NULL)
 *         Py_INCREF(<object> data)             # <<<<<<<<<<<<<<
 *         PyArray_Set_BASE(el, data)
 *         return el
 */
    Py_INCREF(__pyx_v_data);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":439
 *                                    <object>NULL)
 *         Py_INCREF(<object> data)
 *         PyArray_Set_BASE(el, data)             # <<<<<<<<<<<<<<
 *         return el
 * 
 */
    PyArray_Set_BASE(__pyx_v_el, __pyx_v_data);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":440
 *         Py_INCREF(<object> data)
 *         PyArray_Set_BASE(el, data)
 *         return el             # <<<<<<<<<<<<<<
 * 
 *     cdef inline object read_int8_string(self):
 */
    __pyx_r = __pyx_v_el;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":442
 *         return el
 * 
 *     cdef inline object read_int8_string(self):             # <<<<<<<<<<<<<<
 *         ''' Read, return int8 type string
 * 
 */

  virtual CYTHON_INLINE System::Object^ read_int8_string(void) {
    __pyx_t_5numpy_uint32_t __pyx_v_mdtype;
    __pyx_t_5numpy_uint32_t __pyx_v_byte_count;
    void *__pyx_v_ptr;
    System::Object^ __pyx_v_data;
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    int __pyx_t_2;
    System::Object^ __pyx_t_3 = nullptr;
    VarReader5^ __pyx_v_self = this;
    __pyx_v_data = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":454
 *             void *ptr
 *             object data
 *         data = self.read_element(&mdtype, &byte_count, &ptr)             # <<<<<<<<<<<<<<
 *         if mdtype != miINT8:
 *             raise TypeError('Expecting miINT8 as data type')
 */
    __pyx_t_1 = __pyx_v_self->read_element((&__pyx_v_mdtype), (&__pyx_v_byte_count), (&__pyx_v_ptr), nullptr); 
    __pyx_v_data = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":455
 *             object data
 *         data = self.read_element(&mdtype, &byte_count, &ptr)
 *         if mdtype != miINT8:             # <<<<<<<<<<<<<<
 *             raise TypeError('Expecting miINT8 as data type')
 *         return data
 */
    __pyx_t_2 = (__pyx_v_mdtype != __pyx_e_5scipy_2io_6matlab_10mio5_utils_miINT8);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":456
 *         data = self.read_element(&mdtype, &byte_count, &ptr)
 *         if mdtype != miINT8:
 *             raise TypeError('Expecting miINT8 as data type')             # <<<<<<<<<<<<<<
 *         return data
 * 
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "TypeError");
      __pyx_t_3 = __site_call1_456_27->Target(__site_call1_456_27, __pyx_context, __pyx_t_1, ((System::Object^)"Expecting miINT8 as data type"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":457
 *         if mdtype != miINT8:
 *             raise TypeError('Expecting miINT8 as data type')
 *         return data             # <<<<<<<<<<<<<<
 * 
 *     cdef int read_into_int32s(self, cnp.int32_t *int32p) except -1:
 */
    __pyx_r = __pyx_v_data;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":459
 *         return data
 * 
 *     cdef int read_into_int32s(self, cnp.int32_t *int32p) except -1:             # <<<<<<<<<<<<<<
 *         ''' Read int32 values into pre-allocated memory
 * 
 */

  virtual  int read_into_int32s(__pyx_t_5numpy_int32_t *__pyx_v_int32p) {
    __pyx_t_5numpy_uint32_t __pyx_v_mdtype;
    __pyx_t_5numpy_uint32_t __pyx_v_byte_count;
    int __pyx_v_i;
    int __pyx_v_n_ints;
    int __pyx_r;
    int __pyx_t_1;
    int __pyx_t_2;
    System::Object^ __pyx_t_3 = nullptr;
    System::Object^ __pyx_t_4 = nullptr;
    int __pyx_t_5;
    VarReader5^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":476
 *             cnp.uint32_t mdtype, byte_count
 *             int i
 *         self.read_element_into(&mdtype, &byte_count, <void *>int32p)             # <<<<<<<<<<<<<<
 *         if mdtype != miINT32:
 *             raise TypeError('Expecting miINT32 as data type')
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = __pyx_v_self->read_element_into((&__pyx_v_mdtype), (&__pyx_v_byte_count), ((void *)__pyx_v_int32p)); 

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":477
 *             int i
 *         self.read_element_into(&mdtype, &byte_count, <void *>int32p)
 *         if mdtype != miINT32:             # <<<<<<<<<<<<<<
 *             raise TypeError('Expecting miINT32 as data type')
 *             return -1
 */
    __pyx_t_2 = (__pyx_v_mdtype != __pyx_e_5scipy_2io_6matlab_10mio5_utils_miINT32);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":478
 *         self.read_element_into(&mdtype, &byte_count, <void *>int32p)
 *         if mdtype != miINT32:
 *             raise TypeError('Expecting miINT32 as data type')             # <<<<<<<<<<<<<<
 *             return -1
 *         cdef int n_ints = byte_count // 4
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "TypeError");
      __pyx_t_4 = __site_call1_478_27->Target(__site_call1_478_27, __pyx_context, __pyx_t_3, ((System::Object^)"Expecting miINT32 as data type"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":479
 *         if mdtype != miINT32:
 *             raise TypeError('Expecting miINT32 as data type')
 *             return -1             # <<<<<<<<<<<<<<
 *         cdef int n_ints = byte_count // 4
 *         if self.is_swapped:
 */
      __pyx_r = -1;
      goto __pyx_L0;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":480
 *             raise TypeError('Expecting miINT32 as data type')
 *             return -1
 *         cdef int n_ints = byte_count // 4             # <<<<<<<<<<<<<<
 *         if self.is_swapped:
 *             for i in range(n_ints):
 */
    __pyx_v_n_ints = __Pyx_div_long(__pyx_v_byte_count, 4);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":481
 *             return -1
 *         cdef int n_ints = byte_count // 4
 *         if self.is_swapped:             # <<<<<<<<<<<<<<
 *             for i in range(n_ints):
 *                 int32p[i] = byteswap_u4(int32p[i])
 */
    if (__pyx_v_self->is_swapped) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":482
 *         cdef int n_ints = byte_count // 4
 *         if self.is_swapped:
 *             for i in range(n_ints):             # <<<<<<<<<<<<<<
 *                 int32p[i] = byteswap_u4(int32p[i])
 *         return n_ints
 */
      __pyx_t_1 = __pyx_v_n_ints;
      for (__pyx_t_5 = 0; __pyx_t_5 < __pyx_t_1; __pyx_t_5+=1) {
        __pyx_v_i = __pyx_t_5;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":483
 *         if self.is_swapped:
 *             for i in range(n_ints):
 *                 int32p[i] = byteswap_u4(int32p[i])             # <<<<<<<<<<<<<<
 *         return n_ints
 * 
 */
        (__pyx_v_int32p[__pyx_v_i]) = byteswap_u4((__pyx_v_int32p[__pyx_v_i]), 0);
      }
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":484
 *             for i in range(n_ints):
 *                 int32p[i] = byteswap_u4(int32p[i])
 *         return n_ints             # <<<<<<<<<<<<<<
 * 
 *     def read_full_tag(self):
 */
    __pyx_r = __pyx_v_n_ints;
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":486
 *         return n_ints
 * 
 *     def read_full_tag(self):             # <<<<<<<<<<<<<<
 *         ''' Python method for reading full u4, u4 tag from stream
 * 
 */

  virtual System::Object^ read_full_tag() {
    __pyx_t_5numpy_uint32_t __pyx_v_mdtype;
    __pyx_t_5numpy_uint32_t __pyx_v_byte_count;
    System::Object^ __pyx_r = nullptr;
    int __pyx_t_1;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_t_3 = nullptr;
    System::Object^ __pyx_t_4 = nullptr;
    System::Object^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":503
 *         '''
 *         cdef cnp.uint32_t mdtype, byte_count
 *         self.cread_full_tag(&mdtype, &byte_count)             # <<<<<<<<<<<<<<
 *         return mdtype, byte_count
 * 
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = ((VarReader5^)__pyx_v_self)->cread_full_tag((&__pyx_v_mdtype), (&__pyx_v_byte_count)); 

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":504
 *         cdef cnp.uint32_t mdtype, byte_count
 *         self.cread_full_tag(&mdtype, &byte_count)
 *         return mdtype, byte_count             # <<<<<<<<<<<<<<
 * 
 *     cdef int cread_full_tag(self,
 */
    __pyx_t_2 = __pyx_v_mdtype;
    __pyx_t_3 = __pyx_v_byte_count;
    __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_2, __pyx_t_3});
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_r = __pyx_t_4;
    __pyx_t_4 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":506
 *         return mdtype, byte_count
 * 
 *     cdef int cread_full_tag(self,             # <<<<<<<<<<<<<<
 *                             cnp.uint32_t* mdtype,
 *                             cnp.uint32_t* byte_count) except -1:
 */

  virtual  int cread_full_tag(__pyx_t_5numpy_uint32_t *__pyx_v_mdtype, __pyx_t_5numpy_uint32_t *__pyx_v_byte_count) {
    __pyx_t_5numpy_uint32_t __pyx_v_u4s[2];
    int __pyx_r;
    int __pyx_t_1;
    VarReader5^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":511
 *         ''' C method for reading full u4, u4 tag from stream'''
 *         cdef cnp.uint32_t u4s[2]
 *         self.cstream.read_into(<void *>u4s, 8)             # <<<<<<<<<<<<<<
 *         if self.is_swapped:
 *             mdtype[0] = byteswap_u4(u4s[0])
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = __pyx_v_self->cstream->read_into(((void *)__pyx_v_u4s), 8); 

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":512
 *         cdef cnp.uint32_t u4s[2]
 *         self.cstream.read_into(<void *>u4s, 8)
 *         if self.is_swapped:             # <<<<<<<<<<<<<<
 *             mdtype[0] = byteswap_u4(u4s[0])
 *             byte_count[0] = byteswap_u4(u4s[1])
 */
    if (__pyx_v_self->is_swapped) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":513
 *         self.cstream.read_into(<void *>u4s, 8)
 *         if self.is_swapped:
 *             mdtype[0] = byteswap_u4(u4s[0])             # <<<<<<<<<<<<<<
 *             byte_count[0] = byteswap_u4(u4s[1])
 *         else:
 */
      (__pyx_v_mdtype[0]) = byteswap_u4((__pyx_v_u4s[0]), 0);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":514
 *         if self.is_swapped:
 *             mdtype[0] = byteswap_u4(u4s[0])
 *             byte_count[0] = byteswap_u4(u4s[1])             # <<<<<<<<<<<<<<
 *         else:
 *             mdtype[0] = u4s[0]
 */
      (__pyx_v_byte_count[0]) = byteswap_u4((__pyx_v_u4s[1]), 0);
      goto __pyx_L3;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":516
 *             byte_count[0] = byteswap_u4(u4s[1])
 *         else:
 *             mdtype[0] = u4s[0]             # <<<<<<<<<<<<<<
 *             byte_count[0] = u4s[1]
 *         return 0
 */
      (__pyx_v_mdtype[0]) = (__pyx_v_u4s[0]);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":517
 *         else:
 *             mdtype[0] = u4s[0]
 *             byte_count[0] = u4s[1]             # <<<<<<<<<<<<<<
 *         return 0
 * 
 */
      (__pyx_v_byte_count[0]) = (__pyx_v_u4s[1]);
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":518
 *             mdtype[0] = u4s[0]
 *             byte_count[0] = u4s[1]
 *         return 0             # <<<<<<<<<<<<<<
 * 
 *     cpdef VarHeader5 read_header(self):
 */
    __pyx_r = 0;
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":520
 *         return 0
 * 
 *     cpdef VarHeader5 read_header(self):             # <<<<<<<<<<<<<<
 *         ''' Return matrix header for current stream position
 * 
 */

  virtual  VarHeader5^ read_header(void) {
    __pyx_t_5numpy_uint32_t __pyx_v_u4s[2];
    __pyx_t_5numpy_uint32_t __pyx_v_flags_class;
    __pyx_t_5numpy_uint32_t __pyx_v_nzmax;
    __pyx_t_5numpy_uint16_t __pyx_v_mc;
    int __pyx_v_i;
    VarHeader5^ __pyx_v_header;
    VarHeader5^ __pyx_r = nullptr;
    int __pyx_t_1;
    System::Object^ __pyx_t_2 = nullptr;
    int __pyx_t_3;
    System::Object^ __pyx_t_4 = nullptr;
    System::Object^ __pyx_t_5 = nullptr;
    int __pyx_t_6;
    VarReader5^ __pyx_v_self = this;
    __pyx_v_header = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":534
 *             VarHeader5 header
 *         # Read and discard mdtype and byte_count
 *         self.cstream.read_into(<void *>u4s, 8)             # <<<<<<<<<<<<<<
 *         # get array flags and nzmax
 *         self.cstream.read_into(<void *>u4s, 8)
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = __pyx_v_self->cstream->read_into(((void *)__pyx_v_u4s), 8); 

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":536
 *         self.cstream.read_into(<void *>u4s, 8)
 *         # get array flags and nzmax
 *         self.cstream.read_into(<void *>u4s, 8)             # <<<<<<<<<<<<<<
 *         if self.is_swapped:
 *             flags_class = byteswap_u4(u4s[0])
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = __pyx_v_self->cstream->read_into(((void *)__pyx_v_u4s), 8); 

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":537
 *         # get array flags and nzmax
 *         self.cstream.read_into(<void *>u4s, 8)
 *         if self.is_swapped:             # <<<<<<<<<<<<<<
 *             flags_class = byteswap_u4(u4s[0])
 *             nzmax = byteswap_u4(u4s[1])
 */
    if (__pyx_v_self->is_swapped) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":538
 *         self.cstream.read_into(<void *>u4s, 8)
 *         if self.is_swapped:
 *             flags_class = byteswap_u4(u4s[0])             # <<<<<<<<<<<<<<
 *             nzmax = byteswap_u4(u4s[1])
 *         else:
 */
      __pyx_v_flags_class = byteswap_u4((__pyx_v_u4s[0]), 0);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":539
 *         if self.is_swapped:
 *             flags_class = byteswap_u4(u4s[0])
 *             nzmax = byteswap_u4(u4s[1])             # <<<<<<<<<<<<<<
 *         else:
 *             flags_class = u4s[0]
 */
      __pyx_v_nzmax = byteswap_u4((__pyx_v_u4s[1]), 0);
      goto __pyx_L3;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":541
 *             nzmax = byteswap_u4(u4s[1])
 *         else:
 *             flags_class = u4s[0]             # <<<<<<<<<<<<<<
 *             nzmax = u4s[1]
 *         header = VarHeader5()
 */
      __pyx_v_flags_class = (__pyx_v_u4s[0]);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":542
 *         else:
 *             flags_class = u4s[0]
 *             nzmax = u4s[1]             # <<<<<<<<<<<<<<
 *         header = VarHeader5()
 *         mc = flags_class & 0xFF
 */
      __pyx_v_nzmax = (__pyx_v_u4s[1]);
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":543
 *             flags_class = u4s[0]
 *             nzmax = u4s[1]
 *         header = VarHeader5()             # <<<<<<<<<<<<<<
 *         mc = flags_class & 0xFF
 *         header.mclass = mc
 */
    __pyx_t_2 = __site_call0_543_27->Target(__site_call0_543_27, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_2io_6matlab_10mio5_utils_VarHeader5)));
    __pyx_v_header = ((VarHeader5^)__pyx_t_2);
    __pyx_t_2 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":544
 *             nzmax = u4s[1]
 *         header = VarHeader5()
 *         mc = flags_class & 0xFF             # <<<<<<<<<<<<<<
 *         header.mclass = mc
 *         header.is_logical = flags_class >> 9 & 1
 */
    __pyx_v_mc = (__pyx_v_flags_class & 0xFF);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":545
 *         header = VarHeader5()
 *         mc = flags_class & 0xFF
 *         header.mclass = mc             # <<<<<<<<<<<<<<
 *         header.is_logical = flags_class >> 9 & 1
 *         header.is_global = flags_class >> 10 & 1
 */
    __pyx_v_header->mclass = __pyx_v_mc;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":546
 *         mc = flags_class & 0xFF
 *         header.mclass = mc
 *         header.is_logical = flags_class >> 9 & 1             # <<<<<<<<<<<<<<
 *         header.is_global = flags_class >> 10 & 1
 *         header.is_complex = flags_class >> 11 & 1
 */
    __pyx_v_header->is_logical = ((__pyx_v_flags_class >> 9) & 1);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":547
 *         header.mclass = mc
 *         header.is_logical = flags_class >> 9 & 1
 *         header.is_global = flags_class >> 10 & 1             # <<<<<<<<<<<<<<
 *         header.is_complex = flags_class >> 11 & 1
 *         header.nzmax = nzmax
 */
    __pyx_v_header->is_global = ((__pyx_v_flags_class >> 10) & 1);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":548
 *         header.is_logical = flags_class >> 9 & 1
 *         header.is_global = flags_class >> 10 & 1
 *         header.is_complex = flags_class >> 11 & 1             # <<<<<<<<<<<<<<
 *         header.nzmax = nzmax
 *         # all miMATRIX types except the mxOPAQUE_CLASS have dims and a
 */
    __pyx_v_header->is_complex = ((__pyx_v_flags_class >> 11) & 1);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":549
 *         header.is_global = flags_class >> 10 & 1
 *         header.is_complex = flags_class >> 11 & 1
 *         header.nzmax = nzmax             # <<<<<<<<<<<<<<
 *         # all miMATRIX types except the mxOPAQUE_CLASS have dims and a
 *         # name.
 */
    __pyx_v_header->nzmax = __pyx_v_nzmax;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":552
 *         # all miMATRIX types except the mxOPAQUE_CLASS have dims and a
 *         # name.
 *         if mc == mxOPAQUE_CLASS:             # <<<<<<<<<<<<<<
 *             header.name = None
 *             header.dims = None
 */
    __pyx_t_3 = (__pyx_v_mc == __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxOPAQUE_CLASS);
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":553
 *         # name.
 *         if mc == mxOPAQUE_CLASS:
 *             header.name = None             # <<<<<<<<<<<<<<
 *             header.dims = None
 *             return header
 */
      __pyx_v_header->name = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":554
 *         if mc == mxOPAQUE_CLASS:
 *             header.name = None
 *             header.dims = None             # <<<<<<<<<<<<<<
 *             return header
 *         header.n_dims = self.read_into_int32s(header.dims_ptr)
 */
      __pyx_v_header->dims = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":555
 *             header.name = None
 *             header.dims = None
 *             return header             # <<<<<<<<<<<<<<
 *         header.n_dims = self.read_into_int32s(header.dims_ptr)
 *         if header.n_dims > _MAT_MAXDIMS:
 */
      __pyx_r = __pyx_v_header;
      goto __pyx_L0;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":556
 *             header.dims = None
 *             return header
 *         header.n_dims = self.read_into_int32s(header.dims_ptr)             # <<<<<<<<<<<<<<
 *         if header.n_dims > _MAT_MAXDIMS:
 *             raise ValueError('Too many dimensions (%d) for numpy arrays'
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = __pyx_v_self->read_into_int32s(__pyx_v_header->dims_ptr); 
    __pyx_v_header->n_dims = __pyx_t_1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":557
 *             return header
 *         header.n_dims = self.read_into_int32s(header.dims_ptr)
 *         if header.n_dims > _MAT_MAXDIMS:             # <<<<<<<<<<<<<<
 *             raise ValueError('Too many dimensions (%d) for numpy arrays'
 *                              % header.n_dims)
 */
    __pyx_t_3 = (__pyx_v_header->n_dims > 32);
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":558
 *         header.n_dims = self.read_into_int32s(header.dims_ptr)
 *         if header.n_dims > _MAT_MAXDIMS:
 *             raise ValueError('Too many dimensions (%d) for numpy arrays'             # <<<<<<<<<<<<<<
 *                              % header.n_dims)
 *         # convert dims to list
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "ValueError");

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":559
 *         if header.n_dims > _MAT_MAXDIMS:
 *             raise ValueError('Too many dimensions (%d) for numpy arrays'
 *                              % header.n_dims)             # <<<<<<<<<<<<<<
 *         # convert dims to list
 *         header.dims = []
 */
      __pyx_t_4 = __pyx_v_header->n_dims;
      __pyx_t_5 = __site_op_mod_559_29->Target(__site_op_mod_559_29, ((System::Object^)"Too many dimensions (%d) for numpy arrays"), __pyx_t_4);
      __pyx_t_4 = nullptr;
      __pyx_t_4 = __site_call1_558_28->Target(__site_call1_558_28, __pyx_context, __pyx_t_2, ((System::Object^)__pyx_t_5));
      __pyx_t_2 = nullptr;
      __pyx_t_5 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      goto __pyx_L5;
    }
    __pyx_L5:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":561
 *                              % header.n_dims)
 *         # convert dims to list
 *         header.dims = []             # <<<<<<<<<<<<<<
 *         for i in range(header.n_dims):
 *             header.dims.append(header.dims_ptr[i])
 */
    __pyx_t_4 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
    __pyx_v_header->dims = ((System::Object^)__pyx_t_4);
    __pyx_t_4 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":562
 *         # convert dims to list
 *         header.dims = []
 *         for i in range(header.n_dims):             # <<<<<<<<<<<<<<
 *             header.dims.append(header.dims_ptr[i])
 *         header.name = self.read_int8_string()
 */
    __pyx_t_1 = __pyx_v_header->n_dims;
    for (__pyx_t_6 = 0; __pyx_t_6 < __pyx_t_1; __pyx_t_6+=1) {
      __pyx_v_i = __pyx_t_6;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":563
 *         header.dims = []
 *         for i in range(header.n_dims):
 *             header.dims.append(header.dims_ptr[i])             # <<<<<<<<<<<<<<
 *         header.name = self.read_int8_string()
 *         return header
 */
      __pyx_t_4 = __site_get_append_563_23->Target(__site_get_append_563_23, __pyx_v_header->dims, __pyx_context);
      __pyx_t_5 = (__pyx_v_header->dims_ptr[__pyx_v_i]);
      __pyx_t_2 = __site_call1_563_30->Target(__site_call1_563_30, __pyx_context, __pyx_t_4, __pyx_t_5);
      __pyx_t_4 = nullptr;
      __pyx_t_5 = nullptr;
      __pyx_t_2 = nullptr;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":564
 *         for i in range(header.n_dims):
 *             header.dims.append(header.dims_ptr[i])
 *         header.name = self.read_int8_string()             # <<<<<<<<<<<<<<
 *         return header
 * 
 */
    __pyx_t_2 = __pyx_v_self->read_int8_string(); 
    __pyx_v_header->name = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":565
 *             header.dims.append(header.dims_ptr[i])
 *         header.name = self.read_int8_string()
 *         return header             # <<<<<<<<<<<<<<
 * 
 *     cdef inline size_t size_from_header(self, VarHeader5 header):
 */
    __pyx_r = __pyx_v_header;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":567
 *         return header
 * 
 *     cdef inline size_t size_from_header(self, VarHeader5 header):             # <<<<<<<<<<<<<<
 *         ''' Supporting routine for calculating array sizes from header
 * 
 */

  virtual CYTHON_INLINE size_t size_from_header(VarHeader5^ __pyx_v_header) {
    size_t __pyx_v_size;
    int __pyx_v_i;
    size_t __pyx_r;
    int __pyx_t_1;
    int __pyx_t_2;
    VarReader5^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":584
 *         '''
 *         # calculate number of items in array from dims product
 *         cdef size_t size = 1             # <<<<<<<<<<<<<<
 *         cdef int i
 *         for i in range(header.n_dims):
 */
    __pyx_v_size = 1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":586
 *         cdef size_t size = 1
 *         cdef int i
 *         for i in range(header.n_dims):             # <<<<<<<<<<<<<<
 *             size *= header.dims_ptr[i]
 *         return size
 */
    __pyx_t_1 = __pyx_v_header->n_dims;
    for (__pyx_t_2 = 0; __pyx_t_2 < __pyx_t_1; __pyx_t_2+=1) {
      __pyx_v_i = __pyx_t_2;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":587
 *         cdef int i
 *         for i in range(header.n_dims):
 *             size *= header.dims_ptr[i]             # <<<<<<<<<<<<<<
 *         return size
 * 
 */
      __pyx_v_size *= (__pyx_v_header->dims_ptr[__pyx_v_i]);
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":588
 *         for i in range(header.n_dims):
 *             size *= header.dims_ptr[i]
 *         return size             # <<<<<<<<<<<<<<
 * 
 *     cdef read_mi_matrix(self, int process=1):
 */
    __pyx_r = __pyx_v_size;
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":590
 *         return size
 * 
 *     cdef read_mi_matrix(self, int process=1):             # <<<<<<<<<<<<<<
 *         ''' Read header with matrix at sub-levels
 * 
 */

  virtual  System::Object^ read_mi_matrix(ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_read_mi_matrix ^__pyx_optional_args) {
    int __pyx_v_process = ((int)1);
    VarHeader5^ __pyx_v_header;
    __pyx_t_5numpy_uint32_t __pyx_v_mdtype;
    __pyx_t_5numpy_uint32_t __pyx_v_byte_count;
    System::Object^ __pyx_r = nullptr;
    int __pyx_t_1;
    int __pyx_t_2;
    System::Object^ __pyx_t_3 = nullptr;
    System::Object^ __pyx_t_4 = nullptr;
    System::Object^ __pyx_t_5 = nullptr;
    ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_array_from_header __pyx_t_6;
    VarReader5^ __pyx_v_self = this;
    if (__pyx_optional_args) {
      if (__pyx_optional_args->__pyx_n > 0) {
        __pyx_v_process = __pyx_optional_args->process;
      }
    }
    __pyx_v_header = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":611
 *             object arr
 *         # read full tag
 *         self.cread_full_tag(&mdtype, &byte_count)             # <<<<<<<<<<<<<<
 *         if mdtype != miMATRIX:
 *             raise TypeError('Expecting matrix here')
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = __pyx_v_self->cread_full_tag((&__pyx_v_mdtype), (&__pyx_v_byte_count)); 

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":612
 *         # read full tag
 *         self.cread_full_tag(&mdtype, &byte_count)
 *         if mdtype != miMATRIX:             # <<<<<<<<<<<<<<
 *             raise TypeError('Expecting matrix here')
 *         if byte_count == 0: # empty matrix
 */
    __pyx_t_2 = (__pyx_v_mdtype != __pyx_e_5scipy_2io_6matlab_10mio5_utils_miMATRIX);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":613
 *         self.cread_full_tag(&mdtype, &byte_count)
 *         if mdtype != miMATRIX:
 *             raise TypeError('Expecting matrix here')             # <<<<<<<<<<<<<<
 *         if byte_count == 0: # empty matrix
 *             if process and self.squeeze_me:
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "TypeError");
      __pyx_t_4 = __site_call1_613_27->Target(__site_call1_613_27, __pyx_context, __pyx_t_3, ((System::Object^)"Expecting matrix here"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":614
 *         if mdtype != miMATRIX:
 *             raise TypeError('Expecting matrix here')
 *         if byte_count == 0: # empty matrix             # <<<<<<<<<<<<<<
 *             if process and self.squeeze_me:
 *                 return np.array([])
 */
    __pyx_t_2 = (__pyx_v_byte_count == 0);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":615
 *             raise TypeError('Expecting matrix here')
 *         if byte_count == 0: # empty matrix
 *             if process and self.squeeze_me:             # <<<<<<<<<<<<<<
 *                 return np.array([])
 *             else:
 */
      if (__pyx_v_process) {
        __pyx_t_2 = __pyx_v_self->squeeze_me;
      } else {
        __pyx_t_2 = __pyx_v_process;
      }
      if (__pyx_t_2) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":616
 *         if byte_count == 0: # empty matrix
 *             if process and self.squeeze_me:
 *                 return np.array([])             # <<<<<<<<<<<<<<
 *             else:
 *                 return np.array([[]])
 */
        __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "np");
        __pyx_t_3 = __site_get_array_616_25->Target(__site_get_array_616_25, __pyx_t_4, __pyx_context);
        __pyx_t_4 = nullptr;
        __pyx_t_4 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
        __pyx_t_5 = __site_call1_616_31->Target(__site_call1_616_31, __pyx_context, __pyx_t_3, ((System::Object^)__pyx_t_4));
        __pyx_t_3 = nullptr;
        __pyx_t_4 = nullptr;
        __pyx_r = __pyx_t_5;
        __pyx_t_5 = nullptr;
        goto __pyx_L0;
        goto __pyx_L5;
      }
      /*else*/ {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":618
 *                 return np.array([])
 *             else:
 *                 return np.array([[]])             # <<<<<<<<<<<<<<
 *         header = self.read_header()
 *         return self.array_from_header(header, process)
 */
        __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "np");
        __pyx_t_4 = __site_get_array_618_25->Target(__site_get_array_618_25, __pyx_t_5, __pyx_context);
        __pyx_t_5 = nullptr;
        __pyx_t_5 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
        __pyx_t_3 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{((System::Object^)__pyx_t_5)});
        __pyx_t_5 = nullptr;
        __pyx_t_5 = __site_call1_618_31->Target(__site_call1_618_31, __pyx_context, __pyx_t_4, ((System::Object^)__pyx_t_3));
        __pyx_t_4 = nullptr;
        __pyx_t_3 = nullptr;
        __pyx_r = __pyx_t_5;
        __pyx_t_5 = nullptr;
        goto __pyx_L0;
      }
      __pyx_L5:;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":619
 *             else:
 *                 return np.array([[]])
 *         header = self.read_header()             # <<<<<<<<<<<<<<
 *         return self.array_from_header(header, process)
 * 
 */
    __pyx_t_5 = ((System::Object^)__pyx_v_self->read_header(0)); 
    __pyx_v_header = ((VarHeader5^)__pyx_t_5);
    __pyx_t_5 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":620
 *                 return np.array([[]])
 *         header = self.read_header()
 *         return self.array_from_header(header, process)             # <<<<<<<<<<<<<<
 * 
 *     cpdef array_from_header(self, VarHeader5 header, int process=1):
 */
    __pyx_t_6.__pyx_n = 1;
    __pyx_t_6.process = __pyx_v_process;
    __pyx_t_5 = __pyx_v_self->array_from_header(__pyx_v_header, 0, %__pyx_t_6); 
    __pyx_r = __pyx_t_5;
    __pyx_t_5 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":622
 *         return self.array_from_header(header, process)
 * 
 *     cpdef array_from_header(self, VarHeader5 header, int process=1):             # <<<<<<<<<<<<<<
 *         ''' Read array of any class, given matrix `header`
 * 
 */

  virtual  System::Object^ array_from_header(VarHeader5^ __pyx_v_header, ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_array_from_header ^__pyx_optional_args) {
    int __pyx_v_process = ((int)1);
    System::Object^ __pyx_v_arr;
    NumpyDotNet::dtype^ __pyx_v_mat_dtype;
    int __pyx_v_mc;
    System::Object^ __pyx_v_classname;
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    int __pyx_t_2;
    PyObject *__pyx_t_3;
    System::Object^ __pyx_t_4 = nullptr;
    System::Object^ __pyx_t_5 = nullptr;
    VarReader5^ __pyx_v_self = this;
    if (__pyx_optional_args) {
      if (__pyx_optional_args->__pyx_n > 0) {
        __pyx_v_process = __pyx_optional_args->process;
      }
    }
    __pyx_v_arr = nullptr;
    __pyx_v_mat_dtype = nullptr;
    __pyx_v_classname = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":640
 *             object arr
 *             cnp.dtype mat_dtype
 *         cdef int mc = header.mclass             # <<<<<<<<<<<<<<
 *         if (mc == mxDOUBLE_CLASS
 *             or mc == mxSINGLE_CLASS
 */
    __pyx_v_mc = __pyx_v_header->mclass;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":641
 *             cnp.dtype mat_dtype
 *         cdef int mc = header.mclass
 *         if (mc == mxDOUBLE_CLASS             # <<<<<<<<<<<<<<
 *             or mc == mxSINGLE_CLASS
 *             or mc == mxINT8_CLASS
 */
    switch (__pyx_v_mc) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":642
 *         cdef int mc = header.mclass
 *         if (mc == mxDOUBLE_CLASS
 *             or mc == mxSINGLE_CLASS             # <<<<<<<<<<<<<<
 *             or mc == mxINT8_CLASS
 *             or mc == mxUINT8_CLASS
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxDOUBLE_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":643
 *         if (mc == mxDOUBLE_CLASS
 *             or mc == mxSINGLE_CLASS
 *             or mc == mxINT8_CLASS             # <<<<<<<<<<<<<<
 *             or mc == mxUINT8_CLASS
 *             or mc == mxINT16_CLASS
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxSINGLE_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":644
 *             or mc == mxSINGLE_CLASS
 *             or mc == mxINT8_CLASS
 *             or mc == mxUINT8_CLASS             # <<<<<<<<<<<<<<
 *             or mc == mxINT16_CLASS
 *             or mc == mxUINT16_CLASS
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxINT8_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":645
 *             or mc == mxINT8_CLASS
 *             or mc == mxUINT8_CLASS
 *             or mc == mxINT16_CLASS             # <<<<<<<<<<<<<<
 *             or mc == mxUINT16_CLASS
 *             or mc == mxINT32_CLASS
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxUINT8_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":646
 *             or mc == mxUINT8_CLASS
 *             or mc == mxINT16_CLASS
 *             or mc == mxUINT16_CLASS             # <<<<<<<<<<<<<<
 *             or mc == mxINT32_CLASS
 *             or mc == mxUINT32_CLASS
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxINT16_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":647
 *             or mc == mxINT16_CLASS
 *             or mc == mxUINT16_CLASS
 *             or mc == mxINT32_CLASS             # <<<<<<<<<<<<<<
 *             or mc == mxUINT32_CLASS
 *             or mc == mxINT64_CLASS
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxUINT16_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":648
 *             or mc == mxUINT16_CLASS
 *             or mc == mxINT32_CLASS
 *             or mc == mxUINT32_CLASS             # <<<<<<<<<<<<<<
 *             or mc == mxINT64_CLASS
 *             or mc == mxUINT64_CLASS): # numeric matrix
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxINT32_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":649
 *             or mc == mxINT32_CLASS
 *             or mc == mxUINT32_CLASS
 *             or mc == mxINT64_CLASS             # <<<<<<<<<<<<<<
 *             or mc == mxUINT64_CLASS): # numeric matrix
 *             arr = self.read_real_complex(header)
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxUINT32_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":650
 *             or mc == mxUINT32_CLASS
 *             or mc == mxINT64_CLASS
 *             or mc == mxUINT64_CLASS): # numeric matrix             # <<<<<<<<<<<<<<
 *             arr = self.read_real_complex(header)
 *             if process and self.mat_dtype: # might need to recast
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxINT64_CLASS:
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxUINT64_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":651
 *             or mc == mxINT64_CLASS
 *             or mc == mxUINT64_CLASS): # numeric matrix
 *             arr = self.read_real_complex(header)             # <<<<<<<<<<<<<<
 *             if process and self.mat_dtype: # might need to recast
 *                 if header.is_logical:
 */
      __pyx_t_1 = ((System::Object^)__pyx_v_self->read_real_complex(__pyx_v_header, 0)); 
      __pyx_v_arr = __pyx_t_1;
      __pyx_t_1 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":652
 *             or mc == mxUINT64_CLASS): # numeric matrix
 *             arr = self.read_real_complex(header)
 *             if process and self.mat_dtype: # might need to recast             # <<<<<<<<<<<<<<
 *                 if header.is_logical:
 *                     mat_dtype = self.bool_dtype
 */
      if (__pyx_v_process) {
        __pyx_t_2 = __pyx_v_self->mat_dtype;
      } else {
        __pyx_t_2 = __pyx_v_process;
      }
      if (__pyx_t_2) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":653
 *             arr = self.read_real_complex(header)
 *             if process and self.mat_dtype: # might need to recast
 *                 if header.is_logical:             # <<<<<<<<<<<<<<
 *                     mat_dtype = self.bool_dtype
 *                 else:
 */
        if (__pyx_v_header->is_logical) {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":654
 *             if process and self.mat_dtype: # might need to recast
 *                 if header.is_logical:
 *                     mat_dtype = self.bool_dtype             # <<<<<<<<<<<<<<
 *                 else:
 *                     mat_dtype = <object>self.class_dtypes[mc]
 */
          __pyx_v_mat_dtype = __pyx_v_self->bool_dtype;
          goto __pyx_L4;
        }
        /*else*/ {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":656
 *                     mat_dtype = self.bool_dtype
 *                 else:
 *                     mat_dtype = <object>self.class_dtypes[mc]             # <<<<<<<<<<<<<<
 *                 arr = arr.astype(mat_dtype)
 *         elif mc == mxSPARSE_CLASS:
 */
          __pyx_t_3 = (__pyx_v_self->class_dtypes[__pyx_v_mc]);
          if (((System::Object^)__pyx_t_3) == nullptr || dynamic_cast<NumpyDotNet::dtype^>(((System::Object^)__pyx_t_3)) == nullptr) {
            throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
          }
          __pyx_v_mat_dtype = ((NumpyDotNet::dtype^)((System::Object^)__pyx_t_3));
        }
        __pyx_L4:;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":657
 *                 else:
 *                     mat_dtype = <object>self.class_dtypes[mc]
 *                 arr = arr.astype(mat_dtype)             # <<<<<<<<<<<<<<
 *         elif mc == mxSPARSE_CLASS:
 *             arr = self.read_sparse(header)
 */
        __pyx_t_1 = __site_get_astype_657_25->Target(__site_get_astype_657_25, __pyx_v_arr, __pyx_context);
        __pyx_t_4 = __site_call1_657_32->Target(__site_call1_657_32, __pyx_context, __pyx_t_1, ((System::Object^)__pyx_v_mat_dtype));
        __pyx_t_1 = nullptr;
        __pyx_v_arr = __pyx_t_4;
        __pyx_t_4 = nullptr;
        goto __pyx_L3;
      }
      __pyx_L3:;
      break;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":658
 *                     mat_dtype = <object>self.class_dtypes[mc]
 *                 arr = arr.astype(mat_dtype)
 *         elif mc == mxSPARSE_CLASS:             # <<<<<<<<<<<<<<
 *             arr = self.read_sparse(header)
 *             # no current processing makes sense for sparse
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxSPARSE_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":659
 *                 arr = arr.astype(mat_dtype)
 *         elif mc == mxSPARSE_CLASS:
 *             arr = self.read_sparse(header)             # <<<<<<<<<<<<<<
 *             # no current processing makes sense for sparse
 *             return arr
 */
      __pyx_t_4 = __pyx_v_self->read_sparse(__pyx_v_header); 
      __pyx_v_arr = __pyx_t_4;
      __pyx_t_4 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":661
 *             arr = self.read_sparse(header)
 *             # no current processing makes sense for sparse
 *             return arr             # <<<<<<<<<<<<<<
 *         elif mc == mxCHAR_CLASS:
 *             arr = self.read_char(header)
 */
      __pyx_r = __pyx_v_arr;
      goto __pyx_L0;
      break;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":662
 *             # no current processing makes sense for sparse
 *             return arr
 *         elif mc == mxCHAR_CLASS:             # <<<<<<<<<<<<<<
 *             arr = self.read_char(header)
 *             if process and self.chars_as_strings:
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxCHAR_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":663
 *             return arr
 *         elif mc == mxCHAR_CLASS:
 *             arr = self.read_char(header)             # <<<<<<<<<<<<<<
 *             if process and self.chars_as_strings:
 *                 arr = chars_to_strings(arr)
 */
      __pyx_t_4 = ((System::Object^)__pyx_v_self->read_char(__pyx_v_header, 0)); 
      __pyx_v_arr = __pyx_t_4;
      __pyx_t_4 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":664
 *         elif mc == mxCHAR_CLASS:
 *             arr = self.read_char(header)
 *             if process and self.chars_as_strings:             # <<<<<<<<<<<<<<
 *                 arr = chars_to_strings(arr)
 *         elif mc == mxCELL_CLASS:
 */
      if (__pyx_v_process) {
        __pyx_t_2 = __pyx_v_self->chars_as_strings;
      } else {
        __pyx_t_2 = __pyx_v_process;
      }
      if (__pyx_t_2) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":665
 *             arr = self.read_char(header)
 *             if process and self.chars_as_strings:
 *                 arr = chars_to_strings(arr)             # <<<<<<<<<<<<<<
 *         elif mc == mxCELL_CLASS:
 *             arr = self.read_cells(header)
 */
        __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "chars_to_strings");
        __pyx_t_1 = __site_call1_665_38->Target(__site_call1_665_38, __pyx_context, __pyx_t_4, __pyx_v_arr);
        __pyx_t_4 = nullptr;
        __pyx_v_arr = __pyx_t_1;
        __pyx_t_1 = nullptr;
        goto __pyx_L5;
      }
      __pyx_L5:;
      break;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":666
 *             if process and self.chars_as_strings:
 *                 arr = chars_to_strings(arr)
 *         elif mc == mxCELL_CLASS:             # <<<<<<<<<<<<<<
 *             arr = self.read_cells(header)
 *         elif mc == mxSTRUCT_CLASS:
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxCELL_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":667
 *                 arr = chars_to_strings(arr)
 *         elif mc == mxCELL_CLASS:
 *             arr = self.read_cells(header)             # <<<<<<<<<<<<<<
 *         elif mc == mxSTRUCT_CLASS:
 *             arr = self.read_struct(header)
 */
      __pyx_t_1 = ((System::Object^)__pyx_v_self->read_cells(__pyx_v_header, 0)); 
      __pyx_v_arr = __pyx_t_1;
      __pyx_t_1 = nullptr;
      break;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":668
 *         elif mc == mxCELL_CLASS:
 *             arr = self.read_cells(header)
 *         elif mc == mxSTRUCT_CLASS:             # <<<<<<<<<<<<<<
 *             arr = self.read_struct(header)
 *         elif mc == mxOBJECT_CLASS: # like structs, but with classname
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxSTRUCT_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":669
 *             arr = self.read_cells(header)
 *         elif mc == mxSTRUCT_CLASS:
 *             arr = self.read_struct(header)             # <<<<<<<<<<<<<<
 *         elif mc == mxOBJECT_CLASS: # like structs, but with classname
 *             classname = asstr(self.read_int8_string())
 */
      __pyx_t_1 = ((System::Object^)__pyx_v_self->read_struct(__pyx_v_header, 0)); 
      __pyx_v_arr = __pyx_t_1;
      __pyx_t_1 = nullptr;
      break;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":670
 *         elif mc == mxSTRUCT_CLASS:
 *             arr = self.read_struct(header)
 *         elif mc == mxOBJECT_CLASS: # like structs, but with classname             # <<<<<<<<<<<<<<
 *             classname = asstr(self.read_int8_string())
 *             arr = self.read_struct(header)
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxOBJECT_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":671
 *             arr = self.read_struct(header)
 *         elif mc == mxOBJECT_CLASS: # like structs, but with classname
 *             classname = asstr(self.read_int8_string())             # <<<<<<<<<<<<<<
 *             arr = self.read_struct(header)
 *             arr = mio5p.MatlabObject(arr, classname)
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "asstr");
      __pyx_t_4 = __pyx_v_self->read_int8_string(); 
      __pyx_t_5 = __site_call1_671_29->Target(__site_call1_671_29, __pyx_context, __pyx_t_1, __pyx_t_4);
      __pyx_t_1 = nullptr;
      __pyx_t_4 = nullptr;
      __pyx_v_classname = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":672
 *         elif mc == mxOBJECT_CLASS: # like structs, but with classname
 *             classname = asstr(self.read_int8_string())
 *             arr = self.read_struct(header)             # <<<<<<<<<<<<<<
 *             arr = mio5p.MatlabObject(arr, classname)
 *         elif mc == mxFUNCTION_CLASS: # just a matrix of struct type
 */
      __pyx_t_5 = ((System::Object^)__pyx_v_self->read_struct(__pyx_v_header, 0)); 
      __pyx_v_arr = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":673
 *             classname = asstr(self.read_int8_string())
 *             arr = self.read_struct(header)
 *             arr = mio5p.MatlabObject(arr, classname)             # <<<<<<<<<<<<<<
 *         elif mc == mxFUNCTION_CLASS: # just a matrix of struct type
 *             arr = self.read_mi_matrix()
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "mio5p");
      __pyx_t_4 = __site_get_MatlabObject_673_23->Target(__site_get_MatlabObject_673_23, __pyx_t_5, __pyx_context);
      __pyx_t_5 = nullptr;
      __pyx_t_5 = __site_call2_673_36->Target(__site_call2_673_36, __pyx_context, __pyx_t_4, __pyx_v_arr, __pyx_v_classname);
      __pyx_t_4 = nullptr;
      __pyx_v_arr = __pyx_t_5;
      __pyx_t_5 = nullptr;
      break;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":674
 *             arr = self.read_struct(header)
 *             arr = mio5p.MatlabObject(arr, classname)
 *         elif mc == mxFUNCTION_CLASS: # just a matrix of struct type             # <<<<<<<<<<<<<<
 *             arr = self.read_mi_matrix()
 *             arr = mio5p.MatlabFunction(arr)
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxFUNCTION_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":675
 *             arr = mio5p.MatlabObject(arr, classname)
 *         elif mc == mxFUNCTION_CLASS: # just a matrix of struct type
 *             arr = self.read_mi_matrix()             # <<<<<<<<<<<<<<
 *             arr = mio5p.MatlabFunction(arr)
 *             # to make them more re-writeable - don't squeeze
 */
      __pyx_t_5 = __pyx_v_self->read_mi_matrix(nullptr); 
      __pyx_v_arr = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":676
 *         elif mc == mxFUNCTION_CLASS: # just a matrix of struct type
 *             arr = self.read_mi_matrix()
 *             arr = mio5p.MatlabFunction(arr)             # <<<<<<<<<<<<<<
 *             # to make them more re-writeable - don't squeeze
 *             return arr
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "mio5p");
      __pyx_t_4 = __site_get_MatlabFunction_676_23->Target(__site_get_MatlabFunction_676_23, __pyx_t_5, __pyx_context);
      __pyx_t_5 = nullptr;
      __pyx_t_5 = __site_call1_676_38->Target(__site_call1_676_38, __pyx_context, __pyx_t_4, __pyx_v_arr);
      __pyx_t_4 = nullptr;
      __pyx_v_arr = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":678
 *             arr = mio5p.MatlabFunction(arr)
 *             # to make them more re-writeable - don't squeeze
 *             return arr             # <<<<<<<<<<<<<<
 *         elif mc == mxOPAQUE_CLASS:
 *             arr = self.read_opaque(header)
 */
      __pyx_r = __pyx_v_arr;
      goto __pyx_L0;
      break;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":679
 *             # to make them more re-writeable - don't squeeze
 *             return arr
 *         elif mc == mxOPAQUE_CLASS:             # <<<<<<<<<<<<<<
 *             arr = self.read_opaque(header)
 *             arr = mio5p.MatlabOpaque(arr)
 */
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_mxOPAQUE_CLASS:

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":680
 *             return arr
 *         elif mc == mxOPAQUE_CLASS:
 *             arr = self.read_opaque(header)             # <<<<<<<<<<<<<<
 *             arr = mio5p.MatlabOpaque(arr)
 *             # to make them more re-writeable - don't squeeze
 */
      __pyx_t_5 = ((System::Object^)__pyx_v_self->read_opaque(__pyx_v_header, 0)); 
      __pyx_v_arr = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":681
 *         elif mc == mxOPAQUE_CLASS:
 *             arr = self.read_opaque(header)
 *             arr = mio5p.MatlabOpaque(arr)             # <<<<<<<<<<<<<<
 *             # to make them more re-writeable - don't squeeze
 *             return arr
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "mio5p");
      __pyx_t_4 = __site_get_MatlabOpaque_681_23->Target(__site_get_MatlabOpaque_681_23, __pyx_t_5, __pyx_context);
      __pyx_t_5 = nullptr;
      __pyx_t_5 = __site_call1_681_36->Target(__site_call1_681_36, __pyx_context, __pyx_t_4, __pyx_v_arr);
      __pyx_t_4 = nullptr;
      __pyx_v_arr = __pyx_t_5;
      __pyx_t_5 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":683
 *             arr = mio5p.MatlabOpaque(arr)
 *             # to make them more re-writeable - don't squeeze
 *             return arr             # <<<<<<<<<<<<<<
 *         if process and self.squeeze_me:
 *             return squeeze_element(arr)
 */
      __pyx_r = __pyx_v_arr;
      goto __pyx_L0;
      break;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":684
 *             # to make them more re-writeable - don't squeeze
 *             return arr
 *         if process and self.squeeze_me:             # <<<<<<<<<<<<<<
 *             return squeeze_element(arr)
 *         return arr
 */
    if (__pyx_v_process) {
      __pyx_t_2 = __pyx_v_self->squeeze_me;
    } else {
      __pyx_t_2 = __pyx_v_process;
    }
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":685
 *             return arr
 *         if process and self.squeeze_me:
 *             return squeeze_element(arr)             # <<<<<<<<<<<<<<
 *         return arr
 * 
 */
      __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "squeeze_element");
      __pyx_t_4 = __site_call1_685_34->Target(__site_call1_685_34, __pyx_context, __pyx_t_5, __pyx_v_arr);
      __pyx_t_5 = nullptr;
      __pyx_r = __pyx_t_4;
      __pyx_t_4 = nullptr;
      goto __pyx_L0;
      goto __pyx_L6;
    }
    __pyx_L6:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":686
 *         if process and self.squeeze_me:
 *             return squeeze_element(arr)
 *         return arr             # <<<<<<<<<<<<<<
 * 
 *     cpdef cnp.ndarray read_real_complex(self, VarHeader5 header):
 */
    __pyx_r = __pyx_v_arr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":688
 *         return arr
 * 
 *     cpdef cnp.ndarray read_real_complex(self, VarHeader5 header):             # <<<<<<<<<<<<<<
 *         ''' Read real / complex matrices from stream '''
 *         cdef:
 */

  virtual  NumpyDotNet::ndarray^ read_real_complex(VarHeader5^ __pyx_v_header) {
    NumpyDotNet::ndarray^ __pyx_v_res;
    NumpyDotNet::ndarray^ __pyx_v_res_j;
    NumpyDotNet::ndarray^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_read_numeric __pyx_t_2;
    System::Object^ __pyx_t_3 = nullptr;
    int __pyx_t_4;
    System::Object^ __pyx_t_5 = nullptr;
    VarReader5^ __pyx_v_self = this;
    __pyx_v_res = nullptr;
    __pyx_v_res_j = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":692
 *         cdef:
 *             cnp.ndarray res, res_j
 *         if header.is_complex:             # <<<<<<<<<<<<<<
 *             # avoid array copy to save memory
 *             res = self.read_numeric(False)
 */
    if (__pyx_v_header->is_complex) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":694
 *         if header.is_complex:
 *             # avoid array copy to save memory
 *             res = self.read_numeric(False)             # <<<<<<<<<<<<<<
 *             res_j = self.read_numeric(False)
 *             # Use c8 for f4s and c16 for f8 input. Just ``res = res + res_j *
 */
      __pyx_t_2.__pyx_n = 1;
      __pyx_t_2.copy = 0;
      __pyx_t_1 = ((System::Object^)__pyx_v_self->read_numeric(0, %__pyx_t_2)); 
      __pyx_v_res = ((NumpyDotNet::ndarray^)__pyx_t_1);
      __pyx_t_1 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":695
 *             # avoid array copy to save memory
 *             res = self.read_numeric(False)
 *             res_j = self.read_numeric(False)             # <<<<<<<<<<<<<<
 *             # Use c8 for f4s and c16 for f8 input. Just ``res = res + res_j *
 *             # 1j`` upcasts to c16 regardless of input type.
 */
      __pyx_t_2.__pyx_n = 1;
      __pyx_t_2.copy = 0;
      __pyx_t_1 = ((System::Object^)__pyx_v_self->read_numeric(0, %__pyx_t_2)); 
      __pyx_v_res_j = ((NumpyDotNet::ndarray^)__pyx_t_1);
      __pyx_t_1 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":698
 *             # Use c8 for f4s and c16 for f8 input. Just ``res = res + res_j *
 *             # 1j`` upcasts to c16 regardless of input type.
 *             if res.itemsize == 4:             # <<<<<<<<<<<<<<
 *                 res = res.astype('c8')
 *             else:
 */
      __pyx_t_1 = __site_get_itemsize_698_18->Target(__site_get_itemsize_698_18, ((System::Object^)__pyx_v_res), __pyx_context);
      __pyx_t_3 = __site_op_eq_698_28->Target(__site_op_eq_698_28, __pyx_t_1, __pyx_int_4);
      __pyx_t_1 = nullptr;
      __pyx_t_4 = __site_istrue_698_28->Target(__site_istrue_698_28, __pyx_t_3);
      __pyx_t_3 = nullptr;
      if (__pyx_t_4) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":699
 *             # 1j`` upcasts to c16 regardless of input type.
 *             if res.itemsize == 4:
 *                 res = res.astype('c8')             # <<<<<<<<<<<<<<
 *             else:
 *                 res = res.astype('c16')
 */
        __pyx_t_3 = __site_get_astype_699_25->Target(__site_get_astype_699_25, ((System::Object^)__pyx_v_res), __pyx_context);
        __pyx_t_1 = __site_call1_699_32->Target(__site_call1_699_32, __pyx_context, __pyx_t_3, ((System::Object^)"c8"));
        __pyx_t_3 = nullptr;
        if (__pyx_t_1 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        __pyx_v_res = ((NumpyDotNet::ndarray^)__pyx_t_1);
        __pyx_t_1 = nullptr;
        goto __pyx_L4;
      }
      /*else*/ {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":701
 *                 res = res.astype('c8')
 *             else:
 *                 res = res.astype('c16')             # <<<<<<<<<<<<<<
 *             res.imag = res_j
 *         else:
 */
        __pyx_t_1 = __site_get_astype_701_25->Target(__site_get_astype_701_25, ((System::Object^)__pyx_v_res), __pyx_context);
        __pyx_t_3 = __site_call1_701_32->Target(__site_call1_701_32, __pyx_context, __pyx_t_1, ((System::Object^)"c16"));
        __pyx_t_1 = nullptr;
        if (__pyx_t_3 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        __pyx_v_res = ((NumpyDotNet::ndarray^)__pyx_t_3);
        __pyx_t_3 = nullptr;
      }
      __pyx_L4:;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":702
 *             else:
 *                 res = res.astype('c16')
 *             res.imag = res_j             # <<<<<<<<<<<<<<
 *         else:
 *             res = self.read_numeric()
 */
      __site_set_imag_702_15->Target(__site_set_imag_702_15, ((System::Object^)__pyx_v_res), ((System::Object^)__pyx_v_res_j));
      goto __pyx_L3;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":704
 *             res.imag = res_j
 *         else:
 *             res = self.read_numeric()             # <<<<<<<<<<<<<<
 *         return res.reshape(header.dims[::-1]).T
 * 
 */
      __pyx_t_3 = ((System::Object^)__pyx_v_self->read_numeric(0, nullptr)); 
      __pyx_v_res = ((NumpyDotNet::ndarray^)__pyx_t_3);
      __pyx_t_3 = nullptr;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":705
 *         else:
 *             res = self.read_numeric()
 *         return res.reshape(header.dims[::-1]).T             # <<<<<<<<<<<<<<
 * 
 *     cdef object read_sparse(self, VarHeader5 header):
 */
    __pyx_t_3 = __site_get_reshape_705_18->Target(__site_get_reshape_705_18, ((System::Object^)__pyx_v_res), __pyx_context);
    __pyx_t_1 = PythonOps::MakeSlice(nullptr, nullptr, __pyx_int_neg_1);
    __pyx_t_5 = __site_getindex_705_38->Target(__site_getindex_705_38, __pyx_v_header->dims, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = __site_call1_705_26->Target(__site_call1_705_26, __pyx_context, __pyx_t_3, __pyx_t_5);
    __pyx_t_3 = nullptr;
    __pyx_t_5 = nullptr;
    __pyx_t_5 = __site_get_T_705_45->Target(__site_get_T_705_45, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    if (__pyx_t_5 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_5);
    __pyx_t_5 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":707
 *         return res.reshape(header.dims[::-1]).T
 * 
 *     cdef object read_sparse(self, VarHeader5 header):             # <<<<<<<<<<<<<<
 *         ''' Read sparse matrices from stream '''
 *         cdef cnp.ndarray rowind, indptr, data, data_j
 */

  virtual  System::Object^ read_sparse(VarHeader5^ __pyx_v_header) {
    NumpyDotNet::ndarray^ __pyx_v_rowind;
    NumpyDotNet::ndarray^ __pyx_v_indptr;
    NumpyDotNet::ndarray^ __pyx_v_data;
    NumpyDotNet::ndarray^ __pyx_v_data_j;
    size_t __pyx_v_M;
    size_t __pyx_v_N;
    size_t __pyx_v_nnz;
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_read_numeric __pyx_t_2;
    System::Object^ __pyx_t_3 = nullptr;
    array<System::Object^>^ __pyx_t_4;
    size_t __pyx_t_5;
    size_t __pyx_t_6;
    size_t __pyx_t_7;
    System::Object^ __pyx_t_8 = nullptr;
    System::Object^ __pyx_t_9 = nullptr;
    System::Object^ __pyx_t_10 = nullptr;
    VarReader5^ __pyx_v_self = this;
    __pyx_v_rowind = nullptr;
    __pyx_v_indptr = nullptr;
    __pyx_v_data = nullptr;
    __pyx_v_data_j = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":711
 *         cdef cnp.ndarray rowind, indptr, data, data_j
 *         cdef size_t M, N, nnz
 *         rowind = self.read_numeric()             # <<<<<<<<<<<<<<
 *         indptr = self.read_numeric()
 *         if header.is_complex:
 */
    __pyx_t_1 = ((System::Object^)__pyx_v_self->read_numeric(0, nullptr)); 
    __pyx_v_rowind = ((NumpyDotNet::ndarray^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":712
 *         cdef size_t M, N, nnz
 *         rowind = self.read_numeric()
 *         indptr = self.read_numeric()             # <<<<<<<<<<<<<<
 *         if header.is_complex:
 *             # avoid array copy to save memory
 */
    __pyx_t_1 = ((System::Object^)__pyx_v_self->read_numeric(0, nullptr)); 
    __pyx_v_indptr = ((NumpyDotNet::ndarray^)__pyx_t_1);
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":713
 *         rowind = self.read_numeric()
 *         indptr = self.read_numeric()
 *         if header.is_complex:             # <<<<<<<<<<<<<<
 *             # avoid array copy to save memory
 *             data   = self.read_numeric(False)
 */
    if (__pyx_v_header->is_complex) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":715
 *         if header.is_complex:
 *             # avoid array copy to save memory
 *             data   = self.read_numeric(False)             # <<<<<<<<<<<<<<
 *             data_j = self.read_numeric(False)
 *             data = data + (data_j * 1j)
 */
      __pyx_t_2.__pyx_n = 1;
      __pyx_t_2.copy = 0;
      __pyx_t_1 = ((System::Object^)__pyx_v_self->read_numeric(0, %__pyx_t_2)); 
      __pyx_v_data = ((NumpyDotNet::ndarray^)__pyx_t_1);
      __pyx_t_1 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":716
 *             # avoid array copy to save memory
 *             data   = self.read_numeric(False)
 *             data_j = self.read_numeric(False)             # <<<<<<<<<<<<<<
 *             data = data + (data_j * 1j)
 *         else:
 */
      __pyx_t_2.__pyx_n = 1;
      __pyx_t_2.copy = 0;
      __pyx_t_1 = ((System::Object^)__pyx_v_self->read_numeric(0, %__pyx_t_2)); 
      __pyx_v_data_j = ((NumpyDotNet::ndarray^)__pyx_t_1);
      __pyx_t_1 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":717
 *             data   = self.read_numeric(False)
 *             data_j = self.read_numeric(False)
 *             data = data + (data_j * 1j)             # <<<<<<<<<<<<<<
 *         else:
 *             data = self.read_numeric()
 */
      __pyx_t_1 = Microsoft::Scripting::Math::Complex64::MakeImaginary(1.0);
      __pyx_t_3 = __site_op_mul_717_34->Target(__site_op_mul_717_34, ((System::Object^)__pyx_v_data_j), __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_1 = __site_op_add_717_24->Target(__site_op_add_717_24, ((System::Object^)__pyx_v_data), __pyx_t_3);
      __pyx_t_3 = nullptr;
      if (__pyx_t_1 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_data = ((NumpyDotNet::ndarray^)__pyx_t_1);
      __pyx_t_1 = nullptr;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":719
 *             data = data + (data_j * 1j)
 *         else:
 *             data = self.read_numeric()             # <<<<<<<<<<<<<<
 *         ''' From the matlab (TM) API documentation, last found here:
 *         http://www.mathworks.com/access/helpdesk/help/techdoc/matlab_external/
 */
      __pyx_t_1 = ((System::Object^)__pyx_v_self->read_numeric(0, nullptr)); 
      __pyx_v_data = ((NumpyDotNet::ndarray^)__pyx_t_1);
      __pyx_t_1 = nullptr;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":732
 *         to each rowind
 *         '''
 *         M,N = header.dims             # <<<<<<<<<<<<<<
 *         indptr = indptr[:N+1]
 *         nnz = indptr[-1]
 */
    __pyx_t_4 = safe_cast< array<System::Object^>^ >(LightExceptions::CheckAndThrow(PythonOps::GetEnumeratorValuesNoComplexSets(__pyx_context, __pyx_v_header->dims, 2)));
    __pyx_t_1 = __pyx_t_4[0];
    __pyx_t_5 = __site_cvt_size_t_732_8->Target(__site_cvt_size_t_732_8, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = __pyx_t_4[1];
    __pyx_t_6 = __site_cvt_size_t_732_8_1->Target(__site_cvt_size_t_732_8_1, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_v_M = __pyx_t_5;
    __pyx_v_N = __pyx_t_6;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":733
 *         '''
 *         M,N = header.dims
 *         indptr = indptr[:N+1]             # <<<<<<<<<<<<<<
 *         nnz = indptr[-1]
 *         rowind = rowind[:nnz]
 */
    __pyx_t_3 = __site_getslice_733_23->Target(__site_getslice_733_23, ((System::Object^)__pyx_v_indptr), 0, (__pyx_v_N + 1));
    if (__pyx_t_3 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_indptr = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":734
 *         M,N = header.dims
 *         indptr = indptr[:N+1]
 *         nnz = indptr[-1]             # <<<<<<<<<<<<<<
 *         rowind = rowind[:nnz]
 *         data   = data[:nnz]
 */
    __pyx_t_3 = __site_getindex_734_20->Target(__site_getindex_734_20, ((System::Object^)__pyx_v_indptr), ((System::Object^)-1));
    __pyx_t_7 = __site_cvt_size_t_734_20->Target(__site_cvt_size_t_734_20, __pyx_t_3);
    __pyx_t_3 = nullptr;
    __pyx_v_nnz = __pyx_t_7;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":735
 *         indptr = indptr[:N+1]
 *         nnz = indptr[-1]
 *         rowind = rowind[:nnz]             # <<<<<<<<<<<<<<
 *         data   = data[:nnz]
 *         return scipy.sparse.csc_matrix(
 */
    __pyx_t_3 = __site_getslice_735_23->Target(__site_getslice_735_23, ((System::Object^)__pyx_v_rowind), 0, __pyx_v_nnz);
    if (__pyx_t_3 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_rowind = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":736
 *         nnz = indptr[-1]
 *         rowind = rowind[:nnz]
 *         data   = data[:nnz]             # <<<<<<<<<<<<<<
 *         return scipy.sparse.csc_matrix(
 *             (data,rowind,indptr),
 */
    __pyx_t_3 = __site_getslice_736_21->Target(__site_getslice_736_21, ((System::Object^)__pyx_v_data), 0, __pyx_v_nnz);
    if (__pyx_t_3 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_data = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":737
 *         rowind = rowind[:nnz]
 *         data   = data[:nnz]
 *         return scipy.sparse.csc_matrix(             # <<<<<<<<<<<<<<
 *             (data,rowind,indptr),
 *             shape=(M,N))
 */
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "scipy");
    __pyx_t_1 = __site_get_sparse_737_20->Target(__site_get_sparse_737_20, __pyx_t_3, __pyx_context);
    __pyx_t_3 = nullptr;
    __pyx_t_3 = __site_get_csc_matrix_737_27->Target(__site_get_csc_matrix_737_27, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":738
 *         data   = data[:nnz]
 *         return scipy.sparse.csc_matrix(
 *             (data,rowind,indptr),             # <<<<<<<<<<<<<<
 *             shape=(M,N))
 * 
 */
    __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{((System::Object^)__pyx_v_data), ((System::Object^)__pyx_v_rowind), ((System::Object^)__pyx_v_indptr)});

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":739
 *         return scipy.sparse.csc_matrix(
 *             (data,rowind,indptr),
 *             shape=(M,N))             # <<<<<<<<<<<<<<
 * 
 *     cpdef cnp.ndarray read_char(self, VarHeader5 header):
 */
    __pyx_t_8 = __pyx_v_M;
    __pyx_t_9 = __pyx_v_N;
    __pyx_t_10 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_8, __pyx_t_9});
    __pyx_t_8 = nullptr;
    __pyx_t_9 = nullptr;
    __pyx_t_9 = __site_call1_shape_737_38->Target(__site_call1_shape_737_38, __pyx_context, __pyx_t_3, __pyx_t_1, __pyx_t_10);
    __pyx_t_3 = nullptr;
    __pyx_t_1 = nullptr;
    __pyx_t_10 = nullptr;
    __pyx_r = __pyx_t_9;
    __pyx_t_9 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":741
 *             shape=(M,N))
 * 
 *     cpdef cnp.ndarray read_char(self, VarHeader5 header):             # <<<<<<<<<<<<<<
 *         ''' Read char matrices from stream as arrays
 * 
 */

  virtual  NumpyDotNet::ndarray^ read_char(VarHeader5^ __pyx_v_header) {
    __pyx_t_5numpy_uint32_t __pyx_v_mdtype;
    __pyx_t_5numpy_uint32_t __pyx_v_byte_count;
    char *__pyx_v_data_ptr;
    System::Object^ __pyx_v_data;
    System::Object^ __pyx_v_codec;
    NumpyDotNet::ndarray^ __pyx_v_arr;
    NumpyDotNet::dtype^ __pyx_v_dt;
    size_t __pyx_v_length;
    System::Object^ __pyx_v_uc_str;
    NumpyDotNet::ndarray^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    ref struct __pyx_opt_args_5scipy_2io_6matlab_10mio5_utils_10VarReader5_read_element __pyx_t_2;
    int __pyx_t_3;
    System::Object^ __pyx_t_4 = nullptr;
    System::Object^ __pyx_t_5 = nullptr;
    PyObject *__pyx_t_6;
    int __pyx_t_7;
    VarReader5^ __pyx_v_self = this;
    __pyx_v_data = nullptr;
    __pyx_v_codec = nullptr;
    __pyx_v_arr = nullptr;
    __pyx_v_dt = nullptr;
    __pyx_v_uc_str = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":768
 *             cnp.ndarray arr
 *             cnp.dtype dt
 *         cdef size_t length = self.size_from_header(header)             # <<<<<<<<<<<<<<
 *         data = self.read_element(
 *             &mdtype, &byte_count, <void **>&data_ptr, True)
 */
    __pyx_v_length = __pyx_v_self->size_from_header(__pyx_v_header);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":770
 *         cdef size_t length = self.size_from_header(header)
 *         data = self.read_element(
 *             &mdtype, &byte_count, <void **>&data_ptr, True)             # <<<<<<<<<<<<<<
 *         # There are mat files in the wild that have 0 byte count strings, but
 *         # maybe with non-zero length.
 */
    __pyx_t_2.__pyx_n = 1;
    __pyx_t_2.copy = 1;
    __pyx_t_1 = __pyx_v_self->read_element((&__pyx_v_mdtype), (&__pyx_v_byte_count), ((void **)(&__pyx_v_data_ptr)), %__pyx_t_2); 
    __pyx_v_data = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":773
 *         # There are mat files in the wild that have 0 byte count strings, but
 *         # maybe with non-zero length.
 *         if byte_count == 0:             # <<<<<<<<<<<<<<
 *             arr = np.array(' ' * length, dtype='U')
 *             return np.ndarray(shape=header.dims,
 */
    __pyx_t_3 = (__pyx_v_byte_count == 0);
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":774
 *         # maybe with non-zero length.
 *         if byte_count == 0:
 *             arr = np.array(' ' * length, dtype='U')             # <<<<<<<<<<<<<<
 *             return np.ndarray(shape=header.dims,
 *                               dtype=self.U1_dtype,
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
      __pyx_t_4 = __site_get_array_774_20->Target(__site_get_array_774_20, __pyx_t_1, __pyx_context);
      __pyx_t_1 = nullptr;
      __pyx_t_1 = __pyx_v_length;
      __pyx_t_5 = __site_op_mul_774_31->Target(__site_op_mul_774_31, ((System::Object^)" "), __pyx_t_1);
      __pyx_t_1 = nullptr;
      __pyx_t_1 = __site_call1_dtype_774_26->Target(__site_call1_dtype_774_26, __pyx_context, __pyx_t_4, ((System::Object^)__pyx_t_5), ((System::Object^)"U"));
      __pyx_t_4 = nullptr;
      __pyx_t_5 = nullptr;
      if (__pyx_t_1 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_arr = ((NumpyDotNet::ndarray^)__pyx_t_1);
      __pyx_t_1 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":775
 *         if byte_count == 0:
 *             arr = np.array(' ' * length, dtype='U')
 *             return np.ndarray(shape=header.dims,             # <<<<<<<<<<<<<<
 *                               dtype=self.U1_dtype,
 *                               buffer=arr,
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
      __pyx_t_5 = __site_get_ndarray_775_21->Target(__site_get_ndarray_775_21, __pyx_t_1, __pyx_context);
      __pyx_t_1 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":777
 *             return np.ndarray(shape=header.dims,
 *                               dtype=self.U1_dtype,
 *                               buffer=arr,             # <<<<<<<<<<<<<<
 *                               order='F')
 *         # Character data can be of apparently numerical types,
 */
      __pyx_t_1 = __site_call0_shape_dtype_buffer_order_775_29->Target(__site_call0_shape_dtype_buffer_order_775_29, __pyx_context, __pyx_t_5, __pyx_v_header->dims, ((System::Object^)__pyx_v_self->U1_dtype), ((System::Object^)__pyx_v_arr), ((System::Object^)"F"));
      __pyx_t_5 = nullptr;
      if (__pyx_t_1 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_1) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_1);
      __pyx_t_1 = nullptr;
      goto __pyx_L0;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":783
 *         # a length 1 type encoding, like ascii, or length 2 type
 *         # encoding
 *         dt = <cnp.dtype>self.dtypes[mdtype]             # <<<<<<<<<<<<<<
 *         if mdtype == miUINT16:
 *             codec = self.uint16_codec
 */
    __pyx_t_6 = (__pyx_v_self->dtypes[__pyx_v_mdtype]);
    __pyx_v_dt = ((NumpyDotNet::dtype^)__pyx_t_6);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":784
 *         # encoding
 *         dt = <cnp.dtype>self.dtypes[mdtype]
 *         if mdtype == miUINT16:             # <<<<<<<<<<<<<<
 *             codec = self.uint16_codec
 *             if self.codecs['uint16_len'] == 1: # need LSBs only
 */
    __pyx_t_3 = (__pyx_v_mdtype == __pyx_e_5scipy_2io_6matlab_10mio5_utils_miUINT16);
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":785
 *         dt = <cnp.dtype>self.dtypes[mdtype]
 *         if mdtype == miUINT16:
 *             codec = self.uint16_codec             # <<<<<<<<<<<<<<
 *             if self.codecs['uint16_len'] == 1: # need LSBs only
 *                 arr = np.ndarray(shape=(length,),
 */
      __pyx_v_codec = __pyx_v_self->uint16_codec;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":786
 *         if mdtype == miUINT16:
 *             codec = self.uint16_codec
 *             if self.codecs['uint16_len'] == 1: # need LSBs only             # <<<<<<<<<<<<<<
 *                 arr = np.ndarray(shape=(length,),
 *                                   dtype=dt,
 */
      __pyx_t_1 = __site_getindex_786_26->Target(__site_getindex_786_26, __pyx_v_self->codecs, ((System::Object^)"uint16_len"));
      __pyx_t_5 = __site_op_eq_786_41->Target(__site_op_eq_786_41, __pyx_t_1, __pyx_int_1);
      __pyx_t_1 = nullptr;
      __pyx_t_3 = __site_istrue_786_41->Target(__site_istrue_786_41, __pyx_t_5);
      __pyx_t_5 = nullptr;
      if (__pyx_t_3) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":787
 *             codec = self.uint16_codec
 *             if self.codecs['uint16_len'] == 1: # need LSBs only
 *                 arr = np.ndarray(shape=(length,),             # <<<<<<<<<<<<<<
 *                                   dtype=dt,
 *                                   buffer=data)
 */
        __pyx_t_5 = PythonOps::GetGlobal(__pyx_context, "np");
        __pyx_t_1 = __site_get_ndarray_787_24->Target(__site_get_ndarray_787_24, __pyx_t_5, __pyx_context);
        __pyx_t_5 = nullptr;
        __pyx_t_5 = __pyx_v_length;
        __pyx_t_4 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_5});
        __pyx_t_5 = nullptr;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":789
 *                 arr = np.ndarray(shape=(length,),
 *                                   dtype=dt,
 *                                   buffer=data)             # <<<<<<<<<<<<<<
 *                 data = arr.astype(np.uint8).tostring()
 *         elif mdtype == miINT8 or mdtype == miUINT8:
 */
        __pyx_t_5 = __site_call0_shape_dtype_buffer_787_32->Target(__site_call0_shape_dtype_buffer_787_32, __pyx_context, __pyx_t_1, __pyx_t_4, ((System::Object^)__pyx_v_dt), __pyx_v_data);
        __pyx_t_1 = nullptr;
        __pyx_t_4 = nullptr;
        if (__pyx_t_5 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_5) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        __pyx_v_arr = ((NumpyDotNet::ndarray^)__pyx_t_5);
        __pyx_t_5 = nullptr;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":790
 *                                   dtype=dt,
 *                                   buffer=data)
 *                 data = arr.astype(np.uint8).tostring()             # <<<<<<<<<<<<<<
 *         elif mdtype == miINT8 or mdtype == miUINT8:
 *             codec = 'ascii'
 */
        __pyx_t_5 = __site_get_astype_790_26->Target(__site_get_astype_790_26, ((System::Object^)__pyx_v_arr), __pyx_context);
        __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "np");
        __pyx_t_1 = __site_get_uint8_790_36->Target(__site_get_uint8_790_36, __pyx_t_4, __pyx_context);
        __pyx_t_4 = nullptr;
        __pyx_t_4 = __site_call1_790_33->Target(__site_call1_790_33, __pyx_context, __pyx_t_5, __pyx_t_1);
        __pyx_t_5 = nullptr;
        __pyx_t_1 = nullptr;
        __pyx_t_1 = __site_get_tostring_790_43->Target(__site_get_tostring_790_43, __pyx_t_4, __pyx_context);
        __pyx_t_4 = nullptr;
        __pyx_t_4 = __site_call0_790_52->Target(__site_call0_790_52, __pyx_context, __pyx_t_1);
        __pyx_t_1 = nullptr;
        __pyx_v_data = __pyx_t_4;
        __pyx_t_4 = nullptr;
        goto __pyx_L5;
      }
      __pyx_L5:;
      goto __pyx_L4;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":791
 *                                   buffer=data)
 *                 data = arr.astype(np.uint8).tostring()
 *         elif mdtype == miINT8 or mdtype == miUINT8:             # <<<<<<<<<<<<<<
 *             codec = 'ascii'
 *         elif mdtype in self.codecs: # encoded char data
 */
    switch (__pyx_v_mdtype) {
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_miINT8:
      case __pyx_e_5scipy_2io_6matlab_10mio5_utils_miUINT8:
      __pyx_t_3 = 1;
      break;
      default:
      __pyx_t_3 = 0;
      break;
    }
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":792
 *                 data = arr.astype(np.uint8).tostring()
 *         elif mdtype == miINT8 or mdtype == miUINT8:
 *             codec = 'ascii'             # <<<<<<<<<<<<<<
 *         elif mdtype in self.codecs: # encoded char data
 *             codec = self.codecs[mdtype]
 */
      __pyx_v_codec = ((System::Object^)"ascii");
      goto __pyx_L4;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":793
 *         elif mdtype == miINT8 or mdtype == miUINT8:
 *             codec = 'ascii'
 *         elif mdtype in self.codecs: # encoded char data             # <<<<<<<<<<<<<<
 *             codec = self.codecs[mdtype]
 *             if not codec:
 */
    __pyx_t_4 = __pyx_v_mdtype;
    __pyx_t_3 = ((__site_contains_793_20->Target(__site_contains_793_20, __pyx_t_4, __pyx_v_self->codecs)));
    __pyx_t_4 = nullptr;
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":794
 *             codec = 'ascii'
 *         elif mdtype in self.codecs: # encoded char data
 *             codec = self.codecs[mdtype]             # <<<<<<<<<<<<<<
 *             if not codec:
 *                 raise TypeError('Do not support encoding %d' % mdtype)
 */
      __pyx_t_4 = __site_getindex_794_31->Target(__site_getindex_794_31, __pyx_v_self->codecs, ((System::Object^)__pyx_v_mdtype));
      __pyx_v_codec = __pyx_t_4;
      __pyx_t_4 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":795
 *         elif mdtype in self.codecs: # encoded char data
 *             codec = self.codecs[mdtype]
 *             if not codec:             # <<<<<<<<<<<<<<
 *                 raise TypeError('Do not support encoding %d' % mdtype)
 *         else:
 */
      __pyx_t_3 = __site_istrue_795_24->Target(__site_istrue_795_24, __pyx_v_codec);
      __pyx_t_7 = (!__pyx_t_3);
      if (__pyx_t_7) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":796
 *             codec = self.codecs[mdtype]
 *             if not codec:
 *                 raise TypeError('Do not support encoding %d' % mdtype)             # <<<<<<<<<<<<<<
 *         else:
 *             raise ValueError('Type %d does not appear to be char type'
 */
        __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "TypeError");
        __pyx_t_1 = __pyx_v_mdtype;
        __pyx_t_5 = __site_op_mod_796_61->Target(__site_op_mod_796_61, ((System::Object^)"Do not support encoding %d"), __pyx_t_1);
        __pyx_t_1 = nullptr;
        __pyx_t_1 = __site_call1_796_31->Target(__site_call1_796_31, __pyx_context, __pyx_t_4, ((System::Object^)__pyx_t_5));
        __pyx_t_4 = nullptr;
        __pyx_t_5 = nullptr;
        throw PythonOps::MakeException(__pyx_context, __pyx_t_1, nullptr, nullptr);
        __pyx_t_1 = nullptr;
        goto __pyx_L6;
      }
      __pyx_L6:;
      goto __pyx_L4;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":798
 *                 raise TypeError('Do not support encoding %d' % mdtype)
 *         else:
 *             raise ValueError('Type %d does not appear to be char type'             # <<<<<<<<<<<<<<
 *                              % mdtype)
 *         uc_str = data.decode(codec)
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "ValueError");

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":799
 *         else:
 *             raise ValueError('Type %d does not appear to be char type'
 *                              % mdtype)             # <<<<<<<<<<<<<<
 *         uc_str = data.decode(codec)
 *         # cast to array to deal with 2, 4 byte width characters
 */
      __pyx_t_5 = __pyx_v_mdtype;
      __pyx_t_4 = __site_op_mod_799_29->Target(__site_op_mod_799_29, ((System::Object^)"Type %d does not appear to be char type"), __pyx_t_5);
      __pyx_t_5 = nullptr;
      __pyx_t_5 = __site_call1_798_28->Target(__site_call1_798_28, __pyx_context, __pyx_t_1, ((System::Object^)__pyx_t_4));
      __pyx_t_1 = nullptr;
      __pyx_t_4 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_5, nullptr, nullptr);
      __pyx_t_5 = nullptr;
    }
    __pyx_L4:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":800
 *             raise ValueError('Type %d does not appear to be char type'
 *                              % mdtype)
 *         uc_str = data.decode(codec)             # <<<<<<<<<<<<<<
 *         # cast to array to deal with 2, 4 byte width characters
 *         arr = np.array(uc_str, dtype='U')
 */
    __pyx_t_5 = __site_get_decode_800_21->Target(__site_get_decode_800_21, __pyx_v_data, __pyx_context);
    __pyx_t_4 = __site_call1_800_28->Target(__site_call1_800_28, __pyx_context, __pyx_t_5, __pyx_v_codec);
    __pyx_t_5 = nullptr;
    __pyx_v_uc_str = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":802
 *         uc_str = data.decode(codec)
 *         # cast to array to deal with 2, 4 byte width characters
 *         arr = np.array(uc_str, dtype='U')             # <<<<<<<<<<<<<<
 *         # could take this to numpy C-API level, but probably not worth
 *         # it
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "np");
    __pyx_t_5 = __site_get_array_802_16->Target(__site_get_array_802_16, __pyx_t_4, __pyx_context);
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __site_call1_dtype_802_22->Target(__site_call1_dtype_802_22, __pyx_context, __pyx_t_5, __pyx_v_uc_str, ((System::Object^)"U"));
    __pyx_t_5 = nullptr;
    if (__pyx_t_4 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_arr = ((NumpyDotNet::ndarray^)__pyx_t_4);
    __pyx_t_4 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":805
 *         # could take this to numpy C-API level, but probably not worth
 *         # it
 *         return np.ndarray(shape=header.dims,             # <<<<<<<<<<<<<<
 *                           dtype=self.U1_dtype,
 *                           buffer=arr,
 */
    __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "np");
    __pyx_t_5 = __site_get_ndarray_805_17->Target(__site_get_ndarray_805_17, __pyx_t_4, __pyx_context);
    __pyx_t_4 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":807
 *         return np.ndarray(shape=header.dims,
 *                           dtype=self.U1_dtype,
 *                           buffer=arr,             # <<<<<<<<<<<<<<
 *                           order='F')
 * 
 */
    __pyx_t_4 = __site_call0_shape_dtype_buffer_order_805_25->Target(__site_call0_shape_dtype_buffer_order_805_25, __pyx_context, __pyx_t_5, __pyx_v_header->dims, ((System::Object^)__pyx_v_self->U1_dtype), ((System::Object^)__pyx_v_arr), ((System::Object^)"F"));
    __pyx_t_5 = nullptr;
    if (__pyx_t_4 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_4);
    __pyx_t_4 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":810
 *                           order='F')
 * 
 *     cpdef cnp.ndarray read_cells(self, VarHeader5 header):             # <<<<<<<<<<<<<<
 *         ''' Read cell array from stream '''
 *         cdef:
 */

  virtual  NumpyDotNet::ndarray^ read_cells(VarHeader5^ __pyx_v_header) {
    size_t __pyx_v_i;
    NumpyDotNet::ndarray^ __pyx_v_result;
    System::Object^ __pyx_v_tupdims;
    size_t __pyx_v_length;
    NumpyDotNet::IExtBufferProtocol^ __pyx_bstruct_result;
    Py_ssize_t __pyx_bstride_0_result = 0;
    Py_ssize_t __pyx_bshape_0_result = 0;
    Py_ssize_t __pyx_boffset_0_result = -1;
    NumpyDotNet::ndarray^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_t_3 = nullptr;
    System::Object^ __pyx_t_4 = nullptr;
    NumpyDotNet::ndarray^ __pyx_t_5 = nullptr;
    size_t __pyx_t_6;
    size_t __pyx_t_7;
    size_t __pyx_t_8;
    int __pyx_t_9;
    System::Object^ *__pyx_t_10;
    VarReader5^ __pyx_v_self = this;
    __pyx_v_result = nullptr;
    __pyx_v_tupdims = nullptr;
    __pyx_bstruct_result = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":816
 *             cnp.ndarray[object, ndim=1] result
 *         # Account for fortran indexing of cells
 *         tupdims = tuple(header.dims[::-1])             # <<<<<<<<<<<<<<
 *         cdef size_t length = self.size_from_header(header)
 *         result = np.empty(length, dtype=object)
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "tuple");
    __pyx_t_2 = PythonOps::MakeSlice(nullptr, nullptr, __pyx_int_neg_1);
    __pyx_t_3 = __site_getindex_816_35->Target(__site_getindex_816_35, __pyx_v_header->dims, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_call1_816_23->Target(__site_call1_816_23, __pyx_context, ((System::Object^)__pyx_t_1), __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_v_tupdims = ((System::Object^)__pyx_t_2);
    __pyx_t_2 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":817
 *         # Account for fortran indexing of cells
 *         tupdims = tuple(header.dims[::-1])
 *         cdef size_t length = self.size_from_header(header)             # <<<<<<<<<<<<<<
 *         result = np.empty(length, dtype=object)
 *         for i in range(length):
 */
    __pyx_v_length = __pyx_v_self->size_from_header(__pyx_v_header);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":818
 *         tupdims = tuple(header.dims[::-1])
 *         cdef size_t length = self.size_from_header(header)
 *         result = np.empty(length, dtype=object)             # <<<<<<<<<<<<<<
 *         for i in range(length):
 *             result[i] = self.read_mi_matrix()
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
    __pyx_t_3 = __site_get_empty_818_19->Target(__site_get_empty_818_19, __pyx_t_2, __pyx_context);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_length;
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "object");
    __pyx_t_4 = __site_call1_dtype_818_25->Target(__site_call1_dtype_818_25, __pyx_context, __pyx_t_3, __pyx_t_2, __pyx_t_1);
    __pyx_t_3 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_t_1 = nullptr;
    if (__pyx_t_4 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_5 = ((NumpyDotNet::ndarray^)__pyx_t_4);
    {
      __Pyx_BufFmt_StackElem __pyx_stack[1];
      __Pyx_SafeReleaseBuffer(__pyx_bstruct_result);
      __Pyx_GetBufferAndValidate(__pyx_bstruct_result, __pyx_t_5, &__Pyx_TypeInfo_object, PyBUF_FORMAT| PyBUF_INDIRECT| PyBUF_WRITABLE, 1, 0, __pyx_stack);
      __pyx_bstride_0_result = __pyx_bstruct_result->Strides[0];
      __pyx_bshape_0_result = __pyx_bstruct_result->Shape[0];
      __pyx_boffset_0_result = __pyx_bstruct_result->SubOffsets[0];
    }
    __pyx_t_5 = nullptr;
    __pyx_v_result = ((NumpyDotNet::ndarray^)__pyx_t_4);
    __pyx_t_4 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":819
 *         cdef size_t length = self.size_from_header(header)
 *         result = np.empty(length, dtype=object)
 *         for i in range(length):             # <<<<<<<<<<<<<<
 *             result[i] = self.read_mi_matrix()
 *         return result.reshape(tupdims).T
 */
    __pyx_t_6 = __pyx_v_length;
    for (__pyx_t_7 = 0; __pyx_t_7 < __pyx_t_6; __pyx_t_7+=1) {
      __pyx_v_i = __pyx_t_7;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":820
 *         result = np.empty(length, dtype=object)
 *         for i in range(length):
 *             result[i] = self.read_mi_matrix()             # <<<<<<<<<<<<<<
 *         return result.reshape(tupdims).T
 * 
 */
      __pyx_t_4 = __pyx_v_self->read_mi_matrix(nullptr); 
      __pyx_t_8 = __pyx_v_i;
      __pyx_t_9 = -1;
      if (unlikely(__pyx_t_8 >= (size_t)__pyx_bshape_0_result)) __pyx_t_9 = 0;
      if (unlikely(__pyx_t_9 != -1)) {
        __Pyx_RaiseBufferIndexError(__pyx_t_9);
      }
      __pyx_t_10 = __Pyx_BufPtrFull1d(System::Object^ *, (System::Object^ *)(long long)__pyx_bstruct_result->UnsafeAddress, __pyx_t_8, __pyx_bstride_0_result, __pyx_boffset_0_result);
      __Pyx_DECREF(*__pyx_t_10); __Pyx_INCREF(__pyx_t_4);
      *__pyx_t_10 = __pyx_t_4;
      __pyx_t_4 = nullptr;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":821
 *         for i in range(length):
 *             result[i] = self.read_mi_matrix()
 *         return result.reshape(tupdims).T             # <<<<<<<<<<<<<<
 * 
 *     def read_fieldnames(self):
 */
    __pyx_t_4 = __site_get_reshape_821_21->Target(__site_get_reshape_821_21, ((System::Object^)__pyx_v_result), __pyx_context);
    __pyx_t_1 = __site_call1_821_29->Target(__site_call1_821_29, __pyx_context, __pyx_t_4, ((System::Object^)__pyx_v_tupdims));
    __pyx_t_4 = nullptr;
    __pyx_t_4 = __site_get_T_821_38->Target(__site_get_T_821_38, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    if (__pyx_t_4 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_4) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_4);
    __pyx_t_4 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    __Pyx_SafeReleaseBuffer(__pyx_bstruct_result);
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":823
 *         return result.reshape(tupdims).T
 * 
 *     def read_fieldnames(self):             # <<<<<<<<<<<<<<
 *         ''' Read fieldnames for struct-like matrix '
 * 
 */

  virtual System::Object^ read_fieldnames() {
    int __pyx_v_n_names;
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":829
 *         '''
 *         cdef int n_names
 *         return self.cread_fieldnames(&n_names)             # <<<<<<<<<<<<<<
 * 
 *     cdef inline object cread_fieldnames(self, int *n_names_ptr):
 */
    __pyx_t_1 = ((VarReader5^)__pyx_v_self)->cread_fieldnames((&__pyx_v_n_names)); 
    __pyx_r = __pyx_t_1;
    __pyx_t_1 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":831
 *         return self.cread_fieldnames(&n_names)
 * 
 *     cdef inline object cread_fieldnames(self, int *n_names_ptr):             # <<<<<<<<<<<<<<
 *         cdef:
 *             cnp.int32_t namelength
 */

  virtual CYTHON_INLINE System::Object^ cread_fieldnames(int *__pyx_v_n_names_ptr) {
    __pyx_t_5numpy_int32_t __pyx_v_namelength;
    int __pyx_v_i;
    int __pyx_v_n_names;
    System::Object^ __pyx_v_name;
    System::Object^ __pyx_v_field_names;
    int __pyx_v_res;
    System::Object^ __pyx_v_names = nullptr;
    int *__pyx_v_n_duplicates;
    char **__pyx_v_name_ptrs;
    char *__pyx_v_n_ptr;
    int __pyx_v_j;
    int __pyx_v_dup_no;
    System::Object^ __pyx_r = nullptr;
    int __pyx_t_1;
    int __pyx_t_2;
    System::Object^ __pyx_t_3 = nullptr;
    System::Object^ __pyx_t_4 = nullptr;
    Py_ssize_t __pyx_t_5;
    char *__pyx_t_6;
    System::IntPtr __pyx_t_7;
    int __pyx_t_8;
    System::Object^ __pyx_t_9 = nullptr;
    int __pyx_t_10;
    int __pyx_t_11;
    VarReader5^ __pyx_v_self = this;
    __pyx_v_name = nullptr;
    __pyx_v_field_names = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":837
 *             object name, field_names
 *         # Read field names into list
 *         cdef int res = self.read_into_int32s(&namelength)             # <<<<<<<<<<<<<<
 *         if res != 1:
 *             raise ValueError('Only one value for namelength')
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = __pyx_v_self->read_into_int32s((&__pyx_v_namelength)); 
    __pyx_v_res = __pyx_t_1;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":838
 *         # Read field names into list
 *         cdef int res = self.read_into_int32s(&namelength)
 *         if res != 1:             # <<<<<<<<<<<<<<
 *             raise ValueError('Only one value for namelength')
 *         cdef object names = self.read_int8_string()
 */
    __pyx_t_2 = (__pyx_v_res != 1);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":839
 *         cdef int res = self.read_into_int32s(&namelength)
 *         if res != 1:
 *             raise ValueError('Only one value for namelength')             # <<<<<<<<<<<<<<
 *         cdef object names = self.read_int8_string()
 *         field_names = []
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "ValueError");
      __pyx_t_4 = __site_call1_839_28->Target(__site_call1_839_28, __pyx_context, __pyx_t_3, ((System::Object^)"Only one value for namelength"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_4, nullptr, nullptr);
      __pyx_t_4 = nullptr;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":840
 *         if res != 1:
 *             raise ValueError('Only one value for namelength')
 *         cdef object names = self.read_int8_string()             # <<<<<<<<<<<<<<
 *         field_names = []
 *         n_names = PyBytes_Size(names) // namelength
 */
    __pyx_t_4 = __pyx_v_self->read_int8_string(); 
    __pyx_v_names = __pyx_t_4;
    __pyx_t_4 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":841
 *             raise ValueError('Only one value for namelength')
 *         cdef object names = self.read_int8_string()
 *         field_names = []             # <<<<<<<<<<<<<<
 *         n_names = PyBytes_Size(names) // namelength
 *         # Make n_duplicates and pointer arrays
 */
    __pyx_t_4 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
    __pyx_v_field_names = ((System::Object^)__pyx_t_4);
    __pyx_t_4 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":842
 *         cdef object names = self.read_int8_string()
 *         field_names = []
 *         n_names = PyBytes_Size(names) // namelength             # <<<<<<<<<<<<<<
 *         # Make n_duplicates and pointer arrays
 *         cdef:
 */
    XXX skipping exception checks: __pyx_t_5 == -1
    __pyx_t_5 = PyBytes_Size(__pyx_v_names); 
    if (unlikely(__pyx_v_namelength == 0)) {
      throw PythonOps::ZeroDivisionError("integer division or modulo by zero");
    }
    else if (sizeof(Py_ssize_t) == sizeof(long) && unlikely(__pyx_v_namelength == -1) && unlikely(UNARY_NEG_WOULD_OVERFLOW(__pyx_t_5))) {
      PyErr_Format(PyExc_OverflowError, "value too large to perform division");
      {__pyx_filename = __pyx_f[0]; __pyx_lineno = 842; __pyx_clineno = __LINE__; goto __pyx_L1_error;}
    }
    __pyx_v_n_names = __Pyx_div_Py_ssize_t(__pyx_t_5, __pyx_v_namelength);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":847
 *             int *n_duplicates
 *             char **name_ptrs
 *         n_duplicates = <int *>calloc(n_names, sizeof(int))             # <<<<<<<<<<<<<<
 *         name_ptrs = <char **>calloc(n_names, sizeof(char *))
 *         cdef:
 */
    __pyx_v_n_duplicates = ((int *)calloc(__pyx_v_n_names, (sizeof(int))));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":848
 *             char **name_ptrs
 *         n_duplicates = <int *>calloc(n_names, sizeof(int))
 *         name_ptrs = <char **>calloc(n_names, sizeof(char *))             # <<<<<<<<<<<<<<
 *         cdef:
 *             char *n_ptr = names
 */
    __pyx_v_name_ptrs = ((char **)calloc(__pyx_v_n_names, (sizeof(char *))));

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":850
 *         name_ptrs = <char **>calloc(n_names, sizeof(char *))
 *         cdef:
 *             char *n_ptr = names             # <<<<<<<<<<<<<<
 *             int j, dup_no
 *         for i in range(n_names):
 */
    __pyx_t_7 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_v_names));
    __pyx_t_6 = static_cast<char *>(__pyx_t_7.ToPointer());
    __pyx_v_n_ptr = __pyx_t_6;
    InteropServices::Marshal::FreeHGlobal(__pyx_t_7);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":852
 *             char *n_ptr = names
 *             int j, dup_no
 *         for i in range(n_names):             # <<<<<<<<<<<<<<
 *             name = asstr(PyBytes_FromString(n_ptr))
 *             # Check if this is a duplicate field, rename if so
 */
    __pyx_t_1 = __pyx_v_n_names;
    for (__pyx_t_8 = 0; __pyx_t_8 < __pyx_t_1; __pyx_t_8+=1) {
      __pyx_v_i = __pyx_t_8;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":853
 *             int j, dup_no
 *         for i in range(n_names):
 *             name = asstr(PyBytes_FromString(n_ptr))             # <<<<<<<<<<<<<<
 *             # Check if this is a duplicate field, rename if so
 *             name_ptrs[i] = n_ptr
 */
      __pyx_t_4 = PythonOps::GetGlobal(__pyx_context, "asstr");
      __pyx_t_3 = ((System::Object^)PyBytes_FromString(__pyx_v_n_ptr)); 
      __pyx_t_9 = __site_call1_853_24->Target(__site_call1_853_24, __pyx_context, __pyx_t_4, __pyx_t_3);
      __pyx_t_4 = nullptr;
      __pyx_t_3 = nullptr;
      __pyx_v_name = __pyx_t_9;
      __pyx_t_9 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":855
 *             name = asstr(PyBytes_FromString(n_ptr))
 *             # Check if this is a duplicate field, rename if so
 *             name_ptrs[i] = n_ptr             # <<<<<<<<<<<<<<
 *             dup_no = 0
 *             for j in range(i):
 */
      (__pyx_v_name_ptrs[__pyx_v_i]) = __pyx_v_n_ptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":856
 *             # Check if this is a duplicate field, rename if so
 *             name_ptrs[i] = n_ptr
 *             dup_no = 0             # <<<<<<<<<<<<<<
 *             for j in range(i):
 *                 if strcmp(n_ptr, name_ptrs[j]) == 0: # the same
 */
      __pyx_v_dup_no = 0;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":857
 *             name_ptrs[i] = n_ptr
 *             dup_no = 0
 *             for j in range(i):             # <<<<<<<<<<<<<<
 *                 if strcmp(n_ptr, name_ptrs[j]) == 0: # the same
 *                     n_duplicates[j] += 1
 */
      __pyx_t_10 = __pyx_v_i;
      for (__pyx_t_11 = 0; __pyx_t_11 < __pyx_t_10; __pyx_t_11+=1) {
        __pyx_v_j = __pyx_t_11;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":858
 *             dup_no = 0
 *             for j in range(i):
 *                 if strcmp(n_ptr, name_ptrs[j]) == 0: # the same             # <<<<<<<<<<<<<<
 *                     n_duplicates[j] += 1
 *                     dup_no = n_duplicates[j]
 */
        __pyx_t_2 = (strcmp(__pyx_v_n_ptr, (__pyx_v_name_ptrs[__pyx_v_j])) == 0);
        if (__pyx_t_2) {

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":859
 *             for j in range(i):
 *                 if strcmp(n_ptr, name_ptrs[j]) == 0: # the same
 *                     n_duplicates[j] += 1             # <<<<<<<<<<<<<<
 *                     dup_no = n_duplicates[j]
 *                     break
 */
          (__pyx_v_n_duplicates[__pyx_v_j]) += 1;

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":860
 *                 if strcmp(n_ptr, name_ptrs[j]) == 0: # the same
 *                     n_duplicates[j] += 1
 *                     dup_no = n_duplicates[j]             # <<<<<<<<<<<<<<
 *                     break
 *             if dup_no != 0:
 */
          __pyx_v_dup_no = (__pyx_v_n_duplicates[__pyx_v_j]);

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":861
 *                     n_duplicates[j] += 1
 *                     dup_no = n_duplicates[j]
 *                     break             # <<<<<<<<<<<<<<
 *             if dup_no != 0:
 *                 name = '_%d_%s' % (dup_no, name)
 */
          goto __pyx_L7_break;
          goto __pyx_L8;
        }
        __pyx_L8:;
      }
      __pyx_L7_break:;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":862
 *                     dup_no = n_duplicates[j]
 *                     break
 *             if dup_no != 0:             # <<<<<<<<<<<<<<
 *                 name = '_%d_%s' % (dup_no, name)
 *             field_names.append(name)
 */
      __pyx_t_2 = (__pyx_v_dup_no != 0);
      if (__pyx_t_2) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":863
 *                     break
 *             if dup_no != 0:
 *                 name = '_%d_%s' % (dup_no, name)             # <<<<<<<<<<<<<<
 *             field_names.append(name)
 *             n_ptr += namelength
 */
        __pyx_t_9 = __pyx_v_dup_no;
        __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_t_9, __pyx_v_name});
        __pyx_t_9 = nullptr;
        __pyx_t_9 = __site_op_mod_863_32->Target(__site_op_mod_863_32, ((System::Object^)"_%d_%s"), __pyx_t_3);
        __pyx_t_3 = nullptr;
        __pyx_v_name = ((System::Object^)__pyx_t_9);
        __pyx_t_9 = nullptr;
        goto __pyx_L9;
      }
      __pyx_L9:;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":864
 *             if dup_no != 0:
 *                 name = '_%d_%s' % (dup_no, name)
 *             field_names.append(name)             # <<<<<<<<<<<<<<
 *             n_ptr += namelength
 *         free(n_duplicates)
 */
      __pyx_t_9 = __site_get_append_864_23->Target(__site_get_append_864_23, __pyx_v_field_names, __pyx_context);
      __pyx_t_3 = __site_call1_864_30->Target(__site_call1_864_30, __pyx_context, __pyx_t_9, __pyx_v_name);
      __pyx_t_9 = nullptr;
      __pyx_t_3 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":865
 *                 name = '_%d_%s' % (dup_no, name)
 *             field_names.append(name)
 *             n_ptr += namelength             # <<<<<<<<<<<<<<
 *         free(n_duplicates)
 *         free(name_ptrs)
 */
      __pyx_v_n_ptr += __pyx_v_namelength;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":866
 *             field_names.append(name)
 *             n_ptr += namelength
 *         free(n_duplicates)             # <<<<<<<<<<<<<<
 *         free(name_ptrs)
 *         n_names_ptr[0] = n_names
 */
    free(__pyx_v_n_duplicates);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":867
 *             n_ptr += namelength
 *         free(n_duplicates)
 *         free(name_ptrs)             # <<<<<<<<<<<<<<
 *         n_names_ptr[0] = n_names
 *         return field_names
 */
    free(__pyx_v_name_ptrs);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":868
 *         free(n_duplicates)
 *         free(name_ptrs)
 *         n_names_ptr[0] = n_names             # <<<<<<<<<<<<<<
 *         return field_names
 * 
 */
    (__pyx_v_n_names_ptr[0]) = __pyx_v_n_names;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":869
 *         free(name_ptrs)
 *         n_names_ptr[0] = n_names
 *         return field_names             # <<<<<<<<<<<<<<
 * 
 *     cpdef cnp.ndarray read_struct(self, VarHeader5 header):
 */
    __pyx_r = __pyx_v_field_names;
    goto __pyx_L0;

    __pyx_r = nullptr;
    goto __pyx_L0;
    __pyx_L1_error:;
    __Pyx_AddTraceback("scipy.io.matlab.mio5_utils.VarReader5.cread_fieldnames");
    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":871
 *         return field_names
 * 
 *     cpdef cnp.ndarray read_struct(self, VarHeader5 header):             # <<<<<<<<<<<<<<
 *         ''' Read struct or object array from stream
 * 
 */

  virtual  NumpyDotNet::ndarray^ read_struct(VarHeader5^ __pyx_v_header) {
    int __pyx_v_i;
    int __pyx_v_n_names;
    NumpyDotNet::ndarray^ __pyx_v_rec_res;
    NumpyDotNet::ndarray^ __pyx_v_result;
    System::Object^ __pyx_v_dt;
    System::Object^ __pyx_v_tupdims;
    System::Object^ __pyx_v_field_names = nullptr;
    size_t __pyx_v_length;
    System::Object^ __pyx_v_field_name;
    System::Object^ __pyx_v_obj_template;
    System::Object^ __pyx_v_item;
    System::Object^ __pyx_v_name;
    NumpyDotNet::IExtBufferProtocol^ __pyx_bstruct_result;
    Py_ssize_t __pyx_bstride_0_result = 0;
    Py_ssize_t __pyx_bshape_0_result = 0;
    Py_ssize_t __pyx_boffset_0_result = -1;
    NumpyDotNet::ndarray^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_t_3 = nullptr;
    int __pyx_t_4;
    System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> __pyx_t_5;
    size_t __pyx_t_6;
    int __pyx_t_7;
    System::Object^ __pyx_t_8 = nullptr;
    NumpyDotNet::ndarray^ __pyx_t_9 = nullptr;
    int __pyx_t_10;
    int __pyx_t_11;
    System::Object^ *__pyx_t_12;
    VarReader5^ __pyx_v_self = this;
    __pyx_v_rec_res = nullptr;
    __pyx_v_result = nullptr;
    __pyx_v_dt = nullptr;
    __pyx_v_tupdims = nullptr;
    __pyx_v_field_name = nullptr;
    __pyx_v_obj_template = nullptr;
    __pyx_v_item = nullptr;
    __pyx_v_name = nullptr;
    __pyx_bstruct_result = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":884
 *             object dt, tupdims
 *         # Read field names into list
 *         cdef object field_names = self.cread_fieldnames(&n_names)             # <<<<<<<<<<<<<<
 *         # Prepare struct array
 *         tupdims = tuple(header.dims[::-1])
 */
    __pyx_t_1 = __pyx_v_self->cread_fieldnames((&__pyx_v_n_names)); 
    __pyx_v_field_names = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":886
 *         cdef object field_names = self.cread_fieldnames(&n_names)
 *         # Prepare struct array
 *         tupdims = tuple(header.dims[::-1])             # <<<<<<<<<<<<<<
 *         cdef size_t length = self.size_from_header(header)
 *         if self.struct_as_record: # to record arrays
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "tuple");
    __pyx_t_2 = PythonOps::MakeSlice(nullptr, nullptr, __pyx_int_neg_1);
    __pyx_t_3 = __site_getindex_886_35->Target(__site_getindex_886_35, __pyx_v_header->dims, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_call1_886_23->Target(__site_call1_886_23, __pyx_context, ((System::Object^)__pyx_t_1), __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_v_tupdims = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":887
 *         # Prepare struct array
 *         tupdims = tuple(header.dims[::-1])
 *         cdef size_t length = self.size_from_header(header)             # <<<<<<<<<<<<<<
 *         if self.struct_as_record: # to record arrays
 *             if not n_names:
 */
    __pyx_v_length = __pyx_v_self->size_from_header(__pyx_v_header);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":888
 *         tupdims = tuple(header.dims[::-1])
 *         cdef size_t length = self.size_from_header(header)
 *         if self.struct_as_record: # to record arrays             # <<<<<<<<<<<<<<
 *             if not n_names:
 *                 # If there are no field names, there is no dtype
 */
    if (__pyx_v_self->struct_as_record) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":889
 *         cdef size_t length = self.size_from_header(header)
 *         if self.struct_as_record: # to record arrays
 *             if not n_names:             # <<<<<<<<<<<<<<
 *                 # If there are no field names, there is no dtype
 *                 # representation we can use, falling back to empty
 */
      __pyx_t_4 = (!__pyx_v_n_names);
      if (__pyx_t_4) {

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":893
 *                 # representation we can use, falling back to empty
 *                 # object
 *                 return np.empty(tupdims, dtype=object).T             # <<<<<<<<<<<<<<
 *             dt = []
 *             for field_name in field_names: dt.append( (field_name, object) )
 */
        __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
        __pyx_t_3 = __site_get_empty_893_25->Target(__site_get_empty_893_25, __pyx_t_2, __pyx_context);
        __pyx_t_2 = nullptr;
        __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "object");
        __pyx_t_1 = __site_call1_dtype_893_31->Target(__site_call1_dtype_893_31, __pyx_context, __pyx_t_3, __pyx_v_tupdims, __pyx_t_2);
        __pyx_t_3 = nullptr;
        __pyx_t_2 = nullptr;
        __pyx_t_2 = __site_get_T_893_54->Target(__site_get_T_893_54, __pyx_t_1, __pyx_context);
        __pyx_t_1 = nullptr;
        if (__pyx_t_2 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
          throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
        }
        __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_2);
        __pyx_t_2 = nullptr;
        goto __pyx_L0;
        goto __pyx_L4;
      }
      __pyx_L4:;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":894
 *                 # object
 *                 return np.empty(tupdims, dtype=object).T
 *             dt = []             # <<<<<<<<<<<<<<
 *             for field_name in field_names: dt.append( (field_name, object) )
 *             #dt = [(field_name, object) for field_name in field_names]
 */
      __pyx_t_2 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
      __pyx_v_dt = ((System::Object^)__pyx_t_2);
      __pyx_t_2 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":895
 *                 return np.empty(tupdims, dtype=object).T
 *             dt = []
 *             for field_name in field_names: dt.append( (field_name, object) )             # <<<<<<<<<<<<<<
 *             #dt = [(field_name, object) for field_name in field_names]
 *             rec_res = np.empty(length, dtype=dt)
 */
      __pyx_t_5 = __site_get_iterator_895_12->Target(__site_get_iterator_895_12, __pyx_v_field_names);
      try {
        while (__pyx_t_5.Key->MoveNext()) {
          __pyx_v_field_name = ((System::Object^)__pyx_t_5.Key->Current);
          __pyx_t_2 = __site_get_append_895_45->Target(__site_get_append_895_45, __pyx_v_dt, __pyx_context);
          __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "object");
          __pyx_t_3 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_v_field_name, __pyx_t_1});
          __pyx_t_1 = nullptr;
          __pyx_t_1 = __site_call1_895_52->Target(__site_call1_895_52, __pyx_context, __pyx_t_2, __pyx_t_3);
          __pyx_t_2 = nullptr;
          __pyx_t_3 = nullptr;
          __pyx_t_1 = nullptr;
        }
      }
      finally {
        PythonOps::ForLoopDispose(__pyx_t_5);
      }

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":897
 *             for field_name in field_names: dt.append( (field_name, object) )
 *             #dt = [(field_name, object) for field_name in field_names]
 *             rec_res = np.empty(length, dtype=dt)             # <<<<<<<<<<<<<<
 *             for i in range(length):
 *                 for field_name in field_names:
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
      __pyx_t_3 = __site_get_empty_897_24->Target(__site_get_empty_897_24, __pyx_t_1, __pyx_context);
      __pyx_t_1 = nullptr;
      __pyx_t_1 = __pyx_v_length;
      __pyx_t_2 = __site_call1_dtype_897_30->Target(__site_call1_dtype_897_30, __pyx_context, __pyx_t_3, __pyx_t_1, __pyx_v_dt);
      __pyx_t_3 = nullptr;
      __pyx_t_1 = nullptr;
      if (__pyx_t_2 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_v_rec_res = ((NumpyDotNet::ndarray^)__pyx_t_2);
      __pyx_t_2 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":898
 *             #dt = [(field_name, object) for field_name in field_names]
 *             rec_res = np.empty(length, dtype=dt)
 *             for i in range(length):             # <<<<<<<<<<<<<<
 *                 for field_name in field_names:
 *                     rec_res[i][field_name] = self.read_mi_matrix()
 */
      __pyx_t_6 = __pyx_v_length;
      for (__pyx_t_7 = 0; __pyx_t_7 < __pyx_t_6; __pyx_t_7+=1) {
        __pyx_v_i = __pyx_t_7;

        /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":899
 *             rec_res = np.empty(length, dtype=dt)
 *             for i in range(length):
 *                 for field_name in field_names:             # <<<<<<<<<<<<<<
 *                     rec_res[i][field_name] = self.read_mi_matrix()
 *             return rec_res.reshape(tupdims).T
 */
        __pyx_t_5 = __site_get_iterator_899_16->Target(__site_get_iterator_899_16, __pyx_v_field_names);
        try {
          while (__pyx_t_5.Key->MoveNext()) {
            __pyx_v_field_name = ((System::Object^)__pyx_t_5.Key->Current);

            /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":900
 *             for i in range(length):
 *                 for field_name in field_names:
 *                     rec_res[i][field_name] = self.read_mi_matrix()             # <<<<<<<<<<<<<<
 *             return rec_res.reshape(tupdims).T
 *         # Backward compatibility with previous format
 */
            __pyx_t_2 = __pyx_v_self->read_mi_matrix(nullptr); 
            __pyx_t_1 = __site_getindex_900_27->Target(__site_getindex_900_27, ((System::Object^)__pyx_v_rec_res), ((System::Object^)__pyx_v_i));
            __site_setindex_900_30->Target(__site_setindex_900_30, __pyx_t_1, __pyx_v_field_name, __pyx_t_2);
            __pyx_t_1 = nullptr;
            __pyx_t_2 = nullptr;
          }
        }
        finally {
          PythonOps::ForLoopDispose(__pyx_t_5);
        }
      }

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":901
 *                 for field_name in field_names:
 *                     rec_res[i][field_name] = self.read_mi_matrix()
 *             return rec_res.reshape(tupdims).T             # <<<<<<<<<<<<<<
 *         # Backward compatibility with previous format
 *         obj_template = mio5p.mat_struct()
 */
      __pyx_t_2 = __site_get_reshape_901_26->Target(__site_get_reshape_901_26, ((System::Object^)__pyx_v_rec_res), __pyx_context);
      __pyx_t_1 = __site_call1_901_34->Target(__site_call1_901_34, __pyx_context, __pyx_t_2, __pyx_v_tupdims);
      __pyx_t_2 = nullptr;
      __pyx_t_2 = __site_get_T_901_43->Target(__site_get_T_901_43, __pyx_t_1, __pyx_context);
      __pyx_t_1 = nullptr;
      if (__pyx_t_2 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_2) == nullptr) {
        throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
      }
      __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_2);
      __pyx_t_2 = nullptr;
      goto __pyx_L0;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":903
 *             return rec_res.reshape(tupdims).T
 *         # Backward compatibility with previous format
 *         obj_template = mio5p.mat_struct()             # <<<<<<<<<<<<<<
 *         obj_template._fieldnames = field_names
 *         result = np.empty(length, dtype=object)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "mio5p");
    __pyx_t_1 = __site_get_mat_struct_903_28->Target(__site_get_mat_struct_903_28, __pyx_t_2, __pyx_context);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_call0_903_39->Target(__site_call0_903_39, __pyx_context, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_v_obj_template = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":904
 *         # Backward compatibility with previous format
 *         obj_template = mio5p.mat_struct()
 *         obj_template._fieldnames = field_names             # <<<<<<<<<<<<<<
 *         result = np.empty(length, dtype=object)
 *         for i in range(length):
 */
    __site_set__fieldnames_904_20->Target(__site_set__fieldnames_904_20, __pyx_v_obj_template, __pyx_v_field_names);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":905
 *         obj_template = mio5p.mat_struct()
 *         obj_template._fieldnames = field_names
 *         result = np.empty(length, dtype=object)             # <<<<<<<<<<<<<<
 *         for i in range(length):
 *             item = pycopy(obj_template)
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "np");
    __pyx_t_1 = __site_get_empty_905_19->Target(__site_get_empty_905_19, __pyx_t_2, __pyx_context);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __pyx_v_length;
    __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "object");
    __pyx_t_8 = __site_call1_dtype_905_25->Target(__site_call1_dtype_905_25, __pyx_context, __pyx_t_1, __pyx_t_2, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    if (__pyx_t_8 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_8) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_t_9 = ((NumpyDotNet::ndarray^)__pyx_t_8);
    {
      __Pyx_BufFmt_StackElem __pyx_stack[1];
      __Pyx_SafeReleaseBuffer(__pyx_bstruct_result);
      __Pyx_GetBufferAndValidate(__pyx_bstruct_result, __pyx_t_9, &__Pyx_TypeInfo_object, PyBUF_FORMAT| PyBUF_INDIRECT| PyBUF_WRITABLE, 1, 0, __pyx_stack);
      __pyx_bstride_0_result = __pyx_bstruct_result->Strides[0];
      __pyx_bshape_0_result = __pyx_bstruct_result->Shape[0];
      __pyx_boffset_0_result = __pyx_bstruct_result->SubOffsets[0];
    }
    __pyx_t_9 = nullptr;
    __pyx_v_result = ((NumpyDotNet::ndarray^)__pyx_t_8);
    __pyx_t_8 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":906
 *         obj_template._fieldnames = field_names
 *         result = np.empty(length, dtype=object)
 *         for i in range(length):             # <<<<<<<<<<<<<<
 *             item = pycopy(obj_template)
 *             for name in field_names:
 */
    __pyx_t_6 = __pyx_v_length;
    for (__pyx_t_7 = 0; __pyx_t_7 < __pyx_t_6; __pyx_t_7+=1) {
      __pyx_v_i = __pyx_t_7;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":907
 *         result = np.empty(length, dtype=object)
 *         for i in range(length):
 *             item = pycopy(obj_template)             # <<<<<<<<<<<<<<
 *             for name in field_names:
 *                 item.__dict__[name] = self.read_mi_matrix()
 */
      __pyx_t_8 = PythonOps::GetGlobal(__pyx_context, "pycopy");
      __pyx_t_3 = __site_call1_907_25->Target(__site_call1_907_25, __pyx_context, __pyx_t_8, __pyx_v_obj_template);
      __pyx_t_8 = nullptr;
      __pyx_v_item = __pyx_t_3;
      __pyx_t_3 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":908
 *         for i in range(length):
 *             item = pycopy(obj_template)
 *             for name in field_names:             # <<<<<<<<<<<<<<
 *                 item.__dict__[name] = self.read_mi_matrix()
 *             result[i] = item
 */
      __pyx_t_5 = __site_get_iterator_908_12->Target(__site_get_iterator_908_12, __pyx_v_field_names);
      try {
        while (__pyx_t_5.Key->MoveNext()) {
          __pyx_v_name = ((System::Object^)__pyx_t_5.Key->Current);

          /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":909
 *             item = pycopy(obj_template)
 *             for name in field_names:
 *                 item.__dict__[name] = self.read_mi_matrix()             # <<<<<<<<<<<<<<
 *             result[i] = item
 *         return result.reshape(tupdims).T
 */
          __pyx_t_3 = __pyx_v_self->read_mi_matrix(nullptr); 
          __pyx_t_8 = __site_get___dict___909_20->Target(__site_get___dict___909_20, __pyx_v_item, __pyx_context);
          __site_setindex_909_29->Target(__site_setindex_909_29, __pyx_t_8, __pyx_v_name, __pyx_t_3);
          __pyx_t_8 = nullptr;
          __pyx_t_3 = nullptr;
        }
      }
      finally {
        PythonOps::ForLoopDispose(__pyx_t_5);
      }

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":910
 *             for name in field_names:
 *                 item.__dict__[name] = self.read_mi_matrix()
 *             result[i] = item             # <<<<<<<<<<<<<<
 *         return result.reshape(tupdims).T
 * 
 */
      __pyx_t_10 = __pyx_v_i;
      __pyx_t_11 = -1;
      if (__pyx_t_10 < 0) {
        __pyx_t_10 += __pyx_bshape_0_result;
        if (unlikely(__pyx_t_10 < 0)) __pyx_t_11 = 0;
      } else if (unlikely(__pyx_t_10 >= __pyx_bshape_0_result)) __pyx_t_11 = 0;
      if (unlikely(__pyx_t_11 != -1)) {
        __Pyx_RaiseBufferIndexError(__pyx_t_11);
      }
      __pyx_t_12 = __Pyx_BufPtrFull1d(System::Object^ *, (System::Object^ *)(long long)__pyx_bstruct_result->UnsafeAddress, __pyx_t_10, __pyx_bstride_0_result, __pyx_boffset_0_result);
      __Pyx_DECREF(*__pyx_t_12); __Pyx_INCREF(__pyx_v_item);
      *__pyx_t_12 = __pyx_v_item;
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":911
 *                 item.__dict__[name] = self.read_mi_matrix()
 *             result[i] = item
 *         return result.reshape(tupdims).T             # <<<<<<<<<<<<<<
 * 
 *     cpdef cnp.ndarray read_opaque(self, VarHeader5 hdr):
 */
    __pyx_t_3 = __site_get_reshape_911_21->Target(__site_get_reshape_911_21, ((System::Object^)__pyx_v_result), __pyx_context);
    __pyx_t_8 = __site_call1_911_29->Target(__site_call1_911_29, __pyx_context, __pyx_t_3, __pyx_v_tupdims);
    __pyx_t_3 = nullptr;
    __pyx_t_3 = __site_get_T_911_38->Target(__site_get_T_911_38, __pyx_t_8, __pyx_context);
    __pyx_t_8 = nullptr;
    if (__pyx_t_3 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_r = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    __Pyx_SafeReleaseBuffer(__pyx_bstruct_result);
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":913
 *         return result.reshape(tupdims).T
 * 
 *     cpdef cnp.ndarray read_opaque(self, VarHeader5 hdr):             # <<<<<<<<<<<<<<
 *         ''' Read opaque (function workspace) type
 * 
 */

  virtual  NumpyDotNet::ndarray^ read_opaque(VarHeader5^ __pyx_v_hdr) {
    NumpyDotNet::ndarray^ __pyx_v_res = nullptr;
    NumpyDotNet::ndarray^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_t_3 = nullptr;
    VarReader5^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":929
 *         See the comments at the beginning of ``mio5.py``
 *         '''
 *         cdef cnp.ndarray res = np.empty((1,), dtype=OPAQUE_DTYPE)             # <<<<<<<<<<<<<<
 *         res[0]['s0'] = self.read_int8_string()
 *         res[0]['s1'] = self.read_int8_string()
 */
    __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "np");
    __pyx_t_2 = __site_get_empty_929_33->Target(__site_get_empty_929_33, __pyx_t_1, __pyx_context);
    __pyx_t_1 = nullptr;
    __pyx_t_1 = PythonOps::MakeTuple(gcnew array<System::Object^>{__pyx_int_1});
    __pyx_t_3 = __site_call1_dtype_929_39->Target(__site_call1_dtype_929_39, __pyx_context, __pyx_t_2, __pyx_t_1, ((System::Object^)__pyx_v_5scipy_2io_6matlab_10mio5_utils_OPAQUE_DTYPE));
    __pyx_t_2 = nullptr;
    __pyx_t_1 = nullptr;
    if (__pyx_t_3 == nullptr || dynamic_cast<NumpyDotNet::ndarray^>(__pyx_t_3) == nullptr) {
      throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
    }
    __pyx_v_res = ((NumpyDotNet::ndarray^)__pyx_t_3);
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":930
 *         '''
 *         cdef cnp.ndarray res = np.empty((1,), dtype=OPAQUE_DTYPE)
 *         res[0]['s0'] = self.read_int8_string()             # <<<<<<<<<<<<<<
 *         res[0]['s1'] = self.read_int8_string()
 *         res[0]['s2'] = self.read_int8_string()
 */
    __pyx_t_3 = __pyx_v_self->read_int8_string(); 
    __pyx_t_1 = __site_getindex_930_11->Target(__site_getindex_930_11, ((System::Object^)__pyx_v_res), ((System::Object^)0));
    __site_setindex_930_14->Target(__site_setindex_930_14, __pyx_t_1, ((System::Object^)"s0"), __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":931
 *         cdef cnp.ndarray res = np.empty((1,), dtype=OPAQUE_DTYPE)
 *         res[0]['s0'] = self.read_int8_string()
 *         res[0]['s1'] = self.read_int8_string()             # <<<<<<<<<<<<<<
 *         res[0]['s2'] = self.read_int8_string()
 *         res[0]['arr'] = self.read_mi_matrix()
 */
    __pyx_t_3 = __pyx_v_self->read_int8_string(); 
    __pyx_t_1 = __site_getindex_931_11->Target(__site_getindex_931_11, ((System::Object^)__pyx_v_res), ((System::Object^)0));
    __site_setindex_931_14->Target(__site_setindex_931_14, __pyx_t_1, ((System::Object^)"s1"), __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":932
 *         res[0]['s0'] = self.read_int8_string()
 *         res[0]['s1'] = self.read_int8_string()
 *         res[0]['s2'] = self.read_int8_string()             # <<<<<<<<<<<<<<
 *         res[0]['arr'] = self.read_mi_matrix()
 *         return res
 */
    __pyx_t_3 = __pyx_v_self->read_int8_string(); 
    __pyx_t_1 = __site_getindex_932_11->Target(__site_getindex_932_11, ((System::Object^)__pyx_v_res), ((System::Object^)0));
    __site_setindex_932_14->Target(__site_setindex_932_14, __pyx_t_1, ((System::Object^)"s2"), __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":933
 *         res[0]['s1'] = self.read_int8_string()
 *         res[0]['s2'] = self.read_int8_string()
 *         res[0]['arr'] = self.read_mi_matrix()             # <<<<<<<<<<<<<<
 *         return res
 */
    __pyx_t_3 = __pyx_v_self->read_mi_matrix(nullptr); 
    __pyx_t_1 = __site_getindex_933_11->Target(__site_getindex_933_11, ((System::Object^)__pyx_v_res), ((System::Object^)0));
    __site_setindex_933_14->Target(__site_setindex_933_14, __pyx_t_1, ((System::Object^)"arr"), __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":934
 *         res[0]['s2'] = self.read_int8_string()
 *         res[0]['arr'] = self.read_mi_matrix()
 *         return res             # <<<<<<<<<<<<<<
 */
    __pyx_r = __pyx_v_res;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }
  !VarReader5() {
    delete[] &dtypes;
    delete[] &class_dtypes;
  }
};

/* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":180
 *     object Npy_INTERFACE_array "Npy_INTERFACE_OBJECT" (NpyArray*)
 * 
 * cdef inline object PyUFunc_FromFuncAndData(PyUFuncGenericFunction* func, void** data,             # <<<<<<<<<<<<<<
 *         char* types, int ntypes, int nin, int nout,
 *         int identity, char* name, char* doc, int c):
 */

static CYTHON_INLINE System::Object^ PyUFunc_FromFuncAndData(__pyx_t_5numpy_PyUFuncGenericFunction *__pyx_v_func, void **__pyx_v_data, char *__pyx_v_types, int __pyx_v_ntypes, int __pyx_v_nin, int __pyx_v_nout, int __pyx_v_identity, char *__pyx_v_name, char *__pyx_v_doc, int __pyx_v_c) {
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":183
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

/* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":185
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

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":186
 * 
 * cdef inline object PyArray_ZEROS(int ndim, intp_t *shape, int typenum, int fortran):
 *     shape_list = []             # <<<<<<<<<<<<<<
 *     cdef int i
 *     for i in range(ndim):
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{});
  __pyx_v_shape_list = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":188
 *     shape_list = []
 *     cdef int i
 *     for i in range(ndim):             # <<<<<<<<<<<<<<
 *         shape_list.append(shape[i])
 *     import numpy
 */
  __pyx_t_2 = __pyx_v_ndim;
  for (__pyx_t_3 = 0; __pyx_t_3 < __pyx_t_2; __pyx_t_3+=1) {
    __pyx_v_i = __pyx_t_3;

    /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":189
 *     cdef int i
 *     for i in range(ndim):
 *         shape_list.append(shape[i])             # <<<<<<<<<<<<<<
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 */
    __pyx_t_1 = __site_get_append_189_18->Target(__site_get_append_189_18, ((System::Object^)__pyx_v_shape_list), __pyx_context);
    __pyx_t_4 = (__pyx_v_shape[__pyx_v_i]);
    __pyx_t_5 = __site_call1_189_25->Target(__site_call1_189_25, __pyx_context, __pyx_t_1, __pyx_t_4);
    __pyx_t_1 = nullptr;
    __pyx_t_4 = nullptr;
    __pyx_t_5 = nullptr;
  }

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":190
 *     for i in range(ndim):
 *         shape_list.append(shape[i])
 *     import numpy             # <<<<<<<<<<<<<<
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 */
  __pyx_t_5 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  __pyx_v_numpy = __pyx_t_5;
  __pyx_t_5 = nullptr;

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":191
 *         shape_list.append(shape[i])
 *     import numpy
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')             # <<<<<<<<<<<<<<
 * 
 * cdef inline void* PyArray_DATA(ndarray n):
 */
  __pyx_t_5 = __site_get_zeros_191_16->Target(__site_get_zeros_191_16, __pyx_v_numpy, __pyx_context);
  __pyx_t_4 = Npy_INTERFACE_OBJECT(NpyArray_DescrFromType(__pyx_v_typenum)); 
  if (__pyx_v_fortran) {
    __pyx_t_1 = "F";
  } else {
    __pyx_t_1 = "C";
  }
  __pyx_t_6 = __site_call3_191_22->Target(__site_call3_191_22, __pyx_context, __pyx_t_5, ((System::Object^)__pyx_v_shape_list), __pyx_t_4, ((System::Object^)__pyx_t_1));
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

/* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":193
 *     return numpy.zeros(shape_list, Npy_INTERFACE_descr(NpyArray_DescrFromType(typenum)), 'F' if fortran else 'C')
 * 
 * cdef inline void* PyArray_DATA(ndarray n):             # <<<<<<<<<<<<<<
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)
 */

static CYTHON_INLINE void *PyArray_DATA(NumpyDotNet::ndarray^ __pyx_v_n) {
  void *__pyx_r;
  System::Object^ __pyx_t_1 = nullptr;
  PY_LONG_LONG __pyx_t_2;

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":195
 * cdef inline void* PyArray_DATA(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DATA(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 */
  __pyx_t_1 = __site_get_Array_195_49->Target(__site_get_Array_195_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_195_49->Target(__site_cvt_PY_LONG_LONG_195_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DATA(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":197
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

  /* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":199
 * cdef inline intp_t* PyArray_DIMS(ndarray n):
 *     # XXX "long long" is wrong type
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)             # <<<<<<<<<<<<<<
 * 
 * cdef inline void import_array():
 */
  __pyx_t_1 = __site_get_Array_199_49->Target(__site_get_Array_199_49, ((System::Object^)__pyx_v_n), __pyx_context);
  __pyx_t_2 = __site_cvt_PY_LONG_LONG_199_49->Target(__site_cvt_PY_LONG_LONG_199_49, __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_r = NpyArray_DIMS(((NpyArray *)((PY_LONG_LONG)__pyx_t_2)));
  goto __pyx_L0;

  __pyx_r = 0;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Python26\lib\site-packages\Cython\Includes\numpy.pxd":201
 *     return NpyArray_DIMS(<NpyArray*> <long long>n.Array)
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
  __pyx_int_4 = 4;
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
  __site_get_byteorder_105_15 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "byteorder", false));
  __site_op_eq_105_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_cvt_bool_106_24 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_bool_106_32 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_bool_107_25 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_bool_107_33 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_OPAQUE_DTYPE_109_35 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "OPAQUE_DTYPE", false));
  __site_cvt_int_127_20 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_136_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_int_136_25 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_iterator_137_8 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_op_add_137_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_call1_138_47 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt___pyx_t_5numpy_int32_t_138_47 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_int32_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_int32_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_Py_ssize_t_138_27 = CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, Py_ssize_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_142_20 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_142_32 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_byte_order_173_28 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "byte_order", false));
  __site_op_eq_174_37 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_cvt_int_174_37 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_istrue_176_46 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_int_178_42 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_struct_as_record_180_39 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "struct_as_record", false));
  __site_cvt_int_180_39 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_MDTYPES_182_27 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "MDTYPES", false));
  __site_getindex_182_35 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_182_47 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_get_copy_182_57 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "copy", false));
  __site_call0_182_62 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_get_uint16_codec_183_35 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "uint16_codec", false));
  __site_get_encode_186_44 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "encode", false));
  __site_call1_186_51 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_186_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_encode_187_25 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "encode", false));
  __site_call1_187_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_187_21 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_sub_187_16 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Subtract));
  __site_setindex_186_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_setindex_188_19 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_set_stream_190_12 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "set_stream", false));
  __site_get_mat_stream_190_31 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "mat_stream", false));
  __site_call1_190_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_mat_dtype_192_32 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "mat_dtype", false));
  __site_cvt_int_192_32 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_chars_as_strings_193_39 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "chars_as_strings", false));
  __site_cvt_int_193_39 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_squeeze_me_194_33 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "squeeze_me", false));
  __site_cvt_int_194_33 = CallSite< System::Func< CallSite^, System::Object^, int >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, int::typeid, ConversionResultKind::ExplicitCast));
  __site_get_MDTYPES_197_28 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "MDTYPES", false));
  __site_getindex_197_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_197_48 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_get_items_197_58 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "items", false));
  __site_call0_197_64 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_get_iterator_197_8 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_call2_198_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_198_29 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_Py_ssize_t_199_31 = CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, Py_ssize_t::typeid, ConversionResultKind::ExplicitCast));
  __site_get_MDTYPES_201_28 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "MDTYPES", false));
  __site_getindex_201_36 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_getindex_201_48 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_get_items_201_59 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "items", false));
  __site_call0_201_65 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_get_iterator_201_8 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_call2_202_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_istrue_202_29 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_Py_ssize_t_203_37 = CallSite< System::Func< CallSite^, System::Object^, Py_ssize_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, Py_ssize_t::typeid, ConversionResultKind::ExplicitCast));
  __site_get_dtype_206_30 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "dtype", false));
  __site_call1_206_36 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_dtype_208_30 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "dtype", false));
  __site_call1_208_36 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_dtype_209_23 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "dtype", false));
  __site_call1_209_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_299_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_itemsize_425_35 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "itemsize", false));
  __site_op_floordiv_425_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_FloorDivide));
  __site_cvt___pyx_t_5numpy_npy_intp_425_30 = CallSite< System::Func< CallSite^, System::Object^, __pyx_t_5numpy_npy_intp >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, __pyx_t_5numpy_npy_intp::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_456_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_478_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call0_543_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_op_mod_559_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_558_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_append_563_23 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_563_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_613_27 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_array_616_25 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "array", false));
  __site_call1_616_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_array_618_25 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "array", false));
  __site_call1_618_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_astype_657_25 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "astype", false));
  __site_call1_657_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_665_38 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_671_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_MatlabObject_673_23 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "MatlabObject", false));
  __site_call2_673_36 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_MatlabFunction_676_23 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "MatlabFunction", false));
  __site_call1_676_38 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_MatlabOpaque_681_23 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "MatlabOpaque", false));
  __site_call1_681_36 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_685_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_itemsize_698_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "itemsize", false));
  __site_op_eq_698_28 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_698_28 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_astype_699_25 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "astype", false));
  __site_call1_699_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_astype_701_25 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "astype", false));
  __site_call1_701_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_set_imag_702_15 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetAction(__pyx_context, "imag"));
  __site_get_reshape_705_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "reshape", false));
  __site_getindex_705_38 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_call1_705_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_T_705_45 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "T", false));
  __site_op_mul_717_34 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_op_add_717_24 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Add));
  __site_cvt_size_t_732_8 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_cvt_size_t_732_8_1 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_getslice_733_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetSliceBinder(__pyx_context));
  __site_getindex_734_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_cvt_size_t_734_20 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_getslice_735_23 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetSliceBinder(__pyx_context));
  __site_getslice_736_21 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetSliceBinder(__pyx_context));
  __site_get_sparse_737_20 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "sparse", false));
  __site_get_csc_matrix_737_27 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "csc_matrix", false));
  __site_call1_shape_737_38 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument("shape")})));
  __site_get_array_774_20 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "array", false));
  __site_op_mul_774_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_call1_dtype_774_26 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument("dtype")})));
  __site_get_ndarray_775_21 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndarray", false));
  __site_call0_shape_dtype_buffer_order_775_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument("shape"), Argument("dtype"), Argument("buffer"), Argument("order")})));
  __site_getindex_786_26 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_eq_786_41 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Equal));
  __site_istrue_786_41 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_get_ndarray_787_24 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndarray", false));
  __site_call0_shape_dtype_buffer_787_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument("shape"), Argument("dtype"), Argument("buffer")})));
  __site_get_astype_790_26 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "astype", false));
  __site_get_uint8_790_36 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "uint8", false));
  __site_call1_790_33 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_tostring_790_43 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "tostring", false));
  __site_call0_790_52 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_contains_793_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, bool >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_Contains));
  __site_getindex_794_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_istrue_795_24 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mod_796_61 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_796_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mod_799_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_call1_798_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_decode_800_21 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "decode", false));
  __site_call1_800_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_array_802_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "array", false));
  __site_call1_dtype_802_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument("dtype")})));
  __site_get_ndarray_805_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "ndarray", false));
  __site_call0_shape_dtype_buffer_order_805_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument("shape"), Argument("dtype"), Argument("buffer"), Argument("order")})));
  __site_getindex_816_35 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_call1_816_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_818_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call1_dtype_818_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument("dtype")})));
  __site_get_reshape_821_21 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "reshape", false));
  __site_call1_821_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_T_821_38 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "T", false));
  __site_call1_839_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_853_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_op_mod_863_32 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Modulo));
  __site_get_append_864_23 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_864_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_getindex_886_35 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_call1_886_23 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_893_25 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call1_dtype_893_31 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument("dtype")})));
  __site_get_T_893_54 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "T", false));
  __site_get_iterator_895_12 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_get_append_895_45 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_895_52 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_empty_897_24 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call1_dtype_897_30 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument("dtype")})));
  __site_get_iterator_899_16 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_getindex_900_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_setindex_900_30 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_reshape_901_26 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "reshape", false));
  __site_call1_901_34 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_T_901_43 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "T", false));
  __site_get_mat_struct_903_28 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "mat_struct", false));
  __site_call0_903_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_set__fieldnames_904_20 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetAction(__pyx_context, "_fieldnames"));
  __site_get_empty_905_19 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call1_dtype_905_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument("dtype")})));
  __site_call1_907_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_iterator_908_12 = CallSite< System::Func< CallSite^, System::Object^, System::Collections::Generic::KeyValuePair<System::Collections::IEnumerator^, System::IDisposable^> >^ >::Create(PythonOps::MakeOperationAction(__pyx_context, PythonOperationKind_GetEnumeratorForIteration));
  __site_get___dict___909_20 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "__dict__", false));
  __site_setindex_909_29 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_reshape_911_21 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "reshape", false));
  __site_call1_911_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_T_911_38 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "T", false));
  __site_get_empty_929_33 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "empty", false));
  __site_call1_dtype_929_39 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(gcnew array<Argument>{Argument::Simple, Argument("dtype")})));
  __site_getindex_930_11 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_setindex_930_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_getindex_931_11 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_setindex_931_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_getindex_932_11 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_setindex_932_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_getindex_933_11 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_setindex_933_14 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeSetIndexAction(__pyx_context, 2));
  __site_get_append_189_18 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "append", false));
  __site_call1_189_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_zeros_191_16 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "zeros", false));
  __site_call3_191_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(3)));
  __site_get_Array_195_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_195_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
  __site_get_Array_199_49 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "Array", false));
  __site_cvt_PY_LONG_LONG_199_49 = CallSite< System::Func< CallSite^, System::Object^, PY_LONG_LONG >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, PY_LONG_LONG::typeid, ConversionResultKind::ExplicitCast));
}
[SpecialName]
static void PerformModuleReload(PythonContext^ context, PythonDictionary^ dict) {
  dict["__builtins__"] = context->BuiltinModuleInstance;
  __pyx_context = (gcnew ModuleContext(dict, context))->GlobalContext;
  __Pyx_InitSites(__pyx_context);
  __Pyx_InitGlobals();
  /*--- Type init code ---*/
  __pyx_ptype_5scipy_2io_6matlab_10mio5_utils_VarHeader5 = safe_cast<Types::PythonType^>(dict["VarHeader5"]);
  __pyx_ptype_5scipy_2io_6matlab_10mio5_utils_VarReader5 = safe_cast<Types::PythonType^>(dict["VarReader5"]);
  /*--- Create function pointers ---*/
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  int __pyx_t_3;
  PythonDictionary^ __pyx_t_4;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":15
 * '''
 * 
 * import sys             # <<<<<<<<<<<<<<
 * 
 * from copy import copy as pycopy
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "sys", -1));
  PythonOps::SetGlobal(__pyx_context, "sys", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":17
 * import sys
 * 
 * from copy import copy as pycopy             # <<<<<<<<<<<<<<
 * 
 * from libc.stdlib cimport calloc, free
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportWithNames(__pyx_context, "copy", gcnew array<System::String^>{"copy"}, -1));
  __pyx_t_2 = PythonOps::ImportFrom(__pyx_context, __pyx_t_1, "copy");
  PythonOps::SetGlobal(__pyx_context, "pycopy", __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":32
 *     PyBytes_FromStringAndSize
 * 
 * import numpy as np             # <<<<<<<<<<<<<<
 * from numpy.compat import asbytes, asstr
 * cimport numpy as cnp
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "numpy", -1));
  PythonOps::SetGlobal(__pyx_context, "np", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":33
 * 
 * import numpy as np
 * from numpy.compat import asbytes, asstr             # <<<<<<<<<<<<<<
 * cimport numpy as cnp
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportWithNames(__pyx_context, "numpy.compat", gcnew array<System::String^>{"asbytes", "asstr"}, -1));
  __pyx_t_2 = PythonOps::ImportFrom(__pyx_context, __pyx_t_1, "asbytes");
  PythonOps::SetGlobal(__pyx_context, "asbytes", __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_2 = PythonOps::ImportFrom(__pyx_context, __pyx_t_1, "asstr");
  PythonOps::SetGlobal(__pyx_context, "asstr", __pyx_t_2);
  __pyx_t_2 = nullptr;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":52
 * # Numpy must be initialized before any code using the numpy C-API
 * # directly
 * cnp.import_array()             # <<<<<<<<<<<<<<
 * 
 * # Constant from numpy - max number of array dimensions
 */
  import_array();

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":62
 * 
 * cimport streams
 * import scipy.io.matlab.miobase as miob             # <<<<<<<<<<<<<<
 * from scipy.io.matlab.mio_utils import squeeze_element, chars_to_strings
 * import scipy.io.matlab.mio5_params as mio5p
 */
  __pyx_t_1 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{((System::Object^)"*")});
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "scipy.io.matlab.miobase", -1));
  __pyx_t_1 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "miob", __pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":63
 * cimport streams
 * import scipy.io.matlab.miobase as miob
 * from scipy.io.matlab.mio_utils import squeeze_element, chars_to_strings             # <<<<<<<<<<<<<<
 * import scipy.io.matlab.mio5_params as mio5p
 * import scipy.sparse
 */
  __pyx_t_2 = LightExceptions::CheckAndThrow(PythonOps::ImportWithNames(__pyx_context, "scipy.io.matlab.mio_utils", gcnew array<System::String^>{"squeeze_element", "chars_to_strings"}, -1));
  __pyx_t_1 = PythonOps::ImportFrom(__pyx_context, __pyx_t_2, "squeeze_element");
  PythonOps::SetGlobal(__pyx_context, "squeeze_element", __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = PythonOps::ImportFrom(__pyx_context, __pyx_t_2, "chars_to_strings");
  PythonOps::SetGlobal(__pyx_context, "chars_to_strings", __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":64
 * import scipy.io.matlab.miobase as miob
 * from scipy.io.matlab.mio_utils import squeeze_element, chars_to_strings
 * import scipy.io.matlab.mio5_params as mio5p             # <<<<<<<<<<<<<<
 * import scipy.sparse
 * 
 */
  __pyx_t_2 = PythonOps::MakeListNoCopy(gcnew array<System::Object^>{((System::Object^)"*")});
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "scipy.io.matlab.mio5_params", -1));
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "mio5p", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":65
 * from scipy.io.matlab.mio_utils import squeeze_element, chars_to_strings
 * import scipy.io.matlab.mio5_params as mio5p
 * import scipy.sparse             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "scipy.sparse", -1));
  PythonOps::SetGlobal(__pyx_context, "scipy", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":105
 *     mxOBJECT_CLASS_FROM_MATRIX_H = 18
 * 
 * sys_is_le = sys.byteorder == 'little'             # <<<<<<<<<<<<<<
 * native_code = sys_is_le and '<' or '>'
 * swapped_code = sys_is_le and '>' or '<'
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "sys");
  __pyx_t_2 = __site_get_byteorder_105_15->Target(__site_get_byteorder_105_15, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  __pyx_t_1 = __site_op_eq_105_26->Target(__site_op_eq_105_26, __pyx_t_2, ((System::Object^)"little"));
  __pyx_t_2 = nullptr;
  PythonOps::SetGlobal(__pyx_context, "sys_is_le", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":106
 * 
 * sys_is_le = sys.byteorder == 'little'
 * native_code = sys_is_le and '<' or '>'             # <<<<<<<<<<<<<<
 * swapped_code = sys_is_le and '>' or '<'
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "sys_is_le");
  __pyx_t_3 = __site_cvt_bool_106_24->Target(__site_cvt_bool_106_24, __pyx_t_1);
  if (__pyx_t_3) {
    __pyx_t_1 = nullptr;
    __pyx_t_2 = "<";
  } else {
    __pyx_t_2 = __pyx_t_1;
    __pyx_t_1 = nullptr;
  }
  __pyx_t_3 = __site_cvt_bool_106_32->Target(__site_cvt_bool_106_32, __pyx_t_2);
  if (!__pyx_t_3) {
    __pyx_t_2 = nullptr;
    __pyx_t_1 = ">";
  } else {
    __pyx_t_1 = __pyx_t_2;
    __pyx_t_2 = nullptr;
  }
  PythonOps::SetGlobal(__pyx_context, "native_code", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":107
 * sys_is_le = sys.byteorder == 'little'
 * native_code = sys_is_le and '<' or '>'
 * swapped_code = sys_is_le and '>' or '<'             # <<<<<<<<<<<<<<
 * 
 * cdef cnp.dtype OPAQUE_DTYPE = mio5p.OPAQUE_DTYPE
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "sys_is_le");
  __pyx_t_3 = __site_cvt_bool_107_25->Target(__site_cvt_bool_107_25, __pyx_t_1);
  if (__pyx_t_3) {
    __pyx_t_1 = nullptr;
    __pyx_t_2 = ">";
  } else {
    __pyx_t_2 = __pyx_t_1;
    __pyx_t_1 = nullptr;
  }
  __pyx_t_3 = __site_cvt_bool_107_33->Target(__site_cvt_bool_107_33, __pyx_t_2);
  if (!__pyx_t_3) {
    __pyx_t_2 = nullptr;
    __pyx_t_1 = "<";
  } else {
    __pyx_t_1 = __pyx_t_2;
    __pyx_t_2 = nullptr;
  }
  PythonOps::SetGlobal(__pyx_context, "swapped_code", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":109
 * swapped_code = sys_is_le and '>' or '<'
 * 
 * cdef cnp.dtype OPAQUE_DTYPE = mio5p.OPAQUE_DTYPE             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "mio5p");
  __pyx_t_2 = __site_get_OPAQUE_DTYPE_109_35->Target(__site_get_OPAQUE_DTYPE_109_35, __pyx_t_1, __pyx_context);
  __pyx_t_1 = nullptr;
  if (__pyx_t_2 == nullptr || dynamic_cast<NumpyDotNet::dtype^>(__pyx_t_2) == nullptr) {
    throw PythonOps::MakeException(__pyx_context, PythonOps::GetGlobal(__pyx_context, "TypeError"), "type error", nullptr);
  }
  __pyx_v_5scipy_2io_6matlab_10mio5_utils_OPAQUE_DTYPE = ((NumpyDotNet::dtype^)__pyx_t_2);
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\mio5_utils.pyx":1
 * ''' Cython mio5 utility routines (-*- python -*- like)             # <<<<<<<<<<<<<<
 * 
 * '''
 */
  __pyx_t_4 = PythonOps::MakeEmptyDict();
  PythonOps::SetGlobal(__pyx_context, "__test__", ((System::Object^)__pyx_t_4));
  __pyx_t_4 = nullptr;

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







































static Types::PythonType^ __pyx_ptype_5numpy_ndarray = nullptr;
static Types::PythonType^ __pyx_ptype_5numpy_dtype = nullptr;

static Types::PythonType^ __pyx_ptype_5scipy_2io_6matlab_7streams_GenericStream = nullptr;

static Types::PythonType^ __pyx_ptype_5scipy_2io_6matlab_10mio5_utils_VarHeader5 = nullptr;
static Types::PythonType^ __pyx_ptype_5scipy_2io_6matlab_10mio5_utils_VarReader5 = nullptr;
static NumpyDotNet::dtype^ __pyx_v_5scipy_2io_6matlab_10mio5_utils_OPAQUE_DTYPE = nullptr;
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
static void __Pyx_RaiseBufferIndexError(int axis) {
  throw PythonOps::IndexError(
     "Out of bounds on buffer access (axis {0})", axis);
}


static CYTHON_INLINE void* __Pyx_BufPtrFull1d_imp(void* buf, Py_ssize_t i0, Py_ssize_t s0, Py_ssize_t o0) {
  char* ptr = (char*)buf;
ptr += s0 * i0;
if (o0 >= 0) ptr = *((char**)ptr) + o0; 

return ptr;
}
  
static CYTHON_INLINE Py_ssize_t __Pyx_div_Py_ssize_t(Py_ssize_t a, Py_ssize_t b) {
    Py_ssize_t q = a / b;
    Py_ssize_t r = a - q*b;
    q -= ((r != 0) & ((r ^ b) < 0));
    return q;
}

static int __Pyx_GetBuffer(System::Object^ obj, NumpyDotNet::IExtBufferProtocol^& view, int flags) {
  view = NumpyDotNet::NpyBuffer::GetBufferForObject(obj, (NumpyDotNet::NpyBuffer::PyBuf)flags);
  return 0;
}
static void __Pyx_ReleaseBuffer(NumpyDotNet::IExtBufferProtocol^ view) {
  /* do nothing */
}

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
[assembly: PythonModule("scipy__io__matlab__mio5_utils", module_mio5_utils::typeid)];
};
