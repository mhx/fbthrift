
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from cpython.ref cimport PyObject
from libc.stdint cimport int64_t
from libcpp.memory cimport unique_ptr as __unique_ptr

from folly.iobuf cimport cIOBuf as __cIOBuf


cdef api int can_extract__module__CustomException(object) except -1


cdef api object init__module__CustomException(object data)

cdef api int can_extract__module__Result(object) except -1

cdef api object construct__module__Result(int64_t)

