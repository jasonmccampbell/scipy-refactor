#ifdef __cplusplus_cli
struct callback_holder {
  void *handle;

  callback_holder() {
    handle = (void *)System::Runtime::InteropServices::GCHandle::operator System::IntPtr(System::Runtime::InteropServices::GCHandle::Alloc(nullptr));
  }
  ~callback_holder() {
    System::Runtime::InteropServices::GCHandle::operator GCHandle(System::IntPtr(handle)).Free();
  }

  void set(System::Object^ x) {
    System::Runtime::InteropServices::GCHandle::operator GCHandle(System::IntPtr(handle)).Target = x;
  }
};

#define set_callback_holder(ch, obj) ch.set(obj)

#define cookie_from_callback(ch) (ch.handle)

#define object_from_cookie(handle) System::Runtime::InteropServices::GCHandle::operator GCHandle(System::IntPtr(handle)).Target
#else
struct callback_holder {
  void *handle;
};
#define set_callback_holder(ch, obj) (ch).handle = (void *)(obj)
#define cookie_from_callback(ch) (ch).handle
#define object_from_cookie(obj) (PyObject*)(obj)
#endif
