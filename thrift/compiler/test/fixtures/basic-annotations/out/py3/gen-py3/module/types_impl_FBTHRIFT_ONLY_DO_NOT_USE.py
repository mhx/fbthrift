#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import enum
import thrift.py3.types
import module.thrift_metadata as _fbthrift_python_metadata
try:
    import module.thrift_types as _fbthrift_python_types
except Exception: # TODO(T205494848): fix thrift-python import failures
    _fbthrift_python_types = None

_fbthrift__module_name__ = "module.types"



class MyEnum(thrift.py3.types.CompiledEnum):
    MyValue1 = 0
    MyValue2 = 1
    DOMAIN = 2

    __module__ = _fbthrift__module_name__
    __slots__ = ()

    @staticmethod
    def __get_metadata__():
        return _fbthrift_python_metadata.gen_metadata_enum_MyEnum()

    @staticmethod
    def __get_thrift_name__():
        return "module.MyEnum"

    def _to_python(self):
        if _fbthrift_python_types is None:
            raise AttributeError(
                "Enum MyEnum doesn't define `_to_python` because couldn't import "
                "module.thrift_types"
            )

        return _fbthrift_python_types.MyEnum(self._fbthrift_value_)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self._fbthrift_value_

    def __int__(self):
        return self._fbthrift_value_

    def __index__(self):
        return self._fbthrift_value_




