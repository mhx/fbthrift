
# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_generate_mutable_types` documentation in thrift compiler

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf
import module.thrift_abstract_types as _fbthrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_typeinfos as _fbthrift_python_mutable_typeinfos


import includes.thrift_mutable_types
import includes.thrift_mutable_types as _fbthrift__includes__thrift_mutable_types


@_fbthrift_abstract_types.MyStruct.register
class MyStruct(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyIncludedField",  # name
            "MyIncludedField",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(_fbthrift__includes__thrift_mutable_types.Included),  # typeinfo
            lambda: includes.thrift_mutable_types.Included(MyIntField=2, MyTransitiveField=transitive.thrift_mutable_types.Foo(a=2)),  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyOtherIncludedField",  # name
            "MyOtherIncludedField",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(_fbthrift__includes__thrift_mutable_types.Included),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "MyIncludedInt",  # name
            "MyIncludedInt",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            42,  # default value
            None,  # adapter info
            True, # field type is primitive
            5, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.MyStruct"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("module.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.MyStruct, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("module.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.MyStruct, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("module.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.MyStruct, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("module.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.MyStruct, self)

from module.thrift_enums import *

_fbthrift_all_enums = [
]


_fbthrift_all_structs = [
    MyStruct,
]
_fbthrift_python_mutable_types.fill_specs(*_fbthrift_all_structs)
