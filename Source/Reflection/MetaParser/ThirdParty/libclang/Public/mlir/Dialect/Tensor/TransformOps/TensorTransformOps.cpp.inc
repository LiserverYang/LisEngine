/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TensorTransformOps.td                                                *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyDecomposeTensorConcatPatternsOp,
::mlir::transform::ApplyDropRedundantInsertSliceRankExpansionPatternsOp,
::mlir::transform::ApplyFoldIntoPackAndUnpackPatternsOp,
::mlir::transform::ApplyFoldTensorEmptyPatternsOp,
::mlir::transform::ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp,
::mlir::transform::ApplyFoldTensorSubsetOpsPatternsOp,
::mlir::transform::ApplyMergeConsecutiveInsertExtractSlicePatternsOp,
::mlir::transform::ApplyReassociativeReshapeFoldingPatternsOp,
::mlir::transform::ApplyRewriteTensorOpsAsConstantPatternsOp,
::mlir::transform::MakeLoopIndependentOp,
::mlir::transform::TypeConversionCastShapeDynamicDimsOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_TensorTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_TensorTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_TensorTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TensorTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_TensorTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_TensorTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TensorTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_TensorTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_TensorTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_TensorTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyDecomposeTensorConcatPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyDecomposeTensorConcatPatternsOpAdaptor::ApplyDecomposeTensorConcatPatternsOpAdaptor(ApplyDecomposeTensorConcatPatternsOp op) : ApplyDecomposeTensorConcatPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyDecomposeTensorConcatPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyDecomposeTensorConcatPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyDecomposeTensorConcatPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyDecomposeTensorConcatPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyDecomposeTensorConcatPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyDecomposeTensorConcatPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyDecomposeTensorConcatPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyDecomposeTensorConcatPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyDecomposeTensorConcatPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyDropRedundantInsertSliceRankExpansionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyDropRedundantInsertSliceRankExpansionPatternsOpAdaptor::ApplyDropRedundantInsertSliceRankExpansionPatternsOpAdaptor(ApplyDropRedundantInsertSliceRankExpansionPatternsOp op) : ApplyDropRedundantInsertSliceRankExpansionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyDropRedundantInsertSliceRankExpansionPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyDropRedundantInsertSliceRankExpansionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyDropRedundantInsertSliceRankExpansionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyDropRedundantInsertSliceRankExpansionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyDropRedundantInsertSliceRankExpansionPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyDropRedundantInsertSliceRankExpansionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyDropRedundantInsertSliceRankExpansionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyDropRedundantInsertSliceRankExpansionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyDropRedundantInsertSliceRankExpansionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldIntoPackAndUnpackPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyFoldIntoPackAndUnpackPatternsOpAdaptor::ApplyFoldIntoPackAndUnpackPatternsOpAdaptor(ApplyFoldIntoPackAndUnpackPatternsOp op) : ApplyFoldIntoPackAndUnpackPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyFoldIntoPackAndUnpackPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyFoldIntoPackAndUnpackPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldIntoPackAndUnpackPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldIntoPackAndUnpackPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyFoldIntoPackAndUnpackPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyFoldIntoPackAndUnpackPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldIntoPackAndUnpackPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldIntoPackAndUnpackPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldIntoPackAndUnpackPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldTensorEmptyPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyFoldTensorEmptyPatternsOpGenericAdaptorBase::ApplyFoldTensorEmptyPatternsOpGenericAdaptorBase(ApplyFoldTensorEmptyPatternsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::BoolAttr ApplyFoldTensorEmptyPatternsOpGenericAdaptorBase::getFoldSingleUseOnlyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().fold_single_use_only);
  return attr;
}

bool ApplyFoldTensorEmptyPatternsOpGenericAdaptorBase::getFoldSingleUseOnly() {
  auto attr = getFoldSingleUseOnlyAttr();
  return attr.getValue();
}

} // namespace detail
ApplyFoldTensorEmptyPatternsOpAdaptor::ApplyFoldTensorEmptyPatternsOpAdaptor(ApplyFoldTensorEmptyPatternsOp op) : ApplyFoldTensorEmptyPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyFoldTensorEmptyPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_fold_single_use_only = getProperties().fold_single_use_only; (void)tblgen_fold_single_use_only;

  if (tblgen_fold_single_use_only && !((::llvm::isa<::mlir::BoolAttr>(tblgen_fold_single_use_only))))
    return emitError(loc, "'transform.apply_patterns.tensor.fold_tensor_empty' op ""attribute 'fold_single_use_only' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

::llvm::LogicalResult ApplyFoldTensorEmptyPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.fold_single_use_only;
       auto attr = dict.get("fold_single_use_only");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `fold_single_use_only` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyFoldTensorEmptyPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.fold_single_use_only;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("fold_single_use_only",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyFoldTensorEmptyPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.fold_single_use_only.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyFoldTensorEmptyPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "fold_single_use_only")
      return prop.fold_single_use_only;
  return std::nullopt;
}

void ApplyFoldTensorEmptyPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "fold_single_use_only") {
       prop.fold_single_use_only = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.fold_single_use_only)>>(value);
       return;
    }
}

void ApplyFoldTensorEmptyPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.fold_single_use_only) attrs.append("fold_single_use_only", prop.fold_single_use_only);
}

::llvm::LogicalResult ApplyFoldTensorEmptyPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFoldSingleUseOnlyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps0(attr, "fold_single_use_only", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ApplyFoldTensorEmptyPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.fold_single_use_only)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyFoldTensorEmptyPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.fold_single_use_only);
}

bool ApplyFoldTensorEmptyPatternsOp::getFoldSingleUseOnly() {
  auto attr = getFoldSingleUseOnlyAttr();
  return attr.getValue();
}

void ApplyFoldTensorEmptyPatternsOp::setFoldSingleUseOnly(bool attrValue) {
  getProperties().fold_single_use_only = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void ApplyFoldTensorEmptyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::BoolAttr fold_single_use_only) {
  if (fold_single_use_only) {
    odsState.getOrAddProperties<Properties>().fold_single_use_only = fold_single_use_only;
  }
}

void ApplyFoldTensorEmptyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::BoolAttr fold_single_use_only) {
  if (fold_single_use_only) {
    odsState.getOrAddProperties<Properties>().fold_single_use_only = fold_single_use_only;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldTensorEmptyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, bool fold_single_use_only) {
  odsState.getOrAddProperties<Properties>().fold_single_use_only = odsBuilder.getBoolAttr(fold_single_use_only);
}

void ApplyFoldTensorEmptyPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, bool fold_single_use_only) {
  odsState.getOrAddProperties<Properties>().fold_single_use_only = odsBuilder.getBoolAttr(fold_single_use_only);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldTensorEmptyPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ApplyFoldTensorEmptyPatternsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void ApplyFoldTensorEmptyPatternsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.fold_single_use_only)
    properties.fold_single_use_only = odsBuilder.getBoolAttr(false);
}

::llvm::LogicalResult ApplyFoldTensorEmptyPatternsOp::verifyInvariantsImpl() {
  auto tblgen_fold_single_use_only = getProperties().fold_single_use_only; (void)tblgen_fold_single_use_only;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps0(*this, tblgen_fold_single_use_only, "fold_single_use_only")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult ApplyFoldTensorEmptyPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldTensorEmptyPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void ApplyFoldTensorEmptyPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFoldSingleUseOnlyAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("fold_single_use_only");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldTensorEmptyPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpAdaptor::ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpAdaptor(ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp op) : ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldTensorSubsetOpsIntoVectorTransfersPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldTensorSubsetOpsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyFoldTensorSubsetOpsPatternsOpAdaptor::ApplyFoldTensorSubsetOpsPatternsOpAdaptor(ApplyFoldTensorSubsetOpsPatternsOp op) : ApplyFoldTensorSubsetOpsPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyFoldTensorSubsetOpsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyFoldTensorSubsetOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldTensorSubsetOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldTensorSubsetOpsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyFoldTensorSubsetOpsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyFoldTensorSubsetOpsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldTensorSubsetOpsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldTensorSubsetOpsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldTensorSubsetOpsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyMergeConsecutiveInsertExtractSlicePatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyMergeConsecutiveInsertExtractSlicePatternsOpAdaptor::ApplyMergeConsecutiveInsertExtractSlicePatternsOpAdaptor(ApplyMergeConsecutiveInsertExtractSlicePatternsOp op) : ApplyMergeConsecutiveInsertExtractSlicePatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyMergeConsecutiveInsertExtractSlicePatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyMergeConsecutiveInsertExtractSlicePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyMergeConsecutiveInsertExtractSlicePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyMergeConsecutiveInsertExtractSlicePatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyMergeConsecutiveInsertExtractSlicePatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyMergeConsecutiveInsertExtractSlicePatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyMergeConsecutiveInsertExtractSlicePatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyMergeConsecutiveInsertExtractSlicePatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyMergeConsecutiveInsertExtractSlicePatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyReassociativeReshapeFoldingPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyReassociativeReshapeFoldingPatternsOpAdaptor::ApplyReassociativeReshapeFoldingPatternsOpAdaptor(ApplyReassociativeReshapeFoldingPatternsOp op) : ApplyReassociativeReshapeFoldingPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyReassociativeReshapeFoldingPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyReassociativeReshapeFoldingPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyReassociativeReshapeFoldingPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyReassociativeReshapeFoldingPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyReassociativeReshapeFoldingPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyReassociativeReshapeFoldingPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyReassociativeReshapeFoldingPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyReassociativeReshapeFoldingPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyReassociativeReshapeFoldingPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyRewriteTensorOpsAsConstantPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyRewriteTensorOpsAsConstantPatternsOpGenericAdaptorBase::ApplyRewriteTensorOpsAsConstantPatternsOpGenericAdaptorBase(ApplyRewriteTensorOpsAsConstantPatternsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::UnitAttr ApplyRewriteTensorOpsAsConstantPatternsOpGenericAdaptorBase::getAggressiveAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().aggressive);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool ApplyRewriteTensorOpsAsConstantPatternsOpGenericAdaptorBase::getAggressive() {
  auto attr = getAggressiveAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
ApplyRewriteTensorOpsAsConstantPatternsOpAdaptor::ApplyRewriteTensorOpsAsConstantPatternsOpAdaptor(ApplyRewriteTensorOpsAsConstantPatternsOp op) : ApplyRewriteTensorOpsAsConstantPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyRewriteTensorOpsAsConstantPatternsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_aggressive = getProperties().aggressive; (void)tblgen_aggressive;

  if (tblgen_aggressive && !((::llvm::isa<::mlir::UnitAttr>(tblgen_aggressive))))
    return emitError(loc, "'transform.apply_patterns.tensor.rewrite_as_constant' op ""attribute 'aggressive' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

::llvm::LogicalResult ApplyRewriteTensorOpsAsConstantPatternsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.aggressive;
       auto attr = dict.get("aggressive");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `aggressive` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyRewriteTensorOpsAsConstantPatternsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.aggressive;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("aggressive",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyRewriteTensorOpsAsConstantPatternsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.aggressive.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyRewriteTensorOpsAsConstantPatternsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "aggressive")
      return prop.aggressive;
  return std::nullopt;
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "aggressive") {
       prop.aggressive = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.aggressive)>>(value);
       return;
    }
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.aggressive) attrs.append("aggressive", prop.aggressive);
}

::llvm::LogicalResult ApplyRewriteTensorOpsAsConstantPatternsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAggressiveAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps1(attr, "aggressive", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ApplyRewriteTensorOpsAsConstantPatternsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.aggressive)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.aggressive);
}

bool ApplyRewriteTensorOpsAsConstantPatternsOp::getAggressive() {
  auto attr = getAggressiveAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::setAggressive(bool attrValue) {
    auto &odsProp = getProperties().aggressive;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::UnitAttr aggressive) {
  if (aggressive) {
    odsState.getOrAddProperties<Properties>().aggressive = aggressive;
  }
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::UnitAttr aggressive) {
  if (aggressive) {
    odsState.getOrAddProperties<Properties>().aggressive = aggressive;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/bool aggressive) {
  if (aggressive) {
    odsState.getOrAddProperties<Properties>().aggressive = ((aggressive) ? odsBuilder.getUnitAttr() : nullptr);
  }
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/bool aggressive) {
  if (aggressive) {
    odsState.getOrAddProperties<Properties>().aggressive = ((aggressive) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyRewriteTensorOpsAsConstantPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ApplyRewriteTensorOpsAsConstantPatternsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult ApplyRewriteTensorOpsAsConstantPatternsOp::verifyInvariantsImpl() {
  auto tblgen_aggressive = getProperties().aggressive; (void)tblgen_aggressive;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps1(*this, tblgen_aggressive, "aggressive")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult ApplyRewriteTensorOpsAsConstantPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyRewriteTensorOpsAsConstantPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  if (::mlir::succeeded(parser.parseOptionalKeyword("aggressive"))) {
    result.getOrAddProperties<ApplyRewriteTensorOpsAsConstantPatternsOp::Properties>().aggressive = parser.getBuilder().getUnitAttr();  }
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

void ApplyRewriteTensorOpsAsConstantPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getAggressiveAttr()) {
    _odsPrinter << ' ' << "aggressive";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("aggressive");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAggressiveAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("aggressive");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyRewriteTensorOpsAsConstantPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MakeLoopIndependentOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MakeLoopIndependentOpGenericAdaptorBase::MakeLoopIndependentOpGenericAdaptorBase(MakeLoopIndependentOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t MakeLoopIndependentOpGenericAdaptorBase::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MakeLoopIndependentOpAdaptor::MakeLoopIndependentOpAdaptor(MakeLoopIndependentOp op) : MakeLoopIndependentOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MakeLoopIndependentOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitError(loc, "'transform.tensor.make_loop_independent' op ""requires attribute 'num_loops'");

  if (tblgen_num_loops && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_num_loops))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num_loops).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.tensor.make_loop_independent' op ""attribute 'num_loops' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

::llvm::LogicalResult MakeLoopIndependentOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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
  return ::mlir::success();
}

::mlir::Attribute MakeLoopIndependentOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.num_loops;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("num_loops",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MakeLoopIndependentOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.num_loops.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MakeLoopIndependentOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "num_loops")
      return prop.num_loops;
  return std::nullopt;
}

void MakeLoopIndependentOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "num_loops") {
       prop.num_loops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num_loops)>>(value);
       return;
    }
}

void MakeLoopIndependentOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.num_loops) attrs.append("num_loops", prop.num_loops);
}

::llvm::LogicalResult MakeLoopIndependentOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNumLoopsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps2(attr, "num_loops", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MakeLoopIndependentOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.num_loops)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MakeLoopIndependentOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.num_loops);
}

uint64_t MakeLoopIndependentOp::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

void MakeLoopIndependentOp::setNumLoops(uint64_t attrValue) {
  getProperties().num_loops = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void MakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  odsState.addTypes(transformed);
}

void MakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  odsState.addTypes(transformed);
}

void MakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MakeLoopIndependentOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MakeLoopIndependentOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MakeLoopIndependentOp::verifyInvariantsImpl() {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitOpError("requires attribute 'num_loops'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps2(*this, tblgen_num_loops, "num_loops")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TensorTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_TensorTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MakeLoopIndependentOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MakeLoopIndependentOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
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

void MakeLoopIndependentOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MakeLoopIndependentOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TypeConversionCastShapeDynamicDimsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TypeConversionCastShapeDynamicDimsOpGenericAdaptorBase::TypeConversionCastShapeDynamicDimsOpGenericAdaptorBase(TypeConversionCastShapeDynamicDimsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::UnitAttr TypeConversionCastShapeDynamicDimsOpGenericAdaptorBase::getIgnoreDynamicInfoAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().ignore_dynamic_info);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool TypeConversionCastShapeDynamicDimsOpGenericAdaptorBase::getIgnoreDynamicInfo() {
  auto attr = getIgnoreDynamicInfoAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
TypeConversionCastShapeDynamicDimsOpAdaptor::TypeConversionCastShapeDynamicDimsOpAdaptor(TypeConversionCastShapeDynamicDimsOp op) : TypeConversionCastShapeDynamicDimsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult TypeConversionCastShapeDynamicDimsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_ignore_dynamic_info = getProperties().ignore_dynamic_info; (void)tblgen_ignore_dynamic_info;

  if (tblgen_ignore_dynamic_info && !((::llvm::isa<::mlir::UnitAttr>(tblgen_ignore_dynamic_info))))
    return emitError(loc, "'transform.type_conversion.tensor.cast_shape_dynamic_dims' op ""attribute 'ignore_dynamic_info' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

::llvm::LogicalResult TypeConversionCastShapeDynamicDimsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.ignore_dynamic_info;
       auto attr = dict.get("ignore_dynamic_info");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `ignore_dynamic_info` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute TypeConversionCastShapeDynamicDimsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.ignore_dynamic_info;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("ignore_dynamic_info",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TypeConversionCastShapeDynamicDimsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.ignore_dynamic_info.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> TypeConversionCastShapeDynamicDimsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "ignore_dynamic_info")
      return prop.ignore_dynamic_info;
  return std::nullopt;
}

void TypeConversionCastShapeDynamicDimsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "ignore_dynamic_info") {
       prop.ignore_dynamic_info = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.ignore_dynamic_info)>>(value);
       return;
    }
}

void TypeConversionCastShapeDynamicDimsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.ignore_dynamic_info) attrs.append("ignore_dynamic_info", prop.ignore_dynamic_info);
}

::llvm::LogicalResult TypeConversionCastShapeDynamicDimsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIgnoreDynamicInfoAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps1(attr, "ignore_dynamic_info", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult TypeConversionCastShapeDynamicDimsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.ignore_dynamic_info)))
    return ::mlir::failure();
  return ::mlir::success();
}

void TypeConversionCastShapeDynamicDimsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.ignore_dynamic_info);
}

bool TypeConversionCastShapeDynamicDimsOp::getIgnoreDynamicInfo() {
  auto attr = getIgnoreDynamicInfoAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void TypeConversionCastShapeDynamicDimsOp::setIgnoreDynamicInfo(bool attrValue) {
    auto &odsProp = getProperties().ignore_dynamic_info;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void TypeConversionCastShapeDynamicDimsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::UnitAttr ignore_dynamic_info) {
  if (ignore_dynamic_info) {
    odsState.getOrAddProperties<Properties>().ignore_dynamic_info = ignore_dynamic_info;
  }
}

void TypeConversionCastShapeDynamicDimsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::UnitAttr ignore_dynamic_info) {
  if (ignore_dynamic_info) {
    odsState.getOrAddProperties<Properties>().ignore_dynamic_info = ignore_dynamic_info;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TypeConversionCastShapeDynamicDimsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/bool ignore_dynamic_info) {
  if (ignore_dynamic_info) {
    odsState.getOrAddProperties<Properties>().ignore_dynamic_info = ((ignore_dynamic_info) ? odsBuilder.getUnitAttr() : nullptr);
  }
}

void TypeConversionCastShapeDynamicDimsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/bool ignore_dynamic_info) {
  if (ignore_dynamic_info) {
    odsState.getOrAddProperties<Properties>().ignore_dynamic_info = ((ignore_dynamic_info) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TypeConversionCastShapeDynamicDimsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<TypeConversionCastShapeDynamicDimsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult TypeConversionCastShapeDynamicDimsOp::verifyInvariantsImpl() {
  auto tblgen_ignore_dynamic_info = getProperties().ignore_dynamic_info; (void)tblgen_ignore_dynamic_info;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_TensorTransformOps1(*this, tblgen_ignore_dynamic_info, "ignore_dynamic_info")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult TypeConversionCastShapeDynamicDimsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TypeConversionCastShapeDynamicDimsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  if (::mlir::succeeded(parser.parseOptionalKeyword("ignore_dynamic_info"))) {
    result.getOrAddProperties<TypeConversionCastShapeDynamicDimsOp::Properties>().ignore_dynamic_info = parser.getBuilder().getUnitAttr();  }
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

void TypeConversionCastShapeDynamicDimsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getIgnoreDynamicInfoAttr()) {
    _odsPrinter << ' ' << "ignore_dynamic_info";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("ignore_dynamic_info");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIgnoreDynamicInfoAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("ignore_dynamic_info");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::TypeConversionCastShapeDynamicDimsOp)


#endif  // GET_OP_CLASSES

