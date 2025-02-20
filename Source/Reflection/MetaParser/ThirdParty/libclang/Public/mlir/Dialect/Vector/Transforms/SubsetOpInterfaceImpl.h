//===- SubsetOpInterfaceImpl.h - Tensor subsets -----------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef MLIR_DIALECT_VECTOR_SUBSETOPINTERFACEIMPL_H
#define MLIR_DIALECT_VECTOR_SUBSETOPINTERFACEIMPL_H

namespace mlir {
class DialectRegistry;

namespace vector {
void registerSubsetOpInterfaceExternalModels(DialectRegistry &registry);
} // namespace vector
} // namespace mlir

#endif // MLIR_DIALECT_VECTOR_SUBSETOPINTERFACEIMPL_H
