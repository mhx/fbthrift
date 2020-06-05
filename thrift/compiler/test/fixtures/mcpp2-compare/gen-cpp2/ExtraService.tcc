/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/ExtraService.h"

#include <thrift/lib/cpp2/gen/service_tcc.h>

namespace extra { namespace svc {
typedef apache::thrift::ThriftPresult<false> ExtraService_simple_function_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_BOOL, bool*>> ExtraService_simple_function_presult;
typedef apache::thrift::ThriftPresult<false> ExtraService_throws_function_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::some::valid::ns::AnException>, apache::thrift::FieldData<2, apache::thrift::protocol::T_STRUCT,  ::some::valid::ns::AnotherException>> ExtraService_throws_function_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_BOOL, bool*>> ExtraService_throws_function2_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_BOOL, bool*>, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::some::valid::ns::AnException>, apache::thrift::FieldData<2, apache::thrift::protocol::T_STRUCT,  ::some::valid::ns::AnotherException>> ExtraService_throws_function2_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_BOOL, bool*>, apache::thrift::FieldData<3, apache::thrift::protocol::T_STRING, ::std::string*>> ExtraService_throws_function3_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, apache::thrift::protocol::T_MAP, ::std::map<int32_t, ::std::string>*>, apache::thrift::FieldData<2, apache::thrift::protocol::T_STRUCT,  ::some::valid::ns::AnException>, apache::thrift::FieldData<5, apache::thrift::protocol::T_STRUCT,  ::some::valid::ns::AnotherException>> ExtraService_throws_function3_presult;
typedef apache::thrift::ThriftPresult<false> ExtraService_oneway_void_ret_pargs;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<2, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<3, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<4, apache::thrift::protocol::T_I32, int32_t*>, apache::thrift::FieldData<5, apache::thrift::protocol::T_I32, int32_t*>> ExtraService_oneway_void_ret_i32_i32_i32_i32_i32_param_pargs;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_MAP, ::std::map<::std::string, int64_t>*>, apache::thrift::FieldData<3, apache::thrift::protocol::T_SET, ::std::set<::std::vector<::std::string>>*>> ExtraService_oneway_void_ret_map_setlist_param_pargs;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_STRUCT,  ::some::valid::ns::MyStruct*>> ExtraService_oneway_void_ret_struct_param_pargs;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, apache::thrift::protocol::T_LIST, ::std::vector< ::some::valid::ns::ComplexUnion>*>> ExtraService_oneway_void_ret_listunion_param_pargs;
template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::_processInThread_simple_function(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &ExtraServiceAsyncProcessor::process_simple_function<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::process_simple_function(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  ExtraService_simple_function_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "ExtraService.simple_function", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "simple_function");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<bool>>(std::move(req), std::move(ctxStack), return_simple_function<ProtocolIn_,ProtocolOut_>, throw_wrapped_simple_function<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  iface_->async_tm_simple_function(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue ExtraServiceAsyncProcessor::return_simple_function(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return) {
  ProtocolOut_ prot;
  ExtraService_simple_function_presult result;
  result.get<0>().value = const_cast<bool*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("simple_function", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void ExtraServiceAsyncProcessor::throw_wrapped_simple_function(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "simple_function");
    return;
  }
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::process_throws_function(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!validateRpcKind(req, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE)) {
    return;
  }
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  ExtraService_throws_function_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "ExtraService.throws_function", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "throws_function");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<void>>(std::move(req), std::move(ctxStack), return_throws_function<ProtocolIn_,ProtocolOut_>, throw_wrapped_throws_function<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  iface_->async_eb_throws_function(std::move(callback));
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue ExtraServiceAsyncProcessor::return_throws_function(int32_t protoSeqId, apache::thrift::ContextStack* ctx) {
  ProtocolOut_ prot;
  ExtraService_throws_function_presult result;
  return serializeResponse("throws_function", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void ExtraServiceAsyncProcessor::throw_wrapped_throws_function(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ExtraService_throws_function_presult result;
  if (ew.with_exception([&]( ::some::valid::ns::AnException& e) {
    ctx->userExceptionWrapped(true, ew);
    result.get<0>().ref() = e;
    result.setIsSet(0, true);
  }
  )) {} else
  if (ew.with_exception([&]( ::some::valid::ns::AnotherException& e) {
    ctx->userExceptionWrapped(true, ew);
    result.get<1>().ref() = e;
    result.setIsSet(1, true);
  }
  )) {} else
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "throws_function");
    return;
  }
  ProtocolOut_ prot;
  auto queue = serializeResponse("throws_function", &prot, protoSeqId, ctx, result);
  queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
  return req->sendReply(queue.move());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::_processInThread_throws_function2(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::HIGH);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &ExtraServiceAsyncProcessor::process_throws_function2<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::process_throws_function2(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  ExtraService_throws_function2_pargs args;
  bool uarg_param1{0};
  args.get<0>().value = &uarg_param1;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "ExtraService.throws_function2", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "throws_function2");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<bool>>(std::move(req), std::move(ctxStack), return_throws_function2<ProtocolIn_,ProtocolOut_>, throw_wrapped_throws_function2<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  iface_->async_tm_throws_function2(std::move(callback), args.get<0>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue ExtraServiceAsyncProcessor::return_throws_function2(int32_t protoSeqId, apache::thrift::ContextStack* ctx, bool const& _return) {
  ProtocolOut_ prot;
  ExtraService_throws_function2_presult result;
  result.get<0>().value = const_cast<bool*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("throws_function2", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void ExtraServiceAsyncProcessor::throw_wrapped_throws_function2(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ExtraService_throws_function2_presult result;
  if (ew.with_exception([&]( ::some::valid::ns::AnException& e) {
    ctx->userExceptionWrapped(true, ew);
    result.get<1>().ref() = e;
    result.setIsSet(1, true);
  }
  )) {} else
  if (ew.with_exception([&]( ::some::valid::ns::AnotherException& e) {
    ctx->userExceptionWrapped(true, ew);
    result.get<2>().ref() = e;
    result.setIsSet(2, true);
  }
  )) {} else
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "throws_function2");
    return;
  }
  ProtocolOut_ prot;
  auto queue = serializeResponse("throws_function2", &prot, protoSeqId, ctx, result);
  queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
  return req->sendReply(queue.move());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::_processInThread_throws_function3(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE, &ExtraServiceAsyncProcessor::process_throws_function3<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::process_throws_function3(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  ExtraService_throws_function3_pargs args;
  bool uarg_param1{0};
  args.get<0>().value = &uarg_param1;
  ::std::string uarg_param2;
  args.get<1>().value = &uarg_param2;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "ExtraService.throws_function3", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    apache::thrift::detail::ap::process_handle_exn_deserialization<ProtocolOut_>(
        ex, std::move(req), ctx, eb, "throws_function3");
    return;
  }
  req->setStartedProcessing();
  auto callback = std::make_unique<apache::thrift::HandlerCallback<::std::map<int32_t, ::std::string>>>(std::move(req), std::move(ctxStack), return_throws_function3<ProtocolIn_,ProtocolOut_>, throw_wrapped_throws_function3<ProtocolIn_, ProtocolOut_>, ctx->getProtoSeqId(), eb, tm, ctx);
  if (!callback->isRequestActive()) {
    callback.release()->deleteInThread();
    return;
  }
  iface_->async_tm_throws_function3(std::move(callback), args.get<0>().ref(), args.get<1>().ref());
}

template <class ProtocolIn_, class ProtocolOut_>
folly::IOBufQueue ExtraServiceAsyncProcessor::return_throws_function3(int32_t protoSeqId, apache::thrift::ContextStack* ctx, ::std::map<int32_t, ::std::string> const& _return) {
  ProtocolOut_ prot;
  ExtraService_throws_function3_presult result;
  result.get<0>().value = const_cast<::std::map<int32_t, ::std::string>*>(&_return);
  result.setIsSet(0, true);
  return serializeResponse("throws_function3", &prot, protoSeqId, ctx, result);
}

template <class ProtocolIn_, class ProtocolOut_>
void ExtraServiceAsyncProcessor::throw_wrapped_throws_function3(apache::thrift::ResponseChannelRequest::UniquePtr req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx) {
  if (!ew) {
    return;
  }
  ExtraService_throws_function3_presult result;
  if (ew.with_exception([&]( ::some::valid::ns::AnException& e) {
    ctx->userExceptionWrapped(true, ew);
    result.get<1>().ref() = e;
    result.setIsSet(1, true);
  }
  )) {} else
  if (ew.with_exception([&]( ::some::valid::ns::AnotherException& e) {
    ctx->userExceptionWrapped(true, ew);
    result.get<2>().ref() = e;
    result.setIsSet(2, true);
  }
  )) {} else
  {
    (void)protoSeqId;
    apache::thrift::detail::ap::process_throw_wrapped_handler_error<ProtocolOut_>(
        ew, std::move(req), reqCtx, ctx, "throws_function3");
    return;
  }
  ProtocolOut_ prot;
  auto queue = serializeResponse("throws_function3", &prot, protoSeqId, ctx, result);
  queue.append(apache::thrift::transport::THeader::transform(queue.move(), reqCtx->getHeader()->getWriteTransforms(), reqCtx->getHeader()->getMinCompressBytes()));
  return req->sendReply(queue.move());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::_processInThread_oneway_void_ret(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, &ExtraServiceAsyncProcessor::process_oneway_void_ret<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::process_oneway_void_ret(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  ExtraService_oneway_void_ret_pargs args;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "ExtraService.oneway_void_ret", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    LOG(ERROR) << ex.what() << " in function oneway_void_ret";
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(std::move(req), std::move(ctxStack), nullptr, eb, tm, ctx);
  iface_->async_tm_oneway_void_ret(std::move(callback));
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::_processInThread_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, &ExtraServiceAsyncProcessor::process_oneway_void_ret_i32_i32_i32_i32_i32_param<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::process_oneway_void_ret_i32_i32_i32_i32_i32_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  ExtraService_oneway_void_ret_i32_i32_i32_i32_i32_param_pargs args;
  int32_t uarg_param1{0};
  args.get<0>().value = &uarg_param1;
  int32_t uarg_param2{0};
  args.get<1>().value = &uarg_param2;
  int32_t uarg_param3{0};
  args.get<2>().value = &uarg_param3;
  int32_t uarg_param4{0};
  args.get<3>().value = &uarg_param4;
  int32_t uarg_param5{0};
  args.get<4>().value = &uarg_param5;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "ExtraService.oneway_void_ret_i32_i32_i32_i32_i32_param", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    LOG(ERROR) << ex.what() << " in function oneway_void_ret_i32_i32_i32_i32_i32_param";
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(std::move(req), std::move(ctxStack), nullptr, eb, tm, ctx);
  iface_->async_tm_oneway_void_ret_i32_i32_i32_i32_i32_param(std::move(callback), args.get<0>().ref(), args.get<1>().ref(), args.get<2>().ref(), args.get<3>().ref(), args.get<4>().ref());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::process_oneway_void_ret_map_setlist_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  if (!validateRpcKind(req, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE)) {
    return;
  }
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  ExtraService_oneway_void_ret_map_setlist_param_pargs args;
  ::std::map<::std::string, int64_t> uarg_param1;
  args.get<0>().value = &uarg_param1;
  ::std::set<::std::vector<::std::string>> uarg_param2;
  args.get<1>().value = &uarg_param2;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "ExtraService.oneway_void_ret_map_setlist_param", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    LOG(ERROR) << ex.what() << " in function oneway_void_ret_map_setlist_param";
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(std::move(req), std::move(ctxStack), nullptr, eb, tm, ctx);
  iface_->async_eb_oneway_void_ret_map_setlist_param(std::move(callback), args.get<0>().ref(), args.get<1>().ref());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::_processInThread_oneway_void_ret_struct_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, &ExtraServiceAsyncProcessor::process_oneway_void_ret_struct_param<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::process_oneway_void_ret_struct_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  ExtraService_oneway_void_ret_struct_param_pargs args;
   ::some::valid::ns::MyStruct uarg_param1;
  args.get<0>().value = &uarg_param1;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "ExtraService.oneway_void_ret_struct_param", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    LOG(ERROR) << ex.what() << " in function oneway_void_ret_struct_param";
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(std::move(req), std::move(ctxStack), nullptr, eb, tm, ctx);
  iface_->async_tm_oneway_void_ret_struct_param(std::move(callback), args.get<0>().ref());
}

template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::_processInThread_oneway_void_ret_listunion_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  auto pri = iface_->getRequestPriority(ctx, apache::thrift::concurrency::NORMAL);
  processInThread<ProtocolIn_, ProtocolOut_>(std::move(req), std::move(serializedRequest), ctx, eb, tm, pri, apache::thrift::RpcKind::SINGLE_REQUEST_NO_RESPONSE, &ExtraServiceAsyncProcessor::process_oneway_void_ret_listunion_param<ProtocolIn_, ProtocolOut_>, this);
}
template <typename ProtocolIn_, typename ProtocolOut_>
void ExtraServiceAsyncProcessor::process_oneway_void_ret_listunion_param(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  // make sure getConnectionContext is null
  // so async calls don't accidentally use it
  iface_->setConnectionContext(nullptr);
  ExtraService_oneway_void_ret_listunion_param_pargs args;
  ::std::vector< ::some::valid::ns::ComplexUnion> uarg_param1;
  args.get<0>().value = &uarg_param1;
  std::unique_ptr<apache::thrift::ContextStack> ctxStack(this->getContextStack(this->getServiceName(), "ExtraService.oneway_void_ret_listunion_param", ctx));
  try {
    deserializeRequest<ProtocolIn_>(args, ctx->getMethodName(), serializedRequest, ctxStack.get());
  }
  catch (const std::exception& ex) {
    LOG(ERROR) << ex.what() << " in function oneway_void_ret_listunion_param";
    return;
  }
  auto callback = std::make_unique<apache::thrift::HandlerCallbackBase>(std::move(req), std::move(ctxStack), nullptr, eb, tm, ctx);
  iface_->async_tm_oneway_void_ret_listunion_param(std::move(callback), args.get<0>().ref());
}

}} // extra::svc
