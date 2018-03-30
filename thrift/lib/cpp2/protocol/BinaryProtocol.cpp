/*
 * Copyright 2004-present Facebook, Inc.
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include "BinaryProtocol.h"

#include <folly/Conv.h>
#include <folly/portability/GFlags.h>

DEFINE_int32(
    thrift_cpp2_protocol_reader_string_limit,
    0,
    "Limit on string size when deserializing thrift, 0 is no limit");
DEFINE_int32(
    thrift_cpp2_protocol_reader_container_limit,
    0,
    "Limit on container size when deserializing thrift, 0 is no limit");

namespace apache {
namespace thrift {

[[noreturn]] void BinaryProtocolReader::throwBadVersionIdentifier(int32_t sz) {
  throw TProtocolException(
      TProtocolException::BAD_VERSION,
      folly::to<std::string>("Bad version identifier, sz=", sz));
}

    [[noreturn]] void BinaryProtocolReader::throwMissingVersionIdentifier(
        int32_t sz) {
  throw TProtocolException(
      TProtocolException::BAD_VERSION,
      folly::to<std::string>(
          "No version identifier... old protocol client in strict mode? sz=",
          sz));
}

} // namespace thrift
} // namespace apache
