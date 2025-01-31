/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: LinalgTransformOps.td                                                *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyEraseUnnecessaryInputsPatternsOp,
::mlir::transform::ApplyFoldUnitExtentDimsViaReshapesPatternsOp,
::mlir::transform::ApplyFoldUnitExtentDimsViaSlicesPatternsOp,
::mlir::transform::ApplyTilingCanonicalizationPatternsOp,
::mlir::transform::BufferizeToAllocationOp,
::mlir::transform::ContinuousTileSizesOp,
::mlir::transform::ConvertConv2DToImg2ColOp,
::mlir::transform::ConvertToLoopsOp,
::mlir::transform::DecomposeInterfaceOp,
::mlir::transform::DecomposeOp,
::mlir::transform::EliminateLinalgOpAnchoredEmptyTensorsOp,
::mlir::transform::FlattenElementwiseLinalgOp,
::mlir::transform::FuseIntoContainingOp,
::mlir::transform::FuseOp,
::mlir::transform::GeneralizeOp,
::mlir::transform::HoistPadBuildPackingLoopNestOp,
::mlir::transform::HoistPadOp,
::mlir::transform::HoistRedundantVectorBroadcastsOp,
::mlir::transform::HoistRedundantVectorTransfersOp,
::mlir::transform::InsertSliceToCopyOp,
::mlir::transform::InterchangeOp,
::mlir::transform::LowerPackOp,
::mlir::transform::LowerUnPackOp,
::mlir::transform::MapCopyToThreadsOp,
::mlir::transform::MatchOp,
::mlir::transform::MultiTileSizesOp,
::mlir::transform::PackGreedilyOp,
::mlir::transform::PackOp,
::mlir::transform::PackTransposeOp,
::mlir::transform::PadOp,
::mlir::transform::PromoteOp,
::mlir::transform::ReplaceOp,
::mlir::transform::RewriteInDestinationPassingStyleOp,
::mlir::transform::ScalarizeOp,
::mlir::transform::SpecializeOp,
::mlir::transform::SplitOp,
::mlir::transform::SplitReductionOp,
::mlir::transform::TileReductionUsingForOp,
::mlir::transform::TileReductionUsingForallOp,
::mlir::transform::TileUsingForOp,
::mlir::transform::TileUsingForallOp,
::mlir::transform::TransposeConv2DOp,
::mlir::transform::TransposeMatmulOp,
::mlir::transform::VectorizeChildrenAndApplyPatternsOp,
::mlir::transform::VectorizeOp,
::mlir::transform::WinogradConv2DOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::AnyValueType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be , but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::AnyOpType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be , but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::TransformParamTypeInterface>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be transform any param type or any handle type, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.pack")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.pack operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.pad")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.pad operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.expand_shape")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.expand_shape operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "linalg.transpose")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to linalg.transpose operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.unpack")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.unpack operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.empty")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.empty operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.collapse_shape")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.collapse_shape operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps12(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "tensor.extract_slice")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to tensor.extract_slice operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgTransformOps13(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::TransformParamTypeInterface>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of transform any param type or any handle type, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((true)))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: any attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && ((!::llvm::cast<::mlir::IntegerAttr>(attr).getValue().isNegative()))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute whose value is non-negative";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit integer array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps7(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))) && ((::llvm::all_of(::llvm::cast<DenseI64ArrayAttr>(attr).asArrayRef(), [&](auto v) { return v >= 0; })))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute whose value is non-negative";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps7(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps8(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps8(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps9(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<mlir::transform::MatchInterfaceEnumAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: An interface to match";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps9(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps9(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps10(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DictionaryAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: dictionary of named attribute values";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps10(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps10(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps11(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((true))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: any type attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps11(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps11(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps12(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((true))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: type array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps12(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps12(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps13(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))) && ((::llvm::cast<::mlir::DenseArrayAttr>(attr).size() == 3))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute with exactly 3 elements";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps13(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps13(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps14(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))) && (((::llvm::cast<::mlir::DenseArrayAttr>(attr).size() == 0)) || ((::llvm::cast<::mlir::DenseArrayAttr>(attr).size() == 3)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute with 0 or 3 elements";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps14(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps14(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps15(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps15(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps15(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps16(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: array of arrays of i64";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps16(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps16(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps17(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::BoolAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 1-bit boolean array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps17(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps17(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps18(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DeviceMappingAttrInterface>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Device Mapping array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps18(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps18(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps19(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseBoolArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i1 dense array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps19(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps19(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps20(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<mlir::transform::TransposeMatmulInputAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Input to transpose when converting matmul ops to transposed variants";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgTransformOps20(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgTransformOps20(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_region_constraint_LinalgTransformOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyEraseUnnecessaryInputsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyEraseUnnecessaryInputsPatternsOpAdaptor::ApplyEraseUnnecessaryInputsPatternsOpAdaptor(ApplyEraseUnnecessaryInputsPatternsOp op) : ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyEraseUnnecessaryInputsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyEraseUnnecessaryInputsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyEraseUnnecessaryInputsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyEraseUnnecessaryInputsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyEraseUnnecessaryInputsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyEraseUnnecessaryInputsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyEraseUnnecessaryInputsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyEraseUnnecessaryInputsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyEraseUnnecessaryInputsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldUnitExtentDimsViaReshapesPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor::ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor(ApplyFoldUnitExtentDimsViaReshapesPatternsOp op) : ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyFoldUnitExtentDimsViaReshapesPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldUnitExtentDimsViaReshapesPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldUnitExtentDimsViaReshapesPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyFoldUnitExtentDimsViaReshapesPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyFoldUnitExtentDimsViaReshapesPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldUnitExtentDimsViaReshapesPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldUnitExtentDimsViaReshapesPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldUnitExtentDimsViaReshapesPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldUnitExtentDimsViaSlicesPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor::ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor(ApplyFoldUnitExtentDimsViaSlicesPatternsOp op) : ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyFoldUnitExtentDimsViaSlicesPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldUnitExtentDimsViaSlicesPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldUnitExtentDimsViaSlicesPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyFoldUnitExtentDimsViaSlicesPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyFoldUnitExtentDimsViaSlicesPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldUnitExtentDimsViaSlicesPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldUnitExtentDimsViaSlicesPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldUnitExtentDimsViaSlicesPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyTilingCanonicalizationPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyTilingCanonicalizationPatternsOpAdaptor::ApplyTilingCanonicalizationPatternsOpAdaptor(ApplyTilingCanonicalizationPatternsOp op) : ApplyTilingCanonicalizationPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyTilingCanonicalizationPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyTilingCanonicalizationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyTilingCanonicalizationPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyTilingCanonicalizationPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyTilingCanonicalizationPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyTilingCanonicalizationPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyTilingCanonicalizationPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyTilingCanonicalizationPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyTilingCanonicalizationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::BufferizeToAllocationOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BufferizeToAllocationOpGenericAdaptorBase::BufferizeToAllocationOpGenericAdaptorBase(BufferizeToAllocationOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::std::optional<::mlir::Attribute> BufferizeToAllocationOpGenericAdaptorBase::getMemorySpace() {
  auto attr = getMemorySpaceAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

::mlir::StringAttr BufferizeToAllocationOpGenericAdaptorBase::getMemcpyOpAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().memcpy_op);
  return attr;
}

::llvm::StringRef BufferizeToAllocationOpGenericAdaptorBase::getMemcpyOp() {
  auto attr = getMemcpyOpAttr();
  return attr.getValue();
}

::mlir::StringAttr BufferizeToAllocationOpGenericAdaptorBase::getAllocOpAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().alloc_op);
  return attr;
}

::llvm::StringRef BufferizeToAllocationOpGenericAdaptorBase::getAllocOp() {
  auto attr = getAllocOpAttr();
  return attr.getValue();
}

::mlir::UnitAttr BufferizeToAllocationOpGenericAdaptorBase::getBufferizeDestinationOnlyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().bufferize_destination_only);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool BufferizeToAllocationOpGenericAdaptorBase::getBufferizeDestinationOnly() {
  auto attr = getBufferizeDestinationOnlyAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr BufferizeToAllocationOpGenericAdaptorBase::getEmitDeallocAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().emit_dealloc);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool BufferizeToAllocationOpGenericAdaptorBase::getEmitDealloc() {
  auto attr = getEmitDeallocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
BufferizeToAllocationOpAdaptor::BufferizeToAllocationOpAdaptor(BufferizeToAllocationOp op) : BufferizeToAllocationOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult BufferizeToAllocationOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alloc_op = getProperties().alloc_op; (void)tblgen_alloc_op;
  auto tblgen_bufferize_destination_only = getProperties().bufferize_destination_only; (void)tblgen_bufferize_destination_only;
  auto tblgen_emit_dealloc = getProperties().emit_dealloc; (void)tblgen_emit_dealloc;
  auto tblgen_memcpy_op = getProperties().memcpy_op; (void)tblgen_memcpy_op;
  auto tblgen_memory_space = getProperties().memory_space; (void)tblgen_memory_space;

  if (tblgen_memory_space && !((true)))
    return emitError(loc, "'transform.structured.bufferize_to_allocation' op ""attribute 'memory_space' failed to satisfy constraint: any attribute");

  if (tblgen_memcpy_op && !((::llvm::isa<::mlir::StringAttr>(tblgen_memcpy_op))))
    return emitError(loc, "'transform.structured.bufferize_to_allocation' op ""attribute 'memcpy_op' failed to satisfy constraint: string attribute");

  if (tblgen_alloc_op && !((::llvm::isa<::mlir::StringAttr>(tblgen_alloc_op))))
    return emitError(loc, "'transform.structured.bufferize_to_allocation' op ""attribute 'alloc_op' failed to satisfy constraint: string attribute");

  if (tblgen_bufferize_destination_only && !((::llvm::isa<::mlir::UnitAttr>(tblgen_bufferize_destination_only))))
    return emitError(loc, "'transform.structured.bufferize_to_allocation' op ""attribute 'bufferize_destination_only' failed to satisfy constraint: unit attribute");

  if (tblgen_emit_dealloc && !((::llvm::isa<::mlir::UnitAttr>(tblgen_emit_dealloc))))
    return emitError(loc, "'transform.structured.bufferize_to_allocation' op ""attribute 'emit_dealloc' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

void BufferizeToAllocationOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "allocated_buffer");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "new_ops");
}

::llvm::LogicalResult BufferizeToAllocationOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alloc_op;
       auto attr = dict.get("alloc_op");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `alloc_op` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.bufferize_destination_only;
       auto attr = dict.get("bufferize_destination_only");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `bufferize_destination_only` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.emit_dealloc;
       auto attr = dict.get("emit_dealloc");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `emit_dealloc` in property conversion: " << attr;
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
    auto &propStorage = prop.memory_space;
       auto attr = dict.get("memory_space");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `memory_space` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute BufferizeToAllocationOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alloc_op;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alloc_op",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.bufferize_destination_only;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("bufferize_destination_only",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.emit_dealloc;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("emit_dealloc",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.memcpy_op;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("memcpy_op",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.memory_space;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("memory_space",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code BufferizeToAllocationOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.alloc_op.getAsOpaquePointer()), 
    llvm::hash_value(prop.bufferize_destination_only.getAsOpaquePointer()), 
    llvm::hash_value(prop.emit_dealloc.getAsOpaquePointer()), 
    llvm::hash_value(prop.memcpy_op.getAsOpaquePointer()), 
    llvm::hash_value(prop.memory_space.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> BufferizeToAllocationOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alloc_op")
      return prop.alloc_op;

    if (name == "bufferize_destination_only")
      return prop.bufferize_destination_only;

    if (name == "emit_dealloc")
      return prop.emit_dealloc;

    if (name == "memcpy_op")
      return prop.memcpy_op;

    if (name == "memory_space")
      return prop.memory_space;
  return std::nullopt;
}

void BufferizeToAllocationOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alloc_op") {
       prop.alloc_op = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alloc_op)>>(value);
       return;
    }

    if (name == "bufferize_destination_only") {
       prop.bufferize_destination_only = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.bufferize_destination_only)>>(value);
       return;
    }

    if (name == "emit_dealloc") {
       prop.emit_dealloc = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.emit_dealloc)>>(value);
       return;
    }

    if (name == "memcpy_op") {
       prop.memcpy_op = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.memcpy_op)>>(value);
       return;
    }

    if (name == "memory_space") {
       prop.memory_space = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.memory_space)>>(value);
       return;
    }
}

void BufferizeToAllocationOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alloc_op) attrs.append("alloc_op", prop.alloc_op);

    if (prop.bufferize_destination_only) attrs.append("bufferize_destination_only", prop.bufferize_destination_only);

    if (prop.emit_dealloc) attrs.append("emit_dealloc", prop.emit_dealloc);

    if (prop.memcpy_op) attrs.append("memcpy_op", prop.memcpy_op);

    if (prop.memory_space) attrs.append("memory_space", prop.memory_space);
}

::llvm::LogicalResult BufferizeToAllocationOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAllocOpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps1(attr, "alloc_op", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getBufferizeDestinationOnlyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "bufferize_destination_only", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getEmitDeallocAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "emit_dealloc", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMemcpyOpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps1(attr, "memcpy_op", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMemorySpaceAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(attr, "memory_space", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult BufferizeToAllocationOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alloc_op)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.bufferize_destination_only)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.emit_dealloc)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.memcpy_op)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.memory_space)))
    return ::mlir::failure();
  return ::mlir::success();
}

void BufferizeToAllocationOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alloc_op);

  writer.writeOptionalAttribute(prop.bufferize_destination_only);

  writer.writeOptionalAttribute(prop.emit_dealloc);

  writer.writeOptionalAttribute(prop.memcpy_op);

  writer.writeOptionalAttribute(prop.memory_space);
}

::std::optional<::mlir::Attribute> BufferizeToAllocationOp::getMemorySpace() {
  auto attr = getMemorySpaceAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

::llvm::StringRef BufferizeToAllocationOp::getMemcpyOp() {
  auto attr = getMemcpyOpAttr();
  return attr.getValue();
}

::llvm::StringRef BufferizeToAllocationOp::getAllocOp() {
  auto attr = getAllocOpAttr();
  return attr.getValue();
}

bool BufferizeToAllocationOp::getBufferizeDestinationOnly() {
  auto attr = getBufferizeDestinationOnlyAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool BufferizeToAllocationOp::getEmitDealloc() {
  auto attr = getEmitDeallocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void BufferizeToAllocationOp::setMemcpyOp(::llvm::StringRef attrValue) {
  getProperties().memcpy_op = ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue);
}

void BufferizeToAllocationOp::setAllocOp(::llvm::StringRef attrValue) {
  getProperties().alloc_op = ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue);
}

void BufferizeToAllocationOp::setBufferizeDestinationOnly(bool attrValue) {
    auto &odsProp = getProperties().bufferize_destination_only;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void BufferizeToAllocationOp::setEmitDealloc(bool attrValue) {
    auto &odsProp = getProperties().emit_dealloc;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void BufferizeToAllocationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type allocated_buffer, ::mlir::Type new_ops, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::mlir::StringAttr memcpy_op, ::mlir::StringAttr alloc_op, /*optional*/::mlir::UnitAttr bufferize_destination_only, /*optional*/::mlir::UnitAttr emit_dealloc) {
  odsState.addOperands(target);
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  if (memcpy_op) {
    odsState.getOrAddProperties<Properties>().memcpy_op = memcpy_op;
  }
  if (alloc_op) {
    odsState.getOrAddProperties<Properties>().alloc_op = alloc_op;
  }
  if (bufferize_destination_only) {
    odsState.getOrAddProperties<Properties>().bufferize_destination_only = bufferize_destination_only;
  }
  if (emit_dealloc) {
    odsState.getOrAddProperties<Properties>().emit_dealloc = emit_dealloc;
  }
  odsState.addTypes(allocated_buffer);
  odsState.addTypes(new_ops);
}

void BufferizeToAllocationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::mlir::StringAttr memcpy_op, ::mlir::StringAttr alloc_op, /*optional*/::mlir::UnitAttr bufferize_destination_only, /*optional*/::mlir::UnitAttr emit_dealloc) {
  odsState.addOperands(target);
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  if (memcpy_op) {
    odsState.getOrAddProperties<Properties>().memcpy_op = memcpy_op;
  }
  if (alloc_op) {
    odsState.getOrAddProperties<Properties>().alloc_op = alloc_op;
  }
  if (bufferize_destination_only) {
    odsState.getOrAddProperties<Properties>().bufferize_destination_only = bufferize_destination_only;
  }
  if (emit_dealloc) {
    odsState.getOrAddProperties<Properties>().emit_dealloc = emit_dealloc;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BufferizeToAllocationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type allocated_buffer, ::mlir::Type new_ops, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::llvm::StringRef memcpy_op, ::llvm::StringRef alloc_op, /*optional*/bool bufferize_destination_only, /*optional*/bool emit_dealloc) {
  odsState.addOperands(target);
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  odsState.getOrAddProperties<Properties>().memcpy_op = odsBuilder.getStringAttr(memcpy_op);
  odsState.getOrAddProperties<Properties>().alloc_op = odsBuilder.getStringAttr(alloc_op);
  if (bufferize_destination_only) {
    odsState.getOrAddProperties<Properties>().bufferize_destination_only = ((bufferize_destination_only) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (emit_dealloc) {
    odsState.getOrAddProperties<Properties>().emit_dealloc = ((emit_dealloc) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(allocated_buffer);
  odsState.addTypes(new_ops);
}

void BufferizeToAllocationOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::llvm::StringRef memcpy_op, ::llvm::StringRef alloc_op, /*optional*/bool bufferize_destination_only, /*optional*/bool emit_dealloc) {
  odsState.addOperands(target);
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  odsState.getOrAddProperties<Properties>().memcpy_op = odsBuilder.getStringAttr(memcpy_op);
  odsState.getOrAddProperties<Properties>().alloc_op = odsBuilder.getStringAttr(alloc_op);
  if (bufferize_destination_only) {
    odsState.getOrAddProperties<Properties>().bufferize_destination_only = ((bufferize_destination_only) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (emit_dealloc) {
    odsState.getOrAddProperties<Properties>().emit_dealloc = ((emit_dealloc) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BufferizeToAllocationOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<BufferizeToAllocationOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void BufferizeToAllocationOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.memcpy_op)
    properties.memcpy_op = odsBuilder.getStringAttr("bufferization.materialize_in_destination");
  if (!properties.alloc_op)
    properties.alloc_op = odsBuilder.getStringAttr("memref.alloc");
}

::llvm::LogicalResult BufferizeToAllocationOp::verifyInvariantsImpl() {
  auto tblgen_alloc_op = getProperties().alloc_op; (void)tblgen_alloc_op;
  auto tblgen_bufferize_destination_only = getProperties().bufferize_destination_only; (void)tblgen_bufferize_destination_only;
  auto tblgen_emit_dealloc = getProperties().emit_dealloc; (void)tblgen_emit_dealloc;
  auto tblgen_memcpy_op = getProperties().memcpy_op; (void)tblgen_memcpy_op;
  auto tblgen_memory_space = getProperties().memory_space; (void)tblgen_memory_space;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(*this, tblgen_memory_space, "memory_space")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps1(*this, tblgen_memcpy_op, "memcpy_op")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps1(*this, tblgen_alloc_op, "alloc_op")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_bufferize_destination_only, "bufferize_destination_only")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_emit_dealloc, "emit_dealloc")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult BufferizeToAllocationOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult BufferizeToAllocationOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::transform::AnyValueType>();
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getType<::mlir::transform::AnyOpType>();
  result.addTypes(odsBuildableType0);
  result.addTypes(odsBuildableType1);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BufferizeToAllocationOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMemcpyOpAttr();
     if(attr && (attr == odsBuilder.getStringAttr("bufferization.materialize_in_destination")))
       elidedAttrs.push_back("memcpy_op");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAllocOpAttr();
     if(attr && (attr == odsBuilder.getStringAttr("memref.alloc")))
       elidedAttrs.push_back("alloc_op");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBufferizeDestinationOnlyAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("bufferize_destination_only");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getEmitDeallocAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("emit_dealloc");
  }
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::BufferizeToAllocationOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ContinuousTileSizesOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ContinuousTileSizesOpGenericAdaptorBase::ContinuousTileSizesOpGenericAdaptorBase(ContinuousTileSizesOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t ContinuousTileSizesOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

uint64_t ContinuousTileSizesOpGenericAdaptorBase::getTargetSize() {
  auto attr = getTargetSizeAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ContinuousTileSizesOpAdaptor::ContinuousTileSizesOpAdaptor(ContinuousTileSizesOp op) : ContinuousTileSizesOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ContinuousTileSizesOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'transform.structured.continuous_tile_sizes' op ""requires attribute 'dimension'");
  auto tblgen_target_size = getProperties().target_size; (void)tblgen_target_size;
  if (!tblgen_target_size) return emitError(loc, "'transform.structured.continuous_tile_sizes' op ""requires attribute 'target_size'");

  if (tblgen_dimension && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_dimension))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_dimension).getType().isSignlessInteger(64)))) && ((!::llvm::cast<::mlir::IntegerAttr>(tblgen_dimension).getValue().isNegative()))))
    return emitError(loc, "'transform.structured.continuous_tile_sizes' op ""attribute 'dimension' failed to satisfy constraint: 64-bit signless integer attribute whose value is non-negative");

  if (tblgen_target_size && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_target_size))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_target_size).getType().isSignlessInteger(64)))) && ((!::llvm::cast<::mlir::IntegerAttr>(tblgen_target_size).getValue().isNegative()))))
    return emitError(loc, "'transform.structured.continuous_tile_sizes' op ""attribute 'target_size' failed to satisfy constraint: 64-bit signless integer attribute whose value is non-negative");
  return ::mlir::success();
}

void ContinuousTileSizesOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "tile_sizes");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "chunk_sizes");
}

::llvm::LogicalResult ContinuousTileSizesOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dimension;
       auto attr = dict.get("dimension");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dimension` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.target_size;
       auto attr = dict.get("target_size");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `target_size` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ContinuousTileSizesOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dimension;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dimension",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.target_size;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("target_size",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ContinuousTileSizesOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()), 
    llvm::hash_value(prop.target_size.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ContinuousTileSizesOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;

    if (name == "target_size")
      return prop.target_size;
  return std::nullopt;
}

void ContinuousTileSizesOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }

    if (name == "target_size") {
       prop.target_size = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.target_size)>>(value);
       return;
    }
}

void ContinuousTileSizesOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);

    if (prop.target_size) attrs.append("target_size", prop.target_size);
}

::llvm::LogicalResult ContinuousTileSizesOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(attr, "dimension", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTargetSizeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(attr, "target_size", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ContinuousTileSizesOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.target_size)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ContinuousTileSizesOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);
  writer.writeAttribute(prop.target_size);
}

uint64_t ContinuousTileSizesOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

uint64_t ContinuousTileSizesOp::getTargetSize() {
  auto attr = getTargetSizeAttr();
  return attr.getValue().getZExtValue();
}

void ContinuousTileSizesOp::setDimension(uint64_t attrValue) {
  getProperties().dimension = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void ContinuousTileSizesOp::setTargetSize(uint64_t attrValue) {
  getProperties().target_size = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void ContinuousTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tile_sizes, ::mlir::Type chunk_sizes, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.getOrAddProperties<Properties>().target_size = target_size;
  odsState.addTypes(tile_sizes);
  odsState.addTypes(chunk_sizes);
}

void ContinuousTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.getOrAddProperties<Properties>().target_size = target_size;
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ContinuousTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tile_sizes, ::mlir::Type chunk_sizes, ::mlir::Value target, uint64_t dimension, uint64_t target_size) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension);
  odsState.getOrAddProperties<Properties>().target_size = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), target_size);
  odsState.addTypes(tile_sizes);
  odsState.addTypes(chunk_sizes);
}

void ContinuousTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, uint64_t target_size) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension);
  odsState.getOrAddProperties<Properties>().target_size = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), target_size);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ContinuousTileSizesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ContinuousTileSizesOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult ContinuousTileSizesOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");
  auto tblgen_target_size = getProperties().target_size; (void)tblgen_target_size;
  if (!tblgen_target_size) return emitOpError("requires attribute 'target_size'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps3(*this, tblgen_target_size, "target_size")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult ContinuousTileSizesOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ContinuousTileSizesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);
  ::mlir::Type tile_sizesRawType{};
  ::llvm::ArrayRef<::mlir::Type> tile_sizesTypes(&tile_sizesRawType, 1);
  ::mlir::Type chunk_sizesRawType{};
  ::llvm::ArrayRef<::mlir::Type> chunk_sizesTypes(&chunk_sizesRawType, 1);

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
    auto odsResult = parseContinuousTileSizeTypes(parser, targetRawType, tile_sizesRawType, chunk_sizesRawType);
    if (odsResult) return ::mlir::failure();
  }
  result.addTypes(tile_sizesTypes);
  result.addTypes(chunk_sizesTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ContinuousTileSizesOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printContinuousTileSizeTypes(_odsPrinter, *this, getTarget().getType(), getTileSizes().getType(), getChunkSizes().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ContinuousTileSizesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ConvertConv2DToImg2ColOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ConvertConv2DToImg2ColOpAdaptor::ConvertConv2DToImg2ColOpAdaptor(ConvertConv2DToImg2ColOp op) : ConvertConv2DToImg2ColOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ConvertConv2DToImg2ColOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ConvertConv2DToImg2ColOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "img2col_tensor");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "transformed");
}

void ConvertConv2DToImg2ColOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type img2col_tensor, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(img2col_tensor);
  odsState.addTypes(transformed);
}

void ConvertConv2DToImg2ColOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvertConv2DToImg2ColOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ConvertConv2DToImg2ColOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult ConvertConv2DToImg2ColOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ConvertConv2DToImg2ColOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
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

void ConvertConv2DToImg2ColOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ConvertConv2DToImg2ColOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ConvertToLoopsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ConvertToLoopsOpAdaptor::ConvertToLoopsOpAdaptor(ConvertToLoopsOp op) : ConvertToLoopsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ConvertToLoopsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ConvertToLoopsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(result);
}

void ConvertToLoopsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvertToLoopsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ConvertToLoopsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult ConvertToLoopsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ConvertToLoopsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void ConvertToLoopsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ConvertToLoopsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DecomposeInterfaceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
DecomposeInterfaceOpAdaptor::DecomposeInterfaceOpAdaptor(DecomposeInterfaceOp op) : DecomposeInterfaceOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult DecomposeInterfaceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void DecomposeInterfaceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void DecomposeInterfaceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DecomposeInterfaceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult DecomposeInterfaceOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult DecomposeInterfaceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DecomposeInterfaceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void DecomposeInterfaceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::DecomposeInterfaceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DecomposeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
DecomposeOpAdaptor::DecomposeOpAdaptor(DecomposeOp op) : DecomposeOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult DecomposeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void DecomposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void DecomposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DecomposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult DecomposeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult DecomposeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DecomposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void DecomposeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::DecomposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EliminateLinalgOpAnchoredEmptyTensorsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor::EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor(EliminateLinalgOpAnchoredEmptyTensorsOp op) : EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void EliminateLinalgOpAnchoredEmptyTensorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void EliminateLinalgOpAnchoredEmptyTensorsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EliminateLinalgOpAnchoredEmptyTensorsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult EliminateLinalgOpAnchoredEmptyTensorsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult EliminateLinalgOpAnchoredEmptyTensorsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult EliminateLinalgOpAnchoredEmptyTensorsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void EliminateLinalgOpAnchoredEmptyTensorsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::EliminateLinalgOpAnchoredEmptyTensorsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FlattenElementwiseLinalgOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
FlattenElementwiseLinalgOpAdaptor::FlattenElementwiseLinalgOpAdaptor(FlattenElementwiseLinalgOp op) : FlattenElementwiseLinalgOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult FlattenElementwiseLinalgOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void FlattenElementwiseLinalgOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void FlattenElementwiseLinalgOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FlattenElementwiseLinalgOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult FlattenElementwiseLinalgOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult FlattenElementwiseLinalgOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FlattenElementwiseLinalgOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
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

void FlattenElementwiseLinalgOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::FlattenElementwiseLinalgOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseIntoContainingOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
FuseIntoContainingOpAdaptor::FuseIntoContainingOpAdaptor(FuseIntoContainingOp op) : FuseIntoContainingOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult FuseIntoContainingOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void FuseIntoContainingOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "fused_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "new_containing_op");
}

void FuseIntoContainingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type fused_op, ::mlir::Type new_containing_op, ::mlir::Value producer_op, ::mlir::Value containing_op) {
  odsState.addOperands(producer_op);
  odsState.addOperands(containing_op);
  odsState.addTypes(fused_op);
  odsState.addTypes(new_containing_op);
}

void FuseIntoContainingOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value producer_op, ::mlir::Value containing_op) {
  odsState.addOperands(producer_op);
  odsState.addOperands(containing_op);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FuseIntoContainingOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult FuseIntoContainingOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult FuseIntoContainingOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FuseIntoContainingOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand producer_opRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> producer_opOperands(&producer_opRawOperand, 1);  ::llvm::SMLoc producer_opOperandsLoc;
  (void)producer_opOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand containing_opRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> containing_opOperands(&containing_opRawOperand, 1);  ::llvm::SMLoc containing_opOperandsLoc;
  (void)containing_opOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  producer_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(producer_opRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("into"))
    return ::mlir::failure();

  containing_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(containing_opRawOperand))
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
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(producer_opOperands, containing_opOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FuseIntoContainingOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getProducerOp();
  _odsPrinter << ' ' << "into";
  _odsPrinter << ' ';
  _odsPrinter << getContainingOp();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::FuseIntoContainingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FuseOpGenericAdaptorBase::FuseOpGenericAdaptorBase(FuseOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tile_sizes);
  return attr;
}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileInterchangeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tile_interchange);
  return attr;
}

::mlir::ArrayAttr FuseOpGenericAdaptorBase::getTileInterchange() {
  auto attr = getTileInterchangeAttr();
  return attr;
}

} // namespace detail
FuseOpAdaptor::FuseOpAdaptor(FuseOp op) : FuseOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult FuseOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_interchange = getProperties().tile_interchange; (void)tblgen_tile_interchange;
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (tblgen_tile_sizes && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_tile_sizes))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_tile_sizes), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.fuse' op ""attribute 'tile_sizes' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_tile_interchange && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_tile_interchange))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_tile_interchange), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.fuse' op ""attribute 'tile_interchange' failed to satisfy constraint: 64-bit integer array attribute");
  return ::mlir::success();
}

void FuseOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "transformed");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "loops");
}

std::pair<unsigned, unsigned> FuseOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::llvm::LogicalResult FuseOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_interchange;
       auto attr = dict.get("tile_interchange");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_interchange` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tile_sizes;
       auto attr = dict.get("tile_sizes");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute FuseOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_interchange;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_interchange",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tile_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FuseOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_interchange.getAsOpaquePointer()), 
    llvm::hash_value(prop.tile_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> FuseOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_interchange")
      return prop.tile_interchange;

    if (name == "tile_sizes")
      return prop.tile_sizes;
  return std::nullopt;
}

void FuseOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_interchange") {
       prop.tile_interchange = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_interchange)>>(value);
       return;
    }

    if (name == "tile_sizes") {
       prop.tile_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_sizes)>>(value);
       return;
    }
}

void FuseOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_interchange) attrs.append("tile_interchange", prop.tile_interchange);

    if (prop.tile_sizes) attrs.append("tile_sizes", prop.tile_sizes);
}

::llvm::LogicalResult FuseOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileInterchangeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "tile_interchange", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTileSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "tile_sizes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult FuseOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.tile_interchange)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tile_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void FuseOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.tile_interchange);

  writer.writeOptionalAttribute(prop.tile_sizes);
}

::mlir::ArrayAttr FuseOp::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::mlir::ArrayAttr FuseOp::getTileInterchange() {
  auto attr = getTileInterchangeAttr();
  return attr;
}

void FuseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes, ::mlir::ArrayAttr tile_interchange) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  if (tile_interchange) {
    odsState.getOrAddProperties<Properties>().tile_interchange = tile_interchange;
  }
  odsState.addTypes(transformed);
  odsState.addTypes(loops);
}

void FuseOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes, ::mlir::ArrayAttr tile_interchange) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  if (tile_interchange) {
    odsState.getOrAddProperties<Properties>().tile_interchange = tile_interchange;
  }
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FuseOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<FuseOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void FuseOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.tile_sizes)
    properties.tile_sizes = odsBuilder.getI64ArrayAttr({});
  if (!properties.tile_interchange)
    properties.tile_interchange = odsBuilder.getI64ArrayAttr({});
}

::llvm::LogicalResult FuseOp::verifyInvariantsImpl() {
  auto tblgen_tile_interchange = getProperties().tile_interchange; (void)tblgen_tile_interchange;
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_tile_sizes, "tile_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_tile_interchange, "tile_interchange")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult FuseOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult FuseOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::ArrayAttr tile_sizesAttr;
  ::mlir::ArrayAttr tile_interchangeAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();

  ::mlir::OptionalParseResult parseResulttile_sizesAttr =
    parser.parseOptionalAttribute(tile_sizesAttr, parser.getBuilder().getType<::mlir::NoneType>());
  if (parseResulttile_sizesAttr.has_value() && failed(*parseResulttile_sizesAttr))
    return ::mlir::failure();
  if (parseResulttile_sizesAttr.has_value() && succeeded(*parseResulttile_sizesAttr))
  if (tile_sizesAttr) result.getOrAddProperties<FuseOp::Properties>().tile_sizes = tile_sizesAttr;
  if (tile_sizesAttr) {
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("interchange"))) {

  if (parser.parseCustomAttributeWithFallback(tile_interchangeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (tile_interchangeAttr) result.getOrAddProperties<FuseOp::Properties>().tile_interchange = tile_interchangeAttr;
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

void FuseOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (getTileSizesAttr() && getTileSizesAttr() != ::mlir::OpBuilder((*this)->getContext()).getI64ArrayAttr({})) {
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getTileSizesAttr());
  }
  if (getTileInterchangeAttr() && getTileInterchangeAttr() != ::mlir::OpBuilder((*this)->getContext()).getI64ArrayAttr({})) {
    _odsPrinter << ' ' << "interchange";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getTileInterchangeAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("tile_sizes");
  elidedAttrs.push_back("tile_interchange");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTileSizesAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("tile_sizes");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTileInterchangeAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("tile_interchange");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::FuseOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GeneralizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
GeneralizeOpAdaptor::GeneralizeOpAdaptor(GeneralizeOp op) : GeneralizeOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult GeneralizeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void GeneralizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void GeneralizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GeneralizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult GeneralizeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult GeneralizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GeneralizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);
  ::mlir::Type transformedRawType{};
  ::llvm::ArrayRef<::mlir::Type> transformedTypes(&transformedRawType, 1);

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
    auto odsResult = parseSemiFunctionType(parser, targetRawType, transformedRawType);
    if (odsResult) return ::mlir::failure();
  }
  result.addTypes(transformedTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GeneralizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getTarget().getType(), getTransformed().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::GeneralizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistPadBuildPackingLoopNestOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
HoistPadBuildPackingLoopNestOpGenericAdaptorBase::HoistPadBuildPackingLoopNestOpGenericAdaptorBase(HoistPadBuildPackingLoopNestOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::DenseI64ArrayAttr HoistPadBuildPackingLoopNestOpGenericAdaptorBase::getTransposeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().transpose);
  return attr;
}

::llvm::ArrayRef<int64_t> HoistPadBuildPackingLoopNestOpGenericAdaptorBase::getTranspose() {
  auto attr = getTransposeAttr();
  return attr;
}

} // namespace detail
HoistPadBuildPackingLoopNestOpAdaptor::HoistPadBuildPackingLoopNestOpAdaptor(HoistPadBuildPackingLoopNestOp op) : HoistPadBuildPackingLoopNestOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult HoistPadBuildPackingLoopNestOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (tblgen_transpose && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_transpose))))
    return emitError(loc, "'transform.structured.hoist_pad.build_packing_loop_nest' op ""attribute 'transpose' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

::llvm::LogicalResult HoistPadBuildPackingLoopNestOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.transpose;
       auto attr = dict.get("transpose");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `transpose` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute HoistPadBuildPackingLoopNestOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.transpose;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("transpose",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code HoistPadBuildPackingLoopNestOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.transpose.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> HoistPadBuildPackingLoopNestOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "transpose")
      return prop.transpose;
  return std::nullopt;
}

void HoistPadBuildPackingLoopNestOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "transpose") {
       prop.transpose = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.transpose)>>(value);
       return;
    }
}

void HoistPadBuildPackingLoopNestOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.transpose) attrs.append("transpose", prop.transpose);
}

::llvm::LogicalResult HoistPadBuildPackingLoopNestOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTransposeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "transpose", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult HoistPadBuildPackingLoopNestOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.transpose)))
    return ::mlir::failure();
  return ::mlir::success();
}

void HoistPadBuildPackingLoopNestOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.transpose);
}

::llvm::ArrayRef<int64_t> HoistPadBuildPackingLoopNestOp::getTranspose() {
  auto attr = getTransposeAttr();
  return attr;
}

void HoistPadBuildPackingLoopNestOp::setTranspose(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().transpose = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void HoistPadBuildPackingLoopNestOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packing_loop, ::mlir::Value target, ::mlir::Value loop, ::mlir::DenseI64ArrayAttr transpose) {
  odsState.addOperands(target);
  odsState.addOperands(loop);
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  odsState.addTypes(packing_loop);
}

void HoistPadBuildPackingLoopNestOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::Value loop, ::mlir::DenseI64ArrayAttr transpose) {
  odsState.addOperands(target);
  odsState.addOperands(loop);
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistPadBuildPackingLoopNestOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packing_loop, ::mlir::Value target, ::mlir::Value loop, ::llvm::ArrayRef<int64_t> transpose) {
  odsState.addOperands(target);
  odsState.addOperands(loop);
  odsState.getOrAddProperties<Properties>().transpose = odsBuilder.getDenseI64ArrayAttr(transpose);
  odsState.addTypes(packing_loop);
}

void HoistPadBuildPackingLoopNestOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::Value loop, ::llvm::ArrayRef<int64_t> transpose) {
  odsState.addOperands(target);
  odsState.addOperands(loop);
  odsState.getOrAddProperties<Properties>().transpose = odsBuilder.getDenseI64ArrayAttr(transpose);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistPadBuildPackingLoopNestOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<HoistPadBuildPackingLoopNestOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void HoistPadBuildPackingLoopNestOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.transpose)
    properties.transpose = odsBuilder.getDenseI64ArrayAttr({});
}

::llvm::LogicalResult HoistPadBuildPackingLoopNestOp::verifyInvariantsImpl() {
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_transpose, "transpose")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult HoistPadBuildPackingLoopNestOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult HoistPadBuildPackingLoopNestOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand loopRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> loopOperands(&loopRawOperand, 1);  ::llvm::SMLoc loopOperandsLoc;
  (void)loopOperandsLoc;
  ::mlir::DenseI64ArrayAttr transposeAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("above"))
    return ::mlir::failure();

  loopOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(loopRawOperand))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("transpose"))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(transposeAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (transposeAttr) result.getOrAddProperties<HoistPadBuildPackingLoopNestOp::Properties>().transpose = transposeAttr;
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
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(targetOperands, loopOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void HoistPadBuildPackingLoopNestOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "above";
  _odsPrinter << ' ';
  _odsPrinter << getLoop();
  if (getTransposeAttr() && getTransposeAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "transpose";
    _odsPrinter << ' ' << "by";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getTransposeAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("transpose");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTransposeAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("transpose");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::HoistPadBuildPackingLoopNestOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistPadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
HoistPadOpGenericAdaptorBase::HoistPadOpGenericAdaptorBase(HoistPadOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t HoistPadOpGenericAdaptorBase::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

::mlir::DenseI64ArrayAttr HoistPadOpGenericAdaptorBase::getTransposeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().transpose);
  return attr;
}

::llvm::ArrayRef<int64_t> HoistPadOpGenericAdaptorBase::getTranspose() {
  auto attr = getTransposeAttr();
  return attr;
}

} // namespace detail
HoistPadOpAdaptor::HoistPadOpAdaptor(HoistPadOp op) : HoistPadOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult HoistPadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitError(loc, "'transform.structured.hoist_pad' op ""requires attribute 'num_loops'");
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (tblgen_num_loops && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_num_loops))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num_loops).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.hoist_pad' op ""attribute 'num_loops' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_transpose && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_transpose))))
    return emitError(loc, "'transform.structured.hoist_pad' op ""attribute 'transpose' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

::llvm::LogicalResult HoistPadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.num_loops;
       auto attr = dict.get("num_loops");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `num_loops` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.transpose;
       auto attr = dict.get("transpose");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `transpose` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute HoistPadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.num_loops;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("num_loops",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.transpose;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("transpose",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code HoistPadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.num_loops.getAsOpaquePointer()), 
    llvm::hash_value(prop.transpose.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> HoistPadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "num_loops")
      return prop.num_loops;

    if (name == "transpose")
      return prop.transpose;
  return std::nullopt;
}

void HoistPadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "num_loops") {
       prop.num_loops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num_loops)>>(value);
       return;
    }

    if (name == "transpose") {
       prop.transpose = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.transpose)>>(value);
       return;
    }
}

void HoistPadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.num_loops) attrs.append("num_loops", prop.num_loops);

    if (prop.transpose) attrs.append("transpose", prop.transpose);
}

::llvm::LogicalResult HoistPadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNumLoopsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "num_loops", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTransposeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "transpose", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult HoistPadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.num_loops)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.transpose)))
    return ::mlir::failure();
  return ::mlir::success();
}

void HoistPadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.num_loops);

  writer.writeOptionalAttribute(prop.transpose);
}

uint64_t HoistPadOp::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

::llvm::ArrayRef<int64_t> HoistPadOp::getTranspose() {
  auto attr = getTransposeAttr();
  return attr;
}

void HoistPadOp::setNumLoops(uint64_t attrValue) {
  getProperties().num_loops = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void HoistPadOp::setTranspose(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().transpose = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void HoistPadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::DenseI64ArrayAttr transpose) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  odsState.addTypes(transformed);
}

void HoistPadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::DenseI64ArrayAttr transpose) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  if (transpose) {
    odsState.getOrAddProperties<Properties>().transpose = transpose;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistPadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t num_loops, ::llvm::ArrayRef<int64_t> transpose) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  odsState.getOrAddProperties<Properties>().transpose = odsBuilder.getDenseI64ArrayAttr(transpose);
  odsState.addTypes(transformed);
}

void HoistPadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t num_loops, ::llvm::ArrayRef<int64_t> transpose) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  odsState.getOrAddProperties<Properties>().transpose = odsBuilder.getDenseI64ArrayAttr(transpose);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistPadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<HoistPadOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void HoistPadOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.transpose)
    properties.transpose = odsBuilder.getDenseI64ArrayAttr({});
}

::llvm::LogicalResult HoistPadOp::verifyInvariantsImpl() {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitOpError("requires attribute 'num_loops'");
  auto tblgen_transpose = getProperties().transpose; (void)tblgen_transpose;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_num_loops, "num_loops")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_transpose, "transpose")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult HoistPadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult HoistPadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::IntegerAttr num_loopsAttr;
  ::mlir::DenseI64ArrayAttr transposeAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(num_loopsAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (num_loopsAttr) result.getOrAddProperties<HoistPadOp::Properties>().num_loops = num_loopsAttr;
  if (parser.parseKeyword("loops"))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("transpose"))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(transposeAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (transposeAttr) result.getOrAddProperties<HoistPadOp::Properties>().transpose = transposeAttr;
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

void HoistPadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "by";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getNumLoopsAttr());
  _odsPrinter << ' ' << "loops";
  if (getTransposeAttr() && getTransposeAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "transpose";
    _odsPrinter << ' ' << "by";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getTransposeAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("num_loops");
  elidedAttrs.push_back("transpose");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTransposeAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("transpose");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::HoistPadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistRedundantVectorBroadcastsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
HoistRedundantVectorBroadcastsOpAdaptor::HoistRedundantVectorBroadcastsOpAdaptor(HoistRedundantVectorBroadcastsOp op) : HoistRedundantVectorBroadcastsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult HoistRedundantVectorBroadcastsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void HoistRedundantVectorBroadcastsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void HoistRedundantVectorBroadcastsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistRedundantVectorBroadcastsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult HoistRedundantVectorBroadcastsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult HoistRedundantVectorBroadcastsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult HoistRedundantVectorBroadcastsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void HoistRedundantVectorBroadcastsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::HoistRedundantVectorBroadcastsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistRedundantVectorTransfersOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
HoistRedundantVectorTransfersOpAdaptor::HoistRedundantVectorTransfersOpAdaptor(HoistRedundantVectorTransfersOp op) : HoistRedundantVectorTransfersOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult HoistRedundantVectorTransfersOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void HoistRedundantVectorTransfersOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void HoistRedundantVectorTransfersOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void HoistRedundantVectorTransfersOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult HoistRedundantVectorTransfersOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult HoistRedundantVectorTransfersOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult HoistRedundantVectorTransfersOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void HoistRedundantVectorTransfersOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::HoistRedundantVectorTransfersOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::InsertSliceToCopyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
InsertSliceToCopyOpAdaptor::InsertSliceToCopyOpAdaptor(InsertSliceToCopyOp op) : InsertSliceToCopyOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult InsertSliceToCopyOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void InsertSliceToCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void InsertSliceToCopyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertSliceToCopyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult InsertSliceToCopyOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult InsertSliceToCopyOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult InsertSliceToCopyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void InsertSliceToCopyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::InsertSliceToCopyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::InterchangeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
InterchangeOpGenericAdaptorBase::InterchangeOpGenericAdaptorBase(InterchangeOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::DenseI64ArrayAttr InterchangeOpGenericAdaptorBase::getIteratorInterchangeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().iterator_interchange);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> InterchangeOpGenericAdaptorBase::getIteratorInterchange() {
  auto attr = getIteratorInterchangeAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

} // namespace detail
InterchangeOpAdaptor::InterchangeOpAdaptor(InterchangeOp op) : InterchangeOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult InterchangeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_iterator_interchange = getProperties().iterator_interchange; (void)tblgen_iterator_interchange;

  if (tblgen_iterator_interchange && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_iterator_interchange))) && ((::llvm::all_of(::llvm::cast<DenseI64ArrayAttr>(tblgen_iterator_interchange).asArrayRef(), [&](auto v) { return v >= 0; })))))
    return emitError(loc, "'transform.structured.interchange' op ""attribute 'iterator_interchange' failed to satisfy constraint: i64 dense array attribute whose value is non-negative");
  return ::mlir::success();
}

::llvm::LogicalResult InterchangeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.iterator_interchange;
       auto attr = dict.get("iterator_interchange");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `iterator_interchange` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute InterchangeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.iterator_interchange;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("iterator_interchange",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code InterchangeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.iterator_interchange.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> InterchangeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "iterator_interchange")
      return prop.iterator_interchange;
  return std::nullopt;
}

void InterchangeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "iterator_interchange") {
       prop.iterator_interchange = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.iterator_interchange)>>(value);
       return;
    }
}

void InterchangeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.iterator_interchange) attrs.append("iterator_interchange", prop.iterator_interchange);
}

::llvm::LogicalResult InterchangeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIteratorInterchangeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(attr, "iterator_interchange", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult InterchangeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.iterator_interchange)))
    return ::mlir::failure();
  return ::mlir::success();
}

void InterchangeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.iterator_interchange);
}

::llvm::ArrayRef<int64_t> InterchangeOp::getIteratorInterchange() {
  auto attr = getIteratorInterchangeAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

void InterchangeOp::setIteratorInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    auto &odsProp = getProperties().iterator_interchange;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange) {
  odsState.addOperands(target);
  if (iterator_interchange) {
    odsState.getOrAddProperties<Properties>().iterator_interchange = iterator_interchange;
  }
  odsState.addTypes(transformed);
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange) {
  odsState.addOperands(target);
  if (iterator_interchange) {
    odsState.getOrAddProperties<Properties>().iterator_interchange = iterator_interchange;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().iterator_interchange = odsBuilder.getDenseI64ArrayAttr(iterator_interchange);
  odsState.addTypes(transformed);
}

void InterchangeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().iterator_interchange = odsBuilder.getDenseI64ArrayAttr(iterator_interchange);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InterchangeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<InterchangeOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult InterchangeOp::verifyInvariantsImpl() {
  auto tblgen_iterator_interchange = getProperties().iterator_interchange; (void)tblgen_iterator_interchange;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps7(*this, tblgen_iterator_interchange, "iterator_interchange")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult InterchangeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult InterchangeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr iterator_interchangeAttr;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);
  ::mlir::Type transformedRawType{};
  ::llvm::ArrayRef<::mlir::Type> transformedTypes(&transformedRawType, 1);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("iterator_interchange"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(iterator_interchangeAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (iterator_interchangeAttr) result.getOrAddProperties<InterchangeOp::Properties>().iterator_interchange = iterator_interchangeAttr;
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
  if (parser.parseColon())
    return ::mlir::failure();
  {
    auto odsResult = parseSemiFunctionType(parser, targetRawType, transformedRawType);
    if (odsResult) return ::mlir::failure();
  }
  result.addTypes(transformedTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void InterchangeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (getIteratorInterchangeAttr()) {
    _odsPrinter << ' ' << "iterator_interchange";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getIteratorInterchangeAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("iterator_interchange");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIteratorInterchangeAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("iterator_interchange");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getTarget().getType(), getTransformed().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::InterchangeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LowerPackOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
LowerPackOpAdaptor::LowerPackOpAdaptor(LowerPackOp op) : LowerPackOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult LowerPackOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void LowerPackOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "pad_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "expand_shape_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "transpose_op");
}

void LowerPackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type pad_op, ::mlir::Type expand_shape_op, ::mlir::Type transpose_op, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(pad_op);
  odsState.addTypes(expand_shape_op);
  odsState.addTypes(transpose_op);
}

void LowerPackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LowerPackOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult LowerPackOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps6(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps7(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult LowerPackOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LowerPackOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void LowerPackOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LowerPackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LowerUnPackOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
LowerUnPackOpAdaptor::LowerUnPackOpAdaptor(LowerUnPackOp op) : LowerUnPackOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult LowerUnPackOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void LowerUnPackOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "empty_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "transpose_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "collapse_shape_op");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "extract_slice_op");
}

void LowerUnPackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type empty_op, ::mlir::Type transpose_op, ::mlir::Type collapse_shape_op, ::mlir::Type extract_slice_op, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(empty_op);
  odsState.addTypes(transpose_op);
  odsState.addTypes(collapse_shape_op);
  odsState.addTypes(extract_slice_op);
}

void LowerUnPackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LowerUnPackOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 4u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult LowerUnPackOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps10(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps8(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps11(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps12(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult LowerUnPackOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult LowerUnPackOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void LowerUnPackOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::LowerUnPackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MapCopyToThreadsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MapCopyToThreadsOpGenericAdaptorBase::MapCopyToThreadsOpGenericAdaptorBase(MapCopyToThreadsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t MapCopyToThreadsOpGenericAdaptorBase::getTotalNumThreads() {
  auto attr = getTotalNumThreadsAttr();
  return attr.getValue().getZExtValue();
}

uint64_t MapCopyToThreadsOpGenericAdaptorBase::getDesiredBitAlignment() {
  auto attr = getDesiredBitAlignmentAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MapCopyToThreadsOpAdaptor::MapCopyToThreadsOpAdaptor(MapCopyToThreadsOp op) : MapCopyToThreadsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MapCopyToThreadsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_desired_bit_alignment = getProperties().desired_bit_alignment; (void)tblgen_desired_bit_alignment;
  if (!tblgen_desired_bit_alignment) return emitError(loc, "'transform.structured.gpu.map_copy_to_threads' op ""requires attribute 'desired_bit_alignment'");
  auto tblgen_total_num_threads = getProperties().total_num_threads; (void)tblgen_total_num_threads;
  if (!tblgen_total_num_threads) return emitError(loc, "'transform.structured.gpu.map_copy_to_threads' op ""requires attribute 'total_num_threads'");

  if (tblgen_total_num_threads && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_total_num_threads))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_total_num_threads).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.gpu.map_copy_to_threads' op ""attribute 'total_num_threads' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_desired_bit_alignment && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_desired_bit_alignment))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_desired_bit_alignment).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.gpu.map_copy_to_threads' op ""attribute 'desired_bit_alignment' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

void MapCopyToThreadsOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "forall_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "tiled_op");
}

::llvm::LogicalResult MapCopyToThreadsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.desired_bit_alignment;
       auto attr = dict.get("desired_bit_alignment");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `desired_bit_alignment` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.total_num_threads;
       auto attr = dict.get("total_num_threads");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `total_num_threads` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MapCopyToThreadsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.desired_bit_alignment;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("desired_bit_alignment",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.total_num_threads;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("total_num_threads",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MapCopyToThreadsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.desired_bit_alignment.getAsOpaquePointer()), 
    llvm::hash_value(prop.total_num_threads.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MapCopyToThreadsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "desired_bit_alignment")
      return prop.desired_bit_alignment;

    if (name == "total_num_threads")
      return prop.total_num_threads;
  return std::nullopt;
}

void MapCopyToThreadsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "desired_bit_alignment") {
       prop.desired_bit_alignment = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.desired_bit_alignment)>>(value);
       return;
    }

    if (name == "total_num_threads") {
       prop.total_num_threads = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.total_num_threads)>>(value);
       return;
    }
}

void MapCopyToThreadsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.desired_bit_alignment) attrs.append("desired_bit_alignment", prop.desired_bit_alignment);

    if (prop.total_num_threads) attrs.append("total_num_threads", prop.total_num_threads);
}

::llvm::LogicalResult MapCopyToThreadsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDesiredBitAlignmentAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "desired_bit_alignment", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTotalNumThreadsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "total_num_threads", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MapCopyToThreadsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.desired_bit_alignment)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.total_num_threads)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapCopyToThreadsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.desired_bit_alignment);
  writer.writeAttribute(prop.total_num_threads);
}

uint64_t MapCopyToThreadsOp::getTotalNumThreads() {
  auto attr = getTotalNumThreadsAttr();
  return attr.getValue().getZExtValue();
}

uint64_t MapCopyToThreadsOp::getDesiredBitAlignment() {
  auto attr = getDesiredBitAlignmentAttr();
  return attr.getValue().getZExtValue();
}

void MapCopyToThreadsOp::setTotalNumThreads(uint64_t attrValue) {
  getProperties().total_num_threads = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void MapCopyToThreadsOp::setDesiredBitAlignment(uint64_t attrValue) {
  getProperties().desired_bit_alignment = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void MapCopyToThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::IntegerAttr total_num_threads, ::mlir::IntegerAttr desired_bit_alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().total_num_threads = total_num_threads;
  odsState.getOrAddProperties<Properties>().desired_bit_alignment = desired_bit_alignment;
  odsState.addTypes(forall_op);
  odsState.addTypes(tiled_op);
}

void MapCopyToThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr total_num_threads, ::mlir::IntegerAttr desired_bit_alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().total_num_threads = total_num_threads;
  odsState.getOrAddProperties<Properties>().desired_bit_alignment = desired_bit_alignment;
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapCopyToThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, uint64_t total_num_threads, uint64_t desired_bit_alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().total_num_threads = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), total_num_threads);
  odsState.getOrAddProperties<Properties>().desired_bit_alignment = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), desired_bit_alignment);
  odsState.addTypes(forall_op);
  odsState.addTypes(tiled_op);
}

void MapCopyToThreadsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t total_num_threads, uint64_t desired_bit_alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().total_num_threads = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), total_num_threads);
  odsState.getOrAddProperties<Properties>().desired_bit_alignment = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), desired_bit_alignment);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapCopyToThreadsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MapCopyToThreadsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MapCopyToThreadsOp::verifyInvariantsImpl() {
  auto tblgen_desired_bit_alignment = getProperties().desired_bit_alignment; (void)tblgen_desired_bit_alignment;
  if (!tblgen_desired_bit_alignment) return emitOpError("requires attribute 'desired_bit_alignment'");
  auto tblgen_total_num_threads = getProperties().total_num_threads; (void)tblgen_total_num_threads;
  if (!tblgen_total_num_threads) return emitOpError("requires attribute 'total_num_threads'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_total_num_threads, "total_num_threads")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_desired_bit_alignment, "desired_bit_alignment")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MapCopyToThreadsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MapCopyToThreadsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::IntegerAttr total_num_threadsAttr;
  ::mlir::IntegerAttr desired_bit_alignmentAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("total_num_threads"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(total_num_threadsAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (total_num_threadsAttr) result.getOrAddProperties<MapCopyToThreadsOp::Properties>().total_num_threads = total_num_threadsAttr;
  if (parser.parseKeyword("desired_bit_alignment"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(desired_bit_alignmentAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (desired_bit_alignmentAttr) result.getOrAddProperties<MapCopyToThreadsOp::Properties>().desired_bit_alignment = desired_bit_alignmentAttr;
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

void MapCopyToThreadsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "total_num_threads";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getTotalNumThreadsAttr());
  _odsPrinter << ' ' << "desired_bit_alignment";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getDesiredBitAlignmentAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("total_num_threads");
  elidedAttrs.push_back("desired_bit_alignment");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MapCopyToThreadsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchOpGenericAdaptorBase::MatchOpGenericAdaptorBase(MatchOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::std::optional< ::mlir::ArrayAttr > MatchOpGenericAdaptorBase::getOps() {
  auto attr = getOpsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::std::optional<mlir::transform::MatchInterfaceEnum> MatchOpGenericAdaptorBase::getInterface() {
  auto attr = getInterfaceAttr();
  return attr ? ::std::optional<mlir::transform::MatchInterfaceEnum>(attr.getValue()) : (::std::nullopt);
}

::std::optional< ::mlir::DictionaryAttr > MatchOpGenericAdaptorBase::getOpAttrs() {
  auto attr = getOpAttrsAttr();
  return attr ? ::std::optional< ::mlir::DictionaryAttr >(attr) : (::std::nullopt);
}

::std::optional<::mlir::Type> MatchOpGenericAdaptorBase::getFilterResultType() {
  auto attr = getFilterResultTypeAttr();
  return attr ? ::std::optional<::mlir::Type>(::llvm::cast<::mlir::Type>(attr.getValue())) : (::std::nullopt);
}

::std::optional< ::mlir::ArrayAttr > MatchOpGenericAdaptorBase::getFilterOperandTypes() {
  auto attr = getFilterOperandTypesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
MatchOpAdaptor::MatchOpAdaptor(MatchOp op) : MatchOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_filter_operand_types = getProperties().filter_operand_types; (void)tblgen_filter_operand_types;
  auto tblgen_filter_result_type = getProperties().filter_result_type; (void)tblgen_filter_result_type;
  auto tblgen_interface = getProperties().interface; (void)tblgen_interface;
  auto tblgen_op_attrs = getProperties().op_attrs; (void)tblgen_op_attrs;
  auto tblgen_ops = getProperties().ops; (void)tblgen_ops;

  if (tblgen_ops && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_ops))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_ops), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return emitError(loc, "'transform.structured.match' op ""attribute 'ops' failed to satisfy constraint: string array attribute");

  if (tblgen_interface && !((::llvm::isa<mlir::transform::MatchInterfaceEnumAttr>(tblgen_interface))))
    return emitError(loc, "'transform.structured.match' op ""attribute 'interface' failed to satisfy constraint: An interface to match");

  if (tblgen_op_attrs && !((::llvm::isa<::mlir::DictionaryAttr>(tblgen_op_attrs))))
    return emitError(loc, "'transform.structured.match' op ""attribute 'op_attrs' failed to satisfy constraint: dictionary of named attribute values");

  if (tblgen_filter_result_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_filter_result_type))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_filter_result_type).getValue()))) && ((true))))
    return emitError(loc, "'transform.structured.match' op ""attribute 'filter_result_type' failed to satisfy constraint: any type attribute");

  if (tblgen_filter_operand_types && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_filter_operand_types))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_filter_operand_types), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((true))); }))))
    return emitError(loc, "'transform.structured.match' op ""attribute 'filter_operand_types' failed to satisfy constraint: type array attribute");
  return ::mlir::success();
}

::llvm::LogicalResult MatchOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.filter_operand_types;
       auto attr = dict.get("filter_operand_types");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `filter_operand_types` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.filter_result_type;
       auto attr = dict.get("filter_result_type");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `filter_result_type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.interface;
       auto attr = dict.get("interface");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `interface` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.op_attrs;
       auto attr = dict.get("op_attrs");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `op_attrs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.ops;
       auto attr = dict.get("ops");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `ops` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatchOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.filter_operand_types;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("filter_operand_types",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.filter_result_type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("filter_result_type",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.interface;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("interface",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.op_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("op_attrs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.ops;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("ops",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatchOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.filter_operand_types.getAsOpaquePointer()), 
    llvm::hash_value(prop.filter_result_type.getAsOpaquePointer()), 
    llvm::hash_value(prop.interface.getAsOpaquePointer()), 
    llvm::hash_value(prop.op_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.ops.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatchOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "filter_operand_types")
      return prop.filter_operand_types;

    if (name == "filter_result_type")
      return prop.filter_result_type;

    if (name == "interface")
      return prop.interface;

    if (name == "op_attrs")
      return prop.op_attrs;

    if (name == "ops")
      return prop.ops;
  return std::nullopt;
}

void MatchOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "filter_operand_types") {
       prop.filter_operand_types = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.filter_operand_types)>>(value);
       return;
    }

    if (name == "filter_result_type") {
       prop.filter_result_type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.filter_result_type)>>(value);
       return;
    }

    if (name == "interface") {
       prop.interface = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.interface)>>(value);
       return;
    }

    if (name == "op_attrs") {
       prop.op_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.op_attrs)>>(value);
       return;
    }

    if (name == "ops") {
       prop.ops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.ops)>>(value);
       return;
    }
}

void MatchOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.filter_operand_types) attrs.append("filter_operand_types", prop.filter_operand_types);

    if (prop.filter_result_type) attrs.append("filter_result_type", prop.filter_result_type);

    if (prop.interface) attrs.append("interface", prop.interface);

    if (prop.op_attrs) attrs.append("op_attrs", prop.op_attrs);

    if (prop.ops) attrs.append("ops", prop.ops);
}

::llvm::LogicalResult MatchOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFilterOperandTypesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps12(attr, "filter_operand_types", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getFilterResultTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(attr, "filter_result_type", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getInterfaceAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps9(attr, "interface", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOpAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps10(attr, "op_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOpsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps8(attr, "ops", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MatchOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.filter_operand_types)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.filter_result_type)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.interface)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.op_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.ops)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.filter_operand_types);

  writer.writeOptionalAttribute(prop.filter_result_type);

  writer.writeOptionalAttribute(prop.interface);

  writer.writeOptionalAttribute(prop.op_attrs);

  writer.writeOptionalAttribute(prop.ops);
}

::std::optional< ::mlir::ArrayAttr > MatchOp::getOps() {
  auto attr = getOpsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::std::optional<mlir::transform::MatchInterfaceEnum> MatchOp::getInterface() {
  auto attr = getInterfaceAttr();
  return attr ? ::std::optional<mlir::transform::MatchInterfaceEnum>(attr.getValue()) : (::std::nullopt);
}

::std::optional< ::mlir::DictionaryAttr > MatchOp::getOpAttrs() {
  auto attr = getOpAttrsAttr();
  return attr ? ::std::optional< ::mlir::DictionaryAttr >(attr) : (::std::nullopt);
}

::std::optional<::mlir::Type> MatchOp::getFilterResultType() {
  auto attr = getFilterResultTypeAttr();
  return attr ? ::std::optional<::mlir::Type>(::llvm::cast<::mlir::Type>(attr.getValue())) : (::std::nullopt);
}

::std::optional< ::mlir::ArrayAttr > MatchOp::getFilterOperandTypes() {
  auto attr = getFilterOperandTypesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void MatchOp::setInterface(::std::optional<mlir::transform::MatchInterfaceEnum> attrValue) {
    auto &odsProp = getProperties().interface;
    if (attrValue)
      odsProp = mlir::transform::MatchInterfaceEnumAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue);
    else
      odsProp = nullptr;
}

void MatchOp::setFilterResultType(::std::optional<::mlir::Type> attrValue) {
    auto &odsProp = getProperties().filter_result_type;
    if (attrValue)
      odsProp = ::mlir::TypeAttr::get(*attrValue);
    else
      odsProp = nullptr;
}

void MatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type, /*optional*/::mlir::ArrayAttr filter_operand_types) {
  odsState.addOperands(target);
  if (ops) {
    odsState.getOrAddProperties<Properties>().ops = ops;
  }
  if (interface) {
    odsState.getOrAddProperties<Properties>().interface = interface;
  }
  if (op_attrs) {
    odsState.getOrAddProperties<Properties>().op_attrs = op_attrs;
  }
  if (filter_result_type) {
    odsState.getOrAddProperties<Properties>().filter_result_type = filter_result_type;
  }
  if (filter_operand_types) {
    odsState.getOrAddProperties<Properties>().filter_operand_types = filter_operand_types;
  }
  odsState.addTypes(results);
}

void MatchOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type, /*optional*/::mlir::ArrayAttr filter_operand_types) {
  odsState.addOperands(target);
  if (ops) {
    odsState.getOrAddProperties<Properties>().ops = ops;
  }
  if (interface) {
    odsState.getOrAddProperties<Properties>().interface = interface;
  }
  if (op_attrs) {
    odsState.getOrAddProperties<Properties>().op_attrs = op_attrs;
  }
  if (filter_result_type) {
    odsState.getOrAddProperties<Properties>().filter_result_type = filter_result_type;
  }
  if (filter_operand_types) {
    odsState.getOrAddProperties<Properties>().filter_operand_types = filter_operand_types;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MatchOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MatchOp::verifyInvariantsImpl() {
  auto tblgen_filter_operand_types = getProperties().filter_operand_types; (void)tblgen_filter_operand_types;
  auto tblgen_filter_result_type = getProperties().filter_result_type; (void)tblgen_filter_result_type;
  auto tblgen_interface = getProperties().interface; (void)tblgen_interface;
  auto tblgen_op_attrs = getProperties().op_attrs; (void)tblgen_op_attrs;
  auto tblgen_ops = getProperties().ops; (void)tblgen_ops;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps8(*this, tblgen_ops, "ops")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps9(*this, tblgen_interface, "interface")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps10(*this, tblgen_op_attrs, "op_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps11(*this, tblgen_filter_result_type, "filter_result_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps12(*this, tblgen_filter_operand_types, "filter_operand_types")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::ArrayAttr opsAttr;
  mlir::transform::MatchInterfaceEnumAttr interfaceAttr;
  ::mlir::DictionaryAttr op_attrsAttr;
  ::mlir::TypeAttr filter_result_typeAttr;
  ::mlir::ArrayAttr filter_operand_typesAttr;
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  if (::mlir::succeeded(parser.parseOptionalKeyword("ops"))) {
  if (parser.parseLBrace())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(opsAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (opsAttr) result.getOrAddProperties<MatchOp::Properties>().ops = opsAttr;
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("interface"))) {
  if (parser.parseLBrace())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"LinalgOp","TilingInterface","LoopLikeInterface"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "interface", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'interface' [LinalgOp, TilingInterface, LoopLikeInterface]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = mlir::transform::symbolizeMatchInterfaceEnum(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "interface attribute specification: \"" << attrStr << '"';;

      interfaceAttr = mlir::transform::MatchInterfaceEnumAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<MatchOp::Properties>().interface = interfaceAttr;
    }
  }
  if (parser.parseRBrace())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("attributes"))) {

  if (parser.parseCustomAttributeWithFallback(op_attrsAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (op_attrsAttr) result.getOrAddProperties<MatchOp::Properties>().op_attrs = op_attrsAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("filter_result_type"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(filter_result_typeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (filter_result_typeAttr) result.getOrAddProperties<MatchOp::Properties>().filter_result_type = filter_result_typeAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("filter_operand_types"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(filter_operand_typesAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (filter_operand_typesAttr) result.getOrAddProperties<MatchOp::Properties>().filter_operand_types = filter_operand_typesAttr;
  }
  if (parser.parseKeyword("in"))
    return ::mlir::failure();

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

void MatchOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getOpsAttr()) {
    _odsPrinter << ' ' << "ops";
    _odsPrinter << "{";
    _odsPrinter.printAttributeWithoutType(getOpsAttr());
    _odsPrinter << "}";
  }
  if (getInterfaceAttr()) {
    _odsPrinter << ' ' << "interface";
    _odsPrinter << "{";

    {
      auto caseValue = *getInterface();
      auto caseValueStr = stringifyMatchInterfaceEnum(caseValue);
      _odsPrinter << caseValueStr;
    }
    _odsPrinter << "}";
  }
  if (getOpAttrsAttr()) {
    _odsPrinter << ' ' << "attributes";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getOpAttrsAttr());
  }
  if (getFilterResultTypeAttr()) {
    _odsPrinter << ' ' << "filter_result_type";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getFilterResultTypeAttr());
  }
  if (getFilterOperandTypesAttr()) {
    _odsPrinter << ' ' << "filter_operand_types";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getFilterOperandTypesAttr());
  }
  _odsPrinter << ' ' << "in";
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("ops");
  elidedAttrs.push_back("interface");
  elidedAttrs.push_back("op_attrs");
  elidedAttrs.push_back("filter_result_type");
  elidedAttrs.push_back("filter_operand_types");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MultiTileSizesOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MultiTileSizesOpGenericAdaptorBase::MultiTileSizesOpGenericAdaptorBase(MultiTileSizesOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t MultiTileSizesOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

uint64_t MultiTileSizesOpGenericAdaptorBase::getTargetSize() {
  auto attr = getTargetSizeAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr MultiTileSizesOpGenericAdaptorBase::getDivisorAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().divisor);
  return attr;
}

uint64_t MultiTileSizesOpGenericAdaptorBase::getDivisor() {
  auto attr = getDivisorAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MultiTileSizesOpAdaptor::MultiTileSizesOpAdaptor(MultiTileSizesOp op) : MultiTileSizesOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MultiTileSizesOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'transform.structured.multitile_sizes' op ""requires attribute 'dimension'");
  auto tblgen_divisor = getProperties().divisor; (void)tblgen_divisor;
  auto tblgen_target_size = getProperties().target_size; (void)tblgen_target_size;
  if (!tblgen_target_size) return emitError(loc, "'transform.structured.multitile_sizes' op ""requires attribute 'target_size'");

  if (tblgen_dimension && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_dimension))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_dimension).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.multitile_sizes' op ""attribute 'dimension' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_target_size && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_target_size))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_target_size).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.multitile_sizes' op ""attribute 'target_size' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_divisor && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_divisor))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_divisor).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.multitile_sizes' op ""attribute 'divisor' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

void MultiTileSizesOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "low_size");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "high_size");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "split_point");
}

::llvm::LogicalResult MultiTileSizesOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dimension;
       auto attr = dict.get("dimension");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dimension` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.divisor;
       auto attr = dict.get("divisor");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `divisor` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.target_size;
       auto attr = dict.get("target_size");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `target_size` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MultiTileSizesOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dimension;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dimension",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.divisor;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("divisor",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.target_size;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("target_size",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MultiTileSizesOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()), 
    llvm::hash_value(prop.divisor.getAsOpaquePointer()), 
    llvm::hash_value(prop.target_size.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MultiTileSizesOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;

    if (name == "divisor")
      return prop.divisor;

    if (name == "target_size")
      return prop.target_size;
  return std::nullopt;
}

void MultiTileSizesOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }

    if (name == "divisor") {
       prop.divisor = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.divisor)>>(value);
       return;
    }

    if (name == "target_size") {
       prop.target_size = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.target_size)>>(value);
       return;
    }
}

void MultiTileSizesOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);

    if (prop.divisor) attrs.append("divisor", prop.divisor);

    if (prop.target_size) attrs.append("target_size", prop.target_size);
}

::llvm::LogicalResult MultiTileSizesOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "dimension", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getDivisorAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "divisor", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTargetSizeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "target_size", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MultiTileSizesOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.divisor)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.target_size)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MultiTileSizesOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);

  writer.writeOptionalAttribute(prop.divisor);
  writer.writeAttribute(prop.target_size);
}

uint64_t MultiTileSizesOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

uint64_t MultiTileSizesOp::getTargetSize() {
  auto attr = getTargetSizeAttr();
  return attr.getValue().getZExtValue();
}

uint64_t MultiTileSizesOp::getDivisor() {
  auto attr = getDivisorAttr();
  return attr.getValue().getZExtValue();
}

void MultiTileSizesOp::setDimension(uint64_t attrValue) {
  getProperties().dimension = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void MultiTileSizesOp::setTargetSize(uint64_t attrValue) {
  getProperties().target_size = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void MultiTileSizesOp::setDivisor(uint64_t attrValue) {
  getProperties().divisor = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.getOrAddProperties<Properties>().target_size = target_size;
  if (divisor) {
    odsState.getOrAddProperties<Properties>().divisor = divisor;
  }
  odsState.addTypes(low_size);
  odsState.addTypes(high_size);
  odsState.addTypes(split_point);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.getOrAddProperties<Properties>().target_size = target_size;
  if (divisor) {
    odsState.getOrAddProperties<Properties>().divisor = divisor;
  }
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension);
  odsState.getOrAddProperties<Properties>().target_size = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), target_size);
  odsState.getOrAddProperties<Properties>().divisor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), divisor);
  odsState.addTypes(low_size);
  odsState.addTypes(high_size);
  odsState.addTypes(split_point);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension);
  odsState.getOrAddProperties<Properties>().target_size = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), target_size);
  odsState.getOrAddProperties<Properties>().divisor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), divisor);
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MultiTileSizesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MultiTileSizesOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void MultiTileSizesOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.divisor)
    properties.divisor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1);
}

::llvm::LogicalResult MultiTileSizesOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");
  auto tblgen_divisor = getProperties().divisor; (void)tblgen_divisor;
  auto tblgen_target_size = getProperties().target_size; (void)tblgen_target_size;
  if (!tblgen_target_size) return emitOpError("requires attribute 'target_size'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_target_size, "target_size")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_divisor, "divisor")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MultiTileSizesOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MultiTileSizesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);
  ::mlir::Type low_sizeRawType{};
  ::llvm::ArrayRef<::mlir::Type> low_sizeTypes(&low_sizeRawType, 1);
  ::mlir::Type high_sizeRawType{};
  ::llvm::ArrayRef<::mlir::Type> high_sizeTypes(&high_sizeRawType, 1);
  ::mlir::Type split_pointRawType{};
  ::llvm::ArrayRef<::mlir::Type> split_pointTypes(&split_pointRawType, 1);

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
    auto odsResult = parseMultitileSizesTypes(parser, targetRawType, low_sizeRawType, high_sizeRawType, split_pointRawType);
    if (odsResult) return ::mlir::failure();
  }
  result.addTypes(low_sizeTypes);
  result.addTypes(high_sizeTypes);
  result.addTypes(split_pointTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MultiTileSizesOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDivisorAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 1)))
       elidedAttrs.push_back("divisor");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printMultitileSizesTypes(_odsPrinter, *this, getTarget().getType(), getLowSize().getType(), getHighSize().getType(), getSplitPoint().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MultiTileSizesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackGreedilyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PackGreedilyOpGenericAdaptorBase::PackGreedilyOpGenericAdaptorBase(PackGreedilyOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

std::pair<unsigned, unsigned> PackGreedilyOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DenseI64ArrayAttr PackGreedilyOpGenericAdaptorBase::getStaticMatmulPackedSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_matmul_packed_sizes);
  return attr;
}

::llvm::ArrayRef<int64_t> PackGreedilyOpGenericAdaptorBase::getStaticMatmulPackedSizes() {
  auto attr = getStaticMatmulPackedSizesAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr PackGreedilyOpGenericAdaptorBase::getMatmulPaddedSizesNextMultipleOfAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().matmul_padded_sizes_next_multiple_of);
  return attr;
}

::llvm::ArrayRef<int64_t> PackGreedilyOpGenericAdaptorBase::getMatmulPaddedSizesNextMultipleOf() {
  auto attr = getMatmulPaddedSizesNextMultipleOfAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr PackGreedilyOpGenericAdaptorBase::getMatmulInnerDimsOrderAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().matmul_inner_dims_order);
  return attr;
}

::llvm::ArrayRef<int64_t> PackGreedilyOpGenericAdaptorBase::getMatmulInnerDimsOrder() {
  auto attr = getMatmulInnerDimsOrderAttr();
  return attr;
}

} // namespace detail
PackGreedilyOpAdaptor::PackGreedilyOpAdaptor(PackGreedilyOp op) : PackGreedilyOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult PackGreedilyOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_matmul_inner_dims_order = getProperties().matmul_inner_dims_order; (void)tblgen_matmul_inner_dims_order;
  auto tblgen_matmul_padded_sizes_next_multiple_of = getProperties().matmul_padded_sizes_next_multiple_of; (void)tblgen_matmul_padded_sizes_next_multiple_of;
  auto tblgen_static_matmul_packed_sizes = getProperties().static_matmul_packed_sizes; (void)tblgen_static_matmul_packed_sizes;

  if (tblgen_static_matmul_packed_sizes && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_matmul_packed_sizes))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_static_matmul_packed_sizes).size() == 3))))
    return emitError(loc, "'transform.structured.pack_greedily' op ""attribute 'static_matmul_packed_sizes' failed to satisfy constraint: i64 dense array attribute with exactly 3 elements");

  if (tblgen_matmul_padded_sizes_next_multiple_of && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_matmul_padded_sizes_next_multiple_of))) && (((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_matmul_padded_sizes_next_multiple_of).size() == 0)) || ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_matmul_padded_sizes_next_multiple_of).size() == 3)))))
    return emitError(loc, "'transform.structured.pack_greedily' op ""attribute 'matmul_padded_sizes_next_multiple_of' failed to satisfy constraint: i64 dense array attribute with 0 or 3 elements");

  if (tblgen_matmul_inner_dims_order && !(((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_matmul_inner_dims_order))) && ((::llvm::cast<::mlir::DenseArrayAttr>(tblgen_matmul_inner_dims_order).size() == 3))))
    return emitError(loc, "'transform.structured.pack_greedily' op ""attribute 'matmul_inner_dims_order' failed to satisfy constraint: i64 dense array attribute with exactly 3 elements");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PackGreedilyOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::MutableOperandRange PackGreedilyOp::getMatmulPackedSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::llvm::LogicalResult PackGreedilyOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.matmul_inner_dims_order;
       auto attr = dict.get("matmul_inner_dims_order");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `matmul_inner_dims_order` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.matmul_padded_sizes_next_multiple_of;
       auto attr = dict.get("matmul_padded_sizes_next_multiple_of");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `matmul_padded_sizes_next_multiple_of` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_matmul_packed_sizes;
       auto attr = dict.get("static_matmul_packed_sizes");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_matmul_packed_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PackGreedilyOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.matmul_inner_dims_order;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("matmul_inner_dims_order",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.matmul_padded_sizes_next_multiple_of;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("matmul_padded_sizes_next_multiple_of",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_matmul_packed_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_matmul_packed_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PackGreedilyOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.matmul_inner_dims_order.getAsOpaquePointer()), 
    llvm::hash_value(prop.matmul_padded_sizes_next_multiple_of.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_matmul_packed_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PackGreedilyOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "matmul_inner_dims_order")
      return prop.matmul_inner_dims_order;

    if (name == "matmul_padded_sizes_next_multiple_of")
      return prop.matmul_padded_sizes_next_multiple_of;

    if (name == "static_matmul_packed_sizes")
      return prop.static_matmul_packed_sizes;
  return std::nullopt;
}

void PackGreedilyOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "matmul_inner_dims_order") {
       prop.matmul_inner_dims_order = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.matmul_inner_dims_order)>>(value);
       return;
    }

    if (name == "matmul_padded_sizes_next_multiple_of") {
       prop.matmul_padded_sizes_next_multiple_of = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.matmul_padded_sizes_next_multiple_of)>>(value);
       return;
    }

    if (name == "static_matmul_packed_sizes") {
       prop.static_matmul_packed_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_matmul_packed_sizes)>>(value);
       return;
    }
}

void PackGreedilyOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.matmul_inner_dims_order) attrs.append("matmul_inner_dims_order", prop.matmul_inner_dims_order);

    if (prop.matmul_padded_sizes_next_multiple_of) attrs.append("matmul_padded_sizes_next_multiple_of", prop.matmul_padded_sizes_next_multiple_of);

    if (prop.static_matmul_packed_sizes) attrs.append("static_matmul_packed_sizes", prop.static_matmul_packed_sizes);
}

::llvm::LogicalResult PackGreedilyOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMatmulInnerDimsOrderAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps13(attr, "matmul_inner_dims_order", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMatmulPaddedSizesNextMultipleOfAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps14(attr, "matmul_padded_sizes_next_multiple_of", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticMatmulPackedSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps13(attr, "static_matmul_packed_sizes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult PackGreedilyOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.matmul_inner_dims_order)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.matmul_padded_sizes_next_multiple_of)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_matmul_packed_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackGreedilyOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.matmul_inner_dims_order);

  writer.writeOptionalAttribute(prop.matmul_padded_sizes_next_multiple_of);

  writer.writeOptionalAttribute(prop.static_matmul_packed_sizes);
}

::llvm::ArrayRef<int64_t> PackGreedilyOp::getStaticMatmulPackedSizes() {
  auto attr = getStaticMatmulPackedSizesAttr();
  return attr;
}

::llvm::ArrayRef<int64_t> PackGreedilyOp::getMatmulPaddedSizesNextMultipleOf() {
  auto attr = getMatmulPaddedSizesNextMultipleOfAttr();
  return attr;
}

::llvm::ArrayRef<int64_t> PackGreedilyOp::getMatmulInnerDimsOrder() {
  auto attr = getMatmulInnerDimsOrderAttr();
  return attr;
}

void PackGreedilyOp::setStaticMatmulPackedSizes(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().static_matmul_packed_sizes = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void PackGreedilyOp::setMatmulPaddedSizesNextMultipleOf(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().matmul_padded_sizes_next_multiple_of = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void PackGreedilyOp::setMatmulInnerDimsOrder(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().matmul_inner_dims_order = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void PackGreedilyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::mlir::DenseI64ArrayAttr static_matmul_packed_sizes, ::mlir::DenseI64ArrayAttr matmul_padded_sizes_next_multiple_of, ::mlir::DenseI64ArrayAttr matmul_inner_dims_order) {
  odsState.addOperands(target);
  odsState.addOperands(matmul_packed_sizes);
  if (static_matmul_packed_sizes) {
    odsState.getOrAddProperties<Properties>().static_matmul_packed_sizes = static_matmul_packed_sizes;
  }
  if (matmul_padded_sizes_next_multiple_of) {
    odsState.getOrAddProperties<Properties>().matmul_padded_sizes_next_multiple_of = matmul_padded_sizes_next_multiple_of;
  }
  if (matmul_inner_dims_order) {
    odsState.getOrAddProperties<Properties>().matmul_inner_dims_order = matmul_inner_dims_order;
  }
  odsState.addTypes(packed_op);
}

void PackGreedilyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::mlir::DenseI64ArrayAttr static_matmul_packed_sizes, ::mlir::DenseI64ArrayAttr matmul_padded_sizes_next_multiple_of, ::mlir::DenseI64ArrayAttr matmul_inner_dims_order) {
  odsState.addOperands(target);
  odsState.addOperands(matmul_packed_sizes);
  if (static_matmul_packed_sizes) {
    odsState.getOrAddProperties<Properties>().static_matmul_packed_sizes = static_matmul_packed_sizes;
  }
  if (matmul_padded_sizes_next_multiple_of) {
    odsState.getOrAddProperties<Properties>().matmul_padded_sizes_next_multiple_of = matmul_padded_sizes_next_multiple_of;
  }
  if (matmul_inner_dims_order) {
    odsState.getOrAddProperties<Properties>().matmul_inner_dims_order = matmul_inner_dims_order;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackGreedilyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::llvm::ArrayRef<int64_t> static_matmul_packed_sizes, ::llvm::ArrayRef<int64_t> matmul_padded_sizes_next_multiple_of, ::llvm::ArrayRef<int64_t> matmul_inner_dims_order) {
  odsState.addOperands(target);
  odsState.addOperands(matmul_packed_sizes);
  odsState.getOrAddProperties<Properties>().static_matmul_packed_sizes = odsBuilder.getDenseI64ArrayAttr(static_matmul_packed_sizes);
  odsState.getOrAddProperties<Properties>().matmul_padded_sizes_next_multiple_of = odsBuilder.getDenseI64ArrayAttr(matmul_padded_sizes_next_multiple_of);
  odsState.getOrAddProperties<Properties>().matmul_inner_dims_order = odsBuilder.getDenseI64ArrayAttr(matmul_inner_dims_order);
  odsState.addTypes(packed_op);
}

void PackGreedilyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::llvm::ArrayRef<int64_t> static_matmul_packed_sizes, ::llvm::ArrayRef<int64_t> matmul_padded_sizes_next_multiple_of, ::llvm::ArrayRef<int64_t> matmul_inner_dims_order) {
  odsState.addOperands(target);
  odsState.addOperands(matmul_packed_sizes);
  odsState.getOrAddProperties<Properties>().static_matmul_packed_sizes = odsBuilder.getDenseI64ArrayAttr(static_matmul_packed_sizes);
  odsState.getOrAddProperties<Properties>().matmul_padded_sizes_next_multiple_of = odsBuilder.getDenseI64ArrayAttr(matmul_padded_sizes_next_multiple_of);
  odsState.getOrAddProperties<Properties>().matmul_inner_dims_order = odsBuilder.getDenseI64ArrayAttr(matmul_inner_dims_order);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackGreedilyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<PackGreedilyOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void PackGreedilyOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.static_matmul_packed_sizes)
    properties.static_matmul_packed_sizes = odsBuilder.getDenseI64ArrayAttr({});
  if (!properties.matmul_padded_sizes_next_multiple_of)
    properties.matmul_padded_sizes_next_multiple_of = odsBuilder.getDenseI64ArrayAttr({});
  if (!properties.matmul_inner_dims_order)
    properties.matmul_inner_dims_order = odsBuilder.getDenseI64ArrayAttr({});
}

::llvm::LogicalResult PackGreedilyOp::verifyInvariantsImpl() {
  auto tblgen_matmul_inner_dims_order = getProperties().matmul_inner_dims_order; (void)tblgen_matmul_inner_dims_order;
  auto tblgen_matmul_padded_sizes_next_multiple_of = getProperties().matmul_padded_sizes_next_multiple_of; (void)tblgen_matmul_padded_sizes_next_multiple_of;
  auto tblgen_static_matmul_packed_sizes = getProperties().static_matmul_packed_sizes; (void)tblgen_static_matmul_packed_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps13(*this, tblgen_static_matmul_packed_sizes, "static_matmul_packed_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps14(*this, tblgen_matmul_padded_sizes_next_multiple_of, "matmul_padded_sizes_next_multiple_of")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps13(*this, tblgen_matmul_inner_dims_order, "matmul_inner_dims_order")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult PackGreedilyOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult PackGreedilyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> matmul_packed_sizesOperands;
  ::llvm::SMLoc matmul_packed_sizesOperandsLoc;
  (void)matmul_packed_sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_matmul_packed_sizesAttr;
  ::mlir::DenseI64ArrayAttr matmul_padded_sizes_next_multiple_ofAttr;
  ::mlir::DenseI64ArrayAttr matmul_inner_dims_orderAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  bool matmul_packed_sizesClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("matmul_packed_sizes"))) {

  if (matmul_packed_sizesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`matmul_packed_sizes` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  matmul_packed_sizesClause = true;
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    matmul_packed_sizesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, matmul_packed_sizesOperands, static_matmul_packed_sizesAttr);
    if (odsResult) return ::mlir::failure();
    if (static_matmul_packed_sizesAttr)
      result.getOrAddProperties<PackGreedilyOp::Properties>().static_matmul_packed_sizes = static_matmul_packed_sizesAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("matmul_padded_sizes_next_multiple_of"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(matmul_padded_sizes_next_multiple_ofAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (matmul_padded_sizes_next_multiple_ofAttr) result.getOrAddProperties<PackGreedilyOp::Properties>().matmul_padded_sizes_next_multiple_of = matmul_padded_sizes_next_multiple_ofAttr;
  }
  if (parser.parseKeyword("matmul_inner_dims_order"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(matmul_inner_dims_orderAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (matmul_inner_dims_orderAttr) result.getOrAddProperties<PackGreedilyOp::Properties>().matmul_inner_dims_order = matmul_inner_dims_orderAttr;
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
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(targetOperands, matmul_packed_sizesOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackGreedilyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (false || getMatmulPackedSizes().size() || (getStaticMatmulPackedSizesAttr() && getStaticMatmulPackedSizesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) || (getMatmulPaddedSizesNextMultipleOfAttr() && getMatmulPaddedSizesNextMultipleOfAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) || (getMatmulInnerDimsOrderAttr() && getMatmulInnerDimsOrderAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({}))) {
  _odsPrinter << ' ' << "matmul_packed_sizes";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getMatmulPackedSizes(), getStaticMatmulPackedSizesAttr());
  if (getMatmulPaddedSizesNextMultipleOfAttr() && getMatmulPaddedSizesNextMultipleOfAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ' ' << "matmul_padded_sizes_next_multiple_of";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMatmulPaddedSizesNextMultipleOfAttr());
  }
  _odsPrinter << ' ' << "matmul_inner_dims_order";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getMatmulInnerDimsOrderAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_matmul_packed_sizes");
  elidedAttrs.push_back("matmul_padded_sizes_next_multiple_of");
  elidedAttrs.push_back("matmul_inner_dims_order");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticMatmulPackedSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_matmul_packed_sizes");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMatmulPaddedSizesNextMultipleOfAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("matmul_padded_sizes_next_multiple_of");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMatmulInnerDimsOrderAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("matmul_inner_dims_order");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PackGreedilyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PackOpGenericAdaptorBase::PackOpGenericAdaptorBase(PackOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

std::pair<unsigned, unsigned> PackOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DenseI64ArrayAttr PackOpGenericAdaptorBase::getStaticPackedSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_packed_sizes);
  return attr;
}

::llvm::ArrayRef<int64_t> PackOpGenericAdaptorBase::getStaticPackedSizes() {
  auto attr = getStaticPackedSizesAttr();
  return attr;
}

} // namespace detail
PackOpAdaptor::PackOpAdaptor(PackOp op) : PackOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult PackOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_static_packed_sizes = getProperties().static_packed_sizes; (void)tblgen_static_packed_sizes;

  if (tblgen_static_packed_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_packed_sizes))))
    return emitError(loc, "'transform.structured.pack' op ""attribute 'static_packed_sizes' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> PackOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::MutableOperandRange PackOp::getPackedSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::llvm::LogicalResult PackOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.static_packed_sizes;
       auto attr = dict.get("static_packed_sizes");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_packed_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PackOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.static_packed_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_packed_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PackOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.static_packed_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PackOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "static_packed_sizes")
      return prop.static_packed_sizes;
  return std::nullopt;
}

void PackOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "static_packed_sizes") {
       prop.static_packed_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_packed_sizes)>>(value);
       return;
    }
}

void PackOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.static_packed_sizes) attrs.append("static_packed_sizes", prop.static_packed_sizes);
}

::llvm::LogicalResult PackOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getStaticPackedSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "static_packed_sizes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult PackOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.static_packed_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.static_packed_sizes);
}

::llvm::ArrayRef<int64_t> PackOp::getStaticPackedSizes() {
  auto attr = getStaticPackedSizesAttr();
  return attr;
}

void PackOp::setStaticPackedSizes(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().static_packed_sizes = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  if (static_packed_sizes) {
    odsState.getOrAddProperties<Properties>().static_packed_sizes = static_packed_sizes;
  }
  odsState.addTypes(packed_op);
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  if (static_packed_sizes) {
    odsState.getOrAddProperties<Properties>().static_packed_sizes = static_packed_sizes;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  odsState.getOrAddProperties<Properties>().static_packed_sizes = odsBuilder.getDenseI64ArrayAttr(static_packed_sizes);
  odsState.addTypes(packed_op);
}

void PackOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(packed_sizes);
  odsState.getOrAddProperties<Properties>().static_packed_sizes = odsBuilder.getDenseI64ArrayAttr(static_packed_sizes);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<PackOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void PackOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.static_packed_sizes)
    properties.static_packed_sizes = odsBuilder.getDenseI64ArrayAttr({});
}

::llvm::LogicalResult PackOp::verifyInvariantsImpl() {
  auto tblgen_static_packed_sizes = getProperties().static_packed_sizes; (void)tblgen_static_packed_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_static_packed_sizes, "static_packed_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult PackOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PackOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> packed_sizesOperands;
  ::llvm::SMLoc packed_sizesOperandsLoc;
  (void)packed_sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_packed_sizesAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("packed_sizes"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    packed_sizesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, packed_sizesOperands, static_packed_sizesAttr);
    if (odsResult) return ::mlir::failure();
    if (static_packed_sizesAttr)
      result.getOrAddProperties<PackOp::Properties>().static_packed_sizes = static_packed_sizesAttr;
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
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(targetOperands, packed_sizesOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "packed_sizes";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getPackedSizes(), getStaticPackedSizesAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_packed_sizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticPackedSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_packed_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackTransposeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PackTransposeOpGenericAdaptorBase::PackTransposeOpGenericAdaptorBase(PackTransposeOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::DenseI64ArrayAttr PackTransposeOpGenericAdaptorBase::getOuterPermAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().outer_perm);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> PackTransposeOpGenericAdaptorBase::getOuterPerm() {
  auto attr = getOuterPermAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr PackTransposeOpGenericAdaptorBase::getInnerPermAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().inner_perm);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> PackTransposeOpGenericAdaptorBase::getInnerPerm() {
  auto attr = getInnerPermAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

} // namespace detail
PackTransposeOpAdaptor::PackTransposeOpAdaptor(PackTransposeOp op) : PackTransposeOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult PackTransposeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_inner_perm = getProperties().inner_perm; (void)tblgen_inner_perm;
  auto tblgen_outer_perm = getProperties().outer_perm; (void)tblgen_outer_perm;

  if (tblgen_outer_perm && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_outer_perm))))
    return emitError(loc, "'transform.structured.pack_transpose' op ""attribute 'outer_perm' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_inner_perm && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_inner_perm))))
    return emitError(loc, "'transform.structured.pack_transpose' op ""attribute 'inner_perm' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

void PackTransposeOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "packed_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "pack_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "un_pack_op");
}

::llvm::LogicalResult PackTransposeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.inner_perm;
       auto attr = dict.get("inner_perm");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `inner_perm` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.outer_perm;
       auto attr = dict.get("outer_perm");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `outer_perm` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PackTransposeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.inner_perm;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("inner_perm",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.outer_perm;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("outer_perm",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PackTransposeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.inner_perm.getAsOpaquePointer()), 
    llvm::hash_value(prop.outer_perm.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PackTransposeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "inner_perm")
      return prop.inner_perm;

    if (name == "outer_perm")
      return prop.outer_perm;
  return std::nullopt;
}

void PackTransposeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "inner_perm") {
       prop.inner_perm = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.inner_perm)>>(value);
       return;
    }

    if (name == "outer_perm") {
       prop.outer_perm = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.outer_perm)>>(value);
       return;
    }
}

void PackTransposeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.inner_perm) attrs.append("inner_perm", prop.inner_perm);

    if (prop.outer_perm) attrs.append("outer_perm", prop.outer_perm);
}

::llvm::LogicalResult PackTransposeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInnerPermAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "inner_perm", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOuterPermAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "outer_perm", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult PackTransposeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.inner_perm)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.outer_perm)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackTransposeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.inner_perm);

  writer.writeOptionalAttribute(prop.outer_perm);
}

::llvm::ArrayRef<int64_t> PackTransposeOp::getOuterPerm() {
  auto attr = getOuterPermAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> PackTransposeOp::getInnerPerm() {
  auto attr = getInnerPermAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

void PackTransposeOp::setOuterPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    auto &odsProp = getProperties().outer_perm;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void PackTransposeOp::setInnerPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    auto &odsProp = getProperties().inner_perm;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  if (outer_perm) {
    odsState.getOrAddProperties<Properties>().outer_perm = outer_perm;
  }
  if (inner_perm) {
    odsState.getOrAddProperties<Properties>().inner_perm = inner_perm;
  }
  odsState.addTypes(packed_op);
  odsState.addTypes(pack_op);
  odsState.addTypes(un_pack_op);
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  if (outer_perm) {
    odsState.getOrAddProperties<Properties>().outer_perm = outer_perm;
  }
  if (inner_perm) {
    odsState.getOrAddProperties<Properties>().inner_perm = inner_perm;
  }
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm, /*optional*/::llvm::ArrayRef<int64_t> inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  odsState.getOrAddProperties<Properties>().outer_perm = odsBuilder.getDenseI64ArrayAttr(outer_perm);
  odsState.getOrAddProperties<Properties>().inner_perm = odsBuilder.getDenseI64ArrayAttr(inner_perm);
  odsState.addTypes(packed_op);
  odsState.addTypes(pack_op);
  odsState.addTypes(un_pack_op);
}

void PackTransposeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm, /*optional*/::llvm::ArrayRef<int64_t> inner_perm) {
  odsState.addOperands(target_pack_or_un_pack_op);
  odsState.addOperands(target_linalg_op);
  odsState.getOrAddProperties<Properties>().outer_perm = odsBuilder.getDenseI64ArrayAttr(outer_perm);
  odsState.getOrAddProperties<Properties>().inner_perm = odsBuilder.getDenseI64ArrayAttr(inner_perm);
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PackTransposeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<PackTransposeOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult PackTransposeOp::verifyInvariantsImpl() {
  auto tblgen_inner_perm = getProperties().inner_perm; (void)tblgen_inner_perm;
  auto tblgen_outer_perm = getProperties().outer_perm; (void)tblgen_outer_perm;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_outer_perm, "outer_perm")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_inner_perm, "inner_perm")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult PackTransposeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult PackTransposeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand target_pack_or_un_pack_opRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> target_pack_or_un_pack_opOperands(&target_pack_or_un_pack_opRawOperand, 1);  ::llvm::SMLoc target_pack_or_un_pack_opOperandsLoc;
  (void)target_pack_or_un_pack_opOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand target_linalg_opRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> target_linalg_opOperands(&target_linalg_opRawOperand, 1);  ::llvm::SMLoc target_linalg_opOperandsLoc;
  (void)target_linalg_opOperandsLoc;
  ::mlir::DenseI64ArrayAttr outer_permAttr;
  ::mlir::DenseI64ArrayAttr inner_permAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  target_pack_or_un_pack_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(target_pack_or_un_pack_opRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("with_compute_op"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  target_linalg_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(target_linalg_opRawOperand))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("outer_perm"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(outer_permAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (outer_permAttr) result.getOrAddProperties<PackTransposeOp::Properties>().outer_perm = outer_permAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("inner_perm"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(inner_permAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (inner_permAttr) result.getOrAddProperties<PackTransposeOp::Properties>().inner_perm = inner_permAttr;
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
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(target_pack_or_un_pack_opOperands, target_linalg_opOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PackTransposeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTargetPackOrUnPackOp();
  _odsPrinter << ' ' << "with_compute_op";
  _odsPrinter << "(";
  _odsPrinter << getTargetLinalgOp();
  _odsPrinter << ")";
  if (getOuterPermAttr()) {
    _odsPrinter << ' ' << "outer_perm";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getOuterPermAttr());
  }
  if (getInnerPermAttr()) {
    _odsPrinter << ' ' << "inner_perm";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getInnerPermAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("outer_perm");
  elidedAttrs.push_back("inner_perm");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getOuterPermAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("outer_perm");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInnerPermAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("inner_perm");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PackTransposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PadOpGenericAdaptorBase::PadOpGenericAdaptorBase(PadOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

std::pair<unsigned, unsigned> PadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingValuesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().padding_values);
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingValues() {
  auto attr = getPaddingValuesAttr();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingDimensionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().padding_dimensions);
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPaddingDimensions() {
  auto attr = getPaddingDimensionsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr PadOpGenericAdaptorBase::getStaticPadToMultipleOfAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_pad_to_multiple_of);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> PadOpGenericAdaptorBase::getStaticPadToMultipleOf() {
  auto attr = getStaticPadToMultipleOfAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPackPaddingsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().pack_paddings);
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getPackPaddings() {
  auto attr = getPackPaddingsAttr();
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getTransposePaddingsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().transpose_paddings);
  return attr;
}

::mlir::ArrayAttr PadOpGenericAdaptorBase::getTransposePaddings() {
  auto attr = getTransposePaddingsAttr();
  return attr;
}

::mlir::StringAttr PadOpGenericAdaptorBase::getCopyBackOpAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().copy_back_op);
  return attr;
}

::llvm::StringRef PadOpGenericAdaptorBase::getCopyBackOp() {
  auto attr = getCopyBackOpAttr();
  return attr.getValue();
}

} // namespace detail
PadOpAdaptor::PadOpAdaptor(PadOp op) : PadOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult PadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_copy_back_op = getProperties().copy_back_op; (void)tblgen_copy_back_op;
  auto tblgen_pack_paddings = getProperties().pack_paddings; (void)tblgen_pack_paddings;
  auto tblgen_padding_dimensions = getProperties().padding_dimensions; (void)tblgen_padding_dimensions;
  auto tblgen_padding_values = getProperties().padding_values; (void)tblgen_padding_values;
  auto tblgen_static_pad_to_multiple_of = getProperties().static_pad_to_multiple_of; (void)tblgen_static_pad_to_multiple_of;
  auto tblgen_transpose_paddings = getProperties().transpose_paddings; (void)tblgen_transpose_paddings;

  if (tblgen_padding_values && !((::llvm::isa<::mlir::ArrayAttr>(tblgen_padding_values))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'padding_values' failed to satisfy constraint: array attribute");

  if (tblgen_padding_dimensions && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_padding_dimensions))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_padding_dimensions), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'padding_dimensions' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_static_pad_to_multiple_of && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_pad_to_multiple_of))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'static_pad_to_multiple_of' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_pack_paddings && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_pack_paddings))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_pack_paddings), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'pack_paddings' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_transpose_paddings && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_transpose_paddings))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_transpose_paddings), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))); }))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'transpose_paddings' failed to satisfy constraint: array of arrays of i64");

  if (tblgen_copy_back_op && !((::llvm::isa<::mlir::StringAttr>(tblgen_copy_back_op))))
    return emitError(loc, "'transform.structured.pad' op ""attribute 'copy_back_op' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

void PadOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "padded");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "pad");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "copy");
}

std::pair<unsigned, unsigned> PadOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::MutableOperandRange PadOp::getPadToMultipleOfMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::llvm::LogicalResult PadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.copy_back_op;
       auto attr = dict.get("copy_back_op");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `copy_back_op` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.pack_paddings;
       auto attr = dict.get("pack_paddings");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `pack_paddings` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.padding_dimensions;
       auto attr = dict.get("padding_dimensions");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `padding_dimensions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.padding_values;
       auto attr = dict.get("padding_values");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `padding_values` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_pad_to_multiple_of;
       auto attr = dict.get("static_pad_to_multiple_of");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_pad_to_multiple_of` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.transpose_paddings;
       auto attr = dict.get("transpose_paddings");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `transpose_paddings` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.copy_back_op;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("copy_back_op",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.pack_paddings;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("pack_paddings",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.padding_dimensions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("padding_dimensions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.padding_values;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("padding_values",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_pad_to_multiple_of;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_pad_to_multiple_of",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.transpose_paddings;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("transpose_paddings",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.copy_back_op.getAsOpaquePointer()), 
    llvm::hash_value(prop.pack_paddings.getAsOpaquePointer()), 
    llvm::hash_value(prop.padding_dimensions.getAsOpaquePointer()), 
    llvm::hash_value(prop.padding_values.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_pad_to_multiple_of.getAsOpaquePointer()), 
    llvm::hash_value(prop.transpose_paddings.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "copy_back_op")
      return prop.copy_back_op;

    if (name == "pack_paddings")
      return prop.pack_paddings;

    if (name == "padding_dimensions")
      return prop.padding_dimensions;

    if (name == "padding_values")
      return prop.padding_values;

    if (name == "static_pad_to_multiple_of")
      return prop.static_pad_to_multiple_of;

    if (name == "transpose_paddings")
      return prop.transpose_paddings;
  return std::nullopt;
}

void PadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "copy_back_op") {
       prop.copy_back_op = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.copy_back_op)>>(value);
       return;
    }

    if (name == "pack_paddings") {
       prop.pack_paddings = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.pack_paddings)>>(value);
       return;
    }

    if (name == "padding_dimensions") {
       prop.padding_dimensions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.padding_dimensions)>>(value);
       return;
    }

    if (name == "padding_values") {
       prop.padding_values = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.padding_values)>>(value);
       return;
    }

    if (name == "static_pad_to_multiple_of") {
       prop.static_pad_to_multiple_of = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_pad_to_multiple_of)>>(value);
       return;
    }

    if (name == "transpose_paddings") {
       prop.transpose_paddings = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.transpose_paddings)>>(value);
       return;
    }
}

void PadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.copy_back_op) attrs.append("copy_back_op", prop.copy_back_op);

    if (prop.pack_paddings) attrs.append("pack_paddings", prop.pack_paddings);

    if (prop.padding_dimensions) attrs.append("padding_dimensions", prop.padding_dimensions);

    if (prop.padding_values) attrs.append("padding_values", prop.padding_values);

    if (prop.static_pad_to_multiple_of) attrs.append("static_pad_to_multiple_of", prop.static_pad_to_multiple_of);

    if (prop.transpose_paddings) attrs.append("transpose_paddings", prop.transpose_paddings);
}

::llvm::LogicalResult PadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getCopyBackOpAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps1(attr, "copy_back_op", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPackPaddingsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "pack_paddings", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPaddingDimensionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "padding_dimensions", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPaddingValuesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps15(attr, "padding_values", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticPadToMultipleOfAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "static_pad_to_multiple_of", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTransposePaddingsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps16(attr, "transpose_paddings", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult PadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.copy_back_op)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.pack_paddings)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.padding_dimensions)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.padding_values)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_pad_to_multiple_of)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.transpose_paddings)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.copy_back_op);

  writer.writeOptionalAttribute(prop.pack_paddings);

  writer.writeOptionalAttribute(prop.padding_dimensions);

  writer.writeOptionalAttribute(prop.padding_values);

  writer.writeOptionalAttribute(prop.static_pad_to_multiple_of);

  writer.writeOptionalAttribute(prop.transpose_paddings);
}

::mlir::ArrayAttr PadOp::getPaddingValues() {
  auto attr = getPaddingValuesAttr();
  return attr;
}

::mlir::ArrayAttr PadOp::getPaddingDimensions() {
  auto attr = getPaddingDimensionsAttr();
  return attr;
}

::llvm::ArrayRef<int64_t> PadOp::getStaticPadToMultipleOf() {
  auto attr = getStaticPadToMultipleOfAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::ArrayAttr PadOp::getPackPaddings() {
  auto attr = getPackPaddingsAttr();
  return attr;
}

::mlir::ArrayAttr PadOp::getTransposePaddings() {
  auto attr = getTransposePaddingsAttr();
  return attr;
}

::llvm::StringRef PadOp::getCopyBackOp() {
  auto attr = getCopyBackOpAttr();
  return attr.getValue();
}

void PadOp::setStaticPadToMultipleOf(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    auto &odsProp = getProperties().static_pad_to_multiple_of;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void PadOp::setCopyBackOp(::llvm::StringRef attrValue) {
  getProperties().copy_back_op = ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type padded, ::mlir::Type pad, ::mlir::Type copy, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ValueRange pad_to_multiple_of, /*optional*/::mlir::DenseI64ArrayAttr static_pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, ::mlir::StringAttr copy_back_op) {
  odsState.addOperands(target);
  odsState.addOperands(pad_to_multiple_of);
  if (padding_values) {
    odsState.getOrAddProperties<Properties>().padding_values = padding_values;
  }
  if (padding_dimensions) {
    odsState.getOrAddProperties<Properties>().padding_dimensions = padding_dimensions;
  }
  if (static_pad_to_multiple_of) {
    odsState.getOrAddProperties<Properties>().static_pad_to_multiple_of = static_pad_to_multiple_of;
  }
  if (pack_paddings) {
    odsState.getOrAddProperties<Properties>().pack_paddings = pack_paddings;
  }
  if (transpose_paddings) {
    odsState.getOrAddProperties<Properties>().transpose_paddings = transpose_paddings;
  }
  if (copy_back_op) {
    odsState.getOrAddProperties<Properties>().copy_back_op = copy_back_op;
  }
  odsState.addTypes(padded);
  odsState.addTypes(pad);
  odsState.addTypes(copy);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ValueRange pad_to_multiple_of, /*optional*/::mlir::DenseI64ArrayAttr static_pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, ::mlir::StringAttr copy_back_op) {
  odsState.addOperands(target);
  odsState.addOperands(pad_to_multiple_of);
  if (padding_values) {
    odsState.getOrAddProperties<Properties>().padding_values = padding_values;
  }
  if (padding_dimensions) {
    odsState.getOrAddProperties<Properties>().padding_dimensions = padding_dimensions;
  }
  if (static_pad_to_multiple_of) {
    odsState.getOrAddProperties<Properties>().static_pad_to_multiple_of = static_pad_to_multiple_of;
  }
  if (pack_paddings) {
    odsState.getOrAddProperties<Properties>().pack_paddings = pack_paddings;
  }
  if (transpose_paddings) {
    odsState.getOrAddProperties<Properties>().transpose_paddings = transpose_paddings;
  }
  if (copy_back_op) {
    odsState.getOrAddProperties<Properties>().copy_back_op = copy_back_op;
  }
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type padded, ::mlir::Type pad, ::mlir::Type copy, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ValueRange pad_to_multiple_of, /*optional*/::llvm::ArrayRef<int64_t> static_pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, ::llvm::StringRef copy_back_op) {
  odsState.addOperands(target);
  odsState.addOperands(pad_to_multiple_of);
  odsState.getOrAddProperties<Properties>().padding_values = padding_values;
  odsState.getOrAddProperties<Properties>().padding_dimensions = padding_dimensions;
  odsState.getOrAddProperties<Properties>().static_pad_to_multiple_of = odsBuilder.getDenseI64ArrayAttr(static_pad_to_multiple_of);
  odsState.getOrAddProperties<Properties>().pack_paddings = pack_paddings;
  odsState.getOrAddProperties<Properties>().transpose_paddings = transpose_paddings;
  odsState.getOrAddProperties<Properties>().copy_back_op = odsBuilder.getStringAttr(copy_back_op);
  odsState.addTypes(padded);
  odsState.addTypes(pad);
  odsState.addTypes(copy);
}

void PadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ValueRange pad_to_multiple_of, /*optional*/::llvm::ArrayRef<int64_t> static_pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings, ::mlir::ArrayAttr transpose_paddings, ::llvm::StringRef copy_back_op) {
  odsState.addOperands(target);
  odsState.addOperands(pad_to_multiple_of);
  odsState.getOrAddProperties<Properties>().padding_values = padding_values;
  odsState.getOrAddProperties<Properties>().padding_dimensions = padding_dimensions;
  odsState.getOrAddProperties<Properties>().static_pad_to_multiple_of = odsBuilder.getDenseI64ArrayAttr(static_pad_to_multiple_of);
  odsState.getOrAddProperties<Properties>().pack_paddings = pack_paddings;
  odsState.getOrAddProperties<Properties>().transpose_paddings = transpose_paddings;
  odsState.getOrAddProperties<Properties>().copy_back_op = odsBuilder.getStringAttr(copy_back_op);
  assert(resultTypes.size() == 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<PadOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void PadOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.padding_values)
    properties.padding_values = odsBuilder.getArrayAttr({});
  if (!properties.padding_dimensions)
    properties.padding_dimensions = odsBuilder.getI64ArrayAttr({});
  if (!properties.pack_paddings)
    properties.pack_paddings = odsBuilder.getI64ArrayAttr({});
  if (!properties.transpose_paddings)
    properties.transpose_paddings = odsBuilder.getArrayAttr({});
  if (!properties.copy_back_op)
    properties.copy_back_op = odsBuilder.getStringAttr(::mlir::bufferization::MaterializeInDestinationOp::getOperationName());
}

::llvm::LogicalResult PadOp::verifyInvariantsImpl() {
  auto tblgen_copy_back_op = getProperties().copy_back_op; (void)tblgen_copy_back_op;
  auto tblgen_pack_paddings = getProperties().pack_paddings; (void)tblgen_pack_paddings;
  auto tblgen_padding_dimensions = getProperties().padding_dimensions; (void)tblgen_padding_dimensions;
  auto tblgen_padding_values = getProperties().padding_values; (void)tblgen_padding_values;
  auto tblgen_static_pad_to_multiple_of = getProperties().static_pad_to_multiple_of; (void)tblgen_static_pad_to_multiple_of;
  auto tblgen_transpose_paddings = getProperties().transpose_paddings; (void)tblgen_transpose_paddings;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps15(*this, tblgen_padding_values, "padding_values")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_padding_dimensions, "padding_dimensions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_static_pad_to_multiple_of, "static_pad_to_multiple_of")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_pack_paddings, "pack_paddings")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps16(*this, tblgen_transpose_paddings, "transpose_paddings")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps1(*this, tblgen_copy_back_op, "copy_back_op")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult PadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult PadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> pad_to_multiple_ofOperands;
  ::llvm::SMLoc pad_to_multiple_ofOperandsLoc;
  (void)pad_to_multiple_ofOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_pad_to_multiple_ofAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("pad_to_multiple_of"))) {
  {
    pad_to_multiple_ofOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, pad_to_multiple_ofOperands, static_pad_to_multiple_ofAttr);
    if (odsResult) return ::mlir::failure();
    if (static_pad_to_multiple_ofAttr)
      result.getOrAddProperties<PadOp::Properties>().static_pad_to_multiple_of = static_pad_to_multiple_ofAttr;
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
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(targetOperands, pad_to_multiple_ofOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (((!getPadToMultipleOf().empty()) || (getStaticPadToMultipleOfAttr()))) {
    _odsPrinter << ' ' << "pad_to_multiple_of";
    _odsPrinter << ' ';
    printDynamicIndexList(_odsPrinter, *this, getPadToMultipleOf(), getStaticPadToMultipleOfAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_pad_to_multiple_of");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPaddingValuesAttr();
     if(attr && (attr == odsBuilder.getArrayAttr({})))
       elidedAttrs.push_back("padding_values");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPaddingDimensionsAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("padding_dimensions");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticPadToMultipleOfAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_pad_to_multiple_of");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPackPaddingsAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("pack_paddings");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTransposePaddingsAttr();
     if(attr && (attr == odsBuilder.getArrayAttr({})))
       elidedAttrs.push_back("transpose_paddings");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getCopyBackOpAttr();
     if(attr && (attr == odsBuilder.getStringAttr(::mlir::bufferization::MaterializeInDestinationOp::getOperationName())))
       elidedAttrs.push_back("copy_back_op");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PromoteOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PromoteOpGenericAdaptorBase::PromoteOpGenericAdaptorBase(PromoteOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getOperandsToPromoteAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().operands_to_promote);
  return attr;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getOperandsToPromote() {
  auto attr = getOperandsToPromoteAttr();
  return attr;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getUseFullTileBuffersAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().use_full_tile_buffers);
  return attr;
}

::mlir::ArrayAttr PromoteOpGenericAdaptorBase::getUseFullTileBuffers() {
  auto attr = getUseFullTileBuffersAttr();
  return attr;
}

::mlir::UnitAttr PromoteOpGenericAdaptorBase::getUseFullTilesByDefaultAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_full_tiles_by_default);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool PromoteOpGenericAdaptorBase::getUseFullTilesByDefault() {
  auto attr = getUseFullTilesByDefaultAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr PromoteOpGenericAdaptorBase::getUseAllocaAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_alloca);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool PromoteOpGenericAdaptorBase::getUseAlloca() {
  auto attr = getUseAllocaAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::std::optional<::mlir::Attribute> PromoteOpGenericAdaptorBase::getMemorySpace() {
  auto attr = getMemorySpaceAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

::std::optional< ::mlir::ArrayAttr > PromoteOpGenericAdaptorBase::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::std::optional<uint64_t> PromoteOpGenericAdaptorBase::getAlignment() {
  auto attr = getAlignmentAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
PromoteOpAdaptor::PromoteOpAdaptor(PromoteOp op) : PromoteOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult PromoteOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alignment = getProperties().alignment; (void)tblgen_alignment;
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_memory_space = getProperties().memory_space; (void)tblgen_memory_space;
  auto tblgen_operands_to_promote = getProperties().operands_to_promote; (void)tblgen_operands_to_promote;
  auto tblgen_use_alloca = getProperties().use_alloca; (void)tblgen_use_alloca;
  auto tblgen_use_full_tile_buffers = getProperties().use_full_tile_buffers; (void)tblgen_use_full_tile_buffers;
  auto tblgen_use_full_tiles_by_default = getProperties().use_full_tiles_by_default; (void)tblgen_use_full_tiles_by_default;

  if (tblgen_operands_to_promote && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_operands_to_promote))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_operands_to_promote), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'operands_to_promote' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_use_full_tile_buffers && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_use_full_tile_buffers))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_use_full_tile_buffers), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::BoolAttr>(attr))); }))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'use_full_tile_buffers' failed to satisfy constraint: 1-bit boolean array attribute");

  if (tblgen_use_full_tiles_by_default && !((::llvm::isa<::mlir::UnitAttr>(tblgen_use_full_tiles_by_default))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'use_full_tiles_by_default' failed to satisfy constraint: unit attribute");

  if (tblgen_use_alloca && !((::llvm::isa<::mlir::UnitAttr>(tblgen_use_alloca))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'use_alloca' failed to satisfy constraint: unit attribute");

  if (tblgen_memory_space && !((true)))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'memory_space' failed to satisfy constraint: any attribute");

  if (tblgen_mapping && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_mapping))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_mapping), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DeviceMappingAttrInterface>(attr))); }))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'mapping' failed to satisfy constraint: Device Mapping array attribute");

  if (tblgen_alignment && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_alignment))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_alignment).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.promote' op ""attribute 'alignment' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

::llvm::LogicalResult PromoteOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alignment;
       auto attr = dict.get("alignment");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `alignment` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mapping;
       auto attr = dict.get("mapping");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mapping` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.memory_space;
       auto attr = dict.get("memory_space");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `memory_space` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.operands_to_promote;
       auto attr = dict.get("operands_to_promote");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `operands_to_promote` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_alloca;
       auto attr = dict.get("use_alloca");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `use_alloca` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_full_tile_buffers;
       auto attr = dict.get("use_full_tile_buffers");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `use_full_tile_buffers` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_full_tiles_by_default;
       auto attr = dict.get("use_full_tiles_by_default");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `use_full_tiles_by_default` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PromoteOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alignment;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alignment",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mapping;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mapping",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.memory_space;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("memory_space",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operands_to_promote;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("operands_to_promote",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_alloca;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_alloca",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_full_tile_buffers;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_full_tile_buffers",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_full_tiles_by_default;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_full_tiles_by_default",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PromoteOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.alignment.getAsOpaquePointer()), 
    llvm::hash_value(prop.mapping.getAsOpaquePointer()), 
    llvm::hash_value(prop.memory_space.getAsOpaquePointer()), 
    llvm::hash_value(prop.operands_to_promote.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_alloca.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_full_tile_buffers.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_full_tiles_by_default.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PromoteOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alignment")
      return prop.alignment;

    if (name == "mapping")
      return prop.mapping;

    if (name == "memory_space")
      return prop.memory_space;

    if (name == "operands_to_promote")
      return prop.operands_to_promote;

    if (name == "use_alloca")
      return prop.use_alloca;

    if (name == "use_full_tile_buffers")
      return prop.use_full_tile_buffers;

    if (name == "use_full_tiles_by_default")
      return prop.use_full_tiles_by_default;
  return std::nullopt;
}

void PromoteOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alignment") {
       prop.alignment = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alignment)>>(value);
       return;
    }

    if (name == "mapping") {
       prop.mapping = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mapping)>>(value);
       return;
    }

    if (name == "memory_space") {
       prop.memory_space = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.memory_space)>>(value);
       return;
    }

    if (name == "operands_to_promote") {
       prop.operands_to_promote = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.operands_to_promote)>>(value);
       return;
    }

    if (name == "use_alloca") {
       prop.use_alloca = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_alloca)>>(value);
       return;
    }

    if (name == "use_full_tile_buffers") {
       prop.use_full_tile_buffers = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_full_tile_buffers)>>(value);
       return;
    }

    if (name == "use_full_tiles_by_default") {
       prop.use_full_tiles_by_default = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_full_tiles_by_default)>>(value);
       return;
    }
}

void PromoteOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alignment) attrs.append("alignment", prop.alignment);

    if (prop.mapping) attrs.append("mapping", prop.mapping);

    if (prop.memory_space) attrs.append("memory_space", prop.memory_space);

    if (prop.operands_to_promote) attrs.append("operands_to_promote", prop.operands_to_promote);

    if (prop.use_alloca) attrs.append("use_alloca", prop.use_alloca);

    if (prop.use_full_tile_buffers) attrs.append("use_full_tile_buffers", prop.use_full_tile_buffers);

    if (prop.use_full_tiles_by_default) attrs.append("use_full_tiles_by_default", prop.use_full_tiles_by_default);
}

::llvm::LogicalResult PromoteOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAlignmentAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "alignment", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMappingAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(attr, "mapping", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMemorySpaceAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(attr, "memory_space", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOperandsToPromoteAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(attr, "operands_to_promote", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseAllocaAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "use_alloca", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseFullTileBuffersAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps17(attr, "use_full_tile_buffers", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseFullTilesByDefaultAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "use_full_tiles_by_default", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult PromoteOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alignment)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mapping)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.memory_space)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.operands_to_promote)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_alloca)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_full_tile_buffers)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_full_tiles_by_default)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PromoteOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alignment);

  writer.writeOptionalAttribute(prop.mapping);

  writer.writeOptionalAttribute(prop.memory_space);

  writer.writeOptionalAttribute(prop.operands_to_promote);

  writer.writeOptionalAttribute(prop.use_alloca);

  writer.writeOptionalAttribute(prop.use_full_tile_buffers);

  writer.writeOptionalAttribute(prop.use_full_tiles_by_default);
}

::mlir::ArrayAttr PromoteOp::getOperandsToPromote() {
  auto attr = getOperandsToPromoteAttr();
  return attr;
}

::mlir::ArrayAttr PromoteOp::getUseFullTileBuffers() {
  auto attr = getUseFullTileBuffersAttr();
  return attr;
}

bool PromoteOp::getUseFullTilesByDefault() {
  auto attr = getUseFullTilesByDefaultAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool PromoteOp::getUseAlloca() {
  auto attr = getUseAllocaAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::std::optional<::mlir::Attribute> PromoteOp::getMemorySpace() {
  auto attr = getMemorySpaceAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

::std::optional< ::mlir::ArrayAttr > PromoteOp::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::std::optional<uint64_t> PromoteOp::getAlignment() {
  auto attr = getAlignmentAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void PromoteOp::setUseFullTilesByDefault(bool attrValue) {
    auto &odsProp = getProperties().use_full_tiles_by_default;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void PromoteOp::setUseAlloca(bool attrValue) {
    auto &odsProp = getProperties().use_alloca;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void PromoteOp::setAlignment(::std::optional<uint64_t> attrValue) {
    auto &odsProp = getProperties().alignment;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue);
    else
      odsProp = nullptr;
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::Attribute memory_space, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  if (operands_to_promote) {
    odsState.getOrAddProperties<Properties>().operands_to_promote = operands_to_promote;
  }
  if (use_full_tile_buffers) {
    odsState.getOrAddProperties<Properties>().use_full_tile_buffers = use_full_tile_buffers;
  }
  if (use_full_tiles_by_default) {
    odsState.getOrAddProperties<Properties>().use_full_tiles_by_default = use_full_tiles_by_default;
  }
  if (use_alloca) {
    odsState.getOrAddProperties<Properties>().use_alloca = use_alloca;
  }
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  if (alignment) {
    odsState.getOrAddProperties<Properties>().alignment = alignment;
  }
  odsState.addTypes(transformed);
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::Attribute memory_space, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  if (operands_to_promote) {
    odsState.getOrAddProperties<Properties>().operands_to_promote = operands_to_promote;
  }
  if (use_full_tile_buffers) {
    odsState.getOrAddProperties<Properties>().use_full_tile_buffers = use_full_tile_buffers;
  }
  if (use_full_tiles_by_default) {
    odsState.getOrAddProperties<Properties>().use_full_tiles_by_default = use_full_tiles_by_default;
  }
  if (use_alloca) {
    odsState.getOrAddProperties<Properties>().use_alloca = use_alloca;
  }
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  if (alignment) {
    odsState.getOrAddProperties<Properties>().alignment = alignment;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::Attribute memory_space, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().operands_to_promote = operands_to_promote;
  odsState.getOrAddProperties<Properties>().use_full_tile_buffers = use_full_tile_buffers;
  if (use_full_tiles_by_default) {
    odsState.getOrAddProperties<Properties>().use_full_tiles_by_default = ((use_full_tiles_by_default) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_alloca) {
    odsState.getOrAddProperties<Properties>().use_alloca = ((use_alloca) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  if (alignment) {
    odsState.getOrAddProperties<Properties>().alignment = alignment;
  }
  odsState.addTypes(transformed);
}

void PromoteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::Attribute memory_space, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().operands_to_promote = operands_to_promote;
  odsState.getOrAddProperties<Properties>().use_full_tile_buffers = use_full_tile_buffers;
  if (use_full_tiles_by_default) {
    odsState.getOrAddProperties<Properties>().use_full_tiles_by_default = ((use_full_tiles_by_default) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_alloca) {
    odsState.getOrAddProperties<Properties>().use_alloca = ((use_alloca) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (memory_space) {
    odsState.getOrAddProperties<Properties>().memory_space = memory_space;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  if (alignment) {
    odsState.getOrAddProperties<Properties>().alignment = alignment;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PromoteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<PromoteOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void PromoteOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.operands_to_promote)
    properties.operands_to_promote = odsBuilder.getI64ArrayAttr({});
  if (!properties.use_full_tile_buffers)
    properties.use_full_tile_buffers = odsBuilder.getBoolArrayAttr({});
}

::llvm::LogicalResult PromoteOp::verifyInvariantsImpl() {
  auto tblgen_alignment = getProperties().alignment; (void)tblgen_alignment;
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_memory_space = getProperties().memory_space; (void)tblgen_memory_space;
  auto tblgen_operands_to_promote = getProperties().operands_to_promote; (void)tblgen_operands_to_promote;
  auto tblgen_use_alloca = getProperties().use_alloca; (void)tblgen_use_alloca;
  auto tblgen_use_full_tile_buffers = getProperties().use_full_tile_buffers; (void)tblgen_use_full_tile_buffers;
  auto tblgen_use_full_tiles_by_default = getProperties().use_full_tiles_by_default; (void)tblgen_use_full_tiles_by_default;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps4(*this, tblgen_operands_to_promote, "operands_to_promote")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps17(*this, tblgen_use_full_tile_buffers, "use_full_tile_buffers")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_use_full_tiles_by_default, "use_full_tiles_by_default")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_use_alloca, "use_alloca")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps0(*this, tblgen_memory_space, "memory_space")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(*this, tblgen_mapping, "mapping")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_alignment, "alignment")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult PromoteOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PromoteOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);
  ::mlir::Type transformedRawType{};
  ::llvm::ArrayRef<::mlir::Type> transformedTypes(&transformedRawType, 1);

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
    auto odsResult = parseSemiFunctionType(parser, targetRawType, transformedRawType);
    if (odsResult) return ::mlir::failure();
  }
  result.addTypes(transformedTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PromoteOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getOperandsToPromoteAttr();
     if(attr && (attr == odsBuilder.getI64ArrayAttr({})))
       elidedAttrs.push_back("operands_to_promote");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseFullTileBuffersAttr();
     if(attr && (attr == odsBuilder.getBoolArrayAttr({})))
       elidedAttrs.push_back("use_full_tile_buffers");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseFullTilesByDefaultAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_full_tiles_by_default");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseAllocaAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_alloca");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getTarget().getType(), getTransformed().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PromoteOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ReplaceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ReplaceOpAdaptor::ReplaceOpAdaptor(ReplaceOp op) : ReplaceOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ReplaceOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ReplaceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type replacement, ::mlir::Value target) {
  odsState.addOperands(target);
  (void)odsState.addRegion();
  odsState.addTypes(replacement);
}

void ReplaceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReplaceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ReplaceOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_LinalgTransformOps0(*this, region, "bodyRegion", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::llvm::LogicalResult ReplaceOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReplaceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<std::unique_ptr<::mlir::Region>, 2> fullRegions;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);
  ::mlir::Type replacementRawType{};
  ::llvm::ArrayRef<::mlir::Type> replacementTypes(&replacementRawType, 1);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDictWithKeyword(result.attributes))
      return ::mlir::failure();
  }

  {
    std::unique_ptr<::mlir::Region> region;
    auto firstRegionResult = parser.parseOptionalRegion(region);
    if (firstRegionResult.has_value()) {
      if (failed(*firstRegionResult))
        return ::mlir::failure();
      fullRegions.emplace_back(std::move(region));

      // Parse any trailing regions.
      while (succeeded(parser.parseOptionalComma())) {
        region = std::make_unique<::mlir::Region>();
        if (parser.parseRegion(*region))
          return ::mlir::failure();
        fullRegions.emplace_back(std::move(region));
      }
    }
  }

  for (auto &region : fullRegions)
    if (region->empty()) region->emplaceBlock();
  if (parser.parseColon())
    return ::mlir::failure();
  {
    auto odsResult = parseSemiFunctionType(parser, targetRawType, replacementRawType);
    if (odsResult) return ::mlir::failure();
  }
  result.addRegions(fullRegions);
  result.addTypes(replacementTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReplaceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDictWithKeyword((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
    llvm::interleaveComma(getOperation()->getRegions(), _odsPrinter, [&](::mlir::Region &region) {
        _odsPrinter.printRegion(region);
    });
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getTarget().getType(), getReplacement().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ReplaceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::RewriteInDestinationPassingStyleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
RewriteInDestinationPassingStyleOpAdaptor::RewriteInDestinationPassingStyleOpAdaptor(RewriteInDestinationPassingStyleOp op) : RewriteInDestinationPassingStyleOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult RewriteInDestinationPassingStyleOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void RewriteInDestinationPassingStyleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void RewriteInDestinationPassingStyleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RewriteInDestinationPassingStyleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult RewriteInDestinationPassingStyleOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult RewriteInDestinationPassingStyleOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RewriteInDestinationPassingStyleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
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

void RewriteInDestinationPassingStyleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::RewriteInDestinationPassingStyleOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ScalarizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ScalarizeOpAdaptor::ScalarizeOpAdaptor(ScalarizeOp op) : ScalarizeOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ScalarizeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ScalarizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(result);
}

void ScalarizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScalarizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ScalarizeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult ScalarizeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScalarizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);
  ::mlir::Type resultRawType{};
  ::llvm::ArrayRef<::mlir::Type> resultTypes(&resultRawType, 1);

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
    auto odsResult = parseSemiFunctionType(parser, targetRawType, resultRawType);
    if (odsResult) return ::mlir::failure();
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScalarizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getTarget().getType(), getResult().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ScalarizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SpecializeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
SpecializeOpAdaptor::SpecializeOpAdaptor(SpecializeOp op) : SpecializeOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult SpecializeOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void SpecializeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void SpecializeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SpecializeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult SpecializeOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult SpecializeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SpecializeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);
  ::mlir::Type transformedRawType{};
  ::llvm::ArrayRef<::mlir::Type> transformedTypes(&transformedRawType, 1);

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
    auto odsResult = parseSemiFunctionType(parser, targetRawType, transformedRawType);
    if (odsResult) return ::mlir::failure();
  }
  result.addTypes(transformedTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SpecializeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getTarget().getType(), getTransformed().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SpecializeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SplitOpGenericAdaptorBase::SplitOpGenericAdaptorBase(SplitOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

std::pair<unsigned, unsigned> SplitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

uint64_t SplitOpGenericAdaptorBase::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

uint64_t SplitOpGenericAdaptorBase::getStaticChunkSizes() {
  auto attr = getStaticChunkSizesAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr SplitOpGenericAdaptorBase::getMultiwayAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().multiway);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SplitOpGenericAdaptorBase::getMultiway() {
  auto attr = getMultiwayAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
SplitOpAdaptor::SplitOpAdaptor(SplitOp op) : SplitOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult SplitOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitError(loc, "'transform.structured.split' op ""requires attribute 'dimension'");
  auto tblgen_multiway = getProperties().multiway; (void)tblgen_multiway;
  auto tblgen_static_chunk_sizes = getProperties().static_chunk_sizes; (void)tblgen_static_chunk_sizes;
  if (!tblgen_static_chunk_sizes) return emitError(loc, "'transform.structured.split' op ""requires attribute 'static_chunk_sizes'");

  if (tblgen_dimension && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_dimension))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_dimension).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split' op ""attribute 'dimension' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_static_chunk_sizes && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_static_chunk_sizes))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_static_chunk_sizes).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split' op ""attribute 'static_chunk_sizes' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_multiway && !((::llvm::isa<::mlir::UnitAttr>(tblgen_multiway))))
    return emitError(loc, "'transform.structured.split' op ""attribute 'multiway' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

void SplitOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "first");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "second");
}

std::pair<unsigned, unsigned> SplitOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::MutableOperandRange SplitOp::getDynamicChunkSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::llvm::LogicalResult SplitOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dimension;
       auto attr = dict.get("dimension");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dimension` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.multiway;
       auto attr = dict.get("multiway");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `multiway` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_chunk_sizes;
       auto attr = dict.get("static_chunk_sizes");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_chunk_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SplitOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dimension;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dimension",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.multiway;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("multiway",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_chunk_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_chunk_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SplitOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.dimension.getAsOpaquePointer()), 
    llvm::hash_value(prop.multiway.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_chunk_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SplitOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dimension")
      return prop.dimension;

    if (name == "multiway")
      return prop.multiway;

    if (name == "static_chunk_sizes")
      return prop.static_chunk_sizes;
  return std::nullopt;
}

void SplitOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dimension") {
       prop.dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dimension)>>(value);
       return;
    }

    if (name == "multiway") {
       prop.multiway = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.multiway)>>(value);
       return;
    }

    if (name == "static_chunk_sizes") {
       prop.static_chunk_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_chunk_sizes)>>(value);
       return;
    }
}

void SplitOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dimension) attrs.append("dimension", prop.dimension);

    if (prop.multiway) attrs.append("multiway", prop.multiway);

    if (prop.static_chunk_sizes) attrs.append("static_chunk_sizes", prop.static_chunk_sizes);
}

::llvm::LogicalResult SplitOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "dimension", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMultiwayAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "multiway", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticChunkSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "static_chunk_sizes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult SplitOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.dimension)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.multiway)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.static_chunk_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SplitOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.dimension);

  writer.writeOptionalAttribute(prop.multiway);
  writer.writeAttribute(prop.static_chunk_sizes);
}

uint64_t SplitOp::getDimension() {
  auto attr = getDimensionAttr();
  return attr.getValue().getZExtValue();
}

uint64_t SplitOp::getStaticChunkSizes() {
  auto attr = getStaticChunkSizesAttr();
  return attr.getValue().getZExtValue();
}

bool SplitOp::getMultiway() {
  auto attr = getMultiwayAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void SplitOp::setDimension(uint64_t attrValue) {
  getProperties().dimension = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void SplitOp::setStaticChunkSizes(uint64_t attrValue) {
  getProperties().static_chunk_sizes = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void SplitOp::setMultiway(bool attrValue) {
    auto &odsProp = getProperties().multiway;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_chunk_sizes, ::mlir::IntegerAttr static_chunk_sizes, /*optional*/::mlir::UnitAttr multiway) {
  odsState.addOperands(target);
  if (dynamic_chunk_sizes)
    odsState.addOperands(dynamic_chunk_sizes);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.getOrAddProperties<Properties>().static_chunk_sizes = static_chunk_sizes;
  if (multiway) {
    odsState.getOrAddProperties<Properties>().multiway = multiway;
  }
  odsState.addTypes(first);
  odsState.addTypes(second);
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_chunk_sizes, ::mlir::IntegerAttr static_chunk_sizes, /*optional*/::mlir::UnitAttr multiway) {
  odsState.addOperands(target);
  if (dynamic_chunk_sizes)
    odsState.addOperands(dynamic_chunk_sizes);
  odsState.getOrAddProperties<Properties>().dimension = dimension;
  odsState.getOrAddProperties<Properties>().static_chunk_sizes = static_chunk_sizes;
  if (multiway) {
    odsState.getOrAddProperties<Properties>().multiway = multiway;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_chunk_sizes, uint64_t static_chunk_sizes, /*optional*/bool multiway) {
  odsState.addOperands(target);
  if (dynamic_chunk_sizes)
    odsState.addOperands(dynamic_chunk_sizes);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension);
  odsState.getOrAddProperties<Properties>().static_chunk_sizes = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), static_chunk_sizes);
  if (multiway) {
    odsState.getOrAddProperties<Properties>().multiway = ((multiway) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(first);
  odsState.addTypes(second);
}

void SplitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_chunk_sizes, uint64_t static_chunk_sizes, /*optional*/bool multiway) {
  odsState.addOperands(target);
  if (dynamic_chunk_sizes)
    odsState.addOperands(dynamic_chunk_sizes);
  odsState.getOrAddProperties<Properties>().dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), dimension);
  odsState.getOrAddProperties<Properties>().static_chunk_sizes = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), static_chunk_sizes);
  if (multiway) {
    odsState.getOrAddProperties<Properties>().multiway = ((multiway) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<SplitOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult SplitOp::verifyInvariantsImpl() {
  auto tblgen_dimension = getProperties().dimension; (void)tblgen_dimension;
  if (!tblgen_dimension) return emitOpError("requires attribute 'dimension'");
  auto tblgen_multiway = getProperties().multiway; (void)tblgen_multiway;
  auto tblgen_static_chunk_sizes = getProperties().static_chunk_sizes; (void)tblgen_static_chunk_sizes;
  if (!tblgen_static_chunk_sizes) return emitOpError("requires attribute 'static_chunk_sizes'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_dimension, "dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_static_chunk_sizes, "static_chunk_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_multiway, "multiway")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult SplitOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SplitOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitReductionOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SplitReductionOpGenericAdaptorBase::SplitReductionOpGenericAdaptorBase(SplitReductionOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::IntegerAttr SplitReductionOpGenericAdaptorBase::getSplitFactorAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().split_factor);
  return attr;
}

uint64_t SplitReductionOpGenericAdaptorBase::getSplitFactor() {
  auto attr = getSplitFactorAttr();
  return attr.getValue().getZExtValue();
}

::mlir::IntegerAttr SplitReductionOpGenericAdaptorBase::getInsertSplitDimensionAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().insert_split_dimension);
  return attr;
}

uint64_t SplitReductionOpGenericAdaptorBase::getInsertSplitDimension() {
  auto attr = getInsertSplitDimensionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr SplitReductionOpGenericAdaptorBase::getInnerParallelAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inner_parallel);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SplitReductionOpGenericAdaptorBase::getInnerParallel() {
  auto attr = getInnerParallelAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr SplitReductionOpGenericAdaptorBase::getUseScalingAlgorithmAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_scaling_algorithm);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SplitReductionOpGenericAdaptorBase::getUseScalingAlgorithm() {
  auto attr = getUseScalingAlgorithmAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr SplitReductionOpGenericAdaptorBase::getUseAllocAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_alloc);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SplitReductionOpGenericAdaptorBase::getUseAlloc() {
  auto attr = getUseAllocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
SplitReductionOpAdaptor::SplitReductionOpAdaptor(SplitReductionOp op) : SplitReductionOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult SplitReductionOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_inner_parallel = getProperties().inner_parallel; (void)tblgen_inner_parallel;
  auto tblgen_insert_split_dimension = getProperties().insert_split_dimension; (void)tblgen_insert_split_dimension;
  auto tblgen_split_factor = getProperties().split_factor; (void)tblgen_split_factor;
  auto tblgen_use_alloc = getProperties().use_alloc; (void)tblgen_use_alloc;
  auto tblgen_use_scaling_algorithm = getProperties().use_scaling_algorithm; (void)tblgen_use_scaling_algorithm;

  if (tblgen_split_factor && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_split_factor))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_split_factor).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'split_factor' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_insert_split_dimension && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_insert_split_dimension))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_insert_split_dimension).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'insert_split_dimension' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_inner_parallel && !((::llvm::isa<::mlir::UnitAttr>(tblgen_inner_parallel))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'inner_parallel' failed to satisfy constraint: unit attribute");

  if (tblgen_use_scaling_algorithm && !((::llvm::isa<::mlir::UnitAttr>(tblgen_use_scaling_algorithm))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'use_scaling_algorithm' failed to satisfy constraint: unit attribute");

  if (tblgen_use_alloc && !((::llvm::isa<::mlir::UnitAttr>(tblgen_use_alloc))))
    return emitError(loc, "'transform.structured.split_reduction' op ""attribute 'use_alloc' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

void SplitReductionOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "init_or_alloc_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "fill_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "split_linalg_op");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "combining_linalg_op");
}

::llvm::LogicalResult SplitReductionOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.inner_parallel;
       auto attr = dict.get("inner_parallel");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `inner_parallel` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.insert_split_dimension;
       auto attr = dict.get("insert_split_dimension");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `insert_split_dimension` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.split_factor;
       auto attr = dict.get("split_factor");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `split_factor` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_alloc;
       auto attr = dict.get("use_alloc");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `use_alloc` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_scaling_algorithm;
       auto attr = dict.get("use_scaling_algorithm");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `use_scaling_algorithm` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SplitReductionOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.inner_parallel;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("inner_parallel",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.insert_split_dimension;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("insert_split_dimension",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.split_factor;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("split_factor",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_alloc;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_alloc",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_scaling_algorithm;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_scaling_algorithm",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SplitReductionOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.inner_parallel.getAsOpaquePointer()), 
    llvm::hash_value(prop.insert_split_dimension.getAsOpaquePointer()), 
    llvm::hash_value(prop.split_factor.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_alloc.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_scaling_algorithm.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SplitReductionOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "inner_parallel")
      return prop.inner_parallel;

    if (name == "insert_split_dimension")
      return prop.insert_split_dimension;

    if (name == "split_factor")
      return prop.split_factor;

    if (name == "use_alloc")
      return prop.use_alloc;

    if (name == "use_scaling_algorithm")
      return prop.use_scaling_algorithm;
  return std::nullopt;
}

void SplitReductionOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "inner_parallel") {
       prop.inner_parallel = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.inner_parallel)>>(value);
       return;
    }

    if (name == "insert_split_dimension") {
       prop.insert_split_dimension = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.insert_split_dimension)>>(value);
       return;
    }

    if (name == "split_factor") {
       prop.split_factor = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.split_factor)>>(value);
       return;
    }

    if (name == "use_alloc") {
       prop.use_alloc = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_alloc)>>(value);
       return;
    }

    if (name == "use_scaling_algorithm") {
       prop.use_scaling_algorithm = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_scaling_algorithm)>>(value);
       return;
    }
}

void SplitReductionOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.inner_parallel) attrs.append("inner_parallel", prop.inner_parallel);

    if (prop.insert_split_dimension) attrs.append("insert_split_dimension", prop.insert_split_dimension);

    if (prop.split_factor) attrs.append("split_factor", prop.split_factor);

    if (prop.use_alloc) attrs.append("use_alloc", prop.use_alloc);

    if (prop.use_scaling_algorithm) attrs.append("use_scaling_algorithm", prop.use_scaling_algorithm);
}

::llvm::LogicalResult SplitReductionOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInnerParallelAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "inner_parallel", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getInsertSplitDimensionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "insert_split_dimension", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSplitFactorAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "split_factor", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseAllocAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "use_alloc", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseScalingAlgorithmAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "use_scaling_algorithm", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult SplitReductionOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.inner_parallel)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.insert_split_dimension)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.split_factor)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_alloc)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_scaling_algorithm)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SplitReductionOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.inner_parallel);

  writer.writeOptionalAttribute(prop.insert_split_dimension);

  writer.writeOptionalAttribute(prop.split_factor);

  writer.writeOptionalAttribute(prop.use_alloc);

  writer.writeOptionalAttribute(prop.use_scaling_algorithm);
}

uint64_t SplitReductionOp::getSplitFactor() {
  auto attr = getSplitFactorAttr();
  return attr.getValue().getZExtValue();
}

uint64_t SplitReductionOp::getInsertSplitDimension() {
  auto attr = getInsertSplitDimensionAttr();
  return attr.getValue().getZExtValue();
}

bool SplitReductionOp::getInnerParallel() {
  auto attr = getInnerParallelAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool SplitReductionOp::getUseScalingAlgorithm() {
  auto attr = getUseScalingAlgorithmAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool SplitReductionOp::getUseAlloc() {
  auto attr = getUseAllocAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void SplitReductionOp::setSplitFactor(uint64_t attrValue) {
  getProperties().split_factor = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void SplitReductionOp::setInsertSplitDimension(uint64_t attrValue) {
  getProperties().insert_split_dimension = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void SplitReductionOp::setInnerParallel(bool attrValue) {
    auto &odsProp = getProperties().inner_parallel;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void SplitReductionOp::setUseScalingAlgorithm(bool attrValue) {
    auto &odsProp = getProperties().use_scaling_algorithm;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void SplitReductionOp::setUseAlloc(bool attrValue) {
    auto &odsProp = getProperties().use_alloc;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension, /*optional*/::mlir::UnitAttr inner_parallel, /*optional*/::mlir::UnitAttr use_scaling_algorithm, /*optional*/::mlir::UnitAttr use_alloc) {
  odsState.addOperands(target);
  if (split_factor) {
    odsState.getOrAddProperties<Properties>().split_factor = split_factor;
  }
  if (insert_split_dimension) {
    odsState.getOrAddProperties<Properties>().insert_split_dimension = insert_split_dimension;
  }
  if (inner_parallel) {
    odsState.getOrAddProperties<Properties>().inner_parallel = inner_parallel;
  }
  if (use_scaling_algorithm) {
    odsState.getOrAddProperties<Properties>().use_scaling_algorithm = use_scaling_algorithm;
  }
  if (use_alloc) {
    odsState.getOrAddProperties<Properties>().use_alloc = use_alloc;
  }
  odsState.addTypes(init_or_alloc_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension, /*optional*/::mlir::UnitAttr inner_parallel, /*optional*/::mlir::UnitAttr use_scaling_algorithm, /*optional*/::mlir::UnitAttr use_alloc) {
  odsState.addOperands(target);
  if (split_factor) {
    odsState.getOrAddProperties<Properties>().split_factor = split_factor;
  }
  if (insert_split_dimension) {
    odsState.getOrAddProperties<Properties>().insert_split_dimension = insert_split_dimension;
  }
  if (inner_parallel) {
    odsState.getOrAddProperties<Properties>().inner_parallel = inner_parallel;
  }
  if (use_scaling_algorithm) {
    odsState.getOrAddProperties<Properties>().use_scaling_algorithm = use_scaling_algorithm;
  }
  if (use_alloc) {
    odsState.getOrAddProperties<Properties>().use_alloc = use_alloc;
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, uint64_t split_factor, uint64_t insert_split_dimension, /*optional*/bool inner_parallel, /*optional*/bool use_scaling_algorithm, /*optional*/bool use_alloc) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().split_factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), split_factor);
  odsState.getOrAddProperties<Properties>().insert_split_dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), insert_split_dimension);
  if (inner_parallel) {
    odsState.getOrAddProperties<Properties>().inner_parallel = ((inner_parallel) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_scaling_algorithm) {
    odsState.getOrAddProperties<Properties>().use_scaling_algorithm = ((use_scaling_algorithm) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_alloc) {
    odsState.getOrAddProperties<Properties>().use_alloc = ((use_alloc) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(init_or_alloc_op);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
}

void SplitReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t split_factor, uint64_t insert_split_dimension, /*optional*/bool inner_parallel, /*optional*/bool use_scaling_algorithm, /*optional*/bool use_alloc) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().split_factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), split_factor);
  odsState.getOrAddProperties<Properties>().insert_split_dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), insert_split_dimension);
  if (inner_parallel) {
    odsState.getOrAddProperties<Properties>().inner_parallel = ((inner_parallel) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_scaling_algorithm) {
    odsState.getOrAddProperties<Properties>().use_scaling_algorithm = ((use_scaling_algorithm) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (use_alloc) {
    odsState.getOrAddProperties<Properties>().use_alloc = ((use_alloc) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitReductionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 4u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<SplitReductionOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void SplitReductionOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.split_factor)
    properties.split_factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {});
  if (!properties.insert_split_dimension)
    properties.insert_split_dimension = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {});
}

::llvm::LogicalResult SplitReductionOp::verifyInvariantsImpl() {
  auto tblgen_inner_parallel = getProperties().inner_parallel; (void)tblgen_inner_parallel;
  auto tblgen_insert_split_dimension = getProperties().insert_split_dimension; (void)tblgen_insert_split_dimension;
  auto tblgen_split_factor = getProperties().split_factor; (void)tblgen_split_factor;
  auto tblgen_use_alloc = getProperties().use_alloc; (void)tblgen_use_alloc;
  auto tblgen_use_scaling_algorithm = getProperties().use_scaling_algorithm; (void)tblgen_use_scaling_algorithm;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_split_factor, "split_factor")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_insert_split_dimension, "insert_split_dimension")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_inner_parallel, "inner_parallel")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_use_scaling_algorithm, "use_scaling_algorithm")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_use_alloc, "use_alloc")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult SplitReductionOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SplitReductionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void SplitReductionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSplitFactorAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {})))
       elidedAttrs.push_back("split_factor");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInsertSplitDimensionAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), {})))
       elidedAttrs.push_back("insert_split_dimension");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInnerParallelAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("inner_parallel");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseScalingAlgorithmAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_scaling_algorithm");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseAllocAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("use_alloc");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SplitReductionOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingForOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileReductionUsingForOpGenericAdaptorBase::TileReductionUsingForOpGenericAdaptorBase(TileReductionUsingForOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::DenseI64ArrayAttr TileReductionUsingForOpGenericAdaptorBase::getTileSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().tile_sizes);
  return attr;
}

::llvm::ArrayRef<int64_t> TileReductionUsingForOpGenericAdaptorBase::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

} // namespace detail
TileReductionUsingForOpAdaptor::TileReductionUsingForOpAdaptor(TileReductionUsingForOp op) : TileReductionUsingForOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult TileReductionUsingForOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (tblgen_tile_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_tile_sizes))))
    return emitError(loc, "'transform.structured.tile_reduction_using_for' op ""attribute 'tile_sizes' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

void TileReductionUsingForOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "fill_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "split_linalg_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "combining_linalg_op");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "for_op");
}

std::pair<unsigned, unsigned> TileReductionUsingForOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::llvm::LogicalResult TileReductionUsingForOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.tile_sizes;
       auto attr = dict.get("tile_sizes");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TileReductionUsingForOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.tile_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileReductionUsingForOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.tile_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TileReductionUsingForOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "tile_sizes")
      return prop.tile_sizes;
  return std::nullopt;
}

void TileReductionUsingForOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "tile_sizes") {
       prop.tile_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_sizes)>>(value);
       return;
    }
}

void TileReductionUsingForOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.tile_sizes) attrs.append("tile_sizes", prop.tile_sizes);
}

::llvm::LogicalResult TileReductionUsingForOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTileSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "tile_sizes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult TileReductionUsingForOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.tile_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileReductionUsingForOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.tile_sizes);
}

::llvm::ArrayRef<int64_t> TileReductionUsingForOp::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

void TileReductionUsingForOp::setTileSizes(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().tile_sizes = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void TileReductionUsingForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Type for_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
  odsState.addTypes(for_op);
}

void TileReductionUsingForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes) {
  odsState.addOperands(target);
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  assert(resultTypes.size() >= 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Type for_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().tile_sizes = odsBuilder.getDenseI64ArrayAttr(tile_sizes);
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
  odsState.addTypes(for_op);
}

void TileReductionUsingForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().tile_sizes = odsBuilder.getDenseI64ArrayAttr(tile_sizes);
  assert(resultTypes.size() >= 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingForOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<TileReductionUsingForOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void TileReductionUsingForOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.tile_sizes)
    properties.tile_sizes = odsBuilder.getDenseI64ArrayAttr({});
}

::llvm::LogicalResult TileReductionUsingForOp::verifyInvariantsImpl() {
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_tile_sizes, "tile_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult TileReductionUsingForOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TileReductionUsingForOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr tile_sizesAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();
  if (parser.parseKeyword("tile_sizes"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(tile_sizesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (tile_sizesAttr) result.getOrAddProperties<TileReductionUsingForOp::Properties>().tile_sizes = tile_sizesAttr;
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

void TileReductionUsingForOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "by";
  _odsPrinter << ' ' << "tile_sizes";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getTileSizesAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("tile_sizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTileSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("tile_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingForOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingForallOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileReductionUsingForallOpGenericAdaptorBase::TileReductionUsingForallOpGenericAdaptorBase(TileReductionUsingForallOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::DenseI64ArrayAttr TileReductionUsingForallOpGenericAdaptorBase::getNumThreadsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().num_threads);
  return attr;
}

::llvm::ArrayRef<int64_t> TileReductionUsingForallOpGenericAdaptorBase::getNumThreads() {
  auto attr = getNumThreadsAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr TileReductionUsingForallOpGenericAdaptorBase::getTileSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().tile_sizes);
  return attr;
}

::llvm::ArrayRef<int64_t> TileReductionUsingForallOpGenericAdaptorBase::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TileReductionUsingForallOpGenericAdaptorBase::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
TileReductionUsingForallOpAdaptor::TileReductionUsingForallOpAdaptor(TileReductionUsingForallOp op) : TileReductionUsingForallOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult TileReductionUsingForallOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_num_threads = getProperties().num_threads; (void)tblgen_num_threads;
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (tblgen_num_threads && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_num_threads))))
    return emitError(loc, "'transform.structured.tile_reduction_using_forall' op ""attribute 'num_threads' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_tile_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_tile_sizes))))
    return emitError(loc, "'transform.structured.tile_reduction_using_forall' op ""attribute 'tile_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_mapping && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_mapping))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_mapping), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DeviceMappingAttrInterface>(attr))); }))))
    return emitError(loc, "'transform.structured.tile_reduction_using_forall' op ""attribute 'mapping' failed to satisfy constraint: Device Mapping array attribute");
  return ::mlir::success();
}

void TileReductionUsingForallOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "fill_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "split_linalg_op");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "combining_linalg_op");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "forall_op");
}

std::pair<unsigned, unsigned> TileReductionUsingForallOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true, false, false, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::llvm::LogicalResult TileReductionUsingForallOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mapping;
       auto attr = dict.get("mapping");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mapping` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.num_threads;
       auto attr = dict.get("num_threads");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `num_threads` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.tile_sizes;
       auto attr = dict.get("tile_sizes");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `tile_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TileReductionUsingForallOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mapping;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mapping",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.num_threads;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("num_threads",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.tile_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("tile_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileReductionUsingForallOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mapping.getAsOpaquePointer()), 
    llvm::hash_value(prop.num_threads.getAsOpaquePointer()), 
    llvm::hash_value(prop.tile_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TileReductionUsingForallOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mapping")
      return prop.mapping;

    if (name == "num_threads")
      return prop.num_threads;

    if (name == "tile_sizes")
      return prop.tile_sizes;
  return std::nullopt;
}

void TileReductionUsingForallOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mapping") {
       prop.mapping = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mapping)>>(value);
       return;
    }

    if (name == "num_threads") {
       prop.num_threads = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num_threads)>>(value);
       return;
    }

    if (name == "tile_sizes") {
       prop.tile_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.tile_sizes)>>(value);
       return;
    }
}

void TileReductionUsingForallOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mapping) attrs.append("mapping", prop.mapping);

    if (prop.num_threads) attrs.append("num_threads", prop.num_threads);

    if (prop.tile_sizes) attrs.append("tile_sizes", prop.tile_sizes);
}

::llvm::LogicalResult TileReductionUsingForallOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMappingAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(attr, "mapping", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNumThreadsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "num_threads", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTileSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "tile_sizes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult TileReductionUsingForallOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.mapping)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.num_threads)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.tile_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileReductionUsingForallOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.mapping);

  writer.writeOptionalAttribute(prop.num_threads);

  writer.writeOptionalAttribute(prop.tile_sizes);
}

::llvm::ArrayRef<int64_t> TileReductionUsingForallOp::getNumThreads() {
  auto attr = getNumThreadsAttr();
  return attr;
}

::llvm::ArrayRef<int64_t> TileReductionUsingForallOp::getTileSizes() {
  auto attr = getTileSizesAttr();
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TileReductionUsingForallOp::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void TileReductionUsingForallOp::setNumThreads(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().num_threads = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void TileReductionUsingForallOp::setTileSizes(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().tile_sizes = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void TileReductionUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Type forall_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  if (num_threads) {
    odsState.getOrAddProperties<Properties>().num_threads = num_threads;
  }
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
  odsState.addTypes(forall_op);
}

void TileReductionUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  if (num_threads) {
    odsState.getOrAddProperties<Properties>().num_threads = num_threads;
  }
  if (tile_sizes) {
    odsState.getOrAddProperties<Properties>().tile_sizes = tile_sizes;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  assert(resultTypes.size() >= 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Type forall_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_threads = odsBuilder.getDenseI64ArrayAttr(num_threads);
  odsState.getOrAddProperties<Properties>().tile_sizes = odsBuilder.getDenseI64ArrayAttr(tile_sizes);
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  odsState.addTypes(fill_op);
  odsState.addTypes(split_linalg_op);
  odsState.addTypes(combining_linalg_op);
  odsState.addTypes(forall_op);
}

void TileReductionUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_threads = odsBuilder.getDenseI64ArrayAttr(num_threads);
  odsState.getOrAddProperties<Properties>().tile_sizes = odsBuilder.getDenseI64ArrayAttr(tile_sizes);
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  assert(resultTypes.size() >= 3u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileReductionUsingForallOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 3u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<TileReductionUsingForallOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void TileReductionUsingForallOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.num_threads)
    properties.num_threads = odsBuilder.getDenseI64ArrayAttr({});
  if (!properties.tile_sizes)
    properties.tile_sizes = odsBuilder.getDenseI64ArrayAttr({});
}

::llvm::LogicalResult TileReductionUsingForallOp::verifyInvariantsImpl() {
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_num_threads = getProperties().num_threads; (void)tblgen_num_threads;
  auto tblgen_tile_sizes = getProperties().tile_sizes; (void)tblgen_tile_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_num_threads, "num_threads")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_tile_sizes, "tile_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(*this, tblgen_mapping, "mapping")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult TileReductionUsingForallOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TileReductionUsingForallOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr num_threadsAttr;
  ::mlir::DenseI64ArrayAttr tile_sizesAttr;
  ::mlir::ArrayAttr mappingAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("by"))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("num_threads"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(num_threadsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (num_threadsAttr) result.getOrAddProperties<TileReductionUsingForallOp::Properties>().num_threads = num_threadsAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("tile_sizes"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(tile_sizesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (tile_sizesAttr) result.getOrAddProperties<TileReductionUsingForallOp::Properties>().tile_sizes = tile_sizesAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {
  if (parser.parseKeyword("mapping"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mappingAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (mappingAttr) result.getOrAddProperties<TileReductionUsingForallOp::Properties>().mapping = mappingAttr;
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

void TileReductionUsingForallOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "by";
  if (getNumThreadsAttr() && getNumThreadsAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ' ' << "num_threads";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getNumThreadsAttr());
  }
  if (getTileSizesAttr() && getTileSizesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "tile_sizes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getTileSizesAttr());
  }
  if (getMappingAttr()) {
    _odsPrinter << ",";
    _odsPrinter << ' ' << "mapping";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getMappingAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("num_threads");
  elidedAttrs.push_back("tile_sizes");
  elidedAttrs.push_back("mapping");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNumThreadsAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("num_threads");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getTileSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("tile_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingForallOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileUsingForOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileUsingForOpGenericAdaptorBase::TileUsingForOpGenericAdaptorBase(TileUsingForOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

std::pair<unsigned, unsigned> TileUsingForOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DenseI64ArrayAttr TileUsingForOpGenericAdaptorBase::getStaticSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_sizes);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileUsingForOpGenericAdaptorBase::getStaticSizes() {
  auto attr = getStaticSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileUsingForOpGenericAdaptorBase::getInterchangeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().interchange);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileUsingForOpGenericAdaptorBase::getInterchange() {
  auto attr = getInterchangeAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseBoolArrayAttr TileUsingForOpGenericAdaptorBase::getScalableSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(getProperties().scalable_sizes);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseBoolArrayAttr({});
  return attr;
}

::llvm::ArrayRef<bool> TileUsingForOpGenericAdaptorBase::getScalableSizes() {
  auto attr = getScalableSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseBoolArrayAttr({});
  return attr;
}

} // namespace detail
TileUsingForOpAdaptor::TileUsingForOpAdaptor(TileUsingForOp op) : TileUsingForOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult TileUsingForOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_interchange = getProperties().interchange; (void)tblgen_interchange;
  auto tblgen_scalable_sizes = getProperties().scalable_sizes; (void)tblgen_scalable_sizes;
  auto tblgen_static_sizes = getProperties().static_sizes; (void)tblgen_static_sizes;

  if (tblgen_static_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_sizes))))
    return emitError(loc, "'transform.structured.tile_using_for' op ""attribute 'static_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_interchange && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_interchange))))
    return emitError(loc, "'transform.structured.tile_using_for' op ""attribute 'interchange' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_scalable_sizes && !((::llvm::isa<::mlir::DenseBoolArrayAttr>(tblgen_scalable_sizes))))
    return emitError(loc, "'transform.structured.tile_using_for' op ""attribute 'scalable_sizes' failed to satisfy constraint: i1 dense array attribute");
  return ::mlir::success();
}

void TileUsingForOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "tiled_linalg_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "loops");
}

std::pair<unsigned, unsigned> TileUsingForOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::MutableOperandRange TileUsingForOp::getDynamicSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> TileUsingForOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::llvm::LogicalResult TileUsingForOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.interchange;
       auto attr = dict.get("interchange");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `interchange` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.scalable_sizes;
       auto attr = dict.get("scalable_sizes");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `scalable_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_sizes;
       auto attr = dict.get("static_sizes");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TileUsingForOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.interchange;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("interchange",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.scalable_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("scalable_sizes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_sizes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileUsingForOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.interchange.getAsOpaquePointer()), 
    llvm::hash_value(prop.scalable_sizes.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_sizes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TileUsingForOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "interchange")
      return prop.interchange;

    if (name == "scalable_sizes")
      return prop.scalable_sizes;

    if (name == "static_sizes")
      return prop.static_sizes;
  return std::nullopt;
}

void TileUsingForOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "interchange") {
       prop.interchange = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.interchange)>>(value);
       return;
    }

    if (name == "scalable_sizes") {
       prop.scalable_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.scalable_sizes)>>(value);
       return;
    }

    if (name == "static_sizes") {
       prop.static_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_sizes)>>(value);
       return;
    }
}

void TileUsingForOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.interchange) attrs.append("interchange", prop.interchange);

    if (prop.scalable_sizes) attrs.append("scalable_sizes", prop.scalable_sizes);

    if (prop.static_sizes) attrs.append("static_sizes", prop.static_sizes);
}

::llvm::LogicalResult TileUsingForOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInterchangeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "interchange", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getScalableSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps19(attr, "scalable_sizes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "static_sizes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult TileUsingForOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.interchange)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.scalable_sizes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_sizes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileUsingForOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.interchange);

  writer.writeOptionalAttribute(prop.scalable_sizes);

  writer.writeOptionalAttribute(prop.static_sizes);
}

::llvm::ArrayRef<int64_t> TileUsingForOp::getStaticSizes() {
  auto attr = getStaticSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileUsingForOp::getInterchange() {
  auto attr = getInterchangeAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<bool> TileUsingForOp::getScalableSizes() {
  auto attr = getScalableSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseBoolArrayAttr({});
  return attr;
}

void TileUsingForOp::setStaticSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    auto &odsProp = getProperties().static_sizes;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void TileUsingForOp::setInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    auto &odsProp = getProperties().interchange;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void TileUsingForOp::setScalableSizes(::std::optional<::llvm::ArrayRef<bool>> attrValue) {
    auto &odsProp = getProperties().scalable_sizes;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseBoolArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void TileUsingForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  if (static_sizes) {
    odsState.getOrAddProperties<Properties>().static_sizes = static_sizes;
  }
  if (interchange) {
    odsState.getOrAddProperties<Properties>().interchange = interchange;
  }
  if (scalable_sizes) {
    odsState.getOrAddProperties<Properties>().scalable_sizes = scalable_sizes;
  }
  odsState.addTypes(tiled_linalg_op);
  odsState.addTypes(loops);
}

void TileUsingForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  if (static_sizes) {
    odsState.getOrAddProperties<Properties>().static_sizes = static_sizes;
  }
  if (interchange) {
    odsState.getOrAddProperties<Properties>().interchange = interchange;
  }
  if (scalable_sizes) {
    odsState.getOrAddProperties<Properties>().scalable_sizes = scalable_sizes;
  }
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileUsingForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes, /*optional*/::llvm::ArrayRef<int64_t> interchange, /*optional*/::llvm::ArrayRef<bool> scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  odsState.getOrAddProperties<Properties>().static_sizes = odsBuilder.getDenseI64ArrayAttr(static_sizes);
  odsState.getOrAddProperties<Properties>().interchange = odsBuilder.getDenseI64ArrayAttr(interchange);
  odsState.getOrAddProperties<Properties>().scalable_sizes = odsBuilder.getDenseBoolArrayAttr(scalable_sizes);
  odsState.addTypes(tiled_linalg_op);
  odsState.addTypes(loops);
}

void TileUsingForOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes, /*optional*/::llvm::ArrayRef<int64_t> interchange, /*optional*/::llvm::ArrayRef<bool> scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(dynamic_sizes);
  odsState.getOrAddProperties<Properties>().static_sizes = odsBuilder.getDenseI64ArrayAttr(static_sizes);
  odsState.getOrAddProperties<Properties>().interchange = odsBuilder.getDenseI64ArrayAttr(interchange);
  odsState.getOrAddProperties<Properties>().scalable_sizes = odsBuilder.getDenseBoolArrayAttr(scalable_sizes);
  assert(resultTypes.size() >= 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileUsingForOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() >= 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<TileUsingForOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult TileUsingForOp::verifyInvariantsImpl() {
  auto tblgen_interchange = getProperties().interchange; (void)tblgen_interchange;
  auto tblgen_scalable_sizes = getProperties().scalable_sizes; (void)tblgen_scalable_sizes;
  auto tblgen_static_sizes = getProperties().static_sizes; (void)tblgen_static_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_static_sizes, "static_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_interchange, "interchange")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps19(*this, tblgen_scalable_sizes, "scalable_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult TileUsingForOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TileUsingForOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> dynamic_sizesOperands;
  ::llvm::SMLoc dynamic_sizesOperandsLoc;
  (void)dynamic_sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_sizesAttr;
  ::mlir::DenseBoolArrayAttr scalable_sizesAttr;
  ::mlir::DenseI64ArrayAttr interchangeAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("tile_sizes"))
    return ::mlir::failure();
  {
    dynamic_sizesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, dynamic_sizesOperands, static_sizesAttr, scalable_sizesAttr);
    if (odsResult) return ::mlir::failure();
    if (static_sizesAttr)
      result.getOrAddProperties<TileUsingForOp::Properties>().static_sizes = static_sizesAttr;
    if (scalable_sizesAttr)
      result.getOrAddProperties<TileUsingForOp::Properties>().scalable_sizes = scalable_sizesAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("interchange"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(interchangeAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (interchangeAttr) result.getOrAddProperties<TileUsingForOp::Properties>().interchange = interchangeAttr;
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
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(targetOperands, dynamic_sizesOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileUsingForOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "tile_sizes";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getDynamicSizes(), getStaticSizesAttr(), getScalableSizesAttr());
  if (getInterchangeAttr()) {
    _odsPrinter << ' ' << "interchange";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getInterchangeAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_sizes");
  elidedAttrs.push_back("scalable_sizes");
  elidedAttrs.push_back("interchange");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_sizes");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInterchangeAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("interchange");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getScalableSizesAttr();
     if(attr && (attr == odsBuilder.getDenseBoolArrayAttr({})))
       elidedAttrs.push_back("scalable_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileUsingForOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileUsingForallOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TileUsingForallOpGenericAdaptorBase::TileUsingForallOpGenericAdaptorBase(TileUsingForallOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

std::pair<unsigned, unsigned> TileUsingForallOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DenseI64ArrayAttr TileUsingForallOpGenericAdaptorBase::getStaticNumThreadsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_num_threads);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileUsingForallOpGenericAdaptorBase::getStaticNumThreads() {
  auto attr = getStaticNumThreadsAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::DenseI64ArrayAttr TileUsingForallOpGenericAdaptorBase::getStaticTileSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_tile_sizes);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileUsingForallOpGenericAdaptorBase::getStaticTileSizes() {
  auto attr = getStaticTileSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TileUsingForallOpGenericAdaptorBase::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
TileUsingForallOpAdaptor::TileUsingForallOpAdaptor(TileUsingForallOp op) : TileUsingForallOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult TileUsingForallOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_static_num_threads = getProperties().static_num_threads; (void)tblgen_static_num_threads;
  auto tblgen_static_tile_sizes = getProperties().static_tile_sizes; (void)tblgen_static_tile_sizes;

  if (tblgen_static_num_threads && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_num_threads))))
    return emitError(loc, "'transform.structured.tile_using_forall' op ""attribute 'static_num_threads' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_static_tile_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_tile_sizes))))
    return emitError(loc, "'transform.structured.tile_using_forall' op ""attribute 'static_tile_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_mapping && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_mapping))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_mapping), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DeviceMappingAttrInterface>(attr))); }))))
    return emitError(loc, "'transform.structured.tile_using_forall' op ""attribute 'mapping' failed to satisfy constraint: Device Mapping array attribute");
  return ::mlir::success();
}

void TileUsingForallOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "tiled_op");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "forall_op");
}

std::pair<unsigned, unsigned> TileUsingForallOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::MutableOperandRange TileUsingForallOp::getNumThreadsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TileUsingForallOp::getTileSizesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TileUsingForallOp::getPackedNumThreadsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TileUsingForallOp::getPackedTileSizesMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::llvm::LogicalResult TileUsingForallOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mapping;
       auto attr = dict.get("mapping");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mapping` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_num_threads;
       auto attr = dict.get("static_num_threads");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_num_threads` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_tile_sizes;
       auto attr = dict.get("static_tile_sizes");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_tile_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
{

      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
;
      if (attr && ::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::Attribute TileUsingForallOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mapping;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mapping",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_num_threads;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_num_threads",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_tile_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_tile_sizes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TileUsingForallOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.mapping.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_num_threads.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_tile_sizes.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TileUsingForallOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mapping")
      return prop.mapping;

    if (name == "static_num_threads")
      return prop.static_num_threads;

    if (name == "static_tile_sizes")
      return prop.static_tile_sizes;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TileUsingForallOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mapping") {
       prop.mapping = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mapping)>>(value);
       return;
    }

    if (name == "static_num_threads") {
       prop.static_num_threads = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_num_threads)>>(value);
       return;
    }

    if (name == "static_tile_sizes") {
       prop.static_tile_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_tile_sizes)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void TileUsingForallOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mapping) attrs.append("mapping", prop.mapping);

    if (prop.static_num_threads) attrs.append("static_num_threads", prop.static_num_threads);

    if (prop.static_tile_sizes) attrs.append("static_tile_sizes", prop.static_tile_sizes);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::llvm::LogicalResult TileUsingForallOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMappingAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(attr, "mapping", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticNumThreadsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "static_num_threads", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticTileSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "static_tile_sizes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult TileUsingForallOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.mapping)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_num_threads)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_tile_sizes)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TileUsingForallOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.mapping);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  writer.writeOptionalAttribute(prop.static_num_threads);

  writer.writeOptionalAttribute(prop.static_tile_sizes);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::llvm::ArrayRef<int64_t> TileUsingForallOp::getStaticNumThreads() {
  auto attr = getStaticNumThreadsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> TileUsingForallOp::getStaticTileSizes() {
  auto attr = getStaticTileSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TileUsingForallOp::getMapping() {
  auto attr = getMappingAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void TileUsingForallOp::setStaticNumThreads(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    auto &odsProp = getProperties().static_num_threads;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void TileUsingForallOp::setStaticTileSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    auto &odsProp = getProperties().static_tile_sizes;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void TileUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_op, ::mlir::Type forall_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (static_num_threads) {
    odsState.getOrAddProperties<Properties>().static_num_threads = static_num_threads;
  }
  if (static_tile_sizes) {
    odsState.getOrAddProperties<Properties>().static_tile_sizes = static_tile_sizes;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  odsState.addTypes(tiled_op);
  odsState.addTypes(forall_op);
}

void TileUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (static_num_threads) {
    odsState.getOrAddProperties<Properties>().static_num_threads = static_num_threads;
  }
  if (static_tile_sizes) {
    odsState.getOrAddProperties<Properties>().static_tile_sizes = static_tile_sizes;
  }
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_op, ::mlir::Type forall_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().static_num_threads = odsBuilder.getDenseI64ArrayAttr(static_num_threads);
  odsState.getOrAddProperties<Properties>().static_tile_sizes = odsBuilder.getDenseI64ArrayAttr(static_tile_sizes);
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  odsState.addTypes(tiled_op);
  odsState.addTypes(forall_op);
}

void TileUsingForallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping) {
  odsState.addOperands(target);
  odsState.addOperands(num_threads);
  odsState.addOperands(tile_sizes);
  if (packed_num_threads)
    odsState.addOperands(packed_num_threads);
  if (packed_tile_sizes)
    odsState.addOperands(packed_tile_sizes);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(num_threads.size()), static_cast<int32_t>(tile_sizes.size()), (packed_num_threads ? 1 : 0), (packed_tile_sizes ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().static_num_threads = odsBuilder.getDenseI64ArrayAttr(static_num_threads);
  odsState.getOrAddProperties<Properties>().static_tile_sizes = odsBuilder.getDenseI64ArrayAttr(static_tile_sizes);
  if (mapping) {
    odsState.getOrAddProperties<Properties>().mapping = mapping;
  }
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TileUsingForallOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<TileUsingForallOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult TileUsingForallOp::verifyInvariantsImpl() {
  auto tblgen_mapping = getProperties().mapping; (void)tblgen_mapping;
  auto tblgen_static_num_threads = getProperties().static_num_threads; (void)tblgen_static_num_threads;
  auto tblgen_static_tile_sizes = getProperties().static_tile_sizes; (void)tblgen_static_tile_sizes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_static_num_threads, "static_num_threads")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_static_tile_sizes, "static_tile_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps18(*this, tblgen_mapping, "mapping")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult TileUsingForallOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TileUsingForallOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> packed_num_threadsOperands;
  ::llvm::SMLoc packed_num_threadsOperandsLoc;
  (void)packed_num_threadsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> num_threadsOperands;
  ::llvm::SMLoc num_threadsOperandsLoc;
  (void)num_threadsOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_num_threadsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> packed_tile_sizesOperands;
  ::llvm::SMLoc packed_tile_sizesOperandsLoc;
  (void)packed_tile_sizesOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> tile_sizesOperands;
  ::llvm::SMLoc tile_sizesOperandsLoc;
  (void)tile_sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_tile_sizesAttr;
  ::mlir::ArrayAttr mappingAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  bool num_threadsClause = false;
  bool tile_sizesClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("num_threads"))) {

  if (num_threadsClause) {
    return parser.emitError(parser.getNameLoc())
          << "`num_threads` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  num_threadsClause = true;
  {
    packed_num_threadsOperandsLoc = parser.getCurrentLocation();
    ::std::optional<::mlir::OpAsmParser::UnresolvedOperand> packed_num_threadsOperand;
    num_threadsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parsePackedOrDynamicIndexList(parser, packed_num_threadsOperand, num_threadsOperands, static_num_threadsAttr);
    if (odsResult) return ::mlir::failure();
    if (packed_num_threadsOperand.has_value())
      packed_num_threadsOperands.push_back(*packed_num_threadsOperand);
    if (static_num_threadsAttr)
      result.getOrAddProperties<TileUsingForallOp::Properties>().static_num_threads = static_num_threadsAttr;
  }
    } else if (succeeded(parser.parseOptionalKeyword("tile_sizes"))) {

  if (tile_sizesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`tile_sizes` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  tile_sizesClause = true;
  {
    packed_tile_sizesOperandsLoc = parser.getCurrentLocation();
    ::std::optional<::mlir::OpAsmParser::UnresolvedOperand> packed_tile_sizesOperand;
    tile_sizesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parsePackedOrDynamicIndexList(parser, packed_tile_sizesOperand, tile_sizesOperands, static_tile_sizesAttr);
    if (odsResult) return ::mlir::failure();
    if (packed_tile_sizesOperand.has_value())
      packed_tile_sizesOperands.push_back(*packed_tile_sizesOperand);
    if (static_tile_sizesAttr)
      result.getOrAddProperties<TileUsingForallOp::Properties>().static_tile_sizes = static_tile_sizesAttr;
  }
    } else  {
    break;
  }
}
  if (::mlir::succeeded(parser.parseOptionalLParen())) {
  if (parser.parseKeyword("mapping"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mappingAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (mappingAttr) result.getOrAddProperties<TileUsingForallOp::Properties>().mapping = mappingAttr;
  if (parser.parseRParen())
    return ::mlir::failure();
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
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(num_threadsOperands.size()), static_cast<int32_t>(tile_sizesOperands.size()), static_cast<int32_t>(packed_num_threadsOperands.size()), static_cast<int32_t>(packed_tile_sizesOperands.size())}), result.getOrAddProperties<TileUsingForallOp::Properties>().operandSegmentSizes.begin());
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(targetOperands, num_threadsOperands, tile_sizesOperands, packed_num_threadsOperands, packed_tile_sizesOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TileUsingForallOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (false || getPackedNumThreads() || getNumThreads().size() || (getStaticNumThreadsAttr() && getStaticNumThreadsAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({}))) {
  _odsPrinter << ' ' << "num_threads";
  _odsPrinter << ' ';
  printPackedOrDynamicIndexList(_odsPrinter, *this, getPackedNumThreads(), getNumThreads(), getStaticNumThreadsAttr());
  }
  if (false || getPackedTileSizes() || getTileSizes().size() || (getStaticTileSizesAttr() && getStaticTileSizesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({}))) {
  _odsPrinter << ' ' << "tile_sizes";
  _odsPrinter << ' ';
  printPackedOrDynamicIndexList(_odsPrinter, *this, getPackedTileSizes(), getTileSizes(), getStaticTileSizesAttr());
  }
  if (getMappingAttr()) {
    _odsPrinter << "(";
    _odsPrinter << "mapping";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getMappingAttr());
    _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("static_num_threads");
  elidedAttrs.push_back("static_tile_sizes");
  elidedAttrs.push_back("mapping");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticNumThreadsAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_num_threads");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticTileSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_tile_sizes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TileUsingForallOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TransposeConv2DOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
TransposeConv2DOpAdaptor::TransposeConv2DOpAdaptor(TransposeConv2DOp op) : TransposeConv2DOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult TransposeConv2DOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void TransposeConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target) {
  odsState.addOperands(target);
  odsState.addTypes(transformed);
}

void TransposeConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeConv2DOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult TransposeConv2DOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult TransposeConv2DOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TransposeConv2DOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
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

void TransposeConv2DOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TransposeConv2DOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TransposeMatmulOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TransposeMatmulOpGenericAdaptorBase::TransposeMatmulOpGenericAdaptorBase(TransposeMatmulOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

mlir::transform::TransposeMatmulInputAttr TransposeMatmulOpGenericAdaptorBase::getInputToTransposeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<mlir::transform::TransposeMatmulInputAttr>(getProperties().inputToTranspose);
  return attr;
}

mlir::transform::TransposeMatmulInput TransposeMatmulOpGenericAdaptorBase::getInputToTranspose() {
  auto attr = getInputToTransposeAttr();
  return attr.getValue();
}

} // namespace detail
TransposeMatmulOpAdaptor::TransposeMatmulOpAdaptor(TransposeMatmulOp op) : TransposeMatmulOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult TransposeMatmulOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_inputToTranspose = getProperties().inputToTranspose; (void)tblgen_inputToTranspose;

  if (tblgen_inputToTranspose && !((::llvm::isa<mlir::transform::TransposeMatmulInputAttr>(tblgen_inputToTranspose))))
    return emitError(loc, "'transform.structured.transpose_matmul' op ""attribute 'inputToTranspose' failed to satisfy constraint: Input to transpose when converting matmul ops to transposed variants");
  return ::mlir::success();
}

::llvm::LogicalResult TransposeMatmulOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.inputToTranspose;
       auto attr = dict.get("inputToTranspose");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `inputToTranspose` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TransposeMatmulOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.inputToTranspose;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("inputToTranspose",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TransposeMatmulOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.inputToTranspose.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TransposeMatmulOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "inputToTranspose")
      return prop.inputToTranspose;
  return std::nullopt;
}

void TransposeMatmulOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "inputToTranspose") {
       prop.inputToTranspose = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.inputToTranspose)>>(value);
       return;
    }
}

void TransposeMatmulOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.inputToTranspose) attrs.append("inputToTranspose", prop.inputToTranspose);
}

::llvm::LogicalResult TransposeMatmulOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInputToTransposeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps20(attr, "inputToTranspose", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult TransposeMatmulOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.inputToTranspose)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TransposeMatmulOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.inputToTranspose);
}

mlir::transform::TransposeMatmulInput TransposeMatmulOp::getInputToTranspose() {
  auto attr = getInputToTransposeAttr();
  return attr.getValue();
}

void TransposeMatmulOp::setInputToTranspose(mlir::transform::TransposeMatmulInput attrValue) {
  getProperties().inputToTranspose = mlir::transform::TransposeMatmulInputAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void TransposeMatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, mlir::transform::TransposeMatmulInputAttr inputToTranspose) {
  odsState.addOperands(target);
  if (inputToTranspose) {
    odsState.getOrAddProperties<Properties>().inputToTranspose = inputToTranspose;
  }
  odsState.addTypes(transformed);
}

void TransposeMatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, mlir::transform::TransposeMatmulInputAttr inputToTranspose) {
  odsState.addOperands(target);
  if (inputToTranspose) {
    odsState.getOrAddProperties<Properties>().inputToTranspose = inputToTranspose;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeMatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, mlir::transform::TransposeMatmulInput inputToTranspose) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().inputToTranspose = mlir::transform::TransposeMatmulInputAttr::get(odsBuilder.getContext(), inputToTranspose);
  odsState.addTypes(transformed);
}

void TransposeMatmulOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, mlir::transform::TransposeMatmulInput inputToTranspose) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().inputToTranspose = mlir::transform::TransposeMatmulInputAttr::get(odsBuilder.getContext(), inputToTranspose);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeMatmulOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<TransposeMatmulOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void TransposeMatmulOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.inputToTranspose)
    properties.inputToTranspose = mlir::transform::TransposeMatmulInputAttr::get(odsBuilder.getContext(), TransposeMatmulInput::lhs);
}

::llvm::LogicalResult TransposeMatmulOp::verifyInvariantsImpl() {
  auto tblgen_inputToTranspose = getProperties().inputToTranspose; (void)tblgen_inputToTranspose;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps20(*this, tblgen_inputToTranspose, "inputToTranspose")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult TransposeMatmulOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TransposeMatmulOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  mlir::transform::TransposeMatmulInputAttr inputToTransposeAttr;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalLess())) {

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"lhs","rhs"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "inputToTranspose", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'inputToTranspose' [lhs, rhs]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = mlir::transform::symbolizeTransposeMatmulInput(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "inputToTranspose attribute specification: \"" << attrStr << '"';;

      inputToTransposeAttr = mlir::transform::TransposeMatmulInputAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<TransposeMatmulOp::Properties>().inputToTranspose = inputToTransposeAttr;
    }
  }
  if (parser.parseGreater())
    return ::mlir::failure();
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

void TransposeMatmulOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (getInputToTransposeAttr() && getInputToTransposeAttr() != mlir::transform::TransposeMatmulInputAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), TransposeMatmulInput::lhs)) {
    _odsPrinter << "<";

    {
      auto caseValue = getInputToTranspose();
      auto caseValueStr = stringifyTransposeMatmulInput(caseValue);
      _odsPrinter << caseValueStr;
    }
    _odsPrinter << ">";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("inputToTranspose");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInputToTransposeAttr();
     if(attr && (attr == mlir::transform::TransposeMatmulInputAttr::get(odsBuilder.getContext(), TransposeMatmulInput::lhs)))
       elidedAttrs.push_back("inputToTranspose");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TransposeMatmulOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::VectorizeChildrenAndApplyPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase::VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase(VectorizeChildrenAndApplyPatternsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::UnitAttr VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase::getVectorizePaddingAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_padding);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase::getVectorizePadding() {
  auto attr = getVectorizePaddingAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase::getVectorizeNdExtractAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_nd_extract);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase::getVectorizeNdExtract() {
  auto attr = getVectorizeNdExtractAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase::getFlatten_1dDepthwiseConvAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().flatten_1d_depthwise_conv);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase::getFlatten_1dDepthwiseConv() {
  auto attr = getFlatten_1dDepthwiseConvAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase::getDisableMultiReductionToContractPatternsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().disable_multi_reduction_to_contract_patterns);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase::getDisableMultiReductionToContractPatterns() {
  auto attr = getDisableMultiReductionToContractPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase::getDisableTransferPermutationMapLoweringPatternsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().disable_transfer_permutation_map_lowering_patterns);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase::getDisableTransferPermutationMapLoweringPatterns() {
  auto attr = getDisableTransferPermutationMapLoweringPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
VectorizeChildrenAndApplyPatternsOpAdaptor::VectorizeChildrenAndApplyPatternsOpAdaptor(VectorizeChildrenAndApplyPatternsOp op) : VectorizeChildrenAndApplyPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult VectorizeChildrenAndApplyPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_disable_multi_reduction_to_contract_patterns = getProperties().disable_multi_reduction_to_contract_patterns; (void)tblgen_disable_multi_reduction_to_contract_patterns;
  auto tblgen_disable_transfer_permutation_map_lowering_patterns = getProperties().disable_transfer_permutation_map_lowering_patterns; (void)tblgen_disable_transfer_permutation_map_lowering_patterns;
  auto tblgen_flatten_1d_depthwise_conv = getProperties().flatten_1d_depthwise_conv; (void)tblgen_flatten_1d_depthwise_conv;
  auto tblgen_vectorize_nd_extract = getProperties().vectorize_nd_extract; (void)tblgen_vectorize_nd_extract;
  auto tblgen_vectorize_padding = getProperties().vectorize_padding; (void)tblgen_vectorize_padding;

  if (tblgen_vectorize_padding && !((::llvm::isa<::mlir::UnitAttr>(tblgen_vectorize_padding))))
    return emitError(loc, "'transform.structured.vectorize_children_and_apply_patterns' op ""attribute 'vectorize_padding' failed to satisfy constraint: unit attribute");

  if (tblgen_vectorize_nd_extract && !((::llvm::isa<::mlir::UnitAttr>(tblgen_vectorize_nd_extract))))
    return emitError(loc, "'transform.structured.vectorize_children_and_apply_patterns' op ""attribute 'vectorize_nd_extract' failed to satisfy constraint: unit attribute");

  if (tblgen_flatten_1d_depthwise_conv && !((::llvm::isa<::mlir::UnitAttr>(tblgen_flatten_1d_depthwise_conv))))
    return emitError(loc, "'transform.structured.vectorize_children_and_apply_patterns' op ""attribute 'flatten_1d_depthwise_conv' failed to satisfy constraint: unit attribute");

  if (tblgen_disable_multi_reduction_to_contract_patterns && !((::llvm::isa<::mlir::UnitAttr>(tblgen_disable_multi_reduction_to_contract_patterns))))
    return emitError(loc, "'transform.structured.vectorize_children_and_apply_patterns' op ""attribute 'disable_multi_reduction_to_contract_patterns' failed to satisfy constraint: unit attribute");

  if (tblgen_disable_transfer_permutation_map_lowering_patterns && !((::llvm::isa<::mlir::UnitAttr>(tblgen_disable_transfer_permutation_map_lowering_patterns))))
    return emitError(loc, "'transform.structured.vectorize_children_and_apply_patterns' op ""attribute 'disable_transfer_permutation_map_lowering_patterns' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

::llvm::LogicalResult VectorizeChildrenAndApplyPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.disable_multi_reduction_to_contract_patterns;
       auto attr = dict.get("disable_multi_reduction_to_contract_patterns");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `disable_multi_reduction_to_contract_patterns` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.disable_transfer_permutation_map_lowering_patterns;
       auto attr = dict.get("disable_transfer_permutation_map_lowering_patterns");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `disable_transfer_permutation_map_lowering_patterns` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.flatten_1d_depthwise_conv;
       auto attr = dict.get("flatten_1d_depthwise_conv");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `flatten_1d_depthwise_conv` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.vectorize_nd_extract;
       auto attr = dict.get("vectorize_nd_extract");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `vectorize_nd_extract` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.vectorize_padding;
       auto attr = dict.get("vectorize_padding");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `vectorize_padding` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute VectorizeChildrenAndApplyPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.disable_multi_reduction_to_contract_patterns;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("disable_multi_reduction_to_contract_patterns",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.disable_transfer_permutation_map_lowering_patterns;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("disable_transfer_permutation_map_lowering_patterns",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.flatten_1d_depthwise_conv;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("flatten_1d_depthwise_conv",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.vectorize_nd_extract;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("vectorize_nd_extract",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.vectorize_padding;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("vectorize_padding",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code VectorizeChildrenAndApplyPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.disable_multi_reduction_to_contract_patterns.getAsOpaquePointer()), 
    llvm::hash_value(prop.disable_transfer_permutation_map_lowering_patterns.getAsOpaquePointer()), 
    llvm::hash_value(prop.flatten_1d_depthwise_conv.getAsOpaquePointer()), 
    llvm::hash_value(prop.vectorize_nd_extract.getAsOpaquePointer()), 
    llvm::hash_value(prop.vectorize_padding.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> VectorizeChildrenAndApplyPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "disable_multi_reduction_to_contract_patterns")
      return prop.disable_multi_reduction_to_contract_patterns;

    if (name == "disable_transfer_permutation_map_lowering_patterns")
      return prop.disable_transfer_permutation_map_lowering_patterns;

    if (name == "flatten_1d_depthwise_conv")
      return prop.flatten_1d_depthwise_conv;

    if (name == "vectorize_nd_extract")
      return prop.vectorize_nd_extract;

    if (name == "vectorize_padding")
      return prop.vectorize_padding;
  return std::nullopt;
}

void VectorizeChildrenAndApplyPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "disable_multi_reduction_to_contract_patterns") {
       prop.disable_multi_reduction_to_contract_patterns = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.disable_multi_reduction_to_contract_patterns)>>(value);
       return;
    }

    if (name == "disable_transfer_permutation_map_lowering_patterns") {
       prop.disable_transfer_permutation_map_lowering_patterns = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.disable_transfer_permutation_map_lowering_patterns)>>(value);
       return;
    }

    if (name == "flatten_1d_depthwise_conv") {
       prop.flatten_1d_depthwise_conv = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.flatten_1d_depthwise_conv)>>(value);
       return;
    }

    if (name == "vectorize_nd_extract") {
       prop.vectorize_nd_extract = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.vectorize_nd_extract)>>(value);
       return;
    }

    if (name == "vectorize_padding") {
       prop.vectorize_padding = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.vectorize_padding)>>(value);
       return;
    }
}

void VectorizeChildrenAndApplyPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.disable_multi_reduction_to_contract_patterns) attrs.append("disable_multi_reduction_to_contract_patterns", prop.disable_multi_reduction_to_contract_patterns);

    if (prop.disable_transfer_permutation_map_lowering_patterns) attrs.append("disable_transfer_permutation_map_lowering_patterns", prop.disable_transfer_permutation_map_lowering_patterns);

    if (prop.flatten_1d_depthwise_conv) attrs.append("flatten_1d_depthwise_conv", prop.flatten_1d_depthwise_conv);

    if (prop.vectorize_nd_extract) attrs.append("vectorize_nd_extract", prop.vectorize_nd_extract);

    if (prop.vectorize_padding) attrs.append("vectorize_padding", prop.vectorize_padding);
}

::llvm::LogicalResult VectorizeChildrenAndApplyPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDisableMultiReductionToContractPatternsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "disable_multi_reduction_to_contract_patterns", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getDisableTransferPermutationMapLoweringPatternsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "disable_transfer_permutation_map_lowering_patterns", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getFlatten_1dDepthwiseConvAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "flatten_1d_depthwise_conv", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getVectorizeNdExtractAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "vectorize_nd_extract", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getVectorizePaddingAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "vectorize_padding", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult VectorizeChildrenAndApplyPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.disable_multi_reduction_to_contract_patterns)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.disable_transfer_permutation_map_lowering_patterns)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.flatten_1d_depthwise_conv)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.vectorize_nd_extract)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.vectorize_padding)))
    return ::mlir::failure();
  return ::mlir::success();
}

void VectorizeChildrenAndApplyPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.disable_multi_reduction_to_contract_patterns);

  writer.writeOptionalAttribute(prop.disable_transfer_permutation_map_lowering_patterns);

  writer.writeOptionalAttribute(prop.flatten_1d_depthwise_conv);

  writer.writeOptionalAttribute(prop.vectorize_nd_extract);

  writer.writeOptionalAttribute(prop.vectorize_padding);
}

bool VectorizeChildrenAndApplyPatternsOp::getVectorizePadding() {
  auto attr = getVectorizePaddingAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool VectorizeChildrenAndApplyPatternsOp::getVectorizeNdExtract() {
  auto attr = getVectorizeNdExtractAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool VectorizeChildrenAndApplyPatternsOp::getFlatten_1dDepthwiseConv() {
  auto attr = getFlatten_1dDepthwiseConvAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool VectorizeChildrenAndApplyPatternsOp::getDisableMultiReductionToContractPatterns() {
  auto attr = getDisableMultiReductionToContractPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool VectorizeChildrenAndApplyPatternsOp::getDisableTransferPermutationMapLoweringPatterns() {
  auto attr = getDisableTransferPermutationMapLoweringPatternsAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void VectorizeChildrenAndApplyPatternsOp::setVectorizePadding(bool attrValue) {
    auto &odsProp = getProperties().vectorize_padding;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void VectorizeChildrenAndApplyPatternsOp::setVectorizeNdExtract(bool attrValue) {
    auto &odsProp = getProperties().vectorize_nd_extract;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void VectorizeChildrenAndApplyPatternsOp::setFlatten_1dDepthwiseConv(bool attrValue) {
    auto &odsProp = getProperties().flatten_1d_depthwise_conv;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void VectorizeChildrenAndApplyPatternsOp::setDisableMultiReductionToContractPatterns(bool attrValue) {
    auto &odsProp = getProperties().disable_multi_reduction_to_contract_patterns;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void VectorizeChildrenAndApplyPatternsOp::setDisableTransferPermutationMapLoweringPatterns(bool attrValue) {
    auto &odsProp = getProperties().disable_transfer_permutation_map_lowering_patterns;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void VectorizeChildrenAndApplyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::UnitAttr flatten_1d_depthwise_conv, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.getOrAddProperties<Properties>().vectorize_padding = vectorize_padding;
  }
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = vectorize_nd_extract;
  }
  if (flatten_1d_depthwise_conv) {
    odsState.getOrAddProperties<Properties>().flatten_1d_depthwise_conv = flatten_1d_depthwise_conv;
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.getOrAddProperties<Properties>().disable_multi_reduction_to_contract_patterns = disable_multi_reduction_to_contract_patterns;
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.getOrAddProperties<Properties>().disable_transfer_permutation_map_lowering_patterns = disable_transfer_permutation_map_lowering_patterns;
  }
  odsState.addTypes(transformed);
}

void VectorizeChildrenAndApplyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::UnitAttr flatten_1d_depthwise_conv, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.getOrAddProperties<Properties>().vectorize_padding = vectorize_padding;
  }
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = vectorize_nd_extract;
  }
  if (flatten_1d_depthwise_conv) {
    odsState.getOrAddProperties<Properties>().flatten_1d_depthwise_conv = flatten_1d_depthwise_conv;
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.getOrAddProperties<Properties>().disable_multi_reduction_to_contract_patterns = disable_multi_reduction_to_contract_patterns;
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.getOrAddProperties<Properties>().disable_transfer_permutation_map_lowering_patterns = disable_transfer_permutation_map_lowering_patterns;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VectorizeChildrenAndApplyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/bool vectorize_padding, /*optional*/bool vectorize_nd_extract, /*optional*/bool flatten_1d_depthwise_conv, /*optional*/bool disable_multi_reduction_to_contract_patterns, /*optional*/bool disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.getOrAddProperties<Properties>().vectorize_padding = ((vectorize_padding) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = ((vectorize_nd_extract) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (flatten_1d_depthwise_conv) {
    odsState.getOrAddProperties<Properties>().flatten_1d_depthwise_conv = ((flatten_1d_depthwise_conv) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.getOrAddProperties<Properties>().disable_multi_reduction_to_contract_patterns = ((disable_multi_reduction_to_contract_patterns) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.getOrAddProperties<Properties>().disable_transfer_permutation_map_lowering_patterns = ((disable_transfer_permutation_map_lowering_patterns) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(transformed);
}

void VectorizeChildrenAndApplyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/bool vectorize_padding, /*optional*/bool vectorize_nd_extract, /*optional*/bool flatten_1d_depthwise_conv, /*optional*/bool disable_multi_reduction_to_contract_patterns, /*optional*/bool disable_transfer_permutation_map_lowering_patterns) {
  odsState.addOperands(target);
  if (vectorize_padding) {
    odsState.getOrAddProperties<Properties>().vectorize_padding = ((vectorize_padding) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = ((vectorize_nd_extract) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (flatten_1d_depthwise_conv) {
    odsState.getOrAddProperties<Properties>().flatten_1d_depthwise_conv = ((flatten_1d_depthwise_conv) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (disable_multi_reduction_to_contract_patterns) {
    odsState.getOrAddProperties<Properties>().disable_multi_reduction_to_contract_patterns = ((disable_multi_reduction_to_contract_patterns) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (disable_transfer_permutation_map_lowering_patterns) {
    odsState.getOrAddProperties<Properties>().disable_transfer_permutation_map_lowering_patterns = ((disable_transfer_permutation_map_lowering_patterns) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VectorizeChildrenAndApplyPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<VectorizeChildrenAndApplyPatternsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult VectorizeChildrenAndApplyPatternsOp::verifyInvariantsImpl() {
  auto tblgen_disable_multi_reduction_to_contract_patterns = getProperties().disable_multi_reduction_to_contract_patterns; (void)tblgen_disable_multi_reduction_to_contract_patterns;
  auto tblgen_disable_transfer_permutation_map_lowering_patterns = getProperties().disable_transfer_permutation_map_lowering_patterns; (void)tblgen_disable_transfer_permutation_map_lowering_patterns;
  auto tblgen_flatten_1d_depthwise_conv = getProperties().flatten_1d_depthwise_conv; (void)tblgen_flatten_1d_depthwise_conv;
  auto tblgen_vectorize_nd_extract = getProperties().vectorize_nd_extract; (void)tblgen_vectorize_nd_extract;
  auto tblgen_vectorize_padding = getProperties().vectorize_padding; (void)tblgen_vectorize_padding;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_vectorize_padding, "vectorize_padding")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_vectorize_nd_extract, "vectorize_nd_extract")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_flatten_1d_depthwise_conv, "flatten_1d_depthwise_conv")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_disable_multi_reduction_to_contract_patterns, "disable_multi_reduction_to_contract_patterns")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_disable_transfer_permutation_map_lowering_patterns, "disable_transfer_permutation_map_lowering_patterns")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult VectorizeChildrenAndApplyPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult VectorizeChildrenAndApplyPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void VectorizeChildrenAndApplyPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getVectorizePaddingAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("vectorize_padding");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getVectorizeNdExtractAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("vectorize_nd_extract");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFlatten_1dDepthwiseConvAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("flatten_1d_depthwise_conv");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDisableMultiReductionToContractPatternsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("disable_multi_reduction_to_contract_patterns");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDisableTransferPermutationMapLoweringPatternsAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("disable_transfer_permutation_map_lowering_patterns");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::VectorizeChildrenAndApplyPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::VectorizeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
VectorizeOpGenericAdaptorBase::VectorizeOpGenericAdaptorBase(VectorizeOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

std::pair<unsigned, unsigned> VectorizeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DenseI64ArrayAttr VectorizeOpGenericAdaptorBase::getStaticVectorSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_vector_sizes);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> VectorizeOpGenericAdaptorBase::getStaticVectorSizes() {
  auto attr = getStaticVectorSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::std::optional<bool> VectorizeOpGenericAdaptorBase::getVectorizeNdExtract() {
  auto attr = getVectorizeNdExtractAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

::mlir::DenseBoolArrayAttr VectorizeOpGenericAdaptorBase::getScalableSizesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(getProperties().scalable_sizes);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseBoolArrayAttr({});
  return attr;
}

::llvm::ArrayRef<bool> VectorizeOpGenericAdaptorBase::getScalableSizes() {
  auto attr = getScalableSizesAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseBoolArrayAttr({});
  return attr;
}

} // namespace detail
VectorizeOpAdaptor::VectorizeOpAdaptor(VectorizeOp op) : VectorizeOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult VectorizeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_scalable_sizes = getProperties().scalable_sizes; (void)tblgen_scalable_sizes;
  auto tblgen_static_vector_sizes = getProperties().static_vector_sizes; (void)tblgen_static_vector_sizes;
  auto tblgen_vectorize_nd_extract = getProperties().vectorize_nd_extract; (void)tblgen_vectorize_nd_extract;

  if (tblgen_static_vector_sizes && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_static_vector_sizes))))
    return emitError(loc, "'transform.structured.vectorize' op ""attribute 'static_vector_sizes' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_vectorize_nd_extract && !((::llvm::isa<::mlir::UnitAttr>(tblgen_vectorize_nd_extract))))
    return emitError(loc, "'transform.structured.vectorize' op ""attribute 'vectorize_nd_extract' failed to satisfy constraint: unit attribute");

  if (tblgen_scalable_sizes && !((::llvm::isa<::mlir::DenseBoolArrayAttr>(tblgen_scalable_sizes))))
    return emitError(loc, "'transform.structured.vectorize' op ""attribute 'scalable_sizes' failed to satisfy constraint: i1 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> VectorizeOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::MutableOperandRange VectorizeOp::getVectorSizesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::llvm::LogicalResult VectorizeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.scalable_sizes;
       auto attr = dict.get("scalable_sizes");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `scalable_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.static_vector_sizes;
       auto attr = dict.get("static_vector_sizes");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `static_vector_sizes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.vectorize_nd_extract;
       auto attr = dict.get("vectorize_nd_extract");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `vectorize_nd_extract` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute VectorizeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.scalable_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("scalable_sizes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.static_vector_sizes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("static_vector_sizes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.vectorize_nd_extract;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("vectorize_nd_extract",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code VectorizeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.scalable_sizes.getAsOpaquePointer()), 
    llvm::hash_value(prop.static_vector_sizes.getAsOpaquePointer()), 
    llvm::hash_value(prop.vectorize_nd_extract.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> VectorizeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "scalable_sizes")
      return prop.scalable_sizes;

    if (name == "static_vector_sizes")
      return prop.static_vector_sizes;

    if (name == "vectorize_nd_extract")
      return prop.vectorize_nd_extract;
  return std::nullopt;
}

void VectorizeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "scalable_sizes") {
       prop.scalable_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.scalable_sizes)>>(value);
       return;
    }

    if (name == "static_vector_sizes") {
       prop.static_vector_sizes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.static_vector_sizes)>>(value);
       return;
    }

    if (name == "vectorize_nd_extract") {
       prop.vectorize_nd_extract = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.vectorize_nd_extract)>>(value);
       return;
    }
}

void VectorizeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.scalable_sizes) attrs.append("scalable_sizes", prop.scalable_sizes);

    if (prop.static_vector_sizes) attrs.append("static_vector_sizes", prop.static_vector_sizes);

    if (prop.vectorize_nd_extract) attrs.append("vectorize_nd_extract", prop.vectorize_nd_extract);
}

::llvm::LogicalResult VectorizeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getScalableSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps19(attr, "scalable_sizes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getStaticVectorSizesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(attr, "static_vector_sizes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getVectorizeNdExtractAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(attr, "vectorize_nd_extract", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult VectorizeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.scalable_sizes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.static_vector_sizes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.vectorize_nd_extract)))
    return ::mlir::failure();
  return ::mlir::success();
}

void VectorizeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.scalable_sizes);

  writer.writeOptionalAttribute(prop.static_vector_sizes);

  writer.writeOptionalAttribute(prop.vectorize_nd_extract);
}

::llvm::ArrayRef<int64_t> VectorizeOp::getStaticVectorSizes() {
  auto attr = getStaticVectorSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::std::optional<bool> VectorizeOp::getVectorizeNdExtract() {
  auto attr = getVectorizeNdExtractAttr();
  return attr ? ::std::optional<bool>(attr != nullptr) : (::std::nullopt);
}

::llvm::ArrayRef<bool> VectorizeOp::getScalableSizes() {
  auto attr = getScalableSizesAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseBoolArrayAttr({});
  return attr;
}

void VectorizeOp::setStaticVectorSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    auto &odsProp = getProperties().static_vector_sizes;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void VectorizeOp::setVectorizeNdExtract(bool attrValue) {
    auto &odsProp = getProperties().vectorize_nd_extract;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void VectorizeOp::setScalableSizes(::std::optional<::llvm::ArrayRef<bool>> attrValue) {
    auto &odsProp = getProperties().scalable_sizes;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseBoolArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  if (static_vector_sizes) {
    odsState.getOrAddProperties<Properties>().static_vector_sizes = static_vector_sizes;
  }
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = vectorize_nd_extract;
  }
  if (scalable_sizes) {
    odsState.getOrAddProperties<Properties>().scalable_sizes = scalable_sizes;
  }
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  if (static_vector_sizes) {
    odsState.getOrAddProperties<Properties>().static_vector_sizes = static_vector_sizes;
  }
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = vectorize_nd_extract;
  }
  if (scalable_sizes) {
    odsState.getOrAddProperties<Properties>().scalable_sizes = scalable_sizes;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::llvm::ArrayRef<bool> scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  odsState.getOrAddProperties<Properties>().static_vector_sizes = odsBuilder.getDenseI64ArrayAttr(static_vector_sizes);
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = vectorize_nd_extract;
  }
  odsState.getOrAddProperties<Properties>().scalable_sizes = odsBuilder.getDenseBoolArrayAttr(scalable_sizes);
}

void VectorizeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::llvm::ArrayRef<bool> scalable_sizes) {
  odsState.addOperands(target);
  odsState.addOperands(vector_sizes);
  odsState.getOrAddProperties<Properties>().static_vector_sizes = odsBuilder.getDenseI64ArrayAttr(static_vector_sizes);
  if (vectorize_nd_extract) {
    odsState.getOrAddProperties<Properties>().vectorize_nd_extract = vectorize_nd_extract;
  }
  odsState.getOrAddProperties<Properties>().scalable_sizes = odsBuilder.getDenseBoolArrayAttr(scalable_sizes);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VectorizeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<VectorizeOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult VectorizeOp::verifyInvariantsImpl() {
  auto tblgen_scalable_sizes = getProperties().scalable_sizes; (void)tblgen_scalable_sizes;
  auto tblgen_static_vector_sizes = getProperties().static_vector_sizes; (void)tblgen_static_vector_sizes;
  auto tblgen_vectorize_nd_extract = getProperties().vectorize_nd_extract; (void)tblgen_vectorize_nd_extract;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps5(*this, tblgen_static_vector_sizes, "static_vector_sizes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps2(*this, tblgen_vectorize_nd_extract, "vectorize_nd_extract")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps19(*this, tblgen_scalable_sizes, "scalable_sizes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps13(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult VectorizeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult VectorizeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> vector_sizesOperands;
  ::llvm::SMLoc vector_sizesOperandsLoc;
  (void)vector_sizesOperandsLoc;
  ::mlir::DenseI64ArrayAttr static_vector_sizesAttr;
  ::mlir::DenseBoolArrayAttr scalable_sizesAttr;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);
  ::llvm::SmallVector<::mlir::Type, 1> vector_sizesTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  bool vector_sizesClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("vector_sizes"))) {

  if (vector_sizesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`vector_sizes` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  vector_sizesClause = true;
  {
    vector_sizesOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, vector_sizesOperands, static_vector_sizesAttr, scalable_sizesAttr);
    if (odsResult) return ::mlir::failure();
    if (static_vector_sizesAttr)
      result.getOrAddProperties<VectorizeOp::Properties>().static_vector_sizes = static_vector_sizesAttr;
    if (scalable_sizesAttr)
      result.getOrAddProperties<VectorizeOp::Properties>().scalable_sizes = scalable_sizesAttr;
  }
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
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformHandleTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    targetRawType = type;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  if (parser.parseTypeList(vector_sizesTypes))
    return ::mlir::failure();
  }
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(vector_sizesOperands, vector_sizesTypes, vector_sizesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void VectorizeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (false || getVectorSizes().size() || (getStaticVectorSizesAttr() && getStaticVectorSizesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI64ArrayAttr({})) || (getScalableSizesAttr() && getScalableSizesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseBoolArrayAttr({}))) {
  _odsPrinter << ' ' << "vector_sizes";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getVectorSizes(), getStaticVectorSizesAttr(), getScalableSizesAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("static_vector_sizes");
  elidedAttrs.push_back("scalable_sizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStaticVectorSizesAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("static_vector_sizes");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getScalableSizesAttr();
     if(attr && (attr == odsBuilder.getDenseBoolArrayAttr({})))
       elidedAttrs.push_back("scalable_sizes");
  }
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
  if (!getVectorSizes().empty()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    _odsPrinter << getVectorSizes().getTypes();
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::VectorizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::WinogradConv2DOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WinogradConv2DOpGenericAdaptorBase::WinogradConv2DOpGenericAdaptorBase(WinogradConv2DOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t WinogradConv2DOpGenericAdaptorBase::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

uint64_t WinogradConv2DOpGenericAdaptorBase::getR() {
  auto attr = getRAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
WinogradConv2DOpAdaptor::WinogradConv2DOpAdaptor(WinogradConv2DOp op) : WinogradConv2DOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult WinogradConv2DOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitError(loc, "'transform.structured.winograd_conv2d' op ""requires attribute 'm'");
  auto tblgen_r = getProperties().r; (void)tblgen_r;
  if (!tblgen_r) return emitError(loc, "'transform.structured.winograd_conv2d' op ""requires attribute 'r'");

  if (tblgen_m && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_m))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_m).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.winograd_conv2d' op ""attribute 'm' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_r && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_r))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_r).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.structured.winograd_conv2d' op ""attribute 'r' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

::llvm::LogicalResult WinogradConv2DOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.m;
       auto attr = dict.get("m");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `m` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.r;
       auto attr = dict.get("r");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `r` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute WinogradConv2DOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.m;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("m",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.r;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("r",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WinogradConv2DOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.m.getAsOpaquePointer()), 
    llvm::hash_value(prop.r.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> WinogradConv2DOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "m")
      return prop.m;

    if (name == "r")
      return prop.r;
  return std::nullopt;
}

void WinogradConv2DOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "m") {
       prop.m = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.m)>>(value);
       return;
    }

    if (name == "r") {
       prop.r = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.r)>>(value);
       return;
    }
}

void WinogradConv2DOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.m) attrs.append("m", prop.m);

    if (prop.r) attrs.append("r", prop.r);
}

::llvm::LogicalResult WinogradConv2DOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "m", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(attr, "r", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult WinogradConv2DOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.m)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.r)))
    return ::mlir::failure();
  return ::mlir::success();
}

void WinogradConv2DOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.m);
  writer.writeAttribute(prop.r);
}

uint64_t WinogradConv2DOp::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

uint64_t WinogradConv2DOp::getR() {
  auto attr = getRAttr();
  return attr.getValue().getZExtValue();
}

void WinogradConv2DOp::setM(uint64_t attrValue) {
  getProperties().m = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void WinogradConv2DOp::setR(uint64_t attrValue) {
  getProperties().r = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void WinogradConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr m, ::mlir::IntegerAttr r) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().r = r;
  odsState.addTypes(transformed);
}

void WinogradConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr m, ::mlir::IntegerAttr r) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().r = r;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WinogradConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t m, uint64_t r) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), m);
  odsState.getOrAddProperties<Properties>().r = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), r);
  odsState.addTypes(transformed);
}

void WinogradConv2DOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t m, uint64_t r) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), m);
  odsState.getOrAddProperties<Properties>().r = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), r);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WinogradConv2DOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<WinogradConv2DOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult WinogradConv2DOp::verifyInvariantsImpl() {
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitOpError("requires attribute 'm'");
  auto tblgen_r = getProperties().r; (void)tblgen_r;
  if (!tblgen_r) return emitOpError("requires attribute 'r'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_m, "m")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgTransformOps6(*this, tblgen_r, "r")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult WinogradConv2DOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult WinogradConv2DOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
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

void WinogradConv2DOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::WinogradConv2DOp)


#endif  // GET_OP_CLASSES

