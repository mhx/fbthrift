/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/python_capi/src/serialized_dep.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/python_capi/gen-cpp2/serialized_dep_metadata.h"

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
StructMetadata<::test::fixtures::python_capi::SerializedStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("serialized_dep.SerializedStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& serialized_dep_SerializedStruct = res.first->second;
  serialized_dep_SerializedStruct.name() = "serialized_dep.SerializedStruct";
  serialized_dep_SerializedStruct.is_union() = false;
  static const auto* const
  serialized_dep_SerializedStruct_fields = new std::array<EncodedThriftField, 4>{{
    {1, "s", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "i", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "os", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "rs", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *serialized_dep_SerializedStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    serialized_dep_SerializedStruct.fields()->push_back(std::move(field));
  }
  serialized_dep_SerializedStruct.structured_annotations()->push_back(*cvStruct("python.UseCAPI", {{"serialize", cvBool(true)}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::python_capi::SerializedUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("serialized_dep.SerializedUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& serialized_dep_SerializedUnion = res.first->second;
  serialized_dep_SerializedUnion.name() = "serialized_dep.SerializedUnion";
  serialized_dep_SerializedUnion.is_union() = true;
  static const auto* const
  serialized_dep_SerializedUnion_fields = new std::array<EncodedThriftField, 2>{{
    {1, "s", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "i", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *serialized_dep_SerializedUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    serialized_dep_SerializedUnion.fields()->push_back(std::move(field));
  }
  serialized_dep_SerializedUnion.structured_annotations()->push_back(*cvStruct("python.UseCAPI", {{"serialize", cvBool(true)}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::python_capi::SerializedError>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("serialized_dep.SerializedError", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& serialized_dep_SerializedError = res.first->second;
  serialized_dep_SerializedError.name() = "serialized_dep.SerializedError";
  serialized_dep_SerializedError.is_union() = false;
  static const auto* const
  serialized_dep_SerializedError_fields = new std::array<EncodedThriftField, 3>{{
    {1, "msg", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "os", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "rs", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *serialized_dep_SerializedError_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    serialized_dep_SerializedError.fields()->push_back(std::move(field));
  }
  serialized_dep_SerializedError.structured_annotations()->push_back(*cvStruct("python.UseCAPI", {{"serialize", cvBool(true)}}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::python_capi::MarshalStruct>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("serialized_dep.MarshalStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& serialized_dep_MarshalStruct = res.first->second;
  serialized_dep_MarshalStruct.name() = "serialized_dep.MarshalStruct";
  serialized_dep_MarshalStruct.is_union() = false;
  static const auto* const
  serialized_dep_MarshalStruct_fields = new std::array<EncodedThriftField, 4>{{
    {1, "s", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "i", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "os", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {4, "rs", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *serialized_dep_MarshalStruct_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    serialized_dep_MarshalStruct.fields()->push_back(std::move(field));
  }
  serialized_dep_MarshalStruct.structured_annotations()->push_back(*cvStruct("python.UseCAPI", {}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::python_capi::MarshalUnion>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("serialized_dep.MarshalUnion", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& serialized_dep_MarshalUnion = res.first->second;
  serialized_dep_MarshalUnion.name() = "serialized_dep.MarshalUnion";
  serialized_dep_MarshalUnion.is_union() = true;
  static const auto* const
  serialized_dep_MarshalUnion_fields = new std::array<EncodedThriftField, 2>{{
    {1, "s", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "i", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *serialized_dep_MarshalUnion_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    serialized_dep_MarshalUnion.fields()->push_back(std::move(field));
  }
  serialized_dep_MarshalUnion.structured_annotations()->push_back(*cvStruct("python.UseCAPI", {}).cv_struct_ref());
  return res.first->second;
}
const ::apache::thrift::metadata::ThriftStruct&
StructMetadata<::test::fixtures::python_capi::MarshalError>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs()->emplace("serialized_dep.MarshalError", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return res.first->second;
  }
  ::apache::thrift::metadata::ThriftStruct& serialized_dep_MarshalError = res.first->second;
  serialized_dep_MarshalError.name() = "serialized_dep.MarshalError";
  serialized_dep_MarshalError.is_union() = false;
  static const auto* const
  serialized_dep_MarshalError_fields = new std::array<EncodedThriftField, 3>{{
    {1, "msg", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "os", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "rs", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *serialized_dep_MarshalError_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    field.structured_annotations() = f.structured_annotations;
    serialized_dep_MarshalError.fields()->push_back(std::move(field));
  }
  serialized_dep_MarshalError.structured_annotations()->push_back(*cvStruct("python.UseCAPI", {}).cv_struct_ref());
  return res.first->second;
}

void ExceptionMetadata<::test::fixtures::python_capi::SerializedError>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions()->emplace("serialized_dep.SerializedError", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& serialized_dep_SerializedError = res.first->second;
  serialized_dep_SerializedError.name() = "serialized_dep.SerializedError";
  static const auto* const
  serialized_dep_SerializedError_fields = new std::array<EncodedThriftField, 3>{{
    {1, "msg", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "os", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "rs", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *serialized_dep_SerializedError_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    serialized_dep_SerializedError.fields()->push_back(std::move(field));
  }
  serialized_dep_SerializedError.structured_annotations()->push_back(*cvStruct("python.UseCAPI", {{"serialize", cvBool(true)}}).cv_struct_ref());
}
void ExceptionMetadata<::test::fixtures::python_capi::MarshalError>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions()->emplace("serialized_dep.MarshalError", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& serialized_dep_MarshalError = res.first->second;
  serialized_dep_MarshalError.name() = "serialized_dep.MarshalError";
  static const auto* const
  serialized_dep_MarshalError_fields = new std::array<EncodedThriftField, 3>{{
    {1, "msg", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {2, "os", true, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
    {3, "rs", false, std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_STRING_TYPE), std::vector<ThriftConstStruct>{}},
  }};
  for (const auto& f : *serialized_dep_MarshalError_fields) {
    ::apache::thrift::metadata::ThriftField field;
    field.id() = f.id;
    field.name() = f.name;
    field.is_optional() = f.is_optional;
    f.metadata_type_interface->writeAndGenType(*field.type(), metadata);
    serialized_dep_MarshalError.fields()->push_back(std::move(field));
  }
  serialized_dep_MarshalError.structured_annotations()->push_back(*cvStruct("python.UseCAPI", {}).cv_struct_ref());
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
