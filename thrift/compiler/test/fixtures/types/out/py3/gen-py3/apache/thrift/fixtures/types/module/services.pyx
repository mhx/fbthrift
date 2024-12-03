#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/types/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport cython
from typing import AsyncIterator
from cpython.version cimport PY_VERSION_HEX
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from libcpp.pair cimport pair
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.python.exceptions cimport (
    ApplicationError as __ApplicationError,
    cTApplicationException,
    cTApplicationExceptionType__UNKNOWN,
)
from thrift.py3.server cimport ServiceInterface, RequestContext, Cpp2RequestContext
from thrift.py3.server import RequestContext
from folly cimport (
  cFollyPromise,
  cFollyUnit,
  c_unit,
)
from thrift.python.common cimport (
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

from thrift.py3.server cimport THRIFT_REQUEST_CONTEXT as __THRIFT_REQUEST_CONTEXT
from thrift.py3.types cimport make_unique

cimport folly.futures
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
from folly.memory cimport to_shared_ptr as __to_shared_ptr

cimport apache.thrift.fixtures.types.module.types as _apache_thrift_fixtures_types_module_types
cimport apache.thrift.fixtures.types.module.cbindings as _apache_thrift_fixtures_types_module_cbindings
import apache.thrift.fixtures.types.module.types as _apache_thrift_fixtures_types_module_types
import apache.thrift.fixtures.types.included.types as _apache_thrift_fixtures_types_included_types
cimport apache.thrift.fixtures.types.included.types as _apache_thrift_fixtures_types_included_types
cimport apache.thrift.fixtures.types.included.cbindings as _apache_thrift_fixtures_types_included_cbindings

import apache.thrift.fixtures.types.module.services_reflection as _services_reflection
cimport apache.thrift.fixtures.types.module.services_reflection as _services_reflection

import asyncio
import functools
import sys
import traceback
import types as _py_types

from apache.thrift.fixtures.types.module.services_wrapper cimport cSomeServiceInterface



@cython.auto_pickle(False)
cdef class Promise_cmap__binary_cint64_t:
    cdef cFollyPromise[unique_ptr[cmap[string,cint64_t]]]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[unique_ptr[cmap[string,cint64_t]]](cFollyPromise[unique_ptr[cmap[string,cint64_t]]].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[unique_ptr[cmap[string,cint64_t]]] cPromise):
        cdef Promise_cmap__binary_cint64_t inst = Promise_cmap__binary_cint64_t.__new__(Promise_cmap__binary_cint64_t)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise__apache_thrift_fixtures_types_module_cbindings_std_unordered_map__cint32_t_string:
    cdef cFollyPromise[unique_ptr[_apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,string]]]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[unique_ptr[_apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,string]]](cFollyPromise[unique_ptr[_apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,string]]].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[unique_ptr[_apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,string]]] cPromise):
        cdef Promise__apache_thrift_fixtures_types_module_cbindings_std_unordered_map__cint32_t_string inst = Promise__apache_thrift_fixtures_types_module_cbindings_std_unordered_map__cint32_t_string.__new__(Promise__apache_thrift_fixtures_types_module_cbindings_std_unordered_map__cint32_t_string)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise_cFollyUnit:
    cdef cFollyPromise[cFollyUnit]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[cFollyUnit](cFollyPromise[cFollyUnit].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[cFollyUnit] cPromise):
        cdef Promise_cFollyUnit inst = Promise_cFollyUnit.__new__(Promise_cFollyUnit)
        inst.cPromise[0] = cmove(cPromise)
        return inst

cdef object _SomeService_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class SomeServiceInterface(
    ServiceInterface
):
    annotations = _SomeService_annotations

    def __cinit__(self):
        self._cpp_obj = cSomeServiceInterface(
            <PyObject *> self,
            get_executor()
        )

    async def bounce_map(
            self,
            m):
        raise NotImplementedError("async def bounce_map is not implemented")

    async def binary_keyed_map(
            self,
            r):
        raise NotImplementedError("async def binary_keyed_map is not implemented")

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__SomeService(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cSomeServiceSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.SomeService"



cdef api void call_cy_SomeService_bounce_map(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[_apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,string]]] cPromise,
    unique_ptr[_apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,string]] m
) noexcept:
    cdef Promise__apache_thrift_fixtures_types_module_cbindings_std_unordered_map__cint32_t_string __promise = Promise__apache_thrift_fixtures_types_module_cbindings_std_unordered_map__cint32_t_string._fbthrift_create(cmove(cPromise))
    arg_m = _apache_thrift_fixtures_types_module_types.std_unordered_map__Map__i32_string__from_cpp(deref(m))
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        SomeService_bounce_map_coro(
            self,
            __promise,
            arg_m
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_SomeService_binary_keyed_map(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[cmap[string,cint64_t]]] cPromise,
    unique_ptr[vector[cint64_t]] r
) noexcept:
    cdef Promise_cmap__binary_cint64_t __promise = Promise_cmap__binary_cint64_t._fbthrift_create(cmove(cPromise))
    arg_r = _apache_thrift_fixtures_types_module_types.List__i64__from_cpp(deref(r))
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        SomeService_binary_keyed_map_coro(
            self,
            __promise,
            arg_r
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_SomeService_onStartServing(
    object self,
    cFollyPromise[cFollyUnit] cPromise
) noexcept:
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        SomeService_onStartServing_coro(
            self,
            __promise
        )
    )
cdef api void call_cy_SomeService_onStopRequested(
    object self,
    cFollyPromise[cFollyUnit] cPromise
) noexcept:
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        SomeService_onStopRequested_coro(
            self,
            __promise
        )
    )
async def SomeService_bounce_map_coro(
    object self,
    Promise__apache_thrift_fixtures_types_module_cbindings_std_unordered_map__cint32_t_string promise,
    m
):
    try:
        result = await self.bounce_map(
                    m)
        result = _apache_thrift_fixtures_types_module_types.std_unordered_map__Map__i32_string(result)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler SomeService.bounce_map:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler SomeService.bounce_map:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[_apache_thrift_fixtures_types_module_cbindings.std_unordered_map[cint32_t,string]](_apache_thrift_fixtures_types_module_types.std_unordered_map__Map__i32_string__make_instance(result)))

async def SomeService_binary_keyed_map_coro(
    object self,
    Promise_cmap__binary_cint64_t promise,
    r
):
    try:
        result = await self.binary_keyed_map(
                    r)
        result = _apache_thrift_fixtures_types_module_types.Map__binary_i64(result)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler SomeService.binary_keyed_map:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler SomeService.binary_keyed_map:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[cmap[string,cint64_t]](_apache_thrift_fixtures_types_module_types.Map__binary_i64__make_instance(result)))

async def SomeService_onStartServing_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStartServing()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler SomeService.onStartServing:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler SomeService.onStartServing:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

async def SomeService_onStopRequested_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStopRequested()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler SomeService.onStopRequested:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler SomeService.onStopRequested:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

