#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/py3/src/empty.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.memory cimport shared_ptr
from thrift.python.server_impl.async_processor cimport cAsyncProcessorFactory
from folly cimport cFollyExecutor


cdef extern from "thrift/compiler/test/fixtures/py3/gen-py3/empty/services_wrapper.h" namespace "::cpp2":
    shared_ptr[cAsyncProcessorFactory] cNullServiceInterface "::cpp2::NullServiceInterface"(PyObject *if_object, cFollyExecutor* Q) except *
