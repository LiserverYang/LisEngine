/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: LinalgMatchOps.td                                                    *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace transform {
class MatchStructuredBodyOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredClassifyContractionDimsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredClassifyConvolutionDimsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredDimOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredElementalBitwidthOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredInitOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredInputOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredNumInitsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredNumInputsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredRankOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredResultOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchStructuredYieldOp;
} // namespace transform
} // namespace mlir
#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredBodyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredBodyOpGenericAdaptorBase {
public:
  struct Properties {
    using contractionTy = ::mlir::ArrayAttr;
    contractionTy contraction;

    auto getContraction() {
      auto &propStorage = this->contraction;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setContraction(const ::mlir::ArrayAttr &propValue) {
      this->contraction = propValue;
    }
    using elementwiseTy = ::mlir::UnitAttr;
    elementwiseTy elementwise;

    auto getElementwise() {
      auto &propStorage = this->elementwise;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setElementwise(const ::mlir::UnitAttr &propValue) {
      this->elementwise = propValue;
    }
    using passthroughTy = ::mlir::UnitAttr;
    passthroughTy passthrough;

    auto getPassthrough() {
      auto &propStorage = this->passthrough;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setPassthrough(const ::mlir::UnitAttr &propValue) {
      this->passthrough = propValue;
    }
    using reduction_positionTy = ::mlir::IntegerAttr;
    reduction_positionTy reduction_position;

    auto getReductionPosition() {
      auto &propStorage = this->reduction_position;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setReductionPosition(const ::mlir::IntegerAttr &propValue) {
      this->reduction_position = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.contraction == this->contraction &&
        rhs.elementwise == this->elementwise &&
        rhs.passthrough == this->passthrough &&
        rhs.reduction_position == this->reduction_position &&
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
  MatchStructuredBodyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.body", odsAttrs.getContext());
  }

  MatchStructuredBodyOpGenericAdaptorBase(MatchStructuredBodyOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getReductionPositionAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().reduction_position);
    return attr;
  }

  ::std::optional<uint64_t> getReductionPosition();
  ::mlir::UnitAttr getPassthroughAttr();
  bool getPassthrough();
  ::mlir::UnitAttr getElementwiseAttr();
  bool getElementwise();
  ::mlir::ArrayAttr getContractionAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().contraction);
    return attr;
  }

  ::std::optional< ::mlir::ArrayAttr > getContraction();
};
} // namespace detail
template <typename RangeT>
class MatchStructuredBodyOpGenericAdaptor : public detail::MatchStructuredBodyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredBodyOpGenericAdaptorBase;
public:
  MatchStructuredBodyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredBodyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredBodyOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MatchStructuredBodyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MatchStructuredBodyOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MatchStructuredBodyOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredBodyOp>>>
  MatchStructuredBodyOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredBodyOpAdaptor : public MatchStructuredBodyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredBodyOpGenericAdaptor::MatchStructuredBodyOpGenericAdaptor;
  MatchStructuredBodyOpAdaptor(MatchStructuredBodyOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredBodyOp : public ::mlir::Op<MatchStructuredBodyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::SingleOpMatcherOpTrait, ::mlir::transform::StructuredOpPredicateOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredBodyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredBodyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("contraction"), ::llvm::StringRef("elementwise"), ::llvm::StringRef("passthrough"), ::llvm::StringRef("reduction_position")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getContractionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getContractionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getElementwiseAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getElementwiseAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getPassthroughAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getPassthroughAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getReductionPositionAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getReductionPositionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.body");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getOperandHandleMutable() {
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

  static ::llvm::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::llvm::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::llvm::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getReductionPositionAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().reduction_position);
  }

  ::std::optional<uint64_t> getReductionPosition();
  ::mlir::UnitAttr getPassthroughAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().passthrough);
  }

  bool getPassthrough();
  ::mlir::UnitAttr getElementwiseAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().elementwise);
  }

  bool getElementwise();
  ::mlir::ArrayAttr getContractionAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().contraction);
  }

  ::std::optional< ::mlir::ArrayAttr > getContraction();
  void setReductionPositionAttr(::mlir::IntegerAttr attr) {
    getProperties().reduction_position = attr;
  }

  void setReductionPosition(::std::optional<uint64_t> attrValue);
  void setPassthroughAttr(::mlir::UnitAttr attr) {
    getProperties().passthrough = attr;
  }

  void setPassthrough(bool attrValue);
  void setElementwiseAttr(::mlir::UnitAttr attr) {
    getProperties().elementwise = attr;
  }

  void setElementwise(bool attrValue);
  void setContractionAttr(::mlir::ArrayAttr attr) {
    getProperties().contraction = attr;
  }

  ::mlir::Attribute removeReductionPositionAttr() {
      auto &attr = getProperties().reduction_position;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removePassthroughAttr() {
      auto &attr = getProperties().passthrough;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeElementwiseAttr() {
      auto &attr = getProperties().elementwise;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeContractionAttr() {
      auto &attr = getProperties().contraction;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand_handle, /*optional*/::mlir::IntegerAttr reduction_position, /*optional*/::mlir::UnitAttr passthrough, /*optional*/::mlir::UnitAttr elementwise, /*optional*/::mlir::ArrayAttr contraction);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, /*optional*/::mlir::IntegerAttr reduction_position, /*optional*/::mlir::UnitAttr passthrough, /*optional*/::mlir::UnitAttr elementwise, /*optional*/::mlir::ArrayAttr contraction);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand_handle, /*optional*/::mlir::IntegerAttr reduction_position, /*optional*/bool passthrough, /*optional*/bool elementwise, /*optional*/::mlir::ArrayAttr contraction);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, /*optional*/::mlir::IntegerAttr reduction_position, /*optional*/bool passthrough, /*optional*/bool elementwise, /*optional*/::mlir::ArrayAttr contraction);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 4 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredBodyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredClassifyContractionDimsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredClassifyContractionDimsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MatchStructuredClassifyContractionDimsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.classify_contraction_dims", odsAttrs.getContext());
  }

  MatchStructuredClassifyContractionDimsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class MatchStructuredClassifyContractionDimsOpGenericAdaptor : public detail::MatchStructuredClassifyContractionDimsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredClassifyContractionDimsOpGenericAdaptorBase;
public:
  MatchStructuredClassifyContractionDimsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredClassifyContractionDimsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredClassifyContractionDimsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MatchStructuredClassifyContractionDimsOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredClassifyContractionDimsOp>>>
  MatchStructuredClassifyContractionDimsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredClassifyContractionDimsOpAdaptor : public MatchStructuredClassifyContractionDimsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredClassifyContractionDimsOpGenericAdaptor::MatchStructuredClassifyContractionDimsOpGenericAdaptor;
  MatchStructuredClassifyContractionDimsOpAdaptor(MatchStructuredClassifyContractionDimsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredClassifyContractionDimsOp : public ::mlir::Op<MatchStructuredClassifyContractionDimsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<4>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::SingleOpMatcherOpTrait, ::mlir::transform::StructuredOpPredicateOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredClassifyContractionDimsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredClassifyContractionDimsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.classify_contraction_dims");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getOperandHandleMutable() {
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

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getBatch() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getM() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(1).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getN() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(2).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getK() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(3).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type batch, ::mlir::Type m, ::mlir::Type n, ::mlir::Type k, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredClassifyContractionDimsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredClassifyConvolutionDimsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredClassifyConvolutionDimsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MatchStructuredClassifyConvolutionDimsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.classify_convolution_dims", odsAttrs.getContext());
  }

  MatchStructuredClassifyConvolutionDimsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class MatchStructuredClassifyConvolutionDimsOpGenericAdaptor : public detail::MatchStructuredClassifyConvolutionDimsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredClassifyConvolutionDimsOpGenericAdaptorBase;
public:
  MatchStructuredClassifyConvolutionDimsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredClassifyConvolutionDimsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredClassifyConvolutionDimsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MatchStructuredClassifyConvolutionDimsOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredClassifyConvolutionDimsOp>>>
  MatchStructuredClassifyConvolutionDimsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredClassifyConvolutionDimsOpAdaptor : public MatchStructuredClassifyConvolutionDimsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredClassifyConvolutionDimsOpGenericAdaptor::MatchStructuredClassifyConvolutionDimsOpGenericAdaptor;
  MatchStructuredClassifyConvolutionDimsOpAdaptor(MatchStructuredClassifyConvolutionDimsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredClassifyConvolutionDimsOp : public ::mlir::Op<MatchStructuredClassifyConvolutionDimsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<8>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::SingleOpMatcherOpTrait, ::mlir::transform::StructuredOpPredicateOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredClassifyConvolutionDimsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredClassifyConvolutionDimsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.classify_convolution_dims");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getOperandHandleMutable() {
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

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getBatch() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getOutputImage() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(1).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getOutputChannel() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(2).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getFilterLoop() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(3).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getInputChannel() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(4).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getDepth() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(5).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getStrides() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(6).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getDilations() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(7).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type batch, ::mlir::Type output_image, ::mlir::Type output_channel, ::mlir::Type filter_loop, ::mlir::Type input_channel, ::mlir::Type depth, ::mlir::Type strides, ::mlir::Type dilations, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredClassifyConvolutionDimsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredDimOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredDimOpGenericAdaptorBase {
public:
  struct Properties {
    using is_allTy = ::mlir::UnitAttr;
    is_allTy is_all;

    auto getIsAll() {
      auto &propStorage = this->is_all;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setIsAll(const ::mlir::UnitAttr &propValue) {
      this->is_all = propValue;
    }
    using is_invertedTy = ::mlir::UnitAttr;
    is_invertedTy is_inverted;

    auto getIsInverted() {
      auto &propStorage = this->is_inverted;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setIsInverted(const ::mlir::UnitAttr &propValue) {
      this->is_inverted = propValue;
    }
    using parallelTy = ::mlir::UnitAttr;
    parallelTy parallel;

    auto getParallel() {
      auto &propStorage = this->parallel;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setParallel(const ::mlir::UnitAttr &propValue) {
      this->parallel = propValue;
    }
    using raw_dim_listTy = ::mlir::DenseI64ArrayAttr;
    raw_dim_listTy raw_dim_list;

    auto getRawDimList() {
      auto &propStorage = this->raw_dim_list;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setRawDimList(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->raw_dim_list = propValue;
    }
    using reductionTy = ::mlir::UnitAttr;
    reductionTy reduction;

    auto getReduction() {
      auto &propStorage = this->reduction;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setReduction(const ::mlir::UnitAttr &propValue) {
      this->reduction = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.is_all == this->is_all &&
        rhs.is_inverted == this->is_inverted &&
        rhs.parallel == this->parallel &&
        rhs.raw_dim_list == this->raw_dim_list &&
        rhs.reduction == this->reduction &&
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
  MatchStructuredDimOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.dim", odsAttrs.getContext());
  }

  MatchStructuredDimOpGenericAdaptorBase(MatchStructuredDimOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getRawDimListAttr() {
    auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().raw_dim_list);
    return attr;
  }

  ::llvm::ArrayRef<int64_t> getRawDimList();
  ::mlir::UnitAttr getIsInvertedAttr();
  bool getIsInverted();
  ::mlir::UnitAttr getIsAllAttr();
  bool getIsAll();
  ::mlir::UnitAttr getParallelAttr();
  bool getParallel();
  ::mlir::UnitAttr getReductionAttr();
  bool getReduction();
};
} // namespace detail
template <typename RangeT>
class MatchStructuredDimOpGenericAdaptor : public detail::MatchStructuredDimOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredDimOpGenericAdaptorBase;
public:
  MatchStructuredDimOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredDimOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredDimOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MatchStructuredDimOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MatchStructuredDimOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MatchStructuredDimOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredDimOp>>>
  MatchStructuredDimOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredDimOpAdaptor : public MatchStructuredDimOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredDimOpGenericAdaptor::MatchStructuredDimOpGenericAdaptor;
  MatchStructuredDimOpAdaptor(MatchStructuredDimOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredDimOp : public ::mlir::Op<MatchStructuredDimOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::StructuredOpPredicateOpTrait, ::mlir::transform::SingleOpMatcherOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredDimOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredDimOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("is_all"), ::llvm::StringRef("is_inverted"), ::llvm::StringRef("parallel"), ::llvm::StringRef("raw_dim_list"), ::llvm::StringRef("reduction")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIsAllAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIsAllAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIsInvertedAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIsInvertedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getParallelAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getParallelAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getRawDimListAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getRawDimListAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getReductionAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getReductionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.dim");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getOperandHandleMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getResult() {
    auto results = getODSResults(0);
    return results.empty() ? ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>() : ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*results.begin());
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
  ::mlir::DenseI64ArrayAttr getRawDimListAttr() {
    return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().raw_dim_list);
  }

  ::llvm::ArrayRef<int64_t> getRawDimList();
  ::mlir::UnitAttr getIsInvertedAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_inverted);
  }

  bool getIsInverted();
  ::mlir::UnitAttr getIsAllAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_all);
  }

  bool getIsAll();
  ::mlir::UnitAttr getParallelAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().parallel);
  }

  bool getParallel();
  ::mlir::UnitAttr getReductionAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().reduction);
  }

  bool getReduction();
  void setRawDimListAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().raw_dim_list = attr;
  }

  void setRawDimList(::llvm::ArrayRef<int64_t> attrValue);
  void setIsInvertedAttr(::mlir::UnitAttr attr) {
    getProperties().is_inverted = attr;
  }

  void setIsInverted(bool attrValue);
  void setIsAllAttr(::mlir::UnitAttr attr) {
    getProperties().is_all = attr;
  }

  void setIsAll(bool attrValue);
  void setParallelAttr(::mlir::UnitAttr attr) {
    getProperties().parallel = attr;
  }

  void setParallel(bool attrValue);
  void setReductionAttr(::mlir::UnitAttr attr) {
    getProperties().reduction = attr;
  }

  void setReduction(bool attrValue);
  ::mlir::Attribute removeIsInvertedAttr() {
      auto &attr = getProperties().is_inverted;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeIsAllAttr() {
      auto &attr = getProperties().is_all;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeParallelAttr() {
      auto &attr = getProperties().parallel;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeReductionAttr() {
      auto &attr = getProperties().reduction;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_dim_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all = nullptr, /*optional*/::mlir::UnitAttr parallel = nullptr, /*optional*/::mlir::UnitAttr reduction = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_dim_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all = nullptr, /*optional*/::mlir::UnitAttr parallel = nullptr, /*optional*/::mlir::UnitAttr reduction = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_dim_list, /*optional*/bool is_inverted = false, /*optional*/bool is_all = false, /*optional*/bool parallel = false, /*optional*/bool reduction = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_dim_list, /*optional*/bool is_inverted = false, /*optional*/bool is_all = false, /*optional*/bool parallel = false, /*optional*/bool reduction = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
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
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);

  ::mlir::DiagnosedSilenceableFailure getDimensionsFor(
      ::mlir::linalg::LinalgOp op,
      ::llvm::SmallVectorImpl<int64_t> &dims);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredDimOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredElementalBitwidthOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredElementalBitwidthOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MatchStructuredElementalBitwidthOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.elemental_bitwidth", odsAttrs.getContext());
  }

  MatchStructuredElementalBitwidthOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class MatchStructuredElementalBitwidthOpGenericAdaptor : public detail::MatchStructuredElementalBitwidthOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredElementalBitwidthOpGenericAdaptorBase;
public:
  MatchStructuredElementalBitwidthOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredElementalBitwidthOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredElementalBitwidthOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MatchStructuredElementalBitwidthOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredElementalBitwidthOp>>>
  MatchStructuredElementalBitwidthOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredElementalBitwidthOpAdaptor : public MatchStructuredElementalBitwidthOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredElementalBitwidthOpGenericAdaptor::MatchStructuredElementalBitwidthOpGenericAdaptor;
  MatchStructuredElementalBitwidthOpAdaptor(MatchStructuredElementalBitwidthOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredElementalBitwidthOp : public ::mlir::Op<MatchStructuredElementalBitwidthOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformParamTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::SingleValueMatcherOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredElementalBitwidthOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredElementalBitwidthOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.elemental_bitwidth");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface> getOperandHandle() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getOperandHandleMutable() {
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

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getResult() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(0).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure matchValue(
        ::mlir::Value current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredElementalBitwidthOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredInitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredInitOpGenericAdaptorBase {
public:
  struct Properties {
    using is_allTy = ::mlir::UnitAttr;
    is_allTy is_all;

    auto getIsAll() {
      auto &propStorage = this->is_all;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setIsAll(const ::mlir::UnitAttr &propValue) {
      this->is_all = propValue;
    }
    using is_invertedTy = ::mlir::UnitAttr;
    is_invertedTy is_inverted;

    auto getIsInverted() {
      auto &propStorage = this->is_inverted;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setIsInverted(const ::mlir::UnitAttr &propValue) {
      this->is_inverted = propValue;
    }
    using permutationTy = ::mlir::UnitAttr;
    permutationTy permutation;

    auto getPermutation() {
      auto &propStorage = this->permutation;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setPermutation(const ::mlir::UnitAttr &propValue) {
      this->permutation = propValue;
    }
    using projected_permutationTy = ::mlir::UnitAttr;
    projected_permutationTy projected_permutation;

    auto getProjectedPermutation() {
      auto &propStorage = this->projected_permutation;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setProjectedPermutation(const ::mlir::UnitAttr &propValue) {
      this->projected_permutation = propValue;
    }
    using raw_position_listTy = ::mlir::DenseI64ArrayAttr;
    raw_position_listTy raw_position_list;

    auto getRawPositionList() {
      auto &propStorage = this->raw_position_list;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setRawPositionList(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->raw_position_list = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.is_all == this->is_all &&
        rhs.is_inverted == this->is_inverted &&
        rhs.permutation == this->permutation &&
        rhs.projected_permutation == this->projected_permutation &&
        rhs.raw_position_list == this->raw_position_list &&
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
  MatchStructuredInitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.init", odsAttrs.getContext());
  }

  MatchStructuredInitOpGenericAdaptorBase(MatchStructuredInitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getRawPositionListAttr() {
    auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().raw_position_list);
    return attr;
  }

  ::llvm::ArrayRef<int64_t> getRawPositionList();
  ::mlir::UnitAttr getIsInvertedAttr();
  bool getIsInverted();
  ::mlir::UnitAttr getIsAllAttr();
  bool getIsAll();
  ::mlir::UnitAttr getPermutationAttr();
  bool getPermutation();
  ::mlir::UnitAttr getProjectedPermutationAttr();
  bool getProjectedPermutation();
};
} // namespace detail
template <typename RangeT>
class MatchStructuredInitOpGenericAdaptor : public detail::MatchStructuredInitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredInitOpGenericAdaptorBase;
public:
  MatchStructuredInitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredInitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredInitOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MatchStructuredInitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MatchStructuredInitOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MatchStructuredInitOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredInitOp>>>
  MatchStructuredInitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredInitOpAdaptor : public MatchStructuredInitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredInitOpGenericAdaptor::MatchStructuredInitOpGenericAdaptor;
  MatchStructuredInitOpAdaptor(MatchStructuredInitOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredInitOp : public ::mlir::Op<MatchStructuredInitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::StructuredOpPredicateOpTrait, ::mlir::transform::SingleOpMatcherOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredInitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredInitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("is_all"), ::llvm::StringRef("is_inverted"), ::llvm::StringRef("permutation"), ::llvm::StringRef("projected_permutation"), ::llvm::StringRef("raw_position_list")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIsAllAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIsAllAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIsInvertedAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIsInvertedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getPermutationAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getPermutationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getProjectedPermutationAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getProjectedPermutationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getRawPositionListAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getRawPositionListAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.init");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getOperandHandleMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Value getResult() {
    auto results = getODSResults(0);
    return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
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
  ::mlir::DenseI64ArrayAttr getRawPositionListAttr() {
    return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().raw_position_list);
  }

  ::llvm::ArrayRef<int64_t> getRawPositionList();
  ::mlir::UnitAttr getIsInvertedAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_inverted);
  }

  bool getIsInverted();
  ::mlir::UnitAttr getIsAllAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_all);
  }

  bool getIsAll();
  ::mlir::UnitAttr getPermutationAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().permutation);
  }

  bool getPermutation();
  ::mlir::UnitAttr getProjectedPermutationAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().projected_permutation);
  }

  bool getProjectedPermutation();
  void setRawPositionListAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().raw_position_list = attr;
  }

  void setRawPositionList(::llvm::ArrayRef<int64_t> attrValue);
  void setIsInvertedAttr(::mlir::UnitAttr attr) {
    getProperties().is_inverted = attr;
  }

  void setIsInverted(bool attrValue);
  void setIsAllAttr(::mlir::UnitAttr attr) {
    getProperties().is_all = attr;
  }

  void setIsAll(bool attrValue);
  void setPermutationAttr(::mlir::UnitAttr attr) {
    getProperties().permutation = attr;
  }

  void setPermutation(bool attrValue);
  void setProjectedPermutationAttr(::mlir::UnitAttr attr) {
    getProperties().projected_permutation = attr;
  }

  void setProjectedPermutation(bool attrValue);
  ::mlir::Attribute removeIsInvertedAttr() {
      auto &attr = getProperties().is_inverted;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeIsAllAttr() {
      auto &attr = getProperties().is_all;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removePermutationAttr() {
      auto &attr = getProperties().permutation;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeProjectedPermutationAttr() {
      auto &attr = getProperties().projected_permutation;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all = nullptr, /*optional*/::mlir::UnitAttr permutation = nullptr, /*optional*/::mlir::UnitAttr projected_permutation = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all = nullptr, /*optional*/::mlir::UnitAttr permutation = nullptr, /*optional*/::mlir::UnitAttr projected_permutation = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted = false, /*optional*/bool is_all = false, /*optional*/bool permutation = false, /*optional*/bool projected_permutation = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted = false, /*optional*/bool is_all = false, /*optional*/bool permutation = false, /*optional*/bool projected_permutation = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
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
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);

  ::mlir::DiagnosedSilenceableFailure getPositionsFor(
      ::mlir::linalg::LinalgOp op,
      ::llvm::SmallVectorImpl<int64_t> &positions);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredInitOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredInputOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredInputOpGenericAdaptorBase {
public:
  struct Properties {
    using is_allTy = ::mlir::UnitAttr;
    is_allTy is_all;

    auto getIsAll() {
      auto &propStorage = this->is_all;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setIsAll(const ::mlir::UnitAttr &propValue) {
      this->is_all = propValue;
    }
    using is_invertedTy = ::mlir::UnitAttr;
    is_invertedTy is_inverted;

    auto getIsInverted() {
      auto &propStorage = this->is_inverted;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setIsInverted(const ::mlir::UnitAttr &propValue) {
      this->is_inverted = propValue;
    }
    using permutationTy = ::mlir::UnitAttr;
    permutationTy permutation;

    auto getPermutation() {
      auto &propStorage = this->permutation;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setPermutation(const ::mlir::UnitAttr &propValue) {
      this->permutation = propValue;
    }
    using projected_permutationTy = ::mlir::UnitAttr;
    projected_permutationTy projected_permutation;

    auto getProjectedPermutation() {
      auto &propStorage = this->projected_permutation;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setProjectedPermutation(const ::mlir::UnitAttr &propValue) {
      this->projected_permutation = propValue;
    }
    using raw_position_listTy = ::mlir::DenseI64ArrayAttr;
    raw_position_listTy raw_position_list;

    auto getRawPositionList() {
      auto &propStorage = this->raw_position_list;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setRawPositionList(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->raw_position_list = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.is_all == this->is_all &&
        rhs.is_inverted == this->is_inverted &&
        rhs.permutation == this->permutation &&
        rhs.projected_permutation == this->projected_permutation &&
        rhs.raw_position_list == this->raw_position_list &&
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
  MatchStructuredInputOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.input", odsAttrs.getContext());
  }

  MatchStructuredInputOpGenericAdaptorBase(MatchStructuredInputOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getRawPositionListAttr() {
    auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().raw_position_list);
    return attr;
  }

  ::llvm::ArrayRef<int64_t> getRawPositionList();
  ::mlir::UnitAttr getIsInvertedAttr();
  bool getIsInverted();
  ::mlir::UnitAttr getIsAllAttr();
  bool getIsAll();
  ::mlir::UnitAttr getPermutationAttr();
  bool getPermutation();
  ::mlir::UnitAttr getProjectedPermutationAttr();
  bool getProjectedPermutation();
};
} // namespace detail
template <typename RangeT>
class MatchStructuredInputOpGenericAdaptor : public detail::MatchStructuredInputOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredInputOpGenericAdaptorBase;
public:
  MatchStructuredInputOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredInputOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredInputOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MatchStructuredInputOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MatchStructuredInputOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MatchStructuredInputOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredInputOp>>>
  MatchStructuredInputOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredInputOpAdaptor : public MatchStructuredInputOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredInputOpGenericAdaptor::MatchStructuredInputOpGenericAdaptor;
  MatchStructuredInputOpAdaptor(MatchStructuredInputOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredInputOp : public ::mlir::Op<MatchStructuredInputOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::StructuredOpPredicateOpTrait, ::mlir::transform::SingleOpMatcherOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredInputOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredInputOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("is_all"), ::llvm::StringRef("is_inverted"), ::llvm::StringRef("permutation"), ::llvm::StringRef("projected_permutation"), ::llvm::StringRef("raw_position_list")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIsAllAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIsAllAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIsInvertedAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIsInvertedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getPermutationAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getPermutationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getProjectedPermutationAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getProjectedPermutationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getRawPositionListAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getRawPositionListAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.input");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getOperandHandleMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Value getResult() {
    auto results = getODSResults(0);
    return results.empty() ? ::mlir::Value() : ::llvm::cast<::mlir::Value>(*results.begin());
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
  ::mlir::DenseI64ArrayAttr getRawPositionListAttr() {
    return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().raw_position_list);
  }

  ::llvm::ArrayRef<int64_t> getRawPositionList();
  ::mlir::UnitAttr getIsInvertedAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_inverted);
  }

  bool getIsInverted();
  ::mlir::UnitAttr getIsAllAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_all);
  }

  bool getIsAll();
  ::mlir::UnitAttr getPermutationAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().permutation);
  }

  bool getPermutation();
  ::mlir::UnitAttr getProjectedPermutationAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().projected_permutation);
  }

  bool getProjectedPermutation();
  void setRawPositionListAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().raw_position_list = attr;
  }

  void setRawPositionList(::llvm::ArrayRef<int64_t> attrValue);
  void setIsInvertedAttr(::mlir::UnitAttr attr) {
    getProperties().is_inverted = attr;
  }

  void setIsInverted(bool attrValue);
  void setIsAllAttr(::mlir::UnitAttr attr) {
    getProperties().is_all = attr;
  }

  void setIsAll(bool attrValue);
  void setPermutationAttr(::mlir::UnitAttr attr) {
    getProperties().permutation = attr;
  }

  void setPermutation(bool attrValue);
  void setProjectedPermutationAttr(::mlir::UnitAttr attr) {
    getProperties().projected_permutation = attr;
  }

  void setProjectedPermutation(bool attrValue);
  ::mlir::Attribute removeIsInvertedAttr() {
      auto &attr = getProperties().is_inverted;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeIsAllAttr() {
      auto &attr = getProperties().is_all;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removePermutationAttr() {
      auto &attr = getProperties().permutation;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeProjectedPermutationAttr() {
      auto &attr = getProperties().projected_permutation;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all = nullptr, /*optional*/::mlir::UnitAttr permutation = nullptr, /*optional*/::mlir::UnitAttr projected_permutation = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all = nullptr, /*optional*/::mlir::UnitAttr permutation = nullptr, /*optional*/::mlir::UnitAttr projected_permutation = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Type result, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted = false, /*optional*/bool is_all = false, /*optional*/bool permutation = false, /*optional*/bool projected_permutation = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted = false, /*optional*/bool is_all = false, /*optional*/bool permutation = false, /*optional*/bool projected_permutation = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
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
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);

  ::mlir::DiagnosedSilenceableFailure getPositionsFor(
      ::mlir::linalg::LinalgOp op,
      ::llvm::SmallVectorImpl<int64_t> &positions);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredInputOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredNumInitsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredNumInitsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MatchStructuredNumInitsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.num_inits", odsAttrs.getContext());
  }

  MatchStructuredNumInitsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class MatchStructuredNumInitsOpGenericAdaptor : public detail::MatchStructuredNumInitsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredNumInitsOpGenericAdaptorBase;
public:
  MatchStructuredNumInitsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredNumInitsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredNumInitsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MatchStructuredNumInitsOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredNumInitsOp>>>
  MatchStructuredNumInitsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredNumInitsOpAdaptor : public MatchStructuredNumInitsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredNumInitsOpGenericAdaptor::MatchStructuredNumInitsOpGenericAdaptor;
  MatchStructuredNumInitsOpAdaptor(MatchStructuredNumInitsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredNumInitsOp : public ::mlir::Op<MatchStructuredNumInitsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformParamTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::StructuredOpPredicateOpTrait, ::mlir::transform::SingleOpMatcherOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredNumInitsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredNumInitsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.num_inits");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getOperandHandleMutable() {
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

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getResult() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(0).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredNumInitsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredNumInputsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredNumInputsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MatchStructuredNumInputsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.num_inputs", odsAttrs.getContext());
  }

  MatchStructuredNumInputsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class MatchStructuredNumInputsOpGenericAdaptor : public detail::MatchStructuredNumInputsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredNumInputsOpGenericAdaptorBase;
public:
  MatchStructuredNumInputsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredNumInputsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredNumInputsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MatchStructuredNumInputsOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredNumInputsOp>>>
  MatchStructuredNumInputsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredNumInputsOpAdaptor : public MatchStructuredNumInputsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredNumInputsOpGenericAdaptor::MatchStructuredNumInputsOpGenericAdaptor;
  MatchStructuredNumInputsOpAdaptor(MatchStructuredNumInputsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredNumInputsOp : public ::mlir::Op<MatchStructuredNumInputsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformParamTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::StructuredOpPredicateOpTrait, ::mlir::transform::SingleOpMatcherOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredNumInputsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredNumInputsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.num_inputs");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getOperandHandleMutable() {
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

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getResult() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(0).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredNumInputsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredOpGenericAdaptorBase {
public:
  struct Properties {
    using failure_propagation_modeTy = ::mlir::transform::FailurePropagationModeAttr;
    failure_propagation_modeTy failure_propagation_mode;

    auto getFailurePropagationMode() {
      auto &propStorage = this->failure_propagation_mode;
      return ::llvm::dyn_cast_or_null<::mlir::transform::FailurePropagationModeAttr>(propStorage);
    }
    void setFailurePropagationMode(const ::mlir::transform::FailurePropagationModeAttr &propValue) {
      this->failure_propagation_mode = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.failure_propagation_mode == this->failure_propagation_mode &&
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
  MatchStructuredOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured", odsAttrs.getContext());
  }

  MatchStructuredOpGenericAdaptorBase(MatchStructuredOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::transform::FailurePropagationModeAttr getFailurePropagationModeAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::transform::FailurePropagationModeAttr>(getProperties().failure_propagation_mode);
    return attr;
  }

  ::std::optional<::mlir::transform::FailurePropagationMode> getFailurePropagationMode();
  ::mlir::Region &getBodyRegion() {
    return *odsRegions[0];
  }

  ::mlir::RegionRange getRegions() {
    return odsRegions;
  }

};
} // namespace detail
template <typename RangeT>
class MatchStructuredOpGenericAdaptor : public detail::MatchStructuredOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredOpGenericAdaptorBase;
public:
  MatchStructuredOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MatchStructuredOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MatchStructuredOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MatchStructuredOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredOp>>>
  MatchStructuredOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCurrent() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredOpAdaptor : public MatchStructuredOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredOpGenericAdaptor::MatchStructuredOpGenericAdaptor;
  MatchStructuredOpAdaptor(MatchStructuredOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredOp : public ::mlir::Op<MatchStructuredOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::SingleBlockImplicitTerminator<::mlir::transform::MatchStructuredYieldOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::SingleOpMatcherOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("failure_propagation_mode")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFailurePropagationModeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFailurePropagationModeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getCurrent() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getCurrentMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Operation::result_range getOutputs() {
    return getODSResults(0);
  }

  ::mlir::Region &getBodyRegion() {
    return (*this)->getRegion(0);
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
  ::mlir::transform::FailurePropagationModeAttr getFailurePropagationModeAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::transform::FailurePropagationModeAttr>(getProperties().failure_propagation_mode);
  }

  ::std::optional<::mlir::transform::FailurePropagationMode> getFailurePropagationMode();
  void setFailurePropagationModeAttr(::mlir::transform::FailurePropagationModeAttr attr) {
    getProperties().failure_propagation_mode = attr;
  }

  void setFailurePropagationMode(::std::optional<::mlir::transform::FailurePropagationMode> attrValue);
  ::mlir::Attribute removeFailurePropagationModeAttr() {
      auto &attr = getProperties().failure_propagation_mode;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::Value current, /*optional*/::mlir::transform::FailurePropagationModeAttr failure_propagation_mode);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);

  ::mlir::Value getOperandHandle() { return getCurrent(); }
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredRankOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredRankOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MatchStructuredRankOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.rank", odsAttrs.getContext());
  }

  MatchStructuredRankOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class MatchStructuredRankOpGenericAdaptor : public detail::MatchStructuredRankOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredRankOpGenericAdaptorBase;
public:
  MatchStructuredRankOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredRankOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredRankOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MatchStructuredRankOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredRankOp>>>
  MatchStructuredRankOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredRankOpAdaptor : public MatchStructuredRankOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredRankOpGenericAdaptor::MatchStructuredRankOpGenericAdaptor;
  MatchStructuredRankOpAdaptor(MatchStructuredRankOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredRankOp : public ::mlir::Op<MatchStructuredRankOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformParamTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::StructuredOpPredicateOpTrait, ::mlir::transform::SingleOpMatcherOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredRankOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredRankOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.rank");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getOperandHandleMutable() {
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

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getRank() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSResults(0).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type rank, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredRankOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredResultOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredResultOpGenericAdaptorBase {
public:
  struct Properties {
    using anyTy = ::mlir::UnitAttr;
    anyTy any;

    auto getAny() {
      auto &propStorage = this->any;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setAny(const ::mlir::UnitAttr &propValue) {
      this->any = propValue;
    }
    using positionTy = ::mlir::IntegerAttr;
    positionTy position;

    auto getPosition() {
      auto &propStorage = this->position;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setPosition(const ::mlir::IntegerAttr &propValue) {
      this->position = propValue;
    }
    using singleTy = ::mlir::UnitAttr;
    singleTy single;

    auto getSingle() {
      auto &propStorage = this->single;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setSingle(const ::mlir::UnitAttr &propValue) {
      this->single = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.any == this->any &&
        rhs.position == this->position &&
        rhs.single == this->single &&
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
  MatchStructuredResultOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.result", odsAttrs.getContext());
  }

  MatchStructuredResultOpGenericAdaptorBase(MatchStructuredResultOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getPositionAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().position);
    return attr;
  }

  uint64_t getPosition();
  ::mlir::UnitAttr getAnyAttr();
  bool getAny();
  ::mlir::UnitAttr getSingleAttr();
  bool getSingle();
};
} // namespace detail
template <typename RangeT>
class MatchStructuredResultOpGenericAdaptor : public detail::MatchStructuredResultOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredResultOpGenericAdaptorBase;
public:
  MatchStructuredResultOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredResultOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredResultOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MatchStructuredResultOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MatchStructuredResultOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MatchStructuredResultOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredResultOp>>>
  MatchStructuredResultOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredResultOpAdaptor : public MatchStructuredResultOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredResultOpGenericAdaptor::MatchStructuredResultOpGenericAdaptor;
  MatchStructuredResultOpAdaptor(MatchStructuredResultOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredResultOp : public ::mlir::Op<MatchStructuredResultOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::StructuredOpPredicateOpTrait, ::mlir::transform::SingleOpMatcherOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredResultOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredResultOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("any"), ::llvm::StringRef("position"), ::llvm::StringRef("single")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAnyAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAnyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getPositionAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getPositionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getSingleAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getSingleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.result");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getOperandHandleMutable() {
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

  ::mlir::Value getResult() {
    return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
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
  ::mlir::IntegerAttr getPositionAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().position);
  }

  uint64_t getPosition();
  ::mlir::UnitAttr getAnyAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().any);
  }

  bool getAny();
  ::mlir::UnitAttr getSingleAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().single);
  }

  bool getSingle();
  void setPositionAttr(::mlir::IntegerAttr attr) {
    getProperties().position = attr;
  }

  void setPosition(uint64_t attrValue);
  void setAnyAttr(::mlir::UnitAttr attr) {
    getProperties().any = attr;
  }

  void setAny(bool attrValue);
  void setSingleAttr(::mlir::UnitAttr attr) {
    getProperties().single = attr;
  }

  void setSingle(bool attrValue);
  ::mlir::Attribute removeAnyAttr() {
      auto &attr = getProperties().any;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeSingleAttr() {
      auto &attr = getProperties().single;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand_handle, ::mlir::IntegerAttr position, /*optional*/::mlir::UnitAttr any, /*optional*/::mlir::UnitAttr single = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::mlir::IntegerAttr position, /*optional*/::mlir::UnitAttr any, /*optional*/::mlir::UnitAttr single = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand_handle, uint64_t position, /*optional*/bool any = false, /*optional*/bool single = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, uint64_t position, /*optional*/bool any = false, /*optional*/bool single = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);

  ::mlir::DiagnosedSilenceableFailure
  getPositionFor(::mlir::linalg::LinalgOp op, int64_t &position);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredResultOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchStructuredYieldOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchStructuredYieldOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MatchStructuredYieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.match.structured.yield", odsAttrs.getContext());
  }

  MatchStructuredYieldOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class MatchStructuredYieldOpGenericAdaptor : public detail::MatchStructuredYieldOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchStructuredYieldOpGenericAdaptorBase;
public:
  MatchStructuredYieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchStructuredYieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchStructuredYieldOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MatchStructuredYieldOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchStructuredYieldOp>>>
  MatchStructuredYieldOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getHandles() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchStructuredYieldOpAdaptor : public MatchStructuredYieldOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchStructuredYieldOpGenericAdaptor::MatchStructuredYieldOpGenericAdaptor;
  MatchStructuredYieldOpAdaptor(MatchStructuredYieldOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchStructuredYieldOp : public ::mlir::Op<MatchStructuredYieldOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchStructuredYieldOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchStructuredYieldOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.structured.yield");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Operation::operand_range getHandles() {
    return getODSOperands(0);
  }

  ::mlir::MutableOperandRange getHandlesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange handles);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchStructuredYieldOp)


#endif  // GET_OP_CLASSES

