/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/inheritance/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_types.h"
#if __has_include("thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyRootAsyncClient.h")
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyRootAsyncClient.h"
#else
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_clients.h"
#endif

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class MyNode;
} // namespace cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::MyNode> : public ::cpp2::MyRootAsyncClient {
 public:
  using ::cpp2::MyRootAsyncClient::MyRootAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyNode";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  virtual void do_mid(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  virtual void do_mid(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_do_mid(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  virtual void sync_do_mid();
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  virtual void sync_do_mid(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  virtual folly::Future<folly::Unit> future_do_mid();
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_do_mid();
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  virtual folly::Future<folly::Unit> future_do_mid(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_do_mid(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  template <int = 0>
  folly::coro::Task<void> co_do_mid() {
    return co_do_mid<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  template <int = 0>
  folly::coro::Task<void> co_do_mid(apache::thrift::RpcOptions& rpcOptions) {
    return co_do_mid<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  folly::coro::Task<void> co_do_mid() {
    co_await folly::coro::detachOnCancel(semifuture_do_mid());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  folly::coro::Task<void> co_do_mid(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_do_mid(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_do_mid(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = do_midCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if (ctx != nullptr) {
      auto argsAsRefs = std::tie();
      ctx->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), header.get()).throwUnlessValue();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_do_mid(*rpcOptions, header, ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_do_mid(*defaultRpcOptions, header, ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (ctx != nullptr) {
      ctx->processClientInterceptorsOnResponse(returnState.header()).throwUnlessValue();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_do_mid(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  virtual void do_mid(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  static folly::exception_wrapper recv_wrapped_do_mid(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  static void recv_do_mid(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  virtual void recv_instance_do_mid(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyNode", "function": "do_mid"} */
  virtual folly::exception_wrapper recv_instance_wrapped_do_mid(::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_do_mid(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_do_mid(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> do_midCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<folly::Unit> fbthrift_semifuture_do_mid(apache::thrift::RpcOptions& rpcOptions);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using MyNodeAsyncClient [[deprecated("Use apache::thrift::Client<MyNode> instead")]] = ::apache::thrift::Client<MyNode>;
} // namespace cpp2
