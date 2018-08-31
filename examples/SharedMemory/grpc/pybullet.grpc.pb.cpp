// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: pybullet.proto

#include "pybullet.pb.h"
#include "pybullet.grpc.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/channel_interface.h>
#include <grpc++/impl/codegen/client_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/rpc_service_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/sync_stream.h>
namespace pybullet_grpc {

static const char* PyBulletAPI_method_names[] = {
  "/pybullet_grpc.PyBulletAPI/SubmitCommand",
};

std::unique_ptr< PyBulletAPI::Stub> PyBulletAPI::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  std::unique_ptr< PyBulletAPI::Stub> stub(new PyBulletAPI::Stub(channel));
  return stub;
}

PyBulletAPI::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_SubmitCommand_(PyBulletAPI_method_names[0], ::grpc::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status PyBulletAPI::Stub::SubmitCommand(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::pybullet_grpc::PyBulletStatus* response) {
  return ::grpc::BlockingUnaryCall(channel_.get(), rpcmethod_SubmitCommand_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::pybullet_grpc::PyBulletStatus>* PyBulletAPI::Stub::AsyncSubmitCommandRaw(::grpc::ClientContext* context, const ::pybullet_grpc::PyBulletCommand& request, ::grpc::CompletionQueue* cq) {
  return new ::grpc::ClientAsyncResponseReader< ::pybullet_grpc::PyBulletStatus>(channel_.get(), cq, rpcmethod_SubmitCommand_, context, request);
}

PyBulletAPI::Service::Service() {
  AddMethod(new ::grpc::RpcServiceMethod(
      PyBulletAPI_method_names[0],
      ::grpc::RpcMethod::NORMAL_RPC,
      new ::grpc::RpcMethodHandler< PyBulletAPI::Service, ::pybullet_grpc::PyBulletCommand, ::pybullet_grpc::PyBulletStatus>(
          std::mem_fn(&PyBulletAPI::Service::SubmitCommand), this)));
}

PyBulletAPI::Service::~Service() {
}

::grpc::Status PyBulletAPI::Service::SubmitCommand(::grpc::ServerContext* context, const ::pybullet_grpc::PyBulletCommand* request, ::pybullet_grpc::PyBulletStatus* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace pybullet_grpc

