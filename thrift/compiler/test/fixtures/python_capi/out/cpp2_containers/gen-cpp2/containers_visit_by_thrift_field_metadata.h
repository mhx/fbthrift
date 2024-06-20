/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/python_capi/src/containers.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/python_capi/gen-cpp2/containers_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::test::fixtures::python_capi::TemplateLists> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).std_string_ref());
    case 2:
      return f(1, static_cast<T&&>(t).deque_string_ref());
    case 3:
      return f(2, static_cast<T&&>(t).small_vector_iobuf_ref());
    case 4:
      return f(3, static_cast<T&&>(t).nested_small_vector_ref());
    case 5:
      return f(4, static_cast<T&&>(t).small_vector_tensor_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::TemplateLists");
    }
  }
};

template <>
struct VisitByFieldId<::test::fixtures::python_capi::TemplateSets> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).std_set_ref());
    case 2:
      return f(1, static_cast<T&&>(t).std_unordered_ref());
    case 3:
      return f(2, static_cast<T&&>(t).folly_fast_ref());
    case 4:
      return f(3, static_cast<T&&>(t).folly_node_ref());
    case 5:
      return f(4, static_cast<T&&>(t).folly_value_ref());
    case 6:
      return f(5, static_cast<T&&>(t).folly_vector_ref());
    case 7:
      return f(6, static_cast<T&&>(t).folly_sorted_vector_ref());
    default:
      throwInvalidThriftId(fieldId, "::test::fixtures::python_capi::TemplateSets");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
