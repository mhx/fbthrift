/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/service.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/MyServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::MyStruct*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::structure, ::cpp2::Included*>> MyService_query_pargs;
typedef apache::thrift::ThriftPresult<true> MyService_query_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::MyStruct*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::structure, ::cpp2::Included*>> MyService_has_arg_docs_pargs;
typedef apache::thrift::ThriftPresult<true> MyService_has_arg_docs_presult;
} // namespace cpp2
template <typename RpcOptions>
void apache::thrift::Client<::cpp2::MyService>::fbthrift_send_query(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback, std::unique_ptr<folly::IOBuf> interceptorFrameworkMetadata) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "query",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "MyService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), std::move(interceptorFrameworkMetadata));
}

template <typename RpcOptions>
void apache::thrift::Client<::cpp2::MyService>::fbthrift_send_has_arg_docs(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback, std::unique_ptr<folly::IOBuf> interceptorFrameworkMetadata) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "has_arg_docs",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "MyService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), std::move(interceptorFrameworkMetadata));
}



void apache::thrift::Client<::cpp2::MyService>::query(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  query(rpcOptions, std::move(callback), p_s, p_i);
}

void apache::thrift::Client<::cpp2::MyService>::query(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  auto [ctx, header] = queryCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_query(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_s, p_i);
}

apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::MyService>::fbthrift_serialize_query(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  return apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& prot) {
    using ProtocolWriter = std::decay_t<decltype(prot)>;
    ::cpp2::MyService_query_pargs args;
    args.get<0>().value = const_cast<::cpp2::MyStruct*>(&p_s);
    args.get<1>().value = const_cast<::cpp2::Included*>(&p_i);
    const auto sizer = [&](ProtocolWriter* p) { return args.serializedSizeZC(p); };
    const auto writer = [&](ProtocolWriter* p) { args.write(p); };
    return apache::thrift::preprocessSendT<ProtocolWriter>(
        &prot,
        rpcOptions,
        contextStack,
        header,
        "query",
        writer,
        sizer,
        channel_->getChecksumSamplingRate());
  });
}

void apache::thrift::Client<::cpp2::MyService>::fbthrift_serialize_and_send_query(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i, bool stealRpcOptions) {
  apache::thrift::SerializedRequest request = fbthrift_serialize_query(rpcOptions, *header, contextStack, p_s, p_i);
  std::unique_ptr<folly::IOBuf> interceptorFrameworkMetadata = nullptr;
  if (contextStack != nullptr) {
    interceptorFrameworkMetadata = detail::ContextStackUnsafeAPI(*contextStack).getInterceptorFrameworkMetadata(rpcOptions);
  }
  if (stealRpcOptions) {
    fbthrift_send_query(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback), std::move(interceptorFrameworkMetadata));
  } else {
    fbthrift_send_query(std::move(request), rpcOptions, std::move(header), std::move(callback), std::move(interceptorFrameworkMetadata));
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::MyService>::queryCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "MyService.query",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::MyService>::sync_query(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_query(rpcOptions, p_s, p_i);
}

void apache::thrift::Client<::cpp2::MyService>::sync_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = queryCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  auto* contextStack  = ctxAndHeader.first.get();
  if (contextStack != nullptr) {
    auto argsAsRefs = std::tie(p_s, p_i);
    contextStack->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), ctxAndHeader.second.get()).throwUnlessValue();
  }
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_query(rpcOptions, ctxAndHeader.second, ctxAndHeader.first.get(), std::move(wrappedCallback), p_s, p_i);
    });
  if (contextStack != nullptr) {
    contextStack->processClientInterceptorsOnResponse(returnState.header()).throwUnlessValue();
  }
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
      recv_query(returnState);
  });
}


template <typename CallbackType>
folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::MyService>::fbthrift_semifuture_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto semifuture = promise.getSemiFuture();
  auto ctxAndHeader = queryCtx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<CallbackType>(std::move(promise), recv_wrapped_query, channel_),
    std::move(ctxAndHeader.first));
  auto header = std::move(ctxAndHeader.second);
  auto* contextStack = wrappedCallbackAndContextStack.second;
  auto wrappedCallback = std::move(wrappedCallbackAndContextStack.first);
  std::unique_ptr<folly::IOBuf> interceptorFrameworkMetadata = nullptr;
  if (contextStack != nullptr) {
    auto argsAsRefs = std::tie(p_s, p_i);
    if (auto exTry = contextStack->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), header.get());
        exTry.hasException()) {
      return folly::makeSemiFuture<folly::Unit>(std::move(exTry).exception());
    }
    interceptorFrameworkMetadata = detail::ContextStackUnsafeAPI(*contextStack).getInterceptorFrameworkMetadata(rpcOptions);
  }
  apache::thrift::SerializedRequest request = fbthrift_serialize_query(rpcOptions, *header, contextStack, p_s, p_i);
  fbthrift_send_query(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback), std::move(interceptorFrameworkMetadata));
  return std::move(semifuture).deferValue(CallbackHelper::processClientInterceptorsAndExtractResult);
}

folly::Future<folly::Unit> apache::thrift::Client<::cpp2::MyService>::future_query(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_query(rpcOptions, p_s, p_i);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::MyService>::semifuture_query(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_query(rpcOptions, p_s, p_i);
}

folly::Future<folly::Unit> apache::thrift::Client<::cpp2::MyService>::future_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  using CallbackType = apache::thrift::FutureCallback<folly::Unit>;
  return fbthrift_semifuture_query<CallbackType>(rpcOptions, p_s, p_i).toUnsafeFuture();
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::MyService>::semifuture_query(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  using CallbackType = apache::thrift::SemiFutureCallback<folly::Unit>;
  return fbthrift_semifuture_query<CallbackType>(rpcOptions, p_s, p_i);
}


void apache::thrift::Client<::cpp2::MyService>::query(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  query(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_s, p_i);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::MyService>::recv_wrapped_query(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::MyService_query_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::cpp2::MyService>::recv_query(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_query(state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::MyService>::recv_instance_query(::apache::thrift::ClientReceiveState& state) {
  recv_query(state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::MyService>::recv_instance_wrapped_query(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_query(state);
}

void apache::thrift::Client<::cpp2::MyService>::has_arg_docs(std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  has_arg_docs(rpcOptions, std::move(callback), p_s, p_i);
}

void apache::thrift::Client<::cpp2::MyService>::has_arg_docs(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  auto [ctx, header] = has_arg_docsCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_has_arg_docs(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_s, p_i);
}

apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::MyService>::fbthrift_serialize_has_arg_docs(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  return apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& prot) {
    using ProtocolWriter = std::decay_t<decltype(prot)>;
    ::cpp2::MyService_has_arg_docs_pargs args;
    args.get<0>().value = const_cast<::cpp2::MyStruct*>(&p_s);
    args.get<1>().value = const_cast<::cpp2::Included*>(&p_i);
    const auto sizer = [&](ProtocolWriter* p) { return args.serializedSizeZC(p); };
    const auto writer = [&](ProtocolWriter* p) { args.write(p); };
    return apache::thrift::preprocessSendT<ProtocolWriter>(
        &prot,
        rpcOptions,
        contextStack,
        header,
        "has_arg_docs",
        writer,
        sizer,
        channel_->getChecksumSamplingRate());
  });
}

void apache::thrift::Client<::cpp2::MyService>::fbthrift_serialize_and_send_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i, bool stealRpcOptions) {
  apache::thrift::SerializedRequest request = fbthrift_serialize_has_arg_docs(rpcOptions, *header, contextStack, p_s, p_i);
  std::unique_ptr<folly::IOBuf> interceptorFrameworkMetadata = nullptr;
  if (contextStack != nullptr) {
    interceptorFrameworkMetadata = detail::ContextStackUnsafeAPI(*contextStack).getInterceptorFrameworkMetadata(rpcOptions);
  }
  if (stealRpcOptions) {
    fbthrift_send_has_arg_docs(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback), std::move(interceptorFrameworkMetadata));
  } else {
    fbthrift_send_has_arg_docs(std::move(request), rpcOptions, std::move(header), std::move(callback), std::move(interceptorFrameworkMetadata));
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::MyService>::has_arg_docsCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "MyService.has_arg_docs",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::MyService>::sync_has_arg_docs(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_has_arg_docs(rpcOptions, p_s, p_i);
}

void apache::thrift::Client<::cpp2::MyService>::sync_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = has_arg_docsCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  auto* contextStack  = ctxAndHeader.first.get();
  if (contextStack != nullptr) {
    auto argsAsRefs = std::tie(p_s, p_i);
    contextStack->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), ctxAndHeader.second.get()).throwUnlessValue();
  }
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_has_arg_docs(rpcOptions, ctxAndHeader.second, ctxAndHeader.first.get(), std::move(wrappedCallback), p_s, p_i);
    });
  if (contextStack != nullptr) {
    contextStack->processClientInterceptorsOnResponse(returnState.header()).throwUnlessValue();
  }
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
      recv_has_arg_docs(returnState);
  });
}


template <typename CallbackType>
folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::MyService>::fbthrift_semifuture_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto semifuture = promise.getSemiFuture();
  auto ctxAndHeader = has_arg_docsCtx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<CallbackType>(std::move(promise), recv_wrapped_has_arg_docs, channel_),
    std::move(ctxAndHeader.first));
  auto header = std::move(ctxAndHeader.second);
  auto* contextStack = wrappedCallbackAndContextStack.second;
  auto wrappedCallback = std::move(wrappedCallbackAndContextStack.first);
  std::unique_ptr<folly::IOBuf> interceptorFrameworkMetadata = nullptr;
  if (contextStack != nullptr) {
    auto argsAsRefs = std::tie(p_s, p_i);
    if (auto exTry = contextStack->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), header.get());
        exTry.hasException()) {
      return folly::makeSemiFuture<folly::Unit>(std::move(exTry).exception());
    }
    interceptorFrameworkMetadata = detail::ContextStackUnsafeAPI(*contextStack).getInterceptorFrameworkMetadata(rpcOptions);
  }
  apache::thrift::SerializedRequest request = fbthrift_serialize_has_arg_docs(rpcOptions, *header, contextStack, p_s, p_i);
  fbthrift_send_has_arg_docs(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback), std::move(interceptorFrameworkMetadata));
  return std::move(semifuture).deferValue(CallbackHelper::processClientInterceptorsAndExtractResult);
}

folly::Future<folly::Unit> apache::thrift::Client<::cpp2::MyService>::future_has_arg_docs(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_has_arg_docs(rpcOptions, p_s, p_i);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::MyService>::semifuture_has_arg_docs(const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_has_arg_docs(rpcOptions, p_s, p_i);
}

folly::Future<folly::Unit> apache::thrift::Client<::cpp2::MyService>::future_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  using CallbackType = apache::thrift::FutureCallback<folly::Unit>;
  return fbthrift_semifuture_has_arg_docs<CallbackType>(rpcOptions, p_s, p_i).toUnsafeFuture();
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::MyService>::semifuture_has_arg_docs(apache::thrift::RpcOptions& rpcOptions, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  using CallbackType = apache::thrift::SemiFutureCallback<folly::Unit>;
  return fbthrift_semifuture_has_arg_docs<CallbackType>(rpcOptions, p_s, p_i);
}


void apache::thrift::Client<::cpp2::MyService>::has_arg_docs(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const ::cpp2::MyStruct& p_s, const ::cpp2::Included& p_i) {
  has_arg_docs(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_s, p_i);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::MyService>::recv_wrapped_has_arg_docs(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::MyService_has_arg_docs_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void apache::thrift::Client<::cpp2::MyService>::recv_has_arg_docs(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_has_arg_docs(state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::MyService>::recv_instance_has_arg_docs(::apache::thrift::ClientReceiveState& state) {
  recv_has_arg_docs(state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::MyService>::recv_instance_wrapped_has_arg_docs(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_has_arg_docs(state);
}


