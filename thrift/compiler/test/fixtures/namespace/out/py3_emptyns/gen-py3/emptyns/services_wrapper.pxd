#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace/src/emptyns.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.memory cimport shared_ptr
from thrift.python.server_impl.async_processor cimport cAsyncProcessorFactory
from folly cimport cFollyExecutor


cdef extern from "thrift/compiler/test/fixtures/namespace/gen-py3/emptyns/services_wrapper.h" namespace "::cpp2":
    shared_ptr[cAsyncProcessorFactory] cTestServiceInterface "::cpp2::TestServiceInterface"(PyObject *if_object, cFollyExecutor* Q) except *
