#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace/src/emptyns.thrift
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

import emptyns.types as _emptyns_types


_TestServiceT = _typing.TypeVar('_TestServiceT', bound='TestService')


class TestService(thrift.py3.client.Client):

    async def init(
        self,
        int1: int,
        *,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> int: ...

