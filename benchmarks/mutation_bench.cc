#include <benchmark/benchmark.h>

#include <iostream>
#include <memory>
#include <string>

#include "configuration.h"
#include "frontend.h"
#include "ir.h"
#include "mutate.h"
#include "spdlog/cfg/env.h"
#include "typesystem.h"
#include "utils.h"
#include "var_definition.h"

using namespace polyglot;

std::string GetRootPath() {
  char* p = getenv("POLYGLOT_ROOT");
  if (p != nullptr) {
    return std::string(p);
  } else {
    std::cerr << "POLYGLOT_ROOT is not set" << std::endl;
    exit(-1);
  }
}

class MyFixture : public benchmark::Fixture {
 public:
  void SetUp(const ::benchmark::State& state) {
    if (!config::Configuration::Initialize(
            GetRootPath() + "/grammars/simplelang/semantic.yml")) {
      std::cerr << "Failed to initialize configuration.\n";
      exit(-1);
    }

    frontend = std::make_shared<AntlrFrontend>();
    mutator = std::make_unique<mutation::Mutator>(frontend);
    std::string init_file_path =
        config::Configuration::GetInstance().GetInitDirPath();
    vector<string> file_list = get_all_files_in_dir(init_file_path.c_str());
    for (auto& f : file_list) {
      std::string content = ReadFileIntoString(f);
      if (auto root = frontend->TranslateToIR(content)) {
        mutator->AddIRToLibrary(root);
      }
    }
  }

  void TearDown(const ::benchmark::State& state) {}

  // The unique pointer to be used in the benchmark
 protected:
  std::unique_ptr<mutation::Mutator> mutator;
  std::shared_ptr<AntlrFrontend> frontend;
};

// Define the benchmark function
BENCHMARK_DEFINE_F(MyFixture, MutationTest)(benchmark::State& state) {
  // This code is run in each benchmark iteration
  for (auto _ : state) {
    // Access the unique pointer from the fixture
    std::string_view test_case = "INT a = 1; FLOAT b = 1.0; c + c;";

    size_t test_case_count = 0;
    for (size_t i = 0; i < 20000; ++i) {
      // Avoid mutated_times_ too large, so we make it clean every time.
      auto root = frontend->TranslateToIR(test_case.data());
      // program_root->deep_delete();
      vector<IRPtr> ir_set = CollectAllIRs(root);

      auto mutated_irs = mutator->MutateIRs(ir_set);
      test_case_count += mutated_irs.size();
    }
    if(test_case_count == 0){
        std::cout << test_case_count << std::endl;
    }
  }
}

// Run the benchmark
BENCHMARK_REGISTER_F(MyFixture, MutationTest);

BENCHMARK_MAIN();
