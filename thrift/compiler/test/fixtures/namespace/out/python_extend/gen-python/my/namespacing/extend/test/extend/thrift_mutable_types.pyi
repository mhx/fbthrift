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
import python_module_root.my.namespacing.extend.test.extend.thrift_abstract_types as _fbthrift_python_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_containers as _fbthrift_python_mutable_containers

import python_module_root.my.namespacing.test.hsmodule.thrift_mutable_types as python_module_root__my__namespacing__test__hsmodule__thrift_mutable_types



class _fbthrift_ExtendTestService_check_args(_fbthrift_python_mutable_types.MutableStruct):
    struct1: _typing.Final[python_module_root__my__namespacing__test__hsmodule__thrift_mutable_types.HsFoo] = ...

    def __init__(
        self, *,
        struct1: _typing.Optional[python_module_root__my__namespacing__test__hsmodule__thrift_mutable_types.HsFoo]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, python_module_root__my__namespacing__test__hsmodule__thrift_mutable_types.HsFoo]]]: ...


class _fbthrift_ExtendTestService_check_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[bool]

    def __init__(
        self, *, success: _typing.Optional[bool] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            bool,
        ]]]: ...
