#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


from thrift.py3.reflection cimport (
    StructSpec as __StructSpec,
    ListSpec as __ListSpec,
    SetSpec as __SetSpec,
    MapSpec as __MapSpec,
    FieldSpec as __FieldSpec,
)

cdef __StructSpec get_reflection__MyData()

cdef __StructSpec get_reflection__MyDataWithCustomDefault()

cdef __StructSpec get_reflection__InnerUnion()

cdef __StructSpec get_reflection__MyUnion()

cdef __StructSpec get_reflection__MyStruct()

cdef __StructSpec get_reflection__LateDefStruct()

cdef __StructSpec get_reflection__Recursive()

cdef __StructSpec get_reflection__Bar()

cdef __StructSpec get_reflection__Loop()

cdef __ListSpec get_reflection__List__i16()

cdef __SetSpec get_reflection__Set__string()

cdef __MapSpec get_reflection__Map__string_string()

cdef __MapSpec get_reflection__Map__string_i32()

cdef __ListSpec get_reflection__List__Map__string_i32()

cdef __MapSpec get_reflection__Map__string_Map__string_i32()

cdef __MapSpec get_reflection__Map__string_Recursive()
