#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/inheritance/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.memory cimport shared_ptr
from thrift.python.server_impl.async_processor cimport cAsyncProcessorFactory
from folly cimport cFollyExecutor


cdef extern from "thrift/compiler/test/fixtures/inheritance/gen-py3/module/services_wrapper.h" namespace "::cpp2":
    shared_ptr[cAsyncProcessorFactory] cMyRootInterface "::cpp2::MyRootInterface"(PyObject *if_object, cFollyExecutor* Q) except *
    shared_ptr[cAsyncProcessorFactory] cMyNodeInterface "::cpp2::MyNodeInterface"(PyObject *if_object, cFollyExecutor* Q) except *
    shared_ptr[cAsyncProcessorFactory] cMyLeafInterface "::cpp2::MyLeafInterface"(PyObject *if_object, cFollyExecutor* Q) except *
