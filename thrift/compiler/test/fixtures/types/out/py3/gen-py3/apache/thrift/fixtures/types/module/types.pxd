#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/types/src/module.thrift
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

cimport apache.thrift.fixtures.types.included.types as _apache_thrift_fixtures_types_included_types
cimport apache.thrift.fixtures.types.included.cbindings as _apache_thrift_fixtures_types_included_cbindings

cimport apache.thrift.fixtures.types.module.types as _fbthrift_types
cimport apache.thrift.fixtures.types.module.types_fields as _fbthrift_types_fields
cimport apache.thrift.fixtures.types.module.cbindings as _apache_thrift_fixtures_types_module_cbindings

cdef extern from "thrift/compiler/test/fixtures/types/gen-py3/module/types.h":
  pass



cdef class empty_struct(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cempty_struct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__empty_struct_FieldsSetter _fields_setter

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cempty_struct])



cdef class decorated_struct(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cdecorated_struct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__decorated_struct_FieldsSetter _fields_setter
    cdef inline object field_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cdecorated_struct])



cdef class ContainerStruct(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cContainerStruct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__ContainerStruct_FieldsSetter _fields_setter
    cdef inline object fieldA_impl(self)
    cdef inline object fieldB_impl(self)
    cdef inline object fieldC_impl(self)
    cdef inline object fieldD_impl(self)
    cdef inline object fieldE_impl(self)
    cdef inline object fieldF_impl(self)
    cdef inline object fieldG_impl(self)
    cdef inline object fieldH_impl(self)
    cdef object __fbthrift_cached_fieldA
    cdef object __fbthrift_cached_fieldB
    cdef object __fbthrift_cached_fieldC
    cdef object __fbthrift_cached_fieldD
    cdef object __fbthrift_cached_fieldE
    cdef object __fbthrift_cached_fieldF
    cdef object __fbthrift_cached_fieldG
    cdef object __fbthrift_cached_fieldH

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cContainerStruct])



cdef class CppTypeStruct(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cCppTypeStruct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__CppTypeStruct_FieldsSetter _fields_setter
    cdef inline object fieldA_impl(self)
    cdef object __fbthrift_cached_fieldA

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cCppTypeStruct])



cdef class VirtualStruct(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cVirtualStruct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__VirtualStruct_FieldsSetter _fields_setter
    cdef inline object MyIntField_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cVirtualStruct])



cdef class MyStructWithForwardRefEnum(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cMyStructWithForwardRefEnum] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__MyStructWithForwardRefEnum_FieldsSetter _fields_setter
    cdef inline object a_impl(self)
    cdef inline object b_impl(self)
    cdef object __fbthrift_cached_a
    cdef object __fbthrift_cached_b

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cMyStructWithForwardRefEnum])



cdef class TrivialNumeric(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cTrivialNumeric] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__TrivialNumeric_FieldsSetter _fields_setter
    cdef inline object a_impl(self)
    cdef inline object b_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cTrivialNumeric])



cdef class TrivialNestedWithDefault(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cTrivialNestedWithDefault] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__TrivialNestedWithDefault_FieldsSetter _fields_setter
    cdef inline object z_impl(self)
    cdef inline object n_impl(self)
    cdef TrivialNumeric __fbthrift_cached_n

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cTrivialNestedWithDefault])



cdef class ComplexString(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cComplexString] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__ComplexString_FieldsSetter _fields_setter
    cdef inline object a_impl(self)
    cdef inline object b_impl(self)
    cdef object __fbthrift_cached_b

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cComplexString])



cdef class ComplexNestedWithDefault(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cComplexNestedWithDefault] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__ComplexNestedWithDefault_FieldsSetter _fields_setter
    cdef inline object z_impl(self)
    cdef inline object n_impl(self)
    cdef ComplexString __fbthrift_cached_n

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cComplexNestedWithDefault])



cdef class MinPadding(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cMinPadding] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__MinPadding_FieldsSetter _fields_setter
    cdef inline object small_impl(self)
    cdef inline object big_impl(self)
    cdef inline object medium_impl(self)
    cdef inline object biggish_impl(self)
    cdef inline object tiny_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cMinPadding])



cdef class MinPaddingWithCustomType(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cMinPaddingWithCustomType] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__MinPaddingWithCustomType_FieldsSetter _fields_setter
    cdef inline object small_impl(self)
    cdef inline object big_impl(self)
    cdef inline object medium_impl(self)
    cdef inline object biggish_impl(self)
    cdef inline object tiny_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cMinPaddingWithCustomType])



cdef class MyStruct(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cMyStruct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__MyStruct_FieldsSetter _fields_setter
    cdef inline object MyIntField_impl(self)
    cdef inline object MyStringField_impl(self)
    cdef inline object majorVer_impl(self)
    cdef inline object data_impl(self)
    cdef MyDataItem __fbthrift_cached_data

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cMyStruct])



cdef class MyDataItem(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cMyDataItem] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__MyDataItem_FieldsSetter _fields_setter

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cMyDataItem])



cdef class Renaming(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cRenaming] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__Renaming_FieldsSetter _fields_setter
    cdef inline object foo_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cRenaming])



cdef class AnnotatedTypes(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cAnnotatedTypes] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__AnnotatedTypes_FieldsSetter _fields_setter
    cdef inline object binary_field_impl(self)
    cdef inline object list_field_impl(self)
    cdef object __fbthrift_cached_list_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cAnnotatedTypes])



cdef class ForwardUsageRoot(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cForwardUsageRoot] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__ForwardUsageRoot_FieldsSetter _fields_setter
    cdef inline object ForwardUsageStruct_impl(self)
    cdef inline object ForwardUsageByRef_impl(self)
    cdef ForwardUsageStruct __fbthrift_cached_ForwardUsageStruct
    cdef ForwardUsageByRef __fbthrift_cached_ForwardUsageByRef

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cForwardUsageRoot])



cdef class ForwardUsageStruct(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cForwardUsageStruct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__ForwardUsageStruct_FieldsSetter _fields_setter
    cdef inline object foo_impl(self)
    cdef ForwardUsageRoot __fbthrift_cached_foo

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cForwardUsageStruct])



cdef class ForwardUsageByRef(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cForwardUsageByRef] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__ForwardUsageByRef_FieldsSetter _fields_setter
    cdef inline object foo_impl(self)
    cdef ForwardUsageRoot __fbthrift_cached_foo

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cForwardUsageByRef])



cdef class IncompleteMap(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cIncompleteMap] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__IncompleteMap_FieldsSetter _fields_setter
    cdef inline object field_impl(self)
    cdef object __fbthrift_cached_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cIncompleteMap])



cdef class IncompleteMapDep(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cIncompleteMapDep] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__IncompleteMapDep_FieldsSetter _fields_setter

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cIncompleteMapDep])



cdef class CompleteMap(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cCompleteMap] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__CompleteMap_FieldsSetter _fields_setter
    cdef inline object field_impl(self)
    cdef object __fbthrift_cached_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cCompleteMap])



cdef class CompleteMapDep(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cCompleteMapDep] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__CompleteMapDep_FieldsSetter _fields_setter

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cCompleteMapDep])



cdef class IncompleteList(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cIncompleteList] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__IncompleteList_FieldsSetter _fields_setter
    cdef inline object field_impl(self)
    cdef object __fbthrift_cached_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cIncompleteList])



cdef class IncompleteListDep(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cIncompleteListDep] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__IncompleteListDep_FieldsSetter _fields_setter

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cIncompleteListDep])



cdef class CompleteList(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cCompleteList] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__CompleteList_FieldsSetter _fields_setter
    cdef inline object field_impl(self)
    cdef object __fbthrift_cached_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cCompleteList])



cdef class CompleteListDep(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cCompleteListDep] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__CompleteListDep_FieldsSetter _fields_setter

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cCompleteListDep])



cdef class AdaptedList(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cAdaptedList] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__AdaptedList_FieldsSetter _fields_setter
    cdef inline object field_impl(self)
    cdef object __fbthrift_cached_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cAdaptedList])



cdef class DependentAdaptedList(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cDependentAdaptedList] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__DependentAdaptedList_FieldsSetter _fields_setter
    cdef inline object field_impl(self)
    cdef object __fbthrift_cached_field

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cDependentAdaptedList])



cdef class AllocatorAware(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cAllocatorAware] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__AllocatorAware_FieldsSetter _fields_setter
    cdef inline object aa_list_impl(self)
    cdef inline object aa_set_impl(self)
    cdef inline object aa_map_impl(self)
    cdef inline object aa_string_impl(self)
    cdef inline object not_a_container_impl(self)
    cdef inline object aa_unique_impl(self)
    cdef inline object aa_shared_impl(self)
    cdef object __fbthrift_cached_aa_list
    cdef object __fbthrift_cached_aa_set
    cdef object __fbthrift_cached_aa_map

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cAllocatorAware])



cdef class AllocatorAware2(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cAllocatorAware2] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__AllocatorAware2_FieldsSetter _fields_setter
    cdef inline object not_a_container_impl(self)
    cdef inline object box_field_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cAllocatorAware2])



cdef class TypedefStruct(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cTypedefStruct] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__TypedefStruct_FieldsSetter _fields_setter
    cdef inline object i32_field_impl(self)
    cdef inline object IntTypedef_field_impl(self)
    cdef inline object UintTypedef_field_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cTypedefStruct])



cdef class StructWithDoubleUnderscores(thrift.py3.types.Struct):
    cdef shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cStructWithDoubleUnderscores] _cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE
    cdef _fbthrift_types_fields.__StructWithDoubleUnderscores_FieldsSetter _fields_setter
    cdef inline object __field_impl(self)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_apache_thrift_fixtures_types_module_cbindings.cStructWithDoubleUnderscores])


cdef _apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,string] std_unordered_map__Map__i32_string__make_instance(object items) except *
cdef object std_unordered_map__Map__i32_string__from_cpp(const _apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,string]&) except *

cdef vector[cint64_t] List__i64__make_instance(object items) except *
cdef object List__i64__from_cpp(const vector[cint64_t]&) except *

cdef cmap[string,cint64_t] Map__binary_i64__make_instance(object items) except *
cdef object Map__binary_i64__from_cpp(const cmap[string,cint64_t]&) except *

cdef vector[cint32_t] List__i32__make_instance(object items) except *
cdef object List__i32__from_cpp(const vector[cint32_t]&) except *

cdef _apache_thrift_fixtures_types_module_cbindings.std_list[cint32_t] std_list__List__i32__make_instance(object items) except *
cdef object std_list__List__i32__from_cpp(const _apache_thrift_fixtures_types_module_cbindings.std_list[cint32_t]&) except *

cdef _apache_thrift_fixtures_types_module_cbindings.std_deque[cint32_t] std_deque__List__i32__make_instance(object items) except *
cdef object std_deque__List__i32__from_cpp(const _apache_thrift_fixtures_types_module_cbindings.std_deque[cint32_t]&) except *

cdef _apache_thrift_fixtures_types_module_cbindings.folly_fbvector[cint32_t] folly_fbvector__List__i32__make_instance(object items) except *
cdef object folly_fbvector__List__i32__from_cpp(const _apache_thrift_fixtures_types_module_cbindings.folly_fbvector[cint32_t]&) except *

cdef _apache_thrift_fixtures_types_module_cbindings.folly_small_vector[cint32_t] folly_small_vector__List__i32__make_instance(object items) except *
cdef object folly_small_vector__List__i32__from_cpp(const _apache_thrift_fixtures_types_module_cbindings.folly_small_vector[cint32_t]&) except *

cdef _apache_thrift_fixtures_types_module_cbindings.folly_sorted_vector_set[cint32_t] folly_sorted_vector_set__Set__i32__make_instance(object items) except *
cdef object folly_sorted_vector_set__Set__i32__from_cpp(const _apache_thrift_fixtures_types_module_cbindings.folly_sorted_vector_set[cint32_t]&) except *

cdef cmap[cint32_t,string] Map__i32_string__make_instance(object items) except *
cdef object Map__i32_string__from_cpp(const cmap[cint32_t,string]&) except *

cdef _apache_thrift_fixtures_types_module_cbindings.std_list_int32_t std_list_int32_t__List__i32__make_instance(object items) except *
cdef object std_list_int32_t__List__i32__from_cpp(const _apache_thrift_fixtures_types_module_cbindings.std_list_int32_t&) except *

cdef cmap[string,cint32_t] Map__string_i32__make_instance(object items) except *
cdef object Map__string_i32__from_cpp(const cmap[string,cint32_t]&) except *

cdef vector[_apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,string]] List__std_unordered_map__Map__i32_string__make_instance(object items) except *
cdef object List__std_unordered_map__Map__i32_string__from_cpp(const vector[_apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,string]]&) except *

cdef cmap[cint32_t,_apache_thrift_fixtures_types_module_cbindings.cIncompleteMapDep] Map__i32_IncompleteMapDep__make_instance(object items) except *
cdef object Map__i32_IncompleteMapDep__from_cpp(const cmap[cint32_t,_apache_thrift_fixtures_types_module_cbindings.cIncompleteMapDep]&) except *

cdef _apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,_apache_thrift_fixtures_types_module_cbindings.cCompleteMapDep] std_unordered_map__Map__i32_CompleteMapDep__make_instance(object items) except *
cdef object std_unordered_map__Map__i32_CompleteMapDep__from_cpp(const _apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,_apache_thrift_fixtures_types_module_cbindings.cCompleteMapDep]&) except *

cdef _apache_thrift_fixtures_types_module_cbindings._std_list[_apache_thrift_fixtures_types_module_cbindings.cIncompleteListDep] _std_list__List__IncompleteListDep__make_instance(object items) except *
cdef object _std_list__List__IncompleteListDep__from_cpp(const _apache_thrift_fixtures_types_module_cbindings._std_list[_apache_thrift_fixtures_types_module_cbindings.cIncompleteListDep]&) except *

cdef _apache_thrift_fixtures_types_module_cbindings.folly_small_vector[_apache_thrift_fixtures_types_module_cbindings.cCompleteListDep] folly_small_vector__List__CompleteListDep__make_instance(object items) except *
cdef object folly_small_vector__List__CompleteListDep__from_cpp(const _apache_thrift_fixtures_types_module_cbindings.folly_small_vector[_apache_thrift_fixtures_types_module_cbindings.cCompleteListDep]&) except *

cdef vector[_apache_thrift_fixtures_types_module_cbindings.cAdaptedListDep] List__AdaptedListDep__make_instance(object items) except *
cdef object List__AdaptedListDep__from_cpp(const vector[_apache_thrift_fixtures_types_module_cbindings.cAdaptedListDep]&) except *

cdef vector[_apache_thrift_fixtures_types_module_cbindings.cDependentAdaptedListDep] List__DependentAdaptedListDep__make_instance(object items) except *
cdef object List__DependentAdaptedListDep__from_cpp(const vector[_apache_thrift_fixtures_types_module_cbindings.cDependentAdaptedListDep]&) except *

cdef cset[cint32_t] Set__i32__make_instance(object items) except *
cdef object Set__i32__from_cpp(const cset[cint32_t]&) except *

cdef cmap[cint32_t,cint32_t] Map__i32_i32__make_instance(object items) except *
cdef object Map__i32_i32__from_cpp(const cmap[cint32_t,cint32_t]&) except *


