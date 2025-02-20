//===--- HeaderGuardCheck.h - clang-tidy ------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_LLVM_HEADERGUARDCHECK_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_LLVM_HEADERGUARDCHECK_H

#include "../utils/HeaderGuard.h"

namespace clang::tidy::llvm_check {

/// Finds and fixes header guards that do not adhere to LLVM style.
/// For the user-facing documentation see:
/// http://clang.llvm.org/extra/clang-tidy/checks/llvm/header-guard.html
class LLVMHeaderGuardCheck : public utils::HeaderGuardCheck {
public:
  LLVMHeaderGuardCheck(StringRef Name, ClangTidyContext *Context);

  bool shouldSuggestEndifComment(StringRef Filename) override { return false; }
  std::string getHeaderGuard(StringRef Filename, StringRef OldGuard) override;
};

} // namespace clang::tidy::llvm_check

#endif // LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_LLVM_HEADERGUARDCHECK_H
