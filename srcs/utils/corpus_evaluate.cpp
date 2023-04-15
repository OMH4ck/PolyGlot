#include "corpus_evaluate.h"

#include <filesystem>
#include <fstream>
#include <unordered_map>

#include "absl/flags/flag.h"
#include "frontend.h"
#include "ir.h"
#include "utils.h"

std::unordered_map<std::string, size_t> CountTypesInCorpus(
    std::string_view corpus_path) {
  // Read all files in the corpus
  std::vector<std::string> files;
  auto frontend = std::make_shared<polyglot::AntlrFrontend>();
  for (const auto& entry : std::filesystem::directory_iterator(corpus_path)) {
    files.push_back(entry.path());
  }

  std::unordered_map<std::string, size_t> type_count;

  for (size_t i = 0; i < frontend->GetIRTypeNum(); ++i) {
    type_count[std::string(frontend->GetIRTypeStr(i))] = 0;
  }

  for (auto file : files) {
    // std::cout << file << std::endl;
    std::string content = ReadFileIntoString(file);
    polyglot::IRPtr ir = frontend->TranslateToIR(content);
    if (ir == nullptr) {
      continue;
    }
    auto all_irs = polyglot::CollectAllIRs(ir);
    for (auto ir : all_irs) {
      if (ir->Type() == frontend->GetUnknownType()) {
        continue;
      }
      type_count[std::string(frontend->GetIRTypeStr(ir->Type()))] += 1;
    }
  }
  return type_count;
}

std::vector<std::string> CheckMissingTypesInCorpus(
    std::string_view corpus_path) {
  std::vector<std::string> missing_types;
  auto type_count = CountTypesInCorpus(corpus_path);
  for (const auto& [type, count] : type_count) {
    if (count == 0) {
      missing_types.push_back(type);
    }
  }
  return missing_types;
}

std::vector<std::string> CheckUnParsableFiles(std::string_view corpus_path) {
  std::vector<std::string> unparsable_files;
  auto frontend = std::make_shared<polyglot::AntlrFrontend>();
  for (const auto& entry : std::filesystem::directory_iterator(corpus_path)) {
    std::string file = entry.path();
    std::string content = ReadFileIntoString(file);
    polyglot::IRPtr ir = frontend->TranslateToIR(content);
    if (ir == nullptr) {
      unparsable_files.push_back(file);
    }
  }
  return unparsable_files;
}
