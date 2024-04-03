/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/inheritance/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_types.h"
#if __has_include("thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyNodeAsyncClient.h")
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyNodeAsyncClient.h"
#else
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_clients.h"
#endif

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class MyLeaf;
} // namespace cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::MyLeaf> : public ::cpp2::MyNodeAsyncClient {
 public:
  using ::cpp2::MyNodeAsyncClient::MyNodeAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyLeaf";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual void do_leaf(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual void do_leaf(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void do_leafImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual void sync_do_leaf();
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual void sync_do_leaf(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual folly::Future<folly::Unit> future_do_leaf();
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_do_leaf();
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual folly::Future<folly::Unit> future_do_leaf(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_do_leaf(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_do_leaf(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_do_leaf(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  template <int = 0>
  folly::coro::Task<void> co_do_leaf() {
    return co_do_leaf<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  template <int = 0>
  folly::coro::Task<void> co_do_leaf(apache::thrift::RpcOptions& rpcOptions) {
    return co_do_leaf<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  folly::coro::Task<void> co_do_leaf() {
    co_await folly::coro::detachOnCancel(semifuture_do_leaf());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  folly::coro::Task<void> co_do_leaf(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_do_leaf(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_do_leaf(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = do_leafCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      do_leafImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      do_leafImpl(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
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
    if (auto ew = recv_wrapped_do_leaf(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual void do_leaf(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  static folly::exception_wrapper recv_wrapped_do_leaf(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  static void recv_do_leaf(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual void recv_instance_do_leaf(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/inheritance/src/module.thrift", "service": "MyLeaf", "function": "do_leaf"} */
  virtual folly::exception_wrapper recv_instance_wrapped_do_leaf(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void do_leafT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> do_leafCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using MyLeafAsyncClient [[deprecated("Use apache::thrift::Client<MyLeaf> instead")]] = ::apache::thrift::Client<MyLeaf>;
} // namespace cpp2
