#define PyIter_DATA(i) ((i)->dataptr)

#ifdef __cplusplus_cli

#define NpyIter_READOBJECT(iter) (*(System::IntPtr*)PyIter_DATA(iter) == System::IntPtr::Zero ? nullptr \
: System::Runtime::InteropServices::GCHandle::FromIntPtr(*(System::IntPtr*)PyIter_DATA(iter)).Target)

#define NpyIter_ASSIGNOBJECT(iter, obj) \
do { \
    if (*(System::IntPtr*)PyIter_DATA(iter) != System::IntPtr::Zero) { \
        System::Runtime::InteropServices::GCHandle::FromIntPtr(*(System::IntPtr*)PyIter_DATA(iter)).Free(); \
    } \
    *(System::IntPtr*)PyIter_DATA(iter) = System::Runtime::InteropServices::GCHandle::Alloc(obj).ToIntPtr(); \
} while (0)

#else

#define NpyIter_READOBJECT(iter) \
(Py_INCREF(*(PyObject**)PyIter_DATA(iter)), *(PyObject**)PyIter_DATA(iter))

#define NpyIter_ASSIGNOBJECT(iter, obj) \
do { \
    Py_XDECREF(*(PyObject**)PyIter_DATA(iter)); \
    Py_INCREF(obj); \
    *(PyObject**)PyIter_DATA(iter) = obj; \
} while (0)

#endif