//===--- AvoidUnderscoreInGoogletestNameCheck.h - clang-tidy ----*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_GOOGLE_AVOIDUNDERSCOREINGOOGLETESTNAMECHECK_H
#define LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_GOOGLE_AVOIDUNDERSCOREINGOOGLETESTNAMECHECK_H

#include "../ClangTidyCheck.h"

namespace clang::tidy::google::readability {

// Check for underscores in the names of googletest tests, per
// https://google.github.io/googletest/faq.html#why-should-test-suite-names-and-test-names-not-contain-underscore
///
/// For the user-facing documentation see:
/// http://clang.llvm.org/extra/clang-tidy/checks/google/readability-avoid-underscore-in-googletest-name.html
class AvoidUnderscoreInGoogletestNameCheck : public ClangTidyCheck {
public:
  using ClangTidyCheck::ClangTidyCheck;

  void registerPPCallbacks(const SourceManager &SM, Preprocessor *PP,
                           Preprocessor *ModuleExpanderPP) override;
};

} // namespace clang::tidy::google::readability

#endif // LLVM_CLANG_TOOLS_EXTRA_CLANG_TIDY_GOOGLE_AVOIDUNDERSCOREINGOOGLETESTNAMECHECK_H
