#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.vector cimport vector as vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from cython.operator cimport dereference as deref, typeid
from cpython.ref cimport PyObject
from thrift.py3.client cimport cRequestChannel_ptr, makeClientWrapper, cClientWrapper
from thrift.py3.exceptions cimport try_make_shared_exception, create_py_exception
from folly cimport cFollyTry, cFollyUnit, c_unit
from folly.cast cimport down_cast_ptr
from libcpp.typeinfo cimport type_info
import thrift.py3.types
cimport thrift.py3.types
from thrift.py3.types cimport move
import thrift.py3.client
cimport thrift.py3.client
from thrift.py3.common cimport RpcOptions as __RpcOptions
from thrift.py3.common import (
  RpcOptions as __RpcOptions,
  InterfaceSpec as __InterfaceSpec,
  MethodSpec as __MethodSpec,
  ArgumentSpec as __ArgumentSpec,
)

from folly.futures cimport bridgeFutureWith
from folly.executor cimport get_executor
cimport folly.iobuf as __iobuf
import folly.iobuf as __iobuf
from folly.iobuf cimport move as move_iobuf
cimport cython

import sys
import types as _py_types
from asyncio import get_event_loop as asyncio_get_event_loop, shield as asyncio_shield, InvalidStateError as asyncio_InvalidStateError

cimport module.types as _module_types
import module.types as _module_types

from module.clients_wrapper cimport cRaiserAsyncClient, cRaiserClientWrapper


cdef void Raiser_doBland_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(None)
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void Raiser_doRaise_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException[_module_types.cBanal]():
        pyfuture.set_exception(_module_types.Banal.create(try_make_shared_exception[_module_types.cBanal](result.exception())))
    elif result.hasException[_module_types.cFiery]():
        pyfuture.set_exception(_module_types.Fiery.create(try_make_shared_exception[_module_types.cFiery](result.exception())))
    elif result.hasException[_module_types.cSerious]():
        pyfuture.set_exception(_module_types.Serious.create(try_make_shared_exception[_module_types.cSerious](result.exception())))
    elif result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(None)
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void Raiser_get200_callback(
    cFollyTry[string]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(result.value().data().decode('UTF-8'))
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void Raiser_get500_callback(
    cFollyTry[string]&& result,
    PyObject* userdata
):
    client, pyfuture, options = <object> userdata  
    if result.hasException[_module_types.cFiery]():
        pyfuture.set_exception(_module_types.Fiery.create(try_make_shared_exception[_module_types.cFiery](result.exception())))
    elif result.hasException[_module_types.cBanal]():
        pyfuture.set_exception(_module_types.Banal.create(try_make_shared_exception[_module_types.cBanal](result.exception())))
    elif result.hasException[_module_types.cSerious]():
        pyfuture.set_exception(_module_types.Serious.create(try_make_shared_exception[_module_types.cSerious](result.exception())))
    elif result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(result.value().data().decode('UTF-8'))
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))


cdef object _Raiser_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class Raiser(thrift.py3.client.Client):
    annotations = _Raiser_annotations

    cdef const type_info* _typeid(Raiser self):
        return &typeid(cRaiserAsyncClient)

    cdef bind_client(Raiser self, cRequestChannel_ptr&& channel):
        self._client = makeClientWrapper[cRaiserAsyncClient, cRaiserClientWrapper](
            thrift.py3.client.move(channel)
        )

    @cython.always_allow_keywords(True)
    def doBland(
            Raiser self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[cFollyUnit](
            self._executor,
            down_cast_ptr[cRaiserClientWrapper, cClientWrapper](self._client.get()).doBland(rpc_options._cpp_obj, 
            ),
            Raiser_doBland_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

    @cython.always_allow_keywords(True)
    def doRaise(
            Raiser self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[cFollyUnit](
            self._executor,
            down_cast_ptr[cRaiserClientWrapper, cClientWrapper](self._client.get()).doRaise(rpc_options._cpp_obj, 
            ),
            Raiser_doRaise_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

    @cython.always_allow_keywords(True)
    def get200(
            Raiser self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[string](
            self._executor,
            down_cast_ptr[cRaiserClientWrapper, cClientWrapper](self._client.get()).get200(rpc_options._cpp_obj, 
            ),
            Raiser_get200_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

    @cython.always_allow_keywords(True)
    def get500(
            Raiser self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[string](
            self._executor,
            down_cast_ptr[cRaiserClientWrapper, cClientWrapper](self._client.get()).get500(rpc_options._cpp_obj, 
            ),
            Raiser_get500_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)


    
    @staticmethod
    def __get_reflection_for_doBland():
      return __MethodSpec(
        name="doBland",
        arguments=[],
        result=None,
        exceptions=[],
        annotations=_py_types.MappingProxyType({
        }),
      )
    @staticmethod
    def __get_reflection_for_doRaise():
      return __MethodSpec(
        name="doRaise",
        arguments=[],
        result=None,
        exceptions=[
          _module_types.Banal,
        
          _module_types.Fiery,
        
          _module_types.Serious,
        ],
        annotations=_py_types.MappingProxyType({
        }),
      )
    @staticmethod
    def __get_reflection_for_get200():
      return __MethodSpec(
        name="get200",
        arguments=[],
        result=str,
        exceptions=[],
        annotations=_py_types.MappingProxyType({
        }),
      )
    @staticmethod
    def __get_reflection_for_get500():
      return __MethodSpec(
        name="get500",
        arguments=[],
        result=str,
        exceptions=[
          _module_types.Fiery,
        
          _module_types.Banal,
        
          _module_types.Serious,
        ],
        annotations=_py_types.MappingProxyType({
        }),
      )
    
    @classmethod
    def __get_reflection__(cls):
      return __InterfaceSpec(
        name="Raiser",
        methods=[
          cls.__get_reflection_for_doBland(),
                cls.__get_reflection_for_doRaise(),
                cls.__get_reflection_for_get200(),
                cls.__get_reflection_for_get500(),
          ],
        annotations=_py_types.MappingProxyType({
        }),
      )

