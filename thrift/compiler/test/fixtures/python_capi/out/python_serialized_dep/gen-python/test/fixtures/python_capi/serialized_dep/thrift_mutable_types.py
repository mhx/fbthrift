
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf

from abc import ABCMeta as _fbthrift_ABCMeta
import test.fixtures.python_capi.serialized_dep.thrift_abstract_types as _fbthrift_abstract_types
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_typeinfos as _fbthrift_python_mutable_typeinfos



class SerializedStruct(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "s",  # name
            "s",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "i",  # name
            "i",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            3,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "os",  # name
            "os",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            4,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "rs",  # name
            "rs",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "serialized_dep.SerializedStruct"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/python_capi/SerializedStruct"

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.SerializedStruct, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.SerializedStruct, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.SerializedStruct, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.SerializedStruct, self)

_fbthrift_ABCMeta.register(_fbthrift_abstract_types.SerializedStruct, SerializedStruct)
_fbthrift_SerializedStruct = SerializedStruct

class SerializedUnion(metaclass=_fbthrift_python_mutable_types.MutableUnionMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "s",  # name
            "s",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "i",  # name
            "i",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )

    _fbthrift_abstract_base_class = _fbthrift_abstract_types.SerializedUnion


    @staticmethod
    def __get_thrift_name__() -> str:
        return "serialized_dep.SerializedUnion"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/python_capi/SerializedUnion"

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.SerializedUnion, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.SerializedUnion, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.SerializedUnion, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.SerializedUnion, self)

_fbthrift_ABCMeta.register(_fbthrift_abstract_types.SerializedUnion, SerializedUnion)
_fbthrift_SerializedUnion = SerializedUnion

class SerializedError(metaclass=_fbthrift_python_mutable_exceptions.MutableGeneratedErrorMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "msg",  # name
            "msg",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "os",  # name
            "os",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "rs",  # name
            "rs",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
    )

    _fbthrift_abstract_base_class = _fbthrift_abstract_types.SerializedError


    @staticmethod
    def __get_thrift_name__() -> str:
        return "serialized_dep.SerializedError"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/python_capi/SerializedError"

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.SerializedError, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.SerializedError, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.SerializedError, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.SerializedError, self)
_fbthrift_SerializedError = SerializedError

class MarshalStruct(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "s",  # name
            "s",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "i",  # name
            "i",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            3,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "os",  # name
            "os",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            4,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "rs",  # name
            "rs",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "serialized_dep.MarshalStruct"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/python_capi/MarshalStruct"

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.MarshalStruct, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.MarshalStruct, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.MarshalStruct, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.MarshalStruct, self)

_fbthrift_ABCMeta.register(_fbthrift_abstract_types.MarshalStruct, MarshalStruct)
_fbthrift_MarshalStruct = MarshalStruct

class MarshalUnion(metaclass=_fbthrift_python_mutable_types.MutableUnionMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "s",  # name
            "s",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "i",  # name
            "i",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_i32,  # typeinfo
            None,  # default value
            None,  # adapter info
            True, # field type is primitive
            4, # IDL type (see BaseTypeEnum)
        ),
    )

    _fbthrift_abstract_base_class = _fbthrift_abstract_types.MarshalUnion


    @staticmethod
    def __get_thrift_name__() -> str:
        return "serialized_dep.MarshalUnion"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/python_capi/MarshalUnion"

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.MarshalUnion, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.MarshalUnion, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.MarshalUnion, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.MarshalUnion, self)

_fbthrift_ABCMeta.register(_fbthrift_abstract_types.MarshalUnion, MarshalUnion)
_fbthrift_MarshalUnion = MarshalUnion

class MarshalError(metaclass=_fbthrift_python_mutable_exceptions.MutableGeneratedErrorMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "msg",  # name
            "msg",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            2,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "os",  # name
            "os",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
        _fbthrift_python_types.FieldInfo(
            3,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "rs",  # name
            "rs",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
    )

    _fbthrift_abstract_base_class = _fbthrift_abstract_types.MarshalError


    @staticmethod
    def __get_thrift_name__() -> str:
        return "serialized_dep.MarshalError"

    @staticmethod
    def __get_thrift_uri__():
        return "test.dev/fixtures/python_capi/MarshalError"

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.MarshalError, self)

    def _to_mutable_python(self):
        return self

    def _to_py3(self):
        import importlib
        py3_types = importlib.import_module("test.fixtures.python_capi.serialized_dep.types")
        import thrift.py3.converter
        return thrift.py3.converter.to_py3_struct(py3_types.MarshalError, self)

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        try:
            py_deprecated_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_deprecated_types.MarshalError, self)
        except ModuleNotFoundError:
            py_asyncio_types = importlib.import_module("serialized_dep.ttypes")
            return thrift.util.converter.to_py_struct(py_asyncio_types.MarshalError, self)
_fbthrift_MarshalError = MarshalError


_fbthrift_all_enums = [
]


_fbthrift_all_structs = [
    SerializedStruct,
    SerializedUnion,
    SerializedError,
    MarshalStruct,
    MarshalUnion,
    MarshalError,
]
_fbthrift_python_mutable_types.fill_specs(*_fbthrift_all_structs)
