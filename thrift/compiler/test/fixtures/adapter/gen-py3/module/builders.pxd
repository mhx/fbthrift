#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as _fbthrift_iobuf

cimport thrift.py3.builder

cimport facebook.thrift.annotation.cpp.types as _facebook_thrift_annotation_cpp_types
cimport facebook.thrift.annotation.cpp.builders as _facebook_thrift_annotation_cpp_builders
cimport facebook.thrift.annotation.python.types as _facebook_thrift_annotation_python_types
cimport facebook.thrift.annotation.python.builders as _facebook_thrift_annotation_python_builders
cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types
cimport facebook.thrift.annotation.thrift.builders as _facebook_thrift_annotation_thrift_builders

cimport module.types as _module_types

cdef class Foo_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint intField
    cdef public pint optionalIntField
    cdef public pint intFieldWithDefault
    cdef public set setField
    cdef public set optionalSetField
    cdef public dict mapField
    cdef public dict optionalMapField
    cdef public bytes binaryField
    cdef public pint longField


cdef class Baz_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint intField
    cdef public set setField
    cdef public dict mapField
    cdef public bytes binaryField
    cdef public pint longField


cdef class Bar_Builder(thrift.py3.builder.StructBuilder):
    cdef public object structField
    cdef public object optionalStructField
    cdef public list structListField
    cdef public list optionalStructListField
    cdef public object unionField
    cdef public object optionalUnionField


cdef class StructWithFieldAdapter_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint field
    cdef public pint shared_field
    cdef public pint opt_shared_field
    cdef public pint opt_boxed_field


