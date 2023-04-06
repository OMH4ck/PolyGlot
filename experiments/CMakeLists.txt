cmake_minimum_required(VERSION 3.14)
project(AntlrTest)

set(CMAKE_CXX_STANDARD 17)


set(ANTLR4CPP_JAR_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/antlr-4.12.0-complete.jar)

message("Build command: ${CMAKE_MAKE_PROGRAM}")

set(GRAMMAR_FILE ${CMAKE_CURRENT_SOURCE_DIR}/SimpleLang.g4)

execute_process(
  COMMAND java -jar ${ANTLR4CPP_JAR_LOCATION} -Dlanguage=Cpp -o ${CMAKE_CURRENT_SOURCE_DIR}/generated -visitor -listener -package antlrcpptest ${GRAMMAR_FILE}
)

file(GLOB GENERATED_FILES ${CMAKE_CURRENT_SOURCE_DIR}/generated/*.cpp)
message("Generated files: ${GENERATED_FILES}")

add_custom_command(
        OUTPUT ${GENERATED_FILES}
        COMMAND java -jar ${ANTLR4CPP_JAR_LOCATION} -Dlanguage=Cpp -o ${CMAKE_CURRENT_SOURCE_DIR}/generated -visitor -listener -package antlrcpptest ${GRAMMAR_FILE}
)


add_library(ir_translator STATIC ir_translater.cpp ${GENERATED_FILES})
target_include_directories(ir_translator PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/generated ${CMAKE_CURRENT_SOURCE_DIR}/)
target_link_libraries(ir_translator PUBLIC antlr4_static ir_lib)
target_compile_options(ir_translator PRIVATE -fPIC)

add_executable(AntlrTest main.cpp)
#target_include_directories(AntlrTest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/generated ${CMAKE_CURRENT_SOURCE_DIR}/)
target_link_libraries(AntlrTest PRIVATE antlr4_static ir_translator)
