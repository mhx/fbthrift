/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/types/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <thrift/compiler/test/fixtures/types/gen-py3/module/services_wrapper.h>
#include <thrift/compiler/test/fixtures/types/gen-py3/module/services_api.h>
#include <thrift/lib/cpp2/async/AsyncProcessor.h>

namespace apache {
namespace thrift {
namespace fixtures {
namespace types {

SomeServiceWrapper::SomeServiceWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_apache__thrift__fixtures__types__module__services();
  }


void SomeServiceWrapper::async_tm_bounce_map(
  apache::thrift::HandlerCallbackPtr<std::unique_ptr<std::unordered_map<int32_t,std::string>>> callback
    , std::unique_ptr<std::unordered_map<int32_t,std::string>> m
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
     m = std::move(m)
    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::unique_ptr<std::unordered_map<int32_t,std::string>>>();
        call_cy_SomeService_bounce_map(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(m)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::unique_ptr<std::unordered_map<int32_t,std::string>>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void SomeServiceWrapper::async_tm_binary_keyed_map(
  apache::thrift::HandlerCallbackPtr<std::unique_ptr<std::map<std::string,int64_t>>> callback
    , std::unique_ptr<std::vector<int64_t>> r
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
     r = std::move(r)
    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::unique_ptr<std::map<std::string,int64_t>>>();
        call_cy_SomeService_binary_keyed_map(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(r)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::unique_ptr<std::map<std::string,int64_t>>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
std::shared_ptr<apache::thrift::ServerInterface> SomeServiceInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<SomeServiceWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> SomeServiceWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_SomeService_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> SomeServiceWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_SomeService_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
} // namespace apache
} // namespace thrift
} // namespace fixtures
} // namespace types
