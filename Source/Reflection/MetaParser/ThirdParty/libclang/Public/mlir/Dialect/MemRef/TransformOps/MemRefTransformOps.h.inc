/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: MemRefTransformOps.td                                                *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace transform {
class ApplyAllocToAllocaOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyExpandOpsPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyExpandStridedMetadataPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyExtractAddressComputationsPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyFoldMemrefAliasOpsPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyResolveRankedShapedTypeResultDimsPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MemRefAllocaToGlobalOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MemRefEraseDeadAllocAndStoresOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MemRefMakeLoopIndependentOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MemRefMultiBufferOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MemrefToLLVMTypeConverterOp;
} // namespace transform
} // namespace mlir
#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyAllocToAllocaOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyAllocToAllocaOpGenericAdaptorBase {
public:
  struct Properties {
    using size_limitTy = ::mlir::IntegerAttr;
    size_limitTy size_limit;

    auto getSizeLimit() {
      auto &propStorage = this->size_limit;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setSizeLimit(const ::mlir::IntegerAttr &propValue) {
      this->size_limit = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.size_limit == this->size_limit &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  ApplyAllocToAllocaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.apply_patterns.memref.alloc_to_alloca", odsAttrs.getContext());
  }

  ApplyAllocToAllocaOpGenericAdaptorBase(ApplyAllocToAllocaOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getSizeLimitAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().size_limit);
    return attr;
  }

  ::std::optional<uint64_t> getSizeLimit();
};
} // namespace detail
template <typename RangeT>
class ApplyAllocToAllocaOpGenericAdaptor : public detail::ApplyAllocToAllocaOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyAllocToAllocaOpGenericAdaptorBase;
public:
  ApplyAllocToAllocaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyAllocToAllocaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyAllocToAllocaOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  ApplyAllocToAllocaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : ApplyAllocToAllocaOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = ApplyAllocToAllocaOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyAllocToAllocaOp>>>
  ApplyAllocToAllocaOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyAllocToAllocaOpAdaptor : public ApplyAllocToAllocaOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyAllocToAllocaOpGenericAdaptor::ApplyAllocToAllocaOpGenericAdaptor;
  ApplyAllocToAllocaOpAdaptor(ApplyAllocToAllocaOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ApplyAllocToAllocaOp : public ::mlir::Op<ApplyAllocToAllocaOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyAllocToAllocaOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyAllocToAllocaOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("size_limit")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getSizeLimitAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getSizeLimitAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.memref.alloc_to_alloca");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static ::llvm::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::llvm::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::llvm::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getSizeLimitAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().size_limit);
  }

  ::std::optional<uint64_t> getSizeLimit();
  void setSizeLimitAttr(::mlir::IntegerAttr attr) {
    getProperties().size_limit = attr;
  }

  void setSizeLimit(::std::optional<uint64_t> attrValue);
  ::mlir::Attribute removeSizeLimitAttr() {
      auto &attr = getProperties().size_limit;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::IntegerAttr size_limit);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::IntegerAttr size_limit);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  void populatePatterns(::mlir::RewritePatternSet &patterns);
  void populatePatternsWithState(::mlir::RewritePatternSet &patterns, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyAllocToAllocaOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyExpandOpsPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyExpandOpsPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyExpandOpsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.apply_patterns.memref.expand_ops", odsAttrs.getContext());
  }

  ApplyExpandOpsPatternsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ApplyExpandOpsPatternsOpGenericAdaptor : public detail::ApplyExpandOpsPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyExpandOpsPatternsOpGenericAdaptorBase;
public:
  ApplyExpandOpsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyExpandOpsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyExpandOpsPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyExpandOpsPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyExpandOpsPatternsOp>>>
  ApplyExpandOpsPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyExpandOpsPatternsOpAdaptor : public ApplyExpandOpsPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyExpandOpsPatternsOpGenericAdaptor::ApplyExpandOpsPatternsOpGenericAdaptor;
  ApplyExpandOpsPatternsOpAdaptor(ApplyExpandOpsPatternsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ApplyExpandOpsPatternsOp : public ::mlir::Op<ApplyExpandOpsPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyExpandOpsPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyExpandOpsPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.memref.expand_ops");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  void populatePatterns(::mlir::RewritePatternSet &patterns);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyExpandOpsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyExpandStridedMetadataPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyExpandStridedMetadataPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyExpandStridedMetadataPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.apply_patterns.memref.expand_strided_metadata", odsAttrs.getContext());
  }

  ApplyExpandStridedMetadataPatternsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ApplyExpandStridedMetadataPatternsOpGenericAdaptor : public detail::ApplyExpandStridedMetadataPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyExpandStridedMetadataPatternsOpGenericAdaptorBase;
public:
  ApplyExpandStridedMetadataPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyExpandStridedMetadataPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyExpandStridedMetadataPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyExpandStridedMetadataPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyExpandStridedMetadataPatternsOp>>>
  ApplyExpandStridedMetadataPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyExpandStridedMetadataPatternsOpAdaptor : public ApplyExpandStridedMetadataPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyExpandStridedMetadataPatternsOpGenericAdaptor::ApplyExpandStridedMetadataPatternsOpGenericAdaptor;
  ApplyExpandStridedMetadataPatternsOpAdaptor(ApplyExpandStridedMetadataPatternsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ApplyExpandStridedMetadataPatternsOp : public ::mlir::Op<ApplyExpandStridedMetadataPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyExpandStridedMetadataPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyExpandStridedMetadataPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.memref.expand_strided_metadata");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  void populatePatterns(::mlir::RewritePatternSet &patterns);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyExpandStridedMetadataPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyExtractAddressComputationsPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyExtractAddressComputationsPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyExtractAddressComputationsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.apply_patterns.memref.extract_address_computations", odsAttrs.getContext());
  }

  ApplyExtractAddressComputationsPatternsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ApplyExtractAddressComputationsPatternsOpGenericAdaptor : public detail::ApplyExtractAddressComputationsPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyExtractAddressComputationsPatternsOpGenericAdaptorBase;
public:
  ApplyExtractAddressComputationsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyExtractAddressComputationsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyExtractAddressComputationsPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyExtractAddressComputationsPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyExtractAddressComputationsPatternsOp>>>
  ApplyExtractAddressComputationsPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyExtractAddressComputationsPatternsOpAdaptor : public ApplyExtractAddressComputationsPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyExtractAddressComputationsPatternsOpGenericAdaptor::ApplyExtractAddressComputationsPatternsOpGenericAdaptor;
  ApplyExtractAddressComputationsPatternsOpAdaptor(ApplyExtractAddressComputationsPatternsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ApplyExtractAddressComputationsPatternsOp : public ::mlir::Op<ApplyExtractAddressComputationsPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyExtractAddressComputationsPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyExtractAddressComputationsPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.memref.extract_address_computations");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  void populatePatterns(::mlir::RewritePatternSet &patterns);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyExtractAddressComputationsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldMemrefAliasOpsPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.apply_patterns.memref.fold_memref_alias_ops", odsAttrs.getContext());
  }

  ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptor : public detail::ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptorBase;
public:
  ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyFoldMemrefAliasOpsPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyFoldMemrefAliasOpsPatternsOp>>>
  ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyFoldMemrefAliasOpsPatternsOpAdaptor : public ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptor::ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptor;
  ApplyFoldMemrefAliasOpsPatternsOpAdaptor(ApplyFoldMemrefAliasOpsPatternsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ApplyFoldMemrefAliasOpsPatternsOp : public ::mlir::Op<ApplyFoldMemrefAliasOpsPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyFoldMemrefAliasOpsPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyFoldMemrefAliasOpsPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.memref.fold_memref_alias_ops");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  void populatePatterns(::mlir::RewritePatternSet &patterns);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldMemrefAliasOpsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyResolveRankedShapedTypeResultDimsPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.apply_patterns.memref.resolve_ranked_shaped_type_result_dims", odsAttrs.getContext());
  }

  ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptor : public detail::ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptorBase;
public:
  ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyResolveRankedShapedTypeResultDimsPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyResolveRankedShapedTypeResultDimsPatternsOp>>>
  ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyResolveRankedShapedTypeResultDimsPatternsOpAdaptor : public ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptor::ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptor;
  ApplyResolveRankedShapedTypeResultDimsPatternsOpAdaptor(ApplyResolveRankedShapedTypeResultDimsPatternsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ApplyResolveRankedShapedTypeResultDimsPatternsOp : public ::mlir::Op<ApplyResolveRankedShapedTypeResultDimsPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyResolveRankedShapedTypeResultDimsPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyResolveRankedShapedTypeResultDimsPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.memref.resolve_ranked_shaped_type_result_dims");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  void populatePatterns(::mlir::RewritePatternSet &patterns);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyResolveRankedShapedTypeResultDimsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemRefAllocaToGlobalOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MemRefAllocaToGlobalOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MemRefAllocaToGlobalOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.memref.alloca_to_global", odsAttrs.getContext());
  }

  MemRefAllocaToGlobalOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class MemRefAllocaToGlobalOpGenericAdaptor : public detail::MemRefAllocaToGlobalOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MemRefAllocaToGlobalOpGenericAdaptorBase;
public:
  MemRefAllocaToGlobalOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MemRefAllocaToGlobalOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MemRefAllocaToGlobalOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MemRefAllocaToGlobalOp, typename = std::enable_if_t<std::is_same_v<LateInst, MemRefAllocaToGlobalOp>>>
  MemRefAllocaToGlobalOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAlloca() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MemRefAllocaToGlobalOpAdaptor : public MemRefAllocaToGlobalOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MemRefAllocaToGlobalOpGenericAdaptor::MemRefAllocaToGlobalOpGenericAdaptor;
  MemRefAllocaToGlobalOpAdaptor(MemRefAllocaToGlobalOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MemRefAllocaToGlobalOp : public ::mlir::Op<MemRefAllocaToGlobalOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MemRefAllocaToGlobalOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MemRefAllocaToGlobalOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.memref.alloca_to_global");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::OperationType> getAlloca() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getAllocaMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getGetGlobal() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getGlobal() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type getGlobal, ::mlir::Type global, ::mlir::Value alloca);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value alloca);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MemRefAllocaToGlobalOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemRefEraseDeadAllocAndStoresOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MemRefEraseDeadAllocAndStoresOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MemRefEraseDeadAllocAndStoresOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.memref.erase_dead_alloc_and_stores", odsAttrs.getContext());
  }

  MemRefEraseDeadAllocAndStoresOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class MemRefEraseDeadAllocAndStoresOpGenericAdaptor : public detail::MemRefEraseDeadAllocAndStoresOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MemRefEraseDeadAllocAndStoresOpGenericAdaptorBase;
public:
  MemRefEraseDeadAllocAndStoresOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MemRefEraseDeadAllocAndStoresOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MemRefEraseDeadAllocAndStoresOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MemRefEraseDeadAllocAndStoresOp, typename = std::enable_if_t<std::is_same_v<LateInst, MemRefEraseDeadAllocAndStoresOp>>>
  MemRefEraseDeadAllocAndStoresOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MemRefEraseDeadAllocAndStoresOpAdaptor : public MemRefEraseDeadAllocAndStoresOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MemRefEraseDeadAllocAndStoresOpGenericAdaptor::MemRefEraseDeadAllocAndStoresOpGenericAdaptor;
  MemRefEraseDeadAllocAndStoresOpAdaptor(MemRefEraseDeadAllocAndStoresOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MemRefEraseDeadAllocAndStoresOp : public ::mlir::Op<MemRefEraseDeadAllocAndStoresOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MemRefEraseDeadAllocAndStoresOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MemRefEraseDeadAllocAndStoresOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.memref.erase_dead_alloc_and_stores");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MemRefEraseDeadAllocAndStoresOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemRefMakeLoopIndependentOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MemRefMakeLoopIndependentOpGenericAdaptorBase {
public:
  struct Properties {
    using num_loopsTy = ::mlir::IntegerAttr;
    num_loopsTy num_loops;

    auto getNumLoops() {
      auto &propStorage = this->num_loops;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setNumLoops(const ::mlir::IntegerAttr &propValue) {
      this->num_loops = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.num_loops == this->num_loops &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  MemRefMakeLoopIndependentOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.memref.make_loop_independent", odsAttrs.getContext());
  }

  MemRefMakeLoopIndependentOpGenericAdaptorBase(MemRefMakeLoopIndependentOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getNumLoopsAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().num_loops);
    return attr;
  }

  uint64_t getNumLoops();
};
} // namespace detail
template <typename RangeT>
class MemRefMakeLoopIndependentOpGenericAdaptor : public detail::MemRefMakeLoopIndependentOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MemRefMakeLoopIndependentOpGenericAdaptorBase;
public:
  MemRefMakeLoopIndependentOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MemRefMakeLoopIndependentOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MemRefMakeLoopIndependentOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MemRefMakeLoopIndependentOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MemRefMakeLoopIndependentOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MemRefMakeLoopIndependentOp, typename = std::enable_if_t<std::is_same_v<LateInst, MemRefMakeLoopIndependentOp>>>
  MemRefMakeLoopIndependentOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MemRefMakeLoopIndependentOpAdaptor : public MemRefMakeLoopIndependentOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MemRefMakeLoopIndependentOpGenericAdaptor::MemRefMakeLoopIndependentOpGenericAdaptor;
  MemRefMakeLoopIndependentOpAdaptor(MemRefMakeLoopIndependentOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MemRefMakeLoopIndependentOp : public ::mlir::Op<MemRefMakeLoopIndependentOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MemRefMakeLoopIndependentOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MemRefMakeLoopIndependentOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("num_loops")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getNumLoopsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getNumLoopsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.memref.make_loop_independent");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  static ::llvm::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::llvm::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::llvm::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getNumLoopsAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().num_loops);
  }

  uint64_t getNumLoops();
  void setNumLoopsAttr(::mlir::IntegerAttr attr) {
    getProperties().num_loops = attr;
  }

  void setNumLoops(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr num_loops);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr num_loops);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t num_loops);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t num_loops);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MemRefMakeLoopIndependentOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemRefMultiBufferOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MemRefMultiBufferOpGenericAdaptorBase {
public:
  struct Properties {
    using factorTy = ::mlir::IntegerAttr;
    factorTy factor;

    auto getFactor() {
      auto &propStorage = this->factor;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setFactor(const ::mlir::IntegerAttr &propValue) {
      this->factor = propValue;
    }
    using skip_analysisTy = ::mlir::UnitAttr;
    skip_analysisTy skip_analysis;

    auto getSkipAnalysis() {
      auto &propStorage = this->skip_analysis;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setSkipAnalysis(const ::mlir::UnitAttr &propValue) {
      this->skip_analysis = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.factor == this->factor &&
        rhs.skip_analysis == this->skip_analysis &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  MemRefMultiBufferOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.memref.multibuffer", odsAttrs.getContext());
  }

  MemRefMultiBufferOpGenericAdaptorBase(MemRefMultiBufferOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getFactorAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().factor);
    return attr;
  }

  uint64_t getFactor();
  ::mlir::UnitAttr getSkipAnalysisAttr();
  bool getSkipAnalysis();
};
} // namespace detail
template <typename RangeT>
class MemRefMultiBufferOpGenericAdaptor : public detail::MemRefMultiBufferOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MemRefMultiBufferOpGenericAdaptorBase;
public:
  MemRefMultiBufferOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MemRefMultiBufferOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MemRefMultiBufferOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MemRefMultiBufferOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MemRefMultiBufferOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MemRefMultiBufferOp, typename = std::enable_if_t<std::is_same_v<LateInst, MemRefMultiBufferOp>>>
  MemRefMultiBufferOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MemRefMultiBufferOpAdaptor : public MemRefMultiBufferOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MemRefMultiBufferOpGenericAdaptor::MemRefMultiBufferOpGenericAdaptor;
  MemRefMultiBufferOpAdaptor(MemRefMultiBufferOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MemRefMultiBufferOp : public ::mlir::Op<MemRefMultiBufferOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MemRefMultiBufferOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MemRefMultiBufferOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("factor"), ::llvm::StringRef("skip_analysis")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFactorAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFactorAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getSkipAnalysisAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getSkipAnalysisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.memref.multibuffer");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::OperationType> getTarget() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  static ::llvm::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::llvm::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::llvm::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getFactorAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().factor);
  }

  uint64_t getFactor();
  ::mlir::UnitAttr getSkipAnalysisAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().skip_analysis);
  }

  bool getSkipAnalysis();
  void setFactorAttr(::mlir::IntegerAttr attr) {
    getProperties().factor = attr;
  }

  void setFactor(uint64_t attrValue);
  void setSkipAnalysisAttr(::mlir::UnitAttr attr) {
    getProperties().skip_analysis = attr;
  }

  void setSkipAnalysis(bool attrValue);
  ::mlir::Attribute removeSkipAnalysisAttr() {
      auto &attr = getProperties().skip_analysis;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr factor, /*optional*/::mlir::UnitAttr skip_analysis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr factor, /*optional*/::mlir::UnitAttr skip_analysis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t factor, /*optional*/bool skip_analysis = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t factor, /*optional*/bool skip_analysis = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MemRefMultiBufferOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MemrefToLLVMTypeConverterOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MemrefToLLVMTypeConverterOpGenericAdaptorBase {
public:
  struct Properties {
    using data_layoutTy = ::mlir::StringAttr;
    data_layoutTy data_layout;

    auto getDataLayout() {
      auto &propStorage = this->data_layout;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setDataLayout(const ::mlir::StringAttr &propValue) {
      this->data_layout = propValue;
    }
    using index_bitwidthTy = ::mlir::IntegerAttr;
    index_bitwidthTy index_bitwidth;

    auto getIndexBitwidth() {
      auto &propStorage = this->index_bitwidth;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setIndexBitwidth(const ::mlir::IntegerAttr &propValue) {
      this->index_bitwidth = propValue;
    }
    using use_aligned_allocTy = ::mlir::BoolAttr;
    use_aligned_allocTy use_aligned_alloc;

    auto getUseAlignedAlloc() {
      auto &propStorage = this->use_aligned_alloc;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setUseAlignedAlloc(const ::mlir::BoolAttr &propValue) {
      this->use_aligned_alloc = propValue;
    }
    using use_bare_ptr_call_convTy = ::mlir::BoolAttr;
    use_bare_ptr_call_convTy use_bare_ptr_call_conv;

    auto getUseBarePtrCallConv() {
      auto &propStorage = this->use_bare_ptr_call_conv;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setUseBarePtrCallConv(const ::mlir::BoolAttr &propValue) {
      this->use_bare_ptr_call_conv = propValue;
    }
    using use_generic_functionsTy = ::mlir::BoolAttr;
    use_generic_functionsTy use_generic_functions;

    auto getUseGenericFunctions() {
      auto &propStorage = this->use_generic_functions;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setUseGenericFunctions(const ::mlir::BoolAttr &propValue) {
      this->use_generic_functions = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.data_layout == this->data_layout &&
        rhs.index_bitwidth == this->index_bitwidth &&
        rhs.use_aligned_alloc == this->use_aligned_alloc &&
        rhs.use_bare_ptr_call_conv == this->use_bare_ptr_call_conv &&
        rhs.use_generic_functions == this->use_generic_functions &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  MemrefToLLVMTypeConverterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.apply_conversion_patterns.memref.memref_to_llvm_type_converter", odsAttrs.getContext());
  }

  MemrefToLLVMTypeConverterOpGenericAdaptorBase(MemrefToLLVMTypeConverterOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::BoolAttr getUseAlignedAllocAttr();
  bool getUseAlignedAlloc();
  ::mlir::IntegerAttr getIndexBitwidthAttr();
  uint64_t getIndexBitwidth();
  ::mlir::BoolAttr getUseGenericFunctionsAttr();
  bool getUseGenericFunctions();
  ::mlir::BoolAttr getUseBarePtrCallConvAttr();
  bool getUseBarePtrCallConv();
  ::mlir::StringAttr getDataLayoutAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().data_layout);
    return attr;
  }

  ::std::optional< ::llvm::StringRef > getDataLayout();
};
} // namespace detail
template <typename RangeT>
class MemrefToLLVMTypeConverterOpGenericAdaptor : public detail::MemrefToLLVMTypeConverterOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MemrefToLLVMTypeConverterOpGenericAdaptorBase;
public:
  MemrefToLLVMTypeConverterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MemrefToLLVMTypeConverterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MemrefToLLVMTypeConverterOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MemrefToLLVMTypeConverterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MemrefToLLVMTypeConverterOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MemrefToLLVMTypeConverterOp, typename = std::enable_if_t<std::is_same_v<LateInst, MemrefToLLVMTypeConverterOp>>>
  MemrefToLLVMTypeConverterOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MemrefToLLVMTypeConverterOpAdaptor : public MemrefToLLVMTypeConverterOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MemrefToLLVMTypeConverterOpGenericAdaptor::MemrefToLLVMTypeConverterOpGenericAdaptor;
  MemrefToLLVMTypeConverterOpAdaptor(MemrefToLLVMTypeConverterOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MemrefToLLVMTypeConverterOp : public ::mlir::Op<MemrefToLLVMTypeConverterOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TypeConverterBuilderOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MemrefToLLVMTypeConverterOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MemrefToLLVMTypeConverterOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("data_layout"), ::llvm::StringRef("index_bitwidth"), ::llvm::StringRef("use_aligned_alloc"), ::llvm::StringRef("use_bare_ptr_call_conv"), ::llvm::StringRef("use_generic_functions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDataLayoutAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDataLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIndexBitwidthAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIndexBitwidthAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getUseAlignedAllocAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getUseAlignedAllocAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getUseBarePtrCallConvAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getUseBarePtrCallConvAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getUseGenericFunctionsAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getUseGenericFunctionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_conversion_patterns.memref.memref_to_llvm_type_converter");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static ::llvm::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::llvm::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::llvm::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::BoolAttr getUseAlignedAllocAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().use_aligned_alloc);
  }

  bool getUseAlignedAlloc();
  ::mlir::IntegerAttr getIndexBitwidthAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().index_bitwidth);
  }

  uint64_t getIndexBitwidth();
  ::mlir::BoolAttr getUseGenericFunctionsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().use_generic_functions);
  }

  bool getUseGenericFunctions();
  ::mlir::BoolAttr getUseBarePtrCallConvAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().use_bare_ptr_call_conv);
  }

  bool getUseBarePtrCallConv();
  ::mlir::StringAttr getDataLayoutAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().data_layout);
  }

  ::std::optional< ::llvm::StringRef > getDataLayout();
  void setUseAlignedAllocAttr(::mlir::BoolAttr attr) {
    getProperties().use_aligned_alloc = attr;
  }

  void setUseAlignedAlloc(::std::optional<bool> attrValue);
  void setIndexBitwidthAttr(::mlir::IntegerAttr attr) {
    getProperties().index_bitwidth = attr;
  }

  void setIndexBitwidth(::std::optional<uint64_t> attrValue);
  void setUseGenericFunctionsAttr(::mlir::BoolAttr attr) {
    getProperties().use_generic_functions = attr;
  }

  void setUseGenericFunctions(::std::optional<bool> attrValue);
  void setUseBarePtrCallConvAttr(::mlir::BoolAttr attr) {
    getProperties().use_bare_ptr_call_conv = attr;
  }

  void setUseBarePtrCallConv(::std::optional<bool> attrValue);
  void setDataLayoutAttr(::mlir::StringAttr attr) {
    getProperties().data_layout = attr;
  }

  void setDataLayout(::std::optional<::llvm::StringRef> attrValue);
  ::mlir::Attribute removeUseAlignedAllocAttr() {
      auto &attr = getProperties().use_aligned_alloc;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeIndexBitwidthAttr() {
      auto &attr = getProperties().index_bitwidth;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeUseGenericFunctionsAttr() {
      auto &attr = getProperties().use_generic_functions;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeUseBarePtrCallConvAttr() {
      auto &attr = getProperties().use_bare_ptr_call_conv;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeDataLayoutAttr() {
      auto &attr = getProperties().data_layout;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::BoolAttr use_aligned_alloc, /*optional*/::mlir::IntegerAttr index_bitwidth, /*optional*/::mlir::BoolAttr use_generic_functions, /*optional*/::mlir::BoolAttr use_bare_ptr_call_conv, /*optional*/::mlir::StringAttr data_layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::BoolAttr use_aligned_alloc, /*optional*/::mlir::IntegerAttr index_bitwidth, /*optional*/::mlir::BoolAttr use_generic_functions, /*optional*/::mlir::BoolAttr use_bare_ptr_call_conv, /*optional*/::mlir::StringAttr data_layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/bool use_aligned_alloc, /*optional*/uint64_t index_bitwidth, /*optional*/bool use_generic_functions, /*optional*/bool use_bare_ptr_call_conv, /*optional*/::mlir::StringAttr data_layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/bool use_aligned_alloc, /*optional*/uint64_t index_bitwidth, /*optional*/bool use_generic_functions, /*optional*/bool use_bare_ptr_call_conv, /*optional*/::mlir::StringAttr data_layout);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  std::unique_ptr<::mlir::TypeConverter> getTypeConverter();
  static StringRef getTypeConverterType();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 5 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MemrefToLLVMTypeConverterOp)


#endif  // GET_OP_CLASSES

