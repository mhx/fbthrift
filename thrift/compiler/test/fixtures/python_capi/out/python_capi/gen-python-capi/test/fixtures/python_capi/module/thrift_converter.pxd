
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#


cdef extern from "thrift/compiler/test/fixtures/python_capi/gen-cpp2/module_types.h":
    cdef cppclass cMyStruct "::test::fixtures::python_capi::MyStruct":
        cMyStruct()
    cdef cppclass cMyDataItem "::test::fixtures::python_capi::MyDataItem":
        cMyDataItem()
    cdef cppclass cTransitiveDoubler "::test::fixtures::python_capi::TransitiveDoubler":
        cTransitiveDoubler()
    cdef cppclass cDoubledPair "::test::fixtures::python_capi::detail::DoubledPair":
        cDoubledPair()
    cdef cppclass cStringPair "::test::fixtures::python_capi::StringPair":
        cStringPair()
    cdef cppclass cEmptyStruct "::test::fixtures::python_capi::VapidStruct":
        cEmptyStruct()
    cdef cppclass cPrimitiveStruct "::test::fixtures::python_capi::PrimitiveStruct":
        cPrimitiveStruct()
    cdef cppclass cAdaptedFields "::test::fixtures::python_capi::AdaptedFields":
        cAdaptedFields()
    cdef cppclass cListStruct "::test::fixtures::python_capi::ListStruct":
        cListStruct()
    cdef cppclass cSetStruct "::test::fixtures::python_capi::SetStruct":
        cSetStruct()
    cdef cppclass cMapStruct "::test::fixtures::python_capi::MapStruct":
        cMapStruct()
    cdef cppclass cComposeStruct "::test::fixtures::python_capi::ComposeStruct":
        cComposeStruct()
    cdef cppclass cOnion "::test::fixtures::python_capi::Shallot":
        cOnion()
    cdef cppclass cSomeBinary "::test::fixtures::python_capi::SomeBinary":
        cSomeBinary()

cdef extern from "thrift/compiler/test/fixtures/python_capi/gen-cpp2/module_types.h":
    cdef cppclass cMyEnum "::test::fixtures::python_capi::MyEnum":
        pass
    cdef cppclass cAnnoyingEnum "::test::fixtures::python_capi::NormalDecentEnum":
        pass
cdef cMyStruct MyStruct_convert_to_cpp(object inst) except*
cdef object MyStruct_from_cpp(const cMyStruct& c_struct)

cdef cMyDataItem MyDataItem_convert_to_cpp(object inst) except*
cdef object MyDataItem_from_cpp(const cMyDataItem& c_struct)

cdef cTransitiveDoubler TransitiveDoubler_convert_to_cpp(object inst) except*
cdef object TransitiveDoubler_from_cpp(const cTransitiveDoubler& c_struct)

cdef cDoubledPair DoubledPair_convert_to_cpp(object inst) except*
cdef object DoubledPair_from_cpp(const cDoubledPair& c_struct)

cdef cStringPair StringPair_convert_to_cpp(object inst) except*
cdef object StringPair_from_cpp(const cStringPair& c_struct)

cdef cEmptyStruct EmptyStruct_convert_to_cpp(object inst) except*
cdef object EmptyStruct_from_cpp(const cEmptyStruct& c_struct)

cdef cPrimitiveStruct PrimitiveStruct_convert_to_cpp(object inst) except*
cdef object PrimitiveStruct_from_cpp(const cPrimitiveStruct& c_struct)

cdef cAdaptedFields AdaptedFields_convert_to_cpp(object inst) except*
cdef object AdaptedFields_from_cpp(const cAdaptedFields& c_struct)

cdef cListStruct ListStruct_convert_to_cpp(object inst) except*
cdef object ListStruct_from_cpp(const cListStruct& c_struct)

cdef cSetStruct SetStruct_convert_to_cpp(object inst) except*
cdef object SetStruct_from_cpp(const cSetStruct& c_struct)

cdef cMapStruct MapStruct_convert_to_cpp(object inst) except*
cdef object MapStruct_from_cpp(const cMapStruct& c_struct)

cdef cComposeStruct ComposeStruct_convert_to_cpp(object inst) except*
cdef object ComposeStruct_from_cpp(const cComposeStruct& c_struct)

cdef cOnion Onion_convert_to_cpp(object inst) except*
cdef object Onion_from_cpp(const cOnion& c_struct)

cdef cSomeBinary SomeBinary_convert_to_cpp(object inst) except*
cdef object SomeBinary_from_cpp(const cSomeBinary& c_struct)

