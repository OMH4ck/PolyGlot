cmake_minimum_required(VERSION 3.14)
project(PolyGlot)

set(BUILD_SHARED_LIBS ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_BINARY_DIR}")
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_BINARY_DIR}")

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -O2 -fsanitize=address")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")
add_link_options("-Wl,--no-undefined")

if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
  message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
  file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/0.18.1/conan.cmake"
                "${CMAKE_BINARY_DIR}/conan.cmake"
                TLS_VERIFY ON)
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)

conan_cmake_configure(REQUIRES gtest/1.12.1 spdlog/1.11.0 GENERATORS
                      CMakeDeps CMakeToolchain)

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

find_package(spdlog)

# TODO: Add more
list(APPEND SUPPORTED_LANG lua php c simplelang)

set(LANG ${LANG})

if(NOT LANG)
  message(FATAL_ERROR "Please specify a language to build with -DLANG=...")
endif()

if (NOT ${LANG} IN_LIST SUPPORTED_LANG)
  message(FATAL_ERROR "Language ${LANG} is not supported")
endif()

set(GENERATED_FILES ${CMAKE_SOURCE_DIR}/gen/parser/bison_parser.cpp  ${CMAKE_SOURCE_DIR}/gen/parser/flex_lexer.cpp ${CMAKE_SOURCE_DIR}/gen/config.cpp ${CMAKE_SOURCE_DIR}/gen/gen_ir.cpp)
# Code generation
add_custom_command(
    OUTPUT
        ${GENERATED_FILES}
    DEPENDS
        ${CMAKE_SOURCE_DIR}/CodeGen.py ${CMAKE_SOURCE_DIR}/Generator.py
    COMMAND
        python3 ${CMAKE_SOURCE_DIR}/CodeGen.py ${CMAKE_SOURCE_DIR}/grammars/${LANG}_grammar
)

file(GLOB SRC_FILES ${CMAKE_SOURCE_DIR}/srcs/internal/srcs/*.cpp)

include_directories(${spdlog_INCLUDE_DIRS})
set(AFLPP_DIR ${CMAKE_CURRENT_SOURCE_DIR}/AFLplusplus/include)
include_directories(${AFLPP_DIR})

add_library(polyglot_lib STATIC srcs/polyglot.cc ${SRC_FILES} ${GENERATED_FILES})
target_include_directories(polyglot_lib PUBLIC ${CMAKE_SOURCE_DIR}/srcs/internal/include)
target_include_directories(polyglot_lib PRIVATE ${CMAKE_SOURCE_DIR}/gen/parser)
target_include_directories(polyglot_lib PUBLIC ${CMAKE_SOURCE_DIR}/gen)
target_include_directories(polyglot_lib PUBLIC ${CMAKE_SOURCE_DIR}/srcs)
target_compile_options(polyglot_lib PRIVATE -fPIC)
target_link_libraries(polyglot_lib PRIVATE spdlog::spdlog)
target_link_options(polyglot_lib PRIVATE $<$<CONFIG:DEBUG>: -fsanitize=address -shared-libasan>)

add_library(polyglot_mutator SHARED srcs/custom_mutator.cc)
target_link_libraries(polyglot_mutator PRIVATE polyglot_lib)
target_link_options(polyglot_mutator PRIVATE $<$<CONFIG:DEBUG>: -fsanitize=address -shared-libasan>)


include(lint.cmake)
enable_testing()
add_subdirectory(tests)
