#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import thrift.python.types as _fbthrift_python_types
import module.thrift_metadata

class Result(_fbthrift_python_types.Enum, int):
    OK = 0
    SO_SO = 1
    GOOD = 2
    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Result"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        return module.thrift_metadata.gen_metadata_enum_Result()

    def _to_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        return py3_types.Result(self.value)

    def _to_py_deprecated(self):
        return self.value
