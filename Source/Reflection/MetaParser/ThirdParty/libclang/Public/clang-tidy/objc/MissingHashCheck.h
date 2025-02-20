//===--- MissingHashCheck.h - clang-tidy ------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_OBJC_MISSINGHASHCHECK_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_OBJC_MISSINGHASHCHECK_H

#include "../ClangTidyCheck.h"

namespace clang::tidy::objc {

/// Finds Objective-C implementations that implement -isEqual: without also
/// appropriately implementing -hash.
///
/// For the user-facing documentation see:
/// http://clang.llvm.org/extra/clang-tidy/checks/objc/missing-hash.html
class MissingHashCheck : public ClangTidyCheck {
public:
  MissingHashCheck(StringRef Name, ClangTidyContext *Context)
      : ClangTidyCheck(Name, Context) {}
  bool isLanguageVersionSupported(const LangOptions &LangOpts) const override {
    return LangOpts.ObjC;
  }
  void registerMatchers(ast_matchers::MatchFinder *Finder) override;
  void check(const ast_matchers::MatchFinder::MatchResult &Result) override;
};

} // namespace clang::tidy::objc

#endif // LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_OBJC_MISSINGHASHCHECK_H
