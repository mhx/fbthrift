#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf

from abc import ABCMeta as _fbthrift_ABCMeta
import c.thrift_abstract_types as _fbthrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions



class C(metaclass=_fbthrift_python_types.StructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "i",  # name
            "i",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i64,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            5, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "c.C"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @classmethod
    def _fbthrift_auto_migrate_enabled(cls):
        return False

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__struct_C()

    def _to_python(self):
        return self

    def _to_mutable_python(self):
        from thrift.python import mutable_converter
        import importlib
        mutable_types = importlib.import_module("c.thrift_mutable_types")
        return mutable_converter.to_mutable_python_struct_or_union(mutable_types.C, self)

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("c.types")
        from thrift.py3 import converter
        return converter.to_py3_struct(py3_types.C, self)

    def _to_py_deprecated(self):
        import importlib
        from thrift.util import converter
        try:
            py_deprecated_types = importlib.import_module("c.ttypes")
            return converter.to_py_struct(py_deprecated_types.C, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("c.ttypes")
            return converter.to_py_struct(py_asyncio_types.C, self)

_fbthrift_ABCMeta.register(_fbthrift_abstract_types.C, C)
_fbthrift_C = C

class E(metaclass=_fbthrift_python_exceptions.GeneratedErrorMeta):
    _fbthrift_SPEC = (
    )

    _fbthrift_abstract_base_class = _fbthrift_abstract_types.E


    @staticmethod
    def __get_thrift_name__() -> str:
        return "c.E"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @classmethod
    def _fbthrift_auto_migrate_enabled(cls):
        return False

    @staticmethod
    def __get_metadata__():
        return _fbthrift_metadata__exception_E()

    def _to_python(self):
        return self

    def _to_mutable_python(self):
        from thrift.python import mutable_converter
        import importlib
        mutable_types = importlib.import_module("c.thrift_mutable_types")
        return mutable_converter.to_mutable_python_struct_or_union(mutable_types.E, self)

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("c.types")
        from thrift.py3 import converter
        return converter.to_py3_struct(py3_types.E, self)

    def _to_py_deprecated(self):
        import importlib
        from thrift.util import converter
        try:
            py_deprecated_types = importlib.import_module("c.ttypes")
            return converter.to_py_struct(py_deprecated_types.E, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("c.ttypes")
            return converter.to_py_struct(py_asyncio_types.E, self)
_fbthrift_E = E

# This unfortunately has to be down here to prevent circular imports
import c.thrift_metadata

_fbthrift_all_enums = [
]


def _fbthrift_metadata__struct_C():
    return c.thrift_metadata.gen_metadata_struct_C()


def _fbthrift_metadata__exception_E():
    return c.thrift_metadata.gen_metadata_exception_E()


_fbthrift_all_structs = [
    C,
    E,
]
_fbthrift_python_types.fill_specs(*_fbthrift_all_structs)
