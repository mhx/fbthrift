/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/terse_write/src/deprecated_terse_write.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/terse_write/gen-cpp2/deprecated_terse_write_metadata.h"

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

void EnumMetadata<::facebook::thrift::test::terse_write::deprecated::MyEnum>::gen(ThriftMetadata& metadata) {
  auto res = metadata.enums()->emplace("deprecated_terse_write.MyEnum", ::apache::thrift::metadata::ThriftEnum{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftEnum& enum_metadata = res.first->second;
  enum_metadata.name() = "deprecated_terse_write.MyEnum";
  using EnumTraits = TEnumTraits<::facebook::thrift::test::terse_write::deprecated::MyEnum>;
  for (std::size_t i = 0; i != EnumTraits::size; ++i) {
    enum_metadata.elements()->emplace(static_cast<int32_t>(EnumTraits::values[i]), EnumTraits::names[i]);
  }
}

const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::deprecated::MyStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("deprecated_terse_write.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& deprecated_terse_write_MyStruct = res.first->second;
  deprecated_terse_write_MyStruct.name() = "deprecated_terse_write.MyStruct";
  deprecated_terse_write_MyStruct.is_union() = false;
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::deprecated::MyUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("deprecated_terse_write.MyUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& deprecated_terse_write_MyUnion = res.first->second;
  deprecated_terse_write_MyUnion.name() = "deprecated_terse_write.MyUnion";
  deprecated_terse_write_MyUnion.is_union() = true;
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::deprecated::StructLevelTerseStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("deprecated_terse_write.StructLevelTerseStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& deprecated_terse_write_StructLevelTerseStruct = res.first->second;
  deprecated_terse_write_StructLevelTerseStruct.name() = "deprecated_terse_write.StructLevelTerseStruct";
  deprecated_terse_write_StructLevelTerseStruct.is_union() = false;
  static const auto* const
  deprecated_terse_write_StructLevelTerseStruct_fields = new std::array<EncodedThriftField, 15>{ {
    { 1, "bool_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{ }},    { 2, "byte_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{ }},    { 3, "short_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{ }},    { 4, "int_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ }},    { 5, "long_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{ }},    { 6, "float_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{ }},    { 7, "double_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{ }},    { 8, "string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ }},    { 9, "binary_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{ }},    { 10, "enum_field", false, std::make_unique<Enum<::facebook::thrift::test::terse_write::deprecated::MyEnum>>("deprecated_terse_write.MyEnum"), std::vector<ThriftConstStruct>{ }},    { 11, "list_field", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{ }},    { 12, "set_field", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{ }},    { 13, "map_field", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{ }},    { 14, "struct_field", false, std::make_unique<Struct<::facebook::thrift::test::terse_write::deprecated::MyStruct>>("deprecated_terse_write.MyStruct"), std::vector<ThriftConstStruct>{ }},    { 15, "union_field", false, std::make_unique<Union<::facebook::thrift::test::terse_write::deprecated::MyUnion>>("deprecated_terse_write.MyUnion"), std::vector<ThriftConstStruct>{ }},  }};
  for (const auto& f : *deprecated_terse_write_StructLevelTerseStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    deprecated_terse_write_StructLevelTerseStruct.fields()->push_back(std::move(field));
  }
  deprecated_terse_write_StructLevelTerseStruct.structured_annotations()->push_back(*cvStruct("thrift.TerseWrite", {  }).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::deprecated::FieldLevelTerseStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("deprecated_terse_write.FieldLevelTerseStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& deprecated_terse_write_FieldLevelTerseStruct = res.first->second;
  deprecated_terse_write_FieldLevelTerseStruct.name() = "deprecated_terse_write.FieldLevelTerseStruct";
  deprecated_terse_write_FieldLevelTerseStruct.is_union() = false;
  static const auto* const
  deprecated_terse_write_FieldLevelTerseStruct_fields = new std::array<EncodedThriftField, 30>{ {
    { 1, "terse_bool_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 2, "terse_byte_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 3, "terse_short_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 4, "terse_int_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 5, "terse_long_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 6, "terse_float_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 7, "terse_double_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 8, "terse_string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 9, "terse_binary_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 10, "terse_enum_field", false, std::make_unique<Enum<::facebook::thrift::test::terse_write::deprecated::MyEnum>>("deprecated_terse_write.MyEnum"), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 11, "terse_list_field", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 12, "terse_set_field", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 13, "terse_map_field", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 14, "terse_struct_field", false, std::make_unique<Struct<::facebook::thrift::test::terse_write::deprecated::MyStruct>>("deprecated_terse_write.MyStruct"), std::vector<ThriftConstStruct>{ *cvStruct("thrift.TerseWrite", {  }).cv_struct_ref(), }},    { 15, "bool_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BOOL_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 16, "byte_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 17, "short_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 18, "int_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 19, "long_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I64_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 20, "float_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_FLOAT_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 21, "double_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_DOUBLE_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 22, "string_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 23, "binary_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BINARY_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 24, "enum_field", false, std::make_unique<Enum<::facebook::thrift::test::terse_write::deprecated::MyEnum>>("deprecated_terse_write.MyEnum"), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 25, "list_field", false, std::make_unique<List>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 26, "set_field", false, std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 27, "map_field", false, std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE), std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I16_TYPE)), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), }},    { 28, "struct_field", false, std::make_unique<Struct<::facebook::thrift::test::terse_write::deprecated::MyStruct>>("deprecated_terse_write.MyStruct"), std::vector<ThriftConstStruct>{ }},    { 29, "union_field", false, std::make_unique<Union<::facebook::thrift::test::terse_write::deprecated::MyUnion>>("deprecated_terse_write.MyUnion"), std::vector<ThriftConstStruct>{ }},    { 30, "iobuf_ptr_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_BYTE_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), *cvStruct("cpp.Type", { {"name", cvString("std::unique_ptr<folly::IOBuf>") } }).cv_struct_ref(), }},  }};
  for (const auto& f : *deprecated_terse_write_FieldLevelTerseStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    deprecated_terse_write_FieldLevelTerseStruct.fields()->push_back(std::move(field));
  }
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::facebook::thrift::test::terse_write::deprecated::CppRefStructFields>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("deprecated_terse_write.CppRefStructFields", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& deprecated_terse_write_CppRefStructFields = res.first->second;
  deprecated_terse_write_CppRefStructFields.name() = "deprecated_terse_write.CppRefStructFields";
  deprecated_terse_write_CppRefStructFields.is_union() = false;
  static const auto* const
  deprecated_terse_write_CppRefStructFields_fields = new std::array<EncodedThriftField, 2>{ {
    { 1, "primitive_ref_field", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{ *cvStruct("cpp.AllowLegacyNonOptionalRef", {  }).cv_struct_ref(), *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), *cvStruct("cpp.Ref", { {"type", cvInteger(0) } }).cv_struct_ref(), }},    { 2, "struct_ref_field", false, std::make_unique<Struct<::facebook::thrift::test::terse_write::deprecated::MyStruct>>("deprecated_terse_write.MyStruct"), std::vector<ThriftConstStruct>{ *cvStruct("cpp.AllowLegacyNonOptionalRef", {  }).cv_struct_ref(), *cvStruct("cpp.DeprecatedTerseWrite", {  }).cv_struct_ref(), *cvStruct("cpp.Ref", { {"type", cvInteger(0) } }).cv_struct_ref(), }},  }};
  for (const auto& f : *deprecated_terse_write_CppRefStructFields_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    deprecated_terse_write_CppRefStructFields.fields()->push_back(std::move(field));
  }
  return res.first->second;
}

} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
