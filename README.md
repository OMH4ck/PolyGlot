[![codecov](https://codecov.io/gh/OMH4ck/PolyGlot/branch/main/graph/badge.svg)](https://codecov.io/gh/OMH4ck/PolyGlot)
[![Build](https://github.com/OMH4ck/PolyGlot/actions/workflows/ci.yml/badge.svg)](https://github.com/OMH4ck/PolyGlot/actions/workflows/ci.yml)

# PolyGlot: a fuzzing framework for language processors

PolyGlot is a coverage-guided language fuzzer. It allows you to generate semantically correct test cases easily.

Features:
- Support antlr4 grammar.
- Implemented as aflpp custom mutator.

The original version that uses bison can be found [here](https://github.com/s3team/Polyglot).

## Build
1. Install dependencies:
```bash
apt install -y cmake ninja-build build-essential
pip install conan
```

2. Clone the repo and build aflpp:
```bash
git clone https://github.com/OMH4ck/PolyGlot && git submodule update --init && cd AFLplusplus && make -j
```

3. Build PolyGlot:

Put the following code in your grammar.g4:
```
options {
  contextSuperClass = PolyGlotRuleContext;
}

@parser::header {
#include "polyglot_rule_context.h"
}
```

Build with cmake:
If you have a single g4 file, you should set `-DGRAMMAR_FILE=path/to/grammar.g4`. For example:
```bash
cmake -DCMAKE_BUILD_TYPE=Release -Bbuild -G Ninja -DBUILD_TESTING=OFF -DGRAMMAR_FILE=path/to/grammar.g4
```


If you have seperate grammar files for parser and lexer, you need to specify `PARSER_FILE` and `LEXER_FILE` instead.
For example:
```bash
cmake -DCMAKE_BUILD_TYPE=Release -Bbuild -G Ninja -DBUILD_TESTING=OFF -DPARSER_FILE=path/to/parser.g4 -DLEXER_FILE=path/to/lexer.g4
```

If you have additional helper `cpp` files for antlr, put them all in a dir and specify `-DGRAMMAR_HELPER_DIR=/path/to/dir`. `PolyGlot` will use the `cpp/cc` files when it compiles a parser for the language.

Then build with `Ninja`:
```bash
ninja -C build
```

## Configuration
1. Mutation corpus: PolyGlot uses a corpus of seeds as the source of mutation. Such corpus should cover every rule in the grammar. You can run `build/corpus_evaluate --corpus_dir your_corpus` to see what rules your corpus is not covering. The larger the corpus the better.
2. If you want to filter out unparsable inputs, run `build/corpus_evaluate --corpus_dir your_corpus --output_dir sanitized_output`, which will copy all the parsable test cases to `sanitized_output`.
3. A yaml semantic configuration file. This specifies the semantics of the language. This part is still in migration. For now, you can just copy the following content to a file named `semantic.yml`:
```
---
InitFileDir: abs_path/to/mutation_corpus
IsWeakType: true
BasicTypes:
  - X
```
You need to set `InitFileDir` to be the path of your mutation corpus.

4. Set the environment variable
```bash
export POLYGLOT_CONFIG=abs_path/to/semantic.yml
export AFL_CUSTOM_MUTATOR_LIBRARY=abs_path/to/build/libPolyGlot.so
export AFL_CUSTOM_MUTATOR_ONLY=1
export AFL_DISABLE_TRIM=1 # We haven't implemented trimming yet.
```

## Run
You can now run it with aflpp: `afl-fuzz -i seed_corpus -o out -- ./your_target @@`. The `seed_corpus` should be fully parsable by your grammar.

## Currently tested languages
|Language| Syntax Supported | Semantic Supported| Grammar provided | Corpus Provided|
|:---:|:---:|:---:|:---:|:---:|
|lua | :heavy_check_mark: | |:heavy_check_mark:|:heavy_check_mark:|
|php | :heavy_check_mark: | |:heavy_check_mark:|:heavy_check_mark:|
