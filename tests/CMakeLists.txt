find_package(GTest REQUIRED)

include(GoogleTest)

# if LANG equals "simpletest" then we are testing the simpletest language
if (LANG STREQUAL "simplelang")
  add_executable(simplelang_test simplelang_test.cc)
  target_link_libraries(simplelang_test GTest::gtest_main polyglot_lib)
  gtest_discover_tests(simplelang_test)
endif()
