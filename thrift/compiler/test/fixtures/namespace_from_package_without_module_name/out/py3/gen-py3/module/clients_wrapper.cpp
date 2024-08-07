/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <thrift/compiler/test/fixtures/namespace_from_package_without_module_name/gen-py3/module/clients_wrapper.h>

namespace test {
namespace namespace_from_package_without_module_name {


folly::Future<int64_t>
TestServiceClientWrapper::init(
    apache::thrift::RpcOptions& rpcOptions,
    int64_t arg_int1) {
  auto* client = static_cast<::test::namespace_from_package_without_module_name::TestServiceAsyncClient*>(async_client_.get());
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<int64_t>;
  folly::Promise<CallbackHelper::PromiseResult> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<int64_t>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_init, channel_);
  try {
    client->init(
      rpcOptions,
      std::move(callback),
      arg_int1
    );
  } catch (...) {
    return folly::makeFuture<int64_t>(folly::exception_wrapper(
      std::current_exception()
    ));
  }
  return std::move(_future).thenValue(CallbackHelper::extractResult);
}

} // namespace test
} // namespace namespace_from_package_without_module_name
