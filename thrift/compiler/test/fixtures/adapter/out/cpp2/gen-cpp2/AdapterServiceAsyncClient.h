/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/adapter/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace facebook::thrift::test {
class AdapterService;
} // namespace facebook::thrift::test
namespace apache::thrift {

template <>
class Client<::facebook::thrift::test::AdapterService> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "AdapterService";
  }

  static const char* __fbthrift_thrift_uri() {
    return "facebook.com/thrift/test/AdapterService";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual void count(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual void count(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void countImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual void sync_count(::facebook::thrift::test::CountingStruct& _return);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual void sync_count(apache::thrift::RpcOptions& rpcOptions, ::facebook::thrift::test::CountingStruct& _return);

  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual folly::Future<::facebook::thrift::test::CountingStruct> future_count();
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual folly::SemiFuture<::facebook::thrift::test::CountingStruct> semifuture_count();
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual folly::Future<::facebook::thrift::test::CountingStruct> future_count(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual folly::SemiFuture<::facebook::thrift::test::CountingStruct> semifuture_count(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual folly::Future<std::pair<::facebook::thrift::test::CountingStruct, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_count(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual folly::SemiFuture<std::pair<::facebook::thrift::test::CountingStruct, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_count(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  template <int = 0>
  folly::coro::Task<::facebook::thrift::test::CountingStruct> co_count() {
    return co_count<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  template <int = 0>
  folly::coro::Task<::facebook::thrift::test::CountingStruct> co_count(apache::thrift::RpcOptions& rpcOptions) {
    return co_count<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  folly::coro::Task<::facebook::thrift::test::CountingStruct> co_count() {
    co_return co_await folly::coro::detachOnCancel(semifuture_count());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  folly::coro::Task<::facebook::thrift::test::CountingStruct> co_count(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_count(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::facebook::thrift::test::CountingStruct> co_count(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = countCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      countImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      countImpl(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    ::facebook::thrift::test::CountingStruct _return;
    if (auto ew = recv_wrapped_count(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual void count(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  static folly::exception_wrapper recv_wrapped_count(::facebook::thrift::test::CountingStruct& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  static void recv_count(::facebook::thrift::test::CountingStruct& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual void recv_instance_count(::facebook::thrift::test::CountingStruct& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "count"} */
  virtual folly::exception_wrapper recv_instance_wrapped_count(::facebook::thrift::test::CountingStruct& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void countT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> countCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual void adaptedTypes(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::facebook::thrift::test::HeapAllocated& p_arg);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual void adaptedTypes(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::facebook::thrift::test::HeapAllocated& p_arg);
 protected:
  void adaptedTypesImpl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::facebook::thrift::test::HeapAllocated& p_arg, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual void sync_adaptedTypes(::facebook::thrift::test::HeapAllocated& _return, const ::facebook::thrift::test::HeapAllocated& p_arg);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual void sync_adaptedTypes(apache::thrift::RpcOptions& rpcOptions, ::facebook::thrift::test::HeapAllocated& _return, const ::facebook::thrift::test::HeapAllocated& p_arg);

  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual folly::Future<::facebook::thrift::test::HeapAllocated> future_adaptedTypes(const ::facebook::thrift::test::HeapAllocated& p_arg);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual folly::SemiFuture<::facebook::thrift::test::HeapAllocated> semifuture_adaptedTypes(const ::facebook::thrift::test::HeapAllocated& p_arg);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual folly::Future<::facebook::thrift::test::HeapAllocated> future_adaptedTypes(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::HeapAllocated& p_arg);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual folly::SemiFuture<::facebook::thrift::test::HeapAllocated> semifuture_adaptedTypes(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::HeapAllocated& p_arg);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual folly::Future<std::pair<::facebook::thrift::test::HeapAllocated, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_adaptedTypes(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::HeapAllocated& p_arg);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual folly::SemiFuture<std::pair<::facebook::thrift::test::HeapAllocated, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_adaptedTypes(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::HeapAllocated& p_arg);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  template <int = 0>
  folly::coro::Task<::facebook::thrift::test::HeapAllocated> co_adaptedTypes(const ::facebook::thrift::test::HeapAllocated& p_arg) {
    return co_adaptedTypes<false>(nullptr, p_arg);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  template <int = 0>
  folly::coro::Task<::facebook::thrift::test::HeapAllocated> co_adaptedTypes(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::HeapAllocated& p_arg) {
    return co_adaptedTypes<true>(&rpcOptions, p_arg);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  folly::coro::Task<::facebook::thrift::test::HeapAllocated> co_adaptedTypes(const ::facebook::thrift::test::HeapAllocated& p_arg) {
    co_return co_await folly::coro::detachOnCancel(semifuture_adaptedTypes(p_arg));
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  folly::coro::Task<::facebook::thrift::test::HeapAllocated> co_adaptedTypes(apache::thrift::RpcOptions& rpcOptions, const ::facebook::thrift::test::HeapAllocated& p_arg) {
    co_return co_await folly::coro::detachOnCancel(semifuture_adaptedTypes(rpcOptions, p_arg));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::facebook::thrift::test::HeapAllocated> co_adaptedTypes(apache::thrift::RpcOptions* rpcOptions, const ::facebook::thrift::test::HeapAllocated& p_arg) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = adaptedTypesCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if constexpr (hasRpcOptions) {
      adaptedTypesImpl(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_arg);
    } else {
      adaptedTypesImpl(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback), p_arg);
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
    ::facebook::thrift::test::HeapAllocated _return;
    if (auto ew = recv_wrapped_adaptedTypes(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual void adaptedTypes(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::facebook::thrift::test::HeapAllocated& p_arg);


  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  static folly::exception_wrapper recv_wrapped_adaptedTypes(::facebook::thrift::test::HeapAllocated& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  static void recv_adaptedTypes(::facebook::thrift::test::HeapAllocated& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual void recv_instance_adaptedTypes(::facebook::thrift::test::HeapAllocated& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/adapter/src/module.thrift", "service": "AdapterService", "function": "adaptedTypes"} */
  virtual folly::exception_wrapper recv_instance_wrapped_adaptedTypes(::facebook::thrift::test::HeapAllocated& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_, typename RpcOptions>
  void adaptedTypesT(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::facebook::thrift::test::HeapAllocated& p_arg);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> adaptedTypesCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace facebook::thrift::test {
using AdapterServiceAsyncClient [[deprecated("Use apache::thrift::Client<AdapterService> instead")]] = ::apache::thrift::Client<AdapterService>;
} // namespace facebook::thrift::test
