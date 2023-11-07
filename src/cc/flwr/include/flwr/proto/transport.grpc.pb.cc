// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: flwr/proto/transport.proto

#include "flwr/proto/transport.pb.h"
#include "flwr/proto/transport.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace flwr {
namespace proto {

static const char* FlowerService_method_names[] = {
  "/flwr.proto.FlowerService/Join",
};

std::unique_ptr< FlowerService::Stub> FlowerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< FlowerService::Stub> stub(new FlowerService::Stub(channel, options));
  return stub;
}

FlowerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Join_(FlowerService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::BIDI_STREAMING, channel)
  {}

::grpc::ClientReaderWriter< ::flwr::proto::ClientMessage, ::flwr::proto::ServerMessage>* FlowerService::Stub::JoinRaw(::grpc::ClientContext* context) {
  return ::grpc::internal::ClientReaderWriterFactory< ::flwr::proto::ClientMessage, ::flwr::proto::ServerMessage>::Create(channel_.get(), rpcmethod_Join_, context);
}

void FlowerService::Stub::async::Join(::grpc::ClientContext* context, ::grpc::ClientBidiReactor< ::flwr::proto::ClientMessage,::flwr::proto::ServerMessage>* reactor) {
  ::grpc::internal::ClientCallbackReaderWriterFactory< ::flwr::proto::ClientMessage,::flwr::proto::ServerMessage>::Create(stub_->channel_.get(), stub_->rpcmethod_Join_, context, reactor);
}

::grpc::ClientAsyncReaderWriter< ::flwr::proto::ClientMessage, ::flwr::proto::ServerMessage>* FlowerService::Stub::AsyncJoinRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::flwr::proto::ClientMessage, ::flwr::proto::ServerMessage>::Create(channel_.get(), cq, rpcmethod_Join_, context, true, tag);
}

::grpc::ClientAsyncReaderWriter< ::flwr::proto::ClientMessage, ::flwr::proto::ServerMessage>* FlowerService::Stub::PrepareAsyncJoinRaw(::grpc::ClientContext* context, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderWriterFactory< ::flwr::proto::ClientMessage, ::flwr::proto::ServerMessage>::Create(channel_.get(), cq, rpcmethod_Join_, context, false, nullptr);
}

FlowerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      FlowerService_method_names[0],
      ::grpc::internal::RpcMethod::BIDI_STREAMING,
      new ::grpc::internal::BidiStreamingHandler< FlowerService::Service, ::flwr::proto::ClientMessage, ::flwr::proto::ServerMessage>(
          [](FlowerService::Service* service,
             ::grpc::ServerContext* ctx,
             ::grpc::ServerReaderWriter<::flwr::proto::ServerMessage,
             ::flwr::proto::ClientMessage>* stream) {
               return service->Join(ctx, stream);
             }, this)));
}

FlowerService::Service::~Service() {
}

::grpc::Status FlowerService::Service::Join(::grpc::ServerContext* context, ::grpc::ServerReaderWriter< ::flwr::proto::ServerMessage, ::flwr::proto::ClientMessage>* stream) {
  (void) context;
  (void) stream;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace flwr
}  // namespace proto
