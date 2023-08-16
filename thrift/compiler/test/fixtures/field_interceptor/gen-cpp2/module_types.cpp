/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/field_interceptor/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/field_interceptor/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/field_interceptor/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/field_interceptor/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::thrift::test::InterceptedFields>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::thrift::test::InterceptedFields>;
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

namespace facebook { namespace thrift { namespace test {

const char* InterceptedFields::__fbthrift_thrift_uri() {
  return "facebook.com/thrift/test/InterceptedFields";
}

const folly::StringPiece InterceptedFields::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<InterceptedFields>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece InterceptedFields::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<InterceptedFields>::name;
}

InterceptedFields::InterceptedFields(const InterceptedFields&) = default;
InterceptedFields& InterceptedFields::operator=(const InterceptedFields&) = default;
InterceptedFields::InterceptedFields() :
      __fbthrift_field_access_field(),
      __fbthrift_field_access_shared_field(std::make_shared<::std::int32_t>()),
      __fbthrift_field_access_shared_const_field(std::make_shared<::std::int32_t>()) {
}


InterceptedFields::~InterceptedFields() {}

InterceptedFields::InterceptedFields(FOLLY_MAYBE_UNUSED InterceptedFields&& other) noexcept :
    __fbthrift_field_access_field(std::move(other.__fbthrift_field_access_field)),
    __fbthrift_field_access_shared_field(std::move(other.__fbthrift_field_access_shared_field)),
    __fbthrift_field_access_optional_shared_field(std::move(other.__fbthrift_field_access_optional_shared_field)),
    __fbthrift_field_access_shared_const_field(std::move(other.__fbthrift_field_access_shared_const_field)),
    __fbthrift_field_access_optional_shared_const_field(std::move(other.__fbthrift_field_access_optional_shared_const_field)),
    __fbthrift_field_access_optional_boxed_field(std::move(other.__fbthrift_field_access_optional_boxed_field)),
    __isset(other.__isset) {
}

InterceptedFields& InterceptedFields::operator=(FOLLY_MAYBE_UNUSED InterceptedFields&& other) noexcept {
    this->__fbthrift_field_access_field = std::move(other.__fbthrift_field_access_field);
    this->__fbthrift_field_access_shared_field = std::move(other.__fbthrift_field_access_shared_field);
    this->__fbthrift_field_access_optional_shared_field = std::move(other.__fbthrift_field_access_optional_shared_field);
    this->__fbthrift_field_access_shared_const_field = std::move(other.__fbthrift_field_access_shared_const_field);
    this->__fbthrift_field_access_optional_shared_const_field = std::move(other.__fbthrift_field_access_optional_shared_const_field);
    this->__fbthrift_field_access_optional_boxed_field = std::move(other.__fbthrift_field_access_optional_boxed_field);
    __isset = other.__isset;
    return *this;
}


InterceptedFields::InterceptedFields(apache::thrift::FragileConstructor, ::std::int32_t access_field__arg, ::std::shared_ptr<::std::int32_t> access_shared_field__arg, ::std::shared_ptr<::std::int32_t> access_optional_shared_field__arg, ::std::shared_ptr<const ::std::int32_t> access_shared_const_field__arg, ::std::shared_ptr<const ::std::int32_t> access_optional_shared_const_field__arg, ::apache::thrift::detail::boxed_value_ptr<::std::int32_t> access_optional_boxed_field__arg) :
    __fbthrift_field_access_field(std::move(access_field__arg)),
    __fbthrift_field_access_shared_field(std::move(access_shared_field__arg)),
    __fbthrift_field_access_optional_shared_field(std::move(access_optional_shared_field__arg)),
    __fbthrift_field_access_shared_const_field(std::move(access_shared_const_field__arg)),
    __fbthrift_field_access_optional_shared_const_field(std::move(access_optional_shared_const_field__arg)),
    __fbthrift_field_access_optional_boxed_field(std::move(access_optional_boxed_field__arg)) {
  __isset.set(folly::index_constant<0>(), true);
}


void InterceptedFields::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_access_field = ::std::int32_t();
  this->__fbthrift_field_access_shared_field = ::apache::thrift::detail::make_mutable_smart_ptr<::std::shared_ptr<::std::int32_t>>();
  this->__fbthrift_field_access_optional_shared_field.reset();
  this->__fbthrift_field_access_shared_const_field = ::apache::thrift::detail::make_mutable_smart_ptr<::std::shared_ptr<const ::std::int32_t>>();
  this->__fbthrift_field_access_optional_shared_const_field.reset();
  this->__fbthrift_field_access_optional_boxed_field.reset();
  __isset = {};
}

void InterceptedFields::__fbthrift_clear_terse_fields() {
}

bool InterceptedFields::__fbthrift_is_empty() const {
  return false;
}

bool InterceptedFields::operator==(FOLLY_MAYBE_UNUSED const InterceptedFields& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.access_field_ref() == rhs.access_field_ref())) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.access_shared_field_ref(), rhs.access_shared_field_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.access_optional_shared_field_ref(), rhs.access_optional_shared_field_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.access_shared_const_field_ref(), rhs.access_shared_const_field_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.access_optional_shared_const_field_ref(), rhs.access_optional_shared_const_field_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.access_optional_boxed_field_ref(), rhs.access_optional_boxed_field_ref()))) {
    return false;
  }
  return true;
}

bool InterceptedFields::operator<(FOLLY_MAYBE_UNUSED const InterceptedFields& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap(FOLLY_MAYBE_UNUSED InterceptedFields& a, FOLLY_MAYBE_UNUSED InterceptedFields& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_access_field, b.__fbthrift_field_access_field);
  swap(a.__fbthrift_field_access_shared_field, b.__fbthrift_field_access_shared_field);
  swap(a.__fbthrift_field_access_optional_shared_field, b.__fbthrift_field_access_optional_shared_field);
  swap(a.__fbthrift_field_access_shared_const_field, b.__fbthrift_field_access_shared_const_field);
  swap(a.__fbthrift_field_access_optional_shared_const_field, b.__fbthrift_field_access_optional_shared_const_field);
  swap(a.__fbthrift_field_access_optional_boxed_field, b.__fbthrift_field_access_optional_boxed_field);
  swap(a.__isset, b.__isset);
}

template void InterceptedFields::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t InterceptedFields::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t InterceptedFields::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t InterceptedFields::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void InterceptedFields::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t InterceptedFields::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t InterceptedFields::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t InterceptedFields::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


}}} // facebook::thrift::test

namespace facebook { namespace thrift { namespace test { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}}}} // facebook::thrift::test
