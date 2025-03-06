#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-stack-arguments/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.client
import thrift.py3.common
import typing as _typing
from types import TracebackType

import module.types as _module_types


_MyServiceT = _typing.TypeVar('_MyServiceT', bound='MyService')


class MyService(thrift.py3.client.Client):

    async def hasDataById(
        self,
        id: int,
        *,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> bool: ...

    async def getDataById(
        self,
        id: int,
        *,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> str: ...

    async def putDataById(
        self,
        id: int,
        data: str,
        *,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> None: ...

    async def lobDataById(
        self,
        id: int,
        data: str,
        *,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> None: ...



_MyServiceFastT = _typing.TypeVar('_MyServiceFastT', bound='MyServiceFast')


class MyServiceFast(thrift.py3.client.Client):

    async def hasDataById(
        self,
        id: int,
        *,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> bool: ...

    async def getDataById(
        self,
        id: int,
        *,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> str: ...

    async def putDataById(
        self,
        id: int,
        data: str,
        *,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> None: ...

    async def lobDataById(
        self,
        id: int,
        data: str,
        *,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> None: ...



_DbMixedStackArgumentsT = _typing.TypeVar('_DbMixedStackArgumentsT', bound='DbMixedStackArguments')


class DbMixedStackArguments(thrift.py3.client.Client):

    async def getDataByKey0(
        self,
        key: str,
        *,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> bytes: ...

    async def getDataByKey1(
        self,
        key: str,
        *,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> bytes: ...

