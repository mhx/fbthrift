/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/use_op_encode/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/use_op_encode/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::facebook::thrift::compiler::test::MyStruct>::name = "MyStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::facebook::thrift::compiler::test::MyStruct>::fields_names = { {
  "def_field"sv,
  "opt_field"sv,
  "req_field"sv,
  "terse_field"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 4> TStructDataStorage<::facebook::thrift::compiler::test::MyStruct>::fields_ids = { {
  1,
  2,
  3,
  4,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 4> TStructDataStorage<::facebook::thrift::compiler::test::MyStruct>::fields_types = { {
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 4> TStructDataStorage<::facebook::thrift::compiler::test::MyStruct>::storage_names = { {
  "__fbthrift_field_def_field"sv,
  "__fbthrift_field_opt_field"sv,
  "__fbthrift_field_req_field"sv,
  "__fbthrift_field_terse_field"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 4> TStructDataStorage<::facebook::thrift::compiler::test::MyStruct>::isset_indexes = { {
  0,
  1,
  -1,
  -1,
}};

} // namespace thrift
} // namespace apache
