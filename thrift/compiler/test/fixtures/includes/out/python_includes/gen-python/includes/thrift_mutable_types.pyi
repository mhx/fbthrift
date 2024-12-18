#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import includes.thrift_abstract_types as _fbthrift_python_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_containers as _fbthrift_python_mutable_containers

import transitive.thrift_mutable_types as _fbthrift__transitive__thrift_mutable_types


class _fbthrift_compatible_with_Included:
    pass


class Included(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_Included, _fbthrift_python_abstract_types.Included):

    @property
    def MyIntField(self) -> int: ...
    @MyIntField.setter
    def MyIntField(self, value: int) -> None: ...


    @property
    def MyTransitiveField(self) -> _fbthrift__transitive__thrift_mutable_types.Foo: ...
    @MyTransitiveField.setter
    def MyTransitiveField(self, value: _fbthrift__transitive__thrift_mutable_types.Foo) -> None: ...

    def __init__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyTransitiveField: _typing.Optional[_fbthrift__transitive__thrift_mutable_types._fbthrift_compatible_with_Foo]=...
    ) -> None: ...

    def __call__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyTransitiveField: _typing.Optional[_fbthrift__transitive__thrift_mutable_types._fbthrift_compatible_with_Foo]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, _fbthrift__transitive__thrift_mutable_types.Foo]]]: ...
    def _to_python(self) -> "includes.thrift_types.Included": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "includes.types.Included": ...  # type: ignore
    def _to_py_deprecated(self) -> "includes.ttypes.Included": ...  # type: ignore
_fbthrift_Included = Included


ExampleIncluded: _fbthrift_Included = ...

IncludedConstant: int = ...

IncludedInt64 = int
TransitiveFoo = _fbthrift__transitive__thrift_mutable_types.Foo
