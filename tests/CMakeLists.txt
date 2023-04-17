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

find_package(GTest REQUIRED)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -O2 -fsanitize=address")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")

# Check whether we are in debug mode
if(CMAKE_BUILD_TYPE MATCHES Debug)
  add_link_options("-fsanitize=address")
endif()
include(GoogleTest)

# if LANG equals "simpletest" then we are testing the simpletest language
add_executable(parse_mutate_test parse_mutate_test.cc)
target_link_libraries(parse_mutate_test GTest::gtest_main polyglot_lib)
target_link_options(parse_mutate_test PRIVATE -fsanitize=address)
gtest_discover_tests(parse_mutate_test)

add_executable(validation_test validation_test.cc)
target_link_libraries(validation_test GTest::gtest_main polyglot_lib spdlog::spdlog)
target_link_options(validation_test PRIVATE -fsanitize=address)
gtest_discover_tests(validation_test)
