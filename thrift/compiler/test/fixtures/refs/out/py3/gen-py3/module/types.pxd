#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/refs/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint16_t as cuint16_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.unordered_map cimport unordered_map as cumap
cimport folly.iobuf as _fbthrift_iobuf
from thrift.python.exceptions cimport cTException
from thrift.py3.types cimport (
    bstring,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    union_field_ref as __union_field_ref,
    get_union_field_value as __get_union_field_value,
)
from thrift.python.common cimport cThriftMetadata as __fbthrift_cThriftMetadata
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional


cimport module.types as _fbthrift_types
cimport module.types_fields as _fbthrift_types_fields
cimport module.cbindings as _module_cbindings

cdef extern from "thrift/compiler/test/fixtures/refs/gen-py3/module/types.h":
  pass



cdef class MyUnion(thrift.py3.types.Union):
    cdef shared_ptr[_module_cbindings.cMyUnion] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef readonly object type
    cdef readonly object value
    cdef _load_cache(MyUnion self)

    @staticmethod
    cdef unique_ptr[_module_cbindings.cMyUnion] _make_instance(
        _module_cbindings.cMyUnion* base_instance,
        object anInteger,
        str aString
    ) except *

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cMyUnion])



cdef class NonTriviallyDestructibleUnion(thrift.py3.types.Union):
    cdef shared_ptr[_module_cbindings.cNonTriviallyDestructibleUnion] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef readonly object type
    cdef readonly object value
    cdef _load_cache(NonTriviallyDestructibleUnion self)

    @staticmethod
    cdef unique_ptr[_module_cbindings.cNonTriviallyDestructibleUnion] _make_instance(
        _module_cbindings.cNonTriviallyDestructibleUnion* base_instance,
        object int_field
    ) except *

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cNonTriviallyDestructibleUnion])



cdef class MyField(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cMyField] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__MyField_FieldsSetter _fields_setter
    cdef inline object opt_value_impl(self)
    cdef inline object value_impl(self)
    cdef inline object req_value_impl(self)
    cdef inline object opt_enum_value_impl(self)
    cdef inline object enum_value_impl(self)
    cdef inline object req_enum_value_impl(self)
    cdef inline object opt_str_value_impl(self)
    cdef inline object str_value_impl(self)
    cdef inline object req_str_value_impl(self)
    cdef object __fbthrift_cached_opt_enum_value
    cdef object __fbthrift_cached_enum_value
    cdef object __fbthrift_cached_req_enum_value

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cMyField])



cdef class MyStruct(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cMyStruct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__MyStruct_FieldsSetter _fields_setter
    cdef inline object opt_ref_impl(self)
    cdef inline object ref_impl(self)
    cdef inline object req_ref_impl(self)
    cdef MyField __fbthrift_cached_opt_ref
    cdef MyField __fbthrift_cached_ref
    cdef MyField __fbthrift_cached_req_ref

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cMyStruct])



cdef class StructWithUnion(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithUnion] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithUnion_FieldsSetter _fields_setter
    cdef inline object u_impl(self)
    cdef inline object aDouble_impl(self)
    cdef inline object f_impl(self)
    cdef MyUnion __fbthrift_cached_u
    cdef MyField __fbthrift_cached_f

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithUnion])



cdef class RecursiveStruct(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cRecursiveStruct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__RecursiveStruct_FieldsSetter _fields_setter
    cdef inline object mes_impl(self)
    cdef object __fbthrift_cached_mes

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cRecursiveStruct])



cdef class StructWithContainers(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithContainers] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithContainers_FieldsSetter _fields_setter
    cdef inline object list_ref_impl(self)
    cdef inline object set_ref_impl(self)
    cdef inline object map_ref_impl(self)
    cdef inline object list_ref_unique_impl(self)
    cdef inline object set_ref_shared_impl(self)
    cdef inline object list_ref_shared_const_impl(self)
    cdef object __fbthrift_cached_list_ref
    cdef object __fbthrift_cached_set_ref
    cdef object __fbthrift_cached_map_ref
    cdef object __fbthrift_cached_list_ref_unique
    cdef object __fbthrift_cached_set_ref_shared
    cdef object __fbthrift_cached_list_ref_shared_const

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithContainers])



cdef class StructWithSharedConst(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithSharedConst] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithSharedConst_FieldsSetter _fields_setter
    cdef inline object opt_shared_const_impl(self)
    cdef inline object shared_const_impl(self)
    cdef inline object req_shared_const_impl(self)
    cdef MyField __fbthrift_cached_opt_shared_const
    cdef MyField __fbthrift_cached_shared_const
    cdef MyField __fbthrift_cached_req_shared_const

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithSharedConst])



cdef class Empty(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cEmpty] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__Empty_FieldsSetter _fields_setter

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cEmpty])



cdef class StructWithRef(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithRef] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithRef_FieldsSetter _fields_setter
    cdef inline object def_field_impl(self)
    cdef inline object opt_field_impl(self)
    cdef inline object req_field_impl(self)
    cdef Empty __fbthrift_cached_def_field
    cdef Empty __fbthrift_cached_opt_field
    cdef Empty __fbthrift_cached_req_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithRef])



cdef class StructWithBox(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithBox] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithBox_FieldsSetter _fields_setter
    cdef inline object a_impl(self)
    cdef inline object b_impl(self)
    cdef inline object c_impl(self)
    cdef object __fbthrift_cached_b
    cdef StructWithRef __fbthrift_cached_c

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithBox])



cdef class StructWithInternBox(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithInternBox] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithInternBox_FieldsSetter _fields_setter
    cdef inline object field1_impl(self)
    cdef inline object field2_impl(self)
    cdef Empty __fbthrift_cached_field1
    cdef MyField __fbthrift_cached_field2

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithInternBox])



cdef class StructWithTerseInternBox(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithTerseInternBox] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithTerseInternBox_FieldsSetter _fields_setter
    cdef inline object field1_impl(self)
    cdef inline object field2_impl(self)
    cdef Empty __fbthrift_cached_field1
    cdef MyField __fbthrift_cached_field2

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithTerseInternBox])



cdef class AdaptedStructWithInternBox(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cAdaptedStructWithInternBox] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__AdaptedStructWithInternBox_FieldsSetter _fields_setter
    cdef inline object field1_impl(self)
    cdef inline object field2_impl(self)
    cdef Empty __fbthrift_cached_field1
    cdef MyField __fbthrift_cached_field2

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cAdaptedStructWithInternBox])



cdef class AdaptedStructWithTerseInternBox(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cAdaptedStructWithTerseInternBox] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__AdaptedStructWithTerseInternBox_FieldsSetter _fields_setter
    cdef inline object field1_impl(self)
    cdef inline object field2_impl(self)
    cdef Empty __fbthrift_cached_field1
    cdef MyField __fbthrift_cached_field2

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cAdaptedStructWithTerseInternBox])



cdef class StructWithRefTypeUnique(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithRefTypeUnique] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithRefTypeUnique_FieldsSetter _fields_setter
    cdef inline object def_field_impl(self)
    cdef inline object opt_field_impl(self)
    cdef inline object req_field_impl(self)
    cdef Empty __fbthrift_cached_def_field
    cdef Empty __fbthrift_cached_opt_field
    cdef Empty __fbthrift_cached_req_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithRefTypeUnique])



cdef class StructWithRefTypeShared(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithRefTypeShared] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithRefTypeShared_FieldsSetter _fields_setter
    cdef inline object def_field_impl(self)
    cdef inline object opt_field_impl(self)
    cdef inline object req_field_impl(self)
    cdef Empty __fbthrift_cached_def_field
    cdef Empty __fbthrift_cached_opt_field
    cdef Empty __fbthrift_cached_req_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithRefTypeShared])



cdef class StructWithRefTypeSharedConst(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithRefTypeSharedConst] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithRefTypeSharedConst_FieldsSetter _fields_setter
    cdef inline object def_field_impl(self)
    cdef inline object opt_field_impl(self)
    cdef inline object req_field_impl(self)
    cdef Empty __fbthrift_cached_def_field
    cdef Empty __fbthrift_cached_opt_field
    cdef Empty __fbthrift_cached_req_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithRefTypeSharedConst])



cdef class StructWithRefAndAnnotCppNoexceptMoveCtor(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithRefAndAnnotCppNoexceptMoveCtor] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithRefAndAnnotCppNoexceptMoveCtor_FieldsSetter _fields_setter
    cdef inline object def_field_impl(self)
    cdef Empty __fbthrift_cached_def_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithRefAndAnnotCppNoexceptMoveCtor])



cdef class StructWithString(thrift.py3.types.Struct):
    cdef shared_ptr[_module_cbindings.cStructWithString] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithString_FieldsSetter _fields_setter
    cdef inline object def_unique_string_ref_impl(self)
    cdef inline object def_shared_string_ref_impl(self)
    cdef inline object def_shared_string_const_ref_impl(self)
    cdef inline object unique_string_ref_impl(self)
    cdef inline object shared_string_ref_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cStructWithString])


cdef vector[_module_cbindings.cRecursiveStruct] List__RecursiveStruct__make_instance(object items) except *
cdef object List__RecursiveStruct__from_cpp(const vector[_module_cbindings.cRecursiveStruct]&) except *

cdef vector[cint32_t] List__i32__make_instance(object items) except *
cdef object List__i32__from_cpp(const vector[cint32_t]&) except *

cdef cset[cint32_t] Set__i32__make_instance(object items) except *
cdef object Set__i32__from_cpp(const cset[cint32_t]&) except *

cdef cmap[cint32_t,cint32_t] Map__i32_i32__make_instance(object items) except *
cdef object Map__i32_i32__from_cpp(const cmap[cint32_t,cint32_t]&) except *

cdef vector[cint64_t] List__i64__make_instance(object items) except *
cdef object List__i64__from_cpp(const vector[cint64_t]&) except *


