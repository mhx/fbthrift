#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/stream/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.memory cimport shared_ptr
from thrift.python.server_impl.async_processor cimport cAsyncProcessorFactory
from folly cimport cFollyExecutor


cdef extern from "thrift/compiler/test/fixtures/stream/gen-py3/module/services_wrapper.h" namespace "::cpp2":
    shared_ptr[cAsyncProcessorFactory] cPubSubStreamingServiceInterface "::cpp2::PubSubStreamingServiceInterface"(PyObject *if_object, cFollyExecutor* Q) except *
