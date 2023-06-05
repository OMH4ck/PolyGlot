# PHP language fuzz test Dockerfile
FROM ubuntu:22.04

# Install dependencies and clone repository
RUN apt-get update && \
    DEBIAN_FRONTEND=noninteractive apt-get install -qy \
    cmake ninja-build build-essential python3-pip git openjdk-11-jdk

RUN python3 -m pip install conan
RUN git clone https://github.com/OMH4ck/PolyGlot && cd PolyGlot && git submodule update --init && cd AFLplusplus && make -j

# Build PolyGlot:
RUN conan profile detect
RUN cd /PolyGlot && \
    cmake -DCMAKE_BUILD_TYPE=Release -Bbuild -G Ninja -DBUILD_TESTING=OFF -DPARSER_FILE=/PolyGlot/grammars/php/PhpParser.g4 -DLEXER_FILE=/PolyGlot/grammars/php/PhpLexer.g4 -DGRAMMAR_HELPER_DIR=/PolyGlot/grammars/php
RUN cd /PolyGlot && ninja -C build

# A yaml semantic configuration file. This specifies the semantics of the language. This part is still in migration.
RUN echo "---\n \
InitFileDir: /PolyGlot/grammars/php/corpus\n \
IsWeakType: true\n \
BasicTypes:\n \
  - X" > /PolyGlot/semantic.yml

# Set the environment variable
ENV POLYGLOT_CONFIG=/PolyGlot/semantic.yml
ENV AFL_CUSTOM_MUTATOR_LIBRARY=/PolyGlot/build/libpolyglot_mutator.so
ENV AFL_CUSTOM_MUTATOR_ONLY=1
ENV AFL_DISABLE_TRIM=1 

