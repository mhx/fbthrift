#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/includes.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection import (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
    StructSpec as __StructSpec,
    ListSpec as __ListSpec,
    SetSpec as __SetSpec,
    MapSpec as __MapSpec,
    FieldSpec as __FieldSpec,
)

import transitive.types as _transitive_types

import includes.types as _includes_types



def get_reflection__Included() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="Included",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    defaults = _includes_types.Included()
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="MyIntField",
            py_name="MyIntField",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.MyIntField,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="MyTransitiveField",
            py_name="MyTransitiveField",
            type=_transitive_types.Foo,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.MyTransitiveField,
            annotations={
            },
        ),
    )
    return spec
