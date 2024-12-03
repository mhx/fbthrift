#
# Autogenerated by Thrift for included.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import thrift.py3.types
import importlib
from collections.abc import Mapping, Sequence, Set

"""
    This is a helper module to define py3 container types.
    All types defined here are re-exported in the parent `.types` module.
    Only `import` types defined here via the parent `.types` module.
    If you `import` them directly from here, you will get nasty import errors.
"""

_fbthrift__module_name__ = "apache.thrift.fixtures.types.included.types"

import apache.thrift.fixtures.types.included.types as _apache_thrift_fixtures_types_included_types

def get_types_reflection():
    return importlib.import_module(
        "apache.thrift.fixtures.types.included.types_reflection"
    )

__all__ = []

class std_unordered_map__Map__i32_string(thrift.py3.types.Map):
    __module__ = _fbthrift__module_name__
    __slots__ = ()

    _FBTHRIFT_USE_SORTED_REPR = False

    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_map_private_ctor:
            _py_obj = items
        elif isinstance(items, std_unordered_map__Map__i32_string):
            _py_obj = dict(items)
        elif items is None:
            _py_obj = dict()
        else:
            check_key = std_unordered_map__Map__i32_string._check_key_type_or_raise
            check_val = std_unordered_map__Map__i32_string._check_val_type_or_raise
            _py_obj = {check_key(k) : check_val(v) for k, v in items.items()}

        super().__init__(_py_obj, std_unordered_map__Map__i32_string)

    @staticmethod
    def _check_key_type_or_raise(key):
        if not (
            isinstance(key, int)
        ):
            raise TypeError(f"{key!r} is not of type int")
        return key

    @staticmethod
    def _check_key_type_or_none(key):
        if key is None:
            return None
        if isinstance(key, int):
            return key

    @staticmethod
    def _check_val_type_or_raise(item):
        if not (
            isinstance(item, str)
        ):
            raise TypeError(f"{item!r} is not of type str")
        return item

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__std_unordered_map__Map__i32_string()


Mapping.register(std_unordered_map__Map__i32_string)
__all__.append('std_unordered_map__Map__i32_string')


class List__std_unordered_map__Map__i32_string(thrift.py3.types.List):
    __module__ = _fbthrift__module_name__
    __slots__ = ()

    def __init__(self, items=None, private_ctor_token=None) -> None:
        if private_ctor_token is thrift.py3.types._fbthrift_list_private_ctor:
            _py_obj = items
        elif isinstance(items, List__std_unordered_map__Map__i32_string):
            _py_obj = list(items)
        elif items is None:
            _py_obj = []
        else:
            check_method = List__std_unordered_map__Map__i32_string._check_item_type_or_raise
            _py_obj = [check_method(item) for item in items]

        super().__init__(_py_obj, List__std_unordered_map__Map__i32_string)

    @staticmethod
    def _check_item_type_or_raise(item):
        if item is None:
            raise TypeError("None is not of the type _typing.Mapping[int, str]")
        if not isinstance(item, _apache_thrift_fixtures_types_included_types.std_unordered_map__Map__i32_string):
            item = _apache_thrift_fixtures_types_included_types.std_unordered_map__Map__i32_string(item)
        return item

    @staticmethod
    def _check_item_type_or_none(item):
        if item is None:
            return None
        if isinstance(item, _apache_thrift_fixtures_types_included_types.std_unordered_map__Map__i32_string):
            return item
        try:
            return _apache_thrift_fixtures_types_included_types.std_unordered_map__Map__i32_string(item)
        except:
            pass

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__List__std_unordered_map__Map__i32_string()


Sequence.register(List__std_unordered_map__Map__i32_string)

__all__.append('List__std_unordered_map__Map__i32_string')


