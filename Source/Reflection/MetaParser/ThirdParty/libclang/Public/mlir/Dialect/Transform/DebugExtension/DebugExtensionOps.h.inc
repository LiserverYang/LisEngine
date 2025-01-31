/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: DebugExtensionOps.td                                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace transform {
class DebugEmitParamAsRemarkOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class DebugEmitRemarkAtOp;
} // namespace transform
} // namespace mlir
#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DebugEmitParamAsRemarkOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DebugEmitParamAsRemarkOpGenericAdaptorBase {
public:
  struct Properties {
    using messageTy = ::mlir::StringAttr;
    messageTy message;

    auto getMessage() {
      auto &propStorage = this->message;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setMessage(const ::mlir::StringAttr &propValue) {
      this->message = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.message == this->message &&
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
  DebugEmitParamAsRemarkOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.debug.emit_param_as_remark", odsAttrs.getContext());
  }

  DebugEmitParamAsRemarkOpGenericAdaptorBase(DebugEmitParamAsRemarkOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::StringAttr getMessageAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().message);
    return attr;
  }

  ::std::optional< ::llvm::StringRef > getMessage();
};
} // namespace detail
template <typename RangeT>
class DebugEmitParamAsRemarkOpGenericAdaptor : public detail::DebugEmitParamAsRemarkOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DebugEmitParamAsRemarkOpGenericAdaptorBase;
public:
  DebugEmitParamAsRemarkOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DebugEmitParamAsRemarkOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DebugEmitParamAsRemarkOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  DebugEmitParamAsRemarkOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : DebugEmitParamAsRemarkOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = DebugEmitParamAsRemarkOp, typename = std::enable_if_t<std::is_same_v<LateInst, DebugEmitParamAsRemarkOp>>>
  DebugEmitParamAsRemarkOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getParam() {
    return (*getODSOperands(0).begin());
  }

  ValueT getAnchor() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DebugEmitParamAsRemarkOpAdaptor : public DebugEmitParamAsRemarkOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DebugEmitParamAsRemarkOpGenericAdaptor::DebugEmitParamAsRemarkOpGenericAdaptor;
  DebugEmitParamAsRemarkOpAdaptor(DebugEmitParamAsRemarkOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class DebugEmitParamAsRemarkOp : public ::mlir::Op<DebugEmitParamAsRemarkOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DebugEmitParamAsRemarkOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DebugEmitParamAsRemarkOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("message")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMessageAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMessageAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.debug.emit_param_as_remark");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getParam() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getAnchor() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>{} : ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*operands.begin());
  }

  ::mlir::OpOperand &getParamMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getAnchorMutable();
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
  ::mlir::StringAttr getMessageAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().message);
  }

  ::std::optional< ::llvm::StringRef > getMessage();
  void setMessageAttr(::mlir::StringAttr attr) {
    getProperties().message = attr;
  }

  void setMessage(::std::optional<::llvm::StringRef> attrValue);
  ::mlir::Attribute removeMessageAttr() {
      auto &attr = getProperties().message;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value param, /*optional*/::mlir::Value anchor, /*optional*/::mlir::StringAttr message);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value param, /*optional*/::mlir::Value anchor, /*optional*/::mlir::StringAttr message);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::DebugEmitParamAsRemarkOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DebugEmitRemarkAtOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DebugEmitRemarkAtOpGenericAdaptorBase {
public:
  struct Properties {
    using messageTy = ::mlir::StringAttr;
    messageTy message;

    auto getMessage() {
      auto &propStorage = this->message;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setMessage(const ::mlir::StringAttr &propValue) {
      this->message = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.message == this->message &&
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
  DebugEmitRemarkAtOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.debug.emit_remark_at", odsAttrs.getContext());
  }

  DebugEmitRemarkAtOpGenericAdaptorBase(DebugEmitRemarkAtOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::StringAttr getMessageAttr() {
    auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().message);
    return attr;
  }

  ::llvm::StringRef getMessage();
};
} // namespace detail
template <typename RangeT>
class DebugEmitRemarkAtOpGenericAdaptor : public detail::DebugEmitRemarkAtOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DebugEmitRemarkAtOpGenericAdaptorBase;
public:
  DebugEmitRemarkAtOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DebugEmitRemarkAtOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DebugEmitRemarkAtOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  DebugEmitRemarkAtOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : DebugEmitRemarkAtOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = DebugEmitRemarkAtOp, typename = std::enable_if_t<std::is_same_v<LateInst, DebugEmitRemarkAtOp>>>
  DebugEmitRemarkAtOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAt() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DebugEmitRemarkAtOpAdaptor : public DebugEmitRemarkAtOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DebugEmitRemarkAtOpGenericAdaptor::DebugEmitRemarkAtOpGenericAdaptor;
  DebugEmitRemarkAtOpAdaptor(DebugEmitRemarkAtOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class DebugEmitRemarkAtOp : public ::mlir::Op<DebugEmitRemarkAtOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DebugEmitRemarkAtOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DebugEmitRemarkAtOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("message")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMessageAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMessageAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.debug.emit_remark_at");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Value getAt() {
    return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
  }

  ::mlir::OpOperand &getAtMutable() {
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
  ::mlir::StringAttr getMessageAttr() {
    return ::llvm::cast<::mlir::StringAttr>(getProperties().message);
  }

  ::llvm::StringRef getMessage();
  void setMessageAttr(::mlir::StringAttr attr) {
    getProperties().message = attr;
  }

  void setMessage(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value at, ::mlir::StringAttr message);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value at, ::mlir::StringAttr message);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value at, ::llvm::StringRef message);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value at, ::llvm::StringRef message);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::DebugEmitRemarkAtOp)


#endif  // GET_OP_CLASSES

