# Failed on error
set -e


sudo apt-get install -y libreadline-dev
# Clone the repo
#rm -rf lua
git clone https://github.com/lua/lua || true

cp build_lua.sh lua

export ROOT=$PWD/..
export SRC=$PWD
export OUT=/tmp/out
mkdir -p $OUT

pushd $ROOT
rm -rf gen
mkdir release || true
cd release && cmake .. -DCMAKE_BUILD_TYPE=Release -DGRAMMAR_FILE=${ROOT}/grammars/lua_grammar/Lua.g4 -DBUILD_TESTING=OFF  && make -j
popd

export AFLPATH=$PWD/../AFLplusplus
export CC=$AFLPATH/afl-cc
export CXX=$AFLPATH/afl-c++
export LIB_FUZZING_ENGINE=$AFLPATH/libAFLDriver.a

cd lua && bash ./build_lua.sh

# Project root path

export AFL_CUSTOM_MUTATOR_ONLY=1
export AFL_DISABLE_TRIM=1
export AFL_CUSTOM_MUTATOR_LIBRARY=$ROOT/release/libpolyglot_mutator.so
export AFL_NO_UI=1
export POLYGLOT_CONFIG=$ROOT/grammars/lua_grammar/semantic.yml
sed -i "s|grammars/lua_grammar/input/|${ROOT}/grammars/lua_grammar/input/|g" $POLYGLOT_CONFIG

cat $POLYGLOT_CONFIG

cd $ROOT
$AFLPATH/afl-fuzz -i $ROOT/grammars/lua_grammar/input -V 100 -o $OUT/lua_out -- $OUT/fuzz_lua @@
#LD_PRELOAD="/usr/lib/x86_64-linux-gnu/libasan.so.6 /usr/lib/x86_64-linux-gnu/libstdc++.so.6" $AFLPATH/afl-fuzz -i $ROOT/grammars/lua_grammar/input -V 10000 -o $OUT/lua_out -- $OUT/fuzz_lua @@

# check the number of files in the output directory is larger than 1000
if [ $(ls -1 $OUT/lua_out/default/queue | wc -l) -gt 500 ]; then
    echo "Fuzzing succeeded"
    exit 0
else
    echo "Fuzzing failed"
    exit 1
fi
