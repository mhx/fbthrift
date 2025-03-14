<?hh
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
 *
 */

/*
 * class responsible for handling backtraces on the server side.
 */
final class ThriftBacktraceServerEventHandler extends TProcessorEventHandler {
  public function __construct(private ThriftServer $server) {}

  <<__Override>>
  public function preWrite(
    mixed $_handler_context,
    string $_fn_name,
    mixed $_result,
  ): void {
    $request_block = ArtilleryBacktrace::getRequestBlock();
    if ($request_block is null) {
      return;
    }
    $outbound_bt_context = new Tracing_Backtrace\BacktracePropagatedContext();
    $outbound_bt_context->downstreamBlockId =
      FBTraceEncode::decode($request_block->getID());
    $outbound_bt_context->requestId =
      ThriftContextPropState::get()->getRequestId();
    $this->server
      ->addHTTPHeader(
        HTTPResponseHeader::ARTILLERY_BACKTRACE_HEADER,
        ArtilleryBacktraceHelper::serializeBacktracePayload(
          $outbound_bt_context,
        ),
      );
  }
}

/**
* class responsible for handling backtraces on the client side.
 */
final class BacktraceClientEventHandler extends TClientEventHandler {

  public function __construct(
    private ?TTransportSupportsHeaders $headersTransport,
  )[] {}

  <<__Override>>
  public function preRecv(string $fn_name, ?int $_ex_sequence_id): void {
    if ($this->headersTransport is null) {
      return;
    }
    $encoded_bt_ctx = idx(
      $this->headersTransport->getReadHeaders(),
      Tracing_Backtrace\Backtrace_CONSTANTS::BACKTRACE_HEADER_KEY,
    );
    if ($encoded_bt_ctx is null) {
      return;
    }
    $bt_ctx =
      ArtilleryBacktraceHelper::deserializeBacktracePayload($encoded_bt_ctx);
    if ($bt_ctx is null) {
      return;
    }
    ArtilleryBacktrace::continue($bt_ctx);
  }

}
