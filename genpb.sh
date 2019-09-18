#!/bin/sh
for file in $(ls proto-spec/*.proto)
do
    echo Processing $file
    protoc --cpp_out=grpc/ --grpc_out=grpc/ -I proto-spec --plugin=protoc-gen-grpc=$(which grpc_cpp_plugin) $file
done
