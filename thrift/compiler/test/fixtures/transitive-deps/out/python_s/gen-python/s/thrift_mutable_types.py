
# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_generate_mutable_types` documentation in thrift compiler

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf

from abc import ABCMeta as _fbthrift_ABCMeta
import s.thrift_abstract_types as _fbthrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_typeinfos as _fbthrift_python_mutable_typeinfos


import b.thrift_mutable_types
import b.thrift_mutable_types as _fbthrift__b__thrift_mutable_types

import c.thrift_mutable_types
import c.thrift_mutable_types as _fbthrift__c__thrift_mutable_types



from s.thrift_enums import *
_fbthrift_all_enums = [
]


_fbthrift_all_structs = [
]



class _fbthrift_TestService_test_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
    )


class _fbthrift_TestService_test_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ex",  # name
            "ex",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(_fbthrift__c__thrift_mutable_types.E),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )



_fbthrift_python_mutable_types.fill_specs(
    _fbthrift_TestService_test_args,
    _fbthrift_TestService_test_result,
)
