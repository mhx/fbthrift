#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_generate_mutable_types` documentation in thrift compiler

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import transitive.thrift_abstract_types as _fbthrift_python_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_containers as _fbthrift_python_mutable_containers

from transitive.thrift_enums import *


class _fbthrift_compatible_with_Foo:
    pass


class Foo(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_Foo, _fbthrift_python_abstract_types.Foo):

    @property
    def a(self) -> int: ...
    @a.setter
    def a(self, value: int) -> None: ...

    def __init__(
        self, *,
        a: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        a: _typing.Optional[int]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    def _to_python(self) -> "transitive.thrift_types.Foo": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "transitive.types.Foo": ...  # type: ignore
    def _to_py_deprecated(self) -> "transitive.ttypes.Foo": ...  # type: ignore
_fbthrift_Foo = Foo


ExampleFoo: _fbthrift_Foo = ...
