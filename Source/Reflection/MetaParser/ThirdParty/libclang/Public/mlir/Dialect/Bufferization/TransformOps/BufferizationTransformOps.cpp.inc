/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: BufferizationTransformOps.td                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::BufferLoopHoistingOp,
::mlir::transform::EliminateEmptyTensorsOp,
::mlir::transform::EmptyTensorToAllocTensorOp,
::mlir::transform::OneShotBufferizeOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_BufferizationTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_BufferizationTransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.empty")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.empty operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_BufferizationTransformOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "bufferization.alloc_tensor")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to bufferization.alloc_tensor operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::bufferization::LayoutMapOptionAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: option for map layout";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_BufferizationTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_BufferizationTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_BufferizationTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::BufferLoopHoistingOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
BufferLoopHoistingOpAdaptor::BufferLoopHoistingOpAdaptor(BufferLoopHoistingOp op) : BufferLoopHoistingOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult BufferLoopHoistingOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void BufferLoopHoistingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void BufferLoopHoistingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BufferLoopHoistingOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult BufferLoopHoistingOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult BufferLoopHoistingOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BufferLoopHoistingOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void BufferLoopHoistingOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::BufferLoopHoistingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EliminateEmptyTensorsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
EliminateEmptyTensorsOpAdaptor::EliminateEmptyTensorsOpAdaptor(EliminateEmptyTensorsOp op) : EliminateEmptyTensorsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult EliminateEmptyTensorsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void EliminateEmptyTensorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void EliminateEmptyTensorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EliminateEmptyTensorsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult EliminateEmptyTensorsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult EliminateEmptyTensorsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult EliminateEmptyTensorsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void EliminateEmptyTensorsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::EliminateEmptyTensorsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EmptyTensorToAllocTensorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
EmptyTensorToAllocTensorOpAdaptor::EmptyTensorToAllocTensorOpAdaptor(EmptyTensorToAllocTensorOp op) : EmptyTensorToAllocTensorOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult EmptyTensorToAllocTensorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void EmptyTensorToAllocTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void EmptyTensorToAllocTensorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EmptyTensorToAllocTensorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult EmptyTensorToAllocTensorOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult EmptyTensorToAllocTensorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult EmptyTensorToAllocTensorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void EmptyTensorToAllocTensorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::EmptyTensorToAllocTensorOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::OneShotBufferizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
OneShotBufferizeOpGenericAdaptorBase::OneShotBufferizeOpGenericAdaptorBase(OneShotBufferizeOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::std::optional<::mlir::bufferization::LayoutMapOption> OneShotBufferizeOpGenericAdaptorBase::getFunctionBoundaryTypeConversion() {
  auto attr = getFunctionBoundaryTypeConversionAttr();
  return attr ? ::std::optional<::mlir::bufferization::LayoutMapOption>(attr.getValue()) : (::std::nullopt);
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getAllowReturnAllocsFromLoopsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().allow_return_allocs_from_loops);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getAllowReturnAllocsFromLoops() {
  auto attr = getAllowReturnAllocsFromLoopsAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getAllowUnknownOpsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().allow_unknown_ops);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getAllowUnknownOps() {
  auto attr = getAllowUnknownOpsAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getBufferizeFunctionBoundariesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().bufferize_function_boundaries);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getBufferizeFunctionBoundaries() {
  auto attr = getBufferizeFunctionBoundariesAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getDumpAliasSetsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().dump_alias_sets);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getDumpAliasSets() {
  auto attr = getDumpAliasSetsAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getTestAnalysisOnlyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().test_analysis_only);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getTestAnalysisOnly() {
  auto attr = getTestAnalysisOnlyAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getPrintConflictsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().print_conflicts);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getPrintConflicts() {
  auto attr = getPrintConflictsAttr();
  return attr.getValue();
}

::mlir::BoolAttr OneShotBufferizeOpGenericAdaptorBase::getCheckParallelRegionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().check_parallel_regions);
  return attr;
}

bool OneShotBufferizeOpGenericAdaptorBase::getCheckParallelRegions() {
  auto attr = getCheckParallelRegionsAttr();
  return attr.getValue();
}

::mlir::StringAttr OneShotBufferizeOpGenericAdaptorBase::getMemcpyOpAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().memcpy_op);
  return attr;
}

::llvm::StringRef OneShotBufferizeOpGenericAdaptorBase::getMemcpyOp() {
  auto attr = getMemcpyOpAttr();
  return attr.getValue();
}

} // namespace detail
OneShotBufferizeOpAdaptor::OneShotBufferizeOpAdaptor(OneShotBufferizeOp op) : OneShotBufferizeOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult OneShotBufferizeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_allow_return_allocs_from_loops = getProperties().allow_return_allocs_from_loops; (void)tblgen_allow_return_allocs_from_loops;
  auto tblgen_allow_unknown_ops = getProperties().allow_unknown_ops; (void)tblgen_allow_unknown_ops;
  auto tblgen_bufferize_function_boundaries = getProperties().bufferize_function_boundaries; (void)tblgen_bufferize_function_boundaries;
  auto tblgen_check_parallel_regions = getProperties().check_parallel_regions; (void)tblgen_check_parallel_regions;
  auto tblgen_dump_alias_sets = getProperties().dump_alias_sets; (void)tblgen_dump_alias_sets;
  auto tblgen_function_boundary_type_conversion = getProperties().function_boundary_type_conversion; (void)tblgen_function_boundary_type_conversion;
  auto tblgen_memcpy_op = getProperties().memcpy_op; (void)tblgen_memcpy_op;
  auto tblgen_print_conflicts = getProperties().print_conflicts; (void)tblgen_print_conflicts;
  auto tblgen_test_analysis_only = getProperties().test_analysis_only; (void)tblgen_test_analysis_only;

  if (tblgen_function_boundary_type_conversion && !((::llvm::isa<::mlir::bufferization::LayoutMapOptionAttr>(tblgen_function_boundary_type_conversion))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'function_boundary_type_conversion' failed to satisfy constraint: option for map layout");

  if (tblgen_allow_return_allocs_from_loops && !((::llvm::isa<::mlir::BoolAttr>(tblgen_allow_return_allocs_from_loops))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'allow_return_allocs_from_loops' failed to satisfy constraint: bool attribute");

  if (tblgen_allow_unknown_ops && !((::llvm::isa<::mlir::BoolAttr>(tblgen_allow_unknown_ops))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'allow_unknown_ops' failed to satisfy constraint: bool attribute");

  if (tblgen_bufferize_function_boundaries && !((::llvm::isa<::mlir::BoolAttr>(tblgen_bufferize_function_boundaries))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'bufferize_function_boundaries' failed to satisfy constraint: bool attribute");

  if (tblgen_dump_alias_sets && !((::llvm::isa<::mlir::BoolAttr>(tblgen_dump_alias_sets))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'dump_alias_sets' failed to satisfy constraint: bool attribute");

  if (tblgen_test_analysis_only && !((::llvm::isa<::mlir::BoolAttr>(tblgen_test_analysis_only))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'test_analysis_only' failed to satisfy constraint: bool attribute");

  if (tblgen_print_conflicts && !((::llvm::isa<::mlir::BoolAttr>(tblgen_print_conflicts))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'print_conflicts' failed to satisfy constraint: bool attribute");

  if (tblgen_check_parallel_regions && !((::llvm::isa<::mlir::BoolAttr>(tblgen_check_parallel_regions))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'check_parallel_regions' failed to satisfy constraint: bool attribute");

  if (tblgen_memcpy_op && !((::llvm::isa<::mlir::StringAttr>(tblgen_memcpy_op))))
    return emitError(loc, "'transform.bufferization.one_shot_bufferize' op ""attribute 'memcpy_op' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

::llvm::LogicalResult OneShotBufferizeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.allow_return_allocs_from_loops;
       auto attr = dict.get("allow_return_allocs_from_loops");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `allow_return_allocs_from_loops` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.allow_unknown_ops;
       auto attr = dict.get("allow_unknown_ops");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `allow_unknown_ops` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.bufferize_function_boundaries;
       auto attr = dict.get("bufferize_function_boundaries");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `bufferize_function_boundaries` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.check_parallel_regions;
       auto attr = dict.get("check_parallel_regions");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `check_parallel_regions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.dump_alias_sets;
       auto attr = dict.get("dump_alias_sets");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dump_alias_sets` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.function_boundary_type_conversion;
       auto attr = dict.get("function_boundary_type_conversion");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `function_boundary_type_conversion` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.memcpy_op;
       auto attr = dict.get("memcpy_op");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `memcpy_op` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.print_conflicts;
       auto attr = dict.get("print_conflicts");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `print_conflicts` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.test_analysis_only;
       auto attr = dict.get("test_analysis_only");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `test_analysis_only` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute OneShotBufferizeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.allow_return_allocs_from_loops;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("allow_return_allocs_from_loops",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.allow_unknown_ops;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("allow_unknown_ops",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.bufferize_function_boundaries;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("bufferize_function_boundaries",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.check_parallel_regions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("check_parallel_regions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.dump_alias_sets;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dump_alias_sets",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.function_boundary_type_conversion;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("function_boundary_type_conversion",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.memcpy_op;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("memcpy_op",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.print_conflicts;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("print_conflicts",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.test_analysis_only;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("test_analysis_only",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code OneShotBufferizeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.allow_return_allocs_from_loops.getAsOpaquePointer()), 
    llvm::hash_value(prop.allow_unknown_ops.getAsOpaquePointer()), 
    llvm::hash_value(prop.bufferize_function_boundaries.getAsOpaquePointer()), 
    llvm::hash_value(prop.check_parallel_regions.getAsOpaquePointer()), 
    llvm::hash_value(prop.dump_alias_sets.getAsOpaquePointer()), 
    llvm::hash_value(prop.function_boundary_type_conversion.getAsOpaquePointer()), 
    llvm::hash_value(prop.memcpy_op.getAsOpaquePointer()), 
    llvm::hash_value(prop.print_conflicts.getAsOpaquePointer()), 
    llvm::hash_value(prop.test_analysis_only.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> OneShotBufferizeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "allow_return_allocs_from_loops")
      return prop.allow_return_allocs_from_loops;

    if (name == "allow_unknown_ops")
      return prop.allow_unknown_ops;

    if (name == "bufferize_function_boundaries")
      return prop.bufferize_function_boundaries;

    if (name == "check_parallel_regions")
      return prop.check_parallel_regions;

    if (name == "dump_alias_sets")
      return prop.dump_alias_sets;

    if (name == "function_boundary_type_conversion")
      return prop.function_boundary_type_conversion;

    if (name == "memcpy_op")
      return prop.memcpy_op;

    if (name == "print_conflicts")
      return prop.print_conflicts;

    if (name == "test_analysis_only")
      return prop.test_analysis_only;
  return std::nullopt;
}

void OneShotBufferizeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "allow_return_allocs_from_loops") {
       prop.allow_return_allocs_from_loops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.allow_return_allocs_from_loops)>>(value);
       return;
    }

    if (name == "allow_unknown_ops") {
       prop.allow_unknown_ops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.allow_unknown_ops)>>(value);
       return;
    }

    if (name == "bufferize_function_boundaries") {
       prop.bufferize_function_boundaries = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.bufferize_function_boundaries)>>(value);
       return;
    }

    if (name == "check_parallel_regions") {
       prop.check_parallel_regions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.check_parallel_regions)>>(value);
       return;
    }

    if (name == "dump_alias_sets") {
       prop.dump_alias_sets = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dump_alias_sets)>>(value);
       return;
    }

    if (name == "function_boundary_type_conversion") {
       prop.function_boundary_type_conversion = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.function_boundary_type_conversion)>>(value);
       return;
    }

    if (name == "memcpy_op") {
       prop.memcpy_op = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.memcpy_op)>>(value);
       return;
    }

    if (name == "print_conflicts") {
       prop.print_conflicts = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.print_conflicts)>>(value);
       return;
    }

    if (name == "test_analysis_only") {
       prop.test_analysis_only = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.test_analysis_only)>>(value);
       return;
    }
}

void OneShotBufferizeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.allow_return_allocs_from_loops) attrs.append("allow_return_allocs_from_loops", prop.allow_return_allocs_from_loops);

    if (prop.allow_unknown_ops) attrs.append("allow_unknown_ops", prop.allow_unknown_ops);

    if (prop.bufferize_function_boundaries) attrs.append("bufferize_function_boundaries", prop.bufferize_function_boundaries);

    if (prop.check_parallel_regions) attrs.append("check_parallel_regions", prop.check_parallel_regions);

    if (prop.dump_alias_sets) attrs.append("dump_alias_sets", prop.dump_alias_sets);

    if (prop.function_boundary_type_conversion) attrs.append("function_boundary_type_conversion", prop.function_boundary_type_conversion);

    if (prop.memcpy_op) attrs.append("memcpy_op", prop.memcpy_op);

    if (prop.print_conflicts) attrs.append("print_conflicts", prop.print_conflicts);

    if (prop.test_analysis_only) attrs.append("test_analysis_only", prop.test_analysis_only);
}

::llvm::LogicalResult OneShotBufferizeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAllowReturnAllocsFromLoopsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "allow_return_allocs_from_loops", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getAllowUnknownOpsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "allow_unknown_ops", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getBufferizeFunctionBoundariesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "bufferize_function_boundaries", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getCheckParallelRegionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "check_parallel_regions", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getDumpAliasSetsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "dump_alias_sets", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getFunctionBoundaryTypeConversionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps0(attr, "function_boundary_type_conversion", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMemcpyOpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps2(attr, "memcpy_op", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPrintConflictsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "print_conflicts", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTestAnalysisOnlyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(attr, "test_analysis_only", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult OneShotBufferizeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.allow_return_allocs_from_loops)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.allow_unknown_ops)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.bufferize_function_boundaries)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.check_parallel_regions)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.dump_alias_sets)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.function_boundary_type_conversion)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.memcpy_op)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.print_conflicts)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.test_analysis_only)))
    return ::mlir::failure();
  return ::mlir::success();
}

void OneShotBufferizeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.allow_return_allocs_from_loops);

  writer.writeOptionalAttribute(prop.allow_unknown_ops);

  writer.writeOptionalAttribute(prop.bufferize_function_boundaries);

  writer.writeOptionalAttribute(prop.check_parallel_regions);

  writer.writeOptionalAttribute(prop.dump_alias_sets);

  writer.writeOptionalAttribute(prop.function_boundary_type_conversion);

  writer.writeOptionalAttribute(prop.memcpy_op);

  writer.writeOptionalAttribute(prop.print_conflicts);

  writer.writeOptionalAttribute(prop.test_analysis_only);
}

::std::optional<::mlir::bufferization::LayoutMapOption> OneShotBufferizeOp::getFunctionBoundaryTypeConversion() {
  auto attr = getFunctionBoundaryTypeConversionAttr();
  return attr ? ::std::optional<::mlir::bufferization::LayoutMapOption>(attr.getValue()) : (::std::nullopt);
}

bool OneShotBufferizeOp::getAllowReturnAllocsFromLoops() {
  auto attr = getAllowReturnAllocsFromLoopsAttr();
  return attr.getValue();
}

bool OneShotBufferizeOp::getAllowUnknownOps() {
  auto attr = getAllowUnknownOpsAttr();
  return attr.getValue();
}

bool OneShotBufferizeOp::getBufferizeFunctionBoundaries() {
  auto attr = getBufferizeFunctionBoundariesAttr();
  return attr.getValue();
}

bool OneShotBufferizeOp::getDumpAliasSets() {
  auto attr = getDumpAliasSetsAttr();
  return attr.getValue();
}

bool OneShotBufferizeOp::getTestAnalysisOnly() {
  auto attr = getTestAnalysisOnlyAttr();
  return attr.getValue();
}

bool OneShotBufferizeOp::getPrintConflicts() {
  auto attr = getPrintConflictsAttr();
  return attr.getValue();
}

bool OneShotBufferizeOp::getCheckParallelRegions() {
  auto attr = getCheckParallelRegionsAttr();
  return attr.getValue();
}

::llvm::StringRef OneShotBufferizeOp::getMemcpyOp() {
  auto attr = getMemcpyOpAttr();
  return attr.getValue();
}

void OneShotBufferizeOp::setFunctionBoundaryTypeConversion(::std::optional<::mlir::bufferization::LayoutMapOption> attrValue) {
    auto &odsProp = getProperties().function_boundary_type_conversion;
    if (attrValue)
      odsProp = ::mlir::bufferization::LayoutMapOptionAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue);
    else
      odsProp = nullptr;
}

void OneShotBufferizeOp::setAllowReturnAllocsFromLoops(bool attrValue) {
  getProperties().allow_return_allocs_from_loops = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void OneShotBufferizeOp::setAllowUnknownOps(bool attrValue) {
  getProperties().allow_unknown_ops = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void OneShotBufferizeOp::setBufferizeFunctionBoundaries(bool attrValue) {
  getProperties().bufferize_function_boundaries = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void OneShotBufferizeOp::setDumpAliasSets(bool attrValue) {
  getProperties().dump_alias_sets = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void OneShotBufferizeOp::setTestAnalysisOnly(bool attrValue) {
  getProperties().test_analysis_only = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void OneShotBufferizeOp::setPrintConflicts(bool attrValue) {
  getProperties().print_conflicts = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void OneShotBufferizeOp::setCheckParallelRegions(bool attrValue) {
  getProperties().check_parallel_regions = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void OneShotBufferizeOp::setMemcpyOp(::llvm::StringRef attrValue) {
  getProperties().memcpy_op = ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue);
}

void OneShotBufferizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, ::mlir::BoolAttr allow_return_allocs_from_loops, ::mlir::BoolAttr allow_unknown_ops, ::mlir::BoolAttr bufferize_function_boundaries, ::mlir::BoolAttr dump_alias_sets, ::mlir::BoolAttr test_analysis_only, ::mlir::BoolAttr print_conflicts, ::mlir::BoolAttr check_parallel_regions, ::mlir::StringAttr memcpy_op) {
  odsState.addOperands(target);
  if (function_boundary_type_conversion) {
    odsState.getOrAddProperties<Properties>().function_boundary_type_conversion = function_boundary_type_conversion;
  }
  if (allow_return_allocs_from_loops) {
    odsState.getOrAddProperties<Properties>().allow_return_allocs_from_loops = allow_return_allocs_from_loops;
  }
  if (allow_unknown_ops) {
    odsState.getOrAddProperties<Properties>().allow_unknown_ops = allow_unknown_ops;
  }
  if (bufferize_function_boundaries) {
    odsState.getOrAddProperties<Properties>().bufferize_function_boundaries = bufferize_function_boundaries;
  }
  if (dump_alias_sets) {
    odsState.getOrAddProperties<Properties>().dump_alias_sets = dump_alias_sets;
  }
  if (test_analysis_only) {
    odsState.getOrAddProperties<Properties>().test_analysis_only = test_analysis_only;
  }
  if (print_conflicts) {
    odsState.getOrAddProperties<Properties>().print_conflicts = print_conflicts;
  }
  if (check_parallel_regions) {
    odsState.getOrAddProperties<Properties>().check_parallel_regions = check_parallel_regions;
  }
  if (memcpy_op) {
    odsState.getOrAddProperties<Properties>().memcpy_op = memcpy_op;
  }
  odsState.addTypes(transformed);
}

void OneShotBufferizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, ::mlir::BoolAttr allow_return_allocs_from_loops, ::mlir::BoolAttr allow_unknown_ops, ::mlir::BoolAttr bufferize_function_boundaries, ::mlir::BoolAttr dump_alias_sets, ::mlir::BoolAttr test_analysis_only, ::mlir::BoolAttr print_conflicts, ::mlir::BoolAttr check_parallel_regions, ::mlir::StringAttr memcpy_op) {
  odsState.addOperands(target);
  if (function_boundary_type_conversion) {
    odsState.getOrAddProperties<Properties>().function_boundary_type_conversion = function_boundary_type_conversion;
  }
  if (allow_return_allocs_from_loops) {
    odsState.getOrAddProperties<Properties>().allow_return_allocs_from_loops = allow_return_allocs_from_loops;
  }
  if (allow_unknown_ops) {
    odsState.getOrAddProperties<Properties>().allow_unknown_ops = allow_unknown_ops;
  }
  if (bufferize_function_boundaries) {
    odsState.getOrAddProperties<Properties>().bufferize_function_boundaries = bufferize_function_boundaries;
  }
  if (dump_alias_sets) {
    odsState.getOrAddProperties<Properties>().dump_alias_sets = dump_alias_sets;
  }
  if (test_analysis_only) {
    odsState.getOrAddProperties<Properties>().test_analysis_only = test_analysis_only;
  }
  if (print_conflicts) {
    odsState.getOrAddProperties<Properties>().print_conflicts = print_conflicts;
  }
  if (check_parallel_regions) {
    odsState.getOrAddProperties<Properties>().check_parallel_regions = check_parallel_regions;
  }
  if (memcpy_op) {
    odsState.getOrAddProperties<Properties>().memcpy_op = memcpy_op;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OneShotBufferizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, bool allow_return_allocs_from_loops, bool allow_unknown_ops, bool bufferize_function_boundaries, bool dump_alias_sets, bool test_analysis_only, bool print_conflicts, bool check_parallel_regions, ::llvm::StringRef memcpy_op) {
  odsState.addOperands(target);
  if (function_boundary_type_conversion) {
    odsState.getOrAddProperties<Properties>().function_boundary_type_conversion = function_boundary_type_conversion;
  }
  odsState.getOrAddProperties<Properties>().allow_return_allocs_from_loops = odsBuilder.getBoolAttr(allow_return_allocs_from_loops);
  odsState.getOrAddProperties<Properties>().allow_unknown_ops = odsBuilder.getBoolAttr(allow_unknown_ops);
  odsState.getOrAddProperties<Properties>().bufferize_function_boundaries = odsBuilder.getBoolAttr(bufferize_function_boundaries);
  odsState.getOrAddProperties<Properties>().dump_alias_sets = odsBuilder.getBoolAttr(dump_alias_sets);
  odsState.getOrAddProperties<Properties>().test_analysis_only = odsBuilder.getBoolAttr(test_analysis_only);
  odsState.getOrAddProperties<Properties>().print_conflicts = odsBuilder.getBoolAttr(print_conflicts);
  odsState.getOrAddProperties<Properties>().check_parallel_regions = odsBuilder.getBoolAttr(check_parallel_regions);
  odsState.getOrAddProperties<Properties>().memcpy_op = odsBuilder.getStringAttr(memcpy_op);
  odsState.addTypes(transformed);
}

void OneShotBufferizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, bool allow_return_allocs_from_loops, bool allow_unknown_ops, bool bufferize_function_boundaries, bool dump_alias_sets, bool test_analysis_only, bool print_conflicts, bool check_parallel_regions, ::llvm::StringRef memcpy_op) {
  odsState.addOperands(target);
  if (function_boundary_type_conversion) {
    odsState.getOrAddProperties<Properties>().function_boundary_type_conversion = function_boundary_type_conversion;
  }
  odsState.getOrAddProperties<Properties>().allow_return_allocs_from_loops = odsBuilder.getBoolAttr(allow_return_allocs_from_loops);
  odsState.getOrAddProperties<Properties>().allow_unknown_ops = odsBuilder.getBoolAttr(allow_unknown_ops);
  odsState.getOrAddProperties<Properties>().bufferize_function_boundaries = odsBuilder.getBoolAttr(bufferize_function_boundaries);
  odsState.getOrAddProperties<Properties>().dump_alias_sets = odsBuilder.getBoolAttr(dump_alias_sets);
  odsState.getOrAddProperties<Properties>().test_analysis_only = odsBuilder.getBoolAttr(test_analysis_only);
  odsState.getOrAddProperties<Properties>().print_conflicts = odsBuilder.getBoolAttr(print_conflicts);
  odsState.getOrAddProperties<Properties>().check_parallel_regions = odsBuilder.getBoolAttr(check_parallel_regions);
  odsState.getOrAddProperties<Properties>().memcpy_op = odsBuilder.getStringAttr(memcpy_op);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OneShotBufferizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<OneShotBufferizeOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void OneShotBufferizeOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.allow_return_allocs_from_loops)
    properties.allow_return_allocs_from_loops = odsBuilder.getBoolAttr(false);
  if (!properties.allow_unknown_ops)
    properties.allow_unknown_ops = odsBuilder.getBoolAttr(false);
  if (!properties.bufferize_function_boundaries)
    properties.bufferize_function_boundaries = odsBuilder.getBoolAttr(false);
  if (!properties.dump_alias_sets)
    properties.dump_alias_sets = odsBuilder.getBoolAttr(false);
  if (!properties.test_analysis_only)
    properties.test_analysis_only = odsBuilder.getBoolAttr(false);
  if (!properties.print_conflicts)
    properties.print_conflicts = odsBuilder.getBoolAttr(false);
  if (!properties.check_parallel_regions)
    properties.check_parallel_regions = odsBuilder.getBoolAttr(true);
  if (!properties.memcpy_op)
    properties.memcpy_op = odsBuilder.getStringAttr("memref.copy");
}

::llvm::LogicalResult OneShotBufferizeOp::verifyInvariantsImpl() {
  auto tblgen_allow_return_allocs_from_loops = getProperties().allow_return_allocs_from_loops; (void)tblgen_allow_return_allocs_from_loops;
  auto tblgen_allow_unknown_ops = getProperties().allow_unknown_ops; (void)tblgen_allow_unknown_ops;
  auto tblgen_bufferize_function_boundaries = getProperties().bufferize_function_boundaries; (void)tblgen_bufferize_function_boundaries;
  auto tblgen_check_parallel_regions = getProperties().check_parallel_regions; (void)tblgen_check_parallel_regions;
  auto tblgen_dump_alias_sets = getProperties().dump_alias_sets; (void)tblgen_dump_alias_sets;
  auto tblgen_function_boundary_type_conversion = getProperties().function_boundary_type_conversion; (void)tblgen_function_boundary_type_conversion;
  auto tblgen_memcpy_op = getProperties().memcpy_op; (void)tblgen_memcpy_op;
  auto tblgen_print_conflicts = getProperties().print_conflicts; (void)tblgen_print_conflicts;
  auto tblgen_test_analysis_only = getProperties().test_analysis_only; (void)tblgen_test_analysis_only;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps0(*this, tblgen_function_boundary_type_conversion, "function_boundary_type_conversion")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_allow_return_allocs_from_loops, "allow_return_allocs_from_loops")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_allow_unknown_ops, "allow_unknown_ops")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_bufferize_function_boundaries, "bufferize_function_boundaries")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_dump_alias_sets, "dump_alias_sets")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_test_analysis_only, "test_analysis_only")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_print_conflicts, "print_conflicts")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps1(*this, tblgen_check_parallel_regions, "check_parallel_regions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_BufferizationTransformOps2(*this, tblgen_memcpy_op, "memcpy_op")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_BufferizationTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult OneShotBufferizeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult OneShotBufferizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversionAttr;
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  if (::mlir::succeeded(parser.parseOptionalKeyword("layout"))) {
  if (parser.parseLBrace())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"InferLayoutMap","IdentityLayoutMap","FullyDynamicLayoutMap"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "function_boundary_type_conversion", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'function_boundary_type_conversion' [InferLayoutMap, IdentityLayoutMap, FullyDynamicLayoutMap]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::bufferization::symbolizeLayoutMapOption(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "function_boundary_type_conversion attribute specification: \"" << attrStr << '"';;

      function_boundary_type_conversionAttr = ::mlir::bufferization::LayoutMapOptionAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<OneShotBufferizeOp::Properties>().function_boundary_type_conversion = function_boundary_type_conversionAttr;
    }
  }
  if (parser.parseRBrace())
    return ::mlir::failure();
  }

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

  ::mlir::FunctionType target__allResult_functionType;
  if (parser.parseType(target__allResult_functionType))
    return ::mlir::failure();
  targetTypes = target__allResult_functionType.getInputs();
  allResultTypes = target__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void OneShotBufferizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getFunctionBoundaryTypeConversionAttr()) {
    _odsPrinter << ' ' << "layout";
    _odsPrinter << "{";

    {
      auto caseValue = *getFunctionBoundaryTypeConversion();
      auto caseValueStr = stringifyLayoutMapOption(caseValue);
      _odsPrinter << caseValueStr;
    }
    _odsPrinter << "}";
  }
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("function_boundary_type_conversion");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAllowReturnAllocsFromLoopsAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("allow_return_allocs_from_loops");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAllowUnknownOpsAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("allow_unknown_ops");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBufferizeFunctionBoundariesAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("bufferize_function_boundaries");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDumpAliasSetsAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("dump_alias_sets");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTestAnalysisOnlyAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("test_analysis_only");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPrintConflictsAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("print_conflicts");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getCheckParallelRegionsAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("check_parallel_regions");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMemcpyOpAttr();
     if(attr && (attr == odsBuilder.getStringAttr("memref.copy")))
       elidedAttrs.push_back("memcpy_op");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::OneShotBufferizeOp)


#endif  // GET_OP_CLASSES

