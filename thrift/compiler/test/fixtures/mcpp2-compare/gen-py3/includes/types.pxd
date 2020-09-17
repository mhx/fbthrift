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
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.py3.exceptions cimport cTException
cimport folly.iobuf as __iobuf
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.py3.common cimport Protocol as __Protocol
from thrift.py3.types cimport (
    bstring,
    move,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
)
from folly.optional cimport cOptional
cdef extern from "gen-py3/includes/types.h":
  pass

cdef extern from "folly/sorted_vector_types.h":
  pass

cdef extern from "gen-cpp2/includes_types.h" namespace "::a::different::ns":
    cdef cppclass cAnEnum "::a::different::ns::AnEnum":
        pass





cdef class AnEnum(thrift.py3.types.CompiledEnum):
    pass

cdef extern from "gen-cpp2/includes_types_custom_protocol.h" namespace "::a::different::ns":
    cdef cppclass cAStruct__isset "::a::different::ns::AStruct::__isset":
        bint FieldA

    cdef cppclass cAStruct "::a::different::ns::AStruct":
        cAStruct() except +
        cAStruct(const cAStruct&) except +
        bint operator==(cAStruct&)
        bint operator!=(cAStruct&)
        bint operator<(cAStruct&)
        bint operator>(cAStruct&)
        bint operator<=(cAStruct&)
        bint operator>=(cAStruct&)
        __field_ref[cint32_t] FieldA_ref()
        cint32_t FieldA
        cAStruct__isset __isset

    cdef cppclass cAStructB__isset "::a::different::ns::AStructB::__isset":
        bint FieldA

    cdef cppclass cAStructB "::a::different::ns::AStructB":
        cAStructB() except +
        cAStructB(const cAStructB&) except +
        bint operator==(cAStructB&)
        bint operator!=(cAStructB&)
        bint operator<(cAStructB&)
        bint operator>(cAStructB&)
        bint operator<=(cAStructB&)
        bint operator>=(cAStructB&)
        shared_ptr[const cAStruct] FieldA
        cAStructB__isset __isset

    cdef shared_ptr[cAStruct] reference_shared_ptr_FieldA "::thrift::py3::reference_shared_ptr<::a::different::ns::AStruct>"(shared_ptr[cAStructB]&, cAStruct&)

cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cAStruct] __fbthrift_move "std::move"(unique_ptr[cAStruct])
    cdef shared_ptr[cAStruct] __fbthrift_move_shared "std::move"(shared_ptr[cAStruct])
    cdef unique_ptr[cAStruct] __fbthrift_move_unique "std::move"(unique_ptr[cAStruct])
    cdef shared_ptr[cAStructB] __fbthrift_move "std::move"(unique_ptr[cAStructB])
    cdef shared_ptr[cAStructB] __fbthrift_move_shared "std::move"(shared_ptr[cAStructB])
    cdef unique_ptr[cAStructB] __fbthrift_move_unique "std::move"(unique_ptr[cAStructB])

cdef extern from "<memory>" namespace "std" nogil:
    cdef shared_ptr[const cAStruct] const_pointer_cast "std::const_pointer_cast<const ::a::different::ns::AStruct>"(shared_ptr[cAStruct])
    cdef shared_ptr[const cAStructB] const_pointer_cast "std::const_pointer_cast<const ::a::different::ns::AStructB>"(shared_ptr[cAStructB])



cdef class AStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cAStruct] _cpp_obj

    @staticmethod
    cdef unique_ptr[cAStruct] _make_instance(
        cAStruct* base_instance,
        bint* __isNOTSET,
        object FieldA
    ) except *

    @staticmethod
    cdef create(shared_ptr[cAStruct])



cdef class AStructB(thrift.py3.types.Struct):
    cdef shared_ptr[cAStructB] _cpp_obj
    cdef AStruct __field_FieldA

    @staticmethod
    cdef unique_ptr[cAStructB] _make_instance(
        cAStructB* base_instance,
        bint* __isNOTSET,
        AStruct FieldA
    ) except *

    @staticmethod
    cdef create(shared_ptr[cAStructB])





cdef extern from "gen-cpp2/includes_constants.h" namespace "::a::different::ns":
    cdef cint64_t cIncludedConstant "::a::different::ns::includes_constants::IncludedConstant"
