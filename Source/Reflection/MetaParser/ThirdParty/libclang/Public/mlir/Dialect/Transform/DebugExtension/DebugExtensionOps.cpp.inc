/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: DebugExtensionOps.td                                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::DebugEmitParamAsRemarkOp,
::mlir::transform::DebugEmitRemarkAtOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_DebugExtensionOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformParamTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformParamTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_DebugExtensionOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_DebugExtensionOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type))) || ((::llvm::isa<::mlir::transform::TransformValueHandleTypeInterface>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any transform handle, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_DebugExtensionOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_DebugExtensionOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_DebugExtensionOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DebugEmitParamAsRemarkOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DebugEmitParamAsRemarkOpGenericAdaptorBase::DebugEmitParamAsRemarkOpGenericAdaptorBase(DebugEmitParamAsRemarkOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

std::pair<unsigned, unsigned> DebugEmitParamAsRemarkOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::std::optional< ::llvm::StringRef > DebugEmitParamAsRemarkOpGenericAdaptorBase::getMessage() {
  auto attr = getMessageAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

} // namespace detail
DebugEmitParamAsRemarkOpAdaptor::DebugEmitParamAsRemarkOpAdaptor(DebugEmitParamAsRemarkOp op) : DebugEmitParamAsRemarkOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult DebugEmitParamAsRemarkOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_message = getProperties().message; (void)tblgen_message;

  if (tblgen_message && !((::llvm::isa<::mlir::StringAttr>(tblgen_message))))
    return emitError(loc, "'transform.debug.emit_param_as_remark' op ""attribute 'message' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DebugEmitParamAsRemarkOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::MutableOperandRange DebugEmitParamAsRemarkOp::getAnchorMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::llvm::LogicalResult DebugEmitParamAsRemarkOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.message;
       auto attr = dict.get("message");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `message` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute DebugEmitParamAsRemarkOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.message;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("message",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code DebugEmitParamAsRemarkOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.message.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> DebugEmitParamAsRemarkOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "message")
      return prop.message;
  return std::nullopt;
}

void DebugEmitParamAsRemarkOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "message") {
       prop.message = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.message)>>(value);
       return;
    }
}

void DebugEmitParamAsRemarkOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.message) attrs.append("message", prop.message);
}

::llvm::LogicalResult DebugEmitParamAsRemarkOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMessageAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_DebugExtensionOps0(attr, "message", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult DebugEmitParamAsRemarkOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.message)))
    return ::mlir::failure();
  return ::mlir::success();
}

void DebugEmitParamAsRemarkOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.message);
}

::std::optional< ::llvm::StringRef > DebugEmitParamAsRemarkOp::getMessage() {
  auto attr = getMessageAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

void DebugEmitParamAsRemarkOp::setMessage(::std::optional<::llvm::StringRef> attrValue) {
    auto &odsProp = getProperties().message;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getStringAttr(*attrValue);
    else
      odsProp = nullptr;
}

void DebugEmitParamAsRemarkOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value param, /*optional*/::mlir::Value anchor, /*optional*/::mlir::StringAttr message) {
  odsState.addOperands(param);
  if (anchor)
    odsState.addOperands(anchor);
  if (message) {
    odsState.getOrAddProperties<Properties>().message = message;
  }
}

void DebugEmitParamAsRemarkOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value param, /*optional*/::mlir::Value anchor, /*optional*/::mlir::StringAttr message) {
  odsState.addOperands(param);
  if (anchor)
    odsState.addOperands(anchor);
  if (message) {
    odsState.getOrAddProperties<Properties>().message = message;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DebugEmitParamAsRemarkOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<DebugEmitParamAsRemarkOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult DebugEmitParamAsRemarkOp::verifyInvariantsImpl() {
  auto tblgen_message = getProperties().message; (void)tblgen_message;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_DebugExtensionOps0(*this, tblgen_message, "message")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_DebugExtensionOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_DebugExtensionOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult DebugEmitParamAsRemarkOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DebugEmitParamAsRemarkOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand paramRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> paramOperands(&paramRawOperand, 1);  ::llvm::SMLoc paramOperandsLoc;
  (void)paramOperandsLoc;
  ::mlir::StringAttr messageAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> anchorOperands;
  ::llvm::SMLoc anchorOperandsLoc;
  (void)anchorOperandsLoc;
  ::mlir::Type paramRawType{};
  ::llvm::ArrayRef<::mlir::Type> paramTypes(&paramRawType, 1);
  ::llvm::SmallVector<::mlir::Type, 1> anchorTypes;

  paramOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(paramRawOperand))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  if (parser.parseCustomAttributeWithFallback(messageAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (messageAttr) result.getOrAddProperties<DebugEmitParamAsRemarkOp::Properties>().message = messageAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("at"))) {

  {
    anchorOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      anchorOperands.push_back(operand);
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
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::transform::TransformParamTypeInterface type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    paramRawType = type;
  }
  if (::mlir::succeeded(parser.parseOptionalComma())) {

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      anchorTypes.push_back(optionalType);
    }
  }
  }
  if (parser.resolveOperands(paramOperands, paramTypes, paramOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(anchorOperands, anchorTypes, anchorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DebugEmitParamAsRemarkOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getParam();
  if (getMessageAttr()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getMessageAttr());
  }
  if (getAnchor()) {
    _odsPrinter << ' ' << "at";
    _odsPrinter << ' ';
    if (::mlir::Value value = getAnchor())
      _odsPrinter << value;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("message");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getParam().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::transform::TransformParamTypeInterface>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  if (getAnchor()) {
    _odsPrinter << ",";
    _odsPrinter << ' ';
    _odsPrinter << (getAnchor() ? ::llvm::ArrayRef<::mlir::Type>(getAnchor().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::DebugEmitParamAsRemarkOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DebugEmitRemarkAtOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DebugEmitRemarkAtOpGenericAdaptorBase::DebugEmitRemarkAtOpGenericAdaptorBase(DebugEmitRemarkAtOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::llvm::StringRef DebugEmitRemarkAtOpGenericAdaptorBase::getMessage() {
  auto attr = getMessageAttr();
  return attr.getValue();
}

} // namespace detail
DebugEmitRemarkAtOpAdaptor::DebugEmitRemarkAtOpAdaptor(DebugEmitRemarkAtOp op) : DebugEmitRemarkAtOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult DebugEmitRemarkAtOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_message = getProperties().message; (void)tblgen_message;
  if (!tblgen_message) return emitError(loc, "'transform.debug.emit_remark_at' op ""requires attribute 'message'");

  if (tblgen_message && !((::llvm::isa<::mlir::StringAttr>(tblgen_message))))
    return emitError(loc, "'transform.debug.emit_remark_at' op ""attribute 'message' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

::llvm::LogicalResult DebugEmitRemarkAtOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.message;
       auto attr = dict.get("message");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `message` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute DebugEmitRemarkAtOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.message;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("message",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code DebugEmitRemarkAtOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.message.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> DebugEmitRemarkAtOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "message")
      return prop.message;
  return std::nullopt;
}

void DebugEmitRemarkAtOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "message") {
       prop.message = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.message)>>(value);
       return;
    }
}

void DebugEmitRemarkAtOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.message) attrs.append("message", prop.message);
}

::llvm::LogicalResult DebugEmitRemarkAtOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMessageAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_DebugExtensionOps0(attr, "message", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult DebugEmitRemarkAtOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.message)))
    return ::mlir::failure();
  return ::mlir::success();
}

void DebugEmitRemarkAtOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.message);
}

::llvm::StringRef DebugEmitRemarkAtOp::getMessage() {
  auto attr = getMessageAttr();
  return attr.getValue();
}

void DebugEmitRemarkAtOp::setMessage(::llvm::StringRef attrValue) {
  getProperties().message = ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue);
}

void DebugEmitRemarkAtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value at, ::mlir::StringAttr message) {
  odsState.addOperands(at);
  odsState.getOrAddProperties<Properties>().message = message;
}

void DebugEmitRemarkAtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value at, ::mlir::StringAttr message) {
  odsState.addOperands(at);
  odsState.getOrAddProperties<Properties>().message = message;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DebugEmitRemarkAtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value at, ::llvm::StringRef message) {
  odsState.addOperands(at);
  odsState.getOrAddProperties<Properties>().message = odsBuilder.getStringAttr(message);
}

void DebugEmitRemarkAtOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value at, ::llvm::StringRef message) {
  odsState.addOperands(at);
  odsState.getOrAddProperties<Properties>().message = odsBuilder.getStringAttr(message);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DebugEmitRemarkAtOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<DebugEmitRemarkAtOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult DebugEmitRemarkAtOp::verifyInvariantsImpl() {
  auto tblgen_message = getProperties().message; (void)tblgen_message;
  if (!tblgen_message) return emitOpError("requires attribute 'message'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_DebugExtensionOps0(*this, tblgen_message, "message")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_DebugExtensionOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult DebugEmitRemarkAtOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult DebugEmitRemarkAtOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand atRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> atOperands(&atRawOperand, 1);  ::llvm::SMLoc atOperandsLoc;
  (void)atOperandsLoc;
  ::mlir::StringAttr messageAttr;
  ::mlir::Type atRawType{};
  ::llvm::ArrayRef<::mlir::Type> atTypes(&atRawType, 1);

  atOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(atRawOperand))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(messageAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (messageAttr) result.getOrAddProperties<DebugEmitRemarkAtOp::Properties>().message = messageAttr;
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
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    atRawType = type;
  }
  if (parser.resolveOperands(atOperands, atTypes, atOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DebugEmitRemarkAtOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getAt();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMessageAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("message");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getAt().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::DebugEmitRemarkAtOp)


#endif  // GET_OP_CLASSES

