//===- DFAJumpThreading.h - Threads a switch statement inside a loop ------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file provides the interface for the DFAJumpThreading pass.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_TRANSFORMS_SCALAR_DFAJUMPTHREADING_H
#define LLVM_TRANSFORMS_SCALAR_DFAJUMPTHREADING_H

#include "llvm/IR/PassManager.h"

namespace llvm {

class Function;

struct DFAJumpThreadingPass : PassInfoMixin<DFAJumpThreadingPass> {
  PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);
};

} // end namespace llvm

#endif // LLVM_TRANSFORMS_SCALAR_DFAJUMPTHREADING_H
