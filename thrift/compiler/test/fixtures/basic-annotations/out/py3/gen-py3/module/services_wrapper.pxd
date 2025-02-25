#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.memory cimport shared_ptr
from thrift.python.server_impl.async_processor cimport cAsyncProcessorFactory
from folly cimport cFollyExecutor


cdef extern from "thrift/compiler/test/fixtures/basic-annotations/gen-py3/module/services_wrapper.h" namespace "::cpp2":
    shared_ptr[cAsyncProcessorFactory] cMyServiceInterface "::cpp2::MyServiceInterface"(PyObject *if_object, cFollyExecutor* Q) except *
    shared_ptr[cAsyncProcessorFactory] cMyServicePrioParentInterface "::cpp2::MyServicePrioParentInterface"(PyObject *if_object, cFollyExecutor* Q) except *
    shared_ptr[cAsyncProcessorFactory] cMyServicePrioChildInterface "::cpp2::MyServicePrioChildInterface"(PyObject *if_object, cFollyExecutor* Q) except *
    shared_ptr[cAsyncProcessorFactory] cBadServiceInterface "::cpp2::BadServiceInterface"(PyObject *if_object, cFollyExecutor* Q) except *
    shared_ptr[cAsyncProcessorFactory] cFooBarBazServiceInterface "::cpp2::FooBarBazServiceInterface"(PyObject *if_object, cFollyExecutor* Q) except *
