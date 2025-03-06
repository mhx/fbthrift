/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/namespace_from_package_without_module_name/gen-cpp2/TestServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace test::namespace_from_package_without_module_name {
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int64_t*>> TestService_init_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::std::int64_t*>> TestService_init_presult;
} // namespace test::namespace_from_package_without_module_name
template <typename RpcOptions>
void apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::fbthrift_send_init(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback, std::unique_ptr<folly::IOBuf> interceptorFrameworkMetadata) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "init",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "test.dev/namespace_from_package_without_module_name/TestService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata), std::move(interceptorFrameworkMetadata));
}



void apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::init(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_int1) {
  ::apache::thrift::RpcOptions rpcOptions;
  init(rpcOptions, std::move(callback), p_int1);
}

void apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::init(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int64_t p_int1) {
  auto [ctx, header] = initCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_init(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_int1);
}

apache::thrift::SerializedRequest apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::fbthrift_serialize_init(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, ::std::int64_t p_int1) {
  return apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& prot) {
    using ProtocolWriter = std::decay_t<decltype(prot)>;
    ::test::namespace_from_package_without_module_name::TestService_init_pargs args;
    args.get<0>().value = &p_int1;
    const auto sizer = [&](ProtocolWriter* p) { return args.serializedSizeZC(p); };
    const auto writer = [&](ProtocolWriter* p) { args.write(p); };
    return apache::thrift::preprocessSendT<ProtocolWriter>(
        &prot,
        rpcOptions,
        contextStack,
        header,
        "init",
        writer,
        sizer,
        channel_->getChecksumSamplingRate());
  });
}

void apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::fbthrift_serialize_and_send_init(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int64_t p_int1, bool stealRpcOptions) {
  apache::thrift::SerializedRequest request = fbthrift_serialize_init(rpcOptions, *header, contextStack, p_int1);
  std::unique_ptr<folly::IOBuf> interceptorFrameworkMetadata = nullptr;
  if (contextStack != nullptr) {
    interceptorFrameworkMetadata = detail::ContextStackInternals::getInterceptorFrameworkMetadata(*contextStack);
  }
  if (stealRpcOptions) {
    fbthrift_send_init(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback), std::move(interceptorFrameworkMetadata));
  } else {
    fbthrift_send_init(std::move(request), rpcOptions, std::move(header), std::move(callback), std::move(interceptorFrameworkMetadata));
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::initCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "TestService.init",
      *header);

  return {std::move(ctx), std::move(header)};
}

::std::int64_t apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::sync_init(::std::int64_t p_int1) {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_init(rpcOptions, p_int1);
}

::std::int64_t apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::sync_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = initCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
  auto* contextStack  = ctxAndHeader.first.get();
  if (contextStack != nullptr) {
    auto argsAsRefs = std::tie(p_int1);
    contextStack->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), ctxAndHeader.second.get()).throwUnlessValue();
  }
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_init(rpcOptions, ctxAndHeader.second, ctxAndHeader.first.get(), std::move(wrappedCallback), p_int1);
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
      return recv_init(returnState);
  });
}


template <typename CallbackType>
folly::SemiFuture<::std::int64_t> apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::fbthrift_semifuture_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<::std::int64_t>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto semifuture = promise.getSemiFuture();
  auto ctxAndHeader = initCtx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<CallbackType>(std::move(promise), recv_wrapped_init, channel_),
    std::move(ctxAndHeader.first));
  auto header = std::move(ctxAndHeader.second);
  auto* contextStack = wrappedCallbackAndContextStack.second;
  auto wrappedCallback = std::move(wrappedCallbackAndContextStack.first);
  std::unique_ptr<folly::IOBuf> interceptorFrameworkMetadata = nullptr;
  if (contextStack != nullptr) {
    auto argsAsRefs = std::tie(p_int1);
    if (auto exTry = contextStack->processClientInterceptorsOnRequest(apache::thrift::ClientInterceptorOnRequestArguments(argsAsRefs), header.get());
        exTry.hasException()) {
      return folly::makeSemiFuture<::std::int64_t>(std::move(exTry).exception());
    }
    interceptorFrameworkMetadata = detail::ContextStackInternals::getInterceptorFrameworkMetadata(*contextStack);
  }
  apache::thrift::SerializedRequest request = fbthrift_serialize_init(rpcOptions, *header, contextStack, p_int1);
  fbthrift_send_init(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback), std::move(interceptorFrameworkMetadata));
  return std::move(semifuture).deferValue(CallbackHelper::processClientInterceptorsAndExtractResult);
}

folly::Future<::std::int64_t> apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::future_init(::std::int64_t p_int1) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_init(rpcOptions, p_int1);
}

folly::SemiFuture<::std::int64_t> apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::semifuture_init(::std::int64_t p_int1) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_init(rpcOptions, p_int1);
}

folly::Future<::std::int64_t> apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::future_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1) {
  using CallbackType = apache::thrift::FutureCallback<::std::int64_t>;
  return fbthrift_semifuture_init<CallbackType>(rpcOptions, p_int1).toUnsafeFuture();
}

folly::SemiFuture<::std::int64_t> apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::semifuture_init(apache::thrift::RpcOptions& rpcOptions, ::std::int64_t p_int1) {
  using CallbackType = apache::thrift::SemiFutureCallback<::std::int64_t>;
  return fbthrift_semifuture_init<CallbackType>(rpcOptions, p_int1);
}


void apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::init(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int64_t p_int1) {
  init(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_int1);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::recv_wrapped_init(::std::int64_t& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::test::namespace_from_package_without_module_name::TestService_init_presult;
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

::std::int64_t apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::recv_init(::apache::thrift::ClientReceiveState& state) {
  ::std::int64_t _return;
  auto ew = recv_wrapped_init(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

::std::int64_t apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::recv_instance_init(::apache::thrift::ClientReceiveState& state) {
  return recv_init(state);
}

folly::exception_wrapper apache::thrift::Client<::test::namespace_from_package_without_module_name::TestService>::recv_instance_wrapped_init(::std::int64_t& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_init(_return, state);
}


