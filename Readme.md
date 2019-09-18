# Simple gRPC Hello Server and Client with C++
Simple project for gRPC using C++, to be used as a template for advanced C++ projects.

## Build Steps
- Generate gRPC and Protobuf files by:
```bash
$ sh genpb.sh
Processing proto-spec/hellosvc.proto
```
I prefer generate gRPC and Protobuf files, and compile them in a archive (static library), so I can used them without compiling each time.<br/>
You can add a CMake custom command to generate the files.<br/>
- build the server and client, I use Ninja but you can use make
```bash
$ cd build
$ cmake -G Ninja ..
$ ninja
$ ls bin
hello-client  hello-server
```
- Start the server in a terminal
```bash
$ ./bin/hello-server
Server listening on 0.0.0.0:4050
```
- Start the client in another terminal
```bash
$ ./bin/hello-client
Hello Me
```
## TODO
The project was build using Alpine Linux 3.10
- make a Docker image for building the project under Windows.