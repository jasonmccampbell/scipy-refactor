#define PyIter_DATA(i) ((i)->dataptr)

#ifdef __cplusplus_cli

typedef System::IntPtr* PYOBJPTRPTR;

#define READOBJECT(ptr) (*(ptr) == System::IntPtr::Zero ? nullptr	\
   : System::Runtime::InteropServices::GCHandle::FromIntPtr(*(ptr)).Target)

#define ASSIGNOBJECT(ptr, obj) \
do { \
  if (*(ptr) != System::IntPtr::Zero) {					\
    System::Runtime::InteropServices::GCHandle::FromIntPtr(*(ptr)).Free(); \
  }									\
  *(ptr) = System::Runtime::InteropServices::GCHandle::ToIntPtr(System::Runtime::InteropServices::GCHandle::Alloc(obj)); \
} while (0)

#else

typedef PyObject** PYOBJPTRPTR;

#define READOBJECT(ptr) \
  (Py_INCREF(*(ptr)), *(PyObject**)PyIter_DATA(iter))

#define ASSIGNOBJECT(ptr, obj) \
do { \
  Py_XDECREF(*(ptr));				\
  Py_INCREF(obj);				\
  *(ptr) = obj;					\
} while (0)

#endif

#define NpyIter_READOBJECT(iter) READOBJECT((PYOBJPTRPTR)(PyIter_DATA(iter)))
#define NpyIter_ASSIGNOBJECT(iter, obj) ASSIGNOBJECT((PYOBJPTRPTR)(PyIter_DATA(iter)), obj)
