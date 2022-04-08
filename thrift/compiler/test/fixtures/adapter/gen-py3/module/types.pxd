#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.utility cimport move as cmove
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
)
from thrift.py3.common cimport (
    RpcOptions as __RpcOptions,
    Protocol as __Protocol,
    cThriftMetadata as __fbthrift_cThriftMetadata,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional
cimport facebook.thrift.annotation.cpp.types as _facebook_thrift_annotation_cpp_types
cimport facebook.thrift.annotation.python.types as _facebook_thrift_annotation_python_types
cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types

cimport module.types_fields as _fbthrift_types_fields

cdef extern from "src/gen-py3/module/types.h":
  pass





cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "src/gen-cpp2/module_types_custom_protocol.h" namespace "::cpp2":

    cdef cppclass cFoo "::cpp2::Foo":
        cFoo() except +
        cFoo(const cFoo&) except +
        bint operator==(cFoo&)
        bint operator!=(cFoo&)
        __field_ref[cint32_t] intField_ref()
        __optional_field_ref[cint32_t] optionalIntField_ref()
        __field_ref[cint32_t] intFieldWithDefault_ref()
        __field_ref[cset[string]] setField_ref()
        __optional_field_ref[cset[string]] optionalSetField_ref()
        __field_ref[cmap[string,vector[string]]] mapField_ref()
        __optional_field_ref[cmap[string,vector[string]]] optionalMapField_ref()
        __field_ref[string] binaryField_ref()
        __field_ref[cint64_t] longField_ref()

    cdef enum cBaz__type "::cpp2::Baz::Type":
        cBaz__type___EMPTY__ "::cpp2::Baz::Type::__EMPTY__",
        cBaz__type_intField "::cpp2::Baz::Type::intField",
        cBaz__type_setField "::cpp2::Baz::Type::setField",
        cBaz__type_mapField "::cpp2::Baz::Type::mapField",
        cBaz__type_binaryField "::cpp2::Baz::Type::binaryField",
        cBaz__type_longField "::cpp2::Baz::Type::longField",

    cdef cppclass cBaz "::cpp2::Baz":
        cBaz() except +
        cBaz(const cBaz&) except +
        bint operator==(cBaz&)
        bint operator!=(cBaz&)
        cBaz__type getType() const
        const cint32_t& get_intField() const
        cint32_t& set_intField(const cint32_t&)
        const cset[string]& get_setField() const
        cset[string]& set_setField(const cset[string]&)
        const cmap[string,vector[string]]& get_mapField() const
        cmap[string,vector[string]]& set_mapField(const cmap[string,vector[string]]&)
        const string& get_binaryField() const
        string& set_binaryField(const string&)
        const cint64_t& get_longField() const
        cint64_t& set_longField(const cint64_t&)


    cdef cppclass cBar "::cpp2::Bar":
        cBar() except +
        cBar(const cBar&) except +
        bint operator==(cBar&)
        bint operator!=(cBar&)
        __field_ref[cFoo] structField_ref()
        __optional_field_ref[cFoo] optionalStructField_ref()
        __field_ref[vector[cFoo]] structListField_ref()
        __optional_field_ref[vector[cFoo]] optionalStructListField_ref()
        __field_ref[cBaz] unionField_ref()
        __optional_field_ref[cBaz] optionalUnionField_ref()


    cdef cppclass cStructWithFieldAdapter "::cpp2::StructWithFieldAdapter":
        cStructWithFieldAdapter() except +
        cStructWithFieldAdapter(const cStructWithFieldAdapter&) except +
        bint operator==(cStructWithFieldAdapter&)
        bint operator!=(cStructWithFieldAdapter&)
        bint operator<(cStructWithFieldAdapter&)
        bint operator>(cStructWithFieldAdapter&)
        bint operator<=(cStructWithFieldAdapter&)
        bint operator>=(cStructWithFieldAdapter&)
        __field_ref[cint32_t] field_ref()
        shared_ptr[const cint32_t] shared_field_ref()
        shared_ptr[const cint32_t] opt_shared_field_ref()
        __optional_field_ref[cint32_t] opt_boxed_field_ref()




cdef class Foo(thrift.py3.types.Struct):
    cdef shared_ptr[cFoo] _cpp_obj
    cdef _fbthrift_types_fields.__Foo_FieldsSetter _fields_setter
    cdef inline object intField_impl(self)
    cdef inline object optionalIntField_impl(self)
    cdef inline object intFieldWithDefault_impl(self)
    cdef inline object setField_impl(self)
    cdef inline object optionalSetField_impl(self)
    cdef inline object mapField_impl(self)
    cdef inline object optionalMapField_impl(self)
    cdef inline object binaryField_impl(self)
    cdef inline object longField_impl(self)
    cdef Set__string __fbthrift_cached_setField
    cdef Set__string __fbthrift_cached_optionalSetField
    cdef Map__string_List__string __fbthrift_cached_mapField
    cdef Map__string_List__string __fbthrift_cached_optionalMapField

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cFoo])

cdef class __BazType(thrift.py3.types.CompiledEnum):
    pass




cdef class Baz(thrift.py3.types.Union):
    cdef shared_ptr[cBaz] _cpp_obj
    cdef readonly __BazType type
    cdef readonly object value
    cdef _load_cache(Baz self)

    @staticmethod
    cdef unique_ptr[cBaz] _make_instance(
        cBaz* base_instance,
        object intField,
        object setField,
        object mapField,
        bytes binaryField,
        object longField
    ) except *

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cBaz])



cdef class Bar(thrift.py3.types.Struct):
    cdef shared_ptr[cBar] _cpp_obj
    cdef _fbthrift_types_fields.__Bar_FieldsSetter _fields_setter
    cdef inline object structField_impl(self)
    cdef inline object optionalStructField_impl(self)
    cdef inline object structListField_impl(self)
    cdef inline object optionalStructListField_impl(self)
    cdef inline object unionField_impl(self)
    cdef inline object optionalUnionField_impl(self)
    cdef Foo __fbthrift_cached_structField
    cdef Foo __fbthrift_cached_optionalStructField
    cdef List__Foo __fbthrift_cached_structListField
    cdef List__Foo __fbthrift_cached_optionalStructListField
    cdef Baz __fbthrift_cached_unionField
    cdef Baz __fbthrift_cached_optionalUnionField

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cBar])



cdef class StructWithFieldAdapter(thrift.py3.types.Struct):
    cdef shared_ptr[cStructWithFieldAdapter] _cpp_obj
    cdef _fbthrift_types_fields.__StructWithFieldAdapter_FieldsSetter _fields_setter
    cdef inline object field_impl(self)
    cdef inline object shared_field_impl(self)
    cdef inline object opt_shared_field_impl(self)
    cdef inline object opt_boxed_field_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cStructWithFieldAdapter])


cdef class Set__string(thrift.py3.types.Set):
    cdef shared_ptr[cset[string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[string]])
    @staticmethod
    cdef shared_ptr[cset[string]] _make_instance(object items) except *

cdef class List__string(thrift.py3.types.List):
    cdef shared_ptr[vector[string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[string]])
    @staticmethod
    cdef shared_ptr[vector[string]] _make_instance(object items) except *

cdef class Map__string_List__string(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,vector[string]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,vector[string]]])
    @staticmethod
    cdef shared_ptr[cmap[string,vector[string]]] _make_instance(object items) except *

cdef class List__Foo(thrift.py3.types.List):
    cdef shared_ptr[vector[cFoo]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cFoo]])
    @staticmethod
    cdef shared_ptr[vector[cFoo]] _make_instance(object items) except *


