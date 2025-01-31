/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: NVGPUTransformOps.td                                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyNVGPUToNVVMConversionPatternsOp,
::mlir::transform::CreateAsyncGroupsOp,
::mlir::transform::PipelineSharedMemoryCopiesOp,
::mlir::transform::RewriteCopyAsTmaOp,
::mlir::transform::RewriteMatmulAsMmaSyncOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_NVGPUTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_NVGPUTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_NVGPUTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPUTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_NVGPUTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_NVGPUTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPUTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_NVGPUTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::transform::FailurePropagationModeAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Silenceable error propagation policy";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_NVGPUTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_NVGPUTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyNVGPUToNVVMConversionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyNVGPUToNVVMConversionPatternsOpAdaptor::ApplyNVGPUToNVVMConversionPatternsOpAdaptor(ApplyNVGPUToNVVMConversionPatternsOp op) : ApplyNVGPUToNVVMConversionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyNVGPUToNVVMConversionPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyNVGPUToNVVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyNVGPUToNVVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyNVGPUToNVVMConversionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyNVGPUToNVVMConversionPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyNVGPUToNVVMConversionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyNVGPUToNVVMConversionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyNVGPUToNVVMConversionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyNVGPUToNVVMConversionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::CreateAsyncGroupsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CreateAsyncGroupsOpGenericAdaptorBase::CreateAsyncGroupsOpGenericAdaptorBase(CreateAsyncGroupsOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::UnitAttr CreateAsyncGroupsOpGenericAdaptorBase::getBypassL1Attr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().bypass_l1);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool CreateAsyncGroupsOpGenericAdaptorBase::getBypassL1() {
  auto attr = getBypassL1Attr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
CreateAsyncGroupsOpAdaptor::CreateAsyncGroupsOpAdaptor(CreateAsyncGroupsOp op) : CreateAsyncGroupsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult CreateAsyncGroupsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_bypass_l1 = getProperties().bypass_l1; (void)tblgen_bypass_l1;

  if (tblgen_bypass_l1 && !((::llvm::isa<::mlir::UnitAttr>(tblgen_bypass_l1))))
    return emitError(loc, "'transform.nvgpu.create_async_groups' op ""attribute 'bypass_l1' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

::llvm::LogicalResult CreateAsyncGroupsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.bypass_l1;
       auto attr = dict.get("bypass_l1");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `bypass_l1` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute CreateAsyncGroupsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.bypass_l1;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("bypass_l1",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CreateAsyncGroupsOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.bypass_l1.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CreateAsyncGroupsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "bypass_l1")
      return prop.bypass_l1;
  return std::nullopt;
}

void CreateAsyncGroupsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "bypass_l1") {
       prop.bypass_l1 = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.bypass_l1)>>(value);
       return;
    }
}

void CreateAsyncGroupsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.bypass_l1) attrs.append("bypass_l1", prop.bypass_l1);
}

::llvm::LogicalResult CreateAsyncGroupsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBypassL1AttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUTransformOps0(attr, "bypass_l1", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult CreateAsyncGroupsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.bypass_l1)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CreateAsyncGroupsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.bypass_l1);
}

bool CreateAsyncGroupsOp::getBypassL1() {
  auto attr = getBypassL1Attr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void CreateAsyncGroupsOp::setBypassL1(bool attrValue) {
    auto &odsProp = getProperties().bypass_l1;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void CreateAsyncGroupsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, /*optional*/::mlir::UnitAttr bypass_l1) {
  odsState.addOperands(target);
  if (bypass_l1) {
    odsState.getOrAddProperties<Properties>().bypass_l1 = bypass_l1;
  }
  odsState.addTypes(result);
}

void CreateAsyncGroupsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr bypass_l1) {
  odsState.addOperands(target);
  if (bypass_l1) {
    odsState.getOrAddProperties<Properties>().bypass_l1 = bypass_l1;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateAsyncGroupsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, /*optional*/bool bypass_l1) {
  odsState.addOperands(target);
  if (bypass_l1) {
    odsState.getOrAddProperties<Properties>().bypass_l1 = ((bypass_l1) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(result);
}

void CreateAsyncGroupsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/bool bypass_l1) {
  odsState.addOperands(target);
  if (bypass_l1) {
    odsState.getOrAddProperties<Properties>().bypass_l1 = ((bypass_l1) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateAsyncGroupsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<CreateAsyncGroupsOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult CreateAsyncGroupsOp::verifyInvariantsImpl() {
  auto tblgen_bypass_l1 = getProperties().bypass_l1; (void)tblgen_bypass_l1;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUTransformOps0(*this, tblgen_bypass_l1, "bypass_l1")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult CreateAsyncGroupsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CreateAsyncGroupsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void CreateAsyncGroupsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBypassL1Attr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("bypass_l1");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::CreateAsyncGroupsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PipelineSharedMemoryCopiesOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
PipelineSharedMemoryCopiesOpGenericAdaptorBase::PipelineSharedMemoryCopiesOpGenericAdaptorBase(PipelineSharedMemoryCopiesOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t PipelineSharedMemoryCopiesOpGenericAdaptorBase::getDepth() {
  auto attr = getDepthAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr PipelineSharedMemoryCopiesOpGenericAdaptorBase::getPeelEpilogueAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().peel_epilogue);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool PipelineSharedMemoryCopiesOpGenericAdaptorBase::getPeelEpilogue() {
  auto attr = getPeelEpilogueAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::transform::FailurePropagationModeAttr PipelineSharedMemoryCopiesOpGenericAdaptorBase::getFailurePropagationModeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::transform::FailurePropagationModeAttr>(getProperties().failure_propagation_mode);
  return attr;
}

::mlir::transform::FailurePropagationMode PipelineSharedMemoryCopiesOpGenericAdaptorBase::getFailurePropagationMode() {
  auto attr = getFailurePropagationModeAttr();
  return attr.getValue();
}

} // namespace detail
PipelineSharedMemoryCopiesOpAdaptor::PipelineSharedMemoryCopiesOpAdaptor(PipelineSharedMemoryCopiesOp op) : PipelineSharedMemoryCopiesOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult PipelineSharedMemoryCopiesOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_depth = getProperties().depth; (void)tblgen_depth;
  if (!tblgen_depth) return emitError(loc, "'transform.nvgpu.pipeline_shared_memory_copies' op ""requires attribute 'depth'");
  auto tblgen_failure_propagation_mode = getProperties().failure_propagation_mode; (void)tblgen_failure_propagation_mode;
  auto tblgen_peel_epilogue = getProperties().peel_epilogue; (void)tblgen_peel_epilogue;

  if (tblgen_depth && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_depth))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_depth).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.nvgpu.pipeline_shared_memory_copies' op ""attribute 'depth' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_peel_epilogue && !((::llvm::isa<::mlir::UnitAttr>(tblgen_peel_epilogue))))
    return emitError(loc, "'transform.nvgpu.pipeline_shared_memory_copies' op ""attribute 'peel_epilogue' failed to satisfy constraint: unit attribute");

  if (tblgen_failure_propagation_mode && !((::llvm::isa<::mlir::transform::FailurePropagationModeAttr>(tblgen_failure_propagation_mode))))
    return emitError(loc, "'transform.nvgpu.pipeline_shared_memory_copies' op ""attribute 'failure_propagation_mode' failed to satisfy constraint: Silenceable error propagation policy");
  return ::mlir::success();
}

::llvm::LogicalResult PipelineSharedMemoryCopiesOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.depth;
       auto attr = dict.get("depth");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `depth` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
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

  {
    auto &propStorage = prop.peel_epilogue;
       auto attr = dict.get("peel_epilogue");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `peel_epilogue` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute PipelineSharedMemoryCopiesOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.depth;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("depth",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.failure_propagation_mode;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("failure_propagation_mode",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.peel_epilogue;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("peel_epilogue",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code PipelineSharedMemoryCopiesOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.depth.getAsOpaquePointer()), 
    llvm::hash_value(prop.failure_propagation_mode.getAsOpaquePointer()), 
    llvm::hash_value(prop.peel_epilogue.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> PipelineSharedMemoryCopiesOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "depth")
      return prop.depth;

    if (name == "failure_propagation_mode")
      return prop.failure_propagation_mode;

    if (name == "peel_epilogue")
      return prop.peel_epilogue;
  return std::nullopt;
}

void PipelineSharedMemoryCopiesOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "depth") {
       prop.depth = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.depth)>>(value);
       return;
    }

    if (name == "failure_propagation_mode") {
       prop.failure_propagation_mode = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.failure_propagation_mode)>>(value);
       return;
    }

    if (name == "peel_epilogue") {
       prop.peel_epilogue = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.peel_epilogue)>>(value);
       return;
    }
}

void PipelineSharedMemoryCopiesOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.depth) attrs.append("depth", prop.depth);

    if (prop.failure_propagation_mode) attrs.append("failure_propagation_mode", prop.failure_propagation_mode);

    if (prop.peel_epilogue) attrs.append("peel_epilogue", prop.peel_epilogue);
}

::llvm::LogicalResult PipelineSharedMemoryCopiesOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDepthAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUTransformOps1(attr, "depth", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getFailurePropagationModeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUTransformOps2(attr, "failure_propagation_mode", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getPeelEpilogueAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUTransformOps0(attr, "peel_epilogue", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult PipelineSharedMemoryCopiesOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.depth)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.failure_propagation_mode)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.peel_epilogue)))
    return ::mlir::failure();
  return ::mlir::success();
}

void PipelineSharedMemoryCopiesOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.depth);

  writer.writeOptionalAttribute(prop.failure_propagation_mode);

  writer.writeOptionalAttribute(prop.peel_epilogue);
}

uint64_t PipelineSharedMemoryCopiesOp::getDepth() {
  auto attr = getDepthAttr();
  return attr.getValue().getZExtValue();
}

bool PipelineSharedMemoryCopiesOp::getPeelEpilogue() {
  auto attr = getPeelEpilogueAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::transform::FailurePropagationMode PipelineSharedMemoryCopiesOp::getFailurePropagationMode() {
  auto attr = getFailurePropagationModeAttr();
  return attr.getValue();
}

void PipelineSharedMemoryCopiesOp::setDepth(uint64_t attrValue) {
  getProperties().depth = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void PipelineSharedMemoryCopiesOp::setPeelEpilogue(bool attrValue) {
    auto &odsProp = getProperties().peel_epilogue;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void PipelineSharedMemoryCopiesOp::setFailurePropagationMode(::mlir::transform::FailurePropagationMode attrValue) {
  getProperties().failure_propagation_mode = ::mlir::transform::FailurePropagationModeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue);
}

void PipelineSharedMemoryCopiesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value for_op, ::mlir::IntegerAttr depth, /*optional*/::mlir::UnitAttr peel_epilogue, ::mlir::transform::FailurePropagationModeAttr failure_propagation_mode) {
  odsState.addOperands(for_op);
  odsState.getOrAddProperties<Properties>().depth = depth;
  if (peel_epilogue) {
    odsState.getOrAddProperties<Properties>().peel_epilogue = peel_epilogue;
  }
  if (failure_propagation_mode) {
    odsState.getOrAddProperties<Properties>().failure_propagation_mode = failure_propagation_mode;
  }
  odsState.addTypes(result);
}

void PipelineSharedMemoryCopiesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value for_op, ::mlir::IntegerAttr depth, /*optional*/::mlir::UnitAttr peel_epilogue, ::mlir::transform::FailurePropagationModeAttr failure_propagation_mode) {
  odsState.addOperands(for_op);
  odsState.getOrAddProperties<Properties>().depth = depth;
  if (peel_epilogue) {
    odsState.getOrAddProperties<Properties>().peel_epilogue = peel_epilogue;
  }
  if (failure_propagation_mode) {
    odsState.getOrAddProperties<Properties>().failure_propagation_mode = failure_propagation_mode;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PipelineSharedMemoryCopiesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value for_op, uint64_t depth, /*optional*/bool peel_epilogue, ::mlir::transform::FailurePropagationMode failure_propagation_mode) {
  odsState.addOperands(for_op);
  odsState.getOrAddProperties<Properties>().depth = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), depth);
  if (peel_epilogue) {
    odsState.getOrAddProperties<Properties>().peel_epilogue = ((peel_epilogue) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.getOrAddProperties<Properties>().failure_propagation_mode = ::mlir::transform::FailurePropagationModeAttr::get(odsBuilder.getContext(), failure_propagation_mode);
  odsState.addTypes(result);
}

void PipelineSharedMemoryCopiesOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value for_op, uint64_t depth, /*optional*/bool peel_epilogue, ::mlir::transform::FailurePropagationMode failure_propagation_mode) {
  odsState.addOperands(for_op);
  odsState.getOrAddProperties<Properties>().depth = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), depth);
  if (peel_epilogue) {
    odsState.getOrAddProperties<Properties>().peel_epilogue = ((peel_epilogue) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.getOrAddProperties<Properties>().failure_propagation_mode = ::mlir::transform::FailurePropagationModeAttr::get(odsBuilder.getContext(), failure_propagation_mode);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PipelineSharedMemoryCopiesOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<PipelineSharedMemoryCopiesOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void PipelineSharedMemoryCopiesOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.failure_propagation_mode)
    properties.failure_propagation_mode = ::mlir::transform::FailurePropagationModeAttr::get(odsBuilder.getContext(), ::mlir::transform::FailurePropagationMode::Suppress);
}

::llvm::LogicalResult PipelineSharedMemoryCopiesOp::verifyInvariantsImpl() {
  auto tblgen_depth = getProperties().depth; (void)tblgen_depth;
  if (!tblgen_depth) return emitOpError("requires attribute 'depth'");
  auto tblgen_failure_propagation_mode = getProperties().failure_propagation_mode; (void)tblgen_failure_propagation_mode;
  auto tblgen_peel_epilogue = getProperties().peel_epilogue; (void)tblgen_peel_epilogue;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUTransformOps1(*this, tblgen_depth, "depth")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUTransformOps0(*this, tblgen_peel_epilogue, "peel_epilogue")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_NVGPUTransformOps2(*this, tblgen_failure_propagation_mode, "failure_propagation_mode")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult PipelineSharedMemoryCopiesOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult PipelineSharedMemoryCopiesOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::transform::FailurePropagationModeAttr failure_propagation_modeAttr;
  ::mlir::OpAsmParser::UnresolvedOperand for_opRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> for_opOperands(&for_opRawOperand, 1);  ::llvm::SMLoc for_opOperandsLoc;
  (void)for_opOperandsLoc;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;
  if (parser.parseKeyword("failures"))
    return ::mlir::failure();
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
        result.getOrAddProperties<PipelineSharedMemoryCopiesOp::Properties>().failure_propagation_mode = failure_propagation_modeAttr;
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();

  for_opOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(for_opRawOperand))
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
  if (parser.resolveOperands(for_opOperands, allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void PipelineSharedMemoryCopiesOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "failures";
  _odsPrinter << "(";

  {
    auto caseValue = getFailurePropagationMode();
    auto caseValueStr = stringifyFailurePropagationMode(caseValue);
    _odsPrinter << caseValueStr;
  }
  _odsPrinter << ")";
  _odsPrinter << ' ';
  _odsPrinter << getForOp();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("failure_propagation_mode");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getPeelEpilogueAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("peel_epilogue");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getFailurePropagationModeAttr();
     if(attr && (attr == ::mlir::transform::FailurePropagationModeAttr::get(odsBuilder.getContext(), ::mlir::transform::FailurePropagationMode::Suppress)))
       elidedAttrs.push_back("failure_propagation_mode");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::PipelineSharedMemoryCopiesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::RewriteCopyAsTmaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
RewriteCopyAsTmaOpAdaptor::RewriteCopyAsTmaOpAdaptor(RewriteCopyAsTmaOp op) : RewriteCopyAsTmaOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult RewriteCopyAsTmaOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void RewriteCopyAsTmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void RewriteCopyAsTmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RewriteCopyAsTmaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult RewriteCopyAsTmaOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult RewriteCopyAsTmaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RewriteCopyAsTmaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void RewriteCopyAsTmaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::RewriteCopyAsTmaOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::RewriteMatmulAsMmaSyncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
RewriteMatmulAsMmaSyncOpAdaptor::RewriteMatmulAsMmaSyncOpAdaptor(RewriteMatmulAsMmaSyncOp op) : RewriteMatmulAsMmaSyncOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult RewriteMatmulAsMmaSyncOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void RewriteMatmulAsMmaSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target) {
  odsState.addOperands(target);
}

void RewriteMatmulAsMmaSyncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target) {
  odsState.addOperands(target);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RewriteMatmulAsMmaSyncOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult RewriteMatmulAsMmaSyncOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_NVGPUTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult RewriteMatmulAsMmaSyncOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RewriteMatmulAsMmaSyncOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
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

void RewriteMatmulAsMmaSyncOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
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
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::RewriteMatmulAsMmaSyncOp)


#endif  // GET_OP_CLASSES

