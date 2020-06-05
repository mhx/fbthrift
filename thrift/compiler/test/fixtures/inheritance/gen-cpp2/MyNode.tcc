/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyNode.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> MyNode_do_mid_pargs;
typedef apache::thrift::ThriftPresult<true> MyNode_do_mid_presult;
template <typename ProtocolIn_, typename ProtocolOut_>
void MyNodeAsyncProcessor::_processInThread_do_mid(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &MyNodeAsyncProcessor::process_do_mid<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void MyNodeAsyncProcessor::process_do_mid(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  MyNode_do_mid_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "MyNode.do_mid", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "do_mid");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_do_mid<ProtocolIn_,ProtocolOut_>, throw_wrapped_do_mid<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  iface_->async_tm_do_mid(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue MyNodeAsyncProcessor::return_do_mid(int32_t protoSeqId, apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  MyNode_do_mid_presult result;
  return serializeResponse("do_mid", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void MyNodeAsyncProcessor::throw_wrapped_do_mid(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "do_mid");
    return;
  }
}

} // cpp2
