# Copyright (c) 2023 OMH4ck
#
# Permission is hereby granted, free of charge, to any person obtaining a copy of
# this software and associated documentation files (the "Software"), to deal in
# the Software without restriction, including without limitation the rights to
# use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
# the Software, and to permit persons to whom the Software is furnished to do so,
# subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
# FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
# COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
# IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
# CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

cmake_minimum_required(VERSION 3.14)
project(PolyGlot)

set(BUILD_SHARED_LIBS ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR}")
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_BINARY_DIR}")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -O0 -fsanitize=address")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")
add_link_options("-Wl,--no-undefined")


# Check whether CC is clang
if(CMAKE_C_COMPILER_ID MATCHES "Clang")
  #set(ASAN_SHARED "-shared-libasan")
else()
  # Check whether we are in debug mode
  if(CMAKE_BUILD_TYPE MATCHES Debug)
    add_link_options("-fsanitize=address")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fsanitize=address")
  endif()
#  set(ASAN_SHARED "")
endif()

add_library(coverage_config INTERFACE)

# Enable code coverage when using GCC or Clang
option(CODE_COVERAGE "Enable coverage reporting" OFF)
if(CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
  # Add required flags (GCC & LLVM/Clang)
  target_compile_options(
    coverage_config
    INTERFACE -O0 # no optimization
              -g # generate debug info
              --coverage # sets all required flags
  )
  if(CMAKE_VERSION VERSION_GREATER_EQUAL 3.13)
    target_link_options(coverage_config INTERFACE --coverage)
  else()
    target_link_libraries(coverage_config INTERFACE --coverage)
  endif()

  link_libraries(coverage_config)
endif(CODE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")


if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
  message(
    STATUS
      "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
  file(
    DOWNLOAD
    "https://raw.githubusercontent.com/conan-io/cmake-conan/0.18.1/conan.cmake"
    "${CMAKE_BINARY_DIR}/conan.cmake" TLS_VERIFY ON)
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_configure(
  REQUIRES
  gtest/1.12.1
  spdlog/1.11.0
  ms-gsl/4.0.0
  yaml-cpp/0.7.0
  abseil/20230125.2
  # antlr4-cppruntime/4.12.0
  benchmark/1.7.1
  GENERATORS
  CMakeDeps
  CMakeToolchain)

conan_cmake_autodetect(settings)

conan_cmake_install(
  PATH_OR_REFERENCE
  .
  BUILD
  missing
  REMOTE
  conancenter
  SETTINGS
  ${settings})

find_package(spdlog REQUIRED)
find_package(Microsoft.GSL REQUIRED)
find_package(absl REQUIRED)
# find_package(antlr4-runtime REQUIRED)
find_package(yaml-cpp REQUIRED)
find_package(benchmark REQUIRED)

add_subdirectory(antlr4/runtime/Cpp)

include_directories( ${CMAKE_SOURCE_DIR}/antlr4/runtime/Cpp/runtime/src)

file(GLOB SRC_FILES ${CMAKE_SOURCE_DIR}/srcs/internal/srcs/*.cpp)

include_directories(${spdlog_INCLUDE_DIRS})
set(AFLPP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/AFLplusplus/include)
include_directories(${AFLPP_DIR})

add_library(util_lib STATIC srcs/internal/srcs/utils.cpp)
target_include_directories(util_lib
                           PUBLIC ${CMAKE_SOURCE_DIR}/srcs/internal/include)
target_compile_options(util_lib PRIVATE -fPIC)

add_library(frontend_lib STATIC srcs/internal/srcs/frontend.cpp)
target_include_directories(
  frontend_lib PUBLIC ${CMAKE_SOURCE_DIR}/srcs/internal/include
                      ${CMAKE_SOURCE_DIR}/gen/parser ${CMAKE_SOURCE_DIR}/gen)
target_compile_options(frontend_lib PRIVATE -fPIC)
target_link_libraries(frontend_lib PUBLIC ir_translator)

add_library(config_lib STATIC
            ${CMAKE_SOURCE_DIR}/srcs/internal/srcs/configuration.cpp)
target_include_directories(config_lib
                           PUBLIC ${CMAKE_SOURCE_DIR}/srcs/internal/include)
target_compile_options(config_lib PRIVATE -fPIC)
target_link_libraries(config_lib PRIVATE yaml-cpp absl::str_format spdlog::spdlog)

add_library(ir_lib STATIC srcs/internal/srcs/ir.cpp)
target_include_directories(ir_lib
                           PUBLIC ${CMAKE_SOURCE_DIR}/srcs/internal/include)
target_link_libraries(ir_lib PUBLIC absl::str_format util_lib)
target_compile_options(ir_lib PRIVATE -fPIC)

add_library(mutate_lib STATIC srcs/internal/srcs/mutate.cpp)
target_include_directories(mutate_lib
                           PUBLIC ${CMAKE_SOURCE_DIR}/srcs/internal/include)
target_link_libraries(mutate_lib PRIVATE ir_lib config_lib Microsoft.GSL::GSL
                                         spdlog::spdlog)
target_compile_options(mutate_lib PRIVATE -fPIC)

add_library(
  polyglot_lib STATIC srcs/polyglot.cc srcs/internal/srcs/typesystem.cpp
                      srcs/internal/srcs/var_definition.cpp)
target_include_directories(polyglot_lib
                           PUBLIC ${CMAKE_SOURCE_DIR}/srcs/internal/include)
target_include_directories(polyglot_lib PUBLIC ${CMAKE_SOURCE_DIR}/srcs)
target_compile_options(polyglot_lib PRIVATE -fPIC)
target_link_libraries(polyglot_lib PRIVATE spdlog::spdlog Microsoft.GSL::GSL
                                           absl::str_format)
target_link_libraries(polyglot_lib PUBLIC ir_lib frontend_lib config_lib
                                          mutate_lib)
target_link_options(polyglot_lib PRIVATE $<$<CONFIG:DEBUG>: ${ASAN_SHARED}>)

add_library(polyglot_mutator SHARED srcs/custom_mutator.cc)
target_link_libraries(polyglot_mutator PRIVATE polyglot_lib)
target_link_options(polyglot_mutator PRIVATE $<$<CONFIG:DEBUG>: ${ASAN_SHARED}>)

add_subdirectory(srcs/antlr)
add_subdirectory(srcs/utils)
include(lint.cmake)

option(BUILD_TESTING "Build the testing tree." ON)
if(BUILD_TESTING AND (PROJECT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR))
  enable_testing()
  add_subdirectory(tests)
  add_subdirectory(benchmarks)
endif()
