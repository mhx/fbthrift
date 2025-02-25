#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf

from abc import ABCMeta as _fbthrift_ABCMeta
import test.namespace_from_package.module.thrift_abstract_types as _fbthrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_typeinfos as _fbthrift_python_mutable_typeinfos



class Foo(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyInt",  # name
            "MyInt",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            5, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.Foo"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/namespace_from_package/module/Foo"

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        from thrift.python import converter
        import importlib
        immutable_types = importlib.import_module("test.namespace_from_package.module.thrift_types")
        return converter.to_python_struct(immutable_types.Foo, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.namespace_from_package.module.types")
        from thrift.py3 import converter
        return converter.to_py3_struct(py3_types.Foo, self)

    def _to_py_deprecated(self):
        import importlib
        from thrift.util import converter
        try:
            py_deprecated_types = importlib.import_module("namespace_from_package.module.ttypes")
            return converter.to_py_struct(py_deprecated_types.Foo, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("test.namespace_from_package.module.ttypes")
            return converter.to_py_struct(py_asyncio_types.Foo, self)

_fbthrift_ABCMeta.register(_fbthrift_abstract_types.Foo, Foo)
_fbthrift_Foo = Foo


_fbthrift_all_enums = [
]


_fbthrift_all_structs = [
    Foo,
]
_fbthrift_python_mutable_types.fill_specs(*_fbthrift_all_structs)



class _fbthrift_TestService_init_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "int1",  # name
            "int1",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            5, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_TestService_init_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
    )



_fbthrift_python_mutable_types.fill_specs(
    _fbthrift_TestService_init_args,
    _fbthrift_TestService_init_result,
)
