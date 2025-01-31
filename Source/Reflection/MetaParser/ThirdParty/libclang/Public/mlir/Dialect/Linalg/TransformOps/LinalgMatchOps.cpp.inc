/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: LinalgMatchOps.td                                                    *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::MatchStructuredBodyOp,
::mlir::transform::MatchStructuredClassifyContractionDimsOp,
::mlir::transform::MatchStructuredClassifyConvolutionDimsOp,
::mlir::transform::MatchStructuredDimOp,
::mlir::transform::MatchStructuredElementalBitwidthOp,
::mlir::transform::MatchStructuredInitOp,
::mlir::transform::MatchStructuredInputOp,
::mlir::transform::MatchStructuredNumInitsOp,
::mlir::transform::MatchStructuredNumInputsOp,
::mlir::transform::MatchStructuredOp,
::mlir::transform::MatchStructuredRankOp,
::mlir::transform::MatchStructuredResultOp,
::mlir::transform::MatchStructuredYieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgMatchOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgMatchOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformParamTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformParamTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgMatchOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformValueHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformValueHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgMatchOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::TransformValueHandleTypeInterface>(type)))) || ((::llvm::isa<::mlir::transform::AffineMapParamType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be transform operation or value handle or , but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgMatchOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::TransformParamTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::TransformValueHandleTypeInterface>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of any transform handle or parameter, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_LinalgMatchOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::TransformValueHandleTypeInterface>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be transform operation or value handle, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgMatchOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgMatchOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgMatchOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgMatchOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgMatchOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgMatchOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgMatchOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgMatchOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgMatchOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgMatchOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgMatchOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgMatchOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::transform::FailurePropagationModeAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Silenceable error propagation policy";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_LinalgMatchOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_LinalgMatchOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_region_constraint_LinalgMatchOps0(
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
// ::mlir::transform::MatchStructuredBodyOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchStructuredBodyOpGenericAdaptorBase::MatchStructuredBodyOpGenericAdaptorBase(MatchStructuredBodyOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::std::optional<uint64_t> MatchStructuredBodyOpGenericAdaptorBase::getReductionPosition() {
  auto attr = getReductionPositionAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

::mlir::UnitAttr MatchStructuredBodyOpGenericAdaptorBase::getPassthroughAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().passthrough);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredBodyOpGenericAdaptorBase::getPassthrough() {
  auto attr = getPassthroughAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MatchStructuredBodyOpGenericAdaptorBase::getElementwiseAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().elementwise);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredBodyOpGenericAdaptorBase::getElementwise() {
  auto attr = getElementwiseAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::std::optional< ::mlir::ArrayAttr > MatchStructuredBodyOpGenericAdaptorBase::getContraction() {
  auto attr = getContractionAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

} // namespace detail
MatchStructuredBodyOpAdaptor::MatchStructuredBodyOpAdaptor(MatchStructuredBodyOp op) : MatchStructuredBodyOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredBodyOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_contraction = getProperties().contraction; (void)tblgen_contraction;
  auto tblgen_elementwise = getProperties().elementwise; (void)tblgen_elementwise;
  auto tblgen_passthrough = getProperties().passthrough; (void)tblgen_passthrough;
  auto tblgen_reduction_position = getProperties().reduction_position; (void)tblgen_reduction_position;

  if (tblgen_reduction_position && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_reduction_position))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_reduction_position).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.match.structured.body' op ""attribute 'reduction_position' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_passthrough && !((::llvm::isa<::mlir::UnitAttr>(tblgen_passthrough))))
    return emitError(loc, "'transform.match.structured.body' op ""attribute 'passthrough' failed to satisfy constraint: unit attribute");

  if (tblgen_elementwise && !((::llvm::isa<::mlir::UnitAttr>(tblgen_elementwise))))
    return emitError(loc, "'transform.match.structured.body' op ""attribute 'elementwise' failed to satisfy constraint: unit attribute");

  if (tblgen_contraction && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_contraction))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_contraction), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::StringAttr>(attr))); }))))
    return emitError(loc, "'transform.match.structured.body' op ""attribute 'contraction' failed to satisfy constraint: string array attribute");
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredBodyOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.contraction;
       auto attr = dict.get("contraction");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `contraction` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.elementwise;
       auto attr = dict.get("elementwise");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `elementwise` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.passthrough;
       auto attr = dict.get("passthrough");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `passthrough` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.reduction_position;
       auto attr = dict.get("reduction_position");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reduction_position` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatchStructuredBodyOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.contraction;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("contraction",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.elementwise;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("elementwise",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.passthrough;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("passthrough",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reduction_position;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reduction_position",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatchStructuredBodyOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.contraction.getAsOpaquePointer()), 
    llvm::hash_value(prop.elementwise.getAsOpaquePointer()), 
    llvm::hash_value(prop.passthrough.getAsOpaquePointer()), 
    llvm::hash_value(prop.reduction_position.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatchStructuredBodyOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "contraction")
      return prop.contraction;

    if (name == "elementwise")
      return prop.elementwise;

    if (name == "passthrough")
      return prop.passthrough;

    if (name == "reduction_position")
      return prop.reduction_position;
  return std::nullopt;
}

void MatchStructuredBodyOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "contraction") {
       prop.contraction = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.contraction)>>(value);
       return;
    }

    if (name == "elementwise") {
       prop.elementwise = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.elementwise)>>(value);
       return;
    }

    if (name == "passthrough") {
       prop.passthrough = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.passthrough)>>(value);
       return;
    }

    if (name == "reduction_position") {
       prop.reduction_position = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reduction_position)>>(value);
       return;
    }
}

void MatchStructuredBodyOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.contraction) attrs.append("contraction", prop.contraction);

    if (prop.elementwise) attrs.append("elementwise", prop.elementwise);

    if (prop.passthrough) attrs.append("passthrough", prop.passthrough);

    if (prop.reduction_position) attrs.append("reduction_position", prop.reduction_position);
}

::llvm::LogicalResult MatchStructuredBodyOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getContractionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps2(attr, "contraction", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getElementwiseAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "elementwise", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPassthroughAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "passthrough", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReductionPositionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps0(attr, "reduction_position", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredBodyOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.contraction)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.elementwise)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.passthrough)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.reduction_position)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredBodyOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.contraction);

  writer.writeOptionalAttribute(prop.elementwise);

  writer.writeOptionalAttribute(prop.passthrough);

  writer.writeOptionalAttribute(prop.reduction_position);
}

::std::optional<uint64_t> MatchStructuredBodyOp::getReductionPosition() {
  auto attr = getReductionPositionAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

bool MatchStructuredBodyOp::getPassthrough() {
  auto attr = getPassthroughAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool MatchStructuredBodyOp::getElementwise() {
  auto attr = getElementwiseAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::std::optional< ::mlir::ArrayAttr > MatchStructuredBodyOp::getContraction() {
  auto attr = getContractionAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void MatchStructuredBodyOp::setReductionPosition(::std::optional<uint64_t> attrValue) {
    auto &odsProp = getProperties().reduction_position;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue);
    else
      odsProp = nullptr;
}

void MatchStructuredBodyOp::setPassthrough(bool attrValue) {
    auto &odsProp = getProperties().passthrough;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredBodyOp::setElementwise(bool attrValue) {
    auto &odsProp = getProperties().elementwise;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredBodyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand_handle, /*optional*/::mlir::IntegerAttr reduction_position, /*optional*/::mlir::UnitAttr passthrough, /*optional*/::mlir::UnitAttr elementwise, /*optional*/::mlir::ArrayAttr contraction) {
  odsState.addOperands(operand_handle);
  if (reduction_position) {
    odsState.getOrAddProperties<Properties>().reduction_position = reduction_position;
  }
  if (passthrough) {
    odsState.getOrAddProperties<Properties>().passthrough = passthrough;
  }
  if (elementwise) {
    odsState.getOrAddProperties<Properties>().elementwise = elementwise;
  }
  if (contraction) {
    odsState.getOrAddProperties<Properties>().contraction = contraction;
  }
}

void MatchStructuredBodyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, /*optional*/::mlir::IntegerAttr reduction_position, /*optional*/::mlir::UnitAttr passthrough, /*optional*/::mlir::UnitAttr elementwise, /*optional*/::mlir::ArrayAttr contraction) {
  odsState.addOperands(operand_handle);
  if (reduction_position) {
    odsState.getOrAddProperties<Properties>().reduction_position = reduction_position;
  }
  if (passthrough) {
    odsState.getOrAddProperties<Properties>().passthrough = passthrough;
  }
  if (elementwise) {
    odsState.getOrAddProperties<Properties>().elementwise = elementwise;
  }
  if (contraction) {
    odsState.getOrAddProperties<Properties>().contraction = contraction;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchStructuredBodyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand_handle, /*optional*/::mlir::IntegerAttr reduction_position, /*optional*/bool passthrough, /*optional*/bool elementwise, /*optional*/::mlir::ArrayAttr contraction) {
  odsState.addOperands(operand_handle);
  if (reduction_position) {
    odsState.getOrAddProperties<Properties>().reduction_position = reduction_position;
  }
  if (passthrough) {
    odsState.getOrAddProperties<Properties>().passthrough = ((passthrough) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (elementwise) {
    odsState.getOrAddProperties<Properties>().elementwise = ((elementwise) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (contraction) {
    odsState.getOrAddProperties<Properties>().contraction = contraction;
  }
}

void MatchStructuredBodyOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, /*optional*/::mlir::IntegerAttr reduction_position, /*optional*/bool passthrough, /*optional*/bool elementwise, /*optional*/::mlir::ArrayAttr contraction) {
  odsState.addOperands(operand_handle);
  if (reduction_position) {
    odsState.getOrAddProperties<Properties>().reduction_position = reduction_position;
  }
  if (passthrough) {
    odsState.getOrAddProperties<Properties>().passthrough = ((passthrough) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (elementwise) {
    odsState.getOrAddProperties<Properties>().elementwise = ((elementwise) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (contraction) {
    odsState.getOrAddProperties<Properties>().contraction = contraction;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchStructuredBodyOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MatchStructuredBodyOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MatchStructuredBodyOp::verifyInvariantsImpl() {
  auto tblgen_contraction = getProperties().contraction; (void)tblgen_contraction;
  auto tblgen_elementwise = getProperties().elementwise; (void)tblgen_elementwise;
  auto tblgen_passthrough = getProperties().passthrough; (void)tblgen_passthrough;
  auto tblgen_reduction_position = getProperties().reduction_position; (void)tblgen_reduction_position;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps0(*this, tblgen_reduction_position, "reduction_position")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_passthrough, "passthrough")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_elementwise, "elementwise")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps2(*this, tblgen_contraction, "contraction")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredBodyOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MatchStructuredBodyOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(&operand_handleRawOperand, 1);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::mlir::Type operand_handleRawType{};
  ::llvm::ArrayRef<::mlir::Type> operand_handleTypes(&operand_handleRawType, 1);

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperand))
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
    operand_handleRawType = type;
  }
  if (parser.resolveOperands(operand_handleOperands, operand_handleTypes, operand_handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredBodyOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPassthroughAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("passthrough");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getElementwiseAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("elementwise");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperandHandle().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformHandleTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredBodyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredClassifyContractionDimsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
MatchStructuredClassifyContractionDimsOpAdaptor::MatchStructuredClassifyContractionDimsOpAdaptor(MatchStructuredClassifyContractionDimsOp op) : MatchStructuredClassifyContractionDimsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredClassifyContractionDimsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void MatchStructuredClassifyContractionDimsOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "batch");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "m");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "n");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "k");
}

void MatchStructuredClassifyContractionDimsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type batch, ::mlir::Type m, ::mlir::Type n, ::mlir::Type k, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  odsState.addTypes(batch);
  odsState.addTypes(m);
  odsState.addTypes(n);
  odsState.addTypes(k);
}

void MatchStructuredClassifyContractionDimsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  assert(resultTypes.size() == 4u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchStructuredClassifyContractionDimsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 4u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult MatchStructuredClassifyContractionDimsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredClassifyContractionDimsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchStructuredClassifyContractionDimsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(&operand_handleRawOperand, 1);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperand))
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
  if (parser.resolveOperands(operand_handleOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredClassifyContractionDimsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredClassifyContractionDimsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredClassifyConvolutionDimsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
MatchStructuredClassifyConvolutionDimsOpAdaptor::MatchStructuredClassifyConvolutionDimsOpAdaptor(MatchStructuredClassifyConvolutionDimsOp op) : MatchStructuredClassifyConvolutionDimsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredClassifyConvolutionDimsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void MatchStructuredClassifyConvolutionDimsOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "batch");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "output_image");
  auto resultGroup2 = getODSResults(2);
  if (!resultGroup2.empty())
    setNameFn(*resultGroup2.begin(), "output_channel");
  auto resultGroup3 = getODSResults(3);
  if (!resultGroup3.empty())
    setNameFn(*resultGroup3.begin(), "filter_loop");
  auto resultGroup4 = getODSResults(4);
  if (!resultGroup4.empty())
    setNameFn(*resultGroup4.begin(), "input_channel");
  auto resultGroup5 = getODSResults(5);
  if (!resultGroup5.empty())
    setNameFn(*resultGroup5.begin(), "depth");
  auto resultGroup6 = getODSResults(6);
  if (!resultGroup6.empty())
    setNameFn(*resultGroup6.begin(), "strides");
  auto resultGroup7 = getODSResults(7);
  if (!resultGroup7.empty())
    setNameFn(*resultGroup7.begin(), "dilations");
}

void MatchStructuredClassifyConvolutionDimsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type batch, ::mlir::Type output_image, ::mlir::Type output_channel, ::mlir::Type filter_loop, ::mlir::Type input_channel, ::mlir::Type depth, ::mlir::Type strides, ::mlir::Type dilations, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  odsState.addTypes(batch);
  odsState.addTypes(output_image);
  odsState.addTypes(output_channel);
  odsState.addTypes(filter_loop);
  odsState.addTypes(input_channel);
  odsState.addTypes(depth);
  odsState.addTypes(strides);
  odsState.addTypes(dilations);
}

void MatchStructuredClassifyConvolutionDimsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  assert(resultTypes.size() == 8u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchStructuredClassifyConvolutionDimsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 8u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult MatchStructuredClassifyConvolutionDimsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSResults(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSResults(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSResults(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSResults(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSResults(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup7 = getODSResults(7);

    for (auto v : valueGroup7) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredClassifyConvolutionDimsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchStructuredClassifyConvolutionDimsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(&operand_handleRawOperand, 1);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperand))
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
  if (parser.resolveOperands(operand_handleOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredClassifyConvolutionDimsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredClassifyConvolutionDimsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredDimOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchStructuredDimOpGenericAdaptorBase::MatchStructuredDimOpGenericAdaptorBase(MatchStructuredDimOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::llvm::ArrayRef<int64_t> MatchStructuredDimOpGenericAdaptorBase::getRawDimList() {
  auto attr = getRawDimListAttr();
  return attr;
}

::mlir::UnitAttr MatchStructuredDimOpGenericAdaptorBase::getIsInvertedAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_inverted);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredDimOpGenericAdaptorBase::getIsInverted() {
  auto attr = getIsInvertedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MatchStructuredDimOpGenericAdaptorBase::getIsAllAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_all);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredDimOpGenericAdaptorBase::getIsAll() {
  auto attr = getIsAllAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MatchStructuredDimOpGenericAdaptorBase::getParallelAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().parallel);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredDimOpGenericAdaptorBase::getParallel() {
  auto attr = getParallelAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MatchStructuredDimOpGenericAdaptorBase::getReductionAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().reduction);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredDimOpGenericAdaptorBase::getReduction() {
  auto attr = getReductionAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
MatchStructuredDimOpAdaptor::MatchStructuredDimOpAdaptor(MatchStructuredDimOp op) : MatchStructuredDimOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredDimOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_is_all = getProperties().is_all; (void)tblgen_is_all;
  auto tblgen_is_inverted = getProperties().is_inverted; (void)tblgen_is_inverted;
  auto tblgen_parallel = getProperties().parallel; (void)tblgen_parallel;
  auto tblgen_raw_dim_list = getProperties().raw_dim_list; (void)tblgen_raw_dim_list;
  if (!tblgen_raw_dim_list) return emitError(loc, "'transform.match.structured.dim' op ""requires attribute 'raw_dim_list'");
  auto tblgen_reduction = getProperties().reduction; (void)tblgen_reduction;

  if (tblgen_raw_dim_list && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_raw_dim_list))))
    return emitError(loc, "'transform.match.structured.dim' op ""attribute 'raw_dim_list' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_is_inverted && !((::llvm::isa<::mlir::UnitAttr>(tblgen_is_inverted))))
    return emitError(loc, "'transform.match.structured.dim' op ""attribute 'is_inverted' failed to satisfy constraint: unit attribute");

  if (tblgen_is_all && !((::llvm::isa<::mlir::UnitAttr>(tblgen_is_all))))
    return emitError(loc, "'transform.match.structured.dim' op ""attribute 'is_all' failed to satisfy constraint: unit attribute");

  if (tblgen_parallel && !((::llvm::isa<::mlir::UnitAttr>(tblgen_parallel))))
    return emitError(loc, "'transform.match.structured.dim' op ""attribute 'parallel' failed to satisfy constraint: unit attribute");

  if (tblgen_reduction && !((::llvm::isa<::mlir::UnitAttr>(tblgen_reduction))))
    return emitError(loc, "'transform.match.structured.dim' op ""attribute 'reduction' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatchStructuredDimOp::getODSResultIndexAndLength(unsigned index) {
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

::llvm::LogicalResult MatchStructuredDimOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.is_all;
       auto attr = dict.get("is_all");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `is_all` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.is_inverted;
       auto attr = dict.get("is_inverted");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `is_inverted` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.parallel;
       auto attr = dict.get("parallel");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `parallel` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.raw_dim_list;
       auto attr = dict.get("raw_dim_list");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `raw_dim_list` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.reduction;
       auto attr = dict.get("reduction");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reduction` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatchStructuredDimOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.is_all;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("is_all",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.is_inverted;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("is_inverted",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.parallel;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("parallel",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.raw_dim_list;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("raw_dim_list",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reduction;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reduction",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatchStructuredDimOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.is_all.getAsOpaquePointer()), 
    llvm::hash_value(prop.is_inverted.getAsOpaquePointer()), 
    llvm::hash_value(prop.parallel.getAsOpaquePointer()), 
    llvm::hash_value(prop.raw_dim_list.getAsOpaquePointer()), 
    llvm::hash_value(prop.reduction.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatchStructuredDimOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "is_all")
      return prop.is_all;

    if (name == "is_inverted")
      return prop.is_inverted;

    if (name == "parallel")
      return prop.parallel;

    if (name == "raw_dim_list")
      return prop.raw_dim_list;

    if (name == "reduction")
      return prop.reduction;
  return std::nullopt;
}

void MatchStructuredDimOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "is_all") {
       prop.is_all = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.is_all)>>(value);
       return;
    }

    if (name == "is_inverted") {
       prop.is_inverted = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.is_inverted)>>(value);
       return;
    }

    if (name == "parallel") {
       prop.parallel = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.parallel)>>(value);
       return;
    }

    if (name == "raw_dim_list") {
       prop.raw_dim_list = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.raw_dim_list)>>(value);
       return;
    }

    if (name == "reduction") {
       prop.reduction = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reduction)>>(value);
       return;
    }
}

void MatchStructuredDimOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.is_all) attrs.append("is_all", prop.is_all);

    if (prop.is_inverted) attrs.append("is_inverted", prop.is_inverted);

    if (prop.parallel) attrs.append("parallel", prop.parallel);

    if (prop.raw_dim_list) attrs.append("raw_dim_list", prop.raw_dim_list);

    if (prop.reduction) attrs.append("reduction", prop.reduction);
}

::llvm::LogicalResult MatchStructuredDimOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIsAllAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "is_all", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIsInvertedAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "is_inverted", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getParallelAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "parallel", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRawDimListAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps3(attr, "raw_dim_list", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReductionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "reduction", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredDimOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.is_all)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.is_inverted)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.parallel)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.raw_dim_list)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.reduction)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredDimOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.is_all);

  writer.writeOptionalAttribute(prop.is_inverted);

  writer.writeOptionalAttribute(prop.parallel);
  writer.writeAttribute(prop.raw_dim_list);

  writer.writeOptionalAttribute(prop.reduction);
}

::llvm::ArrayRef<int64_t> MatchStructuredDimOp::getRawDimList() {
  auto attr = getRawDimListAttr();
  return attr;
}

bool MatchStructuredDimOp::getIsInverted() {
  auto attr = getIsInvertedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool MatchStructuredDimOp::getIsAll() {
  auto attr = getIsAllAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool MatchStructuredDimOp::getParallel() {
  auto attr = getParallelAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool MatchStructuredDimOp::getReduction() {
  auto attr = getReductionAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void MatchStructuredDimOp::setRawDimList(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().raw_dim_list = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void MatchStructuredDimOp::setIsInverted(bool attrValue) {
    auto &odsProp = getProperties().is_inverted;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredDimOp::setIsAll(bool attrValue) {
    auto &odsProp = getProperties().is_all;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredDimOp::setParallel(bool attrValue) {
    auto &odsProp = getProperties().parallel;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredDimOp::setReduction(bool attrValue) {
    auto &odsProp = getProperties().reduction;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_dim_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all, /*optional*/::mlir::UnitAttr parallel, /*optional*/::mlir::UnitAttr reduction) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_dim_list = raw_dim_list;
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = is_inverted;
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = is_all;
  }
  if (parallel) {
    odsState.getOrAddProperties<Properties>().parallel = parallel;
  }
  if (reduction) {
    odsState.getOrAddProperties<Properties>().reduction = reduction;
  }
  if (result)
    odsState.addTypes(result);
}

void MatchStructuredDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_dim_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all, /*optional*/::mlir::UnitAttr parallel, /*optional*/::mlir::UnitAttr reduction) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_dim_list = raw_dim_list;
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = is_inverted;
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = is_all;
  }
  if (parallel) {
    odsState.getOrAddProperties<Properties>().parallel = parallel;
  }
  if (reduction) {
    odsState.getOrAddProperties<Properties>().reduction = reduction;
  }
  odsState.addTypes(resultTypes);
}

void MatchStructuredDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_dim_list, /*optional*/bool is_inverted, /*optional*/bool is_all, /*optional*/bool parallel, /*optional*/bool reduction) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_dim_list = odsBuilder.getDenseI64ArrayAttr(raw_dim_list);
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = ((is_inverted) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = ((is_all) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (parallel) {
    odsState.getOrAddProperties<Properties>().parallel = ((parallel) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (reduction) {
    odsState.getOrAddProperties<Properties>().reduction = ((reduction) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (result)
    odsState.addTypes(result);
}

void MatchStructuredDimOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_dim_list, /*optional*/bool is_inverted, /*optional*/bool is_all, /*optional*/bool parallel, /*optional*/bool reduction) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_dim_list = odsBuilder.getDenseI64ArrayAttr(raw_dim_list);
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = ((is_inverted) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = ((is_all) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (parallel) {
    odsState.getOrAddProperties<Properties>().parallel = ((parallel) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (reduction) {
    odsState.getOrAddProperties<Properties>().reduction = ((reduction) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(resultTypes);
}

void MatchStructuredDimOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MatchStructuredDimOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MatchStructuredDimOp::verifyInvariantsImpl() {
  auto tblgen_is_all = getProperties().is_all; (void)tblgen_is_all;
  auto tblgen_is_inverted = getProperties().is_inverted; (void)tblgen_is_inverted;
  auto tblgen_parallel = getProperties().parallel; (void)tblgen_parallel;
  auto tblgen_raw_dim_list = getProperties().raw_dim_list; (void)tblgen_raw_dim_list;
  if (!tblgen_raw_dim_list) return emitOpError("requires attribute 'raw_dim_list'");
  auto tblgen_reduction = getProperties().reduction; (void)tblgen_reduction;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps3(*this, tblgen_raw_dim_list, "raw_dim_list")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_is_inverted, "is_inverted")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_is_all, "is_all")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_parallel, "parallel")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_reduction, "reduction")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredDimOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MatchStructuredDimOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(&operand_handleRawOperand, 1);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::mlir::DenseI64ArrayAttr raw_dim_listAttr;
  ::mlir::UnitAttr is_invertedAttr;
  ::mlir::UnitAttr is_allAttr;
  ::mlir::Type operand_handleRawType{};
  ::llvm::ArrayRef<::mlir::Type> operand_handleTypes(&operand_handleRawType, 1);
  ::llvm::SmallVector<::mlir::Type, 1> resultTypes;

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperand))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();
  {
    auto odsResult = parseTransformMatchDims(parser, raw_dim_listAttr, is_invertedAttr, is_allAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<MatchStructuredDimOp::Properties>().raw_dim_list = raw_dim_listAttr;
    if (is_invertedAttr)
      result.getOrAddProperties<MatchStructuredDimOp::Properties>().is_inverted = is_invertedAttr;
    if (is_allAttr)
      result.getOrAddProperties<MatchStructuredDimOp::Properties>().is_all = is_allAttr;
  }
  if (parser.parseRSquare())
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
    ::mlir::Type resultType;
    auto odsResult = parseSemiFunctionType(parser, operand_handleRawType, resultType);
    if (odsResult) return ::mlir::failure();
    if (resultType)
      resultTypes.push_back(resultType);
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operand_handleOperands, operand_handleTypes, operand_handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredDimOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  _odsPrinter << "[";
  printTransformMatchDims(_odsPrinter, *this, getRawDimListAttr(), getIsInvertedAttr(), getIsAllAttr());
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("raw_dim_list");
  elidedAttrs.push_back("is_inverted");
  elidedAttrs.push_back("is_all");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsInvertedAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("is_inverted");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsAllAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("is_all");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getParallelAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("parallel");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getReductionAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("reduction");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getOperandHandle().getType(), (getResult() ? getResult().getType() : ::mlir::Type()));
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredDimOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredElementalBitwidthOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
MatchStructuredElementalBitwidthOpAdaptor::MatchStructuredElementalBitwidthOpAdaptor(MatchStructuredElementalBitwidthOp op) : MatchStructuredElementalBitwidthOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredElementalBitwidthOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void MatchStructuredElementalBitwidthOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  odsState.addTypes(result);
}

void MatchStructuredElementalBitwidthOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchStructuredElementalBitwidthOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult MatchStructuredElementalBitwidthOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredElementalBitwidthOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchStructuredElementalBitwidthOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(&operand_handleRawOperand, 1);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperand))
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
  if (parser.resolveOperands(operand_handleOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredElementalBitwidthOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredElementalBitwidthOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredInitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchStructuredInitOpGenericAdaptorBase::MatchStructuredInitOpGenericAdaptorBase(MatchStructuredInitOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::llvm::ArrayRef<int64_t> MatchStructuredInitOpGenericAdaptorBase::getRawPositionList() {
  auto attr = getRawPositionListAttr();
  return attr;
}

::mlir::UnitAttr MatchStructuredInitOpGenericAdaptorBase::getIsInvertedAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_inverted);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredInitOpGenericAdaptorBase::getIsInverted() {
  auto attr = getIsInvertedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MatchStructuredInitOpGenericAdaptorBase::getIsAllAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_all);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredInitOpGenericAdaptorBase::getIsAll() {
  auto attr = getIsAllAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MatchStructuredInitOpGenericAdaptorBase::getPermutationAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().permutation);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredInitOpGenericAdaptorBase::getPermutation() {
  auto attr = getPermutationAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MatchStructuredInitOpGenericAdaptorBase::getProjectedPermutationAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().projected_permutation);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredInitOpGenericAdaptorBase::getProjectedPermutation() {
  auto attr = getProjectedPermutationAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
MatchStructuredInitOpAdaptor::MatchStructuredInitOpAdaptor(MatchStructuredInitOp op) : MatchStructuredInitOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredInitOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_is_all = getProperties().is_all; (void)tblgen_is_all;
  auto tblgen_is_inverted = getProperties().is_inverted; (void)tblgen_is_inverted;
  auto tblgen_permutation = getProperties().permutation; (void)tblgen_permutation;
  auto tblgen_projected_permutation = getProperties().projected_permutation; (void)tblgen_projected_permutation;
  auto tblgen_raw_position_list = getProperties().raw_position_list; (void)tblgen_raw_position_list;
  if (!tblgen_raw_position_list) return emitError(loc, "'transform.match.structured.init' op ""requires attribute 'raw_position_list'");

  if (tblgen_raw_position_list && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_raw_position_list))))
    return emitError(loc, "'transform.match.structured.init' op ""attribute 'raw_position_list' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_is_inverted && !((::llvm::isa<::mlir::UnitAttr>(tblgen_is_inverted))))
    return emitError(loc, "'transform.match.structured.init' op ""attribute 'is_inverted' failed to satisfy constraint: unit attribute");

  if (tblgen_is_all && !((::llvm::isa<::mlir::UnitAttr>(tblgen_is_all))))
    return emitError(loc, "'transform.match.structured.init' op ""attribute 'is_all' failed to satisfy constraint: unit attribute");

  if (tblgen_permutation && !((::llvm::isa<::mlir::UnitAttr>(tblgen_permutation))))
    return emitError(loc, "'transform.match.structured.init' op ""attribute 'permutation' failed to satisfy constraint: unit attribute");

  if (tblgen_projected_permutation && !((::llvm::isa<::mlir::UnitAttr>(tblgen_projected_permutation))))
    return emitError(loc, "'transform.match.structured.init' op ""attribute 'projected_permutation' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatchStructuredInitOp::getODSResultIndexAndLength(unsigned index) {
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

::llvm::LogicalResult MatchStructuredInitOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.is_all;
       auto attr = dict.get("is_all");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `is_all` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.is_inverted;
       auto attr = dict.get("is_inverted");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `is_inverted` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.permutation;
       auto attr = dict.get("permutation");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `permutation` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.projected_permutation;
       auto attr = dict.get("projected_permutation");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `projected_permutation` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.raw_position_list;
       auto attr = dict.get("raw_position_list");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `raw_position_list` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatchStructuredInitOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.is_all;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("is_all",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.is_inverted;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("is_inverted",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.permutation;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("permutation",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.projected_permutation;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("projected_permutation",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.raw_position_list;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("raw_position_list",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatchStructuredInitOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.is_all.getAsOpaquePointer()), 
    llvm::hash_value(prop.is_inverted.getAsOpaquePointer()), 
    llvm::hash_value(prop.permutation.getAsOpaquePointer()), 
    llvm::hash_value(prop.projected_permutation.getAsOpaquePointer()), 
    llvm::hash_value(prop.raw_position_list.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatchStructuredInitOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "is_all")
      return prop.is_all;

    if (name == "is_inverted")
      return prop.is_inverted;

    if (name == "permutation")
      return prop.permutation;

    if (name == "projected_permutation")
      return prop.projected_permutation;

    if (name == "raw_position_list")
      return prop.raw_position_list;
  return std::nullopt;
}

void MatchStructuredInitOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "is_all") {
       prop.is_all = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.is_all)>>(value);
       return;
    }

    if (name == "is_inverted") {
       prop.is_inverted = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.is_inverted)>>(value);
       return;
    }

    if (name == "permutation") {
       prop.permutation = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.permutation)>>(value);
       return;
    }

    if (name == "projected_permutation") {
       prop.projected_permutation = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.projected_permutation)>>(value);
       return;
    }

    if (name == "raw_position_list") {
       prop.raw_position_list = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.raw_position_list)>>(value);
       return;
    }
}

void MatchStructuredInitOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.is_all) attrs.append("is_all", prop.is_all);

    if (prop.is_inverted) attrs.append("is_inverted", prop.is_inverted);

    if (prop.permutation) attrs.append("permutation", prop.permutation);

    if (prop.projected_permutation) attrs.append("projected_permutation", prop.projected_permutation);

    if (prop.raw_position_list) attrs.append("raw_position_list", prop.raw_position_list);
}

::llvm::LogicalResult MatchStructuredInitOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIsAllAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "is_all", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIsInvertedAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "is_inverted", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPermutationAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "permutation", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getProjectedPermutationAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "projected_permutation", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRawPositionListAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps3(attr, "raw_position_list", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredInitOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.is_all)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.is_inverted)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.permutation)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.projected_permutation)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.raw_position_list)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredInitOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.is_all);

  writer.writeOptionalAttribute(prop.is_inverted);

  writer.writeOptionalAttribute(prop.permutation);

  writer.writeOptionalAttribute(prop.projected_permutation);
  writer.writeAttribute(prop.raw_position_list);
}

::llvm::ArrayRef<int64_t> MatchStructuredInitOp::getRawPositionList() {
  auto attr = getRawPositionListAttr();
  return attr;
}

bool MatchStructuredInitOp::getIsInverted() {
  auto attr = getIsInvertedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool MatchStructuredInitOp::getIsAll() {
  auto attr = getIsAllAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool MatchStructuredInitOp::getPermutation() {
  auto attr = getPermutationAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool MatchStructuredInitOp::getProjectedPermutation() {
  auto attr = getProjectedPermutationAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void MatchStructuredInitOp::setRawPositionList(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().raw_position_list = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void MatchStructuredInitOp::setIsInverted(bool attrValue) {
    auto &odsProp = getProperties().is_inverted;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredInitOp::setIsAll(bool attrValue) {
    auto &odsProp = getProperties().is_all;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredInitOp::setPermutation(bool attrValue) {
    auto &odsProp = getProperties().permutation;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredInitOp::setProjectedPermutation(bool attrValue) {
    auto &odsProp = getProperties().projected_permutation;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredInitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all, /*optional*/::mlir::UnitAttr permutation, /*optional*/::mlir::UnitAttr projected_permutation) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_position_list = raw_position_list;
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = is_inverted;
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = is_all;
  }
  if (permutation) {
    odsState.getOrAddProperties<Properties>().permutation = permutation;
  }
  if (projected_permutation) {
    odsState.getOrAddProperties<Properties>().projected_permutation = projected_permutation;
  }
  if (result)
    odsState.addTypes(result);
}

void MatchStructuredInitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all, /*optional*/::mlir::UnitAttr permutation, /*optional*/::mlir::UnitAttr projected_permutation) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_position_list = raw_position_list;
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = is_inverted;
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = is_all;
  }
  if (permutation) {
    odsState.getOrAddProperties<Properties>().permutation = permutation;
  }
  if (projected_permutation) {
    odsState.getOrAddProperties<Properties>().projected_permutation = projected_permutation;
  }
  odsState.addTypes(resultTypes);
}

void MatchStructuredInitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted, /*optional*/bool is_all, /*optional*/bool permutation, /*optional*/bool projected_permutation) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_position_list = odsBuilder.getDenseI64ArrayAttr(raw_position_list);
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = ((is_inverted) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = ((is_all) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (permutation) {
    odsState.getOrAddProperties<Properties>().permutation = ((permutation) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (projected_permutation) {
    odsState.getOrAddProperties<Properties>().projected_permutation = ((projected_permutation) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (result)
    odsState.addTypes(result);
}

void MatchStructuredInitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted, /*optional*/bool is_all, /*optional*/bool permutation, /*optional*/bool projected_permutation) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_position_list = odsBuilder.getDenseI64ArrayAttr(raw_position_list);
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = ((is_inverted) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = ((is_all) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (permutation) {
    odsState.getOrAddProperties<Properties>().permutation = ((permutation) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (projected_permutation) {
    odsState.getOrAddProperties<Properties>().projected_permutation = ((projected_permutation) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(resultTypes);
}

void MatchStructuredInitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MatchStructuredInitOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MatchStructuredInitOp::verifyInvariantsImpl() {
  auto tblgen_is_all = getProperties().is_all; (void)tblgen_is_all;
  auto tblgen_is_inverted = getProperties().is_inverted; (void)tblgen_is_inverted;
  auto tblgen_permutation = getProperties().permutation; (void)tblgen_permutation;
  auto tblgen_projected_permutation = getProperties().projected_permutation; (void)tblgen_projected_permutation;
  auto tblgen_raw_position_list = getProperties().raw_position_list; (void)tblgen_raw_position_list;
  if (!tblgen_raw_position_list) return emitOpError("requires attribute 'raw_position_list'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps3(*this, tblgen_raw_position_list, "raw_position_list")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_is_inverted, "is_inverted")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_is_all, "is_all")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_permutation, "permutation")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_projected_permutation, "projected_permutation")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredInitOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MatchStructuredInitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(&operand_handleRawOperand, 1);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::mlir::DenseI64ArrayAttr raw_position_listAttr;
  ::mlir::UnitAttr is_invertedAttr;
  ::mlir::UnitAttr is_allAttr;
  ::mlir::Type operand_handleRawType{};
  ::llvm::ArrayRef<::mlir::Type> operand_handleTypes(&operand_handleRawType, 1);
  ::llvm::SmallVector<::mlir::Type, 1> resultTypes;

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperand))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();
  {
    auto odsResult = parseTransformMatchDims(parser, raw_position_listAttr, is_invertedAttr, is_allAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<MatchStructuredInitOp::Properties>().raw_position_list = raw_position_listAttr;
    if (is_invertedAttr)
      result.getOrAddProperties<MatchStructuredInitOp::Properties>().is_inverted = is_invertedAttr;
    if (is_allAttr)
      result.getOrAddProperties<MatchStructuredInitOp::Properties>().is_all = is_allAttr;
  }
  if (parser.parseRSquare())
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
    ::mlir::Type resultType;
    auto odsResult = parseSemiFunctionType(parser, operand_handleRawType, resultType);
    if (odsResult) return ::mlir::failure();
    if (resultType)
      resultTypes.push_back(resultType);
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operand_handleOperands, operand_handleTypes, operand_handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredInitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  _odsPrinter << "[";
  printTransformMatchDims(_odsPrinter, *this, getRawPositionListAttr(), getIsInvertedAttr(), getIsAllAttr());
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("raw_position_list");
  elidedAttrs.push_back("is_inverted");
  elidedAttrs.push_back("is_all");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsInvertedAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("is_inverted");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsAllAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("is_all");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPermutationAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("permutation");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getProjectedPermutationAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("projected_permutation");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getOperandHandle().getType(), (getResult() ? getResult().getType() : ::mlir::Type()));
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredInitOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredInputOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchStructuredInputOpGenericAdaptorBase::MatchStructuredInputOpGenericAdaptorBase(MatchStructuredInputOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::llvm::ArrayRef<int64_t> MatchStructuredInputOpGenericAdaptorBase::getRawPositionList() {
  auto attr = getRawPositionListAttr();
  return attr;
}

::mlir::UnitAttr MatchStructuredInputOpGenericAdaptorBase::getIsInvertedAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_inverted);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredInputOpGenericAdaptorBase::getIsInverted() {
  auto attr = getIsInvertedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MatchStructuredInputOpGenericAdaptorBase::getIsAllAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_all);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredInputOpGenericAdaptorBase::getIsAll() {
  auto attr = getIsAllAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MatchStructuredInputOpGenericAdaptorBase::getPermutationAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().permutation);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredInputOpGenericAdaptorBase::getPermutation() {
  auto attr = getPermutationAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MatchStructuredInputOpGenericAdaptorBase::getProjectedPermutationAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().projected_permutation);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredInputOpGenericAdaptorBase::getProjectedPermutation() {
  auto attr = getProjectedPermutationAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
MatchStructuredInputOpAdaptor::MatchStructuredInputOpAdaptor(MatchStructuredInputOp op) : MatchStructuredInputOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredInputOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_is_all = getProperties().is_all; (void)tblgen_is_all;
  auto tblgen_is_inverted = getProperties().is_inverted; (void)tblgen_is_inverted;
  auto tblgen_permutation = getProperties().permutation; (void)tblgen_permutation;
  auto tblgen_projected_permutation = getProperties().projected_permutation; (void)tblgen_projected_permutation;
  auto tblgen_raw_position_list = getProperties().raw_position_list; (void)tblgen_raw_position_list;
  if (!tblgen_raw_position_list) return emitError(loc, "'transform.match.structured.input' op ""requires attribute 'raw_position_list'");

  if (tblgen_raw_position_list && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_raw_position_list))))
    return emitError(loc, "'transform.match.structured.input' op ""attribute 'raw_position_list' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_is_inverted && !((::llvm::isa<::mlir::UnitAttr>(tblgen_is_inverted))))
    return emitError(loc, "'transform.match.structured.input' op ""attribute 'is_inverted' failed to satisfy constraint: unit attribute");

  if (tblgen_is_all && !((::llvm::isa<::mlir::UnitAttr>(tblgen_is_all))))
    return emitError(loc, "'transform.match.structured.input' op ""attribute 'is_all' failed to satisfy constraint: unit attribute");

  if (tblgen_permutation && !((::llvm::isa<::mlir::UnitAttr>(tblgen_permutation))))
    return emitError(loc, "'transform.match.structured.input' op ""attribute 'permutation' failed to satisfy constraint: unit attribute");

  if (tblgen_projected_permutation && !((::llvm::isa<::mlir::UnitAttr>(tblgen_projected_permutation))))
    return emitError(loc, "'transform.match.structured.input' op ""attribute 'projected_permutation' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatchStructuredInputOp::getODSResultIndexAndLength(unsigned index) {
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

::llvm::LogicalResult MatchStructuredInputOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.is_all;
       auto attr = dict.get("is_all");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `is_all` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.is_inverted;
       auto attr = dict.get("is_inverted");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `is_inverted` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.permutation;
       auto attr = dict.get("permutation");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `permutation` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.projected_permutation;
       auto attr = dict.get("projected_permutation");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `projected_permutation` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.raw_position_list;
       auto attr = dict.get("raw_position_list");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `raw_position_list` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatchStructuredInputOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.is_all;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("is_all",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.is_inverted;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("is_inverted",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.permutation;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("permutation",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.projected_permutation;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("projected_permutation",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.raw_position_list;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("raw_position_list",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatchStructuredInputOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.is_all.getAsOpaquePointer()), 
    llvm::hash_value(prop.is_inverted.getAsOpaquePointer()), 
    llvm::hash_value(prop.permutation.getAsOpaquePointer()), 
    llvm::hash_value(prop.projected_permutation.getAsOpaquePointer()), 
    llvm::hash_value(prop.raw_position_list.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatchStructuredInputOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "is_all")
      return prop.is_all;

    if (name == "is_inverted")
      return prop.is_inverted;

    if (name == "permutation")
      return prop.permutation;

    if (name == "projected_permutation")
      return prop.projected_permutation;

    if (name == "raw_position_list")
      return prop.raw_position_list;
  return std::nullopt;
}

void MatchStructuredInputOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "is_all") {
       prop.is_all = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.is_all)>>(value);
       return;
    }

    if (name == "is_inverted") {
       prop.is_inverted = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.is_inverted)>>(value);
       return;
    }

    if (name == "permutation") {
       prop.permutation = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.permutation)>>(value);
       return;
    }

    if (name == "projected_permutation") {
       prop.projected_permutation = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.projected_permutation)>>(value);
       return;
    }

    if (name == "raw_position_list") {
       prop.raw_position_list = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.raw_position_list)>>(value);
       return;
    }
}

void MatchStructuredInputOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.is_all) attrs.append("is_all", prop.is_all);

    if (prop.is_inverted) attrs.append("is_inverted", prop.is_inverted);

    if (prop.permutation) attrs.append("permutation", prop.permutation);

    if (prop.projected_permutation) attrs.append("projected_permutation", prop.projected_permutation);

    if (prop.raw_position_list) attrs.append("raw_position_list", prop.raw_position_list);
}

::llvm::LogicalResult MatchStructuredInputOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIsAllAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "is_all", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getIsInvertedAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "is_inverted", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPermutationAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "permutation", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getProjectedPermutationAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "projected_permutation", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRawPositionListAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps3(attr, "raw_position_list", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredInputOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.is_all)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.is_inverted)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.permutation)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.projected_permutation)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.raw_position_list)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredInputOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.is_all);

  writer.writeOptionalAttribute(prop.is_inverted);

  writer.writeOptionalAttribute(prop.permutation);

  writer.writeOptionalAttribute(prop.projected_permutation);
  writer.writeAttribute(prop.raw_position_list);
}

::llvm::ArrayRef<int64_t> MatchStructuredInputOp::getRawPositionList() {
  auto attr = getRawPositionListAttr();
  return attr;
}

bool MatchStructuredInputOp::getIsInverted() {
  auto attr = getIsInvertedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool MatchStructuredInputOp::getIsAll() {
  auto attr = getIsAllAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool MatchStructuredInputOp::getPermutation() {
  auto attr = getPermutationAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool MatchStructuredInputOp::getProjectedPermutation() {
  auto attr = getProjectedPermutationAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void MatchStructuredInputOp::setRawPositionList(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().raw_position_list = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void MatchStructuredInputOp::setIsInverted(bool attrValue) {
    auto &odsProp = getProperties().is_inverted;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredInputOp::setIsAll(bool attrValue) {
    auto &odsProp = getProperties().is_all;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredInputOp::setPermutation(bool attrValue) {
    auto &odsProp = getProperties().permutation;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredInputOp::setProjectedPermutation(bool attrValue) {
    auto &odsProp = getProperties().projected_permutation;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredInputOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all, /*optional*/::mlir::UnitAttr permutation, /*optional*/::mlir::UnitAttr projected_permutation) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_position_list = raw_position_list;
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = is_inverted;
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = is_all;
  }
  if (permutation) {
    odsState.getOrAddProperties<Properties>().permutation = permutation;
  }
  if (projected_permutation) {
    odsState.getOrAddProperties<Properties>().projected_permutation = projected_permutation;
  }
  if (result)
    odsState.addTypes(result);
}

void MatchStructuredInputOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all, /*optional*/::mlir::UnitAttr permutation, /*optional*/::mlir::UnitAttr projected_permutation) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_position_list = raw_position_list;
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = is_inverted;
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = is_all;
  }
  if (permutation) {
    odsState.getOrAddProperties<Properties>().permutation = permutation;
  }
  if (projected_permutation) {
    odsState.getOrAddProperties<Properties>().projected_permutation = projected_permutation;
  }
  odsState.addTypes(resultTypes);
}

void MatchStructuredInputOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted, /*optional*/bool is_all, /*optional*/bool permutation, /*optional*/bool projected_permutation) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_position_list = odsBuilder.getDenseI64ArrayAttr(raw_position_list);
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = ((is_inverted) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = ((is_all) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (permutation) {
    odsState.getOrAddProperties<Properties>().permutation = ((permutation) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (projected_permutation) {
    odsState.getOrAddProperties<Properties>().projected_permutation = ((projected_permutation) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (result)
    odsState.addTypes(result);
}

void MatchStructuredInputOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted, /*optional*/bool is_all, /*optional*/bool permutation, /*optional*/bool projected_permutation) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().raw_position_list = odsBuilder.getDenseI64ArrayAttr(raw_position_list);
  if (is_inverted) {
    odsState.getOrAddProperties<Properties>().is_inverted = ((is_inverted) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (is_all) {
    odsState.getOrAddProperties<Properties>().is_all = ((is_all) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (permutation) {
    odsState.getOrAddProperties<Properties>().permutation = ((permutation) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (projected_permutation) {
    odsState.getOrAddProperties<Properties>().projected_permutation = ((projected_permutation) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(resultTypes);
}

void MatchStructuredInputOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MatchStructuredInputOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MatchStructuredInputOp::verifyInvariantsImpl() {
  auto tblgen_is_all = getProperties().is_all; (void)tblgen_is_all;
  auto tblgen_is_inverted = getProperties().is_inverted; (void)tblgen_is_inverted;
  auto tblgen_permutation = getProperties().permutation; (void)tblgen_permutation;
  auto tblgen_projected_permutation = getProperties().projected_permutation; (void)tblgen_projected_permutation;
  auto tblgen_raw_position_list = getProperties().raw_position_list; (void)tblgen_raw_position_list;
  if (!tblgen_raw_position_list) return emitOpError("requires attribute 'raw_position_list'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps3(*this, tblgen_raw_position_list, "raw_position_list")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_is_inverted, "is_inverted")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_is_all, "is_all")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_permutation, "permutation")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_projected_permutation, "projected_permutation")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("result group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredInputOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MatchStructuredInputOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(&operand_handleRawOperand, 1);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::mlir::DenseI64ArrayAttr raw_position_listAttr;
  ::mlir::UnitAttr is_invertedAttr;
  ::mlir::UnitAttr is_allAttr;
  ::mlir::Type operand_handleRawType{};
  ::llvm::ArrayRef<::mlir::Type> operand_handleTypes(&operand_handleRawType, 1);
  ::llvm::SmallVector<::mlir::Type, 1> resultTypes;

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperand))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();
  {
    auto odsResult = parseTransformMatchDims(parser, raw_position_listAttr, is_invertedAttr, is_allAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<MatchStructuredInputOp::Properties>().raw_position_list = raw_position_listAttr;
    if (is_invertedAttr)
      result.getOrAddProperties<MatchStructuredInputOp::Properties>().is_inverted = is_invertedAttr;
    if (is_allAttr)
      result.getOrAddProperties<MatchStructuredInputOp::Properties>().is_all = is_allAttr;
  }
  if (parser.parseRSquare())
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
    ::mlir::Type resultType;
    auto odsResult = parseSemiFunctionType(parser, operand_handleRawType, resultType);
    if (odsResult) return ::mlir::failure();
    if (resultType)
      resultTypes.push_back(resultType);
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(operand_handleOperands, operand_handleTypes, operand_handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredInputOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  _odsPrinter << "[";
  printTransformMatchDims(_odsPrinter, *this, getRawPositionListAttr(), getIsInvertedAttr(), getIsAllAttr());
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("raw_position_list");
  elidedAttrs.push_back("is_inverted");
  elidedAttrs.push_back("is_all");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsInvertedAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("is_inverted");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsAllAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("is_all");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPermutationAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("permutation");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getProjectedPermutationAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("projected_permutation");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getOperandHandle().getType(), (getResult() ? getResult().getType() : ::mlir::Type()));
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredInputOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredNumInitsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
MatchStructuredNumInitsOpAdaptor::MatchStructuredNumInitsOpAdaptor(MatchStructuredNumInitsOp op) : MatchStructuredNumInitsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredNumInitsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void MatchStructuredNumInitsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  odsState.addTypes(result);
}

void MatchStructuredNumInitsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchStructuredNumInitsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult MatchStructuredNumInitsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredNumInitsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchStructuredNumInitsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(&operand_handleRawOperand, 1);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperand))
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
  if (parser.resolveOperands(operand_handleOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredNumInitsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredNumInitsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredNumInputsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
MatchStructuredNumInputsOpAdaptor::MatchStructuredNumInputsOpAdaptor(MatchStructuredNumInputsOp op) : MatchStructuredNumInputsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredNumInputsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void MatchStructuredNumInputsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  odsState.addTypes(result);
}

void MatchStructuredNumInputsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchStructuredNumInputsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult MatchStructuredNumInputsOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredNumInputsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchStructuredNumInputsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(&operand_handleRawOperand, 1);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperand))
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
  if (parser.resolveOperands(operand_handleOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredNumInputsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredNumInputsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchStructuredOpGenericAdaptorBase::MatchStructuredOpGenericAdaptorBase(MatchStructuredOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::std::optional<::mlir::transform::FailurePropagationMode> MatchStructuredOpGenericAdaptorBase::getFailurePropagationMode() {
  auto attr = getFailurePropagationModeAttr();
  return attr ? ::std::optional<::mlir::transform::FailurePropagationMode>(attr.getValue()) : (::std::nullopt);
}

} // namespace detail
MatchStructuredOpAdaptor::MatchStructuredOpAdaptor(MatchStructuredOp op) : MatchStructuredOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_failure_propagation_mode = getProperties().failure_propagation_mode; (void)tblgen_failure_propagation_mode;

  if (tblgen_failure_propagation_mode && !((::llvm::isa<::mlir::transform::FailurePropagationModeAttr>(tblgen_failure_propagation_mode))))
    return emitError(loc, "'transform.match.structured' op ""attribute 'failure_propagation_mode' failed to satisfy constraint: Silenceable error propagation policy");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatchStructuredOp::getODSResultIndexAndLength(unsigned index) {
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

::llvm::LogicalResult MatchStructuredOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.failure_propagation_mode;
       auto attr = dict.get("failure_propagation_mode");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `failure_propagation_mode` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatchStructuredOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.failure_propagation_mode;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("failure_propagation_mode",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatchStructuredOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.failure_propagation_mode.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatchStructuredOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "failure_propagation_mode")
      return prop.failure_propagation_mode;
  return std::nullopt;
}

void MatchStructuredOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "failure_propagation_mode") {
       prop.failure_propagation_mode = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.failure_propagation_mode)>>(value);
       return;
    }
}

void MatchStructuredOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.failure_propagation_mode) attrs.append("failure_propagation_mode", prop.failure_propagation_mode);
}

::llvm::LogicalResult MatchStructuredOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFailurePropagationModeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps4(attr, "failure_propagation_mode", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.failure_propagation_mode)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.failure_propagation_mode);
}

::std::optional<::mlir::transform::FailurePropagationMode> MatchStructuredOp::getFailurePropagationMode() {
  auto attr = getFailurePropagationModeAttr();
  return attr ? ::std::optional<::mlir::transform::FailurePropagationMode>(attr.getValue()) : (::std::nullopt);
}

void MatchStructuredOp::setFailurePropagationMode(::std::optional<::mlir::transform::FailurePropagationMode> attrValue) {
    auto &odsProp = getProperties().failure_propagation_mode;
    if (attrValue)
      odsProp = ::mlir::transform::FailurePropagationModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue);
    else
      odsProp = nullptr;
}

void MatchStructuredOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::Value current, /*optional*/::mlir::transform::FailurePropagationModeAttr failure_propagation_mode) {
  odsState.addOperands(current);
  if (failure_propagation_mode) {
    odsState.getOrAddProperties<Properties>().failure_propagation_mode = failure_propagation_mode;
  }
  (void)odsState.addRegion();
  odsState.addTypes(outputs);
}

void MatchStructuredOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MatchStructuredOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MatchStructuredOp::verifyInvariantsImpl() {
  auto tblgen_failure_propagation_mode = getProperties().failure_propagation_mode; (void)tblgen_failure_propagation_mode;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps4(*this, tblgen_failure_propagation_mode, "failure_propagation_mode")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_LinalgMatchOps0(*this, region, "body_region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MatchStructuredOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::transform::FailurePropagationModeAttr failure_propagation_modeAttr;
  ::mlir::OpAsmParser::UnresolvedOperand currentRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> currentOperands(&currentRawOperand, 1);  ::llvm::SMLoc currentOperandsLoc;
  (void)currentOperandsLoc;
  ::mlir::Type currentRawType{};
  ::llvm::ArrayRef<::mlir::Type> currentTypes(&currentRawType, 1);
  ::llvm::SmallVector<::mlir::Type, 1> outputsTypes;
  ::llvm::SmallVector<std::unique_ptr<::mlir::Region>, 2> fullRegions;
  if (::mlir::succeeded(parser.parseOptionalKeyword("failures"))) {
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    ::llvm::StringRef attrStr;
    ::mlir::NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseOptionalKeyword(&attrStr, {"propagate","suppress"})) {
      ::mlir::StringAttr attrVal;
      ::mlir::OptionalParseResult parseResult =
        parser.parseOptionalAttribute(attrVal,
                                      parser.getBuilder().getNoneType(),
                                      "failure_propagation_mode", attrStorage);
      if (parseResult.has_value()) {
        if (failed(*parseResult))
          return ::mlir::failure();
        attrStr = attrVal.getValue();
      } else {
        return parser.emitError(loc, "expected string or keyword containing one of the following enum values for attribute 'failure_propagation_mode' [propagate, suppress]");
      }
    }
    if (!attrStr.empty()) {
      auto attrOptional = ::mlir::transform::symbolizeFailurePropagationMode(attrStr);
      if (!attrOptional)
        return parser.emitError(loc, "invalid ")
               << "failure_propagation_mode attribute specification: \"" << attrStr << '"';;

      failure_propagation_modeAttr = ::mlir::transform::FailurePropagationModeAttr::get(parser.getBuilder().getContext(), *attrOptional);
        result.getOrAddProperties<MatchStructuredOp::Properties>().failure_propagation_mode = failure_propagation_modeAttr;
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  }

  currentOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(currentRawOperand))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();
  {
    auto odsResult = parseSemiFunctionType(parser, currentRawType, outputsTypes);
    if (odsResult) return ::mlir::failure();
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDictWithKeyword(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
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
    ensureTerminator(*region, parser.getBuilder(), result.location);
  result.addRegions(fullRegions);
  result.addTypes(outputsTypes);
  if (parser.resolveOperands(currentOperands, currentTypes, currentOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getFailurePropagationModeAttr()) {
    _odsPrinter << ' ' << "failures";
    _odsPrinter << "(";

    {
      auto caseValue = *getFailurePropagationMode();
      auto caseValueStr = stringifyFailurePropagationMode(caseValue);
      _odsPrinter << caseValueStr;
    }
    _odsPrinter << ")";
  }
  _odsPrinter << ' ';
  _odsPrinter << getCurrent();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getCurrent().getType(), getOutputs().getTypes());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("failure_propagation_mode");
  _odsPrinter.printOptionalAttrDictWithKeyword((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ';
    llvm::interleaveComma(getOperation()->getRegions(), _odsPrinter, [&](::mlir::Region &region) {

  {
    bool printTerminator = true;
    if (auto *term = region.empty() ? nullptr : region.begin()->getTerminator()) {
      printTerminator = !term->getAttrDictionary().empty() ||
                        term->getNumOperands() != 0 ||
                        term->getNumResults() != 0;
    }
    _odsPrinter.printRegion(region, /*printEntryBlockArgs=*/true,
      /*printBlockTerminators=*/printTerminator);
  }
    });
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredRankOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
MatchStructuredRankOpAdaptor::MatchStructuredRankOpAdaptor(MatchStructuredRankOp op) : MatchStructuredRankOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredRankOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void MatchStructuredRankOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type rank, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  odsState.addTypes(rank);
}

void MatchStructuredRankOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle) {
  odsState.addOperands(operand_handle);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchStructuredRankOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult MatchStructuredRankOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredRankOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchStructuredRankOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(&operand_handleRawOperand, 1);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::mlir::Type operand_handleRawType{};
  ::llvm::ArrayRef<::mlir::Type> operand_handleTypes(&operand_handleRawType, 1);
  ::mlir::Type rankRawType{};
  ::llvm::ArrayRef<::mlir::Type> rankTypes(&rankRawType, 1);

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperand))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();
  {
    auto odsResult = parseSemiFunctionType(parser, operand_handleRawType, rankRawType);
    if (odsResult) return ::mlir::failure();
  }
  result.addTypes(rankTypes);
  if (parser.resolveOperands(operand_handleOperands, operand_handleTypes, operand_handleOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredRankOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  printSemiFunctionType(_odsPrinter, *this, getOperandHandle().getType(), getRank().getType());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredRankOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredResultOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MatchStructuredResultOpGenericAdaptorBase::MatchStructuredResultOpGenericAdaptorBase(MatchStructuredResultOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t MatchStructuredResultOpGenericAdaptorBase::getPosition() {
  auto attr = getPositionAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr MatchStructuredResultOpGenericAdaptorBase::getAnyAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().any);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredResultOpGenericAdaptorBase::getAny() {
  auto attr = getAnyAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr MatchStructuredResultOpGenericAdaptorBase::getSingleAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().single);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MatchStructuredResultOpGenericAdaptorBase::getSingle() {
  auto attr = getSingleAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
MatchStructuredResultOpAdaptor::MatchStructuredResultOpAdaptor(MatchStructuredResultOp op) : MatchStructuredResultOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredResultOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_any = getProperties().any; (void)tblgen_any;
  auto tblgen_position = getProperties().position; (void)tblgen_position;
  if (!tblgen_position) return emitError(loc, "'transform.match.structured.result' op ""requires attribute 'position'");
  auto tblgen_single = getProperties().single; (void)tblgen_single;

  if (tblgen_position && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_position))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_position).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.match.structured.result' op ""attribute 'position' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_any && !((::llvm::isa<::mlir::UnitAttr>(tblgen_any))))
    return emitError(loc, "'transform.match.structured.result' op ""attribute 'any' failed to satisfy constraint: unit attribute");

  if (tblgen_single && !((::llvm::isa<::mlir::UnitAttr>(tblgen_single))))
    return emitError(loc, "'transform.match.structured.result' op ""attribute 'single' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredResultOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.any;
       auto attr = dict.get("any");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `any` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.position;
       auto attr = dict.get("position");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `position` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.single;
       auto attr = dict.get("single");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `single` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MatchStructuredResultOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.any;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("any",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.position;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("position",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.single;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("single",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MatchStructuredResultOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.any.getAsOpaquePointer()), 
    llvm::hash_value(prop.position.getAsOpaquePointer()), 
    llvm::hash_value(prop.single.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MatchStructuredResultOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "any")
      return prop.any;

    if (name == "position")
      return prop.position;

    if (name == "single")
      return prop.single;
  return std::nullopt;
}

void MatchStructuredResultOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "any") {
       prop.any = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.any)>>(value);
       return;
    }

    if (name == "position") {
       prop.position = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.position)>>(value);
       return;
    }

    if (name == "single") {
       prop.single = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.single)>>(value);
       return;
    }
}

void MatchStructuredResultOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.any) attrs.append("any", prop.any);

    if (prop.position) attrs.append("position", prop.position);

    if (prop.single) attrs.append("single", prop.single);
}

::llvm::LogicalResult MatchStructuredResultOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAnyAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "any", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPositionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps0(attr, "position", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSingleAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(attr, "single", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredResultOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.any)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.position)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.single)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredResultOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.any);
  writer.writeAttribute(prop.position);

  writer.writeOptionalAttribute(prop.single);
}

uint64_t MatchStructuredResultOp::getPosition() {
  auto attr = getPositionAttr();
  return attr.getValue().getZExtValue();
}

bool MatchStructuredResultOp::getAny() {
  auto attr = getAnyAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

bool MatchStructuredResultOp::getSingle() {
  auto attr = getSingleAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void MatchStructuredResultOp::setPosition(uint64_t attrValue) {
  getProperties().position = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void MatchStructuredResultOp::setAny(bool attrValue) {
    auto &odsProp = getProperties().any;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredResultOp::setSingle(bool attrValue) {
    auto &odsProp = getProperties().single;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MatchStructuredResultOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand_handle, ::mlir::IntegerAttr position, /*optional*/::mlir::UnitAttr any, /*optional*/::mlir::UnitAttr single) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().position = position;
  if (any) {
    odsState.getOrAddProperties<Properties>().any = any;
  }
  if (single) {
    odsState.getOrAddProperties<Properties>().single = single;
  }
  odsState.addTypes(result);
}

void MatchStructuredResultOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::mlir::IntegerAttr position, /*optional*/::mlir::UnitAttr any, /*optional*/::mlir::UnitAttr single) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().position = position;
  if (any) {
    odsState.getOrAddProperties<Properties>().any = any;
  }
  if (single) {
    odsState.getOrAddProperties<Properties>().single = single;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchStructuredResultOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand_handle, uint64_t position, /*optional*/bool any, /*optional*/bool single) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().position = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), position);
  if (any) {
    odsState.getOrAddProperties<Properties>().any = ((any) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (single) {
    odsState.getOrAddProperties<Properties>().single = ((single) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(result);
}

void MatchStructuredResultOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, uint64_t position, /*optional*/bool any, /*optional*/bool single) {
  odsState.addOperands(operand_handle);
  odsState.getOrAddProperties<Properties>().position = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), position);
  if (any) {
    odsState.getOrAddProperties<Properties>().any = ((any) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (single) {
    odsState.getOrAddProperties<Properties>().single = ((single) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatchStructuredResultOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MatchStructuredResultOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MatchStructuredResultOp::verifyInvariantsImpl() {
  auto tblgen_any = getProperties().any; (void)tblgen_any;
  auto tblgen_position = getProperties().position; (void)tblgen_position;
  if (!tblgen_position) return emitOpError("requires attribute 'position'");
  auto tblgen_single = getProperties().single; (void)tblgen_single;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps0(*this, tblgen_position, "position")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_any, "any")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_LinalgMatchOps1(*this, tblgen_single, "single")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps5(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredResultOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MatchStructuredResultOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operand_handleRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operand_handleOperands(&operand_handleRawOperand, 1);  ::llvm::SMLoc operand_handleOperandsLoc;
  (void)operand_handleOperandsLoc;
  ::mlir::IntegerAttr positionAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  operand_handleOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operand_handleRawOperand))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(positionAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (positionAttr) result.getOrAddProperties<MatchStructuredResultOp::Properties>().position = positionAttr;
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("any"))) {
    result.getOrAddProperties<MatchStructuredResultOp::Properties>().any = parser.getBuilder().getUnitAttr();  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("single"))) {
    result.getOrAddProperties<MatchStructuredResultOp::Properties>().single = parser.getBuilder().getUnitAttr();  }
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
  if (parser.resolveOperands(operand_handleOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredResultOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperandHandle();
  _odsPrinter << "[";
  _odsPrinter.printAttributeWithoutType(getPositionAttr());
  _odsPrinter << "]";
  if (getAnyAttr()) {
    _odsPrinter << ' ' << "any";
  }
  if (getSingleAttr()) {
    _odsPrinter << ' ' << "single";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("position");
  elidedAttrs.push_back("any");
  elidedAttrs.push_back("single");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAnyAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("any");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSingleAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("single");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredResultOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredYieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
std::pair<unsigned, unsigned> MatchStructuredYieldOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

} // namespace detail
MatchStructuredYieldOpAdaptor::MatchStructuredYieldOpAdaptor(MatchStructuredYieldOp op) : MatchStructuredYieldOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MatchStructuredYieldOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MatchStructuredYieldOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::MutableOperandRange MatchStructuredYieldOp::getHandlesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

void MatchStructuredYieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange handles) {
  odsState.addOperands(handles);
}

void MatchStructuredYieldOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult MatchStructuredYieldOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_LinalgMatchOps4(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MatchStructuredYieldOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MatchStructuredYieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> handlesOperands;
  ::llvm::SMLoc handlesOperandsLoc;
  (void)handlesOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> handlesTypes;

  handlesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(handlesOperands))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalColon())) {

  if (parser.parseTypeList(handlesTypes))
    return ::mlir::failure();
  }
  if (parser.resolveOperands(handlesOperands, handlesTypes, handlesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MatchStructuredYieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getHandles();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (!getHandles().empty()) {
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getHandles().getTypes();
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredYieldOp)


#endif  // GET_OP_CLASSES

