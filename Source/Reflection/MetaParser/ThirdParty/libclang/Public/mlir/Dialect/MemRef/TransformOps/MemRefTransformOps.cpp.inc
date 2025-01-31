/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: MemRefTransformOps.td                                                *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyAllocToAllocaOp,
::mlir::transform::ApplyExpandOpsPatternsOp,
::mlir::transform::ApplyExpandStridedMetadataPatternsOp,
::mlir::transform::ApplyExtractAddressComputationsPatternsOp,
::mlir::transform::ApplyFoldMemrefAliasOpsPatternsOp,
::mlir::transform::ApplyResolveRankedShapedTypeResultDimsPatternsOp,
::mlir::transform::MemRefAllocaToGlobalOp,
::mlir::transform::MemRefEraseDeadAllocAndStoresOp,
::mlir::transform::MemRefMakeLoopIndependentOp,
::mlir::transform::MemRefMultiBufferOp,
::mlir::transform::MemrefToLLVMTypeConverterOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_MemRefTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "memref.alloca")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to memref.alloca operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_MemRefTransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_MemRefTransformOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::OperationType>(type))) && ((::llvm::cast<::mlir::transform::OperationType>(type).getOperationName() == "memref.alloc")))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Transform IR handle to memref.alloc operations, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MemRefTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getValue().isStrictlyPositive()))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MemRefTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MemRefTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MemRefTransformOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_MemRefTransformOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MemRefTransformOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyAllocToAllocaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyAllocToAllocaOpGenericAdaptorBase::ApplyAllocToAllocaOpGenericAdaptorBase(ApplyAllocToAllocaOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::std::optional<uint64_t> ApplyAllocToAllocaOpGenericAdaptorBase::getSizeLimit() {
  auto attr = getSizeLimitAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
ApplyAllocToAllocaOpAdaptor::ApplyAllocToAllocaOpAdaptor(ApplyAllocToAllocaOp op) : ApplyAllocToAllocaOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyAllocToAllocaOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_size_limit = getProperties().size_limit; (void)tblgen_size_limit;

  if (tblgen_size_limit && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_size_limit))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_size_limit).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.apply_patterns.memref.alloc_to_alloca' op ""attribute 'size_limit' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

::llvm::LogicalResult ApplyAllocToAllocaOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.size_limit;
       auto attr = dict.get("size_limit");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `size_limit` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyAllocToAllocaOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.size_limit;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("size_limit",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyAllocToAllocaOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.size_limit.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyAllocToAllocaOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "size_limit")
      return prop.size_limit;
  return std::nullopt;
}

void ApplyAllocToAllocaOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "size_limit") {
       prop.size_limit = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.size_limit)>>(value);
       return;
    }
}

void ApplyAllocToAllocaOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.size_limit) attrs.append("size_limit", prop.size_limit);
}

::llvm::LogicalResult ApplyAllocToAllocaOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getSizeLimitAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps0(attr, "size_limit", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ApplyAllocToAllocaOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.size_limit)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyAllocToAllocaOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.size_limit);
}

::std::optional<uint64_t> ApplyAllocToAllocaOp::getSizeLimit() {
  auto attr = getSizeLimitAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void ApplyAllocToAllocaOp::setSizeLimit(::std::optional<uint64_t> attrValue) {
    auto &odsProp = getProperties().size_limit;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue);
    else
      odsProp = nullptr;
}

void ApplyAllocToAllocaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::IntegerAttr size_limit) {
  if (size_limit) {
    odsState.getOrAddProperties<Properties>().size_limit = size_limit;
  }
}

void ApplyAllocToAllocaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::IntegerAttr size_limit) {
  if (size_limit) {
    odsState.getOrAddProperties<Properties>().size_limit = size_limit;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyAllocToAllocaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ApplyAllocToAllocaOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult ApplyAllocToAllocaOp::verifyInvariantsImpl() {
  auto tblgen_size_limit = getProperties().size_limit; (void)tblgen_size_limit;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps0(*this, tblgen_size_limit, "size_limit")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult ApplyAllocToAllocaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyAllocToAllocaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::IntegerAttr size_limitAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("size_limit"))) {
  if (parser.parseLParen())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(size_limitAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (size_limitAttr) result.getOrAddProperties<ApplyAllocToAllocaOp::Properties>().size_limit = size_limitAttr;
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
  return ::mlir::success();
}

void ApplyAllocToAllocaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getSizeLimitAttr()) {
    _odsPrinter << ' ' << "size_limit";
    _odsPrinter << "(";
    _odsPrinter.printAttributeWithoutType(getSizeLimitAttr());
    _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("size_limit");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyAllocToAllocaOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyExpandOpsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyExpandOpsPatternsOpAdaptor::ApplyExpandOpsPatternsOpAdaptor(ApplyExpandOpsPatternsOp op) : ApplyExpandOpsPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyExpandOpsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyExpandOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyExpandOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyExpandOpsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyExpandOpsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyExpandOpsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyExpandOpsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyExpandOpsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyExpandOpsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyExpandStridedMetadataPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyExpandStridedMetadataPatternsOpAdaptor::ApplyExpandStridedMetadataPatternsOpAdaptor(ApplyExpandStridedMetadataPatternsOp op) : ApplyExpandStridedMetadataPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyExpandStridedMetadataPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyExpandStridedMetadataPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyExpandStridedMetadataPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyExpandStridedMetadataPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyExpandStridedMetadataPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyExpandStridedMetadataPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyExpandStridedMetadataPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyExpandStridedMetadataPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyExpandStridedMetadataPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyExtractAddressComputationsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyExtractAddressComputationsPatternsOpAdaptor::ApplyExtractAddressComputationsPatternsOpAdaptor(ApplyExtractAddressComputationsPatternsOp op) : ApplyExtractAddressComputationsPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyExtractAddressComputationsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyExtractAddressComputationsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyExtractAddressComputationsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyExtractAddressComputationsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyExtractAddressComputationsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyExtractAddressComputationsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyExtractAddressComputationsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyExtractAddressComputationsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyExtractAddressComputationsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldMemrefAliasOpsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyFoldMemrefAliasOpsPatternsOpAdaptor::ApplyFoldMemrefAliasOpsPatternsOpAdaptor(ApplyFoldMemrefAliasOpsPatternsOp op) : ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyFoldMemrefAliasOpsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyFoldMemrefAliasOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFoldMemrefAliasOpsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFoldMemrefAliasOpsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyFoldMemrefAliasOpsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyFoldMemrefAliasOpsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFoldMemrefAliasOpsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFoldMemrefAliasOpsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldMemrefAliasOpsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyResolveRankedShapedTypeResultDimsPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyResolveRankedShapedTypeResultDimsPatternsOpAdaptor::ApplyResolveRankedShapedTypeResultDimsPatternsOpAdaptor(ApplyResolveRankedShapedTypeResultDimsPatternsOp op) : ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyResolveRankedShapedTypeResultDimsPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyResolveRankedShapedTypeResultDimsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyResolveRankedShapedTypeResultDimsPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyResolveRankedShapedTypeResultDimsPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyResolveRankedShapedTypeResultDimsPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyResolveRankedShapedTypeResultDimsPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyResolveRankedShapedTypeResultDimsPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyResolveRankedShapedTypeResultDimsPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyResolveRankedShapedTypeResultDimsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemRefAllocaToGlobalOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
MemRefAllocaToGlobalOpAdaptor::MemRefAllocaToGlobalOpAdaptor(MemRefAllocaToGlobalOp op) : MemRefAllocaToGlobalOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MemRefAllocaToGlobalOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void MemRefAllocaToGlobalOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "getGlobal");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "global");
}

void MemRefAllocaToGlobalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type getGlobal, ::mlir::Type global, ::mlir::Value alloca) {
  odsState.addOperands(alloca);
  odsState.addTypes(getGlobal);
  odsState.addTypes(global);
}

void MemRefAllocaToGlobalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value alloca) {
  odsState.addOperands(alloca);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemRefAllocaToGlobalOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult MemRefAllocaToGlobalOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MemRefAllocaToGlobalOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MemRefAllocaToGlobalOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand allocaRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> allocaOperands(&allocaRawOperand, 1);  ::llvm::SMLoc allocaOperandsLoc;
  (void)allocaOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  allocaOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(allocaRawOperand))
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
  if (parser.resolveOperands(allocaOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MemRefAllocaToGlobalOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAlloca();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MemRefAllocaToGlobalOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemRefEraseDeadAllocAndStoresOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
MemRefEraseDeadAllocAndStoresOpAdaptor::MemRefEraseDeadAllocAndStoresOpAdaptor(MemRefEraseDeadAllocAndStoresOp op) : MemRefEraseDeadAllocAndStoresOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MemRefEraseDeadAllocAndStoresOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

::llvm::LogicalResult MemRefEraseDeadAllocAndStoresOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MemRefEraseDeadAllocAndStoresOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MemRefEraseDeadAllocAndStoresOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void MemRefEraseDeadAllocAndStoresOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MemRefEraseDeadAllocAndStoresOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemRefMakeLoopIndependentOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MemRefMakeLoopIndependentOpGenericAdaptorBase::MemRefMakeLoopIndependentOpGenericAdaptorBase(MemRefMakeLoopIndependentOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t MemRefMakeLoopIndependentOpGenericAdaptorBase::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MemRefMakeLoopIndependentOpAdaptor::MemRefMakeLoopIndependentOpAdaptor(MemRefMakeLoopIndependentOp op) : MemRefMakeLoopIndependentOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MemRefMakeLoopIndependentOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitError(loc, "'transform.memref.make_loop_independent' op ""requires attribute 'num_loops'");

  if (tblgen_num_loops && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_num_loops))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num_loops).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.memref.make_loop_independent' op ""attribute 'num_loops' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

::llvm::LogicalResult MemRefMakeLoopIndependentOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

::mlir::Attribute MemRefMakeLoopIndependentOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
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

llvm::hash_code MemRefMakeLoopIndependentOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.num_loops.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MemRefMakeLoopIndependentOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "num_loops")
      return prop.num_loops;
  return std::nullopt;
}

void MemRefMakeLoopIndependentOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "num_loops") {
       prop.num_loops = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num_loops)>>(value);
       return;
    }
}

void MemRefMakeLoopIndependentOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.num_loops) attrs.append("num_loops", prop.num_loops);
}

::llvm::LogicalResult MemRefMakeLoopIndependentOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNumLoopsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps0(attr, "num_loops", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MemRefMakeLoopIndependentOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.num_loops)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MemRefMakeLoopIndependentOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.num_loops);
}

uint64_t MemRefMakeLoopIndependentOp::getNumLoops() {
  auto attr = getNumLoopsAttr();
  return attr.getValue().getZExtValue();
}

void MemRefMakeLoopIndependentOp::setNumLoops(uint64_t attrValue) {
  getProperties().num_loops = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void MemRefMakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  odsState.addTypes(transformed);
}

void MemRefMakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = num_loops;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemRefMakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  odsState.addTypes(transformed);
}

void MemRefMakeLoopIndependentOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t num_loops) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().num_loops = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_loops);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemRefMakeLoopIndependentOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MemRefMakeLoopIndependentOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MemRefMakeLoopIndependentOp::verifyInvariantsImpl() {
  auto tblgen_num_loops = getProperties().num_loops; (void)tblgen_num_loops;
  if (!tblgen_num_loops) return emitOpError("requires attribute 'num_loops'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps0(*this, tblgen_num_loops, "num_loops")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MemRefMakeLoopIndependentOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MemRefMakeLoopIndependentOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void MemRefMakeLoopIndependentOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MemRefMakeLoopIndependentOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemRefMultiBufferOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MemRefMultiBufferOpGenericAdaptorBase::MemRefMultiBufferOpGenericAdaptorBase(MemRefMultiBufferOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t MemRefMultiBufferOpGenericAdaptorBase::getFactor() {
  auto attr = getFactorAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr MemRefMultiBufferOpGenericAdaptorBase::getSkipAnalysisAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().skip_analysis);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MemRefMultiBufferOpGenericAdaptorBase::getSkipAnalysis() {
  auto attr = getSkipAnalysisAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
MemRefMultiBufferOpAdaptor::MemRefMultiBufferOpAdaptor(MemRefMultiBufferOp op) : MemRefMultiBufferOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MemRefMultiBufferOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_factor = getProperties().factor; (void)tblgen_factor;
  if (!tblgen_factor) return emitError(loc, "'transform.memref.multibuffer' op ""requires attribute 'factor'");
  auto tblgen_skip_analysis = getProperties().skip_analysis; (void)tblgen_skip_analysis;

  if (tblgen_factor && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_factor))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_factor).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_factor).getValue().isStrictlyPositive()))))
    return emitError(loc, "'transform.memref.multibuffer' op ""attribute 'factor' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive");

  if (tblgen_skip_analysis && !((::llvm::isa<::mlir::UnitAttr>(tblgen_skip_analysis))))
    return emitError(loc, "'transform.memref.multibuffer' op ""attribute 'skip_analysis' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

::llvm::LogicalResult MemRefMultiBufferOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
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

  {
    auto &propStorage = prop.skip_analysis;
       auto attr = dict.get("skip_analysis");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `skip_analysis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MemRefMultiBufferOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.factor;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("factor",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.skip_analysis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("skip_analysis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MemRefMultiBufferOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.factor.getAsOpaquePointer()), 
    llvm::hash_value(prop.skip_analysis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MemRefMultiBufferOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "factor")
      return prop.factor;

    if (name == "skip_analysis")
      return prop.skip_analysis;
  return std::nullopt;
}

void MemRefMultiBufferOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "factor") {
       prop.factor = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.factor)>>(value);
       return;
    }

    if (name == "skip_analysis") {
       prop.skip_analysis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.skip_analysis)>>(value);
       return;
    }
}

void MemRefMultiBufferOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.factor) attrs.append("factor", prop.factor);

    if (prop.skip_analysis) attrs.append("skip_analysis", prop.skip_analysis);
}

::llvm::LogicalResult MemRefMultiBufferOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFactorAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps1(attr, "factor", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSkipAnalysisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps2(attr, "skip_analysis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MemRefMultiBufferOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.factor)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.skip_analysis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MemRefMultiBufferOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.factor);

  writer.writeOptionalAttribute(prop.skip_analysis);
}

uint64_t MemRefMultiBufferOp::getFactor() {
  auto attr = getFactorAttr();
  return attr.getValue().getZExtValue();
}

bool MemRefMultiBufferOp::getSkipAnalysis() {
  auto attr = getSkipAnalysisAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void MemRefMultiBufferOp::setFactor(uint64_t attrValue) {
  getProperties().factor = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void MemRefMultiBufferOp::setSkipAnalysis(bool attrValue) {
    auto &odsProp = getProperties().skip_analysis;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MemRefMultiBufferOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr factor, /*optional*/::mlir::UnitAttr skip_analysis) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = factor;
  if (skip_analysis) {
    odsState.getOrAddProperties<Properties>().skip_analysis = skip_analysis;
  }
  odsState.addTypes(transformed);
}

void MemRefMultiBufferOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr factor, /*optional*/::mlir::UnitAttr skip_analysis) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = factor;
  if (skip_analysis) {
    odsState.getOrAddProperties<Properties>().skip_analysis = skip_analysis;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemRefMultiBufferOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t factor, /*optional*/bool skip_analysis) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), factor);
  if (skip_analysis) {
    odsState.getOrAddProperties<Properties>().skip_analysis = ((skip_analysis) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(transformed);
}

void MemRefMultiBufferOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t factor, /*optional*/bool skip_analysis) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().factor = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), factor);
  if (skip_analysis) {
    odsState.getOrAddProperties<Properties>().skip_analysis = ((skip_analysis) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemRefMultiBufferOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MemRefMultiBufferOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MemRefMultiBufferOp::verifyInvariantsImpl() {
  auto tblgen_factor = getProperties().factor; (void)tblgen_factor;
  if (!tblgen_factor) return emitOpError("requires attribute 'factor'");
  auto tblgen_skip_analysis = getProperties().skip_analysis; (void)tblgen_skip_analysis;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps1(*this, tblgen_factor, "factor")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps2(*this, tblgen_skip_analysis, "skip_analysis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MemRefTransformOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MemRefMultiBufferOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MemRefMultiBufferOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void MemRefMultiBufferOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSkipAnalysisAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("skip_analysis");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MemRefMultiBufferOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemrefToLLVMTypeConverterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MemrefToLLVMTypeConverterOpGenericAdaptorBase::MemrefToLLVMTypeConverterOpGenericAdaptorBase(MemrefToLLVMTypeConverterOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::BoolAttr MemrefToLLVMTypeConverterOpGenericAdaptorBase::getUseAlignedAllocAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().use_aligned_alloc);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

bool MemrefToLLVMTypeConverterOpGenericAdaptorBase::getUseAlignedAlloc() {
  auto attr = getUseAlignedAllocAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::IntegerAttr MemrefToLLVMTypeConverterOpGenericAdaptorBase::getIndexBitwidthAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().index_bitwidth);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 64);
  return attr;
}

uint64_t MemrefToLLVMTypeConverterOpGenericAdaptorBase::getIndexBitwidth() {
  auto attr = getIndexBitwidthAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 64).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::BoolAttr MemrefToLLVMTypeConverterOpGenericAdaptorBase::getUseGenericFunctionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().use_generic_functions);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

bool MemrefToLLVMTypeConverterOpGenericAdaptorBase::getUseGenericFunctions() {
  auto attr = getUseGenericFunctionsAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::mlir::BoolAttr MemrefToLLVMTypeConverterOpGenericAdaptorBase::getUseBarePtrCallConvAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().use_bare_ptr_call_conv);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

bool MemrefToLLVMTypeConverterOpGenericAdaptorBase::getUseBarePtrCallConv() {
  auto attr = getUseBarePtrCallConvAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::std::optional< ::llvm::StringRef > MemrefToLLVMTypeConverterOpGenericAdaptorBase::getDataLayout() {
  auto attr = getDataLayoutAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

} // namespace detail
MemrefToLLVMTypeConverterOpAdaptor::MemrefToLLVMTypeConverterOpAdaptor(MemrefToLLVMTypeConverterOp op) : MemrefToLLVMTypeConverterOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MemrefToLLVMTypeConverterOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_data_layout = getProperties().data_layout; (void)tblgen_data_layout;
  auto tblgen_index_bitwidth = getProperties().index_bitwidth; (void)tblgen_index_bitwidth;
  auto tblgen_use_aligned_alloc = getProperties().use_aligned_alloc; (void)tblgen_use_aligned_alloc;
  auto tblgen_use_bare_ptr_call_conv = getProperties().use_bare_ptr_call_conv; (void)tblgen_use_bare_ptr_call_conv;
  auto tblgen_use_generic_functions = getProperties().use_generic_functions; (void)tblgen_use_generic_functions;

  if (tblgen_use_aligned_alloc && !((::llvm::isa<::mlir::BoolAttr>(tblgen_use_aligned_alloc))))
    return emitError(loc, "'transform.apply_conversion_patterns.memref.memref_to_llvm_type_converter' op ""attribute 'use_aligned_alloc' failed to satisfy constraint: bool attribute");

  if (tblgen_index_bitwidth && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_index_bitwidth))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_index_bitwidth).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.apply_conversion_patterns.memref.memref_to_llvm_type_converter' op ""attribute 'index_bitwidth' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_use_generic_functions && !((::llvm::isa<::mlir::BoolAttr>(tblgen_use_generic_functions))))
    return emitError(loc, "'transform.apply_conversion_patterns.memref.memref_to_llvm_type_converter' op ""attribute 'use_generic_functions' failed to satisfy constraint: bool attribute");

  if (tblgen_use_bare_ptr_call_conv && !((::llvm::isa<::mlir::BoolAttr>(tblgen_use_bare_ptr_call_conv))))
    return emitError(loc, "'transform.apply_conversion_patterns.memref.memref_to_llvm_type_converter' op ""attribute 'use_bare_ptr_call_conv' failed to satisfy constraint: bool attribute");

  if (tblgen_data_layout && !((::llvm::isa<::mlir::StringAttr>(tblgen_data_layout))))
    return emitError(loc, "'transform.apply_conversion_patterns.memref.memref_to_llvm_type_converter' op ""attribute 'data_layout' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

::llvm::LogicalResult MemrefToLLVMTypeConverterOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.data_layout;
       auto attr = dict.get("data_layout");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `data_layout` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.index_bitwidth;
       auto attr = dict.get("index_bitwidth");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `index_bitwidth` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_aligned_alloc;
       auto attr = dict.get("use_aligned_alloc");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `use_aligned_alloc` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_bare_ptr_call_conv;
       auto attr = dict.get("use_bare_ptr_call_conv");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `use_bare_ptr_call_conv` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.use_generic_functions;
       auto attr = dict.get("use_generic_functions");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `use_generic_functions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MemrefToLLVMTypeConverterOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.data_layout;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("data_layout",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.index_bitwidth;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("index_bitwidth",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_aligned_alloc;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_aligned_alloc",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_bare_ptr_call_conv;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_bare_ptr_call_conv",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.use_generic_functions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("use_generic_functions",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MemrefToLLVMTypeConverterOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.data_layout.getAsOpaquePointer()), 
    llvm::hash_value(prop.index_bitwidth.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_aligned_alloc.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_bare_ptr_call_conv.getAsOpaquePointer()), 
    llvm::hash_value(prop.use_generic_functions.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MemrefToLLVMTypeConverterOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "data_layout")
      return prop.data_layout;

    if (name == "index_bitwidth")
      return prop.index_bitwidth;

    if (name == "use_aligned_alloc")
      return prop.use_aligned_alloc;

    if (name == "use_bare_ptr_call_conv")
      return prop.use_bare_ptr_call_conv;

    if (name == "use_generic_functions")
      return prop.use_generic_functions;
  return std::nullopt;
}

void MemrefToLLVMTypeConverterOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "data_layout") {
       prop.data_layout = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.data_layout)>>(value);
       return;
    }

    if (name == "index_bitwidth") {
       prop.index_bitwidth = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.index_bitwidth)>>(value);
       return;
    }

    if (name == "use_aligned_alloc") {
       prop.use_aligned_alloc = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_aligned_alloc)>>(value);
       return;
    }

    if (name == "use_bare_ptr_call_conv") {
       prop.use_bare_ptr_call_conv = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_bare_ptr_call_conv)>>(value);
       return;
    }

    if (name == "use_generic_functions") {
       prop.use_generic_functions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.use_generic_functions)>>(value);
       return;
    }
}

void MemrefToLLVMTypeConverterOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.data_layout) attrs.append("data_layout", prop.data_layout);

    if (prop.index_bitwidth) attrs.append("index_bitwidth", prop.index_bitwidth);

    if (prop.use_aligned_alloc) attrs.append("use_aligned_alloc", prop.use_aligned_alloc);

    if (prop.use_bare_ptr_call_conv) attrs.append("use_bare_ptr_call_conv", prop.use_bare_ptr_call_conv);

    if (prop.use_generic_functions) attrs.append("use_generic_functions", prop.use_generic_functions);
}

::llvm::LogicalResult MemrefToLLVMTypeConverterOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDataLayoutAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps4(attr, "data_layout", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIndexBitwidthAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps0(attr, "index_bitwidth", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseAlignedAllocAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps3(attr, "use_aligned_alloc", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseBarePtrCallConvAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps3(attr, "use_bare_ptr_call_conv", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUseGenericFunctionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps3(attr, "use_generic_functions", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MemrefToLLVMTypeConverterOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.data_layout)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.index_bitwidth)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_aligned_alloc)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_bare_ptr_call_conv)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.use_generic_functions)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MemrefToLLVMTypeConverterOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.data_layout);

  writer.writeOptionalAttribute(prop.index_bitwidth);

  writer.writeOptionalAttribute(prop.use_aligned_alloc);

  writer.writeOptionalAttribute(prop.use_bare_ptr_call_conv);

  writer.writeOptionalAttribute(prop.use_generic_functions);
}

bool MemrefToLLVMTypeConverterOp::getUseAlignedAlloc() {
  auto attr = getUseAlignedAllocAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

uint64_t MemrefToLLVMTypeConverterOp::getIndexBitwidth() {
  auto attr = getIndexBitwidthAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), 64).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

bool MemrefToLLVMTypeConverterOp::getUseGenericFunctions() {
  auto attr = getUseGenericFunctionsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

bool MemrefToLLVMTypeConverterOp::getUseBarePtrCallConv() {
  auto attr = getUseBarePtrCallConvAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

::std::optional< ::llvm::StringRef > MemrefToLLVMTypeConverterOp::getDataLayout() {
  auto attr = getDataLayoutAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

void MemrefToLLVMTypeConverterOp::setUseAlignedAlloc(::std::optional<bool> attrValue) {
    auto &odsProp = getProperties().use_aligned_alloc;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue);
    else
      odsProp = nullptr;
}

void MemrefToLLVMTypeConverterOp::setIndexBitwidth(::std::optional<uint64_t> attrValue) {
    auto &odsProp = getProperties().index_bitwidth;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue);
    else
      odsProp = nullptr;
}

void MemrefToLLVMTypeConverterOp::setUseGenericFunctions(::std::optional<bool> attrValue) {
    auto &odsProp = getProperties().use_generic_functions;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue);
    else
      odsProp = nullptr;
}

void MemrefToLLVMTypeConverterOp::setUseBarePtrCallConv(::std::optional<bool> attrValue) {
    auto &odsProp = getProperties().use_bare_ptr_call_conv;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getBoolAttr(*attrValue);
    else
      odsProp = nullptr;
}

void MemrefToLLVMTypeConverterOp::setDataLayout(::std::optional<::llvm::StringRef> attrValue) {
    auto &odsProp = getProperties().data_layout;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getStringAttr(*attrValue);
    else
      odsProp = nullptr;
}

void MemrefToLLVMTypeConverterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::BoolAttr use_aligned_alloc, /*optional*/::mlir::IntegerAttr index_bitwidth, /*optional*/::mlir::BoolAttr use_generic_functions, /*optional*/::mlir::BoolAttr use_bare_ptr_call_conv, /*optional*/::mlir::StringAttr data_layout) {
  if (use_aligned_alloc) {
    odsState.getOrAddProperties<Properties>().use_aligned_alloc = use_aligned_alloc;
  }
  if (index_bitwidth) {
    odsState.getOrAddProperties<Properties>().index_bitwidth = index_bitwidth;
  }
  if (use_generic_functions) {
    odsState.getOrAddProperties<Properties>().use_generic_functions = use_generic_functions;
  }
  if (use_bare_ptr_call_conv) {
    odsState.getOrAddProperties<Properties>().use_bare_ptr_call_conv = use_bare_ptr_call_conv;
  }
  if (data_layout) {
    odsState.getOrAddProperties<Properties>().data_layout = data_layout;
  }
}

void MemrefToLLVMTypeConverterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::BoolAttr use_aligned_alloc, /*optional*/::mlir::IntegerAttr index_bitwidth, /*optional*/::mlir::BoolAttr use_generic_functions, /*optional*/::mlir::BoolAttr use_bare_ptr_call_conv, /*optional*/::mlir::StringAttr data_layout) {
  if (use_aligned_alloc) {
    odsState.getOrAddProperties<Properties>().use_aligned_alloc = use_aligned_alloc;
  }
  if (index_bitwidth) {
    odsState.getOrAddProperties<Properties>().index_bitwidth = index_bitwidth;
  }
  if (use_generic_functions) {
    odsState.getOrAddProperties<Properties>().use_generic_functions = use_generic_functions;
  }
  if (use_bare_ptr_call_conv) {
    odsState.getOrAddProperties<Properties>().use_bare_ptr_call_conv = use_bare_ptr_call_conv;
  }
  if (data_layout) {
    odsState.getOrAddProperties<Properties>().data_layout = data_layout;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemrefToLLVMTypeConverterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/bool use_aligned_alloc, /*optional*/uint64_t index_bitwidth, /*optional*/bool use_generic_functions, /*optional*/bool use_bare_ptr_call_conv, /*optional*/::mlir::StringAttr data_layout) {
  odsState.getOrAddProperties<Properties>().use_aligned_alloc = odsBuilder.getBoolAttr(use_aligned_alloc);
  odsState.getOrAddProperties<Properties>().index_bitwidth = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), index_bitwidth);
  odsState.getOrAddProperties<Properties>().use_generic_functions = odsBuilder.getBoolAttr(use_generic_functions);
  odsState.getOrAddProperties<Properties>().use_bare_ptr_call_conv = odsBuilder.getBoolAttr(use_bare_ptr_call_conv);
  if (data_layout) {
    odsState.getOrAddProperties<Properties>().data_layout = data_layout;
  }
}

void MemrefToLLVMTypeConverterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/bool use_aligned_alloc, /*optional*/uint64_t index_bitwidth, /*optional*/bool use_generic_functions, /*optional*/bool use_bare_ptr_call_conv, /*optional*/::mlir::StringAttr data_layout) {
  odsState.getOrAddProperties<Properties>().use_aligned_alloc = odsBuilder.getBoolAttr(use_aligned_alloc);
  odsState.getOrAddProperties<Properties>().index_bitwidth = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), index_bitwidth);
  odsState.getOrAddProperties<Properties>().use_generic_functions = odsBuilder.getBoolAttr(use_generic_functions);
  odsState.getOrAddProperties<Properties>().use_bare_ptr_call_conv = odsBuilder.getBoolAttr(use_bare_ptr_call_conv);
  if (data_layout) {
    odsState.getOrAddProperties<Properties>().data_layout = data_layout;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemrefToLLVMTypeConverterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MemrefToLLVMTypeConverterOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MemrefToLLVMTypeConverterOp::verifyInvariantsImpl() {
  auto tblgen_data_layout = getProperties().data_layout; (void)tblgen_data_layout;
  auto tblgen_index_bitwidth = getProperties().index_bitwidth; (void)tblgen_index_bitwidth;
  auto tblgen_use_aligned_alloc = getProperties().use_aligned_alloc; (void)tblgen_use_aligned_alloc;
  auto tblgen_use_bare_ptr_call_conv = getProperties().use_bare_ptr_call_conv; (void)tblgen_use_bare_ptr_call_conv;
  auto tblgen_use_generic_functions = getProperties().use_generic_functions; (void)tblgen_use_generic_functions;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps3(*this, tblgen_use_aligned_alloc, "use_aligned_alloc")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps0(*this, tblgen_index_bitwidth, "index_bitwidth")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps3(*this, tblgen_use_generic_functions, "use_generic_functions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps3(*this, tblgen_use_bare_ptr_call_conv, "use_bare_ptr_call_conv")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MemRefTransformOps4(*this, tblgen_data_layout, "data_layout")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult MemrefToLLVMTypeConverterOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MemrefToLLVMTypeConverterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void MemrefToLLVMTypeConverterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseAlignedAllocAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("use_aligned_alloc");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIndexBitwidthAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 64)))
       elidedAttrs.push_back("index_bitwidth");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseGenericFunctionsAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("use_generic_functions");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUseBarePtrCallConvAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("use_bare_ptr_call_conv");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MemrefToLLVMTypeConverterOp)


#endif  // GET_OP_CLASSES

