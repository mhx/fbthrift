/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/reflection.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
struct fieldA;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_fieldA
#define APACHE_THRIFT_ACCESSOR_fieldA
APACHE_THRIFT_DEFINE_ACCESSOR(fieldA);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class ReflectionStruct;
} // namespace cpp2
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

namespace apache::thrift::detail::qualifier {
} // namespace apache::thrift::detail::qualifier

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


/** Glean {"file": "thrift/compiler/test/fixtures/mcpp2-compare/src/reflection.thrift", "name": "ReflectionStruct", "kind": "struct" } */
class ReflectionStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = true;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static std::string_view __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static std::string_view __fbthrift_get_class_name();
  template <class ...>
  FOLLY_ERASE static constexpr std::string_view __fbthrift_get_module_name() noexcept {
    return "reflection";
  }
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::fieldA
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::i32_t
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 1;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = ReflectionStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;
  static constexpr bool __fbthrift_cpp2_uses_op_encode =
    false;


 public:

  ReflectionStruct() :
      __fbthrift_field_fieldA(static_cast<::std::int32_t>(5)) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  ReflectionStruct(apache::thrift::FragileConstructor, ::std::int32_t fieldA__arg);

  ReflectionStruct(ReflectionStruct&&) = default;

  ReflectionStruct(const ReflectionStruct&) = default;


  ReflectionStruct& operator=(ReflectionStruct&&) = default;

  ReflectionStruct& operator=(const ReflectionStruct&) = default;
 private:
  ::std::int32_t __fbthrift_field_fieldA;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const ReflectionStruct&) const;
  bool operator<(const ReflectionStruct&) const;

  /** Glean { "field": "fieldA" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldA_ref() const& {
    return {this->__fbthrift_field_fieldA, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "fieldA" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldA_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_fieldA), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "fieldA" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldA_ref() & {
    return {this->__fbthrift_field_fieldA, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "fieldA" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldA_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_fieldA), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "fieldA" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> fieldA() const& {
    return {this->__fbthrift_field_fieldA, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "fieldA" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> fieldA() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_fieldA), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "fieldA" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> fieldA() & {
    return {this->__fbthrift_field_fieldA, __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "fieldA" } */
  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> fieldA() && {
    return {static_cast<T&&>(this->__fbthrift_field_fieldA), __isset.at(0), __isset.bit(0)};
  }

  /** Glean { "field": "fieldA" } */
  [[deprecated("Use `FOO.fieldA().value()` instead of `FOO.get_fieldA()`")]]
  ::std::int32_t get_fieldA() const;

  /** Glean { "field": "fieldA" } */
  [[deprecated("Use `FOO.fieldA() = BAR` instead of `FOO.set_fieldA(BAR)`")]]
  ::std::int32_t& set_fieldA(::std::int32_t fieldA_);

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<ReflectionStruct>;
  friend void swap(ReflectionStruct& a, ReflectionStruct& b);
};

template <class Protocol_>
unsigned long ReflectionStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


} // namespace cpp2
