set(LIBNAME hellogrpc)
file(GLOB LIBSRC *.cc)
add_library(${LIBNAME} STATIC ${LIBSRC})