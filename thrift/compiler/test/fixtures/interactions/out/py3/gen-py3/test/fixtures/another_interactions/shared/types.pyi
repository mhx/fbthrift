#
# Autogenerated by Thrift for shared.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import enum as _python_std_enum
import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
import typing as _typing

import sys
import itertools


class DoSomethingResult(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        s_res: bool
        i_res: bool
        pass

    s_res: _typing.Final[str] = ...
    i_res: _typing.Final[int] = ...

    def __init__(
        self, *,
        s_res: _typing.Optional[str]=None,
        i_res: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        s_res: _typing.Union[str, None]=None,
        i_res: _typing.Union[int, None]=None
    ) -> DoSomethingResult: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['DoSomethingResult'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'DoSomethingResult') -> bool: ...
    def __gt__(self, other: 'DoSomethingResult') -> bool: ...
    def __le__(self, other: 'DoSomethingResult') -> bool: ...
    def __ge__(self, other: 'DoSomethingResult') -> bool: ...

    def _to_python(self) -> "test.fixtures.another_interactions.shared.thrift_types.DoSomethingResult": ...   # type: ignore
    def _to_py3(self) -> DoSomethingResult: ...
    def _to_py_deprecated(self) -> "test.fixtures.another_interactions.ttypes.DoSomethingResult": ...   # type: ignore

