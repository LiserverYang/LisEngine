//===- ConvertSCFToOpenMP.h - SCF to OpenMP pass entrypoint -----*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef MLIR_CONVERSION_SCFTOOPENMP_SCFTOOPENMP_H
#define MLIR_CONVERSION_SCFTOOPENMP_SCFTOOPENMP_H

#include <memory>

namespace mlir {
class Pass;

#define GEN_PASS_DECL_CONVERTSCFTOOPENMPPASS
#include "mlir/Conversion/Passes.h.inc"

} // namespace mlir

#endif // MLIR_CONVERSION_SCFTOOPENMP_SCFTOOPENMP_H
