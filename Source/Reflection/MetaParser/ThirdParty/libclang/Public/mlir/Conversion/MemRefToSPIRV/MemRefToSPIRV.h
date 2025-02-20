//===- MemRefToSPIRV.h - MemRef to SPIR-V Patterns --------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// Provides patterns to convert MemRef dialect to SPIR-V dialect.
//
//===----------------------------------------------------------------------===//

#ifndef MLIR_CONVERSION_MEMREFTOSPIRV_MEMREFTOSPIRV_H
#define MLIR_CONVERSION_MEMREFTOSPIRV_MEMREFTOSPIRV_H

#include "mlir/Dialect/SPIRV/IR/SPIRVEnums.h"
#include "mlir/Transforms/DialectConversion.h"
#include <memory>

namespace mlir {
class SPIRVTypeConverter;

namespace spirv {
/// Mapping from numeric MemRef memory spaces into SPIR-V symbolic ones.
using MemorySpaceToStorageClassMap =
    std::function<std::optional<spirv::StorageClass>(Attribute)>;

/// Maps MemRef memory spaces to storage classes for Vulkan-flavored SPIR-V
/// using the default rule. Returns std::nullopt if the memory space is unknown.
std::optional<spirv::StorageClass>
    mapMemorySpaceToVulkanStorageClass(Attribute);
/// Maps storage classes for Vulkan-flavored SPIR-V to MemRef memory spaces
/// using the default rule. Returns std::nullopt if the storage class is
/// unsupported.
std::optional<unsigned> mapVulkanStorageClassToMemorySpace(spirv::StorageClass);

/// Maps MemRef memory spaces to storage classes for OpenCL-flavored SPIR-V
/// using the default rule. Returns std::nullopt if the memory space is unknown.
std::optional<spirv::StorageClass>
    mapMemorySpaceToOpenCLStorageClass(Attribute);
/// Maps storage classes for OpenCL-flavored SPIR-V to MemRef memory spaces
/// using the default rule. Returns std::nullopt if the storage class is
/// unsupported.
std::optional<unsigned> mapOpenCLStorageClassToMemorySpace(spirv::StorageClass);

/// Type converter for converting numeric MemRef memory spaces into SPIR-V
/// symbolic ones.
class MemorySpaceToStorageClassConverter : public TypeConverter {
public:
  explicit MemorySpaceToStorageClassConverter(
      const MemorySpaceToStorageClassMap &memorySpaceMap);

private:
  MemorySpaceToStorageClassMap memorySpaceMap;
};

/// Creates the target that populates legality of ops with MemRef types.
std::unique_ptr<ConversionTarget>
getMemorySpaceToStorageClassTarget(MLIRContext &);

/// Converts all MemRef types and attributes in the op, as decided by the
/// `typeConverter`.
void convertMemRefTypesAndAttrs(
    Operation *op, MemorySpaceToStorageClassConverter &typeConverter);

} // namespace spirv

/// Appends to a pattern list additional patterns for translating MemRef ops
/// to SPIR-V ops.
void populateMemRefToSPIRVPatterns(SPIRVTypeConverter &typeConverter,
                                   RewritePatternSet &patterns);

} // namespace mlir

#endif // MLIR_CONVERSION_MEMREFTOSPIRV_MEMREFTOSPIRV_H
