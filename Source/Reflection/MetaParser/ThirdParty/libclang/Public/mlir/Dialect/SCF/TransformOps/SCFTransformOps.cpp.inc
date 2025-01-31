/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: SCFTransformOps.td                                                   *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyForLoopCanonicalizationPatternsOp,
::mlir::transform::ApplySCFStructuralConversionPatternsOp,
::mlir::transform::ApplySCFToControlFlowPatternsOp,
::mlir::transform::ForallToForOp,
::mlir::transform::ForallToParallelOp,
::mlir::transform::LoopCoalesceOp,
::mlir::transform::LoopFuseSiblingOp,
::mlir::transform::LoopOutlineOp,
::mlir::transform::LoopPeelOp,
::mlir::transform::LoopPipelineOp,
::mlir::transform::LoopPromoteIfOneIterationOp,
::mlir::transform::LoopUnrollAndJamOp,
::mlir::transform::LoopUnrollOp,
::mlir::transform::TakeAssumedBranchOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_SCFTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_SCFTransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_SCFTransformOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "scf.for")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to scf.for operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SCFTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SCFTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SCFTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getValue().isStrictlyPositive()))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SCFTransformOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_SCFTransformOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_SCFTransformOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyForLoopCanonicalizationPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyForLoopCanonicalizationPatternsOpAdaptor::ApplyForLoopCanonicalizationPatternsOpAdaptor(ApplyForLoopCanonicalizationPatternsOp op) : ApplyForLoopCanonicalizationPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyForLoopCanonicalizationPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyForLoopCanonicalizationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyForLoopCanonicalizationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyForLoopCanonicalizationPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyForLoopCanonicalizationPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyForLoopCanonicalizationPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyForLoopCanonicalizationPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyForLoopCanonicalizationPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyForLoopCanonicalizationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplySCFStructuralConversionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplySCFStructuralConversionPatternsOpAdaptor::ApplySCFStructuralConversionPatternsOpAdaptor(ApplySCFStructuralConversionPatternsOp op) : ApplySCFStructuralConversionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplySCFStructuralConversionPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplySCFStructuralConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplySCFStructuralConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplySCFStructuralConversionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplySCFStructuralConversionPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplySCFStructuralConversionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplySCFStructuralConversionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplySCFStructuralConversionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplySCFStructuralConversionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplySCFToControlFlowPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplySCFToControlFlowPatternsOpAdaptor::ApplySCFToControlFlowPatternsOpAdaptor(ApplySCFToControlFlowPatternsOp op) : ApplySCFToControlFlowPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplySCFToControlFlowPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplySCFToControlFlowPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplySCFToControlFlowPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplySCFToControlFlowPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplySCFToControlFlowPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplySCFToControlFlowPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplySCFToControlFlowPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplySCFToControlFlowPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplySCFToControlFlowPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ForallToForOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ForallToForOpAdaptor::ForallToForOpAdaptor(ForallToForOp op) : ForallToForOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ForallToForOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ForallToForOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

void ForallToForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void ForallToForOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ForallToForOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult ForallToForOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ForallToForOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ForallToForOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ForallToForOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ForallToParallelOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ForallToParallelOpAdaptor::ForallToParallelOpAdaptor(ForallToParallelOp op) : ForallToParallelOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ForallToParallelOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ForallToParallelOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

void ForallToParallelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void ForallToParallelOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ForallToParallelOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult ForallToParallelOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ForallToParallelOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ForallToParallelOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ForallToParallelOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopCoalesceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
LoopCoalesceOpAdaptor::LoopCoalesceOpAdaptor(LoopCoalesceOp op) : LoopCoalesceOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult LoopCoalesceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void LoopCoalesceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void LoopCoalesceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopCoalesceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult LoopCoalesceOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult LoopCoalesceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopCoalesceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> transformedTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType target__transformed_functionType;
  if (parser.parseType(target__transformed_functionType))
    return ::mlir::failure();
  targetTypes = target__transformed_functionType.getInputs();
  transformedTypes = target__transformed_functionType.getResults();
  result.addTypes(transformedTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopCoalesceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), ::llvm::ArrayRef<::mlir::Type>(getTransformed().getType()));
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopCoalesceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopFuseSiblingOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
LoopFuseSiblingOpAdaptor::LoopFuseSiblingOpAdaptor(LoopFuseSiblingOp op) : LoopFuseSiblingOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult LoopFuseSiblingOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void LoopFuseSiblingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type fused_loop, ::mlir::Value target, ::mlir::Value source) {
  odsState.addOperands(target);
  odsState.addOperands(source);
  odsState.addTypes(fused_loop);
}

void LoopFuseSiblingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::Value source) {
  odsState.addOperands(target);
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopFuseSiblingOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult LoopFuseSiblingOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult LoopFuseSiblingOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopFuseSiblingOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand sourceRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sourceOperands(&sourceRawOperand, 1);  ::llvm::SMLoc sourceOperandsLoc;
  (void)sourceOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  sourceOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sourceRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(targetOperands, sourceOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopFuseSiblingOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter << getSource();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopFuseSiblingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopOutlineOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoopOutlineOpGenericAdaptorBase::LoopOutlineOpGenericAdaptorBase(LoopOutlineOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::llvm::StringRef LoopOutlineOpGenericAdaptorBase::getFuncName() {
  auto attr = getFuncNameAttr();
  return attr.getValue();
}

} // namespace detail
LoopOutlineOpAdaptor::LoopOutlineOpAdaptor(LoopOutlineOp op) : LoopOutlineOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult LoopOutlineOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_func_name = getProperties().func_name; (void)tblgen_func_name;
  if (!tblgen_func_name) return emitError(loc, "'transform.loop.outline' op ""requires attribute 'func_name'");

  if (tblgen_func_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_func_name))))
    return emitError(loc, "'transform.loop.outline' op ""attribute 'func_name' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

void LoopOutlineOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "function");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "call");
}

::llvm::LogicalResult LoopOutlineOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.func_name;
       auto attr = dict.get("func_name");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `func_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LoopOutlineOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.func_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("func_name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoopOutlineOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.func_name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoopOutlineOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "func_name")
      return prop.func_name;
  return std::nullopt;
}

void LoopOutlineOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "func_name") {
       prop.func_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.func_name)>>(value);
       return;
    }
}

void LoopOutlineOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.func_name) attrs.append("func_name", prop.func_name);
}

::llvm::LogicalResult LoopOutlineOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFuncNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps0(attr, "func_name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult LoopOutlineOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.func_name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopOutlineOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.func_name);
}

::llvm::StringRef LoopOutlineOp::getFuncName() {
  auto attr = getFuncNameAttr();
  return attr.getValue();
}

void LoopOutlineOp::setFuncName(::llvm::StringRef attrValue) {
  getProperties().func_name = ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue);
}

void LoopOutlineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type function, ::mlir::Type call, ::mlir::Value target, ::mlir::StringAttr func_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().func_name = func_name;
  odsState.addTypes(function);
  odsState.addTypes(call);
}

void LoopOutlineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::StringAttr func_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().func_name = func_name;
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopOutlineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type function, ::mlir::Type call, ::mlir::Value target, ::llvm::StringRef func_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().func_name = odsBuilder.getStringAttr(func_name);
  odsState.addTypes(function);
  odsState.addTypes(call);
}

void LoopOutlineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::StringRef func_name) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().func_name = odsBuilder.getStringAttr(func_name);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopOutlineOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<LoopOutlineOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult LoopOutlineOp::verifyInvariantsImpl() {
  auto tblgen_func_name = getProperties().func_name; (void)tblgen_func_name;
  if (!tblgen_func_name) return emitOpError("requires attribute 'func_name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps0(*this, tblgen_func_name, "func_name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult LoopOutlineOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopOutlineOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopOutlineOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopOutlineOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopPeelOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoopPeelOpGenericAdaptorBase::LoopPeelOpGenericAdaptorBase(LoopPeelOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::BoolAttr LoopPeelOpGenericAdaptorBase::getPeelFrontAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().peel_front);
  return attr;
}

bool LoopPeelOpGenericAdaptorBase::getPeelFront() {
  auto attr = getPeelFrontAttr();
  return attr.getValue();
}

::mlir::BoolAttr LoopPeelOpGenericAdaptorBase::getFailIfAlreadyDivisibleAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().fail_if_already_divisible);
  return attr;
}

bool LoopPeelOpGenericAdaptorBase::getFailIfAlreadyDivisible() {
  auto attr = getFailIfAlreadyDivisibleAttr();
  return attr.getValue();
}

} // namespace detail
LoopPeelOpAdaptor::LoopPeelOpAdaptor(LoopPeelOp op) : LoopPeelOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult LoopPeelOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fail_if_already_divisible = getProperties().fail_if_already_divisible; (void)tblgen_fail_if_already_divisible;
  auto tblgen_peel_front = getProperties().peel_front; (void)tblgen_peel_front;

  if (tblgen_peel_front && !((::llvm::isa<::mlir::BoolAttr>(tblgen_peel_front))))
    return emitError(loc, "'transform.loop.peel' op ""attribute 'peel_front' failed to satisfy constraint: bool attribute");

  if (tblgen_fail_if_already_divisible && !((::llvm::isa<::mlir::BoolAttr>(tblgen_fail_if_already_divisible))))
    return emitError(loc, "'transform.loop.peel' op ""attribute 'fail_if_already_divisible' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

void LoopPeelOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "peeled_loop");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "remainder_loop");
}

::llvm::LogicalResult LoopPeelOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.fail_if_already_divisible;
       auto attr = dict.get("fail_if_already_divisible");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `fail_if_already_divisible` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.peel_front;
       auto attr = dict.get("peel_front");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `peel_front` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LoopPeelOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fail_if_already_divisible;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fail_if_already_divisible",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.peel_front;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("peel_front",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoopPeelOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fail_if_already_divisible.getAsOpaquePointer()), 
    llvm::hash_value(prop.peel_front.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoopPeelOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fail_if_already_divisible")
      return prop.fail_if_already_divisible;

    if (name == "peel_front")
      return prop.peel_front;
  return std::nullopt;
}

void LoopPeelOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fail_if_already_divisible") {
       prop.fail_if_already_divisible = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fail_if_already_divisible)>>(value);
       return;
    }

    if (name == "peel_front") {
       prop.peel_front = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.peel_front)>>(value);
       return;
    }
}

void LoopPeelOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fail_if_already_divisible) attrs.append("fail_if_already_divisible", prop.fail_if_already_divisible);

    if (prop.peel_front) attrs.append("peel_front", prop.peel_front);
}

::llvm::LogicalResult LoopPeelOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFailIfAlreadyDivisibleAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps1(attr, "fail_if_already_divisible", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPeelFrontAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps1(attr, "peel_front", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult LoopPeelOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fail_if_already_divisible)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.peel_front)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopPeelOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fail_if_already_divisible);

  writer.writeOptionalAttribute(prop.peel_front);
}

bool LoopPeelOp::getPeelFront() {
  auto attr = getPeelFrontAttr();
  return attr.getValue();
}

bool LoopPeelOp::getFailIfAlreadyDivisible() {
  auto attr = getFailIfAlreadyDivisibleAttr();
  return attr.getValue();
}

void LoopPeelOp::setPeelFront(bool attrValue) {
  getProperties().peel_front = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void LoopPeelOp::setFailIfAlreadyDivisible(bool attrValue) {
  getProperties().fail_if_already_divisible = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void LoopPeelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type peeled_loop, ::mlir::Type remainder_loop, ::mlir::Value target, ::mlir::BoolAttr peel_front, ::mlir::BoolAttr fail_if_already_divisible) {
  odsState.addOperands(target);
  if (peel_front) {
    odsState.getOrAddProperties<Properties>().peel_front = peel_front;
  }
  if (fail_if_already_divisible) {
    odsState.getOrAddProperties<Properties>().fail_if_already_divisible = fail_if_already_divisible;
  }
  odsState.addTypes(peeled_loop);
  odsState.addTypes(remainder_loop);
}

void LoopPeelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::BoolAttr peel_front, ::mlir::BoolAttr fail_if_already_divisible) {
  odsState.addOperands(target);
  if (peel_front) {
    odsState.getOrAddProperties<Properties>().peel_front = peel_front;
  }
  if (fail_if_already_divisible) {
    odsState.getOrAddProperties<Properties>().fail_if_already_divisible = fail_if_already_divisible;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopPeelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type peeled_loop, ::mlir::Type remainder_loop, ::mlir::Value target, bool peel_front, bool fail_if_already_divisible) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().peel_front = odsBuilder.getBoolAttr(peel_front);
  odsState.getOrAddProperties<Properties>().fail_if_already_divisible = odsBuilder.getBoolAttr(fail_if_already_divisible);
  odsState.addTypes(peeled_loop);
  odsState.addTypes(remainder_loop);
}

void LoopPeelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, bool peel_front, bool fail_if_already_divisible) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().peel_front = odsBuilder.getBoolAttr(peel_front);
  odsState.getOrAddProperties<Properties>().fail_if_already_divisible = odsBuilder.getBoolAttr(fail_if_already_divisible);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopPeelOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<LoopPeelOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void LoopPeelOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.peel_front)
    properties.peel_front = odsBuilder.getBoolAttr(false);
  if (!properties.fail_if_already_divisible)
    properties.fail_if_already_divisible = odsBuilder.getBoolAttr(false);
}

::llvm::LogicalResult LoopPeelOp::verifyInvariantsImpl() {
  auto tblgen_fail_if_already_divisible = getProperties().fail_if_already_divisible; (void)tblgen_fail_if_already_divisible;
  auto tblgen_peel_front = getProperties().peel_front; (void)tblgen_peel_front;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps1(*this, tblgen_peel_front, "peel_front")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps1(*this, tblgen_fail_if_already_divisible, "fail_if_already_divisible")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult LoopPeelOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopPeelOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopPeelOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPeelFrontAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("peel_front");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFailIfAlreadyDivisibleAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("fail_if_already_divisible");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopPeelOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopPipelineOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoopPipelineOpGenericAdaptorBase::LoopPipelineOpGenericAdaptorBase(LoopPipelineOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::IntegerAttr LoopPipelineOpGenericAdaptorBase::getIterationIntervalAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().iteration_interval);
  return attr;
}

uint64_t LoopPipelineOpGenericAdaptorBase::getIterationInterval() {
  auto attr = getIterationIntervalAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr LoopPipelineOpGenericAdaptorBase::getReadLatencyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().read_latency);
  return attr;
}

uint64_t LoopPipelineOpGenericAdaptorBase::getReadLatency() {
  auto attr = getReadLatencyAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
LoopPipelineOpAdaptor::LoopPipelineOpAdaptor(LoopPipelineOp op) : LoopPipelineOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult LoopPipelineOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_iteration_interval = getProperties().iteration_interval; (void)tblgen_iteration_interval;
  auto tblgen_read_latency = getProperties().read_latency; (void)tblgen_read_latency;

  if (tblgen_iteration_interval && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_iteration_interval))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_iteration_interval).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.loop.pipeline' op ""attribute 'iteration_interval' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_read_latency && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_read_latency))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_read_latency).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.loop.pipeline' op ""attribute 'read_latency' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

::llvm::LogicalResult LoopPipelineOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.iteration_interval;
       auto attr = dict.get("iteration_interval");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `iteration_interval` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.read_latency;
       auto attr = dict.get("read_latency");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `read_latency` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LoopPipelineOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.iteration_interval;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("iteration_interval",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.read_latency;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("read_latency",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoopPipelineOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.iteration_interval.getAsOpaquePointer()), 
    llvm::hash_value(prop.read_latency.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoopPipelineOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "iteration_interval")
      return prop.iteration_interval;

    if (name == "read_latency")
      return prop.read_latency;
  return std::nullopt;
}

void LoopPipelineOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "iteration_interval") {
       prop.iteration_interval = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.iteration_interval)>>(value);
       return;
    }

    if (name == "read_latency") {
       prop.read_latency = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.read_latency)>>(value);
       return;
    }
}

void LoopPipelineOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.iteration_interval) attrs.append("iteration_interval", prop.iteration_interval);

    if (prop.read_latency) attrs.append("read_latency", prop.read_latency);
}

::llvm::LogicalResult LoopPipelineOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIterationIntervalAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps2(attr, "iteration_interval", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReadLatencyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps2(attr, "read_latency", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult LoopPipelineOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.iteration_interval)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.read_latency)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopPipelineOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.iteration_interval);

  writer.writeOptionalAttribute(prop.read_latency);
}

uint64_t LoopPipelineOp::getIterationInterval() {
  auto attr = getIterationIntervalAttr();
  return attr.getValue().getZExtValue();
}

uint64_t LoopPipelineOp::getReadLatency() {
  auto attr = getReadLatencyAttr();
  return attr.getValue().getZExtValue();
}

void LoopPipelineOp::setIterationInterval(uint64_t attrValue) {
  getProperties().iteration_interval = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void LoopPipelineOp::setReadLatency(uint64_t attrValue) {
  getProperties().read_latency = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void LoopPipelineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr iteration_interval, ::mlir::IntegerAttr read_latency) {
  odsState.addOperands(target);
  if (iteration_interval) {
    odsState.getOrAddProperties<Properties>().iteration_interval = iteration_interval;
  }
  if (read_latency) {
    odsState.getOrAddProperties<Properties>().read_latency = read_latency;
  }
  odsState.addTypes(transformed);
}

void LoopPipelineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr iteration_interval, ::mlir::IntegerAttr read_latency) {
  odsState.addOperands(target);
  if (iteration_interval) {
    odsState.getOrAddProperties<Properties>().iteration_interval = iteration_interval;
  }
  if (read_latency) {
    odsState.getOrAddProperties<Properties>().read_latency = read_latency;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopPipelineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t iteration_interval, uint64_t read_latency) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().iteration_interval = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), iteration_interval);
  odsState.getOrAddProperties<Properties>().read_latency = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), read_latency);
  odsState.addTypes(transformed);
}

void LoopPipelineOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t iteration_interval, uint64_t read_latency) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().iteration_interval = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), iteration_interval);
  odsState.getOrAddProperties<Properties>().read_latency = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), read_latency);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopPipelineOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<LoopPipelineOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void LoopPipelineOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.iteration_interval)
    properties.iteration_interval = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1);
  if (!properties.read_latency)
    properties.read_latency = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 10);
}

::llvm::LogicalResult LoopPipelineOp::verifyInvariantsImpl() {
  auto tblgen_iteration_interval = getProperties().iteration_interval; (void)tblgen_iteration_interval;
  auto tblgen_read_latency = getProperties().read_latency; (void)tblgen_read_latency;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps2(*this, tblgen_iteration_interval, "iteration_interval")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps2(*this, tblgen_read_latency, "read_latency")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult LoopPipelineOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopPipelineOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopPipelineOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIterationIntervalAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1)))
       elidedAttrs.push_back("iteration_interval");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getReadLatencyAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 10)))
       elidedAttrs.push_back("read_latency");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopPipelineOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopPromoteIfOneIterationOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
LoopPromoteIfOneIterationOpAdaptor::LoopPromoteIfOneIterationOpAdaptor(LoopPromoteIfOneIterationOp op) : LoopPromoteIfOneIterationOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult LoopPromoteIfOneIterationOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void LoopPromoteIfOneIterationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void LoopPromoteIfOneIterationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopPromoteIfOneIterationOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult LoopPromoteIfOneIterationOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult LoopPromoteIfOneIterationOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopPromoteIfOneIterationOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawType = type;
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopPromoteIfOneIterationOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopPromoteIfOneIterationOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopUnrollAndJamOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoopUnrollAndJamOpGenericAdaptorBase::LoopUnrollAndJamOpGenericAdaptorBase(LoopUnrollAndJamOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t LoopUnrollAndJamOpGenericAdaptorBase::getFactor() {
  auto attr = getFactorAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
LoopUnrollAndJamOpAdaptor::LoopUnrollAndJamOpAdaptor(LoopUnrollAndJamOp op) : LoopUnrollAndJamOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult LoopUnrollAndJamOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_factor = getProperties().factor; (void)tblgen_factor;
  if (!tblgen_factor) return emitError(loc, "'transform.loop.unroll_and_jam' op ""requires attribute 'factor'");

  if (tblgen_factor && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_factor))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_factor).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_factor).getValue().isStrictlyPositive()))))
    return emitError(loc, "'transform.loop.unroll_and_jam' op ""attribute 'factor' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive");
  return ::mlir::success();
}

::llvm::LogicalResult LoopUnrollAndJamOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.factor;
       auto attr = dict.get("factor");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `factor` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LoopUnrollAndJamOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.factor;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("factor",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoopUnrollAndJamOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.factor.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoopUnrollAndJamOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "factor")
      return prop.factor;
  return std::nullopt;
}

void LoopUnrollAndJamOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "factor") {
       prop.factor = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.factor)>>(value);
       return;
    }
}

void LoopUnrollAndJamOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.factor) attrs.append("factor", prop.factor);
}

::llvm::LogicalResult LoopUnrollAndJamOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFactorAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps3(attr, "factor", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult LoopUnrollAndJamOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.factor)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopUnrollAndJamOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.factor);
}

uint64_t LoopUnrollAndJamOp::getFactor() {
  auto attr = getFactorAttr();
  return attr.getValue().getZExtValue();
}

void LoopUnrollAndJamOp::setFactor(uint64_t attrValue) {
  getProperties().factor = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void LoopUnrollAndJamOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::IntegerAttr factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = factor;
}

void LoopUnrollAndJamOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = factor;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopUnrollAndJamOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, uint64_t factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), factor);
}

void LoopUnrollAndJamOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), factor);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopUnrollAndJamOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<LoopUnrollAndJamOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult LoopUnrollAndJamOp::verifyInvariantsImpl() {
  auto tblgen_factor = getProperties().factor; (void)tblgen_factor;
  if (!tblgen_factor) return emitOpError("requires attribute 'factor'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps3(*this, tblgen_factor, "factor")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult LoopUnrollAndJamOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopUnrollAndJamOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawType = type;
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopUnrollAndJamOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopUnrollAndJamOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LoopUnrollOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
LoopUnrollOpGenericAdaptorBase::LoopUnrollOpGenericAdaptorBase(LoopUnrollOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t LoopUnrollOpGenericAdaptorBase::getFactor() {
  auto attr = getFactorAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
LoopUnrollOpAdaptor::LoopUnrollOpAdaptor(LoopUnrollOp op) : LoopUnrollOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult LoopUnrollOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_factor = getProperties().factor; (void)tblgen_factor;
  if (!tblgen_factor) return emitError(loc, "'transform.loop.unroll' op ""requires attribute 'factor'");

  if (tblgen_factor && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_factor))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_factor).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_factor).getValue().isStrictlyPositive()))))
    return emitError(loc, "'transform.loop.unroll' op ""attribute 'factor' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive");
  return ::mlir::success();
}

::llvm::LogicalResult LoopUnrollOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.factor;
       auto attr = dict.get("factor");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `factor` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute LoopUnrollOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.factor;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("factor",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code LoopUnrollOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.factor.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> LoopUnrollOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "factor")
      return prop.factor;
  return std::nullopt;
}

void LoopUnrollOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "factor") {
       prop.factor = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.factor)>>(value);
       return;
    }
}

void LoopUnrollOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.factor) attrs.append("factor", prop.factor);
}

::llvm::LogicalResult LoopUnrollOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFactorAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps3(attr, "factor", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult LoopUnrollOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.factor)))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopUnrollOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.factor);
}

uint64_t LoopUnrollOp::getFactor() {
  auto attr = getFactorAttr();
  return attr.getValue().getZExtValue();
}

void LoopUnrollOp::setFactor(uint64_t attrValue) {
  getProperties().factor = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void LoopUnrollOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::IntegerAttr factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = factor;
}

void LoopUnrollOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = factor;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopUnrollOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, uint64_t factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), factor);
}

void LoopUnrollOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t factor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), factor);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoopUnrollOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<LoopUnrollOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult LoopUnrollOp::verifyInvariantsImpl() {
  auto tblgen_factor = getProperties().factor; (void)tblgen_factor;
  if (!tblgen_factor) return emitOpError("requires attribute 'factor'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps3(*this, tblgen_factor, "factor")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult LoopUnrollOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LoopUnrollOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawType = type;
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void LoopUnrollOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getTarget().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LoopUnrollOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TakeAssumedBranchOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TakeAssumedBranchOpGenericAdaptorBase::TakeAssumedBranchOpGenericAdaptorBase(TakeAssumedBranchOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::std::optional<bool> TakeAssumedBranchOpGenericAdaptorBase::getTakeElseBranch() {
  auto attr = getTakeElseBranchAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

} // namespace detail
TakeAssumedBranchOpAdaptor::TakeAssumedBranchOpAdaptor(TakeAssumedBranchOp op) : TakeAssumedBranchOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult TakeAssumedBranchOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_take_else_branch = getProperties().take_else_branch; (void)tblgen_take_else_branch;

  if (tblgen_take_else_branch && !((::llvm::isa<::mlir::UnitAttr>(tblgen_take_else_branch))))
    return emitError(loc, "'transform.scf.take_assumed_branch' op ""attribute 'take_else_branch' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

::llvm::LogicalResult TakeAssumedBranchOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.take_else_branch;
       auto attr = dict.get("take_else_branch");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `take_else_branch` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TakeAssumedBranchOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.take_else_branch;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("take_else_branch",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TakeAssumedBranchOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.take_else_branch.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TakeAssumedBranchOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "take_else_branch")
      return prop.take_else_branch;
  return std::nullopt;
}

void TakeAssumedBranchOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "take_else_branch") {
       prop.take_else_branch = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.take_else_branch)>>(value);
       return;
    }
}

void TakeAssumedBranchOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.take_else_branch) attrs.append("take_else_branch", prop.take_else_branch);
}

::llvm::LogicalResult TakeAssumedBranchOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTakeElseBranchAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps4(attr, "take_else_branch", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult TakeAssumedBranchOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.take_else_branch)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TakeAssumedBranchOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.take_else_branch);
}

::std::optional<bool> TakeAssumedBranchOp::getTakeElseBranch() {
  auto attr = getTakeElseBranchAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

void TakeAssumedBranchOp::setTakeElseBranch(bool attrValue) {
    auto &odsProp = getProperties().take_else_branch;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void TakeAssumedBranchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, /*optional*/::mlir::UnitAttr take_else_branch) {
  odsState.addOperands(target);
  if (take_else_branch) {
    odsState.getOrAddProperties<Properties>().take_else_branch = take_else_branch;
  }
}

void TakeAssumedBranchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr take_else_branch) {
  odsState.addOperands(target);
  if (take_else_branch) {
    odsState.getOrAddProperties<Properties>().take_else_branch = take_else_branch;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TakeAssumedBranchOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<TakeAssumedBranchOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult TakeAssumedBranchOp::verifyInvariantsImpl() {
  auto tblgen_take_else_branch = getProperties().take_else_branch; (void)tblgen_take_else_branch;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_SCFTransformOps4(*this, tblgen_take_else_branch, "take_else_branch")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_SCFTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult TakeAssumedBranchOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TakeAssumedBranchOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("take_else_branch"))) {
    result.getOrAddProperties<TakeAssumedBranchOp::Properties>().take_else_branch = parser.getBuilder().getUnitAttr();  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TakeAssumedBranchOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (getTakeElseBranchAttr()) {
    _odsPrinter << ' ' << "take_else_branch";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("take_else_branch");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TakeAssumedBranchOp)


#endif  // GET_OP_CLASSES

