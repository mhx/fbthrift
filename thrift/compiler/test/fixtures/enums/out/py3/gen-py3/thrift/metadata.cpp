/**
 * Autogenerated by Thrift for thrift/annotation/thrift.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "thrift/compiler/test/fixtures/enums/gen-py3/thrift/metadata.h"

namespace facebook {
namespace thrift {
namespace annotation {
::apache::thrift::metadata::ThriftMetadata thrift_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::EnumMetadata<RpcPriority>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Experimental>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ReserveIds>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<RequiresBackwardCompatibility>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<TerseWrite>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Box>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Mixin>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<SerializeInFieldIdOrder>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<BitmaskEnum>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ExceptionMessage>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<InternBox>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Serial>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Uri>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<Priority>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<DeprecatedUnvalidatedAnnotations>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<AllowReservedIdentifier>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<AllowReservedFilename>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<AllowReservedIdentifierName>::gen(metadata);
  return metadata;
}
} // namespace facebook
} // namespace thrift
} // namespace annotation
