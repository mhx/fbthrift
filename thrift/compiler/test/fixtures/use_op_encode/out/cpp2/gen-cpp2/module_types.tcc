/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/use_op_encode/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/use_op_encode/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::facebook::thrift::compiler::test::MyStruct> {
  static void translateFieldName(
      std::string_view _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook::thrift::compiler::test {

template <class Protocol_>
void MyStruct::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_def_field:
  {
    ::apache::thrift::op::decode<::apache::thrift::type::i32_t>(*iprot, this->__fbthrift_field_def_field);
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_opt_field:
  {
    ::apache::thrift::op::decode<::apache::thrift::type::i32_t>(*iprot, this->__fbthrift_field_opt_field);
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_req_field:
  {
    ::apache::thrift::op::decode<::apache::thrift::type::i32_t>(*iprot, this->__fbthrift_field_req_field);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_terse_field:
  {
    ::apache::thrift::op::decode<::apache::thrift::type::i32_t>(*iprot, this->__fbthrift_field_terse_field);
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _advance_failure;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

  goto _advance_failure; // Avoid compiler warnings about unused labels.
  _advance_failure:
  _readState.afterAdvanceFailure(iprot);
_loop:
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<MyStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_def_field;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_opt_field;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_req_field;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_terse_field;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t MyStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("def_field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::op::serialized_size<false, ::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_def_field);
  }
  if (this->__isset.get(1)) {
    xfer += prot_->serializedFieldSize("opt_field", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::op::serialized_size<false, ::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_opt_field);
  }
  {
    xfer += prot_->serializedFieldSize("req_field", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::op::serialized_size<false, ::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_req_field);
  }
  if (!(::apache::thrift::op::isEmpty<::apache::thrift::type::i32_t>(this->__fbthrift_field_terse_field))) {
    xfer += prot_->serializedFieldSize("terse_field", apache::thrift::protocol::T_I32, 4);
    xfer += ::apache::thrift::op::serialized_size<false, ::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_terse_field);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("MyStruct");
  {
    xfer += prot_->serializedFieldSize("def_field", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::op::serialized_size<false, ::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_def_field);
  }
  if (this->__isset.get(1)) {
    xfer += prot_->serializedFieldSize("opt_field", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::op::serialized_size<false, ::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_opt_field);
  }
  {
    xfer += prot_->serializedFieldSize("req_field", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::op::serialized_size<false, ::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_req_field);
  }
  if (!(::apache::thrift::op::isEmpty<::apache::thrift::type::i32_t>(this->__fbthrift_field_terse_field))) {
    xfer += prot_->serializedFieldSize("terse_field", apache::thrift::protocol::T_I32, 4);
    xfer += ::apache::thrift::op::serialized_size<false, ::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_terse_field);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t MyStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("MyStruct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "def_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::op::encode<::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_def_field);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.get(1)) {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 2, kPrevFieldId>(*prot_, "opt_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::op::encode<::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_opt_field);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  {
    constexpr int16_t kPrevFieldId = 2;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 3, kPrevFieldId>(*prot_, "req_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::op::encode<::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_req_field);
    xfer += prot_->writeFieldEnd();
  }
  if (!(::apache::thrift::op::isEmpty<::apache::thrift::type::i32_t>(this->__fbthrift_field_terse_field))) {
    constexpr int16_t kPrevFieldId = 3;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 4, kPrevFieldId>(*prot_, "terse_field", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::op::encode<::apache::thrift::type::i32_t>(*prot_, this->__fbthrift_field_terse_field);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace facebook::thrift::compiler::test
