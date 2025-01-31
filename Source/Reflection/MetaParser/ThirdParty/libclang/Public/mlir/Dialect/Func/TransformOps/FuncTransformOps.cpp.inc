/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: FuncTransformOps.td                                                  *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyFuncToLLVMConversionPatternsOp,
::mlir::transform::CastAndCallOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_FuncTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_FuncTransformOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformValueHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformValueHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_FuncTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_FuncTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_FuncTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_FuncTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::SymbolRefAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: symbol reference attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_FuncTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_FuncTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_region_constraint_FuncTransformOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItemsOrLess(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with at most 1 blocks";
  }
  return ::mlir::success();
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFuncToLLVMConversionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyFuncToLLVMConversionPatternsOpAdaptor::ApplyFuncToLLVMConversionPatternsOpAdaptor(ApplyFuncToLLVMConversionPatternsOp op) : ApplyFuncToLLVMConversionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyFuncToLLVMConversionPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyFuncToLLVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyFuncToLLVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyFuncToLLVMConversionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyFuncToLLVMConversionPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyFuncToLLVMConversionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyFuncToLLVMConversionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyFuncToLLVMConversionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFuncToLLVMConversionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::CastAndCallOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CastAndCallOpGenericAdaptorBase::CastAndCallOpGenericAdaptorBase(CastAndCallOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

std::pair<unsigned, unsigned> CastAndCallOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::UnitAttr CastAndCallOpGenericAdaptorBase::getInsertAfterAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().insert_after);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool CastAndCallOpGenericAdaptorBase::getInsertAfter() {
  auto attr = getInsertAfterAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::std::optional< ::mlir::SymbolRefAttr > CastAndCallOpGenericAdaptorBase::getFunctionName() {
  auto attr = getFunctionNameAttr();
  return attr ? ::std::optional< ::mlir::SymbolRefAttr >(attr) : (::std::nullopt);
}

} // namespace detail
CastAndCallOpAdaptor::CastAndCallOpAdaptor(CastAndCallOp op) : CastAndCallOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult CastAndCallOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_function_name = getProperties().function_name; (void)tblgen_function_name;
  auto tblgen_insert_after = getProperties().insert_after; (void)tblgen_insert_after;

  if (tblgen_insert_after && !((::llvm::isa<::mlir::UnitAttr>(tblgen_insert_after))))
    return emitError(loc, "'transform.func.cast_and_call' op ""attribute 'insert_after' failed to satisfy constraint: unit attribute");

  if (tblgen_function_name && !((::llvm::isa<::mlir::SymbolRefAttr>(tblgen_function_name))))
    return emitError(loc, "'transform.func.cast_and_call' op ""attribute 'function_name' failed to satisfy constraint: symbol reference attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CastAndCallOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::MutableOperandRange CastAndCallOp::getInputsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange CastAndCallOp::getOutputsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange CastAndCallOp::getFunctionMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::llvm::LogicalResult CastAndCallOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.function_name;
       auto attr = dict.get("function_name");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `function_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.insert_after;
       auto attr = dict.get("insert_after");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `insert_after` in property conversion: " << attr;
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

::mlir::Attribute CastAndCallOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.function_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("function_name",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.insert_after;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("insert_after",
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

llvm::hash_code CastAndCallOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.function_name.getAsOpaquePointer()), 
    llvm::hash_value(prop.insert_after.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> CastAndCallOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "function_name")
      return prop.function_name;

    if (name == "insert_after")
      return prop.insert_after;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void CastAndCallOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "function_name") {
       prop.function_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.function_name)>>(value);
       return;
    }

    if (name == "insert_after") {
       prop.insert_after = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.insert_after)>>(value);
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

void CastAndCallOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.function_name) attrs.append("function_name", prop.function_name);

    if (prop.insert_after) attrs.append("insert_after", prop.insert_after);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::llvm::LogicalResult CastAndCallOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getFunctionNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_FuncTransformOps1(attr, "function_name", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getInsertAfterAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_FuncTransformOps0(attr, "insert_after", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult CastAndCallOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.function_name)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.insert_after)))
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

void CastAndCallOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.function_name);

  writer.writeOptionalAttribute(prop.insert_after);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

bool CastAndCallOp::getInsertAfter() {
  auto attr = getInsertAfterAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::std::optional< ::mlir::SymbolRefAttr > CastAndCallOp::getFunctionName() {
  auto attr = getFunctionNameAttr();
  return attr ? ::std::optional< ::mlir::SymbolRefAttr >(attr) : (::std::nullopt);
}

void CastAndCallOp::setInsertAfter(bool attrValue) {
    auto &odsProp = getProperties().insert_after;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void CastAndCallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value insertion_point, /*optional*/::mlir::UnitAttr insert_after, /*optional*/::mlir::Value inputs, /*optional*/::mlir::Value outputs, /*optional*/::mlir::SymbolRefAttr function_name, /*optional*/::mlir::Value function) {
  odsState.addOperands(insertion_point);
  if (inputs)
    odsState.addOperands(inputs);
  if (outputs)
    odsState.addOperands(outputs);
  if (function)
    odsState.addOperands(function);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (inputs ? 1 : 0), (outputs ? 1 : 0), (function ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (insert_after) {
    odsState.getOrAddProperties<Properties>().insert_after = insert_after;
  }
  if (function_name) {
    odsState.getOrAddProperties<Properties>().function_name = function_name;
  }
  (void)odsState.addRegion();
  odsState.addTypes(result);
}

void CastAndCallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value insertion_point, /*optional*/::mlir::UnitAttr insert_after, /*optional*/::mlir::Value inputs, /*optional*/::mlir::Value outputs, /*optional*/::mlir::SymbolRefAttr function_name, /*optional*/::mlir::Value function) {
  odsState.addOperands(insertion_point);
  if (inputs)
    odsState.addOperands(inputs);
  if (outputs)
    odsState.addOperands(outputs);
  if (function)
    odsState.addOperands(function);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (inputs ? 1 : 0), (outputs ? 1 : 0), (function ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (insert_after) {
    odsState.getOrAddProperties<Properties>().insert_after = insert_after;
  }
  if (function_name) {
    odsState.getOrAddProperties<Properties>().function_name = function_name;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CastAndCallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value insertion_point, /*optional*/bool insert_after, /*optional*/::mlir::Value inputs, /*optional*/::mlir::Value outputs, /*optional*/::mlir::SymbolRefAttr function_name, /*optional*/::mlir::Value function) {
  odsState.addOperands(insertion_point);
  if (inputs)
    odsState.addOperands(inputs);
  if (outputs)
    odsState.addOperands(outputs);
  if (function)
    odsState.addOperands(function);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (inputs ? 1 : 0), (outputs ? 1 : 0), (function ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (insert_after) {
    odsState.getOrAddProperties<Properties>().insert_after = ((insert_after) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (function_name) {
    odsState.getOrAddProperties<Properties>().function_name = function_name;
  }
  (void)odsState.addRegion();
  odsState.addTypes(result);
}

void CastAndCallOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value insertion_point, /*optional*/bool insert_after, /*optional*/::mlir::Value inputs, /*optional*/::mlir::Value outputs, /*optional*/::mlir::SymbolRefAttr function_name, /*optional*/::mlir::Value function) {
  odsState.addOperands(insertion_point);
  if (inputs)
    odsState.addOperands(inputs);
  if (outputs)
    odsState.addOperands(outputs);
  if (function)
    odsState.addOperands(function);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (inputs ? 1 : 0), (outputs ? 1 : 0), (function ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (insert_after) {
    odsState.getOrAddProperties<Properties>().insert_after = ((insert_after) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (function_name) {
    odsState.getOrAddProperties<Properties>().function_name = function_name;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CastAndCallOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<CastAndCallOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult CastAndCallOp::verifyInvariantsImpl() {
  auto tblgen_function_name = getProperties().function_name; (void)tblgen_function_name;
  auto tblgen_insert_after = getProperties().insert_after; (void)tblgen_insert_after;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_FuncTransformOps0(*this, tblgen_insert_after, "insert_after")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_FuncTransformOps1(*this, tblgen_function_name, "function_name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_FuncTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_FuncTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_FuncTransformOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_FuncTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_FuncTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_FuncTransformOps0(*this, region, "conversions", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::llvm::LogicalResult CastAndCallOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CastAndCallOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SymbolRefAttr function_nameAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> functionOperands;
  ::llvm::SMLoc functionOperandsLoc;
  (void)functionOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> inputsOperands;
  ::llvm::SMLoc inputsOperandsLoc;
  (void)inputsOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> outputsOperands;
  ::llvm::SMLoc outputsOperandsLoc;
  (void)outputsOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand insertion_pointRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> insertion_pointOperands(&insertion_pointRawOperand, 1);  ::llvm::SMLoc insertion_pointOperandsLoc;
  (void)insertion_pointOperandsLoc;
  std::unique_ptr<::mlir::Region> conversionsRegion = std::make_unique<::mlir::Region>();
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  ::mlir::OptionalParseResult parseResultfunction_nameAttr =
    parser.parseOptionalAttribute(function_nameAttr, parser.getBuilder().getType<::mlir::NoneType>());
  if (parseResultfunction_nameAttr.has_value() && failed(*parseResultfunction_nameAttr))
    return ::mlir::failure();
  if (parseResultfunction_nameAttr.has_value() && succeeded(*parseResultfunction_nameAttr))
  if (function_nameAttr) result.getOrAddProperties<CastAndCallOp::Properties>().function_name = function_nameAttr;
  if (function_nameAttr) {
  }

  {
    functionOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      functionOperands.push_back(operand);
    }
  }
  if (!functionOperands.empty()) {
  }
  if (::mlir::succeeded(parser.parseOptionalLParen())) {

  {
    inputsOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      inputsOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  if (::mlir::succeeded(parser.parseOptionalArrow())) {

  {
    outputsOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      outputsOperands.push_back(operand);
    }
  }
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("after"))) {
    result.getOrAddProperties<CastAndCallOp::Properties>().insert_after = parser.getBuilder().getUnitAttr();  } else {
  if (parser.parseKeyword("before"))
    return ::mlir::failure();
  }

  insertion_pointOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(insertion_pointRawOperand))
    return ::mlir::failure();

  {
     auto parseResult = parser.parseOptionalRegion(*conversionsRegion);
     if (parseResult.has_value() && failed(*parseResult))
       return ::mlir::failure();
  }
  if (!conversionsRegion->empty()) {

  if (conversionsRegion->empty()) conversionsRegion->emplaceBlock();
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
  result.addRegion(std::move(conversionsRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(inputsOperands.size()), static_cast<int32_t>(outputsOperands.size()), static_cast<int32_t>(functionOperands.size())}), result.getOrAddProperties<CastAndCallOp::Properties>().operandSegmentSizes.begin());
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(insertion_pointOperands, inputsOperands, outputsOperands, functionOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CastAndCallOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getFunctionNameAttr()) {
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getFunctionNameAttr());
  }
  if (getFunction()) {
    _odsPrinter << ' ';
    if (::mlir::Value value = getFunction())
      _odsPrinter << value;
  }
  if (getInputs()) {
    _odsPrinter << "(";
    if (::mlir::Value value = getInputs())
      _odsPrinter << value;
    _odsPrinter << ")";
  }
  if (getOutputs()) {
    _odsPrinter << ' ' << "->";
    _odsPrinter << ' ';
    if (::mlir::Value value = getOutputs())
      _odsPrinter << value;
  }
  if (getInsertAfterAttr()) {
    _odsPrinter << ' ' << "after";
  } else {
    _odsPrinter << ' ' << "before";
  }
  _odsPrinter << ' ';
  _odsPrinter << getInsertionPoint();
  if (!getConversions().empty()) {
    _odsPrinter << ' ';
    _odsPrinter.printRegion(getConversions());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("function_name");
  elidedAttrs.push_back("insert_after");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInsertAfterAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("insert_after");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::CastAndCallOp)


#endif  // GET_OP_CLASSES

