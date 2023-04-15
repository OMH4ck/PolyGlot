#ifndef __CORPUS_EVALUATE_H__
#define __CORPUS_EVALUATE_H__

#include <string>
#include <unordered_map>
#include <vector>

std::unordered_map<std::string, size_t> CountTypesInCorpus(
    std::string_view corpus_path);
std::vector<std::string> CheckMissingTypesInCorpus(
    std::string_view corpus_path);
std::vector<std::string> CheckUnParsableFiles(std::string_view corpus_path);

#endif
