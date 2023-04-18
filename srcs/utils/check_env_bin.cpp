// Copyright (c) 2023 OMH4ck
//
// This software is released under the MIT License.
// https://opensource.org/licenses/MIT

#include <filesystem>
#include <iostream>

#include "configuration.h"
#include "corpus_evaluate.h"

int main(int argc, char* argv[]) {
  const char* config_path = getenv("POLYGLOT_CONFIG");
  if (!config_path) {
    std::cerr << "Please set the environment variable POLYGLOT_CONFIG"
              << std::endl;
    std::exit(1);
  }

  std::string config_file(config_path);
  if (config_file.empty()) {
    std::cerr << "Please specify a non-empty value for --config" << std::endl;
    std::exit(1);
  }

  if (!polyglot::config::ConfigFileValidate(config_file)) {
    std::cerr << "Config file is not valid" << std::endl;
    std::exit(1);
  }

  std::cerr << "Your configuration looks good!" << std::endl;
  return 0;
}
