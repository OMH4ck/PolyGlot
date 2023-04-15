#include <filesystem>
#include <iostream>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "corpus_evaluate.h"

ABSL_FLAG(std::string, corpus_dir, "", "output file dir");

int main(int argc, char* argv[]) {
  absl::ParseCommandLine(argc, argv);

  if (absl::GetFlag(FLAGS_corpus_dir).empty()) {
    std::cerr << "Please specify a non-empty value for --corpus_dir"
              << std::endl;
    std::exit(1);
  }

  std::string corpus_dir = absl::GetFlag(FLAGS_corpus_dir);
  // Make sure the path is a dir and exist
  if (!std::filesystem::is_directory(corpus_dir)) {
    std::cerr << "The path " << corpus_dir << " is not a directory"
              << std::endl;
    std::exit(1);
  }

  std::cerr.setstate(std::ios_base::failbit);
  auto unparsable_files = CheckUnParsableFiles(corpus_dir);
  auto missing_types = CheckMissingTypesInCorpus(corpus_dir);
  std::cerr.clear();

  if (unparsable_files.empty()) {
    std::cout << "All files are parsable" << std::endl;
  } else {
    std::cout << "Unparsable files: " << std::endl;
    for (auto file : unparsable_files) {
      std::cout << file << std::endl;
    }
  }
  if (missing_types.empty()) {
    std::cout << "All types are in corpus" << std::endl;
  } else {
    std::cout << "Missing types in corpus: " << std::endl;
    for (auto type : missing_types) {
      std::cout << type << std::endl;
    }
  }

  return 0;
}
