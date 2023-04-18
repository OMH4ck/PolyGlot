add_library(corpus_evalutate_lib corpus_evaluate.cpp)
target_link_libraries(corpus_evalutate_lib PUBLIC frontend_lib absl::flags absl::flags_parse)

add_executable(corpus_evaluate corpus_evaluate_bin.cpp)
target_link_libraries(corpus_evaluate corpus_evalutate_lib)
set_target_properties(corpus_evaluate PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

add_executable(check_env check_env_bin.cpp)
target_link_libraries(check_env corpus_evalutate_lib absl::flags absl::flags_parse yaml-cpp config_lib)
set_target_properties(check_env PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
