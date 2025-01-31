/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: GPUTransformOps.td                                                   *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::transform::ApplyGPURewritePatternsOp,
::mlir::transform::ApplyGPUSubgroupReduceToNVVMConversionPatternsOp,
::mlir::transform::ApplyGPUToNVVMConversionPatternsOp,
::mlir::transform::ApplyGPUWwmaToNVVMConversionPatternsOp,
::mlir::transform::ApplyUnrollVectorsSubgroupMmaOp,
::mlir::transform::EliminateBarriersOp,
::mlir::transform::MapForallToBlocks,
::mlir::transform::MapNestedForallToThreads
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

static ::llvm::LogicalResult __mlir_ods_local_type_constraint_GPUTransformOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::transform::TransformHandleTypeInterface>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be TransformHandleTypeInterface instance, but got " << type;
  }
  return ::mlir::success();
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUTransformOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUTransformOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUTransformOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::llvm::LogicalResult __mlir_ods_local_attr_constraint_GPUTransformOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_GPUTransformOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyGPURewritePatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyGPURewritePatternsOpAdaptor::ApplyGPURewritePatternsOpAdaptor(ApplyGPURewritePatternsOp op) : ApplyGPURewritePatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyGPURewritePatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyGPURewritePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyGPURewritePatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyGPURewritePatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyGPURewritePatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyGPURewritePatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyGPURewritePatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyGPURewritePatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyGPURewritePatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyGPUSubgroupReduceToNVVMConversionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyGPUSubgroupReduceToNVVMConversionPatternsOpAdaptor::ApplyGPUSubgroupReduceToNVVMConversionPatternsOpAdaptor(ApplyGPUSubgroupReduceToNVVMConversionPatternsOp op) : ApplyGPUSubgroupReduceToNVVMConversionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyGPUSubgroupReduceToNVVMConversionPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyGPUSubgroupReduceToNVVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyGPUSubgroupReduceToNVVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyGPUSubgroupReduceToNVVMConversionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyGPUSubgroupReduceToNVVMConversionPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyGPUSubgroupReduceToNVVMConversionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyGPUSubgroupReduceToNVVMConversionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyGPUSubgroupReduceToNVVMConversionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyGPUSubgroupReduceToNVVMConversionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyGPUToNVVMConversionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyGPUToNVVMConversionPatternsOpAdaptor::ApplyGPUToNVVMConversionPatternsOpAdaptor(ApplyGPUToNVVMConversionPatternsOp op) : ApplyGPUToNVVMConversionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyGPUToNVVMConversionPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyGPUToNVVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyGPUToNVVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyGPUToNVVMConversionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyGPUToNVVMConversionPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyGPUToNVVMConversionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyGPUToNVVMConversionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyGPUToNVVMConversionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyGPUToNVVMConversionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyGPUWwmaToNVVMConversionPatternsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
ApplyGPUWwmaToNVVMConversionPatternsOpAdaptor::ApplyGPUWwmaToNVVMConversionPatternsOpAdaptor(ApplyGPUWwmaToNVVMConversionPatternsOp op) : ApplyGPUWwmaToNVVMConversionPatternsOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyGPUWwmaToNVVMConversionPatternsOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void ApplyGPUWwmaToNVVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void ApplyGPUWwmaToNVVMConversionPatternsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyGPUWwmaToNVVMConversionPatternsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult ApplyGPUWwmaToNVVMConversionPatternsOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult ApplyGPUWwmaToNVVMConversionPatternsOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyGPUWwmaToNVVMConversionPatternsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ApplyGPUWwmaToNVVMConversionPatternsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyGPUWwmaToNVVMConversionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyUnrollVectorsSubgroupMmaOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ApplyUnrollVectorsSubgroupMmaOpGenericAdaptorBase::ApplyUnrollVectorsSubgroupMmaOpGenericAdaptorBase(ApplyUnrollVectorsSubgroupMmaOp op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

uint64_t ApplyUnrollVectorsSubgroupMmaOpGenericAdaptorBase::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

uint64_t ApplyUnrollVectorsSubgroupMmaOpGenericAdaptorBase::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

uint64_t ApplyUnrollVectorsSubgroupMmaOpGenericAdaptorBase::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
ApplyUnrollVectorsSubgroupMmaOpAdaptor::ApplyUnrollVectorsSubgroupMmaOpAdaptor(ApplyUnrollVectorsSubgroupMmaOp op) : ApplyUnrollVectorsSubgroupMmaOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult ApplyUnrollVectorsSubgroupMmaOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitError(loc, "'transform.apply_patterns.gpu.unroll_vectors_subgroup_mma' op ""requires attribute 'k'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitError(loc, "'transform.apply_patterns.gpu.unroll_vectors_subgroup_mma' op ""requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitError(loc, "'transform.apply_patterns.gpu.unroll_vectors_subgroup_mma' op ""requires attribute 'n'");

  if (tblgen_m && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_m))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_m).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.apply_patterns.gpu.unroll_vectors_subgroup_mma' op ""attribute 'm' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_n && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_n))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_n).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.apply_patterns.gpu.unroll_vectors_subgroup_mma' op ""attribute 'n' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_k && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_k))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_k).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.apply_patterns.gpu.unroll_vectors_subgroup_mma' op ""attribute 'k' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

::llvm::LogicalResult ApplyUnrollVectorsSubgroupMmaOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.k;
       auto attr = dict.get("k");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `k` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
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
    auto &propStorage = prop.n;
       auto attr = dict.get("n");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `n` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ApplyUnrollVectorsSubgroupMmaOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.k;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("k",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.m;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("m",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.n;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("n",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ApplyUnrollVectorsSubgroupMmaOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.k.getAsOpaquePointer()), 
    llvm::hash_value(prop.m.getAsOpaquePointer()), 
    llvm::hash_value(prop.n.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ApplyUnrollVectorsSubgroupMmaOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "k")
      return prop.k;

    if (name == "m")
      return prop.m;

    if (name == "n")
      return prop.n;
  return std::nullopt;
}

void ApplyUnrollVectorsSubgroupMmaOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "k") {
       prop.k = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.k)>>(value);
       return;
    }

    if (name == "m") {
       prop.m = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.m)>>(value);
       return;
    }

    if (name == "n") {
       prop.n = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.n)>>(value);
       return;
    }
}

void ApplyUnrollVectorsSubgroupMmaOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.k) attrs.append("k", prop.k);

    if (prop.m) attrs.append("m", prop.m);

    if (prop.n) attrs.append("n", prop.n);
}

::llvm::LogicalResult ApplyUnrollVectorsSubgroupMmaOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getKAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(attr, "k", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(attr, "m", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(attr, "n", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult ApplyUnrollVectorsSubgroupMmaOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.k)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.m)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.n)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ApplyUnrollVectorsSubgroupMmaOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.k);
  writer.writeAttribute(prop.m);
  writer.writeAttribute(prop.n);
}

uint64_t ApplyUnrollVectorsSubgroupMmaOp::getM() {
  auto attr = getMAttr();
  return attr.getValue().getZExtValue();
}

uint64_t ApplyUnrollVectorsSubgroupMmaOp::getN() {
  auto attr = getNAttr();
  return attr.getValue().getZExtValue();
}

uint64_t ApplyUnrollVectorsSubgroupMmaOp::getK() {
  auto attr = getKAttr();
  return attr.getValue().getZExtValue();
}

void ApplyUnrollVectorsSubgroupMmaOp::setM(uint64_t attrValue) {
  getProperties().m = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void ApplyUnrollVectorsSubgroupMmaOp::setN(uint64_t attrValue) {
  getProperties().n = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void ApplyUnrollVectorsSubgroupMmaOp::setK(uint64_t attrValue) {
  getProperties().k = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void ApplyUnrollVectorsSubgroupMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k) {
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
}

void ApplyUnrollVectorsSubgroupMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k) {
  odsState.getOrAddProperties<Properties>().m = m;
  odsState.getOrAddProperties<Properties>().n = n;
  odsState.getOrAddProperties<Properties>().k = k;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyUnrollVectorsSubgroupMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint64_t m, uint64_t n, uint64_t k) {
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), k);
}

void ApplyUnrollVectorsSubgroupMmaOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint64_t m, uint64_t n, uint64_t k) {
  odsState.getOrAddProperties<Properties>().m = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), m);
  odsState.getOrAddProperties<Properties>().n = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), n);
  odsState.getOrAddProperties<Properties>().k = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), k);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ApplyUnrollVectorsSubgroupMmaOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<ApplyUnrollVectorsSubgroupMmaOp::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult ApplyUnrollVectorsSubgroupMmaOp::verifyInvariantsImpl() {
  auto tblgen_k = getProperties().k; (void)tblgen_k;
  if (!tblgen_k) return emitOpError("requires attribute 'k'");
  auto tblgen_m = getProperties().m; (void)tblgen_m;
  if (!tblgen_m) return emitOpError("requires attribute 'm'");
  auto tblgen_n = getProperties().n; (void)tblgen_n;
  if (!tblgen_n) return emitOpError("requires attribute 'n'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(*this, tblgen_m, "m")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(*this, tblgen_n, "n")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(*this, tblgen_k, "k")))
    return ::mlir::failure();
  return ::mlir::success();
}

::llvm::LogicalResult ApplyUnrollVectorsSubgroupMmaOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ApplyUnrollVectorsSubgroupMmaOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::IntegerAttr mAttr;
  ::mlir::IntegerAttr nAttr;
  ::mlir::IntegerAttr kAttr;
  if (parser.parseLSquare())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (mAttr) result.getOrAddProperties<ApplyUnrollVectorsSubgroupMmaOp::Properties>().m = mAttr;
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(nAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (nAttr) result.getOrAddProperties<ApplyUnrollVectorsSubgroupMmaOp::Properties>().n = nAttr;
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(kAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (kAttr) result.getOrAddProperties<ApplyUnrollVectorsSubgroupMmaOp::Properties>().k = kAttr;
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
  return ::mlir::success();
}

void ApplyUnrollVectorsSubgroupMmaOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << "[";
  _odsPrinter.printAttributeWithoutType(getMAttr());
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getNAttr());
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getKAttr());
  _odsPrinter << "]";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("m");
  elidedAttrs.push_back("n");
  elidedAttrs.push_back("k");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyUnrollVectorsSubgroupMmaOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EliminateBarriersOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
} // namespace detail
EliminateBarriersOpAdaptor::EliminateBarriersOpAdaptor(EliminateBarriersOp op) : EliminateBarriersOpGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult EliminateBarriersOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

void EliminateBarriersOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void EliminateBarriersOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EliminateBarriersOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::llvm::LogicalResult EliminateBarriersOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::llvm::LogicalResult EliminateBarriersOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult EliminateBarriersOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void EliminateBarriersOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::EliminateBarriersOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MapForallToBlocks definitions
//===----------------------------------------------------------------------===//

namespace detail {
MapForallToBlocksGenericAdaptorBase::MapForallToBlocksGenericAdaptorBase(MapForallToBlocks op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::DenseI64ArrayAttr MapForallToBlocksGenericAdaptorBase::getGridDimsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().grid_dims);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::llvm::ArrayRef<int64_t> MapForallToBlocksGenericAdaptorBase::getGridDims() {
  auto attr = getGridDimsAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getDenseI64ArrayAttr({});
  return attr;
}

::mlir::UnitAttr MapForallToBlocksGenericAdaptorBase::getGenerateGpuLaunchAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().generate_gpu_launch);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool MapForallToBlocksGenericAdaptorBase::getGenerateGpuLaunch() {
  auto attr = getGenerateGpuLaunchAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
MapForallToBlocksAdaptor::MapForallToBlocksAdaptor(MapForallToBlocks op) : MapForallToBlocksGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MapForallToBlocksAdaptor::verify(::mlir::Location loc) {
  auto tblgen_generate_gpu_launch = getProperties().generate_gpu_launch; (void)tblgen_generate_gpu_launch;
  auto tblgen_grid_dims = getProperties().grid_dims; (void)tblgen_grid_dims;

  if (tblgen_grid_dims && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_grid_dims))))
    return emitError(loc, "'transform.gpu.map_forall_to_blocks' op ""attribute 'grid_dims' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_generate_gpu_launch && !((::llvm::isa<::mlir::UnitAttr>(tblgen_generate_gpu_launch))))
    return emitError(loc, "'transform.gpu.map_forall_to_blocks' op ""attribute 'generate_gpu_launch' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

::llvm::LogicalResult MapForallToBlocks::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.generate_gpu_launch;
       auto attr = dict.get("generate_gpu_launch");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `generate_gpu_launch` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.grid_dims;
       auto attr = dict.get("grid_dims");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `grid_dims` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MapForallToBlocks::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.generate_gpu_launch;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("generate_gpu_launch",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.grid_dims;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("grid_dims",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MapForallToBlocks::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.generate_gpu_launch.getAsOpaquePointer()), 
    llvm::hash_value(prop.grid_dims.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MapForallToBlocks::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "generate_gpu_launch")
      return prop.generate_gpu_launch;

    if (name == "grid_dims")
      return prop.grid_dims;
  return std::nullopt;
}

void MapForallToBlocks::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "generate_gpu_launch") {
       prop.generate_gpu_launch = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.generate_gpu_launch)>>(value);
       return;
    }

    if (name == "grid_dims") {
       prop.grid_dims = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.grid_dims)>>(value);
       return;
    }
}

void MapForallToBlocks::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.generate_gpu_launch) attrs.append("generate_gpu_launch", prop.generate_gpu_launch);

    if (prop.grid_dims) attrs.append("grid_dims", prop.grid_dims);
}

::llvm::LogicalResult MapForallToBlocks::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getGenerateGpuLaunchAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps2(attr, "generate_gpu_launch", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getGridDimsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps1(attr, "grid_dims", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MapForallToBlocks::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.generate_gpu_launch)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.grid_dims)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapForallToBlocks::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.generate_gpu_launch);

  writer.writeOptionalAttribute(prop.grid_dims);
}

::llvm::ArrayRef<int64_t> MapForallToBlocks::getGridDims() {
  auto attr = getGridDimsAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr({});
  return attr;
}

bool MapForallToBlocks::getGenerateGpuLaunch() {
  auto attr = getGenerateGpuLaunchAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void MapForallToBlocks::setGridDims(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    auto &odsProp = getProperties().grid_dims;
    if (attrValue)
      odsProp = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue);
    else
      odsProp = nullptr;
}

void MapForallToBlocks::setGenerateGpuLaunch(bool attrValue) {
    auto &odsProp = getProperties().generate_gpu_launch;
    if (attrValue)
      odsProp = ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr);
    else
      odsProp = nullptr;
}

void MapForallToBlocks::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr grid_dims, /*optional*/::mlir::UnitAttr generate_gpu_launch) {
  odsState.addOperands(target);
  if (grid_dims) {
    odsState.getOrAddProperties<Properties>().grid_dims = grid_dims;
  }
  if (generate_gpu_launch) {
    odsState.getOrAddProperties<Properties>().generate_gpu_launch = generate_gpu_launch;
  }
  odsState.addTypes(result);
}

void MapForallToBlocks::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr grid_dims, /*optional*/::mlir::UnitAttr generate_gpu_launch) {
  odsState.addOperands(target);
  if (grid_dims) {
    odsState.getOrAddProperties<Properties>().grid_dims = grid_dims;
  }
  if (generate_gpu_launch) {
    odsState.getOrAddProperties<Properties>().generate_gpu_launch = generate_gpu_launch;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapForallToBlocks::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> grid_dims, /*optional*/bool generate_gpu_launch) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().grid_dims = odsBuilder.getDenseI64ArrayAttr(grid_dims);
  if (generate_gpu_launch) {
    odsState.getOrAddProperties<Properties>().generate_gpu_launch = ((generate_gpu_launch) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(result);
}

void MapForallToBlocks::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> grid_dims, /*optional*/bool generate_gpu_launch) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().grid_dims = odsBuilder.getDenseI64ArrayAttr(grid_dims);
  if (generate_gpu_launch) {
    odsState.getOrAddProperties<Properties>().generate_gpu_launch = ((generate_gpu_launch) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapForallToBlocks::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MapForallToBlocks::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

::llvm::LogicalResult MapForallToBlocks::verifyInvariantsImpl() {
  auto tblgen_generate_gpu_launch = getProperties().generate_gpu_launch; (void)tblgen_generate_gpu_launch;
  auto tblgen_grid_dims = getProperties().grid_dims; (void)tblgen_grid_dims;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps1(*this, tblgen_grid_dims, "grid_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps2(*this, tblgen_generate_gpu_launch, "generate_gpu_launch")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MapForallToBlocks::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MapForallToBlocks::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr grid_dimsAttr;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> resultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("generate_gpu_launch"))) {
    result.getOrAddProperties<MapForallToBlocks::Properties>().generate_gpu_launch = parser.getBuilder().getUnitAttr();  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("grid_dims"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(grid_dimsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (grid_dimsAttr) result.getOrAddProperties<MapForallToBlocks::Properties>().grid_dims = grid_dimsAttr;
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

  ::mlir::FunctionType target__result_functionType;
  if (parser.parseType(target__result_functionType))
    return ::mlir::failure();
  targetTypes = target__result_functionType.getInputs();
  resultTypes = target__result_functionType.getResults();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapForallToBlocks::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  if (getGenerateGpuLaunchAttr()) {
    _odsPrinter << ' ' << "generate_gpu_launch";
  }
  if (getGridDimsAttr()) {
    _odsPrinter << ' ' << "grid_dims";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getGridDimsAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("generate_gpu_launch");
  elidedAttrs.push_back("grid_dims");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getGridDimsAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("grid_dims");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getGenerateGpuLaunchAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("generate_gpu_launch");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), ::llvm::ArrayRef<::mlir::Type>(getResult().getType()));
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MapForallToBlocks)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MapNestedForallToThreads definitions
//===----------------------------------------------------------------------===//

namespace detail {
MapNestedForallToThreadsGenericAdaptorBase::MapNestedForallToThreadsGenericAdaptorBase(MapNestedForallToThreads op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), properties(op.getProperties()), odsRegions(op->getRegions()) {}

::mlir::DenseI64ArrayAttr MapNestedForallToThreadsGenericAdaptorBase::getBlockDimsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().block_dims);
  return attr;
}

::llvm::ArrayRef<int64_t> MapNestedForallToThreadsGenericAdaptorBase::getBlockDims() {
  auto attr = getBlockDimsAttr();
  return attr;
}

::mlir::BoolAttr MapNestedForallToThreadsGenericAdaptorBase::getSyncAfterDistributeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().sync_after_distribute);
  return attr;
}

bool MapNestedForallToThreadsGenericAdaptorBase::getSyncAfterDistribute() {
  auto attr = getSyncAfterDistributeAttr();
  return attr.getValue();
}

::mlir::IntegerAttr MapNestedForallToThreadsGenericAdaptorBase::getWarpSizeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().warp_size);
  return attr;
}

uint64_t MapNestedForallToThreadsGenericAdaptorBase::getWarpSize() {
  auto attr = getWarpSizeAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
MapNestedForallToThreadsAdaptor::MapNestedForallToThreadsAdaptor(MapNestedForallToThreads op) : MapNestedForallToThreadsGenericAdaptor(op->getOperands(), op) {}

::llvm::LogicalResult MapNestedForallToThreadsAdaptor::verify(::mlir::Location loc) {
  auto tblgen_block_dims = getProperties().block_dims; (void)tblgen_block_dims;
  auto tblgen_sync_after_distribute = getProperties().sync_after_distribute; (void)tblgen_sync_after_distribute;
  auto tblgen_warp_size = getProperties().warp_size; (void)tblgen_warp_size;

  if (tblgen_block_dims && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_block_dims))))
    return emitError(loc, "'transform.gpu.map_nested_forall_to_threads' op ""attribute 'block_dims' failed to satisfy constraint: i64 dense array attribute");

  if (tblgen_sync_after_distribute && !((::llvm::isa<::mlir::BoolAttr>(tblgen_sync_after_distribute))))
    return emitError(loc, "'transform.gpu.map_nested_forall_to_threads' op ""attribute 'sync_after_distribute' failed to satisfy constraint: bool attribute");

  if (tblgen_warp_size && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_warp_size))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_warp_size).getType().isSignlessInteger(64)))))
    return emitError(loc, "'transform.gpu.map_nested_forall_to_threads' op ""attribute 'warp_size' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

::llvm::LogicalResult MapNestedForallToThreads::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.block_dims;
       auto attr = dict.get("block_dims");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `block_dims` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.sync_after_distribute;
       auto attr = dict.get("sync_after_distribute");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `sync_after_distribute` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.warp_size;
       auto attr = dict.get("warp_size");
    if (attr) {
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `warp_size` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MapNestedForallToThreads::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.block_dims;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("block_dims",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sync_after_distribute;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sync_after_distribute",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.warp_size;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("warp_size",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MapNestedForallToThreads::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.block_dims.getAsOpaquePointer()), 
    llvm::hash_value(prop.sync_after_distribute.getAsOpaquePointer()), 
    llvm::hash_value(prop.warp_size.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MapNestedForallToThreads::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "block_dims")
      return prop.block_dims;

    if (name == "sync_after_distribute")
      return prop.sync_after_distribute;

    if (name == "warp_size")
      return prop.warp_size;
  return std::nullopt;
}

void MapNestedForallToThreads::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "block_dims") {
       prop.block_dims = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.block_dims)>>(value);
       return;
    }

    if (name == "sync_after_distribute") {
       prop.sync_after_distribute = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sync_after_distribute)>>(value);
       return;
    }

    if (name == "warp_size") {
       prop.warp_size = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.warp_size)>>(value);
       return;
    }
}

void MapNestedForallToThreads::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.block_dims) attrs.append("block_dims", prop.block_dims);

    if (prop.sync_after_distribute) attrs.append("sync_after_distribute", prop.sync_after_distribute);

    if (prop.warp_size) attrs.append("warp_size", prop.warp_size);
}

::llvm::LogicalResult MapNestedForallToThreads::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getBlockDimsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps1(attr, "block_dims", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSyncAfterDistributeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps3(attr, "sync_after_distribute", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getWarpSizeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(attr, "warp_size", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::llvm::LogicalResult MapNestedForallToThreads::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.block_dims)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.sync_after_distribute)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.warp_size)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapNestedForallToThreads::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.block_dims);

  writer.writeOptionalAttribute(prop.sync_after_distribute);

  writer.writeOptionalAttribute(prop.warp_size);
}

::llvm::ArrayRef<int64_t> MapNestedForallToThreads::getBlockDims() {
  auto attr = getBlockDimsAttr();
  return attr;
}

bool MapNestedForallToThreads::getSyncAfterDistribute() {
  auto attr = getSyncAfterDistributeAttr();
  return attr.getValue();
}

uint64_t MapNestedForallToThreads::getWarpSize() {
  auto attr = getWarpSizeAttr();
  return attr.getValue().getZExtValue();
}

void MapNestedForallToThreads::setBlockDims(::llvm::ArrayRef<int64_t> attrValue) {
  getProperties().block_dims = ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue);
}

void MapNestedForallToThreads::setSyncAfterDistribute(bool attrValue) {
  getProperties().sync_after_distribute = ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue);
}

void MapNestedForallToThreads::setWarpSize(uint64_t attrValue) {
  getProperties().warp_size = ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue);
}

void MapNestedForallToThreads::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::mlir::DenseI64ArrayAttr block_dims, ::mlir::BoolAttr sync_after_distribute, ::mlir::IntegerAttr warp_size) {
  odsState.addOperands(target);
  if (block_dims) {
    odsState.getOrAddProperties<Properties>().block_dims = block_dims;
  }
  if (sync_after_distribute) {
    odsState.getOrAddProperties<Properties>().sync_after_distribute = sync_after_distribute;
  }
  if (warp_size) {
    odsState.getOrAddProperties<Properties>().warp_size = warp_size;
  }
  odsState.addTypes(result);
}

void MapNestedForallToThreads::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr block_dims, ::mlir::BoolAttr sync_after_distribute, ::mlir::IntegerAttr warp_size) {
  odsState.addOperands(target);
  if (block_dims) {
    odsState.getOrAddProperties<Properties>().block_dims = block_dims;
  }
  if (sync_after_distribute) {
    odsState.getOrAddProperties<Properties>().sync_after_distribute = sync_after_distribute;
  }
  if (warp_size) {
    odsState.getOrAddProperties<Properties>().warp_size = warp_size;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapNestedForallToThreads::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::llvm::ArrayRef<int64_t> block_dims, bool sync_after_distribute, uint64_t warp_size) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().block_dims = odsBuilder.getDenseI64ArrayAttr(block_dims);
  odsState.getOrAddProperties<Properties>().sync_after_distribute = odsBuilder.getBoolAttr(sync_after_distribute);
  odsState.getOrAddProperties<Properties>().warp_size = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), warp_size);
  odsState.addTypes(result);
}

void MapNestedForallToThreads::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> block_dims, bool sync_after_distribute, uint64_t warp_size) {
  odsState.addOperands(target);
  odsState.getOrAddProperties<Properties>().block_dims = odsBuilder.getDenseI64ArrayAttr(block_dims);
  odsState.getOrAddProperties<Properties>().sync_after_distribute = odsBuilder.getBoolAttr(sync_after_distribute);
  odsState.getOrAddProperties<Properties>().warp_size = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), warp_size);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapNestedForallToThreads::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);

  if (!attributes.empty()) {
    ::mlir::OpaqueProperties properties =
      &odsState.getOrAddProperties<MapNestedForallToThreads::Properties>();
    std::optional<::mlir::RegisteredOperationName> info =
      odsState.name.getRegisteredInfo();
    if (failed(info->setOpPropertiesFromAttribute(odsState.name, properties,
        odsState.attributes.getDictionary(odsState.getContext()), nullptr)))
      ::llvm::report_fatal_error("Property conversion failed.");
  }
}

void MapNestedForallToThreads::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.block_dims)
    properties.block_dims = odsBuilder.getDenseI64ArrayAttr({});
  if (!properties.sync_after_distribute)
    properties.sync_after_distribute = odsBuilder.getBoolAttr(true);
  if (!properties.warp_size)
    properties.warp_size = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 32);
}

::llvm::LogicalResult MapNestedForallToThreads::verifyInvariantsImpl() {
  auto tblgen_block_dims = getProperties().block_dims; (void)tblgen_block_dims;
  auto tblgen_sync_after_distribute = getProperties().sync_after_distribute; (void)tblgen_sync_after_distribute;
  auto tblgen_warp_size = getProperties().warp_size; (void)tblgen_warp_size;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps1(*this, tblgen_block_dims, "block_dims")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps3(*this, tblgen_sync_after_distribute, "sync_after_distribute")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_GPUTransformOps0(*this, tblgen_warp_size, "warp_size")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUTransformOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_GPUTransformOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::llvm::LogicalResult MapNestedForallToThreads::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MapNestedForallToThreads::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand targetRawOperand{};
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> targetOperands(&targetRawOperand, 1);  ::llvm::SMLoc targetOperandsLoc;
  (void)targetOperandsLoc;
  ::mlir::DenseI64ArrayAttr block_dimsAttr;
  ::mlir::BoolAttr sync_after_distributeAttr;
  ::mlir::IntegerAttr warp_sizeAttr;
  ::llvm::ArrayRef<::mlir::Type> targetTypes;
  ::llvm::ArrayRef<::mlir::Type> resultTypes;

  targetOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(targetRawOperand))
    return ::mlir::failure();
  if (parser.parseKeyword("block_dims"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(block_dimsAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (block_dimsAttr) result.getOrAddProperties<MapNestedForallToThreads::Properties>().block_dims = block_dimsAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("sync_after_distribute"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(sync_after_distributeAttr, parser.getBuilder().getIntegerType(1))) {
    return ::mlir::failure();
  }
  if (sync_after_distributeAttr) result.getOrAddProperties<MapNestedForallToThreads::Properties>().sync_after_distribute = sync_after_distributeAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("warp_size"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(warp_sizeAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (warp_sizeAttr) result.getOrAddProperties<MapNestedForallToThreads::Properties>().warp_size = warp_sizeAttr;
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

  ::mlir::FunctionType target__result_functionType;
  if (parser.parseType(target__result_functionType))
    return ::mlir::failure();
  targetTypes = target__result_functionType.getInputs();
  resultTypes = target__result_functionType.getResults();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(targetOperands, targetTypes, targetOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapNestedForallToThreads::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getTarget();
  _odsPrinter << ' ' << "block_dims";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getBlockDimsAttr());
  if (getSyncAfterDistributeAttr() && getSyncAfterDistributeAttr() != ::mlir::OpBuilder((*this)->getContext()).getBoolAttr(true)) {
    _odsPrinter << ' ' << "sync_after_distribute";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getSyncAfterDistributeAttr());
  }
  if (getWarpSizeAttr() && getWarpSizeAttr() != ::mlir::OpBuilder((*this)->getContext()).getIntegerAttr(::mlir::OpBuilder((*this)->getContext()).getIntegerType(64), 32)) {
    _odsPrinter << ' ' << "warp_size";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    _odsPrinter.printAttributeWithoutType(getWarpSizeAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("block_dims");
  elidedAttrs.push_back("sync_after_distribute");
  elidedAttrs.push_back("warp_size");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getBlockDimsAttr();
     if(attr && (attr == odsBuilder.getDenseI64ArrayAttr({})))
       elidedAttrs.push_back("block_dims");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSyncAfterDistributeAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(true)))
       elidedAttrs.push_back("sync_after_distribute");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getWarpSizeAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 32)))
       elidedAttrs.push_back("warp_size");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(::llvm::ArrayRef<::mlir::Type>(getTarget().getType()), ::llvm::ArrayRef<::mlir::Type>(getResult().getType()));
}

} // namespace transform
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::transform::MapNestedForallToThreads)


#endif  // GET_OP_CLASSES

