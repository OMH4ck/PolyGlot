cmake_minimum_required(VERSION 3.14)
project(PolyGlot)

set(BUILD_SHARED_LIBS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -O2 -fsanitize=address")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")
#add_link_options("-Wl,--no-undefined" "-fsanitize=address")
add_link_options("-Wl,--no-undefined" "-fsanitize=address" "-shared-libasan")
find_package(PkgConfig)

include(FetchContent)
#find_package(yaml-cpp REQUIRED)
# FetchContent_Declare( ${YAML_CPP_LIBRARIES} URL
# https://github.com/jbeder/${YAML_CPP_LIBRARIES}/archive/refs/tags/${YAML_CPP_LIBRARIES}-0.7.0.zip)
# FetchContent_MakeAvailable(${YAML_CPP_LIBRARIES})
include_directories(${YAML_INCLUDE_DIRS})
file(GLOB SRC_FILES ${CMAKE_SOURCE_DIR}/srcs/internal/srcs/*.cpp)

# set_target_properties(${YAML_CPP_LIBRARIES} PROPERTIES COMPILE_FLAGS "-w")

set(AFLPP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/AFLplusplus/include)

include_directories(${AFLPP_DIR})

add_library(polyglot_lib STATIC srcs/polyglot.cc ${SRC_FILES} ./parser/bison_parser.cpp  ./parser/flex_lexer.cpp gen/config.cpp gen/gen_ir.cpp)
target_include_directories(polyglot_lib PUBLIC ${CMAKE_SOURCE_DIR}/srcs/internal/include)
target_include_directories(polyglot_lib PRIVATE ${CMAKE_SOURCE_DIR}/parser)
target_include_directories(polyglot_lib PRIVATE ${CMAKE_SOURCE_DIR}/gen)
target_include_directories(polyglot_lib PUBLIC ${CMAKE_SOURCE_DIR}/srcs)
target_compile_options(polyglot_lib PRIVATE -fPIC)

add_library(polyglot_mutator SHARED srcs/custom_mutator.cc)
target_link_libraries(polyglot_mutator PRIVATE polyglot_lib)


#include(lint.cmake)
#add_subdirectory(tests)
