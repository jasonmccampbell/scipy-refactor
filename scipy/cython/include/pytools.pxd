# This lets you store a Python object in a place not managed by Python
# (store a managed object in a non-managed location) in a way that will
# work both for CPython and IronPython.

# To do this:
# Declare a variable (struct field, etc.) of type PYOBJPTR (for CPython, 
#     PYOBJPTR is equivalent to PyObject*)
# Initialize the location with INITASSIGNOBJECT or INITOBJECT
# Write to the location with ASSIGNOBJECT, read with READOBJECT
# When done with the location, deinitialize with DEINITOBJECT 
#     (very important!  otherwise you'll get memory leaks)

cdef extern from "pytools.h":
     ctypedef void *PYOBJPTR

     void INITASSIGNOBJECT(PYOBJPTR* ptr, obj)     
     void ASSIGNOBJECT(PYOBJPTR* ptr, obj)
     object READOBJECT(PYOBJPTR* ptr)
     void DEINITOBJECT(PYOBJPTR* ptr)

cdef inline INITOBJECT(PYOBJPTR* ptr):
     INITASSIGNOBJECT(ptr, None)


# Suppose you've got a C/Fortran function that calls a Cython
# callback.  You want exceptions in the callback to exit the C/Fortran
# function and return immediately to the Cython caller of the
# C/Fortran function.  (Note: this is a dangerous thing to want.
# Depending on how the C/Fortran function is written, this may cause
# memory leaks or worse (for instance, if the function manipulates a
# data structure, you may leave the data structure in an inconsistent
# state and cause a program crash sometime later).  But if you know
# that your C/Fortran function doesn't allocate memory or use
# persistent state, this is useful.)

# In CPython, the way to do this is to use setjmp/longjmp.  In
# IronPython for Microsoft .NET, setjmp/longjmp will not work, but you
# can just use normal exceptions -- they will propagate through
# C/Fortran functions.  Here, we provide some helper functions and a
# coding pattern that will let you write a single Cython source that
# will work with both models.

# First, the coding pattern.  We assume that there is a void* "cookie"
# associated with the callback, and that we will pass a pointer to an
# object of type foo_callback_cookie here.

# The Cython caller should look like this:

# cdef struct foo_callback_cookie:
#     ...
#     PYOBJPTR exn_info
#     cdef cb_jmp_buf jmp_buf
#     ...

#   ...
#   cdef foo_callback_cookie cookie
#   try:
#       if cb_setjmp(cookie.jmp_buf) == 0:
#           foo(..., cb_func, &cookie, ...) # call the C/Fortran function here
#           # IMPORTANT: Do not touch any Python objects between cb_setjmp
#           # and the function call!  (Otherwise you may leak memory.)
#           # Look at the C code Cython generates to make sure.
#       else:
#           exn_info = READOBJECT(&cookie.exn_info)
#           DEINITOBJECT(&cookie.exn_info)
#           raise exn_info[0], exn_info[1], exn_info[2]
#       ...
#       # You can put arbitrary code here, as long as it doesn't call longjmp()
#       # on cookie.jmp_buf
#   except ...:
#       ...

# (If you actually don't want to handle any exceptions here, you can leave
# off the try:/except:.)

# The callback should look something like this:

# cdef int cb_func(..., void *cookie):
#     # IMPORTANT: Do not touch any Python objects in this function!
#     # Instead, delegate immediately to another function, as shown.
#     # (Otherwise, you may leak memory.)
#     cdef int result
#     if cb_func_core(&result, ..., cookie) == 0:
#          return result
#     else:
#          cb_longjmp((<foo_callback_cookie*>cookie).jmp_buf, 1)
#
# cdef int cb_func_core(int *result, void *cookie):
#     try:
#         ...
#         result[0] = ...
#         return 0
#     except:
#         # Yes, we really do want to catch all exceptions here.
#         exn_info = sys.exn_info()
#         cb_reraise(exn_info)
#         INITASSIGNOBJECT((<foo_callback_cookie*>cookie).exn_info, exn_info)
#         return 1

# Here we give the implementation for the IronPython version of the
# above types and functions.

ctypedef int cb_jmp_buf

cdef inline int cb_setjmp(cb_jmp_buf buf):
    return 0

cdef inline void cb_longjmp(cb_jmp_buf buf, int v):
    pass

cdef inline cb_reraise(exn_info):
    raise exn_info[0], exn_info[1], exn_info[2]

# The CPython implementation would look like this:

# cdef extern from "setjmp.h":
#     ctypedef struct cb_jmp_buf "jmp_buf":
#         pass
    
#     int cb_setjmp "setjmp"(cb_jmp_buf env)
#     void cb_longjmp "longjmp"(cb_jmp_buf env, int val)

# cdef inline cb_reraise(exn_info): pass
