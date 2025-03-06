/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/inheritance/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class MyRoot;
} // namespace cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::MyRoot> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyRoot";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  virtual void do_root(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  virtual void do_root(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_do_root(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  virtual void sync_do_root();
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  virtual void sync_do_root(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  virtual folly::Future<folly::Unit> future_do_root();
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_do_root();
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  virtual folly::Future<folly::Unit> future_do_root(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_do_root(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  template <int = 0>
  folly::coro::Task<void> co_do_root() {
    return co_do_root<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  template <int = 0>
  folly::coro::Task<void> co_do_root(apache::thrift::RpcOptions& rpcOptions) {
    return co_do_root<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  folly::coro::Task<void> co_do_root() {
    co_await folly::coro::detachOnCancel(semifuture_do_root());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  folly::coro::Task<void> co_do_root(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_do_root(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_do_root(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = do_rootCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if (ctx != nullptr) {
      auto argsAsRefs = std::tie();
      ctx->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), header.get()).throwUnlessValue();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_do_root(*rpcOptions, header, ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_do_root(*defaultRpcOptions, header, ctx.get(), std::move(wrappedCallback));
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
    if (auto ew = recv_wrapped_do_root(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  virtual void do_root(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  static folly::exception_wrapper recv_wrapped_do_root(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  static void recv_do_root(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  virtual void recv_instance_do_root(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyRoot", "function": "do_root"} */
  virtual folly::exception_wrapper recv_instance_wrapped_do_root(::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_do_root(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_do_root(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback, std::unique_ptr<folly::IOBuf> interceptorFrameworkMetadata);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> do_rootCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<folly::Unit> fbthrift_semifuture_do_root(apache::thrift::RpcOptions& rpcOptions);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using MyRootAsyncClient [[deprecated("Use apache::thrift::Client<MyRoot> instead")]] = ::apache::thrift::Client<MyRoot>;
} // namespace cpp2
