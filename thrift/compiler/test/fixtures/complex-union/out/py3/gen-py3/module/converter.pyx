
#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#



cdef shared_ptr[_fbthrift_ctypes.cComplexUnion] ComplexUnion_convert_to_cpp(object inst):
    return (<_fbthrift_ctypes.ComplexUnion?>inst)._cpp_obj


cdef object ComplexUnion_from_cpp(const shared_ptr[_fbthrift_ctypes.cComplexUnion]& c_struct):
    return _fbthrift_ctypes.ComplexUnion._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cListUnion] ListUnion_convert_to_cpp(object inst):
    return (<_fbthrift_ctypes.ListUnion?>inst)._cpp_obj


cdef object ListUnion_from_cpp(const shared_ptr[_fbthrift_ctypes.cListUnion]& c_struct):
    return _fbthrift_ctypes.ListUnion._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cDataUnion] DataUnion_convert_to_cpp(object inst):
    return (<_fbthrift_ctypes.DataUnion?>inst)._cpp_obj


cdef object DataUnion_from_cpp(const shared_ptr[_fbthrift_ctypes.cDataUnion]& c_struct):
    return _fbthrift_ctypes.DataUnion._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cVal] Val_convert_to_cpp(object inst):
    return (<_fbthrift_ctypes.Val?>inst)._cpp_obj


cdef object Val_from_cpp(const shared_ptr[_fbthrift_ctypes.cVal]& c_struct):
    return _fbthrift_ctypes.Val._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cValUnion] ValUnion_convert_to_cpp(object inst):
    return (<_fbthrift_ctypes.ValUnion?>inst)._cpp_obj


cdef object ValUnion_from_cpp(const shared_ptr[_fbthrift_ctypes.cValUnion]& c_struct):
    return _fbthrift_ctypes.ValUnion._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cVirtualComplexUnion] VirtualComplexUnion_convert_to_cpp(object inst):
    return (<_fbthrift_ctypes.VirtualComplexUnion?>inst)._cpp_obj


cdef object VirtualComplexUnion_from_cpp(const shared_ptr[_fbthrift_ctypes.cVirtualComplexUnion]& c_struct):
    return _fbthrift_ctypes.VirtualComplexUnion._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cNonCopyableStruct] NonCopyableStruct_convert_to_cpp(object inst):
    return (<_fbthrift_ctypes.NonCopyableStruct?>inst)._cpp_obj


cdef object NonCopyableStruct_from_cpp(const shared_ptr[_fbthrift_ctypes.cNonCopyableStruct]& c_struct):
    return _fbthrift_ctypes.NonCopyableStruct._fbthrift_create(c_struct)
cdef shared_ptr[_fbthrift_ctypes.cNonCopyableUnion] NonCopyableUnion_convert_to_cpp(object inst):
    return (<_fbthrift_ctypes.NonCopyableUnion?>inst)._cpp_obj


cdef object NonCopyableUnion_from_cpp(const shared_ptr[_fbthrift_ctypes.cNonCopyableUnion]& c_struct):
    return _fbthrift_ctypes.NonCopyableUnion._fbthrift_create(c_struct)