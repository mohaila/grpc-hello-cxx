set(APPNAME hello-server)
set(APPSRC main.cc)
add_executable(${APPNAME} ${APPSRC})
target_link_libraries(
    ${APPNAME}
    hellogrpc
    protobuf
    grpc++
    grpc++_unsecure
    pthread 
)