#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import thrift.python.types as _fbthrift_python_types
import apache.thrift.fixtures.types.module.thrift_metadata

class has_bitwise_ops(_fbthrift_python_types.Enum, int):
    none = 0
    zero = 1
    one = 2
    two = 4
    three = 8
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.has_bitwise_ops"

    @staticmethod
    def __get_thrift_uri__():
        return "apache.org/thrift/fixtures/types/has_bitwise_ops"

    @staticmethod
    def __get_metadata__():
        return apache.thrift.fixtures.types.module.thrift_metadata.gen_metadata_enum_has_bitwise_ops()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.fixtures.types.module.types")
        return py3_types.has_bitwise_ops(self.value)

    def _to_py_deprecated(self):
        return self.value

class is_unscoped(_fbthrift_python_types.Enum, int):
    hello = 0
    world = 1
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.is_unscoped"

    @staticmethod
    def __get_thrift_uri__():
        return "apache.org/thrift/fixtures/types/is_unscoped"

    @staticmethod
    def __get_metadata__():
        return apache.thrift.fixtures.types.module.thrift_metadata.gen_metadata_enum_is_unscoped()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.fixtures.types.module.types")
        return py3_types.is_unscoped(self.value)

    def _to_py_deprecated(self):
        return self.value

class MyForwardRefEnum(_fbthrift_python_types.Enum, int):
    ZERO = 0
    NONZERO = 12
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyForwardRefEnum"

    @staticmethod
    def __get_thrift_uri__():
        return "apache.org/thrift/fixtures/types/MyForwardRefEnum"

    @staticmethod
    def __get_metadata__():
        return apache.thrift.fixtures.types.module.thrift_metadata.gen_metadata_enum_MyForwardRefEnum()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("apache.thrift.fixtures.types.module.types")
        return py3_types.MyForwardRefEnum(self.value)

    def _to_py_deprecated(self):
        return self.value
