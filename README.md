[![codecov](https://codecov.io/gh/OMH4ck/PolyGlot/branch/main/graph/badge.svg)](https://codecov.io/gh/OMH4ck/PolyGlot)
[![Build](https://github.com/OMH4ck/PolyGlot/actions/workflows/ci.yml/badge.svg)](https://github.com/OMH4ck/PolyGlot/actions/workflows/ci.yml)


NOT READY YET! DON'T USE IT!

## BUILD
```bash
mkdir build
cd build
cmake .. -DGRAMMAR_FILE=../grammars/simplelang_grammar/SimpleLang.g4 -DCMAKE_BUILD_TYPE=Debug -G Ninja
ninja
```

If you build with other grammar files, please turn of the tests with `-DBUILD_TESTING=OFF` because the tests are only for the simplelang grammar.
