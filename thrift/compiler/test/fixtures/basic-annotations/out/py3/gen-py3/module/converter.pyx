
#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#



cdef shared_ptr[_fbthrift_ctypes.cMyStructNestedAnnotation] MyStructNestedAnnotation_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.MyStructNestedAnnotation?>inst)._cpp_obj


cdef object MyStructNestedAnnotation_from_cpp(const shared_ptr[_fbthrift_ctypes.cMyStructNestedAnnotation]& c_struct):
    return _fbthrift_ctypes.MyStructNestedAnnotation._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cSecretStruct] SecretStruct_convert_to_cpp(object inst) except*:
    return (<_fbthrift_ctypes.SecretStruct?>inst)._cpp_obj


cdef object SecretStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.cSecretStruct]& c_struct):
    return _fbthrift_ctypes.SecretStruct._fbthrift_create(c_struct)
