//===--- MustCheckErrsCheck.h - clang-tidy ----------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_LINUXKERNEL_MUSTCHECKERRSCHECK_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_LINUXKERNEL_MUSTCHECKERRSCHECK_H

#include "../ClangTidyCheck.h"

namespace clang::tidy::linuxkernel {

/// Checks Linux kernel code to see if it uses the results from the functions in
/// linux/err.h. Also checks to see if code uses the results from functions that
/// directly return a value from one of these error functions.
///
/// For the user-facing documentation see:
/// http://clang.llvm.org/extra/clang-tidy/checks/linuxkernel/must-check-errs.html
class MustCheckErrsCheck : public ClangTidyCheck {
public:
  MustCheckErrsCheck(StringRef Name, ClangTidyContext *Context)
      : ClangTidyCheck(Name, Context) {}
  void registerMatchers(ast_matchers::MatchFinder *Finder) override;
  void check(const ast_matchers::MatchFinder::MatchResult &Result) override;
};

} // namespace clang::tidy::linuxkernel

#endif // LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_LINUXKERNEL_MUSTCHECKERRSCHECK_H
