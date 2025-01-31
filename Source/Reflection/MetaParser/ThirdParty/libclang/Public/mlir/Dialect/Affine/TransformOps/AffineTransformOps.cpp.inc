/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: AffineTransformOps.td                                                *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::SimplifyBoundedAffineOpsOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_AffineTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_AffineTransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_AffineTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_AffineTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_AffineTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SimplifyBoundedAffineOpsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SimplifyBoundedAffineOpsOpGenericAdaptorBase::SimplifyBoundedAffineOpsOpGenericAdaptorBase(SimplifyBoundedAffineOpsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

std::pair<unsigned, unsigned> SimplifyBoundedAffineOpsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::llvm::ArrayRef<int64_t> SimplifyBoundedAffineOpsOpGenericAdaptorBase::getLowerBounds() {
  auto attr = getLowerBoundsAttr();
  return attr;
}

::llvm::ArrayRef<int64_t> SimplifyBoundedAffineOpsOpGenericAdaptorBase::getUpperBounds() {
  auto attr = getUpperBoundsAttr();
  return attr;
}

} // namespace detail
SimplifyBoundedAffineOpsOpAdaptor::SimplifyBoundedAffineOpsOpAdaptor(SimplifyBoundedAffineOpsOp op) : SimplifyBoundedAffineOpsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult SimplifyBoundedAffineOpsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_lower_bounds = getProperties().lower_bounds; (void)tblgen_lower_bounds;
  if (!tblgen_lower_bounds) return emitError(loc, "'transform.affine.simplify_bounded_affine_ops' op ""requires attribute 'lower_bounds'");
  auto tblgen_upper_bounds = getProperties().upper_bounds; (void)tblgen_upper_bounds;
  if (!tblgen_upper_bounds) return emitError(loc, "'transform.affine.simplify_bounded_affine_ops' op ""requires attribute 'upper_bounds'");

  if (tblgen_lower_bounds && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_lower_bounds))))
    return emitError(loc, "'transform.affine.simplify_bounded_affine_ops' op ""attribute 'lower_bounds' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_upper_bounds && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_upper_bounds))))
    return emitError(loc, "'transform.affine.simplify_bounded_affine_ops' op ""attribute 'upper_bounds' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SimplifyBoundedAffineOpsOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::MutableOperandRange SimplifyBoundedAffineOpsOp::getBoundedValuesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::llvm::LogicalResult SimplifyBoundedAffineOpsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.lower_bounds;
       auto attr = dict.get("lower_bounds");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `lower_bounds` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.upper_bounds;
       auto attr = dict.get("upper_bounds");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `upper_bounds` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SimplifyBoundedAffineOpsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.lower_bounds;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("lower_bounds",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.upper_bounds;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("upper_bounds",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SimplifyBoundedAffineOpsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.lower_bounds.getAsOpaquePointer()), 
    llvm::hash_value(prop.upper_bounds.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SimplifyBoundedAffineOpsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "lower_bounds")
      return prop.lower_bounds;

    if (name == "upper_bounds")
      return prop.upper_bounds;
  return std::nullopt;
}

void SimplifyBoundedAffineOpsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "lower_bounds") {
       prop.lower_bounds = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.lower_bounds)>>(value);
       return;
    }

    if (name == "upper_bounds") {
       prop.upper_bounds = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.upper_bounds)>>(value);
       return;
    }
}

void SimplifyBoundedAffineOpsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.lower_bounds) attrs.append("lower_bounds", prop.lower_bounds);

    if (prop.upper_bounds) attrs.append("upper_bounds", prop.upper_bounds);
}

::llvm::LogicalResult SimplifyBoundedAffineOpsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getLowerBoundsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AffineTransformOps0(attr, "lower_bounds", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUpperBoundsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_AffineTransformOps0(attr, "upper_bounds", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult SimplifyBoundedAffineOpsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.lower_bounds)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.upper_bounds)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SimplifyBoundedAffineOpsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.lower_bounds);
  writer.writeAttribute(prop.upper_bounds);
}

::llvm::ArrayRef<int64_t> SimplifyBoundedAffineOpsOp::getLowerBounds() {
  auto attr = getLowerBoundsAttr();
  return attr;
}

::llvm::ArrayRef<int64_t> SimplifyBoundedAffineOpsOp::getUpperBounds() {
  auto attr = getUpperBoundsAttr();
  return attr;
}

void SimplifyBoundedAffineOpsOp::setLowerBounds(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().lower_bounds = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void SimplifyBoundedAffineOpsOp::setUpperBounds(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().upper_bounds = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void SimplifyBoundedAffineOpsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::mlir::DenseI64ArrayAttr lower_bounds, ::mlir::DenseI64ArrayAttr upper_bounds) {
  odsState.addOperands(target);
  odsState.addOperands(bounded_values);
  odsState.getOrAddProperties<Properties>().lower_bounds = lower_bounds;
  odsState.getOrAddProperties<Properties>().upper_bounds = upper_bounds;
}

void SimplifyBoundedAffineOpsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::mlir::DenseI64ArrayAttr lower_bounds, ::mlir::DenseI64ArrayAttr upper_bounds) {
  odsState.addOperands(target);
  odsState.addOperands(bounded_values);
  odsState.getOrAddProperties<Properties>().lower_bounds = lower_bounds;
  odsState.getOrAddProperties<Properties>().upper_bounds = upper_bounds;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SimplifyBoundedAffineOpsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::llvm::ArrayRef<int64_t> lower_bounds, ::llvm::ArrayRef<int64_t> upper_bounds) {
  odsState.addOperands(target);
  odsState.addOperands(bounded_values);
  odsState.getOrAddProperties<Properties>().lower_bounds = odsBuilder.getDenseI64ArrayAttr(lower_bounds);
  odsState.getOrAddProperties<Properties>().upper_bounds = odsBuilder.getDenseI64ArrayAttr(upper_bounds);
}

void SimplifyBoundedAffineOpsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::llvm::ArrayRef<int64_t> lower_bounds, ::llvm::ArrayRef<int64_t> upper_bounds) {
  odsState.addOperands(target);
  odsState.addOperands(bounded_values);
  odsState.getOrAddProperties<Properties>().lower_bounds = odsBuilder.getDenseI64ArrayAttr(lower_bounds);
  odsState.getOrAddProperties<Properties>().upper_bounds = odsBuilder.getDenseI64ArrayAttr(upper_bounds);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SimplifyBoundedAffineOpsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<SimplifyBoundedAffineOpsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult SimplifyBoundedAffineOpsOp::verifyInvariantsImpl() {
  auto tblgen_lower_bounds = getProperties().lower_bounds; (void)tblgen_lower_bounds;
  if (!tblgen_lower_bounds) return emitOpError("requires attribute 'lower_bounds'");
  auto tblgen_upper_bounds = getProperties().upper_bounds; (void)tblgen_upper_bounds;
  if (!tblgen_upper_bounds) return emitOpError("requires attribute 'upper_bounds'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AffineTransformOps0(*this, tblgen_lower_bounds, "lower_bounds")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_AffineTransformOps0(*this, tblgen_upper_bounds, "upper_bounds")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AffineTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_AffineTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult SimplifyBoundedAffineOpsOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SimplifyBoundedAffineOpsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> bounded_valuesOperands;
  ::llvm::SMLoc bounded_valuesOperandsLoc;
  (void)bounded_valuesOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> bounded_valuesTypes;
  ::mlir::DenseI64ArrayAttr lower_boundsAttr;
  ::mlir::DenseI64ArrayAttr upper_boundsAttr;
  ::mlir::Type targetRawType{};
  ::llvm::ArrayRef<::mlir::Type> targetTypes(&targetRawType, 1);

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("with"))
    return ::mlir::failure();
  if (parser.parseLSquare())
    return ::mlir::failure();

  bounded_valuesOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(bounded_valuesOperands))
    return ::mlir::failure();
  if (!bounded_valuesOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(bounded_valuesTypes))
    return ::mlir::failure();
  }
  if (parser.parseRSquare())
    return ::mlir::failure();
  if (parser.parseKeyword("within"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(lower_boundsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (lower_boundsAttr) result.getOrAddProperties<SimplifyBoundedAffineOpsOp::Properties>().lower_bounds = lower_boundsAttr;
  if (parser.parseKeyword("and"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(upper_boundsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (upper_boundsAttr) result.getOrAddProperties<SimplifyBoundedAffineOpsOp::Properties>().upper_bounds = upper_boundsAttr;
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
  if (parser.resolveOperands(bounded_valuesOperands, bounded_valuesTypes, bounded_valuesOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SimplifyBoundedAffineOpsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "with";
  _odsPrinter << "[";
  if (!getBoundedValues().empty()) {
    _odsPrinter << getBoundedValues();
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getBoundedValues().getTypes();
  }
  _odsPrinter << "]";
  _odsPrinter << ' ' << "within";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getLowerBoundsAttr());
  _odsPrinter << ' ' << "and";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getUpperBoundsAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("lower_bounds");
  elidedAttrs.push_back("upper_bounds");
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::SimplifyBoundedAffineOpsOp)


#endif  // GET_OP_CLASSES

