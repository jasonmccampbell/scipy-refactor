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
  dict["__module__"] = "scipy.io.matlab.streams";
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
#define __PYX_HAVE_API__scipy__io__matlab__streams
#include "stdio.h"
#include "pythread.h"
#include "stdlib.h"
#include "py3k.h"

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

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":89
 * cdef class cStringStream(GenericStream):
 * 
 *     cpdef int seek(self, long int offset, int whence=0) except -1:             # <<<<<<<<<<<<<<
 *         cdef char *ptr
 *         if whence == 1 and offset >=0: # forward, from here
 */

ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13cStringStream_seek {
  int __pyx_n;
  int whence;
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":109
 *         return 0
 * 
 *     cdef object read_string(self, size_t n, void **pp, int copy=True):             # <<<<<<<<<<<<<<
 *         """ Make new memory, wrap with object
 * 
 */

ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13cStringStream_read_string {
  int __pyx_n;
  int copy;
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":135
 *         npy_PyFile_DupClose(self.fobj, self.file)
 * 
 *     cpdef int seek(self, long int offset, int whence=0) except -1:             # <<<<<<<<<<<<<<
 *         cdef int ret
 *         """ move `offset` bytes in stream
 */

ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_10FileStream_seek {
  int __pyx_n;
  int whence;
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":176
 *         return 0
 * 
 *     cdef object read_string(self, size_t n, void **pp, int copy=True):             # <<<<<<<<<<<<<<
 *         """ Make new memory, wrap with object """
 *         cdef object obj = pyalloc_v(n, pp)
 */

ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_10FileStream_read_string {
  int __pyx_n;
  int copy;
};



/* Cython code section 'utility_code_proto' */
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
/* Module declarations from scipy.io.matlab.pyalloc */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate System::Object^ __pyx_delegate_t_5scipy_2io_6matlab_7pyalloc_pyalloc_v(Py_ssize_t, void **);
static CYTHON_INLINE System::Object^ pyalloc_v(Py_ssize_t, void **); /*proto*/
/* Module declarations from scipy.io.matlab.streams */
[InteropServices::UnmanagedFunctionPointer(InteropServices::CallingConvention::Cdecl)]
public delegate GenericStream^ __pyx_delegate_t_5scipy_2io_6matlab_7streams_make_stream(System::Object^, int __pyx_skip_dispatch);
static GenericStream^ make_stream(System::Object^, int __pyx_skip_dispatch); /*proto*/
/* Cython code section 'typeinfo' */
/* Cython code section 'before_global_var' */
#define __Pyx_MODULE_NAME "scipy.io.matlab.streams"

/* Implementation of scipy.io.matlab.streams */
namespace clr_streams {
  public ref class module_streams sealed abstract {
/* Cython code section 'global_var' */
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_seek_53_17;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call2_53_22;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_tell_57_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >^ __site_call0_57_29;
static  CallSite< System::Func< CallSite^, System::Object^, long >^ >^ __site_cvt_long_57_29;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_read_60_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_60_29;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_read_66_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_66_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_68_25;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_read_76_24;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_76_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_78_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_105_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_119_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_157_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_172_25;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_181_25;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_184_0;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_187_18;
static  CallSite< System::Func< CallSite^, System::Object^, size_t >^ >^ __site_cvt_193_0;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_mul_197_18;
static  CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >^ __site_get_version_info_207_14;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_getindex_207_27;
static  CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >^ __site_op_ge_207_31;
static  CallSite< System::Func< CallSite^, System::Object^, bool >^ >^ __site_istrue_207_31;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_208_32;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_210_29;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_212_28;
static  CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >^ __site_call1_213_24;
static CodeContext^ __pyx_context;
/* Cython code section 'decls' */
static char *__pyx_k__rb = "rb";
static int^ __pyx_int_3;
/* Cython code section 'all_the_rest' */
public:
static System::String^ __module__ = __Pyx_MODULE_NAME;

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":47
 * 
 * 
 * cdef class GenericStream:             # <<<<<<<<<<<<<<
 * 
 *     def __init__(self, fobj):
 */
[PythonType]
ref struct GenericStream {
  System::Object^ fobj;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":49
 * cdef class GenericStream:
 * 
 *     def __init__(self, fobj):             # <<<<<<<<<<<<<<
 *         self.fobj = fobj
 * 
 */

  [SpecialName]
  virtual int __init__(System::Object^ fobj) {
    System::Object^ __pyx_v_fobj = nullptr;
    int __pyx_r;
    System::Object^ __pyx_v_self = this;
    __pyx_v_fobj = fobj;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":50
 * 
 *     def __init__(self, fobj):
 *         self.fobj = fobj             # <<<<<<<<<<<<<<
 * 
 *     cpdef int seek(self, long int offset, int whence=0) except -1:
 */
    ((GenericStream^)__pyx_v_self)->fobj = __pyx_v_fobj;

    __pyx_r = 0;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":52
 *         self.fobj = fobj
 * 
 *     cpdef int seek(self, long int offset, int whence=0) except -1:             # <<<<<<<<<<<<<<
 *         self.fobj.seek(offset, whence)
 *         return 0
 */

  virtual  int seek(long __pyx_v_offset, ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13GenericStream_seek ^__pyx_optional_args) {
    int __pyx_v_whence = ((int)0);
    int __pyx_r;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_t_3 = nullptr;
    System::Object^ __pyx_t_4 = nullptr;
    GenericStream^ __pyx_v_self = this;
    if (__pyx_optional_args) {
      if (__pyx_optional_args->__pyx_n > 0) {
        __pyx_v_whence = __pyx_optional_args->whence;
      }
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":53
 * 
 *     cpdef int seek(self, long int offset, int whence=0) except -1:
 *         self.fobj.seek(offset, whence)             # <<<<<<<<<<<<<<
 *         return 0
 * 
 */
    __pyx_t_1 = __site_get_seek_53_17->Target(__site_get_seek_53_17, __pyx_v_self->fobj, __pyx_context);
    __pyx_t_2 = __pyx_v_offset;
    __pyx_t_3 = __pyx_v_whence;
    __pyx_t_4 = __site_call2_53_22->Target(__site_call2_53_22, __pyx_context, __pyx_t_1, __pyx_t_2, __pyx_t_3);
    __pyx_t_1 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_t_3 = nullptr;
    __pyx_t_4 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":54
 *     cpdef int seek(self, long int offset, int whence=0) except -1:
 *         self.fobj.seek(offset, whence)
 *         return 0             # <<<<<<<<<<<<<<
 * 
 *     cpdef long int tell(self) except -1:
 */
    __pyx_r = 0;
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":56
 *         return 0
 * 
 *     cpdef long int tell(self) except -1:             # <<<<<<<<<<<<<<
 *         return self.fobj.tell()
 * 
 */

  virtual  long tell(void) {
    long __pyx_r;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_t_2 = nullptr;
    long __pyx_t_3;
    GenericStream^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":57
 * 
 *     cpdef long int tell(self) except -1:
 *         return self.fobj.tell()             # <<<<<<<<<<<<<<
 * 
 *     def read(self, n_bytes):
 */
    __pyx_t_1 = __site_get_tell_57_24->Target(__site_get_tell_57_24, __pyx_v_self->fobj, __pyx_context);
    __pyx_t_2 = __site_call0_57_29->Target(__site_call0_57_29, __pyx_context, __pyx_t_1);
    __pyx_t_1 = nullptr;
    __pyx_t_3 = __site_cvt_long_57_29->Target(__site_cvt_long_57_29, __pyx_t_2);
    __pyx_t_2 = nullptr;
    __pyx_r = __pyx_t_3;
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":59
 *         return self.fobj.tell()
 * 
 *     def read(self, n_bytes):             # <<<<<<<<<<<<<<
 *         return self.fobj.read(n_bytes)
 * 
 */

  virtual System::Object^ read(System::Object^ n_bytes) {
    System::Object^ __pyx_v_n_bytes = nullptr;
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_v_self = this;
    __pyx_v_n_bytes = n_bytes;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":60
 * 
 *     def read(self, n_bytes):
 *         return self.fobj.read(n_bytes)             # <<<<<<<<<<<<<<
 * 
 *     cdef int read_into(self, void *buf, size_t n) except -1:
 */
    __pyx_t_1 = __site_get_read_60_24->Target(__site_get_read_60_24, ((GenericStream^)__pyx_v_self)->fobj, __pyx_context);
    __pyx_t_2 = __site_call1_60_29->Target(__site_call1_60_29, __pyx_context, __pyx_t_1, __pyx_v_n_bytes);
    __pyx_t_1 = nullptr;
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = nullptr;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":62
 *         return self.fobj.read(n_bytes)
 * 
 *     cdef int read_into(self, void *buf, size_t n) except -1:             # <<<<<<<<<<<<<<
 *         """ Read n bytes from stream into pre-allocated buffer `buf`
 *         """
 */

  virtual  int read_into(void *__pyx_v_buf, size_t __pyx_v_n) {
    char *__pyx_v_d_ptr;
    System::Object^ __pyx_v_data;
    int __pyx_r;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_t_3 = nullptr;
    Py_ssize_t __pyx_t_4;
    int __pyx_t_5;
    char *__pyx_t_6;
    System::IntPtr __pyx_t_7;
    GenericStream^ __pyx_v_self = this;
    __pyx_v_data = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":66
 *         """
 *         cdef char* d_ptr
 *         data = self.fobj.read(n)             # <<<<<<<<<<<<<<
 *         if PyBytes_Size(data) != n:
 *             raise IOError('could not read bytes')
 */
    __pyx_t_1 = __site_get_read_66_24->Target(__site_get_read_66_24, __pyx_v_self->fobj, __pyx_context);
    __pyx_t_2 = __pyx_v_n;
    __pyx_t_3 = __site_call1_66_29->Target(__site_call1_66_29, __pyx_context, __pyx_t_1, __pyx_t_2);
    __pyx_t_1 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_v_data = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":67
 *         cdef char* d_ptr
 *         data = self.fobj.read(n)
 *         if PyBytes_Size(data) != n:             # <<<<<<<<<<<<<<
 *             raise IOError('could not read bytes')
 *             return -1
 */
    XXX skipping exception checks: __pyx_t_4 == -1
    __pyx_t_4 = PyBytes_Size(__pyx_v_data); 
    __pyx_t_5 = (__pyx_t_4 != __pyx_v_n);
    if (__pyx_t_5) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":68
 *         data = self.fobj.read(n)
 *         if PyBytes_Size(data) != n:
 *             raise IOError('could not read bytes')             # <<<<<<<<<<<<<<
 *             return -1
 *         d_ptr = data
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "IOError");
      __pyx_t_2 = __site_call1_68_25->Target(__site_call1_68_25, __pyx_context, __pyx_t_3, ((System::Object^)"could not read bytes"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":69
 *         if PyBytes_Size(data) != n:
 *             raise IOError('could not read bytes')
 *             return -1             # <<<<<<<<<<<<<<
 *         d_ptr = data
 *         memcpy(buf, d_ptr, n)
 */
      __pyx_r = -1;
      goto __pyx_L0;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":70
 *             raise IOError('could not read bytes')
 *             return -1
 *         d_ptr = data             # <<<<<<<<<<<<<<
 *         memcpy(buf, d_ptr, n)
 *         return 0
 */
    __pyx_t_7 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(__pyx_v_data));
    __pyx_t_6 = static_cast<char *>(__pyx_t_7.ToPointer());
    __pyx_v_d_ptr = __pyx_t_6;
    InteropServices::Marshal::FreeHGlobal(__pyx_t_7);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":71
 *             return -1
 *         d_ptr = data
 *         memcpy(buf, d_ptr, n)             # <<<<<<<<<<<<<<
 *         return 0
 * 
 */
    memcpy(__pyx_v_buf, __pyx_v_d_ptr, __pyx_v_n);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":72
 *         d_ptr = data
 *         memcpy(buf, d_ptr, n)
 *         return 0             # <<<<<<<<<<<<<<
 * 
 *     cdef object read_string(self, size_t n, void **pp, int copy=True):
 */
    __pyx_r = 0;
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":74
 *         return 0
 * 
 *     cdef object read_string(self, size_t n, void **pp, int copy=True):             # <<<<<<<<<<<<<<
 *         """ Make new memory, wrap with object """
 *         data = self.fobj.read(n)
 */

  virtual  System::Object^ read_string(size_t __pyx_v_n, void **__pyx_v_pp, ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13GenericStream_read_string ^__pyx_optional_args) {
    int __pyx_v_copy = ((int)1);
    System::Object^ __pyx_v_data;
    System::Object^ __pyx_v_d_copy = nullptr;
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_t_3 = nullptr;
    Py_ssize_t __pyx_t_4;
    int __pyx_t_5;
    GenericStream^ __pyx_v_self = this;
    if (__pyx_optional_args) {
      if (__pyx_optional_args->__pyx_n > 0) {
        __pyx_v_copy = __pyx_optional_args->copy;
      }
    }
    __pyx_v_data = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":76
 *     cdef object read_string(self, size_t n, void **pp, int copy=True):
 *         """ Make new memory, wrap with object """
 *         data = self.fobj.read(n)             # <<<<<<<<<<<<<<
 *         if PyBytes_Size(data) != n:
 *             raise IOError('could not read bytes')
 */
    __pyx_t_1 = __site_get_read_76_24->Target(__site_get_read_76_24, __pyx_v_self->fobj, __pyx_context);
    __pyx_t_2 = __pyx_v_n;
    __pyx_t_3 = __site_call1_76_29->Target(__site_call1_76_29, __pyx_context, __pyx_t_1, __pyx_t_2);
    __pyx_t_1 = nullptr;
    __pyx_t_2 = nullptr;
    __pyx_v_data = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":77
 *         """ Make new memory, wrap with object """
 *         data = self.fobj.read(n)
 *         if PyBytes_Size(data) != n:             # <<<<<<<<<<<<<<
 *             raise IOError('could not read bytes')
 *         if copy != True:
 */
    XXX skipping exception checks: __pyx_t_4 == -1
    __pyx_t_4 = PyBytes_Size(__pyx_v_data); 
    __pyx_t_5 = (__pyx_t_4 != __pyx_v_n);
    if (__pyx_t_5) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":78
 *         data = self.fobj.read(n)
 *         if PyBytes_Size(data) != n:
 *             raise IOError('could not read bytes')             # <<<<<<<<<<<<<<
 *         if copy != True:
 *            pp[0] = <void*>PyBytes_AS_STRING(data)
 */
      __pyx_t_3 = PythonOps::GetGlobal(__pyx_context, "IOError");
      __pyx_t_2 = __site_call1_78_25->Target(__site_call1_78_25, __pyx_context, __pyx_t_3, ((System::Object^)"could not read bytes"));
      __pyx_t_3 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":79
 *         if PyBytes_Size(data) != n:
 *             raise IOError('could not read bytes')
 *         if copy != True:             # <<<<<<<<<<<<<<
 *            pp[0] = <void*>PyBytes_AS_STRING(data)
 *            return data
 */
    __pyx_t_5 = (__pyx_v_copy != 1);
    if (__pyx_t_5) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":80
 *             raise IOError('could not read bytes')
 *         if copy != True:
 *            pp[0] = <void*>PyBytes_AS_STRING(data)             # <<<<<<<<<<<<<<
 *            return data
 *         cdef object d_copy = pyalloc_v(n, pp)
 */
      (__pyx_v_pp[0]) = ((void *)PyBytes_AS_STRING(__pyx_v_data));

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":81
 *         if copy != True:
 *            pp[0] = <void*>PyBytes_AS_STRING(data)
 *            return data             # <<<<<<<<<<<<<<
 *         cdef object d_copy = pyalloc_v(n, pp)
 *         memcpy(pp[0], PyBytes_AS_STRING(data), n)
 */
      __pyx_r = __pyx_v_data;
      goto __pyx_L0;
      goto __pyx_L4;
    }
    __pyx_L4:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":82
 *            pp[0] = <void*>PyBytes_AS_STRING(data)
 *            return data
 *         cdef object d_copy = pyalloc_v(n, pp)             # <<<<<<<<<<<<<<
 *         memcpy(pp[0], PyBytes_AS_STRING(data), n)
 *         return d_copy
 */
    __pyx_t_2 = pyalloc_v(__pyx_v_n, __pyx_v_pp); 
    __pyx_v_d_copy = __pyx_t_2;
    __pyx_t_2 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":83
 *            return data
 *         cdef object d_copy = pyalloc_v(n, pp)
 *         memcpy(pp[0], PyBytes_AS_STRING(data), n)             # <<<<<<<<<<<<<<
 *         return d_copy
 * 
 */
    memcpy((__pyx_v_pp[0]), PyBytes_AS_STRING(__pyx_v_data), __pyx_v_n);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":84
 *         cdef object d_copy = pyalloc_v(n, pp)
 *         memcpy(pp[0], PyBytes_AS_STRING(data), n)
 *         return d_copy             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_r = __pyx_v_d_copy;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":87
 * 
 * 
 * cdef class cStringStream(GenericStream):             # <<<<<<<<<<<<<<
 * 
 *     cpdef int seek(self, long int offset, int whence=0) except -1:
 */
[PythonType]
ref struct cStringStream : GenericStream {

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":89
 * cdef class cStringStream(GenericStream):
 * 
 *     cpdef int seek(self, long int offset, int whence=0) except -1:             # <<<<<<<<<<<<<<
 *         cdef char *ptr
 *         if whence == 1 and offset >=0: # forward, from here
 */

  virtual  int seek(long __pyx_v_offset, ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13cStringStream_seek ^__pyx_optional_args) {
    int __pyx_v_whence = ((int)0);
    char *__pyx_v_ptr;
    int __pyx_r;
    int __pyx_t_1;
    int __pyx_t_2;
    int __pyx_t_3;
    int __pyx_t_4;
    ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13GenericStream_seek __pyx_t_5;
    cStringStream^ __pyx_v_self = this;
    if (__pyx_optional_args) {
      if (__pyx_optional_args->__pyx_n > 0) {
        __pyx_v_whence = __pyx_optional_args->whence;
      }
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":91
 *     cpdef int seek(self, long int offset, int whence=0) except -1:
 *         cdef char *ptr
 *         if whence == 1 and offset >=0: # forward, from here             # <<<<<<<<<<<<<<
 *             StringIO_cread(self.fobj, &ptr, offset)
 *             return 0
 */
    __pyx_t_1 = (__pyx_v_whence == 1);
    if (__pyx_t_1) {
      __pyx_t_2 = (__pyx_v_offset >= 0);
      __pyx_t_3 = __pyx_t_2;
    } else {
      __pyx_t_3 = __pyx_t_1;
    }
    if (__pyx_t_3) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":92
 *         cdef char *ptr
 *         if whence == 1 and offset >=0: # forward, from here
 *             StringIO_cread(self.fobj, &ptr, offset)             # <<<<<<<<<<<<<<
 *             return 0
 *         else: # use python interface
 */
      PycStringIO->cread(__pyx_v_self->fobj, (&__pyx_v_ptr), __pyx_v_offset);

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":93
 *         if whence == 1 and offset >=0: # forward, from here
 *             StringIO_cread(self.fobj, &ptr, offset)
 *             return 0             # <<<<<<<<<<<<<<
 *         else: # use python interface
 *             return GenericStream.seek(self, offset, whence)
 */
      __pyx_r = 0;
      goto __pyx_L0;
      goto __pyx_L3;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":95
 *             return 0
 *         else: # use python interface
 *             return GenericStream.seek(self, offset, whence)             # <<<<<<<<<<<<<<
 * 
 *     cdef int read_into(self, void *buf, size_t n) except -1:
 */
      __pyx_t_5.__pyx_n = 1;
      __pyx_t_5.whence = __pyx_v_whence;
      XXX skipping exception checks: __pyx_t_4 == -1
      __pyx_t_4 = __pyx_vtabptr_5scipy_2io_6matlab_7streams_GenericStream->seek(((GenericStream^)__pyx_v_self), __pyx_v_offset, 1, %__pyx_t_5); 
      __pyx_r = __pyx_t_4;
      goto __pyx_L0;
    }
    __pyx_L3:;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":97
 *             return GenericStream.seek(self, offset, whence)
 * 
 *     cdef int read_into(self, void *buf, size_t n) except -1:             # <<<<<<<<<<<<<<
 *         """ Read n bytes from stream into pre-allocated buffer `buf`
 *         """
 */

  virtual  int read_into(void *__pyx_v_buf, size_t __pyx_v_n) override {
    size_t __pyx_v_n_red;
    char *__pyx_v_d_ptr;
    int __pyx_r;
    int __pyx_t_1;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_t_3 = nullptr;
    cStringStream^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":103
 *             size_t n_red
 *             char* d_ptr
 *         n_red = StringIO_cread(self.fobj, &d_ptr, n)             # <<<<<<<<<<<<<<
 *         if n_red != n:
 *             raise IOError('could not read bytes')
 */
    __pyx_v_n_red = PycStringIO->cread(__pyx_v_self->fobj, (&__pyx_v_d_ptr), __pyx_v_n);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":104
 *             char* d_ptr
 *         n_red = StringIO_cread(self.fobj, &d_ptr, n)
 *         if n_red != n:             # <<<<<<<<<<<<<<
 *             raise IOError('could not read bytes')
 *         memcpy(buf, <void *>d_ptr, n)
 */
    __pyx_t_1 = (__pyx_v_n_red != __pyx_v_n);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":105
 *         n_red = StringIO_cread(self.fobj, &d_ptr, n)
 *         if n_red != n:
 *             raise IOError('could not read bytes')             # <<<<<<<<<<<<<<
 *         memcpy(buf, <void *>d_ptr, n)
 *         return 0
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "IOError");
      __pyx_t_3 = __site_call1_105_25->Target(__site_call1_105_25, __pyx_context, __pyx_t_2, ((System::Object^)"could not read bytes"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":106
 *         if n_red != n:
 *             raise IOError('could not read bytes')
 *         memcpy(buf, <void *>d_ptr, n)             # <<<<<<<<<<<<<<
 *         return 0
 * 
 */
    memcpy(__pyx_v_buf, ((void *)__pyx_v_d_ptr), __pyx_v_n);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":107
 *             raise IOError('could not read bytes')
 *         memcpy(buf, <void *>d_ptr, n)
 *         return 0             # <<<<<<<<<<<<<<
 * 
 *     cdef object read_string(self, size_t n, void **pp, int copy=True):
 */
    __pyx_r = 0;
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":109
 *         return 0
 * 
 *     cdef object read_string(self, size_t n, void **pp, int copy=True):             # <<<<<<<<<<<<<<
 *         """ Make new memory, wrap with object
 * 
 */

  virtual  System::Object^ read_string(size_t __pyx_v_n, void **__pyx_v_pp, ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13cStringStream_read_string ^__pyx_optional_args) {
    int __pyx_v_copy = ((int)1);
    char *__pyx_v_d_ptr;
    System::Object^ __pyx_v_obj;
    size_t __pyx_v_n_red;
    System::Object^ __pyx_r = nullptr;
    int __pyx_t_1;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_t_3 = nullptr;
    cStringStream^ __pyx_v_self = this;
    if (__pyx_optional_args) {
      if (__pyx_optional_args->__pyx_n > 0) {
        __pyx_v_copy = __pyx_optional_args->copy;
      }
    }
    __pyx_v_obj = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":117
 *             char *d_ptr
 *             object obj
 *         cdef size_t n_red = StringIO_cread(self.fobj, &d_ptr, n)             # <<<<<<<<<<<<<<
 *         if n_red != n:
 *             raise IOError('could not read bytes')
 */
    __pyx_v_n_red = PycStringIO->cread(__pyx_v_self->fobj, (&__pyx_v_d_ptr), __pyx_v_n);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":118
 *             object obj
 *         cdef size_t n_red = StringIO_cread(self.fobj, &d_ptr, n)
 *         if n_red != n:             # <<<<<<<<<<<<<<
 *             raise IOError('could not read bytes')
 *         obj = pyalloc_v(n, pp)
 */
    __pyx_t_1 = (__pyx_v_n_red != __pyx_v_n);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":119
 *         cdef size_t n_red = StringIO_cread(self.fobj, &d_ptr, n)
 *         if n_red != n:
 *             raise IOError('could not read bytes')             # <<<<<<<<<<<<<<
 *         obj = pyalloc_v(n, pp)
 *         memcpy(pp[0], d_ptr, n)
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "IOError");
      __pyx_t_3 = __site_call1_119_25->Target(__site_call1_119_25, __pyx_context, __pyx_t_2, ((System::Object^)"could not read bytes"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":120
 *         if n_red != n:
 *             raise IOError('could not read bytes')
 *         obj = pyalloc_v(n, pp)             # <<<<<<<<<<<<<<
 *         memcpy(pp[0], d_ptr, n)
 *         return obj
 */
    __pyx_t_3 = pyalloc_v(__pyx_v_n, __pyx_v_pp); 
    __pyx_v_obj = __pyx_t_3;
    __pyx_t_3 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":121
 *             raise IOError('could not read bytes')
 *         obj = pyalloc_v(n, pp)
 *         memcpy(pp[0], d_ptr, n)             # <<<<<<<<<<<<<<
 *         return obj
 * 
 */
    memcpy((__pyx_v_pp[0]), __pyx_v_d_ptr, __pyx_v_n);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":122
 *         obj = pyalloc_v(n, pp)
 *         memcpy(pp[0], d_ptr, n)
 *         return obj             # <<<<<<<<<<<<<<
 * 
 * 
 */
    __pyx_r = __pyx_v_obj;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":125
 * 
 * 
 * cdef class FileStream(GenericStream):             # <<<<<<<<<<<<<<
 *     cdef FILE* file
 * 
 */
[PythonType]
ref struct FileStream : GenericStream {
  FILE *file;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":128
 *     cdef FILE* file
 * 
 *     def __init__(self, fobj):             # <<<<<<<<<<<<<<
 *         self.fobj = fobj
 *         self.file = npy_PyFile_Dup(fobj, "rb")
 */

  [SpecialName]
  virtual int __init__(System::Object^ fobj) override {
    System::Object^ __pyx_v_fobj = nullptr;
    int __pyx_r;
    FILE *__pyx_t_1;
    System::Object^ __pyx_v_self = this;
    __pyx_v_fobj = fobj;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":129
 * 
 *     def __init__(self, fobj):
 *         self.fobj = fobj             # <<<<<<<<<<<<<<
 *         self.file = npy_PyFile_Dup(fobj, "rb")
 * 
 */
    ((FileStream^)__pyx_v_self)->fobj = __pyx_v_fobj;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":130
 *     def __init__(self, fobj):
 *         self.fobj = fobj
 *         self.file = npy_PyFile_Dup(fobj, "rb")             # <<<<<<<<<<<<<<
 * 
 *     def __del__(self):
 */
    XXX skipping exception checks: __pyx_t_1 == NULL
    __pyx_t_1 = npy_PyFile_Dup(__pyx_v_fobj, __pyx_k__rb); 
    ((FileStream^)__pyx_v_self)->file = __pyx_t_1;

    __pyx_r = 0;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":132
 *         self.file = npy_PyFile_Dup(fobj, "rb")
 * 
 *     def __del__(self):             # <<<<<<<<<<<<<<
 *         npy_PyFile_DupClose(self.fobj, self.file)
 * 
 */

  virtual System::Object^ __del__() {
    System::Object^ __pyx_r = nullptr;
    int __pyx_t_1;
    System::Object^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":133
 * 
 *     def __del__(self):
 *         npy_PyFile_DupClose(self.fobj, self.file)             # <<<<<<<<<<<<<<
 * 
 *     cpdef int seek(self, long int offset, int whence=0) except -1:
 */
    XXX skipping exception checks: __pyx_t_1 == -1
    __pyx_t_1 = npy_PyFile_DupClose(((FileStream^)__pyx_v_self)->fobj, ((FileStream^)__pyx_v_self)->file); 

    __pyx_r = nullptr;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":135
 *         npy_PyFile_DupClose(self.fobj, self.file)
 * 
 *     cpdef int seek(self, long int offset, int whence=0) except -1:             # <<<<<<<<<<<<<<
 *         cdef int ret
 *         """ move `offset` bytes in stream
 */

  virtual  int seek(long __pyx_v_offset, ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_10FileStream_seek ^__pyx_optional_args) {
    int __pyx_v_whence = ((int)0);
    int __pyx_v_ret;
    int __pyx_r;
    System::Object^ __pyx_t_1 = nullptr;
    System::Object^ __pyx_t_2 = nullptr;
    FileStream^ __pyx_v_self = this;
    if (__pyx_optional_args) {
      if (__pyx_optional_args->__pyx_n > 0) {
        __pyx_v_whence = __pyx_optional_args->whence;
      }
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":155
 *         ret : int
 *         """
 *         ret = fseek(self.file, offset, whence)             # <<<<<<<<<<<<<<
 *         if ret:
 *             raise IOError('Failed seek')
 */
    __pyx_v_ret = fseek(__pyx_v_self->file, __pyx_v_offset, __pyx_v_whence);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":156
 *         """
 *         ret = fseek(self.file, offset, whence)
 *         if ret:             # <<<<<<<<<<<<<<
 *             raise IOError('Failed seek')
 *             return -1
 */
    if (__pyx_v_ret) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":157
 *         ret = fseek(self.file, offset, whence)
 *         if ret:
 *             raise IOError('Failed seek')             # <<<<<<<<<<<<<<
 *             return -1
 *         return ret
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "IOError");
      __pyx_t_2 = __site_call1_157_25->Target(__site_call1_157_25, __pyx_context, __pyx_t_1, ((System::Object^)"Failed seek"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_2, nullptr, nullptr);
      __pyx_t_2 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":158
 *         if ret:
 *             raise IOError('Failed seek')
 *             return -1             # <<<<<<<<<<<<<<
 *         return ret
 * 
 */
      __pyx_r = -1;
      goto __pyx_L0;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":159
 *             raise IOError('Failed seek')
 *             return -1
 *         return ret             # <<<<<<<<<<<<<<
 * 
 *     cpdef long int tell(self):
 */
    __pyx_r = __pyx_v_ret;
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":161
 *         return ret
 * 
 *     cpdef long int tell(self):             # <<<<<<<<<<<<<<
 *         return ftell(self.file)
 * 
 */

  virtual  long tell(void) override {
    long __pyx_r;
    FileStream^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":162
 * 
 *     cpdef long int tell(self):
 *         return ftell(self.file)             # <<<<<<<<<<<<<<
 * 
 *     cdef int read_into(self, void *buf, size_t n) except -1:
 */
    __pyx_r = ftell(__pyx_v_self->file);
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":164
 *         return ftell(self.file)
 * 
 *     cdef int read_into(self, void *buf, size_t n) except -1:             # <<<<<<<<<<<<<<
 *         """ Read n bytes from stream into pre-allocated buffer `buf`
 *         """
 */

  virtual  int read_into(void *__pyx_v_buf, size_t __pyx_v_n) override {
    size_t __pyx_v_n_red;
    int __pyx_r;
    int __pyx_t_1;
    System::Object^ __pyx_t_2 = nullptr;
    System::Object^ __pyx_t_3 = nullptr;
    FileStream^ __pyx_v_self = this;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":170
 *             size_t n_red
 *             char* d_ptr
 *         n_red = fread(buf, 1, n, self.file)             # <<<<<<<<<<<<<<
 *         if n_red != n:
 *             raise IOError('Could not read bytes')
 */
    __pyx_v_n_red = fread(__pyx_v_buf, 1, __pyx_v_n, __pyx_v_self->file);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":171
 *             char* d_ptr
 *         n_red = fread(buf, 1, n, self.file)
 *         if n_red != n:             # <<<<<<<<<<<<<<
 *             raise IOError('Could not read bytes')
 *             return -1
 */
    __pyx_t_1 = (__pyx_v_n_red != __pyx_v_n);
    if (__pyx_t_1) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":172
 *         n_red = fread(buf, 1, n, self.file)
 *         if n_red != n:
 *             raise IOError('Could not read bytes')             # <<<<<<<<<<<<<<
 *             return -1
 *         return 0
 */
      __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "IOError");
      __pyx_t_3 = __site_call1_172_25->Target(__site_call1_172_25, __pyx_context, __pyx_t_2, ((System::Object^)"Could not read bytes"));
      __pyx_t_2 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":173
 *         if n_red != n:
 *             raise IOError('Could not read bytes')
 *             return -1             # <<<<<<<<<<<<<<
 *         return 0
 * 
 */
      __pyx_r = -1;
      goto __pyx_L0;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":174
 *             raise IOError('Could not read bytes')
 *             return -1
 *         return 0             # <<<<<<<<<<<<<<
 * 
 *     cdef object read_string(self, size_t n, void **pp, int copy=True):
 */
    __pyx_r = 0;
    goto __pyx_L0;

    __pyx_r = 0;
    __pyx_L0:;
    return __pyx_r;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":176
 *         return 0
 * 
 *     cdef object read_string(self, size_t n, void **pp, int copy=True):             # <<<<<<<<<<<<<<
 *         """ Make new memory, wrap with object """
 *         cdef object obj = pyalloc_v(n, pp)
 */

  virtual  System::Object^ read_string(size_t __pyx_v_n, void **__pyx_v_pp, ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_10FileStream_read_string ^__pyx_optional_args) {
    int __pyx_v_copy = ((int)1);
    System::Object^ __pyx_v_obj = nullptr;
    size_t __pyx_v_n_red;
    System::Object^ __pyx_r = nullptr;
    System::Object^ __pyx_t_1 = nullptr;
    int __pyx_t_2;
    System::Object^ __pyx_t_3 = nullptr;
    FileStream^ __pyx_v_self = this;
    if (__pyx_optional_args) {
      if (__pyx_optional_args->__pyx_n > 0) {
        __pyx_v_copy = __pyx_optional_args->copy;
      }
    }

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":178
 *     cdef object read_string(self, size_t n, void **pp, int copy=True):
 *         """ Make new memory, wrap with object """
 *         cdef object obj = pyalloc_v(n, pp)             # <<<<<<<<<<<<<<
 *         cdef size_t n_red = fread(pp[0], 1, n, self.file)
 *         if n_red != n:
 */
    __pyx_t_1 = pyalloc_v(__pyx_v_n, __pyx_v_pp); 
    __pyx_v_obj = __pyx_t_1;
    __pyx_t_1 = nullptr;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":179
 *         """ Make new memory, wrap with object """
 *         cdef object obj = pyalloc_v(n, pp)
 *         cdef size_t n_red = fread(pp[0], 1, n, self.file)             # <<<<<<<<<<<<<<
 *         if n_red != n:
 *             raise IOError('could not read bytes')
 */
    __pyx_v_n_red = fread((__pyx_v_pp[0]), 1, __pyx_v_n, __pyx_v_self->file);

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":180
 *         cdef object obj = pyalloc_v(n, pp)
 *         cdef size_t n_red = fread(pp[0], 1, n, self.file)
 *         if n_red != n:             # <<<<<<<<<<<<<<
 *             raise IOError('could not read bytes')
 *         return obj
 */
    __pyx_t_2 = (__pyx_v_n_red != __pyx_v_n);
    if (__pyx_t_2) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":181
 *         cdef size_t n_red = fread(pp[0], 1, n, self.file)
 *         if n_red != n:
 *             raise IOError('could not read bytes')             # <<<<<<<<<<<<<<
 *         return obj
 * 
 */
      __pyx_t_1 = PythonOps::GetGlobal(__pyx_context, "IOError");
      __pyx_t_3 = __site_call1_181_25->Target(__site_call1_181_25, __pyx_context, __pyx_t_1, ((System::Object^)"could not read bytes"));
      __pyx_t_1 = nullptr;
      throw PythonOps::MakeException(__pyx_context, __pyx_t_3, nullptr, nullptr);
      __pyx_t_3 = nullptr;
      goto __pyx_L3;
    }
    __pyx_L3:;

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":182
 *         if n_red != n:
 *             raise IOError('could not read bytes')
 *         return obj             # <<<<<<<<<<<<<<
 * 
 * def _read_into(GenericStream st, size_t n):
 */
    __pyx_r = __pyx_v_obj;
    goto __pyx_L0;

    __pyx_r = nullptr;
    __pyx_L0:;
    return __pyx_r;
  }
};

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":184
 *         return obj
 * 
 * def _read_into(GenericStream st, size_t n):             # <<<<<<<<<<<<<<
 *     # for testing only.  Use st.read instead
 *     cdef char * d_ptr
 */

static System::Object^ _read_into(System::Object^ st, System::Object^ n) {
  GenericStream^ __pyx_v_st = nullptr;
  size_t __pyx_v_n;
  char *__pyx_v_d_ptr;
  System::Object^ __pyx_v_my_str;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  System::Object^ __pyx_t_2 = nullptr;
  char *__pyx_t_3;
  System::IntPtr __pyx_t_4;
  int __pyx_t_5;
  __pyx_v_st = ((GenericStream^)st);
  __pyx_v_n = __site_cvt_184_0->Target(__site_cvt_184_0, n);
  __pyx_v_my_str = nullptr;
  if (unlikely(dynamic_cast<__pyx_obj_5scipy_2io_6matlab_7streams_GenericStream^>(__pyx_v_st) == nullptr)) {
    throw PythonOps::TypeError("Argument 'st' has incorrect type");
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":187
 *     # for testing only.  Use st.read instead
 *     cdef char * d_ptr
 *     my_str = b' ' * n             # <<<<<<<<<<<<<<
 *     d_ptr = my_str
 *     st.read_into(d_ptr, n)
 */
  __pyx_t_1 = __pyx_v_n;
  __pyx_t_2 = __site_op_mul_187_18->Target(__site_op_mul_187_18, ((System::Object^)PythonOps::MakeBytes(gcnew array<unsigned char>{32})), __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_my_str = __pyx_t_2;
  __pyx_t_2 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":188
 *     cdef char * d_ptr
 *     my_str = b' ' * n
 *     d_ptr = my_str             # <<<<<<<<<<<<<<
 *     st.read_into(d_ptr, n)
 *     return my_str
 */
  __pyx_t_4 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(((System::Object^)__pyx_v_my_str)));
  __pyx_t_3 = static_cast<char *>(__pyx_t_4.ToPointer());
  __pyx_v_d_ptr = __pyx_t_3;
  InteropServices::Marshal::FreeHGlobal(__pyx_t_4);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":189
 *     my_str = b' ' * n
 *     d_ptr = my_str
 *     st.read_into(d_ptr, n)             # <<<<<<<<<<<<<<
 *     return my_str
 * 
 */
  XXX skipping exception checks: __pyx_t_5 == -1
  __pyx_t_5 = __pyx_v_st->read_into(__pyx_v_d_ptr, __pyx_v_n); 

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":190
 *     d_ptr = my_str
 *     st.read_into(d_ptr, n)
 *     return my_str             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_my_str);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":193
 * 
 * 
 * def _read_string(GenericStream st, size_t n):             # <<<<<<<<<<<<<<
 *     # for testing only.  Use st.read instead
 *     cdef char *d_ptr
 */

static System::Object^ _read_string(System::Object^ st, System::Object^ n) {
  GenericStream^ __pyx_v_st = nullptr;
  size_t __pyx_v_n;
  char *__pyx_v_d_ptr;
  System::Object^ __pyx_v_obj = nullptr;
  System::Object^ __pyx_v_my_str;
  char *__pyx_v_mys_ptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;
  ref struct __pyx_opt_args_5scipy_2io_6matlab_7streams_13GenericStream_read_string __pyx_t_2;
  System::Object^ __pyx_t_3 = nullptr;
  char *__pyx_t_4;
  System::IntPtr __pyx_t_5;
  __pyx_v_st = ((GenericStream^)st);
  __pyx_v_n = __site_cvt_193_0->Target(__site_cvt_193_0, n);
  __pyx_v_my_str = nullptr;
  if (unlikely(dynamic_cast<__pyx_obj_5scipy_2io_6matlab_7streams_GenericStream^>(__pyx_v_st) == nullptr)) {
    throw PythonOps::TypeError("Argument 'st' has incorrect type");
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":196
 *     # for testing only.  Use st.read instead
 *     cdef char *d_ptr
 *     cdef object obj = st.read_string(n, <void **>&d_ptr, True)             # <<<<<<<<<<<<<<
 *     my_str = b'A' * n
 *     cdef char *mys_ptr = my_str
 */
  __pyx_t_2.__pyx_n = 1;
  __pyx_t_2.copy = 1;
  __pyx_t_1 = __pyx_v_st->read_string(__pyx_v_n, ((void **)(&__pyx_v_d_ptr)), %__pyx_t_2); 
  __pyx_v_obj = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":197
 *     cdef char *d_ptr
 *     cdef object obj = st.read_string(n, <void **>&d_ptr, True)
 *     my_str = b'A' * n             # <<<<<<<<<<<<<<
 *     cdef char *mys_ptr = my_str
 *     memcpy(mys_ptr, d_ptr, n)
 */
  __pyx_t_1 = __pyx_v_n;
  __pyx_t_3 = __site_op_mul_197_18->Target(__site_op_mul_197_18, ((System::Object^)PythonOps::MakeBytes(gcnew array<unsigned char>{65})), __pyx_t_1);
  __pyx_t_1 = nullptr;
  __pyx_v_my_str = __pyx_t_3;
  __pyx_t_3 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":198
 *     cdef object obj = st.read_string(n, <void **>&d_ptr, True)
 *     my_str = b'A' * n
 *     cdef char *mys_ptr = my_str             # <<<<<<<<<<<<<<
 *     memcpy(mys_ptr, d_ptr, n)
 *     return my_str
 */
  __pyx_t_5 = InteropServices::Marshal::StringToHGlobalAnsi(dynamic_cast<System::String^>(((System::Object^)__pyx_v_my_str)));
  __pyx_t_4 = static_cast<char *>(__pyx_t_5.ToPointer());
  __pyx_v_mys_ptr = __pyx_t_4;
  InteropServices::Marshal::FreeHGlobal(__pyx_t_5);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":199
 *     my_str = b'A' * n
 *     cdef char *mys_ptr = my_str
 *     memcpy(mys_ptr, d_ptr, n)             # <<<<<<<<<<<<<<
 *     return my_str
 * 
 */
  memcpy(__pyx_v_mys_ptr, __pyx_v_d_ptr, __pyx_v_n);

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":200
 *     cdef char *mys_ptr = my_str
 *     memcpy(mys_ptr, d_ptr, n)
 *     return my_str             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = ((System::Object^)__pyx_v_my_str);
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":203
 * 
 * 
 * cpdef GenericStream make_stream(object fobj):             # <<<<<<<<<<<<<<
 *     """ Make stream of correct type for file-like `fobj`
 *     """
 */

static  GenericStream^ make_stream(System::Object^ __pyx_v_fobj) {
  GenericStream^ __pyx_r = nullptr;
  int __pyx_t_1;
  System::Object^ __pyx_t_2 = nullptr;
  System::Object^ __pyx_t_3 = nullptr;
  int __pyx_t_4;
  int __pyx_t_5;
  int __pyx_t_6;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":206
 *     """ Make stream of correct type for file-like `fobj`
 *     """
 *     if npy_PyFile_Check(fobj):             # <<<<<<<<<<<<<<
 *         if sys.version_info[0] >= 3:
 *             return GenericStream(fobj)
 */
  __pyx_t_1 = npy_PyFile_Check(__pyx_v_fobj);
  if (__pyx_t_1) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":207
 *     """
 *     if npy_PyFile_Check(fobj):
 *         if sys.version_info[0] >= 3:             # <<<<<<<<<<<<<<
 *             return GenericStream(fobj)
 *         else:
 */
    __pyx_t_2 = PythonOps::GetGlobal(__pyx_context, "sys");
    __pyx_t_3 = __site_get_version_info_207_14->Target(__site_get_version_info_207_14, __pyx_t_2, __pyx_context);
    __pyx_t_2 = nullptr;
    __pyx_t_2 = __site_getindex_207_27->Target(__site_getindex_207_27, __pyx_t_3, ((System::Object^)0));
    __pyx_t_3 = nullptr;
    __pyx_t_3 = __site_op_ge_207_31->Target(__site_op_ge_207_31, __pyx_t_2, __pyx_int_3);
    __pyx_t_2 = nullptr;
    __pyx_t_4 = __site_istrue_207_31->Target(__site_istrue_207_31, __pyx_t_3);
    __pyx_t_3 = nullptr;
    if (__pyx_t_4) {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":208
 *     if npy_PyFile_Check(fobj):
 *         if sys.version_info[0] >= 3:
 *             return GenericStream(fobj)             # <<<<<<<<<<<<<<
 *         else:
 *             return FileStream(fobj)
 */
      __pyx_t_3 = __site_call1_208_32->Target(__site_call1_208_32, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_2io_6matlab_7streams_GenericStream)), __pyx_v_fobj);
      __pyx_r = ((GenericStream^)__pyx_t_3);
      __pyx_t_3 = nullptr;
      goto __pyx_L0;
      goto __pyx_L4;
    }
    /*else*/ {

      /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":210
 *             return GenericStream(fobj)
 *         else:
 *             return FileStream(fobj)             # <<<<<<<<<<<<<<
 *     elif PycStringIO_InputCheck(fobj) or PycStringIO_OutputCheck(fobj):
 *         return cStringStream(fobj)
 */
      __pyx_t_3 = __site_call1_210_29->Target(__site_call1_210_29, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_2io_6matlab_7streams_FileStream)), __pyx_v_fobj);
      __pyx_r = ((GenericStream^)__pyx_t_3);
      __pyx_t_3 = nullptr;
      goto __pyx_L0;
    }
    __pyx_L4:;
    goto __pyx_L3;
  }

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":211
 *         else:
 *             return FileStream(fobj)
 *     elif PycStringIO_InputCheck(fobj) or PycStringIO_OutputCheck(fobj):             # <<<<<<<<<<<<<<
 *         return cStringStream(fobj)
 *     return GenericStream(fobj)
 */
  __pyx_t_4 = PycStringIO_InputCheck(__pyx_v_fobj);
  if (!__pyx_t_4) {
    __pyx_t_5 = PycStringIO_OutputCheck(__pyx_v_fobj);
    __pyx_t_6 = __pyx_t_5;
  } else {
    __pyx_t_6 = __pyx_t_4;
  }
  if (__pyx_t_6) {

    /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":212
 *             return FileStream(fobj)
 *     elif PycStringIO_InputCheck(fobj) or PycStringIO_OutputCheck(fobj):
 *         return cStringStream(fobj)             # <<<<<<<<<<<<<<
 *     return GenericStream(fobj)
 * 
 */
    __pyx_t_3 = __site_call1_212_28->Target(__site_call1_212_28, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_2io_6matlab_7streams_cStringStream)), __pyx_v_fobj);
    __pyx_r = ((GenericStream^)__pyx_t_3);
    __pyx_t_3 = nullptr;
    goto __pyx_L0;
    goto __pyx_L3;
  }
  __pyx_L3:;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":213
 *     elif PycStringIO_InputCheck(fobj) or PycStringIO_OutputCheck(fobj):
 *         return cStringStream(fobj)
 *     return GenericStream(fobj)             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_t_3 = __site_call1_213_24->Target(__site_call1_213_24, __pyx_context, ((System::Object^)((System::Object^)__pyx_ptype_5scipy_2io_6matlab_7streams_GenericStream)), __pyx_v_fobj);
  __pyx_r = ((GenericStream^)__pyx_t_3);
  __pyx_t_3 = nullptr;
  goto __pyx_L0;

  __pyx_r = nullptr;
  __pyx_L0:;
  return __pyx_r;
}

/* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\pyalloc.pxd":8
 * 
 * # Function to allocate, wrap memory via Python string creation
 * cdef inline object pyalloc_v(Py_ssize_t n, void **pp):             # <<<<<<<<<<<<<<
 *     cdef object ob = PyBytes_FromStringAndSize(NULL, n)
 *     pp[0] = <void*> PyBytes_AS_STRING(ob)
 */

static CYTHON_INLINE System::Object^ pyalloc_v(Py_ssize_t __pyx_v_n, void **__pyx_v_pp) {
  System::Object^ __pyx_v_ob = nullptr;
  System::Object^ __pyx_r = nullptr;
  System::Object^ __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\pyalloc.pxd":9
 * # Function to allocate, wrap memory via Python string creation
 * cdef inline object pyalloc_v(Py_ssize_t n, void **pp):
 *     cdef object ob = PyBytes_FromStringAndSize(NULL, n)             # <<<<<<<<<<<<<<
 *     pp[0] = <void*> PyBytes_AS_STRING(ob)
 *     return ob
 */
  __pyx_t_1 = ((System::Object^)PyBytes_FromStringAndSize(NULL, __pyx_v_n)); 
  __pyx_v_ob = __pyx_t_1;
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\pyalloc.pxd":10
 * cdef inline object pyalloc_v(Py_ssize_t n, void **pp):
 *     cdef object ob = PyBytes_FromStringAndSize(NULL, n)
 *     pp[0] = <void*> PyBytes_AS_STRING(ob)             # <<<<<<<<<<<<<<
 *     return ob
 * 
 */
  (__pyx_v_pp[0]) = ((void *)PyBytes_AS_STRING(__pyx_v_ob));

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\pyalloc.pxd":11
 *     cdef object ob = PyBytes_FromStringAndSize(NULL, n)
 *     pp[0] = <void*> PyBytes_AS_STRING(ob)
 *     return ob             # <<<<<<<<<<<<<<
 * 
 * 
 */
  __pyx_r = __pyx_v_ob;
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
  __pyx_int_3 = 3;

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
  __site_get_seek_53_17 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "seek", false));
  __site_call2_53_22 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(2)));
  __site_get_tell_57_24 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "tell", false));
  __site_call0_57_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(0)));
  __site_cvt_long_57_29 = CallSite< System::Func< CallSite^, System::Object^, long >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, long::typeid, ConversionResultKind::ExplicitCast));
  __site_get_read_60_24 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "read", false));
  __site_call1_60_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_read_66_24 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "read", false));
  __site_call1_66_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_68_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_get_read_76_24 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "read", false));
  __site_call1_76_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_78_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_105_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_119_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_157_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_172_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_181_25 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_cvt_184_0 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_187_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_cvt_193_0 = CallSite< System::Func< CallSite^, System::Object^, size_t >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, size_t::typeid, ConversionResultKind::ExplicitCast));
  __site_op_mul_197_18 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::Multiply));
  __site_get_version_info_207_14 = CallSite< System::Func< CallSite^, System::Object^, CodeContext^, System::Object^ >^ >::Create(PythonOps::MakeGetAction(__pyx_context, "version_info", false));
  __site_getindex_207_27 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeGetIndexAction(__pyx_context, 2));
  __site_op_ge_207_31 = CallSite< System::Func< CallSite^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeBinaryOperationAction(__pyx_context, ExpressionType::GreaterThanOrEqual));
  __site_istrue_207_31 = CallSite< System::Func< CallSite^, System::Object^, bool >^ >::Create(PythonOps::MakeConversionAction(__pyx_context, bool::typeid, ConversionResultKind::ExplicitCast));
  __site_call1_208_32 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_210_29 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_212_28 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
  __site_call1_213_24 = CallSite< System::Func< CallSite^, CodeContext^, System::Object^, System::Object^, System::Object^ >^ >::Create(PythonOps::MakeInvokeAction(__pyx_context, CallSignature(1)));
}
[SpecialName]
static void PerformModuleReload(PythonContext^ context, PythonDictionary^ dict) {
  dict["__builtins__"] = context->BuiltinModuleInstance;
  __pyx_context = (gcnew ModuleContext(dict, context))->GlobalContext;
  __Pyx_InitSites(__pyx_context);
  __Pyx_InitGlobals();
  /*--- Type init code ---*/
  __pyx_ptype_5scipy_2io_6matlab_7streams_GenericStream = safe_cast<Types::PythonType^>(dict["GenericStream"]);
  __pyx_ptype_5scipy_2io_6matlab_7streams_cStringStream = safe_cast<Types::PythonType^>(dict["cStringStream"]);
  __pyx_ptype_5scipy_2io_6matlab_7streams_FileStream = safe_cast<Types::PythonType^>(dict["FileStream"]);
  /*--- Create function pointers ---*/
  /*--- Execution code ---*/
  System::Object^ __pyx_t_1 = nullptr;
  PythonDictionary^ __pyx_t_2;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":3
 * # -*- python -*- or near enough
 * 
 * import sys             # <<<<<<<<<<<<<<
 * 
 * from cpython cimport PyBytes_FromStringAndSize, \
 */
  __pyx_t_1 = LightExceptions::CheckAndThrow(PythonOps::ImportTop(__pyx_context, "sys", -1));
  PythonOps::SetGlobal(__pyx_context, "sys", __pyx_t_1);
  __pyx_t_1 = nullptr;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":44
 * 
 * # initialize cStringIO
 * PycString_IMPORT             # <<<<<<<<<<<<<<
 * 
 * 
 */
  PycString_IMPORT;

  /* "C:\Documents and Settings\Jason\Documents\Visual Studio 2010\Projects\scipy-refactor\scipy\io\matlab\streams.pyx":1
 * # -*- python -*- or near enough             # <<<<<<<<<<<<<<
 * 
 * import sys
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





































static Types::PythonType^ __pyx_ptype_5scipy_2io_6matlab_7streams_GenericStream = nullptr;
static Types::PythonType^ __pyx_ptype_5scipy_2io_6matlab_7streams_cStringStream = nullptr;
static Types::PythonType^ __pyx_ptype_5scipy_2io_6matlab_7streams_FileStream = nullptr;
/* Cython code section 'utility_code_def' */

/* Runtime support code */
/* Cython code section 'end' */
};
[assembly: PythonModule("scipy__io__matlab__streams", module_streams::typeid)];
};
