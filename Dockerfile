FROM alpine:edge
RUN apk update --no-cache && \
    apk add --no-cache build-base cmake ninja \
        protoc protobuf protobuf-c protobuf-dev protobuf-c-dev \
        grpc grpc-dev grpc-cli && \
        mkdir -p /project && \
        chown -R 1000:1000 /project 
VOLUME [ "/project" ] 
USER 1000:1000
WORKDIR /project
CMD ["sh", "build.sh"]     