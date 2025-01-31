/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: BufferizationTransformOps.td                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace transform {
class BufferLoopHoistingOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class EliminateEmptyTensorsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class EmptyTensorToAllocTensorOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class OneShotBufferizeOp;
} // namespace transform
} // namespace mlir
#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::BufferLoopHoistingOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BufferLoopHoistingOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BufferLoopHoistingOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.bufferization.buffer_loop_hoisting", odsAttrs.getContext());
  }

  BufferLoopHoistingOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class BufferLoopHoistingOpGenericAdaptor : public detail::BufferLoopHoistingOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BufferLoopHoistingOpGenericAdaptorBase;
public:
  BufferLoopHoistingOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BufferLoopHoistingOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BufferLoopHoistingOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BufferLoopHoistingOp, typename = std::enable_if_t<std::is_same_v<LateInst, BufferLoopHoistingOp>>>
  BufferLoopHoistingOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class BufferLoopHoistingOpAdaptor : public BufferLoopHoistingOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BufferLoopHoistingOpGenericAdaptor::BufferLoopHoistingOpGenericAdaptor;
  BufferLoopHoistingOpAdaptor(BufferLoopHoistingOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class BufferLoopHoistingOp : public ::mlir::Op<BufferLoopHoistingOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BufferLoopHoistingOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BufferLoopHoistingOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.bufferization.buffer_loop_hoisting");
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

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::BufferLoopHoistingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EliminateEmptyTensorsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class EliminateEmptyTensorsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  EliminateEmptyTensorsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.bufferization.eliminate_empty_tensors", odsAttrs.getContext());
  }

  EliminateEmptyTensorsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class EliminateEmptyTensorsOpGenericAdaptor : public detail::EliminateEmptyTensorsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::EliminateEmptyTensorsOpGenericAdaptorBase;
public:
  EliminateEmptyTensorsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  EliminateEmptyTensorsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : EliminateEmptyTensorsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = EliminateEmptyTensorsOp, typename = std::enable_if_t<std::is_same_v<LateInst, EliminateEmptyTensorsOp>>>
  EliminateEmptyTensorsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class EliminateEmptyTensorsOpAdaptor : public EliminateEmptyTensorsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using EliminateEmptyTensorsOpGenericAdaptor::EliminateEmptyTensorsOpGenericAdaptor;
  EliminateEmptyTensorsOpAdaptor(EliminateEmptyTensorsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class EliminateEmptyTensorsOp : public ::mlir::Op<EliminateEmptyTensorsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = EliminateEmptyTensorsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = EliminateEmptyTensorsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.bufferization.eliminate_empty_tensors");
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

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::EliminateEmptyTensorsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EmptyTensorToAllocTensorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class EmptyTensorToAllocTensorOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  EmptyTensorToAllocTensorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.bufferization.empty_tensor_to_alloc_tensor", odsAttrs.getContext());
  }

  EmptyTensorToAllocTensorOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class EmptyTensorToAllocTensorOpGenericAdaptor : public detail::EmptyTensorToAllocTensorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::EmptyTensorToAllocTensorOpGenericAdaptorBase;
public:
  EmptyTensorToAllocTensorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  EmptyTensorToAllocTensorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : EmptyTensorToAllocTensorOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = EmptyTensorToAllocTensorOp, typename = std::enable_if_t<std::is_same_v<LateInst, EmptyTensorToAllocTensorOp>>>
  EmptyTensorToAllocTensorOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class EmptyTensorToAllocTensorOpAdaptor : public EmptyTensorToAllocTensorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using EmptyTensorToAllocTensorOpGenericAdaptor::EmptyTensorToAllocTensorOpGenericAdaptor;
  EmptyTensorToAllocTensorOpAdaptor(EmptyTensorToAllocTensorOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class EmptyTensorToAllocTensorOp : public ::mlir::Op<EmptyTensorToAllocTensorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::OperationType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = EmptyTensorToAllocTensorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = EmptyTensorToAllocTensorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.bufferization.empty_tensor_to_alloc_tensor");
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

  ::mlir::TypedValue<::mlir::transform::OperationType> getTransformed() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(0).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::tensor::EmptyOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::EmptyTensorToAllocTensorOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::OneShotBufferizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class OneShotBufferizeOpGenericAdaptorBase {
public:
  struct Properties {
    using allow_return_allocs_from_loopsTy = ::mlir::BoolAttr;
    allow_return_allocs_from_loopsTy allow_return_allocs_from_loops;

    auto getAllowReturnAllocsFromLoops() {
      auto &propStorage = this->allow_return_allocs_from_loops;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setAllowReturnAllocsFromLoops(const ::mlir::BoolAttr &propValue) {
      this->allow_return_allocs_from_loops = propValue;
    }
    using allow_unknown_opsTy = ::mlir::BoolAttr;
    allow_unknown_opsTy allow_unknown_ops;

    auto getAllowUnknownOps() {
      auto &propStorage = this->allow_unknown_ops;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setAllowUnknownOps(const ::mlir::BoolAttr &propValue) {
      this->allow_unknown_ops = propValue;
    }
    using bufferize_function_boundariesTy = ::mlir::BoolAttr;
    bufferize_function_boundariesTy bufferize_function_boundaries;

    auto getBufferizeFunctionBoundaries() {
      auto &propStorage = this->bufferize_function_boundaries;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setBufferizeFunctionBoundaries(const ::mlir::BoolAttr &propValue) {
      this->bufferize_function_boundaries = propValue;
    }
    using check_parallel_regionsTy = ::mlir::BoolAttr;
    check_parallel_regionsTy check_parallel_regions;

    auto getCheckParallelRegions() {
      auto &propStorage = this->check_parallel_regions;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setCheckParallelRegions(const ::mlir::BoolAttr &propValue) {
      this->check_parallel_regions = propValue;
    }
    using dump_alias_setsTy = ::mlir::BoolAttr;
    dump_alias_setsTy dump_alias_sets;

    auto getDumpAliasSets() {
      auto &propStorage = this->dump_alias_sets;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setDumpAliasSets(const ::mlir::BoolAttr &propValue) {
      this->dump_alias_sets = propValue;
    }
    using function_boundary_type_conversionTy = ::mlir::bufferization::LayoutMapOptionAttr;
    function_boundary_type_conversionTy function_boundary_type_conversion;

    auto getFunctionBoundaryTypeConversion() {
      auto &propStorage = this->function_boundary_type_conversion;
      return ::llvm::dyn_cast_or_null<::mlir::bufferization::LayoutMapOptionAttr>(propStorage);
    }
    void setFunctionBoundaryTypeConversion(const ::mlir::bufferization::LayoutMapOptionAttr &propValue) {
      this->function_boundary_type_conversion = propValue;
    }
    using memcpy_opTy = ::mlir::StringAttr;
    memcpy_opTy memcpy_op;

    auto getMemcpyOp() {
      auto &propStorage = this->memcpy_op;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setMemcpyOp(const ::mlir::StringAttr &propValue) {
      this->memcpy_op = propValue;
    }
    using print_conflictsTy = ::mlir::BoolAttr;
    print_conflictsTy print_conflicts;

    auto getPrintConflicts() {
      auto &propStorage = this->print_conflicts;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setPrintConflicts(const ::mlir::BoolAttr &propValue) {
      this->print_conflicts = propValue;
    }
    using test_analysis_onlyTy = ::mlir::BoolAttr;
    test_analysis_onlyTy test_analysis_only;

    auto getTestAnalysisOnly() {
      auto &propStorage = this->test_analysis_only;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setTestAnalysisOnly(const ::mlir::BoolAttr &propValue) {
      this->test_analysis_only = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.allow_return_allocs_from_loops == this->allow_return_allocs_from_loops &&
        rhs.allow_unknown_ops == this->allow_unknown_ops &&
        rhs.bufferize_function_boundaries == this->bufferize_function_boundaries &&
        rhs.check_parallel_regions == this->check_parallel_regions &&
        rhs.dump_alias_sets == this->dump_alias_sets &&
        rhs.function_boundary_type_conversion == this->function_boundary_type_conversion &&
        rhs.memcpy_op == this->memcpy_op &&
        rhs.print_conflicts == this->print_conflicts &&
        rhs.test_analysis_only == this->test_analysis_only &&
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
  OneShotBufferizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.bufferization.one_shot_bufferize", odsAttrs.getContext());
  }

  OneShotBufferizeOpGenericAdaptorBase(OneShotBufferizeOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::bufferization::LayoutMapOptionAttr getFunctionBoundaryTypeConversionAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::bufferization::LayoutMapOptionAttr>(getProperties().function_boundary_type_conversion);
    return attr;
  }

  ::std::optional<::mlir::bufferization::LayoutMapOption> getFunctionBoundaryTypeConversion();
  ::mlir::BoolAttr getAllowReturnAllocsFromLoopsAttr();
  bool getAllowReturnAllocsFromLoops();
  ::mlir::BoolAttr getAllowUnknownOpsAttr();
  bool getAllowUnknownOps();
  ::mlir::BoolAttr getBufferizeFunctionBoundariesAttr();
  bool getBufferizeFunctionBoundaries();
  ::mlir::BoolAttr getDumpAliasSetsAttr();
  bool getDumpAliasSets();
  ::mlir::BoolAttr getTestAnalysisOnlyAttr();
  bool getTestAnalysisOnly();
  ::mlir::BoolAttr getPrintConflictsAttr();
  bool getPrintConflicts();
  ::mlir::BoolAttr getCheckParallelRegionsAttr();
  bool getCheckParallelRegions();
  ::mlir::StringAttr getMemcpyOpAttr();
  ::llvm::StringRef getMemcpyOp();
};
} // namespace detail
template <typename RangeT>
class OneShotBufferizeOpGenericAdaptor : public detail::OneShotBufferizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::OneShotBufferizeOpGenericAdaptorBase;
public:
  OneShotBufferizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  OneShotBufferizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : OneShotBufferizeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  OneShotBufferizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : OneShotBufferizeOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = OneShotBufferizeOp, typename = std::enable_if_t<std::is_same_v<LateInst, OneShotBufferizeOp>>>
  OneShotBufferizeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class OneShotBufferizeOpAdaptor : public OneShotBufferizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using OneShotBufferizeOpGenericAdaptor::OneShotBufferizeOpGenericAdaptor;
  OneShotBufferizeOpAdaptor(OneShotBufferizeOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class OneShotBufferizeOp : public ::mlir::Op<OneShotBufferizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = OneShotBufferizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = OneShotBufferizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("allow_return_allocs_from_loops"), ::llvm::StringRef("allow_unknown_ops"), ::llvm::StringRef("bufferize_function_boundaries"), ::llvm::StringRef("check_parallel_regions"), ::llvm::StringRef("dump_alias_sets"), ::llvm::StringRef("function_boundary_type_conversion"), ::llvm::StringRef("memcpy_op"), ::llvm::StringRef("print_conflicts"), ::llvm::StringRef("test_analysis_only")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAllowReturnAllocsFromLoopsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAllowReturnAllocsFromLoopsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getAllowUnknownOpsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getAllowUnknownOpsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getBufferizeFunctionBoundariesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getBufferizeFunctionBoundariesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getCheckParallelRegionsAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getCheckParallelRegionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getDumpAliasSetsAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getDumpAliasSetsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getFunctionBoundaryTypeConversionAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getFunctionBoundaryTypeConversionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getMemcpyOpAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getMemcpyOpAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getPrintConflictsAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getPrintConflictsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getTestAnalysisOnlyAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getTestAnalysisOnlyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.bufferization.one_shot_bufferize");
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
  ::mlir::bufferization::LayoutMapOptionAttr getFunctionBoundaryTypeConversionAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::bufferization::LayoutMapOptionAttr>(getProperties().function_boundary_type_conversion);
  }

  ::std::optional<::mlir::bufferization::LayoutMapOption> getFunctionBoundaryTypeConversion();
  ::mlir::BoolAttr getAllowReturnAllocsFromLoopsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().allow_return_allocs_from_loops);
  }

  bool getAllowReturnAllocsFromLoops();
  ::mlir::BoolAttr getAllowUnknownOpsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().allow_unknown_ops);
  }

  bool getAllowUnknownOps();
  ::mlir::BoolAttr getBufferizeFunctionBoundariesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().bufferize_function_boundaries);
  }

  bool getBufferizeFunctionBoundaries();
  ::mlir::BoolAttr getDumpAliasSetsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().dump_alias_sets);
  }

  bool getDumpAliasSets();
  ::mlir::BoolAttr getTestAnalysisOnlyAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().test_analysis_only);
  }

  bool getTestAnalysisOnly();
  ::mlir::BoolAttr getPrintConflictsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().print_conflicts);
  }

  bool getPrintConflicts();
  ::mlir::BoolAttr getCheckParallelRegionsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().check_parallel_regions);
  }

  bool getCheckParallelRegions();
  ::mlir::StringAttr getMemcpyOpAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().memcpy_op);
  }

  ::llvm::StringRef getMemcpyOp();
  void setFunctionBoundaryTypeConversionAttr(::mlir::bufferization::LayoutMapOptionAttr attr) {
    getProperties().function_boundary_type_conversion = attr;
  }

  void setFunctionBoundaryTypeConversion(::std::optional<::mlir::bufferization::LayoutMapOption> attrValue);
  void setAllowReturnAllocsFromLoopsAttr(::mlir::BoolAttr attr) {
    getProperties().allow_return_allocs_from_loops = attr;
  }

  void setAllowReturnAllocsFromLoops(bool attrValue);
  void setAllowUnknownOpsAttr(::mlir::BoolAttr attr) {
    getProperties().allow_unknown_ops = attr;
  }

  void setAllowUnknownOps(bool attrValue);
  void setBufferizeFunctionBoundariesAttr(::mlir::BoolAttr attr) {
    getProperties().bufferize_function_boundaries = attr;
  }

  void setBufferizeFunctionBoundaries(bool attrValue);
  void setDumpAliasSetsAttr(::mlir::BoolAttr attr) {
    getProperties().dump_alias_sets = attr;
  }

  void setDumpAliasSets(bool attrValue);
  void setTestAnalysisOnlyAttr(::mlir::BoolAttr attr) {
    getProperties().test_analysis_only = attr;
  }

  void setTestAnalysisOnly(bool attrValue);
  void setPrintConflictsAttr(::mlir::BoolAttr attr) {
    getProperties().print_conflicts = attr;
  }

  void setPrintConflicts(bool attrValue);
  void setCheckParallelRegionsAttr(::mlir::BoolAttr attr) {
    getProperties().check_parallel_regions = attr;
  }

  void setCheckParallelRegions(bool attrValue);
  void setMemcpyOpAttr(::mlir::StringAttr attr) {
    getProperties().memcpy_op = attr;
  }

  void setMemcpyOp(::llvm::StringRef attrValue);
  ::mlir::Attribute removeFunctionBoundaryTypeConversionAttr() {
      auto &attr = getProperties().function_boundary_type_conversion;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, ::mlir::BoolAttr allow_return_allocs_from_loops, ::mlir::BoolAttr allow_unknown_ops = nullptr, ::mlir::BoolAttr bufferize_function_boundaries = nullptr, ::mlir::BoolAttr dump_alias_sets = nullptr, ::mlir::BoolAttr test_analysis_only = nullptr, ::mlir::BoolAttr print_conflicts = nullptr, ::mlir::BoolAttr check_parallel_regions = nullptr, ::mlir::StringAttr memcpy_op = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, ::mlir::BoolAttr allow_return_allocs_from_loops, ::mlir::BoolAttr allow_unknown_ops = nullptr, ::mlir::BoolAttr bufferize_function_boundaries = nullptr, ::mlir::BoolAttr dump_alias_sets = nullptr, ::mlir::BoolAttr test_analysis_only = nullptr, ::mlir::BoolAttr print_conflicts = nullptr, ::mlir::BoolAttr check_parallel_regions = nullptr, ::mlir::StringAttr memcpy_op = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, bool allow_return_allocs_from_loops = false, bool allow_unknown_ops = false, bool bufferize_function_boundaries = false, bool dump_alias_sets = false, bool test_analysis_only = false, bool print_conflicts = false, bool check_parallel_regions = true, ::llvm::StringRef memcpy_op = "memref.copy");
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::bufferization::LayoutMapOptionAttr function_boundary_type_conversion, bool allow_return_allocs_from_loops = false, bool allow_unknown_ops = false, bool bufferize_function_boundaries = false, bool dump_alias_sets = false, bool test_analysis_only = false, bool print_conflicts = false, bool check_parallel_regions = true, ::llvm::StringRef memcpy_op = "memref.copy");
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 9 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::OneShotBufferizeOp)


#endif  // GET_OP_CLASSES

