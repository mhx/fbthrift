#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf

from abc import ABCMeta as _fbthrift_ABCMeta
import module.thrift_abstract_types as _fbthrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_typeinfos as _fbthrift_python_mutable_typeinfos



class Limits(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "max_i64_field",  # name
            "max_i64_field",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            9223372036854775807,  # default value
            None,  # adapter info
            True, # field type is primitive
            5, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "min_i64_field",  # name
            "min_i64_field",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            -9223372036854775808,  # default value
            None,  # adapter info
            True, # field type is primitive
            5, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "max_i32_field",  # name
            "max_i32_field",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            2147483647,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            4,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "min_i32_field",  # name
            "min_i32_field",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            -2147483648,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            5,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "max_i16_field",  # name
            "max_i16_field",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i16,  # typeinfo
            32767,  # default value
            None,  # adapter info
            True, # field type is primitive
            3, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            6,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "min_i16_field",  # name
            "min_i16_field",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i16,  # typeinfo
            -32768,  # default value
            None,  # adapter info
            True, # field type is primitive
            3, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            7,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "max_byte_field",  # name
            "max_byte_field",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_byte,  # typeinfo
            127,  # default value
            None,  # adapter info
            True, # field type is primitive
            2, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            8,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "min_byte_field",  # name
            "min_byte_field",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_byte,  # typeinfo
            -128,  # default value
            None,  # adapter info
            True, # field type is primitive
            2, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Limits"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        from thrift.python import converter
        import importlib
        immutable_types = importlib.import_module("module.thrift_types")
        return converter.to_python_struct(immutable_types.Limits, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        from thrift.py3 import converter
        return converter.to_py3_struct(py3_types.Limits, self)

    def _to_py_deprecated(self):
        import importlib
        from thrift.util import converter
        try:
            py_deprecated_types = importlib.import_module("module.ttypes")
            return converter.to_py_struct(py_deprecated_types.Limits, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("module.ttypes")
            return converter.to_py_struct(py_asyncio_types.Limits, self)

_fbthrift_ABCMeta.register(_fbthrift_abstract_types.Limits, Limits)
_fbthrift_Limits = Limits


_fbthrift_all_enums = [
]


_fbthrift_all_structs = [
    Limits,
]
_fbthrift_python_mutable_types.fill_specs(*_fbthrift_all_structs)


max_i64_const = 9223372036854775807

min_i64_const = -9223372036854775808

max_i32_const = 2147483647

min_i32_const = -2147483648

max_i16_const = 32767

min_i16_const = -32768

max_byte_const = 127

min_byte_const = -128
