set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g -O2 -fsanitize=address")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")

# Check whether we are in debug mode
if(CMAKE_BUILD_TYPE MATCHES Debug)
  add_link_options("-fsanitize=address")
endif()

set(ANTLR4CPP_JAR_LOCATION
    ${CMAKE_SOURCE_DIR}/bin/antlr-4.12.0-complete.jar)

# Make sure that the user either defines GRAMMAR_FILE or both PARSER_FILE AND LEXER_FILE
if(NOT DEFINED GRAMMAR_FILE AND (NOT DEFINED PARSER_FILE OR NOT DEFINED LEXER_FILE))
  message(FATAL_ERROR "You must either set GRAMMAR_FILE (if you have a single grammar file) or both PARSER_FILE and LEXER_FILE (if you have sperate lexer and parser files) to the path of these files.")
endif()

# Extract the grammar name from the grammar file name
if(DEFINED GRAMMAR_FILE)
  if (NOT EXISTS ${GRAMMAR_FILE})
    message(FATAL_ERROR "The grammar file ${GRAMMAR_FILE} does not exist.")
  endif()
  get_filename_component(LEXER_NAME ${GRAMMAR_FILE} NAME_WE)
  get_filename_component(PARSER_NAME ${GRAMMAR_FILE} NAME_WE)
else()
  if (NOT EXISTS ${PARSER_FILE})
    message(FATAL_ERROR "The parser file ${PARSER_FILE} does not exist.")
  endif()
  if (NOT EXISTS ${LEXER_FILE})
    message(FATAL_ERROR "The lexer file ${LEXER_FILE} does not exist.")
  endif()
  get_filename_component(LEXER_NAME ${LEXER_FILE} NAME_WE)
  get_filename_component(PARSER_NAME ${PARSER_FILE} NAME_WE)
endif()

message("LEXER_NAME: ${LEXER_NAME}")
message("PARSER_NAME: ${PARSER_NAME}")

set(GENERATED_DIR ${CMAKE_CURRENT_BINARY_DIR}/generated)
file(MAKE_DIRECTORY ${GENERATED_DIR})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/generated_header.h.in
               ${CMAKE_CURRENT_BINARY_DIR}/generated/generated_header.h @ONLY)

set(GENERATED_SRC_FILES
    ${GENERATED_DIR}/${PARSER_NAME}Parser.cpp
    ${GENERATED_DIR}/${LEXER_NAME}Lexer.cpp
    ${GENERATED_DIR}/${PARSER_NAME}BaseListener.cpp
    ${GENERATED_DIR}/${PARSER_NAME}BaseVisitor.cpp
    ${GENERATED_DIR}/${PARSER_NAME}Listener.cpp
    ${GENERATED_DIR}/${PARSER_NAME}Visitor.cpp)

set(GENERATED_HDR_FILES
    ${GENERATED_DIR}/${PARSER_NAME}Parser.h
    ${GENERATED_DIR}/${LEXER_NAME}Lexer.h
    ${GENERATED_DIR}/${PARSER_NAME}BaseListener.h
    ${GENERATED_DIR}/${PARSER_NAME}BaseVisitor.h
    ${GENERATED_DIR}/${PARSER_NAME}Listener.h
    ${GENERATED_DIR}/${PARSER_NAME}Visitor.h)

add_custom_command(
  OUTPUT ${GENERATED_SRC_FILES} ${GENERATED_HDR_FILES}
  COMMAND
    java -jar ${ANTLR4CPP_JAR_LOCATION} -Dlanguage=Cpp -o
    ${GENERATED_DIR} -visitor -listener -package
    antlrcpptest ${GRAMMAR_FILE}
  DEPENDS ${GRAMMAR_FILE})

add_library(ir_translator STATIC ir_translater.cpp ${GENERATED_SRC_FILES})
target_include_directories(
  ir_translator PUBLIC ${GENERATED_DIR}
                       ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(ir_translator PUBLIC antlr4_static ir_lib
                                           absl::flat_hash_map)
target_compile_options(ir_translator PRIVATE -fPIC)

# TODO: Fix this as a test.
add_executable(AntlrTest antlr_tester.cpp)
# target_include_directories(AntlrTest PUBLIC
# ${CMAKE_CURRENT_SOURCE_DIR}/generated ${CMAKE_CURRENT_SOURCE_DIR}/)
target_link_libraries(AntlrTest PRIVATE antlr4_static ir_translator)
