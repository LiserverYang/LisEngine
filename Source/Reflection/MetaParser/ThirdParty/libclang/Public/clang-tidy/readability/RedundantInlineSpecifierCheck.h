//===--- RedundantInlineSpecifierCheck.h - clang-tidy ------------*-C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_READABILITY_REDUNDANTINLINESPECIFIERCHECK_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_READABILITY_REDUNDANTINLINESPECIFIERCHECK_H

#include "../ClangTidyCheck.h"

namespace clang::tidy::readability {

/// Detects redundant ``inline`` specifiers on function and variable
/// declarations.
///
/// For the user-facing documentation see:
/// http://clang.llvm.org/extra/clang-tidy/checks/readability/redundant-inline-specifier.html
class RedundantInlineSpecifierCheck : public ClangTidyCheck {
public:
  RedundantInlineSpecifierCheck(StringRef Name, ClangTidyContext *Context)
      : ClangTidyCheck(Name, Context),
        StrictMode(Options.getLocalOrGlobal("StrictMode", false)) {}
  void registerMatchers(ast_matchers::MatchFinder *Finder) override;
  void check(const ast_matchers::MatchFinder::MatchResult &Result) override;
  std::optional<TraversalKind> getCheckTraversalKind() const override {
    return TK_IgnoreUnlessSpelledInSource;
  }

private:
  template <typename T>
  void handleMatchedDecl(const T *MatchedDecl, const SourceManager &Sources,
                         const ast_matchers::MatchFinder::MatchResult &Result,
                         StringRef Message);
  const bool StrictMode;
};

} // namespace clang::tidy::readability

#endif // LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_READABILITY_REDUNDANTINLINESPECIFIERCHECK_H
