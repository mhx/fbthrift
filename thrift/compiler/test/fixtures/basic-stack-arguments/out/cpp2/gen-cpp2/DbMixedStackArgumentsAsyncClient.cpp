/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-stack-arguments/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-stack-arguments/gen-cpp2/DbMixedStackArgumentsAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::string, ::std::string*>> DbMixedStackArguments_getDataByKey0_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::binary, ::std::string*>> DbMixedStackArguments_getDataByKey0_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::string, ::std::string*>> DbMixedStackArguments_getDataByKey1_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::binary, ::std::string*>> DbMixedStackArguments_getDataByKey1_presult;
} // namespace cpp2
template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey0T(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& p_key) {

  ::cpp2::DbMixedStackArguments_getDataByKey0_pargs args;
  args.get<0>().value = const_cast<::std::string*>(&p_key);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "getDataByKey0",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "DbMixedStackArguments");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}

template <typename Protocol_, typename RpcOptions>
void apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey1T(Protocol_* prot, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& p_key) {

  ::cpp2::DbMixedStackArguments_getDataByKey1_pargs args;
  args.get<0>().value = const_cast<::std::string*>(&p_key);
  auto sizer = [&](Protocol_* p) { return args.serializedSizeZC(p); };
  auto writer = [&](Protocol_* p) { args.write(p); };

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "getDataByKey1",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "DbMixedStackArguments");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, Protocol_>(prot, std::forward<RpcOptions>(rpcOptions), std::move(callback), contextStack, std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), writer, sizer);
}



void apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey0(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key) {
  ::apache::thrift::RpcOptions rpcOptions;
  getDataByKey0(rpcOptions, std::move(callback), p_key);
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey0(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key) {
  auto [ctx, header] = getDataByKey0Ctx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  getDataByKey0Impl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_key);
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey0Impl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& p_key, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        getDataByKey0T(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_key);
      } else {
        getDataByKey0T(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_key);
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        getDataByKey0T(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_key);
      } else {
        getDataByKey0T(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_key);
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey0Ctx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      interceptors_,
      getServiceName(),
      "DbMixedStackArguments.getDataByKey0",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::sync_getDataByKey0(::std::string& _return, const ::std::string& p_key) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_getDataByKey0(rpcOptions, _return, p_key);
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::sync_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, const ::std::string& p_key) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = getDataByKey0Ctx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = ctxAndHeader.first && ctxAndHeader.first->shouldProcessClientInterceptors();
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnRequest());
  }
#endif
  callback.waitUntilDone(
    evb,
    [&] {
      getDataByKey0Impl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_key);
    });
#if FOLLY_HAS_COROUTINES
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnResponse());
  }
#endif
  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_getDataByKey0(_return, returnState);
  });
}

folly::Try<apache::thrift::RpcResponseComplete<::std::string>>
apache::thrift::Client<::cpp2::DbMixedStackArguments>::sync_complete_getDataByKey0(
    apache::thrift::RpcOptions&& rpcOptions,  const ::std::string& p_key) {
  apache::thrift::ClientReceiveState returnState;
  auto ctxAndHeader = getDataByKey0Ctx(&rpcOptions);
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  const auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* const evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      getDataByKey0Impl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_key, true);
    });
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));

  folly::Try<apache::thrift::RpcResponseComplete<::std::string>> tryResponse;
  if (auto* header = returnState.header()) {
    rpcOptions.setRoutingData(header->releaseRoutingData());
  }
  if (!returnState.hasResponseBuffer()) {
    assert(returnState.isException());
  	tryResponse.emplaceException(std::move(returnState.exception()));
  } else {
    tryResponse.emplace();
    tryResponse->responseContext.rpcTransportStats = returnState.getRpcTransportStats();
    if (auto* header = returnState.header()) {
      if (!header->getHeaders().empty()) {
  	    tryResponse->responseContext.headers = header->releaseHeaders();
      }
      if (auto load = header->getServerLoad()) {
        tryResponse->responseContext.serverLoad = *load;
      }
    }
    tryResponse->response.emplace();
    auto ew = folly::fibers::runInMainContext([&] {
      return recv_wrapped_getDataByKey0(tryResponse->response.value(), returnState);
    });
    if (ew) {
      tryResponse->response.emplaceException(std::move(ew));
    }
  }
  return tryResponse;
}

folly::Future<::std::string> apache::thrift::Client<::cpp2::DbMixedStackArguments>::future_getDataByKey0(const ::std::string& p_key) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_getDataByKey0(rpcOptions, p_key);
}

folly::SemiFuture<::std::string> apache::thrift::Client<::cpp2::DbMixedStackArguments>::semifuture_getDataByKey0(const ::std::string& p_key) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_getDataByKey0(rpcOptions, p_key);
}

folly::Future<::std::string> apache::thrift::Client<::cpp2::DbMixedStackArguments>::future_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
  folly::Promise<::std::string> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::std::string>>(std::move(promise), recv_wrapped_getDataByKey0, channel_);
  getDataByKey0(rpcOptions, std::move(callback), p_key);
  return future;
}

folly::SemiFuture<::std::string> apache::thrift::Client<::cpp2::DbMixedStackArguments>::semifuture_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_getDataByKey0, channel_);
  auto callback = std::move(callbackAndFuture.first);
  getDataByKey0(rpcOptions, std::move(callback), p_key);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::DbMixedStackArguments>::header_future_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
  folly::Promise<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::std::string>>(std::move(promise), recv_wrapped_getDataByKey0, channel_);
  getDataByKey0(rpcOptions, std::move(callback), p_key);
  return future;
}

folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::DbMixedStackArguments>::header_semifuture_getDataByKey0(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_getDataByKey0, channel_);
  auto callback = std::move(callbackAndFuture.first);
  getDataByKey0(rpcOptions, std::move(callback), p_key);
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey0(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::string& p_key) {
  getDataByKey0(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_key);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::DbMixedStackArguments>::recv_wrapped_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::DbMixedStackArguments_getDataByKey0_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::recv_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_getDataByKey0(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::recv_instance_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_getDataByKey0(_return, state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::DbMixedStackArguments>::recv_instance_wrapped_getDataByKey0(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_getDataByKey0(_return, state);
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey1(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key) {
  ::apache::thrift::RpcOptions rpcOptions;
  getDataByKey1(rpcOptions, std::move(callback), p_key);
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey1(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::std::string& p_key) {
  auto [ctx, header] = getDataByKey1Ctx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  getDataByKey1Impl(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_key);
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey1Impl(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::std::string& p_key, bool stealRpcOptions) {
  switch (apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      if (stealRpcOptions) {
        getDataByKey1T(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_key);
      } else {
        getDataByKey1T(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_key);
      }
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      if (stealRpcOptions) {
        getDataByKey1T(&writer, std::move(rpcOptions), std::move(header), contextStack, std::move(callback), p_key);
      } else {
        getDataByKey1T(&writer, rpcOptions, std::move(header), contextStack, std::move(callback), p_key);
      }
      break;
    }
    default:
    {
      apache::thrift::detail::ac::throw_app_exn("Could not find Protocol");
    }
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey1Ctx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      interceptors_,
      getServiceName(),
      "DbMixedStackArguments.getDataByKey1",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::sync_getDataByKey1(::std::string& _return, const ::std::string& p_key) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_getDataByKey1(rpcOptions, _return, p_key);
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::sync_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, const ::std::string& p_key) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = getDataByKey1Ctx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = ctxAndHeader.first && ctxAndHeader.first->shouldProcessClientInterceptors();
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnRequest());
  }
#endif
  callback.waitUntilDone(
    evb,
    [&] {
      getDataByKey1Impl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_key);
    });
#if FOLLY_HAS_COROUTINES
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnResponse());
  }
#endif
  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_getDataByKey1(_return, returnState);
  });
}

folly::Try<apache::thrift::RpcResponseComplete<::std::string>>
apache::thrift::Client<::cpp2::DbMixedStackArguments>::sync_complete_getDataByKey1(
    apache::thrift::RpcOptions&& rpcOptions,  const ::std::string& p_key) {
  apache::thrift::ClientReceiveState returnState;
  auto ctxAndHeader = getDataByKey1Ctx(&rpcOptions);
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  const auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto* const evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  callback.waitUntilDone(
    evb,
    [&] {
      getDataByKey1Impl(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_key, true);
    });
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));

  folly::Try<apache::thrift::RpcResponseComplete<::std::string>> tryResponse;
  if (auto* header = returnState.header()) {
    rpcOptions.setRoutingData(header->releaseRoutingData());
  }
  if (!returnState.hasResponseBuffer()) {
    assert(returnState.isException());
  	tryResponse.emplaceException(std::move(returnState.exception()));
  } else {
    tryResponse.emplace();
    tryResponse->responseContext.rpcTransportStats = returnState.getRpcTransportStats();
    if (auto* header = returnState.header()) {
      if (!header->getHeaders().empty()) {
  	    tryResponse->responseContext.headers = header->releaseHeaders();
      }
      if (auto load = header->getServerLoad()) {
        tryResponse->responseContext.serverLoad = *load;
      }
    }
    tryResponse->response.emplace();
    auto ew = folly::fibers::runInMainContext([&] {
      return recv_wrapped_getDataByKey1(tryResponse->response.value(), returnState);
    });
    if (ew) {
      tryResponse->response.emplaceException(std::move(ew));
    }
  }
  return tryResponse;
}

folly::Future<::std::string> apache::thrift::Client<::cpp2::DbMixedStackArguments>::future_getDataByKey1(const ::std::string& p_key) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_getDataByKey1(rpcOptions, p_key);
}

folly::SemiFuture<::std::string> apache::thrift::Client<::cpp2::DbMixedStackArguments>::semifuture_getDataByKey1(const ::std::string& p_key) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_getDataByKey1(rpcOptions, p_key);
}

folly::Future<::std::string> apache::thrift::Client<::cpp2::DbMixedStackArguments>::future_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
  folly::Promise<::std::string> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<::std::string>>(std::move(promise), recv_wrapped_getDataByKey1, channel_);
  getDataByKey1(rpcOptions, std::move(callback), p_key);
  return future;
}

folly::SemiFuture<::std::string> apache::thrift::Client<::cpp2::DbMixedStackArguments>::semifuture_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
  auto callbackAndFuture = makeSemiFutureCallback(recv_wrapped_getDataByKey1, channel_);
  auto callback = std::move(callbackAndFuture.first);
  getDataByKey1(rpcOptions, std::move(callback), p_key);
  return std::move(callbackAndFuture.second);
}

folly::Future<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::DbMixedStackArguments>::header_future_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
  folly::Promise<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> promise;
  auto future = promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<::std::string>>(std::move(promise), recv_wrapped_getDataByKey1, channel_);
  getDataByKey1(rpcOptions, std::move(callback), p_key);
  return future;
}

folly::SemiFuture<std::pair<::std::string, std::unique_ptr<apache::thrift::transport::THeader>>> apache::thrift::Client<::cpp2::DbMixedStackArguments>::header_semifuture_getDataByKey1(apache::thrift::RpcOptions& rpcOptions, const ::std::string& p_key) {
  auto callbackAndFuture = makeHeaderSemiFutureCallback(recv_wrapped_getDataByKey1, channel_);
  auto callback = std::move(callbackAndFuture.first);
  getDataByKey1(rpcOptions, std::move(callback), p_key);
  return std::move(callbackAndFuture.second);
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::getDataByKey1(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::std::string& p_key) {
  getDataByKey1(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_key);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::DbMixedStackArguments>::recv_wrapped_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::DbMixedStackArguments_getDataByKey1_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::recv_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_getDataByKey1(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::DbMixedStackArguments>::recv_instance_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_getDataByKey1(_return, state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::DbMixedStackArguments>::recv_instance_wrapped_getDataByKey1(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_getDataByKey1(_return, state);
}


