#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/empty-struct/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.optional cimport optional as __optional
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from libcpp.utility cimport move as cmove
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
from thrift.py3.types import _IsSet as _fbthrift_IsSet
from thrift.py3.types cimport make_unique
cimport thrift.py3.types
cimport thrift.py3.exceptions
cimport thrift.python.exceptions
import thrift.python.converter
from thrift.python.types import EnumMeta as __EnumMeta
from thrift.python.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.python.types cimport BadEnum as __BadEnum
from thrift.py3.types cimport (
    richcmp as __richcmp,
    init_unicode_from_cpp as __init_unicode_from_cpp,
    set_iter as __set_iter,
    map_iter as __map_iter,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    const_pointer_cast,
    make_const_shared,
    constant_shared_ptr,
)
cimport thrift.py3.serializer as serializer
from thrift.python.protocol cimport Protocol as __Protocol
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins
import importlib

import module.thrift_types as _fbthrift_python_types
from module.types_impl_FBTHRIFT_ONLY_DO_NOT_USE import (
    __NadaType,
)


_fbthrift__module_name__ = "module.types"

cdef object get_types_reflection():
    return importlib.import_module(
        "module.types_reflection"
    )

@__cython.auto_pickle(False)
cdef class Empty(thrift.py3.types.Struct):
    __module__ = _fbthrift__module_name__

    def __init__(Empty self, **kwargs):
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cEmpty]()
        self._fields_setter = _fbthrift_types_fields.__Empty_FieldsSetter._fbthrift_create(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        super().__init__(**kwargs)

    def __call__(Empty self, **kwargs):
        return self

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("Empty", {
        })

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cEmpty] cpp_obj):
        __fbthrift_inst = <Empty>Empty.__new__(Empty)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = cmove(cpp_obj)
        return __fbthrift_inst


    def __hash__(Empty self):
        return super().__hash__()

    def __repr__(Empty self):
        return super().__repr__()

    def __str__(Empty self):
        return super().__str__()


    def __copy__(Empty self):
        cdef shared_ptr[_module_cbindings.cEmpty] cpp_obj = make_shared[_module_cbindings.cEmpty](
            deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        )
        return Empty._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[_module_cbindings.cEmpty](
            self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            (<Empty>other)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__Empty()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        _module_cbindings.StructMetadata[_module_cbindings.cEmpty].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.Empty"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[_module_cbindings.cEmpty](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 0

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(Empty self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[_module_cbindings.cEmpty](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(Empty self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cEmpty]()
        with nogil:
            needed = serializer.cdeserialize[_module_cbindings.cEmpty](buf, self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto)
        return needed


    def _to_python(self):
        return thrift.python.converter.to_python_struct(
            _fbthrift_python_types.Empty,
            self,
        )

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("module.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.Empty, self)



@__cython.auto_pickle(False)
cdef class Nada(thrift.py3.types.Union):
    __module__ = _fbthrift__module_name__
    Type = __NadaType

    def __init__(
        self, *
    ):
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = __to_shared_ptr(cmove(Nada._make_instance(
          NULL,
        )))
        self._initialize_py()

    @staticmethod
    def fromValue(value):
        if value is None:
            return Nada()
        raise ValueError(f"Unable to derive correct union field for value: {value}")

    @staticmethod
    cdef unique_ptr[_module_cbindings.cNada] _make_instance(
        _module_cbindings.cNada* base_instance
    ) except *:
        cdef unique_ptr[_module_cbindings.cNada] c_inst = make_unique[_module_cbindings.cNada]()
        cdef bint any_set = False
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return cmove(c_inst)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[_module_cbindings.cNada] cpp_obj):
        __fbthrift_inst = <Nada>Nada.__new__(Nada)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = cmove(cpp_obj)
        __fbthrift_inst._initialize_py()
        return __fbthrift_inst


    def __hash__(Nada self):
        return  super().__hash__()

    @property
    def type(Nada self not None):
        if self.py_type is None:
            self.py_type = Nada.Type(self.type_int)
        return self.py_type

    @property
    def value(Nada self not None):
        if self.py_value is not None or self.type_int == 0:
            return self.py_value
        return self.py_value

    cdef _initialize_py(Nada self):
        self.py_type = None
        self.type_int = deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).getType()
        self.py_value = None

    def __copy__(Nada self):
        cdef shared_ptr[_module_cbindings.cNada] cpp_obj = make_shared[_module_cbindings.cNada](
            deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        )
        return Nada._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[_module_cbindings.cNada](
            self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            (<Nada>other)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__Nada()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        _module_cbindings.StructMetadata[_module_cbindings.cNada].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.Nada"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[_module_cbindings.cNada](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 0

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(Nada self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[_module_cbindings.cNada](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(Nada self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[_module_cbindings.cNada]()
        with nogil:
            needed = serializer.cdeserialize[_module_cbindings.cNada](buf, self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto)
        # clear cache reload since the underlying data's changed
        self._initialize_py()
        return needed


    def _to_python(self):
        return thrift.python.converter.to_python_struct(
            _fbthrift_python_types.Nada,
            self,
        )

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("module.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.Nada, self)


