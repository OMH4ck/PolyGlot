#ifndef __FRONTEND_H__
#define __FRONTEND_H__

#include "ir.h"

namespace polyglot {

enum class FrontendType {
  kANTLR,
  kBISON,
};

class Frontend {
 public:
  virtual bool Parsable(std::string input) = 0;
  virtual IRPtr TranslateToIR(std::string input) = 0;
};

class AntlrFrontend : public Frontend {
 public:
  bool Parsable(std::string input) override;
  IRPtr TranslateToIR(std::string input) override;

 private:
};

class BisonFrontend : public Frontend {
 public:
  bool Parsable(std::string input) override;
  IRPtr TranslateToIR(std::string input) override;

 private:
};
}  // namespace polyglot
#endif
