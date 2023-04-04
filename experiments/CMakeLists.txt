cmake_minimum_required(VERSION 3.14)
project(AntlrTest)

set(CMAKE_CXX_STANDARD 17)


set(ANTLR4CPP_JAR_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/antlr-4.12.0-complete.jar)

message("Build command: ${CMAKE_MAKE_PROGRAM}")

execute_process(
  COMMAND java -jar ${ANTLR4CPP_JAR_LOCATION} -Dlanguage=Cpp -o ${CMAKE_CURRENT_SOURCE_DIR}/generated -visitor -listener -package antlrcpptest ${CMAKE_CURRENT_SOURCE_DIR}/TParser.g4 ${CMAKE_CURRENT_SOURCE_DIR}/TLexer.g4
)

file(GLOB GENERATED_FILES ${CMAKE_CURRENT_SOURCE_DIR}/generated/*.cpp)
message("Generated files: ${GENERATED_FILES}")

add_custom_command(
        OUTPUT ${GENERATED_FILES}
        COMMAND java -jar ${ANTLR4CPP_JAR_LOCATION} -Dlanguage=Cpp -o ${CMAKE_CURRENT_SOURCE_DIR}/generated -visitor -listener -package antlrcpptest ${CMAKE_CURRENT_SOURCE_DIR}/TParser.g4 ${CMAKE_CURRENT_SOURCE_DIR}/TLexer.g4
)



add_executable(AntlrTest main.cpp ${GENERATED_FILES})
target_include_directories(AntlrTest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/generated ${CMAKE_CURRENT_SOURCE_DIR}/)
target_link_libraries(AntlrTest PRIVATE antlr4_static)
