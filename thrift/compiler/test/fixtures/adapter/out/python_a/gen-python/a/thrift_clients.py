#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import typing as _typing

import apache.thrift.metadata.thrift_types as _fbthrift_metadata
import folly.iobuf as _fbthrift_iobuf
from thrift.python.client import (
    AsyncClient as _fbthrift_python_AsyncClient,
    SyncClient as _fbthrift_python_SyncClient,
    Client as _fbthrift_python_Client,
)
from thrift.python.client.omni_client import InteractionMethodPosition as _fbthrift_InteractionMethodPosition, FunctionQualifier as _fbthrift_FunctionQualifier
from thrift.python.common import RpcOptions
import thrift.python.exceptions as _fbthrift_python_exceptions
import thrift.python.types as _fbthrift_python_types
import a.thrift_types as _fbthrift__a__thrift_types
import a.thrift_metadata
import b.thrift_types as _fbthrift__b__thrift_types
import c.thrift_types as _fbthrift__c__thrift_types
import three
import two
import one
import typeshed_three
import typeshed_two
import typeshed_one

class MyService(_fbthrift_python_Client["MyService.Async", "MyService.Sync"]):
    @staticmethod
    def __get_thrift_name__() -> str:
        return "a.MyService"
    
    @staticmethod
    def __get_thrift_uri__() -> _typing.Optional[str]:
        return None
    
    @staticmethod
    def __get_thrift_unstructured_annotations_DEPRECATED__() -> _typing.Mapping[str, str]:
        return {
        }
    
    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return a.thrift_metadata.gen_metadata_service_MyService()
    
    class Async(_fbthrift_python_AsyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "a.MyService"
    
        @staticmethod
        def __get_thrift_uri__() -> _typing.Optional[str]:
            return None
    
        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return a.thrift_metadata.gen_metadata_service_MyService()
    
        async def adapted_return(
            self,
            *,
            rpc_options: _typing.Optional[RpcOptions] = None,
        ) -> typeshed_one.AdapterOneType[_fbthrift__b__thrift_types.B]:
            _fbthrift_resp = await self._send_request(
                "MyService",
                "adapted_return",
                _fbthrift__a__thrift_types._fbthrift_MyService_adapted_return_args(),
                _fbthrift__a__thrift_types._fbthrift_MyService_adapted_return_result,
                qualifier = _fbthrift_FunctionQualifier.Unspecified,
                uri_or_name="MyService",
                rpc_options=rpc_options,
            )
            # shortcut to success path for non-void returns
            if _fbthrift_resp.success is not None:
                return _fbthrift_resp.success
            raise _fbthrift_python_exceptions.ApplicationError(
                _fbthrift_python_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )
    
        async def adapted_param(
            self,
            param: typeshed_two.AdapterTwoType[_fbthrift__c__thrift_types.C2],
            *,
            rpc_options: _typing.Optional[RpcOptions] = None,
        ) -> None:
            _fbthrift_resp = await self._send_request(
                "MyService",
                "adapted_param",
                _fbthrift__a__thrift_types._fbthrift_MyService_adapted_param_args(
                    param=param,),
                _fbthrift__a__thrift_types._fbthrift_MyService_adapted_param_result,
                qualifier = _fbthrift_FunctionQualifier.Unspecified,
                uri_or_name="MyService",
                rpc_options=rpc_options,
            )
    
    
    # pyre-ignore[4]: Missing annotation.
    adapted_return = Async.adapted_return
    # pyre-ignore[4]: Missing annotation.
    adapted_param = Async.adapted_param
    
    class Sync(_fbthrift_python_SyncClient):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "a.MyService"
    
        @staticmethod
        def __get_thrift_uri__() -> _typing.Optional[str]:
            return None
    
        @staticmethod
        def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
            return a.thrift_metadata.gen_metadata_service_MyService()
    
        def adapted_return(
            self,
            *,
            rpc_options: _typing.Optional[RpcOptions] = None,
        ) -> typeshed_one.AdapterOneType[_fbthrift__b__thrift_types.B]:
            _fbthrift_resp = self._send_request(
                "MyService",
                "adapted_return",
                _fbthrift__a__thrift_types._fbthrift_MyService_adapted_return_args(),
                _fbthrift__a__thrift_types._fbthrift_MyService_adapted_return_result,
                uri_or_name="MyService",
                rpc_options=rpc_options,
            )
            # shortcut to success path for non-void returns
            if _fbthrift_resp.success is not None:
                return _fbthrift_resp.success
            raise _fbthrift_python_exceptions.ApplicationError(
                _fbthrift_python_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )
    
        def adapted_param(
            self,
            param: typeshed_two.AdapterTwoType[_fbthrift__c__thrift_types.C2],
            *,
            rpc_options: _typing.Optional[RpcOptions] = None,
        ) -> None:
            _fbthrift_resp = self._send_request(
                "MyService",
                "adapted_param",
                _fbthrift__a__thrift_types._fbthrift_MyService_adapted_param_args(
                    param=param,),
                _fbthrift__a__thrift_types._fbthrift_MyService_adapted_param_result,
                uri_or_name="MyService",
                rpc_options=rpc_options,
            )

