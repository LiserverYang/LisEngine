/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: AffineTransformOps.td                                                *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace transform {
class SimplifyBoundedAffineOpsOp;
} // namespace transform
} // namespace mlir
#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SimplifyBoundedAffineOpsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SimplifyBoundedAffineOpsOpGenericAdaptorBase {
public:
  struct Properties {
    using lower_boundsTy = ::mlir::DenseI64ArrayAttr;
    lower_boundsTy lower_bounds;

    auto getLowerBounds() {
      auto &propStorage = this->lower_bounds;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setLowerBounds(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->lower_bounds = propValue;
    }
    using upper_boundsTy = ::mlir::DenseI64ArrayAttr;
    upper_boundsTy upper_bounds;

    auto getUpperBounds() {
      auto &propStorage = this->upper_bounds;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setUpperBounds(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->upper_bounds = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.lower_bounds == this->lower_bounds &&
        rhs.upper_bounds == this->upper_bounds &&
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
  SimplifyBoundedAffineOpsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.affine.simplify_bounded_affine_ops", odsAttrs.getContext());
  }

  SimplifyBoundedAffineOpsOpGenericAdaptorBase(SimplifyBoundedAffineOpsOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getLowerBoundsAttr() {
    auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().lower_bounds);
    return attr;
  }

  ::llvm::ArrayRef<int64_t> getLowerBounds();
  ::mlir::DenseI64ArrayAttr getUpperBoundsAttr() {
    auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().upper_bounds);
    return attr;
  }

  ::llvm::ArrayRef<int64_t> getUpperBounds();
};
} // namespace detail
template <typename RangeT>
class SimplifyBoundedAffineOpsOpGenericAdaptor : public detail::SimplifyBoundedAffineOpsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SimplifyBoundedAffineOpsOpGenericAdaptorBase;
public:
  SimplifyBoundedAffineOpsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SimplifyBoundedAffineOpsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SimplifyBoundedAffineOpsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  SimplifyBoundedAffineOpsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : SimplifyBoundedAffineOpsOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = SimplifyBoundedAffineOpsOp, typename = std::enable_if_t<std::is_same_v<LateInst, SimplifyBoundedAffineOpsOp>>>
  SimplifyBoundedAffineOpsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getBoundedValues() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SimplifyBoundedAffineOpsOpAdaptor : public SimplifyBoundedAffineOpsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SimplifyBoundedAffineOpsOpGenericAdaptor::SimplifyBoundedAffineOpsOpGenericAdaptor;
  SimplifyBoundedAffineOpsOpAdaptor(SimplifyBoundedAffineOpsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class SimplifyBoundedAffineOpsOp : public ::mlir::Op<SimplifyBoundedAffineOpsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SimplifyBoundedAffineOpsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SimplifyBoundedAffineOpsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("lower_bounds"), ::llvm::StringRef("upper_bounds")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLowerBoundsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLowerBoundsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getUpperBoundsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getUpperBoundsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.affine.simplify_bounded_affine_ops");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::Operation::operand_range getBoundedValues() {
    return getODSOperands(1);
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getBoundedValuesMutable();
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
  ::mlir::DenseI64ArrayAttr getLowerBoundsAttr() {
    return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().lower_bounds);
  }

  ::llvm::ArrayRef<int64_t> getLowerBounds();
  ::mlir::DenseI64ArrayAttr getUpperBoundsAttr() {
    return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().upper_bounds);
  }

  ::llvm::ArrayRef<int64_t> getUpperBounds();
  void setLowerBoundsAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().lower_bounds = attr;
  }

  void setLowerBounds(::llvm::ArrayRef<int64_t> attrValue);
  void setUpperBoundsAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().upper_bounds = attr;
  }

  void setUpperBounds(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::mlir::DenseI64ArrayAttr lower_bounds, ::mlir::DenseI64ArrayAttr upper_bounds);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::mlir::DenseI64ArrayAttr lower_bounds, ::mlir::DenseI64ArrayAttr upper_bounds);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::llvm::ArrayRef<int64_t> lower_bounds, ::llvm::ArrayRef<int64_t> upper_bounds);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange bounded_values, ::llvm::ArrayRef<int64_t> lower_bounds, ::llvm::ArrayRef<int64_t> upper_bounds);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::SimplifyBoundedAffineOpsOp)


#endif  // GET_OP_CLASSES

