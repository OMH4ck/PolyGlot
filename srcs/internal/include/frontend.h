#ifndef __FRONTEND_H__
#define __FRONTEND_H__

#include "ast.h"
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
  virtual ~Frontend() = default;
  virtual IRTYPE GetIRTypeByStr(std::string_view type) = 0;
  virtual std::string_view GetIRTypeStr(IRTYPE type) = 0;
  virtual IRTYPE GetStringLiteralType() = 0;
  virtual IRTYPE GetIntLiteralType() = 0;
  virtual IRTYPE GetFloatLiteralType() = 0;
  virtual IRTYPE GetIdentifierType() = 0;
  virtual IRTYPE GetUnknownType() = 0;
  virtual FrontendType GetFrontendType() = 0;
};

class AntlrFrontend : public Frontend {
 public:
  bool Parsable(std::string input) override;
  IRPtr TranslateToIR(std::string input) override;
  IRTYPE GetIRTypeByStr(std::string_view type) override;
  std::string_view GetIRTypeStr(IRTYPE type) override;
  IRTYPE GetStringLiteralType() override;
  IRTYPE GetIntLiteralType() override;
  IRTYPE GetFloatLiteralType() override;
  IRTYPE GetIdentifierType() override;
  IRTYPE GetUnknownType() override;
  FrontendType GetFrontendType() override { return FrontendType::kANTLR; }

 private:
};

class [[deprecated("We should use Antlr frontend instead.")]] BisonFrontend
    : public Frontend {
 public:
  bool Parsable(std::string input) override;
  IRPtr TranslateToIR(std::string input) override;
  IRTYPE GetIRTypeByStr(std::string_view type) override;
  std::string_view GetIRTypeStr(IRTYPE type) override;
  IRTYPE GetStringLiteralType() override;
  IRTYPE GetIntLiteralType() override;
  IRTYPE GetFloatLiteralType() override;
  IRTYPE GetIdentifierType() override;
  IRTYPE GetUnknownType() override;
  FrontendType GetFrontendType() override { return FrontendType::kBISON; }

 private:
};
}  // namespace polyglot
#endif
