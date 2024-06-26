/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/default_values/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/default_values/gen-cpp2/module_metadata.h"

// some of these functions can be so large that the compiler gives up optimizing
// them - and issues a warning which may be treated as an error!
//
// these functions are so rarely called that it is probably okay for them not to
// be optimized in practice
FOLLY_CLANG_DISABLE_WARNING("-Wignored-optimization-argument")

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.TrivialStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_TrivialStruct = res.first->second;
  module_TrivialStruct.name() = "module.TrivialStruct";
  module_TrivialStruct.is_union() = false;
  static const auto* const
  module_TrivialStruct_fields = new std::array<EncodedThriftField, 1>{ {
    { 1, "int_value", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_TrivialStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_TrivialStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::compiler::test::fixtures::default_values::StructWithNoCustomDefaultValues>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithNoCustomDefaultValues", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithNoCustomDefaultValues = res.first->second;
  module_StructWithNoCustomDefaultValues.name() = "module.StructWithNoCustomDefaultValues";
  module_StructWithNoCustomDefaultValues.is_union() = false;
  static const auto* const
  module_StructWithNoCustomDefaultValues_fields = new std::array<EncodedThriftField, 6>{ {
    { 1, "unqualified_integer", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ }},    { 2, "optional_integer", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ }},    { 3, "required_integer", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ }},    { 4, "unqualified_struct", false, std::make_unique<Struct<::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>>("module.TrivialStruct"), std::vector<ThriftConstStruct>{ }},    { 5, "optional_struct", true, std::make_unique<Struct<::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>>("module.TrivialStruct"), std::vector<ThriftConstStruct>{ }},    { 6, "required_struct", false, std::make_unique<Struct<::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>>("module.TrivialStruct"), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_StructWithNoCustomDefaultValues_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithNoCustomDefaultValues.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::compiler::test::fixtures::default_values::StructWithCustomDefaultValues>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("module.StructWithCustomDefaultValues", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& module_StructWithCustomDefaultValues = res.first->second;
  module_StructWithCustomDefaultValues.name() = "module.StructWithCustomDefaultValues";
  module_StructWithCustomDefaultValues.is_union() = false;
  static const auto* const
  module_StructWithCustomDefaultValues_fields = new std::array<EncodedThriftField, 6>{ {
    { 1, "unqualified_integer", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ }},    { 2, "optional_integer", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ }},    { 3, "required_integer", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ }},    { 4, "unqualified_struct", false, std::make_unique<Struct<::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>>("module.TrivialStruct"), std::vector<ThriftConstStruct>{ }},    { 5, "optional_struct", true, std::make_unique<Struct<::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>>("module.TrivialStruct"), std::vector<ThriftConstStruct>{ }},    { 6, "required_struct", false, std::make_unique<Struct<::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>>("module.TrivialStruct"), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *module_StructWithCustomDefaultValues_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    module_StructWithCustomDefaultValues.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
