cmake_minimum_required(VERSION 3.14)
project(AntlrTest)

set(CMAKE_CXX_STANDARD 17)

set(ANTLR4CPP_JAR_LOCATION
    ${CMAKE_CURRENT_SOURCE_DIR}/antlr-4.12.0-complete.jar)

message("Build command: ${CMAKE_MAKE_PROGRAM}")

# Currently support only one grammar file. TODO: Support multiple grammar files.
set(GRAMMAR_FILE ${CMAKE_CURRENT_SOURCE_DIR}/SimpleLang.g4)

file(STRINGS ${GRAMMAR_FILE} file_contents)
string(REGEX MATCH "^grammar ([A-Za-z0-9]+)" search_result "${file_contents}")

if(search_result)
  message("Search result: ${CMAKE_MATCH_1}")
  set(GRAMMAR_NAME ${CMAKE_MATCH_1})
else()
  message(FATAL_ERROR "Your grammar file has no name for grammar.")
endif()

set(GENERATED_DIR ${CMAKE_CURRENT_SOURCE_DIR}/generated)
file(MAKE_DIRECTORY ${GENERATED_DIR})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/generated_header.h.in
               ${CMAKE_CURRENT_SOURCE_DIR}/generated/generated_header.h @ONLY)

execute_process(
  COMMAND
    java -jar ${ANTLR4CPP_JAR_LOCATION} -Dlanguage=Cpp -o
    ${CMAKE_CURRENT_SOURCE_DIR}/generated -visitor -listener -package
    antlrcpptest ${GRAMMAR_FILE})

set(GENERATED_SRC_FILES
    ${GENERATED_DIR}/${GRAMMAR_NAME}Parser.cpp
    ${GENERATED_DIR}/${GRAMMAR_NAME}Lexer.cpp
    ${GENERATED_DIR}/${GRAMMAR_NAME}BaseListener.cpp
    ${GENERATED_DIR}/${GRAMMAR_NAME}BaseVisitor.cpp
    ${GENERATED_DIR}/${GRAMMAR_NAME}Listener.cpp
    ${GENERATED_DIR}/${GRAMMAR_NAME}Visitor.cpp)

set(GENERATED_HDR_FILES
    ${GENERATED_DIR}/${GRAMMAR_NAME}Parser.h
    ${GENERATED_DIR}/${GRAMMAR_NAME}Lexer.h
    ${GENERATED_DIR}/${GRAMMAR_NAME}BaseListener.h
    ${GENERATED_DIR}/${GRAMMAR_NAME}BaseVisitor.h
    ${GENERATED_DIR}/${GRAMMAR_NAME}Listener.h
    ${GENERATED_DIR}/${GRAMMAR_NAME}Visitor.h)

add_custom_command(
  OUTPUT ${GENERATED_SRC_FILES} ${GENERATED_HDR_FILES}
  COMMAND
    java -jar ${ANTLR4CPP_JAR_LOCATION} -Dlanguage=Cpp -o
    ${CMAKE_CURRENT_SOURCE_DIR}/generated -visitor -listener -package
    antlrcpptest ${GRAMMAR_FILE}
  DEPENDS ${GRAMMAR_FILE})

add_library(ir_translator STATIC ir_translater.cpp ${GENERATED_SRC_FILES})
target_include_directories(
  ir_translator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/generated
                       ${CMAKE_CURRENT_SOURCE_DIR}/)
target_link_libraries(ir_translator PUBLIC antlr4_static ir_lib)
target_compile_options(ir_translator PRIVATE -fPIC)

add_executable(AntlrTest main.cpp)
# target_include_directories(AntlrTest PUBLIC
# ${CMAKE_CURRENT_SOURCE_DIR}/generated ${CMAKE_CURRENT_SOURCE_DIR}/)
target_link_libraries(AntlrTest PRIVATE antlr4_static ir_translator)
