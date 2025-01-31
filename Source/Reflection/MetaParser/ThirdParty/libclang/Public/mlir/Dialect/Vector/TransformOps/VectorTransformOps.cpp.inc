/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: VectorTransformOps.td                                                *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyCastAwayVectorLeadingOneDimPatternsOp,
::mlir::transform::ApplyFoldArithExtensionPatternsOp,
::mlir::transform::ApplyFoldElementwiseToVectorPatternsOp,
::mlir::transform::ApplyInterleaveToShufflePatternsOp,
::mlir::transform::ApplyLowerBitCastPatternsOp,
::mlir::transform::ApplyLowerBroadcastPatternsOp,
::mlir::transform::ApplyLowerContractionPatternsOp,
::mlir::transform::ApplyLowerCreateMaskPatternsOp,
::mlir::transform::ApplyLowerGatherPatternsOp,
::mlir::transform::ApplyLowerInterleavePatternsOp,
::mlir::transform::ApplyLowerMaskedTransfersPatternsOp,
::mlir::transform::ApplyLowerMasksPatternsOp,
::mlir::transform::ApplyLowerMultiReductionPatternsOp,
::mlir::transform::ApplyLowerOuterProductPatternsOp,
::mlir::transform::ApplyLowerScanPatternsOp,
::mlir::transform::ApplyLowerShapeCastPatternsOp,
::mlir::transform::ApplyLowerTransferPatternsOp,
::mlir::transform::ApplyLowerTransposePatternsOp,
::mlir::transform::ApplyMaterializeMasksPatternsOp,
::mlir::transform::ApplyRankReducingSubviewPatternsOp,
::mlir::transform::ApplyRewriteNarrowTypePatternsOp,
::mlir::transform::ApplySplitTransferFullPartialPatternsOp,
::mlir::transform::ApplyTransferPermutationPatternsOp,
::mlir::transform::ApplyTransferToScfPatternsOp,
::mlir::transform::ApplyVectorReductionToContractPatternsOp,
::mlir::transform::ApplyVectorToLLVMConversionPatternsOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::vector::VectorContractLoweringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: control the lowering of `vector.contract` operations.";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::vector::VectorMultiReductionLoweringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: control the lowering of `vector.multi_reduction`.";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::vector::VectorTransposeLoweringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: control the lowering of `vector.transpose` operations.";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::vector::VectorTransferSplitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: control the splitting of `vector.transfer` operations into in-bounds and out-of-bounds variants.";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_VectorTransformOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_VectorTransformOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyCastAwayVectorLeadingOneDimPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyCastAwayVectorLeadingOneDimPatternsOpAdaptor::ApplyCastAwayVectorLeadingOneDimPatternsOpAdaptor(ApplyCastAwayVectorLeadingOneDimPatternsOp op) : ApplyCastAwayVectorLeadingOneDimPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyCastAwayVectorLeadingOneDimPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyCastAwayVectorLeadingOneDimPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyCastAwayVectorLeadingOneDimPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyCastAwayVectorLeadingOneDimPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyCastAwayVectorLeadingOneDimPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyCastAwayVectorLeadingOneDimPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyCastAwayVectorLeadingOneDimPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyCastAwayVectorLeadingOneDimPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyCastAwayVectorLeadingOneDimPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldArithExtensionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyFoldArithExtensionPatternsOpAdaptor::ApplyFoldArithExtensionPatternsOpAdaptor(ApplyFoldArithExtensionPatternsOp op) : ApplyFoldArithExtensionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyFoldArithExtensionPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyFoldArithExtensionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldArithExtensionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldArithExtensionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyFoldArithExtensionPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyFoldArithExtensionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldArithExtensionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldArithExtensionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldArithExtensionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldElementwiseToVectorPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyFoldElementwiseToVectorPatternsOpAdaptor::ApplyFoldElementwiseToVectorPatternsOpAdaptor(ApplyFoldElementwiseToVectorPatternsOp op) : ApplyFoldElementwiseToVectorPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyFoldElementwiseToVectorPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyFoldElementwiseToVectorPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldElementwiseToVectorPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldElementwiseToVectorPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyFoldElementwiseToVectorPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyFoldElementwiseToVectorPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldElementwiseToVectorPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldElementwiseToVectorPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldElementwiseToVectorPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyInterleaveToShufflePatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyInterleaveToShufflePatternsOpAdaptor::ApplyInterleaveToShufflePatternsOpAdaptor(ApplyInterleaveToShufflePatternsOp op) : ApplyInterleaveToShufflePatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyInterleaveToShufflePatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyInterleaveToShufflePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyInterleaveToShufflePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyInterleaveToShufflePatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyInterleaveToShufflePatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyInterleaveToShufflePatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyInterleaveToShufflePatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyInterleaveToShufflePatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyInterleaveToShufflePatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerBitCastPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyLowerBitCastPatternsOpAdaptor::ApplyLowerBitCastPatternsOpAdaptor(ApplyLowerBitCastPatternsOp op) : ApplyLowerBitCastPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerBitCastPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyLowerBitCastPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerBitCastPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerBitCastPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyLowerBitCastPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerBitCastPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerBitCastPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerBitCastPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerBitCastPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerBroadcastPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyLowerBroadcastPatternsOpAdaptor::ApplyLowerBroadcastPatternsOpAdaptor(ApplyLowerBroadcastPatternsOp op) : ApplyLowerBroadcastPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerBroadcastPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyLowerBroadcastPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerBroadcastPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerBroadcastPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyLowerBroadcastPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerBroadcastPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerBroadcastPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerBroadcastPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerBroadcastPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerContractionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerContractionPatternsOpGenericAdaptorBase::ApplyLowerContractionPatternsOpGenericAdaptorBase(ApplyLowerContractionPatternsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::vector::VectorContractLoweringAttr ApplyLowerContractionPatternsOpGenericAdaptorBase::getLoweringStrategyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::vector::VectorContractLoweringAttr>(getProperties().lowering_strategy);
  return attr;
}

::mlir::vector::VectorContractLowering ApplyLowerContractionPatternsOpGenericAdaptorBase::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

} // namespace detail
ApplyLowerContractionPatternsOpAdaptor::ApplyLowerContractionPatternsOpAdaptor(ApplyLowerContractionPatternsOp op) : ApplyLowerContractionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerContractionPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (tblgen_lowering_strategy && !((::llvm::isa<::mlir::vector::VectorContractLoweringAttr>(tblgen_lowering_strategy))))
    return emitError(loc, "'transform.apply_patterns.vector.lower_contraction' op ""attribute 'lowering_strategy' failed to satisfy constraint: control the lowering of `vector.contract` operations.");
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerContractionPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.lowering_strategy;
       auto attr = dict.get("lowering_strategy");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `lowering_strategy` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyLowerContractionPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.lowering_strategy;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("lowering_strategy",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyLowerContractionPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.lowering_strategy.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyLowerContractionPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "lowering_strategy")
      return prop.lowering_strategy;
  return std::nullopt;
}

void ApplyLowerContractionPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "lowering_strategy") {
       prop.lowering_strategy = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.lowering_strategy)>>(value);
       return;
    }
}

void ApplyLowerContractionPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.lowering_strategy) attrs.append("lowering_strategy", prop.lowering_strategy);
}

::llvm::LogicalResult ApplyLowerContractionPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLoweringStrategyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps0(attr, "lowering_strategy", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerContractionPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.lowering_strategy)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyLowerContractionPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.lowering_strategy);
}

::mlir::vector::VectorContractLowering ApplyLowerContractionPatternsOp::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

void ApplyLowerContractionPatternsOp::setLoweringStrategy(::mlir::vector::VectorContractLowering attrValue) {
  getProperties().lowering_strategy = ::mlir::vector::VectorContractLoweringAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void ApplyLowerContractionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorContractLoweringAttr lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
}

void ApplyLowerContractionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorContractLoweringAttr lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerContractionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorContractLowering lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
}

void ApplyLowerContractionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorContractLowering lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerContractionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ApplyLowerContractionPatternsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void ApplyLowerContractionPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.lowering_strategy)
    properties.lowering_strategy = ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), vector::VectorContractLowering::OuterProduct);
}

::llvm::LogicalResult ApplyLowerContractionPatternsOp::verifyInvariantsImpl() {
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps0(*this, tblgen_lowering_strategy, "lowering_strategy")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerContractionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerContractionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::vector::VectorContractLoweringAttr lowering_strategyAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("lowering_strategy"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"dot","matmulintrinsics","outerproduct","parallelarith"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "lowering_strategy", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'lowering_strategy' [dot, matmulintrinsics, outerproduct, parallelarith]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorContractLowering(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "lowering_strategy attribute specification: \"" << attrStr << '"';;

      lowering_strategyAttr = ::mlir::vector::VectorContractLoweringAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<ApplyLowerContractionPatternsOp::Properties>().lowering_strategy = lowering_strategyAttr;
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerContractionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getLoweringStrategyAttr() && getLoweringStrategyAttr() != ::mlir::vector::VectorContractLoweringAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), vector::VectorContractLowering::OuterProduct)) {
    _odsPrinter << ' ' << "lowering_strategy";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';

    {
      auto caseValue = getLoweringStrategy();
      auto caseValueStr = stringifyVectorContractLowering(caseValue);
      _odsPrinter << caseValueStr;
    }
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("lowering_strategy");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLoweringStrategyAttr();
     if(attr && (attr == ::mlir::vector::VectorContractLoweringAttr::get(odsBuilder.getContext(), vector::VectorContractLowering::OuterProduct)))
       elidedAttrs.push_back("lowering_strategy");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerContractionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerCreateMaskPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyLowerCreateMaskPatternsOpAdaptor::ApplyLowerCreateMaskPatternsOpAdaptor(ApplyLowerCreateMaskPatternsOp op) : ApplyLowerCreateMaskPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerCreateMaskPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyLowerCreateMaskPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerCreateMaskPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerCreateMaskPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyLowerCreateMaskPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerCreateMaskPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerCreateMaskPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerCreateMaskPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerCreateMaskPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerGatherPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyLowerGatherPatternsOpAdaptor::ApplyLowerGatherPatternsOpAdaptor(ApplyLowerGatherPatternsOp op) : ApplyLowerGatherPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerGatherPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyLowerGatherPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerGatherPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerGatherPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyLowerGatherPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerGatherPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerGatherPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerGatherPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerGatherPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerInterleavePatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyLowerInterleavePatternsOpAdaptor::ApplyLowerInterleavePatternsOpAdaptor(ApplyLowerInterleavePatternsOp op) : ApplyLowerInterleavePatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerInterleavePatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyLowerInterleavePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerInterleavePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerInterleavePatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyLowerInterleavePatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerInterleavePatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerInterleavePatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerInterleavePatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerInterleavePatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerMaskedTransfersPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyLowerMaskedTransfersPatternsOpAdaptor::ApplyLowerMaskedTransfersPatternsOpAdaptor(ApplyLowerMaskedTransfersPatternsOp op) : ApplyLowerMaskedTransfersPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerMaskedTransfersPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyLowerMaskedTransfersPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerMaskedTransfersPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerMaskedTransfersPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyLowerMaskedTransfersPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerMaskedTransfersPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerMaskedTransfersPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerMaskedTransfersPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerMaskedTransfersPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerMasksPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyLowerMasksPatternsOpAdaptor::ApplyLowerMasksPatternsOpAdaptor(ApplyLowerMasksPatternsOp op) : ApplyLowerMasksPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerMasksPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyLowerMasksPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerMasksPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerMasksPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyLowerMasksPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerMasksPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerMasksPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerMasksPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerMasksPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerMultiReductionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerMultiReductionPatternsOpGenericAdaptorBase::ApplyLowerMultiReductionPatternsOpGenericAdaptorBase(ApplyLowerMultiReductionPatternsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::vector::VectorMultiReductionLoweringAttr ApplyLowerMultiReductionPatternsOpGenericAdaptorBase::getLoweringStrategyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::vector::VectorMultiReductionLoweringAttr>(getProperties().lowering_strategy);
  return attr;
}

::mlir::vector::VectorMultiReductionLowering ApplyLowerMultiReductionPatternsOpGenericAdaptorBase::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

} // namespace detail
ApplyLowerMultiReductionPatternsOpAdaptor::ApplyLowerMultiReductionPatternsOpAdaptor(ApplyLowerMultiReductionPatternsOp op) : ApplyLowerMultiReductionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerMultiReductionPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (tblgen_lowering_strategy && !((::llvm::isa<::mlir::vector::VectorMultiReductionLoweringAttr>(tblgen_lowering_strategy))))
    return emitError(loc, "'transform.apply_patterns.vector.lower_multi_reduction' op ""attribute 'lowering_strategy' failed to satisfy constraint: control the lowering of `vector.multi_reduction`.");
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerMultiReductionPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.lowering_strategy;
       auto attr = dict.get("lowering_strategy");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `lowering_strategy` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyLowerMultiReductionPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.lowering_strategy;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("lowering_strategy",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyLowerMultiReductionPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.lowering_strategy.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyLowerMultiReductionPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "lowering_strategy")
      return prop.lowering_strategy;
  return std::nullopt;
}

void ApplyLowerMultiReductionPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "lowering_strategy") {
       prop.lowering_strategy = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.lowering_strategy)>>(value);
       return;
    }
}

void ApplyLowerMultiReductionPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.lowering_strategy) attrs.append("lowering_strategy", prop.lowering_strategy);
}

::llvm::LogicalResult ApplyLowerMultiReductionPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLoweringStrategyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps1(attr, "lowering_strategy", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerMultiReductionPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.lowering_strategy)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyLowerMultiReductionPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.lowering_strategy);
}

::mlir::vector::VectorMultiReductionLowering ApplyLowerMultiReductionPatternsOp::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

void ApplyLowerMultiReductionPatternsOp::setLoweringStrategy(::mlir::vector::VectorMultiReductionLowering attrValue) {
  getProperties().lowering_strategy = ::mlir::vector::VectorMultiReductionLoweringAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void ApplyLowerMultiReductionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorMultiReductionLoweringAttr lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
}

void ApplyLowerMultiReductionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorMultiReductionLoweringAttr lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerMultiReductionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorMultiReductionLowering lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
}

void ApplyLowerMultiReductionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorMultiReductionLowering lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerMultiReductionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ApplyLowerMultiReductionPatternsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void ApplyLowerMultiReductionPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.lowering_strategy)
    properties.lowering_strategy = ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), vector::VectorMultiReductionLowering::InnerParallel);
}

::llvm::LogicalResult ApplyLowerMultiReductionPatternsOp::verifyInvariantsImpl() {
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps1(*this, tblgen_lowering_strategy, "lowering_strategy")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerMultiReductionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerMultiReductionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::vector::VectorMultiReductionLoweringAttr lowering_strategyAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("lowering_strategy"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"innerparallel","innerreduction"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "lowering_strategy", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'lowering_strategy' [innerparallel, innerreduction]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorMultiReductionLowering(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "lowering_strategy attribute specification: \"" << attrStr << '"';;

      lowering_strategyAttr = ::mlir::vector::VectorMultiReductionLoweringAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<ApplyLowerMultiReductionPatternsOp::Properties>().lowering_strategy = lowering_strategyAttr;
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerMultiReductionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getLoweringStrategyAttr() && getLoweringStrategyAttr() != ::mlir::vector::VectorMultiReductionLoweringAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), vector::VectorMultiReductionLowering::InnerParallel)) {
    _odsPrinter << ' ' << "lowering_strategy";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';

    {
      auto caseValue = getLoweringStrategy();
      auto caseValueStr = stringifyVectorMultiReductionLowering(caseValue);
      _odsPrinter << caseValueStr;
    }
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("lowering_strategy");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLoweringStrategyAttr();
     if(attr && (attr == ::mlir::vector::VectorMultiReductionLoweringAttr::get(odsBuilder.getContext(), vector::VectorMultiReductionLowering::InnerParallel)))
       elidedAttrs.push_back("lowering_strategy");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerMultiReductionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerOuterProductPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyLowerOuterProductPatternsOpAdaptor::ApplyLowerOuterProductPatternsOpAdaptor(ApplyLowerOuterProductPatternsOp op) : ApplyLowerOuterProductPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerOuterProductPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyLowerOuterProductPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerOuterProductPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerOuterProductPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyLowerOuterProductPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerOuterProductPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerOuterProductPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerOuterProductPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerOuterProductPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerScanPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyLowerScanPatternsOpAdaptor::ApplyLowerScanPatternsOpAdaptor(ApplyLowerScanPatternsOp op) : ApplyLowerScanPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerScanPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyLowerScanPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerScanPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerScanPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyLowerScanPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerScanPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerScanPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerScanPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerScanPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerShapeCastPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyLowerShapeCastPatternsOpAdaptor::ApplyLowerShapeCastPatternsOpAdaptor(ApplyLowerShapeCastPatternsOp op) : ApplyLowerShapeCastPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerShapeCastPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyLowerShapeCastPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyLowerShapeCastPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerShapeCastPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyLowerShapeCastPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerShapeCastPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerShapeCastPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerShapeCastPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerShapeCastPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerTransferPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerTransferPatternsOpGenericAdaptorBase::ApplyLowerTransferPatternsOpGenericAdaptorBase(ApplyLowerTransferPatternsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::IntegerAttr ApplyLowerTransferPatternsOpGenericAdaptorBase::getMaxTransferRankAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().max_transfer_rank);
  return attr;
}

uint64_t ApplyLowerTransferPatternsOpGenericAdaptorBase::getMaxTransferRank() {
  auto attr = getMaxTransferRankAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ApplyLowerTransferPatternsOpAdaptor::ApplyLowerTransferPatternsOpAdaptor(ApplyLowerTransferPatternsOp op) : ApplyLowerTransferPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerTransferPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_max_transfer_rank = getProperties().max_transfer_rank; (void)tblgen_max_transfer_rank;

  if (tblgen_max_transfer_rank && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_max_transfer_rank))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_max_transfer_rank).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.apply_patterns.vector.lower_transfer' op ""attribute 'max_transfer_rank' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerTransferPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.max_transfer_rank;
       auto attr = dict.get("max_transfer_rank");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `max_transfer_rank` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyLowerTransferPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.max_transfer_rank;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("max_transfer_rank",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyLowerTransferPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.max_transfer_rank.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyLowerTransferPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "max_transfer_rank")
      return prop.max_transfer_rank;
  return std::nullopt;
}

void ApplyLowerTransferPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "max_transfer_rank") {
       prop.max_transfer_rank = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.max_transfer_rank)>>(value);
       return;
    }
}

void ApplyLowerTransferPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.max_transfer_rank) attrs.append("max_transfer_rank", prop.max_transfer_rank);
}

::llvm::LogicalResult ApplyLowerTransferPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMaxTransferRankAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps2(attr, "max_transfer_rank", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerTransferPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.max_transfer_rank)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyLowerTransferPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.max_transfer_rank);
}

uint64_t ApplyLowerTransferPatternsOp::getMaxTransferRank() {
  auto attr = getMaxTransferRankAttr();
  return attr.getValue().getZExtValue();
}

void ApplyLowerTransferPatternsOp::setMaxTransferRank(uint64_t attrValue) {
  getProperties().max_transfer_rank = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void ApplyLowerTransferPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr max_transfer_rank) {
  if (max_transfer_rank) {
    odsState.getOrAddProperties<Properties>().max_transfer_rank = max_transfer_rank;
  }
}

void ApplyLowerTransferPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr max_transfer_rank) {
  if (max_transfer_rank) {
    odsState.getOrAddProperties<Properties>().max_transfer_rank = max_transfer_rank;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerTransferPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint64_t max_transfer_rank) {
  odsState.getOrAddProperties<Properties>().max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), max_transfer_rank);
}

void ApplyLowerTransferPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint64_t max_transfer_rank) {
  odsState.getOrAddProperties<Properties>().max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), max_transfer_rank);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerTransferPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ApplyLowerTransferPatternsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void ApplyLowerTransferPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.max_transfer_rank)
    properties.max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1);
}

::llvm::LogicalResult ApplyLowerTransferPatternsOp::verifyInvariantsImpl() {
  auto tblgen_max_transfer_rank = getProperties().max_transfer_rank; (void)tblgen_max_transfer_rank;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps2(*this, tblgen_max_transfer_rank, "max_transfer_rank")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerTransferPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerTransferPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::IntegerAttr max_transfer_rankAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("max_transfer_rank"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(max_transfer_rankAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (max_transfer_rankAttr) result.getOrAddProperties<ApplyLowerTransferPatternsOp::Properties>().max_transfer_rank = max_transfer_rankAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerTransferPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getMaxTransferRankAttr() && getMaxTransferRankAttr() != ::mlir::OpBuilder((*this)->getContext()).getIntegerAttr(::mlir::OpBuilder((*this)->getContext()).getIntegerType(64), 1)) {
    _odsPrinter << ' ' << "max_transfer_rank";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getMaxTransferRankAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("max_transfer_rank");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMaxTransferRankAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1)))
       elidedAttrs.push_back("max_transfer_rank");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerTransferPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLowerTransposePatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyLowerTransposePatternsOpGenericAdaptorBase::ApplyLowerTransposePatternsOpGenericAdaptorBase(ApplyLowerTransposePatternsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::vector::VectorTransposeLoweringAttr ApplyLowerTransposePatternsOpGenericAdaptorBase::getLoweringStrategyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::vector::VectorTransposeLoweringAttr>(getProperties().lowering_strategy);
  return attr;
}

::mlir::vector::VectorTransposeLowering ApplyLowerTransposePatternsOpGenericAdaptorBase::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

::mlir::BoolAttr ApplyLowerTransposePatternsOpGenericAdaptorBase::getAvx2LoweringStrategyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().avx2_lowering_strategy);
  return attr;
}

bool ApplyLowerTransposePatternsOpGenericAdaptorBase::getAvx2LoweringStrategy() {
  auto attr = getAvx2LoweringStrategyAttr();
  return attr.getValue();
}

} // namespace detail
ApplyLowerTransposePatternsOpAdaptor::ApplyLowerTransposePatternsOpAdaptor(ApplyLowerTransposePatternsOp op) : ApplyLowerTransposePatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyLowerTransposePatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_avx2_lowering_strategy = getProperties().avx2_lowering_strategy; (void)tblgen_avx2_lowering_strategy;
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (tblgen_lowering_strategy && !((::llvm::isa<::mlir::vector::VectorTransposeLoweringAttr>(tblgen_lowering_strategy))))
    return emitError(loc, "'transform.apply_patterns.vector.lower_transpose' op ""attribute 'lowering_strategy' failed to satisfy constraint: control the lowering of `vector.transpose` operations.");

  if (tblgen_avx2_lowering_strategy && !((::llvm::isa<::mlir::BoolAttr>(tblgen_avx2_lowering_strategy))))
    return emitError(loc, "'transform.apply_patterns.vector.lower_transpose' op ""attribute 'avx2_lowering_strategy' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerTransposePatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.avx2_lowering_strategy;
       auto attr = dict.get("avx2_lowering_strategy");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `avx2_lowering_strategy` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.lowering_strategy;
       auto attr = dict.get("lowering_strategy");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `lowering_strategy` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyLowerTransposePatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.avx2_lowering_strategy;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("avx2_lowering_strategy",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.lowering_strategy;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("lowering_strategy",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyLowerTransposePatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.avx2_lowering_strategy.getAsOpaquePointer()), 
    llvm::hash_value(prop.lowering_strategy.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyLowerTransposePatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "avx2_lowering_strategy")
      return prop.avx2_lowering_strategy;

    if (name == "lowering_strategy")
      return prop.lowering_strategy;
  return std::nullopt;
}

void ApplyLowerTransposePatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "avx2_lowering_strategy") {
       prop.avx2_lowering_strategy = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.avx2_lowering_strategy)>>(value);
       return;
    }

    if (name == "lowering_strategy") {
       prop.lowering_strategy = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.lowering_strategy)>>(value);
       return;
    }
}

void ApplyLowerTransposePatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.avx2_lowering_strategy) attrs.append("avx2_lowering_strategy", prop.avx2_lowering_strategy);

    if (prop.lowering_strategy) attrs.append("lowering_strategy", prop.lowering_strategy);
}

::llvm::LogicalResult ApplyLowerTransposePatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAvx2LoweringStrategyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(attr, "avx2_lowering_strategy", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getLoweringStrategyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps3(attr, "lowering_strategy", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerTransposePatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.avx2_lowering_strategy)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.lowering_strategy)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyLowerTransposePatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.avx2_lowering_strategy);

  writer.writeOptionalAttribute(prop.lowering_strategy);
}

::mlir::vector::VectorTransposeLowering ApplyLowerTransposePatternsOp::getLoweringStrategy() {
  auto attr = getLoweringStrategyAttr();
  return attr.getValue();
}

bool ApplyLowerTransposePatternsOp::getAvx2LoweringStrategy() {
  auto attr = getAvx2LoweringStrategyAttr();
  return attr.getValue();
}

void ApplyLowerTransposePatternsOp::setLoweringStrategy(::mlir::vector::VectorTransposeLowering attrValue) {
  getProperties().lowering_strategy = ::mlir::vector::VectorTransposeLoweringAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void ApplyLowerTransposePatternsOp::setAvx2LoweringStrategy(bool attrValue) {
  getProperties().avx2_lowering_strategy = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void ApplyLowerTransposePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransposeLoweringAttr lowering_strategy, ::mlir::BoolAttr avx2_lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
  if (avx2_lowering_strategy) {
    odsState.getOrAddProperties<Properties>().avx2_lowering_strategy = avx2_lowering_strategy;
  }
}

void ApplyLowerTransposePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransposeLoweringAttr lowering_strategy, ::mlir::BoolAttr avx2_lowering_strategy) {
  if (lowering_strategy) {
    odsState.getOrAddProperties<Properties>().lowering_strategy = lowering_strategy;
  }
  if (avx2_lowering_strategy) {
    odsState.getOrAddProperties<Properties>().avx2_lowering_strategy = avx2_lowering_strategy;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerTransposePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransposeLowering lowering_strategy, bool avx2_lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
  odsState.getOrAddProperties<Properties>().avx2_lowering_strategy = odsBuilder.getBoolAttr(avx2_lowering_strategy);
}

void ApplyLowerTransposePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransposeLowering lowering_strategy, bool avx2_lowering_strategy) {
  odsState.getOrAddProperties<Properties>().lowering_strategy = ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), lowering_strategy);
  odsState.getOrAddProperties<Properties>().avx2_lowering_strategy = odsBuilder.getBoolAttr(avx2_lowering_strategy);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyLowerTransposePatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ApplyLowerTransposePatternsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void ApplyLowerTransposePatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.lowering_strategy)
    properties.lowering_strategy = ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), vector::VectorTransposeLowering::EltWise);
  if (!properties.avx2_lowering_strategy)
    properties.avx2_lowering_strategy = odsBuilder.getBoolAttr(false);
}

::llvm::LogicalResult ApplyLowerTransposePatternsOp::verifyInvariantsImpl() {
  auto tblgen_avx2_lowering_strategy = getProperties().avx2_lowering_strategy; (void)tblgen_avx2_lowering_strategy;
  auto tblgen_lowering_strategy = getProperties().lowering_strategy; (void)tblgen_lowering_strategy;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps3(*this, tblgen_lowering_strategy, "lowering_strategy")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(*this, tblgen_avx2_lowering_strategy, "avx2_lowering_strategy")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult ApplyLowerTransposePatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyLowerTransposePatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::vector::VectorTransposeLoweringAttr lowering_strategyAttr;
  ::mlir::BoolAttr avx2_lowering_strategyAttr;
  bool lowering_strategyClause = false;
  bool avx2_lowering_strategyClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("lowering_strategy"))) {

  if (lowering_strategyClause) {
    return parser.emitError(parser.getNameLoc())
          << "`lowering_strategy` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  lowering_strategyClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"eltwise","flat_transpose","shuffle_1d","shuffle_16x16"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "lowering_strategy", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'lowering_strategy' [eltwise, flat_transpose, shuffle_1d, shuffle_16x16]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorTransposeLowering(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "lowering_strategy attribute specification: \"" << attrStr << '"';;

      lowering_strategyAttr = ::mlir::vector::VectorTransposeLoweringAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<ApplyLowerTransposePatternsOp::Properties>().lowering_strategy = lowering_strategyAttr;
    }
  }
    } else if (succeeded(parser.parseOptionalKeyword("avx2_lowering_strategy"))) {

  if (avx2_lowering_strategyClause) {
    return parser.emitError(parser.getNameLoc())
          << "`avx2_lowering_strategy` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  avx2_lowering_strategyClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(avx2_lowering_strategyAttr, parser.getBuilder().getIntegerType(1))) {
    return ::mlir::failure();
  }
  if (avx2_lowering_strategyAttr) result.getOrAddProperties<ApplyLowerTransposePatternsOp::Properties>().avx2_lowering_strategy = avx2_lowering_strategyAttr;
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyLowerTransposePatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || (getLoweringStrategyAttr() && getLoweringStrategyAttr() != ::mlir::vector::VectorTransposeLoweringAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), vector::VectorTransposeLowering::EltWise))) {
  _odsPrinter << ' ' << "lowering_strategy";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';

  {
    auto caseValue = getLoweringStrategy();
    auto caseValueStr = stringifyVectorTransposeLowering(caseValue);
    _odsPrinter << caseValueStr;
  }
  }
  if (false || (getAvx2LoweringStrategyAttr() && getAvx2LoweringStrategyAttr() != ::mlir::OpBuilder((*this)->getContext()).getBoolAttr(false))) {
  _odsPrinter << ' ' << "avx2_lowering_strategy";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getAvx2LoweringStrategyAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("lowering_strategy");
  elidedAttrs.push_back("avx2_lowering_strategy");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getLoweringStrategyAttr();
     if(attr && (attr == ::mlir::vector::VectorTransposeLoweringAttr::get(odsBuilder.getContext(), vector::VectorTransposeLowering::EltWise)))
       elidedAttrs.push_back("lowering_strategy");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAvx2LoweringStrategyAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("avx2_lowering_strategy");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLowerTransposePatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyMaterializeMasksPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyMaterializeMasksPatternsOpAdaptor::ApplyMaterializeMasksPatternsOpAdaptor(ApplyMaterializeMasksPatternsOp op) : ApplyMaterializeMasksPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyMaterializeMasksPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyMaterializeMasksPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyMaterializeMasksPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyMaterializeMasksPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyMaterializeMasksPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyMaterializeMasksPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyMaterializeMasksPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyMaterializeMasksPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyMaterializeMasksPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyRankReducingSubviewPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyRankReducingSubviewPatternsOpAdaptor::ApplyRankReducingSubviewPatternsOpAdaptor(ApplyRankReducingSubviewPatternsOp op) : ApplyRankReducingSubviewPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyRankReducingSubviewPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyRankReducingSubviewPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyRankReducingSubviewPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyRankReducingSubviewPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyRankReducingSubviewPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyRankReducingSubviewPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyRankReducingSubviewPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyRankReducingSubviewPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyRankReducingSubviewPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyRewriteNarrowTypePatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyRewriteNarrowTypePatternsOpAdaptor::ApplyRewriteNarrowTypePatternsOpAdaptor(ApplyRewriteNarrowTypePatternsOp op) : ApplyRewriteNarrowTypePatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyRewriteNarrowTypePatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyRewriteNarrowTypePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyRewriteNarrowTypePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyRewriteNarrowTypePatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyRewriteNarrowTypePatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyRewriteNarrowTypePatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyRewriteNarrowTypePatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyRewriteNarrowTypePatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyRewriteNarrowTypePatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplySplitTransferFullPartialPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase::ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase(ApplySplitTransferFullPartialPatternsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::vector::VectorTransferSplitAttr ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase::getSplitTransferStrategyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::vector::VectorTransferSplitAttr>(getProperties().split_transfer_strategy);
  return attr;
}

::mlir::vector::VectorTransferSplit ApplySplitTransferFullPartialPatternsOpGenericAdaptorBase::getSplitTransferStrategy() {
  auto attr = getSplitTransferStrategyAttr();
  return attr.getValue();
}

} // namespace detail
ApplySplitTransferFullPartialPatternsOpAdaptor::ApplySplitTransferFullPartialPatternsOpAdaptor(ApplySplitTransferFullPartialPatternsOp op) : ApplySplitTransferFullPartialPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplySplitTransferFullPartialPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_split_transfer_strategy = getProperties().split_transfer_strategy; (void)tblgen_split_transfer_strategy;

  if (tblgen_split_transfer_strategy && !((::llvm::isa<::mlir::vector::VectorTransferSplitAttr>(tblgen_split_transfer_strategy))))
    return emitError(loc, "'transform.apply_patterns.vector.split_transfer_full_partial' op ""attribute 'split_transfer_strategy' failed to satisfy constraint: control the splitting of `vector.transfer` operations into in-bounds and out-of-bounds variants.");
  return ::mlir::success();
}

::llvm::LogicalResult ApplySplitTransferFullPartialPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.split_transfer_strategy;
       auto attr = dict.get("split_transfer_strategy");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `split_transfer_strategy` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplySplitTransferFullPartialPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.split_transfer_strategy;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("split_transfer_strategy",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplySplitTransferFullPartialPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.split_transfer_strategy.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplySplitTransferFullPartialPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "split_transfer_strategy")
      return prop.split_transfer_strategy;
  return std::nullopt;
}

void ApplySplitTransferFullPartialPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "split_transfer_strategy") {
       prop.split_transfer_strategy = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.split_transfer_strategy)>>(value);
       return;
    }
}

void ApplySplitTransferFullPartialPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.split_transfer_strategy) attrs.append("split_transfer_strategy", prop.split_transfer_strategy);
}

::llvm::LogicalResult ApplySplitTransferFullPartialPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getSplitTransferStrategyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps5(attr, "split_transfer_strategy", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ApplySplitTransferFullPartialPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.split_transfer_strategy)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplySplitTransferFullPartialPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.split_transfer_strategy);
}

::mlir::vector::VectorTransferSplit ApplySplitTransferFullPartialPatternsOp::getSplitTransferStrategy() {
  auto attr = getSplitTransferStrategyAttr();
  return attr.getValue();
}

void ApplySplitTransferFullPartialPatternsOp::setSplitTransferStrategy(::mlir::vector::VectorTransferSplit attrValue) {
  getProperties().split_transfer_strategy = ::mlir::vector::VectorTransferSplitAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void ApplySplitTransferFullPartialPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransferSplitAttr split_transfer_strategy) {
  if (split_transfer_strategy) {
    odsState.getOrAddProperties<Properties>().split_transfer_strategy = split_transfer_strategy;
  }
}

void ApplySplitTransferFullPartialPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransferSplitAttr split_transfer_strategy) {
  if (split_transfer_strategy) {
    odsState.getOrAddProperties<Properties>().split_transfer_strategy = split_transfer_strategy;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplySplitTransferFullPartialPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::vector::VectorTransferSplit split_transfer_strategy) {
  odsState.getOrAddProperties<Properties>().split_transfer_strategy = ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), split_transfer_strategy);
}

void ApplySplitTransferFullPartialPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::vector::VectorTransferSplit split_transfer_strategy) {
  odsState.getOrAddProperties<Properties>().split_transfer_strategy = ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), split_transfer_strategy);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplySplitTransferFullPartialPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ApplySplitTransferFullPartialPatternsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void ApplySplitTransferFullPartialPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.split_transfer_strategy)
    properties.split_transfer_strategy = ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), vector::VectorTransferSplit::LinalgCopy);
}

::llvm::LogicalResult ApplySplitTransferFullPartialPatternsOp::verifyInvariantsImpl() {
  auto tblgen_split_transfer_strategy = getProperties().split_transfer_strategy; (void)tblgen_split_transfer_strategy;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps5(*this, tblgen_split_transfer_strategy, "split_transfer_strategy")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult ApplySplitTransferFullPartialPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplySplitTransferFullPartialPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::vector::VectorTransferSplitAttr split_transfer_strategyAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("split_transfer_strategy"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"none"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "split_transfer_strategy", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'split_transfer_strategy' [none, vector-transfer, linalg-copy, force-in-bounds]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::vector::symbolizeVectorTransferSplit(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "split_transfer_strategy attribute specification: \"" << attrStr << '"';;

      split_transfer_strategyAttr = ::mlir::vector::VectorTransferSplitAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<ApplySplitTransferFullPartialPatternsOp::Properties>().split_transfer_strategy = split_transfer_strategyAttr;
    }
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplySplitTransferFullPartialPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getSplitTransferStrategyAttr() && getSplitTransferStrategyAttr() != ::mlir::vector::VectorTransferSplitAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), vector::VectorTransferSplit::LinalgCopy)) {
    _odsPrinter << ' ' << "split_transfer_strategy";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';

    {
      auto caseValue = getSplitTransferStrategy();
      auto caseValueStr = stringifyVectorTransferSplit(caseValue);
      switch (caseValue) {
      case ::mlir::vector::VectorTransferSplit::None:
        _odsPrinter << caseValueStr;
        break;
      default:
        _odsPrinter << '"' << caseValueStr << '"';
        break;
      }
    }
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("split_transfer_strategy");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSplitTransferStrategyAttr();
     if(attr && (attr == ::mlir::vector::VectorTransferSplitAttr::get(odsBuilder.getContext(), vector::VectorTransferSplit::LinalgCopy)))
       elidedAttrs.push_back("split_transfer_strategy");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplySplitTransferFullPartialPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyTransferPermutationPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyTransferPermutationPatternsOpAdaptor::ApplyTransferPermutationPatternsOpAdaptor(ApplyTransferPermutationPatternsOp op) : ApplyTransferPermutationPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyTransferPermutationPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyTransferPermutationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyTransferPermutationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyTransferPermutationPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyTransferPermutationPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyTransferPermutationPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyTransferPermutationPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyTransferPermutationPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyTransferPermutationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyTransferToScfPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyTransferToScfPatternsOpGenericAdaptorBase::ApplyTransferToScfPatternsOpGenericAdaptorBase(ApplyTransferToScfPatternsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::IntegerAttr ApplyTransferToScfPatternsOpGenericAdaptorBase::getMaxTransferRankAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().max_transfer_rank);
  return attr;
}

uint64_t ApplyTransferToScfPatternsOpGenericAdaptorBase::getMaxTransferRank() {
  auto attr = getMaxTransferRankAttr();
  return attr.getValue().getZExtValue();
}

::mlir::BoolAttr ApplyTransferToScfPatternsOpGenericAdaptorBase::getFullUnrollAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().full_unroll);
  return attr;
}

bool ApplyTransferToScfPatternsOpGenericAdaptorBase::getFullUnroll() {
  auto attr = getFullUnrollAttr();
  return attr.getValue();
}

} // namespace detail
ApplyTransferToScfPatternsOpAdaptor::ApplyTransferToScfPatternsOpAdaptor(ApplyTransferToScfPatternsOp op) : ApplyTransferToScfPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyTransferToScfPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_full_unroll = getProperties().full_unroll; (void)tblgen_full_unroll;
  auto tblgen_max_transfer_rank = getProperties().max_transfer_rank; (void)tblgen_max_transfer_rank;

  if (tblgen_max_transfer_rank && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_max_transfer_rank))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_max_transfer_rank).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.apply_patterns.vector.transfer_to_scf' op ""attribute 'max_transfer_rank' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_full_unroll && !((::llvm::isa<::mlir::BoolAttr>(tblgen_full_unroll))))
    return emitError(loc, "'transform.apply_patterns.vector.transfer_to_scf' op ""attribute 'full_unroll' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

::llvm::LogicalResult ApplyTransferToScfPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.full_unroll;
       auto attr = dict.get("full_unroll");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `full_unroll` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.max_transfer_rank;
       auto attr = dict.get("max_transfer_rank");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `max_transfer_rank` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyTransferToScfPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.full_unroll;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("full_unroll",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.max_transfer_rank;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("max_transfer_rank",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyTransferToScfPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.full_unroll.getAsOpaquePointer()), 
    llvm::hash_value(prop.max_transfer_rank.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyTransferToScfPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "full_unroll")
      return prop.full_unroll;

    if (name == "max_transfer_rank")
      return prop.max_transfer_rank;
  return std::nullopt;
}

void ApplyTransferToScfPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "full_unroll") {
       prop.full_unroll = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.full_unroll)>>(value);
       return;
    }

    if (name == "max_transfer_rank") {
       prop.max_transfer_rank = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.max_transfer_rank)>>(value);
       return;
    }
}

void ApplyTransferToScfPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.full_unroll) attrs.append("full_unroll", prop.full_unroll);

    if (prop.max_transfer_rank) attrs.append("max_transfer_rank", prop.max_transfer_rank);
}

::llvm::LogicalResult ApplyTransferToScfPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFullUnrollAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(attr, "full_unroll", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMaxTransferRankAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps2(attr, "max_transfer_rank", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ApplyTransferToScfPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.full_unroll)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.max_transfer_rank)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyTransferToScfPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.full_unroll);

  writer.writeOptionalAttribute(prop.max_transfer_rank);
}

uint64_t ApplyTransferToScfPatternsOp::getMaxTransferRank() {
  auto attr = getMaxTransferRankAttr();
  return attr.getValue().getZExtValue();
}

bool ApplyTransferToScfPatternsOp::getFullUnroll() {
  auto attr = getFullUnrollAttr();
  return attr.getValue();
}

void ApplyTransferToScfPatternsOp::setMaxTransferRank(uint64_t attrValue) {
  getProperties().max_transfer_rank = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void ApplyTransferToScfPatternsOp::setFullUnroll(bool attrValue) {
  getProperties().full_unroll = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void ApplyTransferToScfPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr max_transfer_rank, ::mlir::BoolAttr full_unroll) {
  if (max_transfer_rank) {
    odsState.getOrAddProperties<Properties>().max_transfer_rank = max_transfer_rank;
  }
  if (full_unroll) {
    odsState.getOrAddProperties<Properties>().full_unroll = full_unroll;
  }
}

void ApplyTransferToScfPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr max_transfer_rank, ::mlir::BoolAttr full_unroll) {
  if (max_transfer_rank) {
    odsState.getOrAddProperties<Properties>().max_transfer_rank = max_transfer_rank;
  }
  if (full_unroll) {
    odsState.getOrAddProperties<Properties>().full_unroll = full_unroll;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyTransferToScfPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint64_t max_transfer_rank, bool full_unroll) {
  odsState.getOrAddProperties<Properties>().max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), max_transfer_rank);
  odsState.getOrAddProperties<Properties>().full_unroll = odsBuilder.getBoolAttr(full_unroll);
}

void ApplyTransferToScfPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint64_t max_transfer_rank, bool full_unroll) {
  odsState.getOrAddProperties<Properties>().max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), max_transfer_rank);
  odsState.getOrAddProperties<Properties>().full_unroll = odsBuilder.getBoolAttr(full_unroll);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyTransferToScfPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ApplyTransferToScfPatternsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void ApplyTransferToScfPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.max_transfer_rank)
    properties.max_transfer_rank = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1);
  if (!properties.full_unroll)
    properties.full_unroll = odsBuilder.getBoolAttr(false);
}

::llvm::LogicalResult ApplyTransferToScfPatternsOp::verifyInvariantsImpl() {
  auto tblgen_full_unroll = getProperties().full_unroll; (void)tblgen_full_unroll;
  auto tblgen_max_transfer_rank = getProperties().max_transfer_rank; (void)tblgen_max_transfer_rank;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps2(*this, tblgen_max_transfer_rank, "max_transfer_rank")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(*this, tblgen_full_unroll, "full_unroll")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult ApplyTransferToScfPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyTransferToScfPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::IntegerAttr max_transfer_rankAttr;
  ::mlir::BoolAttr full_unrollAttr;
  bool max_transfer_rankClause = false;
  bool full_unrollClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("max_transfer_rank"))) {

  if (max_transfer_rankClause) {
    return parser.emitError(parser.getNameLoc())
          << "`max_transfer_rank` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  max_transfer_rankClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(max_transfer_rankAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (max_transfer_rankAttr) result.getOrAddProperties<ApplyTransferToScfPatternsOp::Properties>().max_transfer_rank = max_transfer_rankAttr;
    } else if (succeeded(parser.parseOptionalKeyword("full_unroll"))) {

  if (full_unrollClause) {
    return parser.emitError(parser.getNameLoc())
          << "`full_unroll` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  full_unrollClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(full_unrollAttr, parser.getBuilder().getIntegerType(1))) {
    return ::mlir::failure();
  }
  if (full_unrollAttr) result.getOrAddProperties<ApplyTransferToScfPatternsOp::Properties>().full_unroll = full_unrollAttr;
    } else  {
    break;
  }
}
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyTransferToScfPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || (getMaxTransferRankAttr() && getMaxTransferRankAttr() != ::mlir::OpBuilder((*this)->getContext()).getIntegerAttr(::mlir::OpBuilder((*this)->getContext()).getIntegerType(64), 1))) {
  _odsPrinter << ' ' << "max_transfer_rank";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMaxTransferRankAttr());
  }
  if (false || (getFullUnrollAttr() && getFullUnrollAttr() != ::mlir::OpBuilder((*this)->getContext()).getBoolAttr(false))) {
  _odsPrinter << ' ' << "full_unroll";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getFullUnrollAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("max_transfer_rank");
  elidedAttrs.push_back("full_unroll");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMaxTransferRankAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1)))
       elidedAttrs.push_back("max_transfer_rank");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFullUnrollAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("full_unroll");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyTransferToScfPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyVectorReductionToContractPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyVectorReductionToContractPatternsOpAdaptor::ApplyVectorReductionToContractPatternsOpAdaptor(ApplyVectorReductionToContractPatternsOp op) : ApplyVectorReductionToContractPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyVectorReductionToContractPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyVectorReductionToContractPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyVectorReductionToContractPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyVectorReductionToContractPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyVectorReductionToContractPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyVectorReductionToContractPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyVectorReductionToContractPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyVectorReductionToContractPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyVectorReductionToContractPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyVectorToLLVMConversionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyVectorToLLVMConversionPatternsOpGenericAdaptorBase::ApplyVectorToLLVMConversionPatternsOpGenericAdaptorBase(ApplyVectorToLLVMConversionPatternsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::BoolAttr ApplyVectorToLLVMConversionPatternsOpGenericAdaptorBase::getReassociateFpReductionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().reassociate_fp_reductions);
  return attr;
}

bool ApplyVectorToLLVMConversionPatternsOpGenericAdaptorBase::getReassociateFpReductions() {
  auto attr = getReassociateFpReductionsAttr();
  return attr.getValue();
}

::mlir::BoolAttr ApplyVectorToLLVMConversionPatternsOpGenericAdaptorBase::getForce_32bitVectorIndicesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().force_32bit_vector_indices);
  return attr;
}

bool ApplyVectorToLLVMConversionPatternsOpGenericAdaptorBase::getForce_32bitVectorIndices() {
  auto attr = getForce_32bitVectorIndicesAttr();
  return attr.getValue();
}

} // namespace detail
ApplyVectorToLLVMConversionPatternsOpAdaptor::ApplyVectorToLLVMConversionPatternsOpAdaptor(ApplyVectorToLLVMConversionPatternsOp op) : ApplyVectorToLLVMConversionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyVectorToLLVMConversionPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_force_32bit_vector_indices = getProperties().force_32bit_vector_indices; (void)tblgen_force_32bit_vector_indices;
  auto tblgen_reassociate_fp_reductions = getProperties().reassociate_fp_reductions; (void)tblgen_reassociate_fp_reductions;

  if (tblgen_reassociate_fp_reductions && !((::llvm::isa<::mlir::BoolAttr>(tblgen_reassociate_fp_reductions))))
    return emitError(loc, "'transform.apply_conversion_patterns.vector.vector_to_llvm' op ""attribute 'reassociate_fp_reductions' failed to satisfy constraint: bool attribute");

  if (tblgen_force_32bit_vector_indices && !((::llvm::isa<::mlir::BoolAttr>(tblgen_force_32bit_vector_indices))))
    return emitError(loc, "'transform.apply_conversion_patterns.vector.vector_to_llvm' op ""attribute 'force_32bit_vector_indices' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

::llvm::LogicalResult ApplyVectorToLLVMConversionPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.force_32bit_vector_indices;
       auto attr = dict.get("force_32bit_vector_indices");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `force_32bit_vector_indices` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.reassociate_fp_reductions;
       auto attr = dict.get("reassociate_fp_reductions");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reassociate_fp_reductions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyVectorToLLVMConversionPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.force_32bit_vector_indices;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("force_32bit_vector_indices",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reassociate_fp_reductions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reassociate_fp_reductions",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyVectorToLLVMConversionPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.force_32bit_vector_indices.getAsOpaquePointer()), 
    llvm::hash_value(prop.reassociate_fp_reductions.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyVectorToLLVMConversionPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "force_32bit_vector_indices")
      return prop.force_32bit_vector_indices;

    if (name == "reassociate_fp_reductions")
      return prop.reassociate_fp_reductions;
  return std::nullopt;
}

void ApplyVectorToLLVMConversionPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "force_32bit_vector_indices") {
       prop.force_32bit_vector_indices = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.force_32bit_vector_indices)>>(value);
       return;
    }

    if (name == "reassociate_fp_reductions") {
       prop.reassociate_fp_reductions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reassociate_fp_reductions)>>(value);
       return;
    }
}

void ApplyVectorToLLVMConversionPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.force_32bit_vector_indices) attrs.append("force_32bit_vector_indices", prop.force_32bit_vector_indices);

    if (prop.reassociate_fp_reductions) attrs.append("reassociate_fp_reductions", prop.reassociate_fp_reductions);
}

::llvm::LogicalResult ApplyVectorToLLVMConversionPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getForce_32bitVectorIndicesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(attr, "force_32bit_vector_indices", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReassociateFpReductionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(attr, "reassociate_fp_reductions", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ApplyVectorToLLVMConversionPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.force_32bit_vector_indices)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.reassociate_fp_reductions)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyVectorToLLVMConversionPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.force_32bit_vector_indices);

  writer.writeOptionalAttribute(prop.reassociate_fp_reductions);
}

bool ApplyVectorToLLVMConversionPatternsOp::getReassociateFpReductions() {
  auto attr = getReassociateFpReductionsAttr();
  return attr.getValue();
}

bool ApplyVectorToLLVMConversionPatternsOp::getForce_32bitVectorIndices() {
  auto attr = getForce_32bitVectorIndicesAttr();
  return attr.getValue();
}

void ApplyVectorToLLVMConversionPatternsOp::setReassociateFpReductions(bool attrValue) {
  getProperties().reassociate_fp_reductions = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void ApplyVectorToLLVMConversionPatternsOp::setForce_32bitVectorIndices(bool attrValue) {
  getProperties().force_32bit_vector_indices = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void ApplyVectorToLLVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::BoolAttr reassociate_fp_reductions, ::mlir::BoolAttr force_32bit_vector_indices) {
  if (reassociate_fp_reductions) {
    odsState.getOrAddProperties<Properties>().reassociate_fp_reductions = reassociate_fp_reductions;
  }
  if (force_32bit_vector_indices) {
    odsState.getOrAddProperties<Properties>().force_32bit_vector_indices = force_32bit_vector_indices;
  }
}

void ApplyVectorToLLVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::BoolAttr reassociate_fp_reductions, ::mlir::BoolAttr force_32bit_vector_indices) {
  if (reassociate_fp_reductions) {
    odsState.getOrAddProperties<Properties>().reassociate_fp_reductions = reassociate_fp_reductions;
  }
  if (force_32bit_vector_indices) {
    odsState.getOrAddProperties<Properties>().force_32bit_vector_indices = force_32bit_vector_indices;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyVectorToLLVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, bool reassociate_fp_reductions, bool force_32bit_vector_indices) {
  odsState.getOrAddProperties<Properties>().reassociate_fp_reductions = odsBuilder.getBoolAttr(reassociate_fp_reductions);
  odsState.getOrAddProperties<Properties>().force_32bit_vector_indices = odsBuilder.getBoolAttr(force_32bit_vector_indices);
}

void ApplyVectorToLLVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, bool reassociate_fp_reductions, bool force_32bit_vector_indices) {
  odsState.getOrAddProperties<Properties>().reassociate_fp_reductions = odsBuilder.getBoolAttr(reassociate_fp_reductions);
  odsState.getOrAddProperties<Properties>().force_32bit_vector_indices = odsBuilder.getBoolAttr(force_32bit_vector_indices);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyVectorToLLVMConversionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ApplyVectorToLLVMConversionPatternsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void ApplyVectorToLLVMConversionPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.reassociate_fp_reductions)
    properties.reassociate_fp_reductions = odsBuilder.getBoolAttr(false);
  if (!properties.force_32bit_vector_indices)
    properties.force_32bit_vector_indices = odsBuilder.getBoolAttr(true);
}

::llvm::LogicalResult ApplyVectorToLLVMConversionPatternsOp::verifyInvariantsImpl() {
  auto tblgen_force_32bit_vector_indices = getProperties().force_32bit_vector_indices; (void)tblgen_force_32bit_vector_indices;
  auto tblgen_reassociate_fp_reductions = getProperties().reassociate_fp_reductions; (void)tblgen_reassociate_fp_reductions;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(*this, tblgen_reassociate_fp_reductions, "reassociate_fp_reductions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_VectorTransformOps4(*this, tblgen_force_32bit_vector_indices, "force_32bit_vector_indices")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult ApplyVectorToLLVMConversionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyVectorToLLVMConversionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyVectorToLLVMConversionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getReassociateFpReductionsAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("reassociate_fp_reductions");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getForce_32bitVectorIndicesAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("force_32bit_vector_indices");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyVectorToLLVMConversionPatternsOp)


#endif  // GET_OP_CLASSES

