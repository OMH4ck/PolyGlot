find_package(GTest REQUIRED)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -O2 -fsanitize=address")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")

# Check whether we are in debug mode
if(CMAKE_BUILD_TYPE MATCHES Debug)
  add_link_options("-fsanitize=address")
endif()
include(GoogleTest)

# if LANG equals "simpletest" then we are testing the simpletest language
add_executable(simplelang_test simplelang_test.cc)
target_link_libraries(simplelang_test GTest::gtest_main polyglot_lib)
target_link_options(simplelang_test PRIVATE -fsanitize=address)
gtest_discover_tests(simplelang_test)
