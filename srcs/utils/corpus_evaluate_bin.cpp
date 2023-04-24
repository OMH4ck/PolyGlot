#include <filesystem>
#include <iostream>
#include <unordered_set>

#include "absl/flags/flag.h"
#include "absl/flags/parse.h"
#include "corpus_evaluate.h"

ABSL_FLAG(std::string, corpus_dir, "", "corpus file dir");
ABSL_FLAG(std::string, output_dir, "", "output file dir");

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

  // std::cerr.setstate(std::ios_base::failbit);
  auto unparsable_files = CheckUnParsableFiles(corpus_dir);
  auto missing_types = CheckMissingTypesInCorpus(corpus_dir);
  // std::cerr.clear();

  std::string output_path = absl::GetFlag(FLAGS_output_dir);
  if (!output_path.empty()) {
    std::unordered_set<std::string> files;
    for (const auto& entry : std::filesystem::directory_iterator(corpus_dir)) {
      files.insert(entry.path());
    }
    if (!std::filesystem::exists(output_path)) {
      if (std::filesystem::create_directory(output_path)) {
        std::cout << "Directory created!" << std::endl;
      } else {
        std::cout << "Failed to create directory!" << std::endl;
        exit(-1);
      }
    } else if (!std::filesystem::is_directory(output_path)) {
      std::cout << "Output dir is not a dir!" << std::endl;
      exit(-1);
    }

    for (const auto& file : unparsable_files) {
      files.erase(file);
    }

    for (const auto& file : files) {
      std::filesystem::path src_filename =
          std::filesystem::path(file).filename();
      // Construct the destination path by appending the source filename to the
      // destination directory
      std::string dst_path =
          (std::filesystem::path(output_path) / src_filename).string();

      // Use the copy_file function to copy the source file to the destination
      // directory
      if (!std::filesystem::copy_file(
              file, dst_path,
              std::filesystem::copy_options::overwrite_existing)) {
        std::cout << "Failed to copy file " << file << std::endl;
        exit(-1);
      }
    }
  }

  if (unparsable_files.empty()) {
    std::cout << "All files are parsable" << std::endl;
  } else {
    std::cout << "Unparsable files: (TOTAL" << unparsable_files.size() << " )"
              << std::endl;
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
