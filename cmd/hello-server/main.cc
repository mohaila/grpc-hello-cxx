#include <iostream>
#include <memory>
#include <string>

#include <grpc++/grpc++.h>
#include "hellosvc.grpc.pb.h"

using grpc::InsecureServerCredentials;
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;
using std::cout;
using std::endl;
using std::string;
using std::unique_ptr;
using hellosvc::HelloSvc;
using hellosvc::HelloRequest;
using hellosvc::HelloResponse;

class HelloSvcServicer final : public HelloSvc::Service {
 public:
  virtual Status hello(ServerContext* context, const HelloRequest* request,
                       HelloResponse* response);
};

grpc::Status HelloSvcServicer::hello(grpc::ServerContext* context,
                                     const HelloRequest* request,
                                     HelloResponse* response) {
  string name = request->name();
  if (name.size() == 0) name = "World!";
  string greeting = "Hello " + name;
  response->set_greeting(greeting);
  return Status();
}

void RunServer() {
  string server_address("0.0.0.0:4050");
  HelloSvcServicer servicer;

  ServerBuilder builder;
  builder.AddListeningPort(server_address, InsecureServerCredentials());
  builder.RegisterService(&servicer);

  unique_ptr<Server> server(builder.BuildAndStart());
  cout << "Server listening on " << server_address << endl;

  server->Wait();
}

int main(int argc, char** argv) {
  RunServer();

  return 0;
}
