#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import s.thrift_abstract_types as _fbthrift_python_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_containers as _fbthrift_python_mutable_containers

import b.thrift_mutable_types as _fbthrift__b__thrift_mutable_types

import c.thrift_mutable_types as _fbthrift__c__thrift_mutable_types



class _fbthrift_TestService_test_args(_fbthrift_python_mutable_types.MutableStruct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_TestService_test_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[None]
    ex: _typing.Final[_fbthrift__c__thrift_mutable_types.E]

    def __init__(
        self, *, success: _typing.Optional[None] = ..., ex: _typing.Optional[_fbthrift__c__thrift_mutable_types.E]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
            _fbthrift__c__thrift_mutable_types.E,
        ]]]: ...
