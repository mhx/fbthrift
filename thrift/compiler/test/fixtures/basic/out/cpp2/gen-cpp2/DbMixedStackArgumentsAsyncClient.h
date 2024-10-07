/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace test::fixtures::basic {
class DbMixedStackArguments;
} // namespace test::fixtures::basic
namespace apache::thrift {

template <>
class Client<::test::fixtures::basic::DbMixedStackArguments> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "DbMixedStackArguments";
  }

  static const char* __fbthrift_thrift_uri() {
    return "test.dev/fixtures/basic/DbMixedStackArguments";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  virtual void getDataByKey0(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  virtual void getDataByKey0(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key);
 protected:
  void fbthrift_serialize_and_send_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& p_key, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  virtual void sync_getDataByKey0(::std::string& _return, const ::std::string& p_key);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  virtual void sync_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, const ::std::string& p_key);

  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  virtual folly::Future<::std::string> future_getDataByKey0(const ::std::string& p_key);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  virtual folly::SemiFuture<::std::string> semifuture_getDataByKey0(const ::std::string& p_key);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  virtual folly::Future<::std::string> future_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  virtual folly::SemiFuture<::std::string> semifuture_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  template <int = 0>
  folly::coro::Task<::std::string> co_getDataByKey0(const ::std::string& p_key) {
    return co_getDataByKey0<false>(nullptr, p_key);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  template <int = 0>
  folly::coro::Task<::std::string> co_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
    return co_getDataByKey0<true>(&rpcOptions, p_key);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  folly::coro::Task<::std::string> co_getDataByKey0(const ::std::string& p_key) {
    co_return co_await folly::coro::detachOnCancel(semifuture_getDataByKey0(p_key));
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  folly::coro::Task<::std::string> co_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
    co_return co_await folly::coro::detachOnCancel(semifuture_getDataByKey0(rpcOptions, p_key));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::string> co_getDataByKey0(apache::thrift::RpcOptions* rpcOptions, const ::std::string& p_key) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = getDataByKey0Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if (ctx != nullptr) {
      auto argsAsRefs = std::tie(p_key);
      ctx->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), header.get()).throwUnlessValue();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_getDataByKey0(*rpcOptions, header, ctx.get(), std::move(wrappedCallback), p_key);
    } else {
      fbthrift_serialize_and_send_getDataByKey0(*defaultRpcOptions, header, ctx.get(), std::move(wrappedCallback), p_key);
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
    ::std::string _return;
    if (auto ew = recv_wrapped_getDataByKey0(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  virtual void getDataByKey0(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::string& p_key);


  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  static folly::exception_wrapper recv_wrapped_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  static void recv_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  virtual void recv_instance_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey0"} */
  virtual folly::exception_wrapper recv_instance_wrapped_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_getDataByKey0(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, const ::std::string& p_key);
  template <typename RpcOptions>
  void fbthrift_send_getDataByKey0(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> getDataByKey0Ctx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<::std::string> fbthrift_semifuture_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  virtual void getDataByKey1(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  virtual void getDataByKey1(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key);
 protected:
  void fbthrift_serialize_and_send_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& p_key, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  virtual void sync_getDataByKey1(::std::string& _return, const ::std::string& p_key);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  virtual void sync_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, const ::std::string& p_key);

  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  virtual folly::Future<::std::string> future_getDataByKey1(const ::std::string& p_key);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  virtual folly::SemiFuture<::std::string> semifuture_getDataByKey1(const ::std::string& p_key);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  virtual folly::Future<::std::string> future_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  virtual folly::SemiFuture<::std::string> semifuture_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  template <int = 0>
  folly::coro::Task<::std::string> co_getDataByKey1(const ::std::string& p_key) {
    return co_getDataByKey1<false>(nullptr, p_key);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  template <int = 0>
  folly::coro::Task<::std::string> co_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
    return co_getDataByKey1<true>(&rpcOptions, p_key);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  folly::coro::Task<::std::string> co_getDataByKey1(const ::std::string& p_key) {
    co_return co_await folly::coro::detachOnCancel(semifuture_getDataByKey1(p_key));
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  folly::coro::Task<::std::string> co_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
    co_return co_await folly::coro::detachOnCancel(semifuture_getDataByKey1(rpcOptions, p_key));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::string> co_getDataByKey1(apache::thrift::RpcOptions* rpcOptions, const ::std::string& p_key) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = getDataByKey1Ctx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    if (ctx != nullptr) {
      auto argsAsRefs = std::tie(p_key);
      ctx->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), header.get()).throwUnlessValue();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_getDataByKey1(*rpcOptions, header, ctx.get(), std::move(wrappedCallback), p_key);
    } else {
      fbthrift_serialize_and_send_getDataByKey1(*defaultRpcOptions, header, ctx.get(), std::move(wrappedCallback), p_key);
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
    ::std::string _return;
    if (auto ew = recv_wrapped_getDataByKey1(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  virtual void getDataByKey1(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::string& p_key);


  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  static folly::exception_wrapper recv_wrapped_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  static void recv_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  virtual void recv_instance_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "DbMixedStackArguments", "function": "getDataByKey1"} */
  virtual folly::exception_wrapper recv_instance_wrapped_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_getDataByKey1(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, const ::std::string& p_key);
  template <typename RpcOptions>
  void fbthrift_send_getDataByKey1(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> getDataByKey1Ctx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<::std::string> fbthrift_semifuture_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key);
 public:
};

} // namespace apache::thrift

namespace test::fixtures::basic {
using DbMixedStackArgumentsAsyncClient [[deprecated("Use apache::thrift::Client<DbMixedStackArguments> instead")]] = ::apache::thrift::Client<DbMixedStackArguments>;
} // namespace test::fixtures::basic
