#ifdef __cplusplus_cli

typedef System::IntPtr PYOBJPTR;

#define READOBJECT(ptr) (*(ptr) == System::IntPtr::Zero ? nullptr	\
   : System::Runtime::InteropServices::GCHandle::FromIntPtr(*(ptr)).Target)

#define ASSIGNOBJECT(ptr, obj) \
do { \
  if (*(ptr) != System::IntPtr::Zero) {					\
    System::Runtime::InteropServices::GCHandle::FromIntPtr(*(ptr)).Free(); \
  }									\
  *(ptr) = System::Runtime::InteropServices::GCHandle::ToIntPtr(System::Runtime::InteropServices::GCHandle::Alloc(obj)); \
} while (0)

#define INITASSIGNOBJECT(ptr, obj) \
  *(ptr) = System::Runtime::InteropServices::GCHandle::ToIntPtr(System::Runtime::InteropServices::GCHandle::Alloc(obj))

#define DEINITOBJECT(ptr) \
do { \
  if (*(ptr) != System::IntPtr::Zero) {					\
    System::Runtime::InteropServices::GCHandle::FromIntPtr(*(ptr)).Free(); \
  }									\
} while (0)


#else

typedef PyObject** PYOBJPTRPTR;

#define READOBJECT(ptr) \
  (Py_INCREF(*(ptr)), *(PyObject**)PyIter_DATA(iter))

#define ASSIGNOBJECT(ptr, obj) \
do { \
  Py_INCREF(obj);				\
  Py_XDECREF(*(ptr));				\
  *(ptr) = obj;					\
} while (0)

#define INITASSIGNOBJECT(ptr, obj) \
do { \
  Py_INCREF(obj);				\
  *(ptr) = obj;					\
} while (0)

#define DEINITOBJECT(ptr) Py_XDECREF(*(ptr))

#endif
