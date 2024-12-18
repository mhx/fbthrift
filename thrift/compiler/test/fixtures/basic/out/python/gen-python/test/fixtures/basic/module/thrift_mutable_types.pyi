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

import enum

import folly.iobuf as _fbthrift_iobuf
import test.fixtures.basic.module.thrift_abstract_types as _fbthrift_python_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_containers as _fbthrift_python_mutable_containers

from test.fixtures.basic.module.thrift_enums import (
    MyEnum as _fbthrift_MyEnum,
    _fbthrift_compatible_with_MyEnum,
    HackEnum as _fbthrift_HackEnum,
    _fbthrift_compatible_with_HackEnum,
)
MyEnum = _fbthrift_MyEnum
HackEnum = _fbthrift_HackEnum


class _fbthrift_compatible_with_MyStruct:
    pass


class MyStruct(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_MyStruct, _fbthrift_python_abstract_types.MyStruct):

    @property
    def MyIntField(self) -> int: ...
    @MyIntField.setter
    def MyIntField(self, value: int) -> None: ...


    @property
    def MyStringField(self) -> str: ...
    @MyStringField.setter
    def MyStringField(self, value: str) -> None: ...


    @property
    def MyDataField(self) -> _fbthrift_MyDataItem: ...
    @MyDataField.setter
    def MyDataField(self, value: _fbthrift_MyDataItem) -> None: ...


    @property
    def myEnum(self) -> _fbthrift_MyEnum: ...
    @myEnum.setter
    def myEnum(self, value: _fbthrift_MyEnum) -> None: ...


    @property
    def oneway(self) -> bool: ...
    @oneway.setter
    def oneway(self, value: bool) -> None: ...


    @property
    def readonly(self) -> bool: ...
    @readonly.setter
    def readonly(self, value: bool) -> None: ...


    @property
    def idempotent(self) -> bool: ...
    @idempotent.setter
    def idempotent(self, value: bool) -> None: ...


    @property
    def floatSet(self) -> _fbthrift_python_mutable_containers.MutableSet[float]: ...
    @floatSet.setter
    def floatSet(self, value: _fbthrift_python_mutable_containers.MutableSet[float] | _fbthrift_python_mutable_types._ThriftSetWrapper) -> None: ...


    @property
    def no_hack_codegen_field(self) -> str: ...
    @no_hack_codegen_field.setter
    def no_hack_codegen_field(self, value: str) -> None: ...

    def __init__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyStringField: _typing.Optional[str]=...,
        MyDataField: _typing.Optional[_fbthrift_compatible_with_MyDataItem]=...,
        myEnum: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        oneway: _typing.Optional[bool]=...,
        readonly: _typing.Optional[bool]=...,
        idempotent: _typing.Optional[bool]=...,
        floatSet: _typing.Optional[_fbthrift_python_mutable_containers.MutableSet[float] | _fbthrift_python_mutable_types._ThriftSetWrapper]=...,
        no_hack_codegen_field: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyStringField: _typing.Optional[str]=...,
        MyDataField: _typing.Optional[_fbthrift_compatible_with_MyDataItem]=...,
        myEnum: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        oneway: _typing.Optional[bool]=...,
        readonly: _typing.Optional[bool]=...,
        idempotent: _typing.Optional[bool]=...,
        floatSet: _typing.Optional[_fbthrift_python_mutable_containers.MutableSet[float] | _fbthrift_python_mutable_types._ThriftSetWrapper]=...,
        no_hack_codegen_field: _typing.Optional[str]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, _fbthrift_MyDataItem, _fbthrift_MyEnum, bool, bool, bool, _fbthrift_python_mutable_containers.MutableSet[float], str]]]: ...
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyStruct": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.basic.module.types.MyStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...  # type: ignore
_fbthrift_MyStruct = MyStruct

class _fbthrift_compatible_with_Containers:
    pass


class Containers(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_Containers, _fbthrift_python_abstract_types.Containers):

    @property
    def I32List(self) -> _fbthrift_python_mutable_containers.MutableList[int]: ...
    @I32List.setter
    def I32List(self, value: _fbthrift_python_mutable_containers.MutableList[int] | _fbthrift_python_mutable_types._ThriftListWrapper) -> None: ...


    @property
    def StringSet(self) -> _fbthrift_python_mutable_containers.MutableSet[str]: ...
    @StringSet.setter
    def StringSet(self, value: _fbthrift_python_mutable_containers.MutableSet[str] | _fbthrift_python_mutable_types._ThriftSetWrapper) -> None: ...


    @property
    def StringToI64Map(self) -> _fbthrift_python_mutable_containers.MutableMap[str, int]: ...
    @StringToI64Map.setter
    def StringToI64Map(self, value: _fbthrift_python_mutable_containers.MutableMap[str, int] | _fbthrift_python_mutable_types._ThriftMapWrapper) -> None: ...

    def __init__(
        self, *,
        I32List: _typing.Optional[_fbthrift_python_mutable_containers.MutableList[int] | _fbthrift_python_mutable_types._ThriftListWrapper]=...,
        StringSet: _typing.Optional[_fbthrift_python_mutable_containers.MutableSet[str] | _fbthrift_python_mutable_types._ThriftSetWrapper]=...,
        StringToI64Map: _typing.Optional[_fbthrift_python_mutable_containers.MutableMap[str, int] | _fbthrift_python_mutable_types._ThriftMapWrapper]=...
    ) -> None: ...

    def __call__(
        self, *,
        I32List: _typing.Optional[_fbthrift_python_mutable_containers.MutableList[int] | _fbthrift_python_mutable_types._ThriftListWrapper]=...,
        StringSet: _typing.Optional[_fbthrift_python_mutable_containers.MutableSet[str] | _fbthrift_python_mutable_types._ThriftSetWrapper]=...,
        StringToI64Map: _typing.Optional[_fbthrift_python_mutable_containers.MutableMap[str, int] | _fbthrift_python_mutable_types._ThriftMapWrapper]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[_fbthrift_python_mutable_containers.MutableList[int], _fbthrift_python_mutable_containers.MutableSet[str], _fbthrift_python_mutable_containers.MutableMap[str, int]]]]: ...
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.Containers": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.basic.module.types.Containers": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Containers": ...  # type: ignore
_fbthrift_Containers = Containers

class _fbthrift_compatible_with_MyDataItem:
    pass


class MyDataItem(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_MyDataItem, _fbthrift_python_abstract_types.MyDataItem):
    def __init__(
        self,
    ) -> None: ...

    def __call__(
        self,
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyDataItem": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.basic.module.types.MyDataItem": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyDataItem": ...  # type: ignore
_fbthrift_MyDataItem = MyDataItem

class _fbthrift_compatible_with_MyUnion:
    pass


class MyUnion(_fbthrift_python_mutable_types.MutableUnion, _fbthrift_compatible_with_MyUnion, _fbthrift_python_abstract_types.MyUnion):

    @property
    def myEnum(self) -> _fbthrift_MyEnum: ...
    @myEnum.setter
    def myEnum(self, value: _fbthrift_MyEnum) -> None: ...


    @property
    def myStruct(self) -> _fbthrift_MyStruct: ...
    @myStruct.setter
    def myStruct(self, value: _fbthrift_MyStruct) -> None: ...


    @property
    def myDataItem(self) -> _fbthrift_MyDataItem: ...
    @myDataItem.setter
    def myDataItem(self, value: _fbthrift_MyDataItem) -> None: ...


    @property
    def floatSet(self) -> _fbthrift_python_mutable_containers.MutableSet[float]: ...
    @floatSet.setter
    def floatSet(self, value: _fbthrift_python_mutable_containers.MutableSet[float] | _fbthrift_python_mutable_types._ThriftSetWrapper) -> None: ...

    def __init__(
        self, *,
        myEnum: _typing.Optional[_fbthrift_compatible_with_MyEnum]=...,
        myStruct: _typing.Optional[_fbthrift_compatible_with_MyStruct]=...,
        myDataItem: _typing.Optional[_fbthrift_compatible_with_MyDataItem]=...,
        floatSet: _typing.Optional[_fbthrift_python_mutable_containers.MutableSet[float] | _fbthrift_python_mutable_types._ThriftSetWrapper]=...
    ) -> None: ...



    class FbThriftUnionFieldEnum(enum.Enum):
        EMPTY: MyUnion.FbThriftUnionFieldEnum = ...
        myEnum: MyUnion.FbThriftUnionFieldEnum = ...
        myStruct: MyUnion.FbThriftUnionFieldEnum = ...
        myDataItem: MyUnion.FbThriftUnionFieldEnum = ...
        floatSet: MyUnion.FbThriftUnionFieldEnum = ...

    fbthrift_current_value: _typing.Final[_typing.Union[None, _fbthrift_MyEnum, _fbthrift_MyStruct, _fbthrift_MyDataItem, _fbthrift_python_mutable_containers.MutableSet[float]]]
    fbthrift_current_field: _typing.Final[FbThriftUnionFieldEnum]
    def get_type(self) -> FbThriftUnionFieldEnum: ...
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyUnion": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.basic.module.types.MyUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyUnion": ...  # type: ignore
_fbthrift_MyUnion = MyUnion

class _fbthrift_compatible_with_MyException:
    pass


class MyException(_fbthrift_python_mutable_exceptions.MutableGeneratedError, _fbthrift_compatible_with_MyException, _fbthrift_python_abstract_types.MyException):

    @property
    def MyIntField(self) -> int: ...
    @MyIntField.setter
    def MyIntField(self, value: int) -> None: ...


    @property
    def MyStringField(self) -> str: ...
    @MyStringField.setter
    def MyStringField(self, value: str) -> None: ...


    @property
    def myStruct(self) -> _fbthrift_MyStruct: ...
    @myStruct.setter
    def myStruct(self, value: _fbthrift_MyStruct) -> None: ...


    @property
    def myUnion(self) -> _fbthrift_MyUnion: ...
    @myUnion.setter
    def myUnion(self, value: _fbthrift_MyUnion) -> None: ...

    def __init__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyStringField: _typing.Optional[str]=...,
        myStruct: _typing.Optional[_fbthrift_compatible_with_MyStruct]=...,
        myUnion: _typing.Optional[_fbthrift_compatible_with_MyUnion]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, _fbthrift_MyStruct, _fbthrift_MyUnion]]]: ...
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyException": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.basic.module.types.MyException": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyException": ...  # type: ignore
_fbthrift_MyException = MyException

class _fbthrift_compatible_with_MyExceptionWithMessage:
    pass


class MyExceptionWithMessage(_fbthrift_python_mutable_exceptions.MutableGeneratedError, _fbthrift_compatible_with_MyExceptionWithMessage, _fbthrift_python_abstract_types.MyExceptionWithMessage):

    @property
    def MyIntField(self) -> int: ...
    @MyIntField.setter
    def MyIntField(self, value: int) -> None: ...


    @property
    def MyStringField(self) -> str: ...
    @MyStringField.setter
    def MyStringField(self, value: str) -> None: ...


    @property
    def myStruct(self) -> _fbthrift_MyStruct: ...
    @myStruct.setter
    def myStruct(self, value: _fbthrift_MyStruct) -> None: ...


    @property
    def myUnion(self) -> _fbthrift_MyUnion: ...
    @myUnion.setter
    def myUnion(self, value: _fbthrift_MyUnion) -> None: ...

    def __init__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyStringField: _typing.Optional[str]=...,
        myStruct: _typing.Optional[_fbthrift_compatible_with_MyStruct]=...,
        myUnion: _typing.Optional[_fbthrift_compatible_with_MyUnion]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, str, _fbthrift_MyStruct, _fbthrift_MyUnion]]]: ...
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyExceptionWithMessage": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.basic.module.types.MyExceptionWithMessage": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.MyExceptionWithMessage": ...  # type: ignore
_fbthrift_MyExceptionWithMessage = MyExceptionWithMessage

class _fbthrift_compatible_with_ReservedKeyword:
    pass


class ReservedKeyword(_fbthrift_python_mutable_types.MutableStruct, _fbthrift_compatible_with_ReservedKeyword, _fbthrift_python_abstract_types.ReservedKeyword):

    @property
    def reserved_field(self) -> int: ...
    @reserved_field.setter
    def reserved_field(self, value: int) -> None: ...

    def __init__(
        self, *,
        reserved_field: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        reserved_field: _typing.Optional[int]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.ReservedKeyword": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.basic.module.types.ReservedKeyword": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.ReservedKeyword": ...  # type: ignore
_fbthrift_ReservedKeyword = ReservedKeyword

class _fbthrift_compatible_with_UnionToBeRenamed:
    pass


class UnionToBeRenamed(_fbthrift_python_mutable_types.MutableUnion, _fbthrift_compatible_with_UnionToBeRenamed, _fbthrift_python_abstract_types.UnionToBeRenamed):

    @property
    def reserved_field(self) -> int: ...
    @reserved_field.setter
    def reserved_field(self, value: int) -> None: ...

    def __init__(
        self, *,
        reserved_field: _typing.Optional[int]=...
    ) -> None: ...



    class FbThriftUnionFieldEnum(enum.Enum):
        EMPTY: UnionToBeRenamed.FbThriftUnionFieldEnum = ...
        reserved_field: UnionToBeRenamed.FbThriftUnionFieldEnum = ...

    fbthrift_current_value: _typing.Final[_typing.Union[None, int]]
    fbthrift_current_field: _typing.Final[FbThriftUnionFieldEnum]
    def get_type(self) -> FbThriftUnionFieldEnum: ...
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.UnionToBeRenamed": ...  # type: ignore
    def _to_mutable_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.basic.module.types.UnionToBeRenamed": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.UnionToBeRenamed": ...  # type: ignore
_fbthrift_UnionToBeRenamed = UnionToBeRenamed


FLAG: bool = ...

OFFSET: int = ...

COUNT: int = ...

MASK: int = ...

E: float = ...

DATE: str = ...

AList: _typing.List[int] = ...

ASet: _typing.Set[str] = ...

AMap: _typing.Dict[str, _fbthrift_python_mutable_containers.MutableList[int]] = ...

MyEnumAlias = _fbthrift_MyEnum
MyDataItemAlias = _fbthrift_MyDataItem


class _fbthrift_FooService_simple_rpc_args(_fbthrift_python_mutable_types.MutableStruct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_FooService_simple_rpc_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_FB303Service_simple_rpc_args(_fbthrift_python_mutable_types.MutableStruct):
    int_parameter: _typing.Final[int] = ...

    def __init__(
        self, *,
        int_parameter: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_FB303Service_simple_rpc_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[_fbthrift_ReservedKeyword]

    def __init__(
        self, *, success: _typing.Optional[_fbthrift_ReservedKeyword] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            _fbthrift_ReservedKeyword,
        ]]]: ...


class _fbthrift_MyService_ping_args(_fbthrift_python_mutable_types.MutableStruct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_MyService_ping_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_MyService_getRandomData_args(_fbthrift_python_mutable_types.MutableStruct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_MyService_getRandomData_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[str]

    def __init__(
        self, *, success: _typing.Optional[str] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            str,
        ]]]: ...


class _fbthrift_MyService_sink_args(_fbthrift_python_mutable_types.MutableStruct):
    sink: _typing.Final[int] = ...

    def __init__(
        self, *,
        sink: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_MyService_sink_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_MyService_putDataById_args(_fbthrift_python_mutable_types.MutableStruct):
    id: _typing.Final[int] = ...
    data: _typing.Final[str] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=...,
        data: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int, str]]]: ...


class _fbthrift_MyService_putDataById_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_MyService_hasDataById_args(_fbthrift_python_mutable_types.MutableStruct):
    id: _typing.Final[int] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_MyService_hasDataById_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[bool]

    def __init__(
        self, *, success: _typing.Optional[bool] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            bool,
        ]]]: ...


class _fbthrift_MyService_getDataById_args(_fbthrift_python_mutable_types.MutableStruct):
    id: _typing.Final[int] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_MyService_getDataById_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[str]

    def __init__(
        self, *, success: _typing.Optional[str] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            str,
        ]]]: ...


class _fbthrift_MyService_deleteDataById_args(_fbthrift_python_mutable_types.MutableStruct):
    id: _typing.Final[int] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int]]]: ...


class _fbthrift_MyService_deleteDataById_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_MyService_lobDataById_args(_fbthrift_python_mutable_types.MutableStruct):
    id: _typing.Final[int] = ...
    data: _typing.Final[str] = ...

    def __init__(
        self, *,
        id: _typing.Optional[int]=...,
        data: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, int, str]]]: ...


class _fbthrift_MyService_invalid_return_for_hack_args(_fbthrift_python_mutable_types.MutableStruct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_MyService_invalid_return_for_hack_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[_fbthrift_python_mutable_containers.MutableSet[float]]

    def __init__(
        self, *, success: _typing.Optional[_fbthrift_python_mutable_containers.MutableSet[float]] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            _fbthrift_python_mutable_containers.MutableSet[float],
        ]]]: ...


class _fbthrift_MyService_rpc_skipped_codegen_args(_fbthrift_python_mutable_types.MutableStruct):

    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None]]]: ...


class _fbthrift_MyService_rpc_skipped_codegen_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[None]

    def __init__(
        self, *, success: _typing.Optional[None] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            None,
        ]]]: ...


class _fbthrift_DbMixedStackArguments_getDataByKey0_args(_fbthrift_python_mutable_types.MutableStruct):
    key: _typing.Final[str] = ...

    def __init__(
        self, *,
        key: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, str]]]: ...


class _fbthrift_DbMixedStackArguments_getDataByKey0_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[bytes]

    def __init__(
        self, *, success: _typing.Optional[bytes] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            bytes,
        ]]]: ...


class _fbthrift_DbMixedStackArguments_getDataByKey1_args(_fbthrift_python_mutable_types.MutableStruct):
    key: _typing.Final[str] = ...

    def __init__(
        self, *,
        key: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[None, str]]]: ...


class _fbthrift_DbMixedStackArguments_getDataByKey1_result(_fbthrift_python_mutable_types.MutableStruct):
    success: _typing.Final[bytes]

    def __init__(
        self, *, success: _typing.Optional[bytes] = ...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[
        str,
        _typing.Union[
            bytes,
        ]]]: ...
