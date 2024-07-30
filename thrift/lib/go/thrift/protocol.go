/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package thrift

// Protocol defines the interface that must be implemented by all protocols
type Protocol interface {
	Format

	// used by SerialChannel and generated thrift Clients
	Close() error

	ResponseHeaderGetter

	// Deprecated
	RequestHeaders
}

// Compile time check for interface conformance
var _ Protocol = (*headerProtocol)(nil)
var _ Protocol = (*rocketClient)(nil)
var _ Protocol = (*upgradeToRocketClient)(nil)
var _ Protocol = (*httpProtocol)(nil)
