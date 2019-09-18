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
## Build with Docker image (Windows, macOS)
- Begin bu creating the Docker image with all needed packages to compile Cxx gRPC.
```bash
$ sh build-docker.sh
Sending build context to Docker daemon  3.072kB
Step 1/6 : FROM alpine:edge
 ---> 70997d35b3ed
Step 2/6 : RUN apk update --no-cache &&     apk add --no-cache build-base cmake ninja         protoc protobuf protobuf-c protobuf-dev protobuf-c-dev         grpc grpc-dev grpc-cli &&         mkdir -p /project &&         chown -R 1000:1000 /project
 ---> Running in 151d8350955e
fetch http://dl-cdn.alpinelinux.org/alpine/edge/main/x86_64/APKINDEX.tar.gz
fetch http://dl-cdn.alpinelinux.org/alpine/edge/community/x86_64/APKINDEX.tar.gz
v20190809-2737-g141991d19e [http://dl-cdn.alpinelinux.org/alpine/edge/main]
v20190809-2740-gda262cb6d0 [http://dl-cdn.alpinelinux.org/alpine/edge/community]
OK: 10691 distinct packages available
fetch http://dl-cdn.alpinelinux.org/alpine/edge/main/x86_64/APKINDEX.tar.gz
fetch http://dl-cdn.alpinelinux.org/alpine/edge/community/x86_64/APKINDEX.tar.gz
(1/55) Upgrading libcrypto1.1 (1.1.1c-r0 -> 1.1.1d-r1)
(2/55) Upgrading libssl1.1 (1.1.1c-r0 -> 1.1.1d-r1)
(3/55) Upgrading zlib (1.2.11-r1 -> 1.2.11-r3)
(4/55) Installing binutils (2.32-r0)
(5/55) Installing libmagic (5.37-r0)
(6/55) Installing file (5.37-r0)
(7/55) Installing gmp (6.1.2-r1)
(8/55) Installing isl (0.18-r0)
(9/55) Installing libgomp (9.2.0-r1)
(10/55) Installing libatomic (9.2.0-r1)
(11/55) Installing libgcc (9.2.0-r1)
(12/55) Installing mpfr4 (4.0.2-r1)
(13/55) Installing mpc1 (1.1.0-r1)
(14/55) Installing libstdc++ (9.2.0-r1)
(15/55) Installing gcc (9.2.0-r1)
(16/55) Installing musl-dev (1.1.23-r3)
(17/55) Installing libc-dev (0.7.1-r0)
(18/55) Installing g++ (9.2.0-r1)
(19/55) Installing make (4.2.1-r2)
(20/55) Installing fortify-headers (1.1-r0)
(21/55) Installing build-base (0.5-r1)
(22/55) Installing libacl (2.2.53-r0)
(23/55) Installing libbz2 (1.0.8-r1)
(24/55) Installing expat (2.2.7-r1)
(25/55) Installing lz4-libs (1.9.2-r0)
(26/55) Installing xz-libs (5.2.4-r0)
(27/55) Installing zstd-libs (1.4.3-r0)
(28/55) Installing libarchive (3.4.0-r0)
(29/55) Installing ca-certificates (20190108-r0)
(30/55) Installing nghttp2-libs (1.39.2-r2)
(31/55) Installing libcurl (7.66.0-r0)
(32/55) Installing ncurses-terminfo-base (6.1_p20190831-r0)
(33/55) Installing ncurses-terminfo (6.1_p20190831-r0)
(34/55) Installing ncurses-libs (6.1_p20190831-r0)
(35/55) Installing rhash-libs (1.3.8-r0)
(36/55) Installing libuv (1.32.0-r0)
(37/55) Installing cmake (3.15.3-r0)
(38/55) Installing libprotobuf (3.9.1-r1)
(39/55) Installing libprotoc (3.9.1-r1)
(40/55) Installing protoc (3.9.1-r1)
(41/55) Installing libprotobuf-lite (3.9.1-r1)
(42/55) Installing protobuf (3.9.1-r1)
(43/55) Installing c-ares (1.15.0-r0)
(44/55) Installing grpc (1.21.3-r1)
(45/55) Installing gflags (2.2.2-r0)
(46/55) Installing grpc-cli (1.21.3-r1)
(47/55) Installing pkgconf (1.6.3-r0)
(48/55) Installing c-ares-dev (1.15.0-r0)
(49/55) Installing openssl-dev (1.1.1d-r1)
(50/55) Installing zlib-dev (1.2.11-r3)
(51/55) Installing protobuf-dev (3.9.1-r1)
(52/55) Installing grpc-dev (1.21.3-r1)
(53/55) Installing ninja (1.9.0-r1)
(54/55) Installing protobuf-c (1.3.2-r1)
(55/55) Installing protobuf-c-dev (1.3.2-r1)
Executing busybox-1.31.0-r0.trigger
Executing ca-certificates-20190108-r0.trigger
OK: 269 MiB in 66 packages
Removing intermediate container 151d8350955e
 ---> 9d762f10d02c
Step 3/6 : VOLUME [ "/project" ]
 ---> Running in 08f1076e5c51
Removing intermediate container 08f1076e5c51
 ---> fa9f04e6b94e
Step 4/6 : USER 1000:1000
 ---> Running in f5472e124c1b
Removing intermediate container f5472e124c1b
 ---> 6b531063d2b3
Step 5/6 : WORKDIR /project
 ---> Running in 566b3d4f0f38
Removing intermediate container 566b3d4f0f38
 ---> 886ae4285a83
Step 6/6 : CMD ["sh", "build.sh"]
 ---> Running in bde6f3508127
Removing intermediate container bde6f3508127
 ---> 42ef23b81296
Successfully built 42ef23b81296
Successfully tagged grpc-cxx-build:alpine
```
- build the project:
```bash
$ sh build-project.sh
-- The CXX compiler identification is GNU 9.2.0
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /project/build
[7/7] Linking CXX executable bin/hello-server
```
## TODO
- Deploy the server and client as Docker images.