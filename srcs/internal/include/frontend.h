/*
 * Copyright (c) 2023 OMH4ck
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

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
  virtual ~Frontend() = default;
  virtual IRTYPE GetIRTypeByStr(std::string_view type) = 0;
  virtual std::string_view GetIRTypeStr(IRTYPE type) = 0;
  virtual IRTYPE GetStringLiteralType() = 0;
  virtual IRTYPE GetIntLiteralType() = 0;
  virtual IRTYPE GetFloatLiteralType() = 0;
  virtual IRTYPE GetIdentifierType() = 0;
  virtual IRTYPE GetUnknownType() = 0;
  virtual FrontendType GetFrontendType() = 0;
  virtual size_t GetIRTypeNum() = 0;
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
  size_t GetIRTypeNum() override;

 private:
};

}  // namespace polyglot
#endif
