#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.memory cimport shared_ptr
from thrift.python.server_impl.async_processor cimport cAsyncProcessorFactory
from folly cimport cFollyExecutor


cdef extern from "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/gen-py3/module/services_wrapper.h" namespace "::test::namespace_from_package_without_module_name":
    shared_ptr[cAsyncProcessorFactory] cTestServiceInterface "::test::namespace_from_package_without_module_name::TestServiceInterface"(PyObject *if_object, cFollyExecutor* Q) except *
