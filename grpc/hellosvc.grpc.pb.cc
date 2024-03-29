// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: hellosvc.proto

#include "hellosvc.pb.h"
#include "hellosvc.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace hellosvc {

static const char* HelloSvc_method_names[] = {
  "/hellosvc.HelloSvc/hello",
};

std::unique_ptr< HelloSvc::Stub> HelloSvc::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< HelloSvc::Stub> stub(new HelloSvc::Stub(channel));
  return stub;
}

HelloSvc::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_hello_(HelloSvc_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status HelloSvc::Stub::hello(::grpc::ClientContext* context, const ::hellosvc::HelloRequest& request, ::hellosvc::HelloResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_hello_, context, request, response);
}

void HelloSvc::Stub::experimental_async::hello(::grpc::ClientContext* context, const ::hellosvc::HelloRequest* request, ::hellosvc::HelloResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_hello_, context, request, response, std::move(f));
}

void HelloSvc::Stub::experimental_async::hello(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::hellosvc::HelloResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_hello_, context, request, response, std::move(f));
}

void HelloSvc::Stub::experimental_async::hello(::grpc::ClientContext* context, const ::hellosvc::HelloRequest* request, ::hellosvc::HelloResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_hello_, context, request, response, reactor);
}

void HelloSvc::Stub::experimental_async::hello(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::hellosvc::HelloResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_hello_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::hellosvc::HelloResponse>* HelloSvc::Stub::AsynchelloRaw(::grpc::ClientContext* context, const ::hellosvc::HelloRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::hellosvc::HelloResponse>::Create(channel_.get(), cq, rpcmethod_hello_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::hellosvc::HelloResponse>* HelloSvc::Stub::PrepareAsynchelloRaw(::grpc::ClientContext* context, const ::hellosvc::HelloRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::hellosvc::HelloResponse>::Create(channel_.get(), cq, rpcmethod_hello_, context, request, false);
}

HelloSvc::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      HelloSvc_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< HelloSvc::Service, ::hellosvc::HelloRequest, ::hellosvc::HelloResponse>(
          std::mem_fn(&HelloSvc::Service::hello), this)));
}

HelloSvc::Service::~Service() {
}

::grpc::Status HelloSvc::Service::hello(::grpc::ServerContext* context, const ::hellosvc::HelloRequest* request, ::hellosvc::HelloResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace hellosvc

