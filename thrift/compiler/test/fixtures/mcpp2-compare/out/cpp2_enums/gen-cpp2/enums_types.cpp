/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/enums.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_data.h"
[[maybe_unused]] static constexpr std::string_view kModuleName = "enums";


namespace apache { namespace thrift {

const std::string_view TEnumTraits<::facebook::ns::qwerty::AnEnumA>::__fbthrift_module_name_internal_do_not_use = kModuleName;
folly::Range<::facebook::ns::qwerty::AnEnumA const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumA>::values = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumA>::values);
folly::Range<std::string_view const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumA>::names = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumA>::names);

bool TEnumTraits<::facebook::ns::qwerty::AnEnumA>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::facebook::ns::qwerty::AnEnumA>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache { namespace thrift {

const std::string_view TEnumTraits<::facebook::ns::qwerty::AnEnumB>::__fbthrift_module_name_internal_do_not_use = kModuleName;
folly::Range<::facebook::ns::qwerty::AnEnumB const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumB>::values = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumB>::values);
folly::Range<std::string_view const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumB>::names = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumB>::names);

bool TEnumTraits<::facebook::ns::qwerty::AnEnumB>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::facebook::ns::qwerty::AnEnumB>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache { namespace thrift {

const std::string_view TEnumTraits<::facebook::ns::qwerty::AnEnumC>::__fbthrift_module_name_internal_do_not_use = kModuleName;
folly::Range<::facebook::ns::qwerty::AnEnumC const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumC>::values = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumC>::values);
folly::Range<std::string_view const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumC>::names = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumC>::names);

bool TEnumTraits<::facebook::ns::qwerty::AnEnumC>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::facebook::ns::qwerty::AnEnumC>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache { namespace thrift {

const std::string_view TEnumTraits<::facebook::ns::qwerty::AnEnumD>::__fbthrift_module_name_internal_do_not_use = kModuleName;
folly::Range<::facebook::ns::qwerty::AnEnumD const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumD>::values = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumD>::values);
folly::Range<std::string_view const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumD>::names = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumD>::names);

bool TEnumTraits<::facebook::ns::qwerty::AnEnumD>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::facebook::ns::qwerty::AnEnumD>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache { namespace thrift {

const std::string_view TEnumTraits<::facebook::ns::qwerty::AnEnumE>::__fbthrift_module_name_internal_do_not_use = kModuleName;
folly::Range<::facebook::ns::qwerty::AnEnumE const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumE>::values = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumE>::values);
folly::Range<std::string_view const*> const TEnumTraits<::facebook::ns::qwerty::AnEnumE>::names = folly::range(TEnumDataStorage<::facebook::ns::qwerty::AnEnumE>::names);

bool TEnumTraits<::facebook::ns::qwerty::AnEnumE>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::facebook::ns::qwerty::AnEnumE>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::ns::qwerty::SomeStruct>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::ns::qwerty::SomeStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook::ns::qwerty {

std::string_view SomeStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<SomeStruct>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view SomeStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<SomeStruct>::name;
}


SomeStruct::SomeStruct(apache::thrift::FragileConstructor, ::std::int32_t fieldA__arg) :
    __fbthrift_field_fieldA(std::move(fieldA__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void SomeStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_fieldA = ::std::int32_t();
  __isset = {};
}

void SomeStruct::__fbthrift_clear_terse_fields() {
}

bool SomeStruct::__fbthrift_is_empty() const {
  return false;
}

bool SomeStruct::operator==([[maybe_unused]] const SomeStruct& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool SomeStruct::operator<([[maybe_unused]] const SomeStruct& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


::std::int32_t SomeStruct::get_fieldA() const {
  return __fbthrift_field_fieldA;
}

::std::int32_t& SomeStruct::set_fieldA(::std::int32_t fieldA_) {
  fieldA_ref() = fieldA_;
  return __fbthrift_field_fieldA;
}

void swap([[maybe_unused]] SomeStruct& a, [[maybe_unused]] SomeStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_fieldA, b.__fbthrift_field_fieldA);
  swap(a.__isset, b.__isset);
}

template void SomeStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SomeStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SomeStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SomeStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SomeStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SomeStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template void SomeStruct::readNoXfer<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t SomeStruct::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t SomeStruct::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t SomeStruct::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;


} // namespace facebook::ns::qwerty

namespace facebook::ns::qwerty { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // namespace facebook::ns::qwerty
namespace apache::thrift::detail::annotation {
}
