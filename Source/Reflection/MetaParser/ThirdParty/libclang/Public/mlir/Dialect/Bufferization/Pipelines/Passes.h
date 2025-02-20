//===- Passes.h - Bufferization pipeline entry points -----------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This header file defines prototypes of all bufferization pipelines.
//
//===----------------------------------------------------------------------===//

#ifndef MLIR_DIALECT_BUFFERIZATION_PIPELINES_PASSES_H
#define MLIR_DIALECT_BUFFERIZATION_PIPELINES_PASSES_H

#include "mlir/Dialect/Bufferization/IR/BufferDeallocationOpInterface.h"
#include "mlir/Pass/PassOptions.h"

namespace mlir {
namespace bufferization {

/// Options for the buffer deallocation pipeline.
struct BufferDeallocationPipelineOptions
    : public PassPipelineOptions<BufferDeallocationPipelineOptions> {
  PassOptions::Option<bool> privateFunctionDynamicOwnership{
      *this, "private-function-dynamic-ownership",
      llvm::cl::desc(
          "Allows to add additional results to private functions to return "
          "ownership of returned memrefs to callers. This can avoid spurious "
          "buffer clones in the callee."),
      llvm::cl::init(false)};

  /// Implicit conversion to `DeallocationOptions`.
  operator DeallocationOptions() const {
    DeallocationOptions options;
    options.privateFuncDynamicOwnership = privateFunctionDynamicOwnership;
    return options;
  }
};

//===----------------------------------------------------------------------===//
// Building and Registering.
//===----------------------------------------------------------------------===//

/// Adds the buffer deallocation pipeline to the `OpPassManager`. This
/// is the standard pipeline for deallocating the MemRefs introduced by the
/// One-Shot bufferization pass.
void buildBufferDeallocationPipeline(
    OpPassManager &pm, const BufferDeallocationPipelineOptions &options);

/// Registers all pipelines for the `bufferization` dialect. Currently,
/// this includes only the "buffer-deallocation-pipeline".
void registerBufferizationPipelines();

} // namespace bufferization
} // namespace mlir

#endif // MLIR_DIALECT_BUFFERIZATION_PIPELINES_PASSES_H
