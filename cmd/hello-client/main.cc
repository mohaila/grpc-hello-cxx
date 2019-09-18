#include <iostream>
#include <memory>
#include <string>

#include <grpc++/grpc++.h>
#include "hellosvc.grpc.pb.h"

// using namespace grpc;
using grpc::Channel;
using grpc::ClientContext;
using grpc::ClientReaderWriter;
using grpc::CreateChannel;
using grpc::InsecureChannelCredentials;
using grpc::Status;
//using namespace std;
using std::cout;
using std::endl;
using std::shared_ptr;
using std::string;
using std::unique_ptr;
// using namespace hellogrpc
using hellosvc::HelloRequest;
using hellosvc::HelloResponse;
using hellosvc::HelloSvc;

class HelloSvcClient {
 public:
  HelloSvcClient(shared_ptr<Channel> channel)
      : _stub(HelloSvc::NewStub(channel)) {}
  void hello(const HelloRequest& request);

 private:
  unique_ptr<HelloSvc::Stub> _stub;
};

void HelloSvcClient::hello(const HelloRequest& request) {
  ClientContext context;
  HelloResponse response;

  Status status = _stub->hello(&context, request, &response);
  if (status.ok())
    cout << response.greeting() << endl;
  else
    cout << "Call error" << endl;
}

int main(int argc, char** argv) {
  string name("Me");
  HelloRequest request;
  request.set_name(name);

  HelloSvcClient client(
      CreateChannel("localhost:4050", InsecureChannelCredentials()));
  client.hello(request);

  return 0;
}