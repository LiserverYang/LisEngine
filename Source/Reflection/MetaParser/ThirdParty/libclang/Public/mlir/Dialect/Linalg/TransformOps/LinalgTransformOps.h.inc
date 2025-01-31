/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: LinalgTransformOps.td                                                *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace transform {
class ApplyEraseUnnecessaryInputsPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyFoldUnitExtentDimsViaReshapesPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyFoldUnitExtentDimsViaSlicesPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyTilingCanonicalizationPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class BufferizeToAllocationOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ContinuousTileSizesOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ConvertConv2DToImg2ColOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ConvertToLoopsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class DecomposeInterfaceOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class DecomposeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class EliminateLinalgOpAnchoredEmptyTensorsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class FlattenElementwiseLinalgOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class FuseIntoContainingOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class FuseOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class GeneralizeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class HoistPadBuildPackingLoopNestOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class HoistPadOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class HoistRedundantVectorBroadcastsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class HoistRedundantVectorTransfersOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class InsertSliceToCopyOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class InterchangeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class LowerPackOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class LowerUnPackOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MapCopyToThreadsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MultiTileSizesOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PackGreedilyOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PackOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PackTransposeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PadOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PromoteOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ReplaceOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class RewriteInDestinationPassingStyleOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ScalarizeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class SpecializeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class SplitOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class SplitReductionOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileReductionUsingForOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileReductionUsingForallOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileUsingForOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TileUsingForallOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TransposeConv2DOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class TransposeMatmulOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class VectorizeChildrenAndApplyPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class VectorizeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class WinogradConv2DOp;
} // namespace transform
} // namespace mlir
#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyEraseUnnecessaryInputsPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.apply_patterns.linalg.erase_unnecessary_inputs", odsAttrs.getContext());
  }

  ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor : public detail::ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptorBase;
public:
  ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyEraseUnnecessaryInputsPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyEraseUnnecessaryInputsPatternsOp>>>
  ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ApplyEraseUnnecessaryInputsPatternsOpAdaptor : public ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor::ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor;
  ApplyEraseUnnecessaryInputsPatternsOpAdaptor(ApplyEraseUnnecessaryInputsPatternsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ApplyEraseUnnecessaryInputsPatternsOp : public ::mlir::Op<ApplyEraseUnnecessaryInputsPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyEraseUnnecessaryInputsPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyEraseUnnecessaryInputsPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.linalg.erase_unnecessary_inputs");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyEraseUnnecessaryInputsPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldUnitExtentDimsViaReshapesPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.apply_patterns.linalg.fold_unit_extent_dims_via_reshapes", odsAttrs.getContext());
  }

  ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor : public detail::ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptorBase;
public:
  ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyFoldUnitExtentDimsViaReshapesPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyFoldUnitExtentDimsViaReshapesPatternsOp>>>
  ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor : public ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor::ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor;
  ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor(ApplyFoldUnitExtentDimsViaReshapesPatternsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ApplyFoldUnitExtentDimsViaReshapesPatternsOp : public ::mlir::Op<ApplyFoldUnitExtentDimsViaReshapesPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyFoldUnitExtentDimsViaReshapesPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyFoldUnitExtentDimsViaReshapesPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.linalg.fold_unit_extent_dims_via_reshapes");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldUnitExtentDimsViaReshapesPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyFoldUnitExtentDimsViaSlicesPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.apply_patterns.linalg.fold_unit_extent_dims_via_slices", odsAttrs.getContext());
  }

  ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor : public detail::ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptorBase;
public:
  ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyFoldUnitExtentDimsViaSlicesPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyFoldUnitExtentDimsViaSlicesPatternsOp>>>
  ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor : public ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor::ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor;
  ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor(ApplyFoldUnitExtentDimsViaSlicesPatternsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ApplyFoldUnitExtentDimsViaSlicesPatternsOp : public ::mlir::Op<ApplyFoldUnitExtentDimsViaSlicesPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyFoldUnitExtentDimsViaSlicesPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyFoldUnitExtentDimsViaSlicesPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.linalg.fold_unit_extent_dims_via_slices");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyFoldUnitExtentDimsViaSlicesPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyTilingCanonicalizationPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.apply_patterns.linalg.tiling_canonicalization", odsAttrs.getContext());
  }

  ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ApplyTilingCanonicalizationPatternsOpGenericAdaptor : public detail::ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyTilingCanonicalizationPatternsOpGenericAdaptorBase;
public:
  ApplyTilingCanonicalizationPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyTilingCanonicalizationPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyTilingCanonicalizationPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyTilingCanonicalizationPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyTilingCanonicalizationPatternsOp>>>
  ApplyTilingCanonicalizationPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ApplyTilingCanonicalizationPatternsOpAdaptor : public ApplyTilingCanonicalizationPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyTilingCanonicalizationPatternsOpGenericAdaptor::ApplyTilingCanonicalizationPatternsOpGenericAdaptor;
  ApplyTilingCanonicalizationPatternsOpAdaptor(ApplyTilingCanonicalizationPatternsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ApplyTilingCanonicalizationPatternsOp : public ::mlir::Op<ApplyTilingCanonicalizationPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyTilingCanonicalizationPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyTilingCanonicalizationPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.linalg.tiling_canonicalization");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyTilingCanonicalizationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::BufferizeToAllocationOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BufferizeToAllocationOpGenericAdaptorBase {
public:
  struct Properties {
    using alloc_opTy = ::mlir::StringAttr;
    alloc_opTy alloc_op;

    auto getAllocOp() {
      auto &propStorage = this->alloc_op;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setAllocOp(const ::mlir::StringAttr &propValue) {
      this->alloc_op = propValue;
    }
    using bufferize_destination_onlyTy = ::mlir::UnitAttr;
    bufferize_destination_onlyTy bufferize_destination_only;

    auto getBufferizeDestinationOnly() {
      auto &propStorage = this->bufferize_destination_only;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setBufferizeDestinationOnly(const ::mlir::UnitAttr &propValue) {
      this->bufferize_destination_only = propValue;
    }
    using emit_deallocTy = ::mlir::UnitAttr;
    emit_deallocTy emit_dealloc;

    auto getEmitDealloc() {
      auto &propStorage = this->emit_dealloc;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setEmitDealloc(const ::mlir::UnitAttr &propValue) {
      this->emit_dealloc = propValue;
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
    using memory_spaceTy = ::mlir::Attribute;
    memory_spaceTy memory_space;

    auto getMemorySpace() {
      auto &propStorage = this->memory_space;
      return ::llvm::dyn_cast_or_null<::mlir::Attribute>(propStorage);
    }
    void setMemorySpace(const ::mlir::Attribute &propValue) {
      this->memory_space = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.alloc_op == this->alloc_op &&
        rhs.bufferize_destination_only == this->bufferize_destination_only &&
        rhs.emit_dealloc == this->emit_dealloc &&
        rhs.memcpy_op == this->memcpy_op &&
        rhs.memory_space == this->memory_space &&
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
  BufferizeToAllocationOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.bufferize_to_allocation", odsAttrs.getContext());
  }

  BufferizeToAllocationOpGenericAdaptorBase(BufferizeToAllocationOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::Attribute getMemorySpaceAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().memory_space);
    return attr;
  }

  ::std::optional<::mlir::Attribute> getMemorySpace();
  ::mlir::StringAttr getMemcpyOpAttr();
  ::llvm::StringRef getMemcpyOp();
  ::mlir::StringAttr getAllocOpAttr();
  ::llvm::StringRef getAllocOp();
  ::mlir::UnitAttr getBufferizeDestinationOnlyAttr();
  bool getBufferizeDestinationOnly();
  ::mlir::UnitAttr getEmitDeallocAttr();
  bool getEmitDealloc();
};
} // namespace detail
template <typename RangeT>
class BufferizeToAllocationOpGenericAdaptor : public detail::BufferizeToAllocationOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BufferizeToAllocationOpGenericAdaptorBase;
public:
  BufferizeToAllocationOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BufferizeToAllocationOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BufferizeToAllocationOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  BufferizeToAllocationOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : BufferizeToAllocationOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = BufferizeToAllocationOp, typename = std::enable_if_t<std::is_same_v<LateInst, BufferizeToAllocationOp>>>
  BufferizeToAllocationOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class BufferizeToAllocationOpAdaptor : public BufferizeToAllocationOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BufferizeToAllocationOpGenericAdaptor::BufferizeToAllocationOpGenericAdaptor;
  BufferizeToAllocationOpAdaptor(BufferizeToAllocationOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class BufferizeToAllocationOp : public ::mlir::Op<BufferizeToAllocationOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BufferizeToAllocationOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BufferizeToAllocationOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alloc_op"), ::llvm::StringRef("bufferize_destination_only"), ::llvm::StringRef("emit_dealloc"), ::llvm::StringRef("memcpy_op"), ::llvm::StringRef("memory_space")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAllocOpAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAllocOpAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getBufferizeDestinationOnlyAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getBufferizeDestinationOnlyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getEmitDeallocAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getEmitDeallocAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getMemcpyOpAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getMemcpyOpAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getMemorySpaceAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getMemorySpaceAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.bufferize_to_allocation");
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

  ::mlir::TypedValue<::mlir::transform::AnyValueType> getAllocatedBuffer() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::AnyValueType>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::AnyOpType> getNewOps() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::AnyOpType>>(*getODSResults(1).begin());
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
  ::mlir::Attribute getMemorySpaceAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().memory_space);
  }

  ::std::optional<::mlir::Attribute> getMemorySpace();
  ::mlir::StringAttr getMemcpyOpAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().memcpy_op);
  }

  ::llvm::StringRef getMemcpyOp();
  ::mlir::StringAttr getAllocOpAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().alloc_op);
  }

  ::llvm::StringRef getAllocOp();
  ::mlir::UnitAttr getBufferizeDestinationOnlyAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().bufferize_destination_only);
  }

  bool getBufferizeDestinationOnly();
  ::mlir::UnitAttr getEmitDeallocAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().emit_dealloc);
  }

  bool getEmitDealloc();
  void setMemorySpaceAttr(::mlir::Attribute attr) {
    getProperties().memory_space = attr;
  }

  void setMemcpyOpAttr(::mlir::StringAttr attr) {
    getProperties().memcpy_op = attr;
  }

  void setMemcpyOp(::llvm::StringRef attrValue);
  void setAllocOpAttr(::mlir::StringAttr attr) {
    getProperties().alloc_op = attr;
  }

  void setAllocOp(::llvm::StringRef attrValue);
  void setBufferizeDestinationOnlyAttr(::mlir::UnitAttr attr) {
    getProperties().bufferize_destination_only = attr;
  }

  void setBufferizeDestinationOnly(bool attrValue);
  void setEmitDeallocAttr(::mlir::UnitAttr attr) {
    getProperties().emit_dealloc = attr;
  }

  void setEmitDealloc(bool attrValue);
  ::mlir::Attribute removeMemorySpaceAttr() {
      auto &attr = getProperties().memory_space;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeBufferizeDestinationOnlyAttr() {
      auto &attr = getProperties().bufferize_destination_only;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeEmitDeallocAttr() {
      auto &attr = getProperties().emit_dealloc;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, Attribute memorySpace);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, int64_t memorySpace);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type allocated_buffer, ::mlir::Type new_ops, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::mlir::StringAttr memcpy_op, ::mlir::StringAttr alloc_op = nullptr, /*optional*/::mlir::UnitAttr bufferize_destination_only = nullptr, /*optional*/::mlir::UnitAttr emit_dealloc = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::mlir::StringAttr memcpy_op, ::mlir::StringAttr alloc_op = nullptr, /*optional*/::mlir::UnitAttr bufferize_destination_only = nullptr, /*optional*/::mlir::UnitAttr emit_dealloc = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type allocated_buffer, ::mlir::Type new_ops, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::llvm::StringRef memcpy_op = "bufferization.materialize_in_destination", ::llvm::StringRef alloc_op = "memref.alloc", /*optional*/bool bufferize_destination_only = false, /*optional*/bool emit_dealloc = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::Attribute memory_space, ::llvm::StringRef memcpy_op = "bufferization.materialize_in_destination", ::llvm::StringRef alloc_op = "memref.alloc", /*optional*/bool bufferize_destination_only = false, /*optional*/bool emit_dealloc = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::BufferizeToAllocationOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ContinuousTileSizesOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ContinuousTileSizesOpGenericAdaptorBase {
public:
  struct Properties {
    using dimensionTy = ::mlir::IntegerAttr;
    dimensionTy dimension;

    auto getDimension() {
      auto &propStorage = this->dimension;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setDimension(const ::mlir::IntegerAttr &propValue) {
      this->dimension = propValue;
    }
    using target_sizeTy = ::mlir::IntegerAttr;
    target_sizeTy target_size;

    auto getTargetSize() {
      auto &propStorage = this->target_size;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setTargetSize(const ::mlir::IntegerAttr &propValue) {
      this->target_size = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.dimension == this->dimension &&
        rhs.target_size == this->target_size &&
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
  ContinuousTileSizesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.continuous_tile_sizes", odsAttrs.getContext());
  }

  ContinuousTileSizesOpGenericAdaptorBase(ContinuousTileSizesOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getDimensionAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
    return attr;
  }

  uint64_t getDimension();
  ::mlir::IntegerAttr getTargetSizeAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().target_size);
    return attr;
  }

  uint64_t getTargetSize();
};
} // namespace detail
template <typename RangeT>
class ContinuousTileSizesOpGenericAdaptor : public detail::ContinuousTileSizesOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ContinuousTileSizesOpGenericAdaptorBase;
public:
  ContinuousTileSizesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ContinuousTileSizesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ContinuousTileSizesOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  ContinuousTileSizesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : ContinuousTileSizesOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = ContinuousTileSizesOp, typename = std::enable_if_t<std::is_same_v<LateInst, ContinuousTileSizesOp>>>
  ContinuousTileSizesOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ContinuousTileSizesOpAdaptor : public ContinuousTileSizesOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ContinuousTileSizesOpGenericAdaptor::ContinuousTileSizesOpGenericAdaptor;
  ContinuousTileSizesOpAdaptor(ContinuousTileSizesOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ContinuousTileSizesOp : public ::mlir::Op<ContinuousTileSizesOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ContinuousTileSizesOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ContinuousTileSizesOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dimension"), ::llvm::StringRef("target_size")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimensionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getTargetSizeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getTargetSizeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.continuous_tile_sizes");
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

  ::mlir::Value getTileSizes() {
    return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
  }

  ::mlir::Value getChunkSizes() {
    return ::llvm::cast<::mlir::Value>(*getODSResults(1).begin());
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
  ::mlir::IntegerAttr getDimensionAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
  }

  uint64_t getDimension();
  ::mlir::IntegerAttr getTargetSizeAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().target_size);
  }

  uint64_t getTargetSize();
  void setDimensionAttr(::mlir::IntegerAttr attr) {
    getProperties().dimension = attr;
  }

  void setDimension(uint64_t attrValue);
  void setTargetSizeAttr(::mlir::IntegerAttr attr) {
    getProperties().target_size = attr;
  }

  void setTargetSize(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tile_sizes, ::mlir::Type chunk_sizes, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tile_sizes, ::mlir::Type chunk_sizes, ::mlir::Value target, uint64_t dimension, uint64_t target_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, uint64_t target_size);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ContinuousTileSizesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ConvertConv2DToImg2ColOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvertConv2DToImg2ColOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConvertConv2DToImg2ColOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.convert_conv2d_to_img2col", odsAttrs.getContext());
  }

  ConvertConv2DToImg2ColOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ConvertConv2DToImg2ColOpGenericAdaptor : public detail::ConvertConv2DToImg2ColOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvertConv2DToImg2ColOpGenericAdaptorBase;
public:
  ConvertConv2DToImg2ColOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvertConv2DToImg2ColOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvertConv2DToImg2ColOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConvertConv2DToImg2ColOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvertConv2DToImg2ColOp>>>
  ConvertConv2DToImg2ColOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ConvertConv2DToImg2ColOpAdaptor : public ConvertConv2DToImg2ColOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvertConv2DToImg2ColOpGenericAdaptor::ConvertConv2DToImg2ColOpGenericAdaptor;
  ConvertConv2DToImg2ColOpAdaptor(ConvertConv2DToImg2ColOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ConvertConv2DToImg2ColOp : public ::mlir::Op<ConvertConv2DToImg2ColOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvertConv2DToImg2ColOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvertConv2DToImg2ColOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.convert_conv2d_to_img2col");
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

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getImg2colTensor() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type img2col_tensor, ::mlir::Type transformed, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ConvertConv2DToImg2ColOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ConvertToLoopsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvertToLoopsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConvertToLoopsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.convert_to_loops", odsAttrs.getContext());
  }

  ConvertToLoopsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ConvertToLoopsOpGenericAdaptor : public detail::ConvertToLoopsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvertToLoopsOpGenericAdaptorBase;
public:
  ConvertToLoopsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvertToLoopsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvertToLoopsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConvertToLoopsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvertToLoopsOp>>>
  ConvertToLoopsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ConvertToLoopsOpAdaptor : public ConvertToLoopsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvertToLoopsOpGenericAdaptor::ConvertToLoopsOpGenericAdaptor;
  ConvertToLoopsOpAdaptor(ConvertToLoopsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ConvertToLoopsOp : public ::mlir::Op<ConvertToLoopsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvertToLoopsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvertToLoopsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.convert_to_loops");
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

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getResult() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ConvertToLoopsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DecomposeInterfaceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DecomposeInterfaceOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DecomposeInterfaceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.decompose_interface", odsAttrs.getContext());
  }

  DecomposeInterfaceOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class DecomposeInterfaceOpGenericAdaptor : public detail::DecomposeInterfaceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DecomposeInterfaceOpGenericAdaptorBase;
public:
  DecomposeInterfaceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DecomposeInterfaceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DecomposeInterfaceOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = DecomposeInterfaceOp, typename = std::enable_if_t<std::is_same_v<LateInst, DecomposeInterfaceOp>>>
  DecomposeInterfaceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class DecomposeInterfaceOpAdaptor : public DecomposeInterfaceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DecomposeInterfaceOpGenericAdaptor::DecomposeInterfaceOpGenericAdaptor;
  DecomposeInterfaceOpAdaptor(DecomposeInterfaceOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class DecomposeInterfaceOp : public ::mlir::Op<DecomposeInterfaceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DecomposeInterfaceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DecomposeInterfaceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.decompose_interface");
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
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::DecomposeInterfaceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::DecomposeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DecomposeOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DecomposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.decompose", odsAttrs.getContext());
  }

  DecomposeOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class DecomposeOpGenericAdaptor : public detail::DecomposeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DecomposeOpGenericAdaptorBase;
public:
  DecomposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DecomposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DecomposeOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = DecomposeOp, typename = std::enable_if_t<std::is_same_v<LateInst, DecomposeOp>>>
  DecomposeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class DecomposeOpAdaptor : public DecomposeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DecomposeOpGenericAdaptor::DecomposeOpGenericAdaptor;
  DecomposeOpAdaptor(DecomposeOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class DecomposeOp : public ::mlir::Op<DecomposeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DecomposeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DecomposeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.decompose");
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
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::DecomposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::EliminateLinalgOpAnchoredEmptyTensorsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.eliminate_empty_tensors", odsAttrs.getContext());
  }

  EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor : public detail::EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptorBase;
public:
  EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = EliminateLinalgOpAnchoredEmptyTensorsOp, typename = std::enable_if_t<std::is_same_v<LateInst, EliminateLinalgOpAnchoredEmptyTensorsOp>>>
  EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor : public EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor::EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor;
  EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor(EliminateLinalgOpAnchoredEmptyTensorsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class EliminateLinalgOpAnchoredEmptyTensorsOp : public ::mlir::Op<EliminateLinalgOpAnchoredEmptyTensorsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = EliminateLinalgOpAnchoredEmptyTensorsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = EliminateLinalgOpAnchoredEmptyTensorsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.eliminate_empty_tensors");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::EliminateLinalgOpAnchoredEmptyTensorsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FlattenElementwiseLinalgOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FlattenElementwiseLinalgOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  FlattenElementwiseLinalgOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.flatten_elementwise", odsAttrs.getContext());
  }

  FlattenElementwiseLinalgOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class FlattenElementwiseLinalgOpGenericAdaptor : public detail::FlattenElementwiseLinalgOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FlattenElementwiseLinalgOpGenericAdaptorBase;
public:
  FlattenElementwiseLinalgOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  FlattenElementwiseLinalgOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : FlattenElementwiseLinalgOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = FlattenElementwiseLinalgOp, typename = std::enable_if_t<std::is_same_v<LateInst, FlattenElementwiseLinalgOp>>>
  FlattenElementwiseLinalgOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class FlattenElementwiseLinalgOpAdaptor : public FlattenElementwiseLinalgOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FlattenElementwiseLinalgOpGenericAdaptor::FlattenElementwiseLinalgOpGenericAdaptor;
  FlattenElementwiseLinalgOpAdaptor(FlattenElementwiseLinalgOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class FlattenElementwiseLinalgOp : public ::mlir::Op<FlattenElementwiseLinalgOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FlattenElementwiseLinalgOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FlattenElementwiseLinalgOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.flatten_elementwise");
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

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
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
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::FlattenElementwiseLinalgOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseIntoContainingOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FuseIntoContainingOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  FuseIntoContainingOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.fuse_into_containing_op", odsAttrs.getContext());
  }

  FuseIntoContainingOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class FuseIntoContainingOpGenericAdaptor : public detail::FuseIntoContainingOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FuseIntoContainingOpGenericAdaptorBase;
public:
  FuseIntoContainingOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  FuseIntoContainingOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : FuseIntoContainingOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = FuseIntoContainingOp, typename = std::enable_if_t<std::is_same_v<LateInst, FuseIntoContainingOp>>>
  FuseIntoContainingOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getProducerOp() {
    return (*getODSOperands(0).begin());
  }

  ValueT getContainingOp() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class FuseIntoContainingOpAdaptor : public FuseIntoContainingOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FuseIntoContainingOpGenericAdaptor::FuseIntoContainingOpGenericAdaptor;
  FuseIntoContainingOpAdaptor(FuseIntoContainingOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class FuseIntoContainingOp : public ::mlir::Op<FuseIntoContainingOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FuseIntoContainingOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FuseIntoContainingOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.fuse_into_containing_op");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getProducerOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getContainingOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(1).begin());
  }

  ::mlir::OpOperand &getProducerOpMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::OpOperand &getContainingOpMutable() {
    auto range = getODSOperandIndexAndLength(1);
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

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getFusedOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getNewContainingOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value producerOp, Value containingOp);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type fused_op, ::mlir::Type new_containing_op, ::mlir::Value producer_op, ::mlir::Value containing_op);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value producer_op, ::mlir::Value containing_op);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  bool allowsRepeatedHandleOperands();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::FuseIntoContainingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::FuseOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FuseOpGenericAdaptorBase {
public:
  struct Properties {
    using tile_interchangeTy = ::mlir::ArrayAttr;
    tile_interchangeTy tile_interchange;

    auto getTileInterchange() {
      auto &propStorage = this->tile_interchange;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTileInterchange(const ::mlir::ArrayAttr &propValue) {
      this->tile_interchange = propValue;
    }
    using tile_sizesTy = ::mlir::ArrayAttr;
    tile_sizesTy tile_sizes;

    auto getTileSizes() {
      auto &propStorage = this->tile_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTileSizes(const ::mlir::ArrayAttr &propValue) {
      this->tile_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.tile_interchange == this->tile_interchange &&
        rhs.tile_sizes == this->tile_sizes &&
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
  FuseOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.fuse", odsAttrs.getContext());
  }

  FuseOpGenericAdaptorBase(FuseOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::ArrayAttr getTileSizesAttr();
  ::mlir::ArrayAttr getTileSizes();
  ::mlir::ArrayAttr getTileInterchangeAttr();
  ::mlir::ArrayAttr getTileInterchange();
};
} // namespace detail
template <typename RangeT>
class FuseOpGenericAdaptor : public detail::FuseOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FuseOpGenericAdaptorBase;
public:
  FuseOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  FuseOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : FuseOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  FuseOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : FuseOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = FuseOp, typename = std::enable_if_t<std::is_same_v<LateInst, FuseOp>>>
  FuseOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class FuseOpAdaptor : public FuseOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FuseOpGenericAdaptor::FuseOpGenericAdaptor;
  FuseOpAdaptor(FuseOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class FuseOp : public ::mlir::Op<FuseOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<1>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FuseOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FuseOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("tile_interchange"), ::llvm::StringRef("tile_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTileInterchangeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTileInterchangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getTileSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.fuse");
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

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTransformed() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::Operation::result_range getLoops() {
    return getODSResults(1);
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
  ::mlir::ArrayAttr getTileSizesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tile_sizes);
  }

  ::mlir::ArrayAttr getTileSizes();
  ::mlir::ArrayAttr getTileInterchangeAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().tile_interchange);
  }

  ::mlir::ArrayAttr getTileInterchange();
  void setTileSizesAttr(::mlir::ArrayAttr attr) {
    getProperties().tile_sizes = attr;
  }

  void setTileInterchangeAttr(::mlir::ArrayAttr attr) {
    getProperties().tile_interchange = attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes = nullptr, ::mlir::ArrayAttr tile_interchange = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr tile_sizes = nullptr, ::mlir::ArrayAttr tile_interchange = nullptr);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::FuseOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GeneralizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GeneralizeOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GeneralizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.generalize", odsAttrs.getContext());
  }

  GeneralizeOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class GeneralizeOpGenericAdaptor : public detail::GeneralizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GeneralizeOpGenericAdaptorBase;
public:
  GeneralizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GeneralizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GeneralizeOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = GeneralizeOp, typename = std::enable_if_t<std::is_same_v<LateInst, GeneralizeOp>>>
  GeneralizeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class GeneralizeOpAdaptor : public GeneralizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GeneralizeOpGenericAdaptor::GeneralizeOpGenericAdaptor;
  GeneralizeOpAdaptor(GeneralizeOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class GeneralizeOp : public ::mlir::Op<GeneralizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GeneralizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GeneralizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.generalize");
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
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::GeneralizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistPadBuildPackingLoopNestOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class HoistPadBuildPackingLoopNestOpGenericAdaptorBase {
public:
  struct Properties {
    using transposeTy = ::mlir::DenseI64ArrayAttr;
    transposeTy transpose;

    auto getTranspose() {
      auto &propStorage = this->transpose;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setTranspose(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->transpose = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.transpose == this->transpose &&
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
  HoistPadBuildPackingLoopNestOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.hoist_pad.build_packing_loop_nest", odsAttrs.getContext());
  }

  HoistPadBuildPackingLoopNestOpGenericAdaptorBase(HoistPadBuildPackingLoopNestOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getTransposeAttr();
  ::llvm::ArrayRef<int64_t> getTranspose();
};
} // namespace detail
template <typename RangeT>
class HoistPadBuildPackingLoopNestOpGenericAdaptor : public detail::HoistPadBuildPackingLoopNestOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::HoistPadBuildPackingLoopNestOpGenericAdaptorBase;
public:
  HoistPadBuildPackingLoopNestOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  HoistPadBuildPackingLoopNestOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : HoistPadBuildPackingLoopNestOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  HoistPadBuildPackingLoopNestOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : HoistPadBuildPackingLoopNestOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = HoistPadBuildPackingLoopNestOp, typename = std::enable_if_t<std::is_same_v<LateInst, HoistPadBuildPackingLoopNestOp>>>
  HoistPadBuildPackingLoopNestOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getLoop() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class HoistPadBuildPackingLoopNestOpAdaptor : public HoistPadBuildPackingLoopNestOpGenericAdaptor<::mlir::ValueRange> {
public:
  using HoistPadBuildPackingLoopNestOpGenericAdaptor::HoistPadBuildPackingLoopNestOpGenericAdaptor;
  HoistPadBuildPackingLoopNestOpAdaptor(HoistPadBuildPackingLoopNestOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class HoistPadBuildPackingLoopNestOp : public ::mlir::Op<HoistPadBuildPackingLoopNestOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = HoistPadBuildPackingLoopNestOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = HoistPadBuildPackingLoopNestOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("transpose")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTransposeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTransposeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.hoist_pad.build_packing_loop_nest");
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

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getLoop() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(1).begin());
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::OpOperand &getLoopMutable() {
    auto range = getODSOperandIndexAndLength(1);
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

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackingLoop() {
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
  ::mlir::DenseI64ArrayAttr getTransposeAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().transpose);
  }

  ::llvm::ArrayRef<int64_t> getTranspose();
  void setTransposeAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().transpose = attr;
  }

  void setTranspose(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packing_loop, ::mlir::Value target, ::mlir::Value loop, ::mlir::DenseI64ArrayAttr transpose);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::Value loop, ::mlir::DenseI64ArrayAttr transpose);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packing_loop, ::mlir::Value target, ::mlir::Value loop, ::llvm::ArrayRef<int64_t> transpose = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::Value loop, ::llvm::ArrayRef<int64_t> transpose = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::HoistPadBuildPackingLoopNestOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistPadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class HoistPadOpGenericAdaptorBase {
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
    using transposeTy = ::mlir::DenseI64ArrayAttr;
    transposeTy transpose;

    auto getTranspose() {
      auto &propStorage = this->transpose;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setTranspose(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->transpose = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.num_loops == this->num_loops &&
        rhs.transpose == this->transpose &&
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
  HoistPadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.hoist_pad", odsAttrs.getContext());
  }

  HoistPadOpGenericAdaptorBase(HoistPadOp op);

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
  ::mlir::DenseI64ArrayAttr getTransposeAttr();
  ::llvm::ArrayRef<int64_t> getTranspose();
};
} // namespace detail
template <typename RangeT>
class HoistPadOpGenericAdaptor : public detail::HoistPadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::HoistPadOpGenericAdaptorBase;
public:
  HoistPadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  HoistPadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : HoistPadOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  HoistPadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : HoistPadOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = HoistPadOp, typename = std::enable_if_t<std::is_same_v<LateInst, HoistPadOp>>>
  HoistPadOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class HoistPadOpAdaptor : public HoistPadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using HoistPadOpGenericAdaptor::HoistPadOpGenericAdaptor;
  HoistPadOpAdaptor(HoistPadOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class HoistPadOp : public ::mlir::Op<HoistPadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = HoistPadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = HoistPadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("num_loops"), ::llvm::StringRef("transpose")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getNumLoopsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getNumLoopsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getTransposeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getTransposeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.hoist_pad");
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
  ::mlir::DenseI64ArrayAttr getTransposeAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().transpose);
  }

  ::llvm::ArrayRef<int64_t> getTranspose();
  void setNumLoopsAttr(::mlir::IntegerAttr attr) {
    getProperties().num_loops = attr;
  }

  void setNumLoops(uint64_t attrValue);
  void setTransposeAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().transpose = attr;
  }

  void setTranspose(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::DenseI64ArrayAttr transpose);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr num_loops, ::mlir::DenseI64ArrayAttr transpose);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t num_loops, ::llvm::ArrayRef<int64_t> transpose = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t num_loops, ::llvm::ArrayRef<int64_t> transpose = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::tensor::PadOp,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::HoistPadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistRedundantVectorBroadcastsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class HoistRedundantVectorBroadcastsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  HoistRedundantVectorBroadcastsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.hoist_redundant_vector_broadcasts", odsAttrs.getContext());
  }

  HoistRedundantVectorBroadcastsOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class HoistRedundantVectorBroadcastsOpGenericAdaptor : public detail::HoistRedundantVectorBroadcastsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::HoistRedundantVectorBroadcastsOpGenericAdaptorBase;
public:
  HoistRedundantVectorBroadcastsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  HoistRedundantVectorBroadcastsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : HoistRedundantVectorBroadcastsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = HoistRedundantVectorBroadcastsOp, typename = std::enable_if_t<std::is_same_v<LateInst, HoistRedundantVectorBroadcastsOp>>>
  HoistRedundantVectorBroadcastsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class HoistRedundantVectorBroadcastsOpAdaptor : public HoistRedundantVectorBroadcastsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using HoistRedundantVectorBroadcastsOpGenericAdaptor::HoistRedundantVectorBroadcastsOpGenericAdaptor;
  HoistRedundantVectorBroadcastsOpAdaptor(HoistRedundantVectorBroadcastsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class HoistRedundantVectorBroadcastsOp : public ::mlir::Op<HoistRedundantVectorBroadcastsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = HoistRedundantVectorBroadcastsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = HoistRedundantVectorBroadcastsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.hoist_redundant_vector_broadcasts");
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

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
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
       ::mlir::Operation *target,
       ::mlir::transform::ApplyToEachResultList &results,
       ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::HoistRedundantVectorBroadcastsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::HoistRedundantVectorTransfersOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class HoistRedundantVectorTransfersOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  HoistRedundantVectorTransfersOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.hoist_redundant_vector_transfers", odsAttrs.getContext());
  }

  HoistRedundantVectorTransfersOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class HoistRedundantVectorTransfersOpGenericAdaptor : public detail::HoistRedundantVectorTransfersOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::HoistRedundantVectorTransfersOpGenericAdaptorBase;
public:
  HoistRedundantVectorTransfersOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  HoistRedundantVectorTransfersOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : HoistRedundantVectorTransfersOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = HoistRedundantVectorTransfersOp, typename = std::enable_if_t<std::is_same_v<LateInst, HoistRedundantVectorTransfersOp>>>
  HoistRedundantVectorTransfersOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class HoistRedundantVectorTransfersOpAdaptor : public HoistRedundantVectorTransfersOpGenericAdaptor<::mlir::ValueRange> {
public:
  using HoistRedundantVectorTransfersOpGenericAdaptor::HoistRedundantVectorTransfersOpGenericAdaptor;
  HoistRedundantVectorTransfersOpAdaptor(HoistRedundantVectorTransfersOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class HoistRedundantVectorTransfersOp : public ::mlir::Op<HoistRedundantVectorTransfersOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = HoistRedundantVectorTransfersOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = HoistRedundantVectorTransfersOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.hoist_redundant_vector_transfers");
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

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
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
       ::mlir::func::FuncOp target,
       ::mlir::transform::ApplyToEachResultList &results,
       ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::HoistRedundantVectorTransfersOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::InsertSliceToCopyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class InsertSliceToCopyOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  InsertSliceToCopyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.insert_slice_to_copy", odsAttrs.getContext());
  }

  InsertSliceToCopyOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class InsertSliceToCopyOpGenericAdaptor : public detail::InsertSliceToCopyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::InsertSliceToCopyOpGenericAdaptorBase;
public:
  InsertSliceToCopyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  InsertSliceToCopyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : InsertSliceToCopyOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = InsertSliceToCopyOp, typename = std::enable_if_t<std::is_same_v<LateInst, InsertSliceToCopyOp>>>
  InsertSliceToCopyOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class InsertSliceToCopyOpAdaptor : public InsertSliceToCopyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using InsertSliceToCopyOpGenericAdaptor::InsertSliceToCopyOpGenericAdaptor;
  InsertSliceToCopyOpAdaptor(InsertSliceToCopyOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class InsertSliceToCopyOp : public ::mlir::Op<InsertSliceToCopyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = InsertSliceToCopyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = InsertSliceToCopyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.insert_slice_to_copy");
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

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
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
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::InsertSliceToCopyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::InterchangeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class InterchangeOpGenericAdaptorBase {
public:
  struct Properties {
    using iterator_interchangeTy = ::mlir::DenseI64ArrayAttr;
    iterator_interchangeTy iterator_interchange;

    auto getIteratorInterchange() {
      auto &propStorage = this->iterator_interchange;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setIteratorInterchange(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->iterator_interchange = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.iterator_interchange == this->iterator_interchange &&
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
  InterchangeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.interchange", odsAttrs.getContext());
  }

  InterchangeOpGenericAdaptorBase(InterchangeOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getIteratorInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getIteratorInterchange();
};
} // namespace detail
template <typename RangeT>
class InterchangeOpGenericAdaptor : public detail::InterchangeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::InterchangeOpGenericAdaptorBase;
public:
  InterchangeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  InterchangeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : InterchangeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  InterchangeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : InterchangeOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = InterchangeOp, typename = std::enable_if_t<std::is_same_v<LateInst, InterchangeOp>>>
  InterchangeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class InterchangeOpAdaptor : public InterchangeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using InterchangeOpGenericAdaptor::InterchangeOpGenericAdaptor;
  InterchangeOpAdaptor(InterchangeOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class InterchangeOp : public ::mlir::Op<InterchangeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = InterchangeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = InterchangeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("iterator_interchange")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIteratorInterchangeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIteratorInterchangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.interchange");
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
  ::mlir::DenseI64ArrayAttr getIteratorInterchangeAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().iterator_interchange);
  }

  ::llvm::ArrayRef<int64_t> getIteratorInterchange();
  void setIteratorInterchangeAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().iterator_interchange = attr;
  }

  void setIteratorInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeIteratorInterchangeAttr() {
      auto &attr = getProperties().iterator_interchange;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::DenseI64ArrayAttr iterator_interchange);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::llvm::ArrayRef<int64_t> iterator_interchange = {});
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
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::GenericOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::InterchangeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LowerPackOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LowerPackOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  LowerPackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.lower_pack", odsAttrs.getContext());
  }

  LowerPackOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class LowerPackOpGenericAdaptor : public detail::LowerPackOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LowerPackOpGenericAdaptorBase;
public:
  LowerPackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LowerPackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LowerPackOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = LowerPackOp, typename = std::enable_if_t<std::is_same_v<LateInst, LowerPackOp>>>
  LowerPackOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class LowerPackOpAdaptor : public LowerPackOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LowerPackOpGenericAdaptor::LowerPackOpGenericAdaptor;
  LowerPackOpAdaptor(LowerPackOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class LowerPackOp : public ::mlir::Op<LowerPackOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LowerPackOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LowerPackOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.lower_pack");
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

  ::mlir::TypedValue<::mlir::transform::OperationType> getPadOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::OperationType> getExpandShapeOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(1).begin());
  }

  ::mlir::TypedValue<::mlir::transform::OperationType> getTransposeOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(2).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type pad_op, ::mlir::Type expand_shape_op, ::mlir::Type transpose_op, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::tensor::PackOp target,
      ::mlir::transform::ApplyToEachResultList &transformResults,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::LowerPackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::LowerUnPackOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LowerUnPackOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  LowerUnPackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.lower_unpack", odsAttrs.getContext());
  }

  LowerUnPackOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class LowerUnPackOpGenericAdaptor : public detail::LowerUnPackOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LowerUnPackOpGenericAdaptorBase;
public:
  LowerUnPackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LowerUnPackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LowerUnPackOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = LowerUnPackOp, typename = std::enable_if_t<std::is_same_v<LateInst, LowerUnPackOp>>>
  LowerUnPackOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class LowerUnPackOpAdaptor : public LowerUnPackOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LowerUnPackOpGenericAdaptor::LowerUnPackOpGenericAdaptor;
  LowerUnPackOpAdaptor(LowerUnPackOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class LowerUnPackOp : public ::mlir::Op<LowerUnPackOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<4>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LowerUnPackOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LowerUnPackOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.lower_unpack");
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

  ::mlir::TypedValue<::mlir::transform::OperationType> getEmptyOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::OperationType> getTransposeOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(1).begin());
  }

  ::mlir::TypedValue<::mlir::transform::OperationType> getCollapseShapeOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(2).begin());
  }

  ::mlir::TypedValue<::mlir::transform::OperationType> getExtractSliceOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::OperationType>>(*getODSResults(3).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type empty_op, ::mlir::Type transpose_op, ::mlir::Type collapse_shape_op, ::mlir::Type extract_slice_op, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::tensor::UnPackOp target,
      ::mlir::transform::ApplyToEachResultList &transformResults,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::LowerUnPackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MapCopyToThreadsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MapCopyToThreadsOpGenericAdaptorBase {
public:
  struct Properties {
    using desired_bit_alignmentTy = ::mlir::IntegerAttr;
    desired_bit_alignmentTy desired_bit_alignment;

    auto getDesiredBitAlignment() {
      auto &propStorage = this->desired_bit_alignment;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setDesiredBitAlignment(const ::mlir::IntegerAttr &propValue) {
      this->desired_bit_alignment = propValue;
    }
    using total_num_threadsTy = ::mlir::IntegerAttr;
    total_num_threadsTy total_num_threads;

    auto getTotalNumThreads() {
      auto &propStorage = this->total_num_threads;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setTotalNumThreads(const ::mlir::IntegerAttr &propValue) {
      this->total_num_threads = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.desired_bit_alignment == this->desired_bit_alignment &&
        rhs.total_num_threads == this->total_num_threads &&
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
  MapCopyToThreadsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.gpu.map_copy_to_threads", odsAttrs.getContext());
  }

  MapCopyToThreadsOpGenericAdaptorBase(MapCopyToThreadsOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getTotalNumThreadsAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().total_num_threads);
    return attr;
  }

  uint64_t getTotalNumThreads();
  ::mlir::IntegerAttr getDesiredBitAlignmentAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().desired_bit_alignment);
    return attr;
  }

  uint64_t getDesiredBitAlignment();
};
} // namespace detail
template <typename RangeT>
class MapCopyToThreadsOpGenericAdaptor : public detail::MapCopyToThreadsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MapCopyToThreadsOpGenericAdaptorBase;
public:
  MapCopyToThreadsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MapCopyToThreadsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MapCopyToThreadsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MapCopyToThreadsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MapCopyToThreadsOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MapCopyToThreadsOp, typename = std::enable_if_t<std::is_same_v<LateInst, MapCopyToThreadsOp>>>
  MapCopyToThreadsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class MapCopyToThreadsOpAdaptor : public MapCopyToThreadsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MapCopyToThreadsOpGenericAdaptor::MapCopyToThreadsOpGenericAdaptor;
  MapCopyToThreadsOpAdaptor(MapCopyToThreadsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MapCopyToThreadsOp : public ::mlir::Op<MapCopyToThreadsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MapCopyToThreadsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MapCopyToThreadsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("desired_bit_alignment"), ::llvm::StringRef("total_num_threads")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDesiredBitAlignmentAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDesiredBitAlignmentAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getTotalNumThreadsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getTotalNumThreadsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.gpu.map_copy_to_threads");
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

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getForallOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTiledOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
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
  ::mlir::IntegerAttr getTotalNumThreadsAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().total_num_threads);
  }

  uint64_t getTotalNumThreads();
  ::mlir::IntegerAttr getDesiredBitAlignmentAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().desired_bit_alignment);
  }

  uint64_t getDesiredBitAlignment();
  void setTotalNumThreadsAttr(::mlir::IntegerAttr attr) {
    getProperties().total_num_threads = attr;
  }

  void setTotalNumThreads(uint64_t attrValue);
  void setDesiredBitAlignmentAttr(::mlir::IntegerAttr attr) {
    getProperties().desired_bit_alignment = attr;
  }

  void setDesiredBitAlignment(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, ::mlir::IntegerAttr total_num_threads, ::mlir::IntegerAttr desired_bit_alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr total_num_threads, ::mlir::IntegerAttr desired_bit_alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type forall_op, ::mlir::Type tiled_op, ::mlir::Value target, uint64_t total_num_threads, uint64_t desired_bit_alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t total_num_threads, uint64_t desired_bit_alignment);
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
    assert(index < 2 && "invalid attribute index");
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

  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedNumThreads();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MapCopyToThreadsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchOpGenericAdaptorBase {
public:
  struct Properties {
    using filter_operand_typesTy = ::mlir::ArrayAttr;
    filter_operand_typesTy filter_operand_types;

    auto getFilterOperandTypes() {
      auto &propStorage = this->filter_operand_types;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setFilterOperandTypes(const ::mlir::ArrayAttr &propValue) {
      this->filter_operand_types = propValue;
    }
    using filter_result_typeTy = ::mlir::TypeAttr;
    filter_result_typeTy filter_result_type;

    auto getFilterResultType() {
      auto &propStorage = this->filter_result_type;
      return ::llvm::dyn_cast_or_null<::mlir::TypeAttr>(propStorage);
    }
    void setFilterResultType(const ::mlir::TypeAttr &propValue) {
      this->filter_result_type = propValue;
    }
    using interfaceTy = mlir::transform::MatchInterfaceEnumAttr;
    interfaceTy interface;

    auto getInterface() {
      auto &propStorage = this->interface;
      return ::llvm::dyn_cast_or_null<mlir::transform::MatchInterfaceEnumAttr>(propStorage);
    }
    void setInterface(const mlir::transform::MatchInterfaceEnumAttr &propValue) {
      this->interface = propValue;
    }
    using op_attrsTy = ::mlir::DictionaryAttr;
    op_attrsTy op_attrs;

    auto getOpAttrs() {
      auto &propStorage = this->op_attrs;
      return ::llvm::dyn_cast_or_null<::mlir::DictionaryAttr>(propStorage);
    }
    void setOpAttrs(const ::mlir::DictionaryAttr &propValue) {
      this->op_attrs = propValue;
    }
    using opsTy = ::mlir::ArrayAttr;
    opsTy ops;

    auto getOps() {
      auto &propStorage = this->ops;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setOps(const ::mlir::ArrayAttr &propValue) {
      this->ops = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.filter_operand_types == this->filter_operand_types &&
        rhs.filter_result_type == this->filter_result_type &&
        rhs.interface == this->interface &&
        rhs.op_attrs == this->op_attrs &&
        rhs.ops == this->ops &&
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
  MatchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.match", odsAttrs.getContext());
  }

  MatchOpGenericAdaptorBase(MatchOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::ArrayAttr getOpsAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().ops);
    return attr;
  }

  ::std::optional< ::mlir::ArrayAttr > getOps();
  mlir::transform::MatchInterfaceEnumAttr getInterfaceAttr() {
    auto attr = ::llvm::dyn_cast_or_null<mlir::transform::MatchInterfaceEnumAttr>(getProperties().interface);
    return attr;
  }

  ::std::optional<mlir::transform::MatchInterfaceEnum> getInterface();
  ::mlir::DictionaryAttr getOpAttrsAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::DictionaryAttr>(getProperties().op_attrs);
    return attr;
  }

  ::std::optional< ::mlir::DictionaryAttr > getOpAttrs();
  ::mlir::TypeAttr getFilterResultTypeAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::TypeAttr>(getProperties().filter_result_type);
    return attr;
  }

  ::std::optional<::mlir::Type> getFilterResultType();
  ::mlir::ArrayAttr getFilterOperandTypesAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().filter_operand_types);
    return attr;
  }

  ::std::optional< ::mlir::ArrayAttr > getFilterOperandTypes();
};
} // namespace detail
template <typename RangeT>
class MatchOpGenericAdaptor : public detail::MatchOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchOpGenericAdaptorBase;
public:
  MatchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MatchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MatchOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MatchOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchOp>>>
  MatchOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class MatchOpAdaptor : public MatchOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchOpGenericAdaptor::MatchOpGenericAdaptor;
  MatchOpAdaptor(MatchOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MatchOp : public ::mlir::Op<MatchOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("filter_operand_types"), ::llvm::StringRef("filter_result_type"), ::llvm::StringRef("interface"), ::llvm::StringRef("op_attrs"), ::llvm::StringRef("ops")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFilterOperandTypesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFilterOperandTypesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getFilterResultTypeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getFilterResultTypeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getInterfaceAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getInterfaceAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getOpAttrsAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getOpAttrsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getOpsAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getOpsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.match");
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

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getResults() {
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
  ::mlir::ArrayAttr getOpsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().ops);
  }

  ::std::optional< ::mlir::ArrayAttr > getOps();
  mlir::transform::MatchInterfaceEnumAttr getInterfaceAttr() {
    return ::llvm::dyn_cast_or_null<mlir::transform::MatchInterfaceEnumAttr>(getProperties().interface);
  }

  ::std::optional<mlir::transform::MatchInterfaceEnum> getInterface();
  ::mlir::DictionaryAttr getOpAttrsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DictionaryAttr>(getProperties().op_attrs);
  }

  ::std::optional< ::mlir::DictionaryAttr > getOpAttrs();
  ::mlir::TypeAttr getFilterResultTypeAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::TypeAttr>(getProperties().filter_result_type);
  }

  ::std::optional<::mlir::Type> getFilterResultType();
  ::mlir::ArrayAttr getFilterOperandTypesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().filter_operand_types);
  }

  ::std::optional< ::mlir::ArrayAttr > getFilterOperandTypes();
  void setOpsAttr(::mlir::ArrayAttr attr) {
    getProperties().ops = attr;
  }

  void setInterfaceAttr(mlir::transform::MatchInterfaceEnumAttr attr) {
    getProperties().interface = attr;
  }

  void setInterface(::std::optional<mlir::transform::MatchInterfaceEnum> attrValue);
  void setOpAttrsAttr(::mlir::DictionaryAttr attr) {
    getProperties().op_attrs = attr;
  }

  void setFilterResultTypeAttr(::mlir::TypeAttr attr) {
    getProperties().filter_result_type = attr;
  }

  void setFilterResultType(::std::optional<::mlir::Type> attrValue);
  void setFilterOperandTypesAttr(::mlir::ArrayAttr attr) {
    getProperties().filter_operand_types = attr;
  }

  ::mlir::Attribute removeOpsAttr() {
      auto &attr = getProperties().ops;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeInterfaceAttr() {
      auto &attr = getProperties().interface;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeOpAttrsAttr() {
      auto &attr = getProperties().op_attrs;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeFilterResultTypeAttr() {
      auto &attr = getProperties().filter_result_type;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeFilterOperandTypesAttr() {
      auto &attr = getProperties().filter_operand_types;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<StringRef> opNames);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, TypeRange resultTypes, Value target, ArrayRef<StringRef> opNames);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type results, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type, /*optional*/::mlir::ArrayAttr filter_operand_types);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::ArrayAttr ops, /*optional*/mlir::transform::MatchInterfaceEnumAttr interface, /*optional*/::mlir::DictionaryAttr op_attrs, /*optional*/::mlir::TypeAttr filter_result_type, /*optional*/::mlir::ArrayAttr filter_operand_types);
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MultiTileSizesOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MultiTileSizesOpGenericAdaptorBase {
public:
  struct Properties {
    using dimensionTy = ::mlir::IntegerAttr;
    dimensionTy dimension;

    auto getDimension() {
      auto &propStorage = this->dimension;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setDimension(const ::mlir::IntegerAttr &propValue) {
      this->dimension = propValue;
    }
    using divisorTy = ::mlir::IntegerAttr;
    divisorTy divisor;

    auto getDivisor() {
      auto &propStorage = this->divisor;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setDivisor(const ::mlir::IntegerAttr &propValue) {
      this->divisor = propValue;
    }
    using target_sizeTy = ::mlir::IntegerAttr;
    target_sizeTy target_size;

    auto getTargetSize() {
      auto &propStorage = this->target_size;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setTargetSize(const ::mlir::IntegerAttr &propValue) {
      this->target_size = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.dimension == this->dimension &&
        rhs.divisor == this->divisor &&
        rhs.target_size == this->target_size &&
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
  MultiTileSizesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.multitile_sizes", odsAttrs.getContext());
  }

  MultiTileSizesOpGenericAdaptorBase(MultiTileSizesOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getDimensionAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
    return attr;
  }

  uint64_t getDimension();
  ::mlir::IntegerAttr getTargetSizeAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().target_size);
    return attr;
  }

  uint64_t getTargetSize();
  ::mlir::IntegerAttr getDivisorAttr();
  uint64_t getDivisor();
};
} // namespace detail
template <typename RangeT>
class MultiTileSizesOpGenericAdaptor : public detail::MultiTileSizesOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MultiTileSizesOpGenericAdaptorBase;
public:
  MultiTileSizesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MultiTileSizesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MultiTileSizesOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  MultiTileSizesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : MultiTileSizesOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = MultiTileSizesOp, typename = std::enable_if_t<std::is_same_v<LateInst, MultiTileSizesOp>>>
  MultiTileSizesOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class MultiTileSizesOpAdaptor : public MultiTileSizesOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MultiTileSizesOpGenericAdaptor::MultiTileSizesOpGenericAdaptor;
  MultiTileSizesOpAdaptor(MultiTileSizesOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class MultiTileSizesOp : public ::mlir::Op<MultiTileSizesOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MultiTileSizesOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MultiTileSizesOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dimension"), ::llvm::StringRef("divisor"), ::llvm::StringRef("target_size")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimensionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getDivisorAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getDivisorAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTargetSizeAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTargetSizeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.multitile_sizes");
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

  ::mlir::Value getLowSize() {
    return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
  }

  ::mlir::Value getHighSize() {
    return ::llvm::cast<::mlir::Value>(*getODSResults(1).begin());
  }

  ::mlir::Value getSplitPoint() {
    return ::llvm::cast<::mlir::Value>(*getODSResults(2).begin());
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
  ::mlir::IntegerAttr getDimensionAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
  }

  uint64_t getDimension();
  ::mlir::IntegerAttr getTargetSizeAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().target_size);
  }

  uint64_t getTargetSize();
  ::mlir::IntegerAttr getDivisorAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().divisor);
  }

  uint64_t getDivisor();
  void setDimensionAttr(::mlir::IntegerAttr attr) {
    getProperties().dimension = attr;
  }

  void setDimension(uint64_t attrValue);
  void setTargetSizeAttr(::mlir::IntegerAttr attr) {
    getProperties().target_size = attr;
  }

  void setTargetSize(uint64_t attrValue);
  void setDivisorAttr(::mlir::IntegerAttr attr) {
    getProperties().divisor = attr;
  }

  void setDivisor(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, ::mlir::IntegerAttr target_size, ::mlir::IntegerAttr divisor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type low_size, ::mlir::Type high_size, ::mlir::Type split_point, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor = 1);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, uint64_t target_size, uint64_t divisor = 1);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MultiTileSizesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackGreedilyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PackGreedilyOpGenericAdaptorBase {
public:
  struct Properties {
    using matmul_inner_dims_orderTy = ::mlir::DenseI64ArrayAttr;
    matmul_inner_dims_orderTy matmul_inner_dims_order;

    auto getMatmulInnerDimsOrder() {
      auto &propStorage = this->matmul_inner_dims_order;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setMatmulInnerDimsOrder(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->matmul_inner_dims_order = propValue;
    }
    using matmul_padded_sizes_next_multiple_ofTy = ::mlir::DenseI64ArrayAttr;
    matmul_padded_sizes_next_multiple_ofTy matmul_padded_sizes_next_multiple_of;

    auto getMatmulPaddedSizesNextMultipleOf() {
      auto &propStorage = this->matmul_padded_sizes_next_multiple_of;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setMatmulPaddedSizesNextMultipleOf(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->matmul_padded_sizes_next_multiple_of = propValue;
    }
    using static_matmul_packed_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_matmul_packed_sizesTy static_matmul_packed_sizes;

    auto getStaticMatmulPackedSizes() {
      auto &propStorage = this->static_matmul_packed_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticMatmulPackedSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_matmul_packed_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.matmul_inner_dims_order == this->matmul_inner_dims_order &&
        rhs.matmul_padded_sizes_next_multiple_of == this->matmul_padded_sizes_next_multiple_of &&
        rhs.static_matmul_packed_sizes == this->static_matmul_packed_sizes &&
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
  PackGreedilyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.pack_greedily", odsAttrs.getContext());
  }

  PackGreedilyOpGenericAdaptorBase(PackGreedilyOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getStaticMatmulPackedSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticMatmulPackedSizes();
  ::mlir::DenseI64ArrayAttr getMatmulPaddedSizesNextMultipleOfAttr();
  ::llvm::ArrayRef<int64_t> getMatmulPaddedSizesNextMultipleOf();
  ::mlir::DenseI64ArrayAttr getMatmulInnerDimsOrderAttr();
  ::llvm::ArrayRef<int64_t> getMatmulInnerDimsOrder();
};
} // namespace detail
template <typename RangeT>
class PackGreedilyOpGenericAdaptor : public detail::PackGreedilyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PackGreedilyOpGenericAdaptorBase;
public:
  PackGreedilyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PackGreedilyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PackGreedilyOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  PackGreedilyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : PackGreedilyOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = PackGreedilyOp, typename = std::enable_if_t<std::is_same_v<LateInst, PackGreedilyOp>>>
  PackGreedilyOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getMatmulPackedSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PackGreedilyOpAdaptor : public PackGreedilyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PackGreedilyOpGenericAdaptor::PackGreedilyOpGenericAdaptor;
  PackGreedilyOpAdaptor(PackGreedilyOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class PackGreedilyOp : public ::mlir::Op<PackGreedilyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PackGreedilyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PackGreedilyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("matmul_inner_dims_order"), ::llvm::StringRef("matmul_padded_sizes_next_multiple_of"), ::llvm::StringRef("static_matmul_packed_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMatmulInnerDimsOrderAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMatmulInnerDimsOrderAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMatmulPaddedSizesNextMultipleOfAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMatmulPaddedSizesNextMultipleOfAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getStaticMatmulPackedSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getStaticMatmulPackedSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.pack_greedily");
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

  ::mlir::Operation::operand_range getMatmulPackedSizes() {
    return getODSOperands(1);
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getMatmulPackedSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackedOp() {
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
  ::mlir::DenseI64ArrayAttr getStaticMatmulPackedSizesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_matmul_packed_sizes);
  }

  ::llvm::ArrayRef<int64_t> getStaticMatmulPackedSizes();
  ::mlir::DenseI64ArrayAttr getMatmulPaddedSizesNextMultipleOfAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().matmul_padded_sizes_next_multiple_of);
  }

  ::llvm::ArrayRef<int64_t> getMatmulPaddedSizesNextMultipleOf();
  ::mlir::DenseI64ArrayAttr getMatmulInnerDimsOrderAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().matmul_inner_dims_order);
  }

  ::llvm::ArrayRef<int64_t> getMatmulInnerDimsOrder();
  void setStaticMatmulPackedSizesAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().static_matmul_packed_sizes = attr;
  }

  void setStaticMatmulPackedSizes(::llvm::ArrayRef<int64_t> attrValue);
  void setMatmulPaddedSizesNextMultipleOfAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().matmul_padded_sizes_next_multiple_of = attr;
  }

  void setMatmulPaddedSizesNextMultipleOf(::llvm::ArrayRef<int64_t> attrValue);
  void setMatmulInnerDimsOrderAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().matmul_inner_dims_order = attr;
  }

  void setMatmulInnerDimsOrder(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedMatmulPackedSizes, ArrayRef<int64_t> matmulPaddededSizesNextMultipleOf, ArrayRef<int64_t> matmulDimsInnerDimsOrder = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::mlir::DenseI64ArrayAttr static_matmul_packed_sizes, ::mlir::DenseI64ArrayAttr matmul_padded_sizes_next_multiple_of = nullptr, ::mlir::DenseI64ArrayAttr matmul_inner_dims_order = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::mlir::DenseI64ArrayAttr static_matmul_packed_sizes, ::mlir::DenseI64ArrayAttr matmul_padded_sizes_next_multiple_of = nullptr, ::mlir::DenseI64ArrayAttr matmul_inner_dims_order = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::llvm::ArrayRef<int64_t> static_matmul_packed_sizes = {}, ::llvm::ArrayRef<int64_t> matmul_padded_sizes_next_multiple_of = {}, ::llvm::ArrayRef<int64_t> matmul_inner_dims_order = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange matmul_packed_sizes, ::llvm::ArrayRef<int64_t> static_matmul_packed_sizes = {}, ::llvm::ArrayRef<int64_t> matmul_padded_sizes_next_multiple_of = {}, ::llvm::ArrayRef<int64_t> matmul_inner_dims_order = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  /// Returns the list of tile sizes, which may be static (Attribute) or
  /// dynamic (Value).
  SmallVector<OpFoldResult> getMixedMatmulPackedSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PackGreedilyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PackOpGenericAdaptorBase {
public:
  struct Properties {
    using static_packed_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_packed_sizesTy static_packed_sizes;

    auto getStaticPackedSizes() {
      auto &propStorage = this->static_packed_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticPackedSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_packed_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.static_packed_sizes == this->static_packed_sizes &&
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
  PackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.pack", odsAttrs.getContext());
  }

  PackOpGenericAdaptorBase(PackOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getStaticPackedSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticPackedSizes();
};
} // namespace detail
template <typename RangeT>
class PackOpGenericAdaptor : public detail::PackOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PackOpGenericAdaptorBase;
public:
  PackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PackOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  PackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : PackOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = PackOp, typename = std::enable_if_t<std::is_same_v<LateInst, PackOp>>>
  PackOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getPackedSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PackOpAdaptor : public PackOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PackOpGenericAdaptor::PackOpGenericAdaptor;
  PackOpAdaptor(PackOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class PackOp : public ::mlir::Op<PackOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PackOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PackOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("static_packed_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getStaticPackedSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getStaticPackedSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.pack");
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

  ::mlir::Operation::operand_range getPackedSizes() {
    return getODSOperands(1);
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getPackedSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackedOp() {
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
  ::mlir::DenseI64ArrayAttr getStaticPackedSizesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_packed_sizes);
  }

  ::llvm::ArrayRef<int64_t> getStaticPackedSizes();
  void setStaticPackedSizesAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().static_packed_sizes = attr;
  }

  void setStaticPackedSizes(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedPackedSizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::mlir::DenseI64ArrayAttr static_packed_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange packed_sizes, ::llvm::ArrayRef<int64_t> static_packed_sizes = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedPackedSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PackOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PackTransposeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PackTransposeOpGenericAdaptorBase {
public:
  struct Properties {
    using inner_permTy = ::mlir::DenseI64ArrayAttr;
    inner_permTy inner_perm;

    auto getInnerPerm() {
      auto &propStorage = this->inner_perm;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setInnerPerm(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->inner_perm = propValue;
    }
    using outer_permTy = ::mlir::DenseI64ArrayAttr;
    outer_permTy outer_perm;

    auto getOuterPerm() {
      auto &propStorage = this->outer_perm;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setOuterPerm(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->outer_perm = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.inner_perm == this->inner_perm &&
        rhs.outer_perm == this->outer_perm &&
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
  PackTransposeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.pack_transpose", odsAttrs.getContext());
  }

  PackTransposeOpGenericAdaptorBase(PackTransposeOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getOuterPermAttr();
  ::llvm::ArrayRef<int64_t> getOuterPerm();
  ::mlir::DenseI64ArrayAttr getInnerPermAttr();
  ::llvm::ArrayRef<int64_t> getInnerPerm();
};
} // namespace detail
template <typename RangeT>
class PackTransposeOpGenericAdaptor : public detail::PackTransposeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PackTransposeOpGenericAdaptorBase;
public:
  PackTransposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PackTransposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PackTransposeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  PackTransposeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : PackTransposeOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = PackTransposeOp, typename = std::enable_if_t<std::is_same_v<LateInst, PackTransposeOp>>>
  PackTransposeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTargetPackOrUnPackOp() {
    return (*getODSOperands(0).begin());
  }

  ValueT getTargetLinalgOp() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PackTransposeOpAdaptor : public PackTransposeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PackTransposeOpGenericAdaptor::PackTransposeOpGenericAdaptor;
  PackTransposeOpAdaptor(PackTransposeOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class PackTransposeOp : public ::mlir::Op<PackTransposeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PackTransposeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PackTransposeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("inner_perm"), ::llvm::StringRef("outer_perm")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInnerPermAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInnerPermAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOuterPermAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOuterPermAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.pack_transpose");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::operand_range getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(getOperation()->operand_begin(), valueRange.first),
             std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTargetPackOrUnPackOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTargetLinalgOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSOperands(1).begin());
  }

  ::mlir::OpOperand &getTargetPackOrUnPackOpMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::OpOperand &getTargetLinalgOpMutable() {
    auto range = getODSOperandIndexAndLength(1);
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

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackedOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPackOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getUnPackOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(2).begin());
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
  ::mlir::DenseI64ArrayAttr getOuterPermAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().outer_perm);
  }

  ::llvm::ArrayRef<int64_t> getOuterPerm();
  ::mlir::DenseI64ArrayAttr getInnerPermAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().inner_perm);
  }

  ::llvm::ArrayRef<int64_t> getInnerPerm();
  void setOuterPermAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().outer_perm = attr;
  }

  void setOuterPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setInnerPermAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().inner_perm = attr;
  }

  void setInnerPerm(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeOuterPermAttr() {
      auto &attr = getProperties().outer_perm;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeInnerPermAttr() {
      auto &attr = getProperties().inner_perm;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::mlir::DenseI64ArrayAttr outer_perm, /*optional*/::mlir::DenseI64ArrayAttr inner_perm = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type packed_op, ::mlir::Type pack_op, ::mlir::Type un_pack_op, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm = {}, /*optional*/::llvm::ArrayRef<int64_t> inner_perm = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target_pack_or_un_pack_op, ::mlir::Value target_linalg_op, /*optional*/::llvm::ArrayRef<int64_t> outer_perm = {}, /*optional*/::llvm::ArrayRef<int64_t> inner_perm = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PackTransposeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PadOpGenericAdaptorBase {
public:
  struct Properties {
    using copy_back_opTy = ::mlir::StringAttr;
    copy_back_opTy copy_back_op;

    auto getCopyBackOp() {
      auto &propStorage = this->copy_back_op;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setCopyBackOp(const ::mlir::StringAttr &propValue) {
      this->copy_back_op = propValue;
    }
    using pack_paddingsTy = ::mlir::ArrayAttr;
    pack_paddingsTy pack_paddings;

    auto getPackPaddings() {
      auto &propStorage = this->pack_paddings;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPackPaddings(const ::mlir::ArrayAttr &propValue) {
      this->pack_paddings = propValue;
    }
    using padding_dimensionsTy = ::mlir::ArrayAttr;
    padding_dimensionsTy padding_dimensions;

    auto getPaddingDimensions() {
      auto &propStorage = this->padding_dimensions;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPaddingDimensions(const ::mlir::ArrayAttr &propValue) {
      this->padding_dimensions = propValue;
    }
    using padding_valuesTy = ::mlir::ArrayAttr;
    padding_valuesTy padding_values;

    auto getPaddingValues() {
      auto &propStorage = this->padding_values;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPaddingValues(const ::mlir::ArrayAttr &propValue) {
      this->padding_values = propValue;
    }
    using static_pad_to_multiple_ofTy = ::mlir::DenseI64ArrayAttr;
    static_pad_to_multiple_ofTy static_pad_to_multiple_of;

    auto getStaticPadToMultipleOf() {
      auto &propStorage = this->static_pad_to_multiple_of;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticPadToMultipleOf(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_pad_to_multiple_of = propValue;
    }
    using transpose_paddingsTy = ::mlir::ArrayAttr;
    transpose_paddingsTy transpose_paddings;

    auto getTransposePaddings() {
      auto &propStorage = this->transpose_paddings;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTransposePaddings(const ::mlir::ArrayAttr &propValue) {
      this->transpose_paddings = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.copy_back_op == this->copy_back_op &&
        rhs.pack_paddings == this->pack_paddings &&
        rhs.padding_dimensions == this->padding_dimensions &&
        rhs.padding_values == this->padding_values &&
        rhs.static_pad_to_multiple_of == this->static_pad_to_multiple_of &&
        rhs.transpose_paddings == this->transpose_paddings &&
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
  PadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.pad", odsAttrs.getContext());
  }

  PadOpGenericAdaptorBase(PadOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::ArrayAttr getPaddingValuesAttr();
  ::mlir::ArrayAttr getPaddingValues();
  ::mlir::ArrayAttr getPaddingDimensionsAttr();
  ::mlir::ArrayAttr getPaddingDimensions();
  ::mlir::DenseI64ArrayAttr getStaticPadToMultipleOfAttr();
  ::llvm::ArrayRef<int64_t> getStaticPadToMultipleOf();
  ::mlir::ArrayAttr getPackPaddingsAttr();
  ::mlir::ArrayAttr getPackPaddings();
  ::mlir::ArrayAttr getTransposePaddingsAttr();
  ::mlir::ArrayAttr getTransposePaddings();
  ::mlir::StringAttr getCopyBackOpAttr();
  ::llvm::StringRef getCopyBackOp();
};
} // namespace detail
template <typename RangeT>
class PadOpGenericAdaptor : public detail::PadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PadOpGenericAdaptorBase;
public:
  PadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PadOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  PadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : PadOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = PadOp, typename = std::enable_if_t<std::is_same_v<LateInst, PadOp>>>
  PadOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getPadToMultipleOf() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PadOpAdaptor : public PadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PadOpGenericAdaptor::PadOpGenericAdaptor;
  PadOpAdaptor(PadOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class PadOp : public ::mlir::Op<PadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("copy_back_op"), ::llvm::StringRef("pack_paddings"), ::llvm::StringRef("padding_dimensions"), ::llvm::StringRef("padding_values"), ::llvm::StringRef("static_pad_to_multiple_of"), ::llvm::StringRef("transpose_paddings")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getCopyBackOpAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getCopyBackOpAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getPackPaddingsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getPackPaddingsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getPaddingDimensionsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getPaddingDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getPaddingValuesAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getPaddingValuesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getStaticPadToMultipleOfAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getStaticPadToMultipleOfAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getTransposePaddingsAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getTransposePaddingsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.pad");
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

  ::mlir::Operation::operand_range getPadToMultipleOf() {
    return getODSOperands(1);
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getPadToMultipleOfMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPadded() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPad() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getCopy() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(2).begin());
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
  ::mlir::ArrayAttr getPaddingValuesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().padding_values);
  }

  ::mlir::ArrayAttr getPaddingValues();
  ::mlir::ArrayAttr getPaddingDimensionsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().padding_dimensions);
  }

  ::mlir::ArrayAttr getPaddingDimensions();
  ::mlir::DenseI64ArrayAttr getStaticPadToMultipleOfAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_pad_to_multiple_of);
  }

  ::llvm::ArrayRef<int64_t> getStaticPadToMultipleOf();
  ::mlir::ArrayAttr getPackPaddingsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().pack_paddings);
  }

  ::mlir::ArrayAttr getPackPaddings();
  ::mlir::ArrayAttr getTransposePaddingsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().transpose_paddings);
  }

  ::mlir::ArrayAttr getTransposePaddings();
  ::mlir::StringAttr getCopyBackOpAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().copy_back_op);
  }

  ::llvm::StringRef getCopyBackOp();
  void setPaddingValuesAttr(::mlir::ArrayAttr attr) {
    getProperties().padding_values = attr;
  }

  void setPaddingDimensionsAttr(::mlir::ArrayAttr attr) {
    getProperties().padding_dimensions = attr;
  }

  void setStaticPadToMultipleOfAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().static_pad_to_multiple_of = attr;
  }

  void setStaticPadToMultipleOf(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setPackPaddingsAttr(::mlir::ArrayAttr attr) {
    getProperties().pack_paddings = attr;
  }

  void setTransposePaddingsAttr(::mlir::ArrayAttr attr) {
    getProperties().transpose_paddings = attr;
  }

  void setCopyBackOpAttr(::mlir::StringAttr attr) {
    getProperties().copy_back_op = attr;
  }

  void setCopyBackOp(::llvm::StringRef attrValue);
  ::mlir::Attribute removeStaticPadToMultipleOfAttr() {
      auto &attr = getProperties().static_pad_to_multiple_of;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> paddingDimensions, ArrayRef<int64_t> staticPadToMultipleOf = {}, ArrayRef<int64_t> packPaddings = {}, ArrayRef<Attribute> transposePaddings = {}, StringRef copyBackOp = ::mlir::bufferization::MaterializeInDestinationOp::getOperationName());
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> paddingDimensions, ArrayRef<OpFoldResult> mixedPadToMultipleOf, ArrayRef<int64_t> packPaddings = {}, ArrayRef<Attribute> transposePaddings = {}, StringRef copyBackOp = ::mlir::bufferization::MaterializeInDestinationOp::getOperationName());
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type padded, ::mlir::Type pad, ::mlir::Type copy, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ValueRange pad_to_multiple_of, /*optional*/::mlir::DenseI64ArrayAttr static_pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings = nullptr, ::mlir::ArrayAttr transpose_paddings = nullptr, ::mlir::StringAttr copy_back_op = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ValueRange pad_to_multiple_of, /*optional*/::mlir::DenseI64ArrayAttr static_pad_to_multiple_of, ::mlir::ArrayAttr pack_paddings = nullptr, ::mlir::ArrayAttr transpose_paddings = nullptr, ::mlir::StringAttr copy_back_op = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type padded, ::mlir::Type pad, ::mlir::Type copy, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ValueRange pad_to_multiple_of, /*optional*/::llvm::ArrayRef<int64_t> static_pad_to_multiple_of = {}, ::mlir::ArrayAttr pack_paddings = nullptr, ::mlir::ArrayAttr transpose_paddings = nullptr, ::llvm::StringRef copy_back_op = ::mlir::bufferization::MaterializeInDestinationOp::getOperationName());
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr padding_values, ::mlir::ArrayAttr padding_dimensions, ::mlir::ValueRange pad_to_multiple_of, /*optional*/::llvm::ArrayRef<int64_t> static_pad_to_multiple_of = {}, ::mlir::ArrayAttr pack_paddings = nullptr, ::mlir::ArrayAttr transpose_paddings = nullptr, ::llvm::StringRef copy_back_op = ::mlir::bufferization::MaterializeInDestinationOp::getOperationName());
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
    assert(index < 6 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  /// copy_back_op attribute value indicating that no copy back is desired.
  static constexpr StringRef kCopyOpNone = "none";

  /// Returns a mix of dynamic `pad_to_multiple_of` and static `static_pad_to_multiple_of`.
  SmallVector<OpFoldResult> getMixedPadToMultipleOf();

  ::mlir::DiagnosedSilenceableFailure apply(
    ::mlir::transform::TransformRewriter &rewriter,
    ::mlir::transform::TransformResults &results,
    ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PadOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PromoteOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PromoteOpGenericAdaptorBase {
public:
  struct Properties {
    using alignmentTy = ::mlir::IntegerAttr;
    alignmentTy alignment;

    auto getAlignment() {
      auto &propStorage = this->alignment;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setAlignment(const ::mlir::IntegerAttr &propValue) {
      this->alignment = propValue;
    }
    using mappingTy = ::mlir::ArrayAttr;
    mappingTy mapping;

    auto getMapping() {
      auto &propStorage = this->mapping;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setMapping(const ::mlir::ArrayAttr &propValue) {
      this->mapping = propValue;
    }
    using memory_spaceTy = ::mlir::Attribute;
    memory_spaceTy memory_space;

    auto getMemorySpace() {
      auto &propStorage = this->memory_space;
      return ::llvm::dyn_cast_or_null<::mlir::Attribute>(propStorage);
    }
    void setMemorySpace(const ::mlir::Attribute &propValue) {
      this->memory_space = propValue;
    }
    using operands_to_promoteTy = ::mlir::ArrayAttr;
    operands_to_promoteTy operands_to_promote;

    auto getOperandsToPromote() {
      auto &propStorage = this->operands_to_promote;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setOperandsToPromote(const ::mlir::ArrayAttr &propValue) {
      this->operands_to_promote = propValue;
    }
    using use_allocaTy = ::mlir::UnitAttr;
    use_allocaTy use_alloca;

    auto getUseAlloca() {
      auto &propStorage = this->use_alloca;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setUseAlloca(const ::mlir::UnitAttr &propValue) {
      this->use_alloca = propValue;
    }
    using use_full_tile_buffersTy = ::mlir::ArrayAttr;
    use_full_tile_buffersTy use_full_tile_buffers;

    auto getUseFullTileBuffers() {
      auto &propStorage = this->use_full_tile_buffers;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setUseFullTileBuffers(const ::mlir::ArrayAttr &propValue) {
      this->use_full_tile_buffers = propValue;
    }
    using use_full_tiles_by_defaultTy = ::mlir::UnitAttr;
    use_full_tiles_by_defaultTy use_full_tiles_by_default;

    auto getUseFullTilesByDefault() {
      auto &propStorage = this->use_full_tiles_by_default;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setUseFullTilesByDefault(const ::mlir::UnitAttr &propValue) {
      this->use_full_tiles_by_default = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.alignment == this->alignment &&
        rhs.mapping == this->mapping &&
        rhs.memory_space == this->memory_space &&
        rhs.operands_to_promote == this->operands_to_promote &&
        rhs.use_alloca == this->use_alloca &&
        rhs.use_full_tile_buffers == this->use_full_tile_buffers &&
        rhs.use_full_tiles_by_default == this->use_full_tiles_by_default &&
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
  PromoteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.promote", odsAttrs.getContext());
  }

  PromoteOpGenericAdaptorBase(PromoteOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::ArrayAttr getOperandsToPromoteAttr();
  ::mlir::ArrayAttr getOperandsToPromote();
  ::mlir::ArrayAttr getUseFullTileBuffersAttr();
  ::mlir::ArrayAttr getUseFullTileBuffers();
  ::mlir::UnitAttr getUseFullTilesByDefaultAttr();
  bool getUseFullTilesByDefault();
  ::mlir::UnitAttr getUseAllocaAttr();
  bool getUseAlloca();
  ::mlir::Attribute getMemorySpaceAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().memory_space);
    return attr;
  }

  ::std::optional<::mlir::Attribute> getMemorySpace();
  ::mlir::ArrayAttr getMappingAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
    return attr;
  }

  ::std::optional< ::mlir::ArrayAttr > getMapping();
  ::mlir::IntegerAttr getAlignmentAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().alignment);
    return attr;
  }

  ::std::optional<uint64_t> getAlignment();
};
} // namespace detail
template <typename RangeT>
class PromoteOpGenericAdaptor : public detail::PromoteOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PromoteOpGenericAdaptorBase;
public:
  PromoteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PromoteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PromoteOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  PromoteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : PromoteOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = PromoteOp, typename = std::enable_if_t<std::is_same_v<LateInst, PromoteOp>>>
  PromoteOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class PromoteOpAdaptor : public PromoteOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PromoteOpGenericAdaptor::PromoteOpGenericAdaptor;
  PromoteOpAdaptor(PromoteOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class PromoteOp : public ::mlir::Op<PromoteOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PromoteOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PromoteOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alignment"), ::llvm::StringRef("mapping"), ::llvm::StringRef("memory_space"), ::llvm::StringRef("operands_to_promote"), ::llvm::StringRef("use_alloca"), ::llvm::StringRef("use_full_tile_buffers"), ::llvm::StringRef("use_full_tiles_by_default")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAlignmentAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAlignmentAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMappingAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMappingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getMemorySpaceAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getMemorySpaceAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getOperandsToPromoteAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getOperandsToPromoteAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getUseAllocaAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getUseAllocaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getUseFullTileBuffersAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getUseFullTileBuffersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getUseFullTilesByDefaultAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getUseFullTilesByDefaultAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.promote");
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
  ::mlir::ArrayAttr getOperandsToPromoteAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().operands_to_promote);
  }

  ::mlir::ArrayAttr getOperandsToPromote();
  ::mlir::ArrayAttr getUseFullTileBuffersAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().use_full_tile_buffers);
  }

  ::mlir::ArrayAttr getUseFullTileBuffers();
  ::mlir::UnitAttr getUseFullTilesByDefaultAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_full_tiles_by_default);
  }

  bool getUseFullTilesByDefault();
  ::mlir::UnitAttr getUseAllocaAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_alloca);
  }

  bool getUseAlloca();
  ::mlir::Attribute getMemorySpaceAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().memory_space);
  }

  ::std::optional<::mlir::Attribute> getMemorySpace();
  ::mlir::ArrayAttr getMappingAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
  }

  ::std::optional< ::mlir::ArrayAttr > getMapping();
  ::mlir::IntegerAttr getAlignmentAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().alignment);
  }

  ::std::optional<uint64_t> getAlignment();
  void setOperandsToPromoteAttr(::mlir::ArrayAttr attr) {
    getProperties().operands_to_promote = attr;
  }

  void setUseFullTileBuffersAttr(::mlir::ArrayAttr attr) {
    getProperties().use_full_tile_buffers = attr;
  }

  void setUseFullTilesByDefaultAttr(::mlir::UnitAttr attr) {
    getProperties().use_full_tiles_by_default = attr;
  }

  void setUseFullTilesByDefault(bool attrValue);
  void setUseAllocaAttr(::mlir::UnitAttr attr) {
    getProperties().use_alloca = attr;
  }

  void setUseAlloca(bool attrValue);
  void setMemorySpaceAttr(::mlir::Attribute attr) {
    getProperties().memory_space = attr;
  }

  void setMappingAttr(::mlir::ArrayAttr attr) {
    getProperties().mapping = attr;
  }

  void setAlignmentAttr(::mlir::IntegerAttr attr) {
    getProperties().alignment = attr;
  }

  void setAlignment(::std::optional<uint64_t> attrValue);
  ::mlir::Attribute removeUseFullTilesByDefaultAttr() {
      auto &attr = getProperties().use_full_tiles_by_default;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeUseAllocaAttr() {
      auto &attr = getProperties().use_alloca;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeMemorySpaceAttr() {
      auto &attr = getProperties().memory_space;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeMappingAttr() {
      auto &attr = getProperties().mapping;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeAlignmentAttr() {
      auto &attr = getProperties().alignment;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::Attribute memory_space, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/::mlir::UnitAttr use_full_tiles_by_default, /*optional*/::mlir::UnitAttr use_alloca, /*optional*/::mlir::Attribute memory_space, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::Attribute memory_space, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ArrayAttr operands_to_promote, ::mlir::ArrayAttr use_full_tile_buffers, /*optional*/bool use_full_tiles_by_default, /*optional*/bool use_alloca, /*optional*/::mlir::Attribute memory_space, /*optional*/::mlir::ArrayAttr mapping, /*optional*/::mlir::IntegerAttr alignment);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 7 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PromoteOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ReplaceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReplaceOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ReplaceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.replace", odsAttrs.getContext());
  }

  ReplaceOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::Region &getBodyRegion() {
    return *odsRegions[0];
  }

  ::mlir::RegionRange getRegions() {
    return odsRegions;
  }

};
} // namespace detail
template <typename RangeT>
class ReplaceOpGenericAdaptor : public detail::ReplaceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReplaceOpGenericAdaptorBase;
public:
  ReplaceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReplaceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReplaceOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ReplaceOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReplaceOp>>>
  ReplaceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ReplaceOpAdaptor : public ReplaceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReplaceOpGenericAdaptor::ReplaceOpGenericAdaptor;
  ReplaceOpAdaptor(ReplaceOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ReplaceOp : public ::mlir::Op<ReplaceOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::NoTerminator, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsIsolatedFromAbove, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::RegionKindInterface::Trait, ::mlir::OpTrait::HasOnlyGraphRegion> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReplaceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReplaceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.replace");
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

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getReplacement() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::Region &getBodyRegion() {
    return (*this)->getRegion(0);
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type replacement, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ReplaceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::RewriteInDestinationPassingStyleOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RewriteInDestinationPassingStyleOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RewriteInDestinationPassingStyleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.rewrite_in_destination_passing_style", odsAttrs.getContext());
  }

  RewriteInDestinationPassingStyleOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class RewriteInDestinationPassingStyleOpGenericAdaptor : public detail::RewriteInDestinationPassingStyleOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RewriteInDestinationPassingStyleOpGenericAdaptorBase;
public:
  RewriteInDestinationPassingStyleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RewriteInDestinationPassingStyleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RewriteInDestinationPassingStyleOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RewriteInDestinationPassingStyleOp, typename = std::enable_if_t<std::is_same_v<LateInst, RewriteInDestinationPassingStyleOp>>>
  RewriteInDestinationPassingStyleOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class RewriteInDestinationPassingStyleOpAdaptor : public RewriteInDestinationPassingStyleOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RewriteInDestinationPassingStyleOpGenericAdaptor::RewriteInDestinationPassingStyleOpGenericAdaptor;
  RewriteInDestinationPassingStyleOpAdaptor(RewriteInDestinationPassingStyleOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class RewriteInDestinationPassingStyleOp : public ::mlir::Op<RewriteInDestinationPassingStyleOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RewriteInDestinationPassingStyleOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RewriteInDestinationPassingStyleOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.rewrite_in_destination_passing_style");
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
      ::mlir::Operation *target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::RewriteInDestinationPassingStyleOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ScalarizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalarizeOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalarizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.scalarize", odsAttrs.getContext());
  }

  ScalarizeOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class ScalarizeOpGenericAdaptor : public detail::ScalarizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalarizeOpGenericAdaptorBase;
public:
  ScalarizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalarizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalarizeOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalarizeOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalarizeOp>>>
  ScalarizeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ScalarizeOpAdaptor : public ScalarizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalarizeOpGenericAdaptor::ScalarizeOpGenericAdaptor;
  ScalarizeOpAdaptor(ScalarizeOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class ScalarizeOp : public ::mlir::Op<ScalarizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalarizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalarizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.scalarize");
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

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getResult() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ScalarizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SpecializeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SpecializeOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  SpecializeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.specialize", odsAttrs.getContext());
  }

  SpecializeOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class SpecializeOpGenericAdaptor : public detail::SpecializeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SpecializeOpGenericAdaptorBase;
public:
  SpecializeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SpecializeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SpecializeOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = SpecializeOp, typename = std::enable_if_t<std::is_same_v<LateInst, SpecializeOp>>>
  SpecializeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class SpecializeOpAdaptor : public SpecializeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SpecializeOpGenericAdaptor::SpecializeOpGenericAdaptor;
  SpecializeOpAdaptor(SpecializeOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class SpecializeOp : public ::mlir::Op<SpecializeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SpecializeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SpecializeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.specialize");
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
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::SpecializeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SplitOpGenericAdaptorBase {
public:
  struct Properties {
    using dimensionTy = ::mlir::IntegerAttr;
    dimensionTy dimension;

    auto getDimension() {
      auto &propStorage = this->dimension;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setDimension(const ::mlir::IntegerAttr &propValue) {
      this->dimension = propValue;
    }
    using multiwayTy = ::mlir::UnitAttr;
    multiwayTy multiway;

    auto getMultiway() {
      auto &propStorage = this->multiway;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setMultiway(const ::mlir::UnitAttr &propValue) {
      this->multiway = propValue;
    }
    using static_chunk_sizesTy = ::mlir::IntegerAttr;
    static_chunk_sizesTy static_chunk_sizes;

    auto getStaticChunkSizes() {
      auto &propStorage = this->static_chunk_sizes;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setStaticChunkSizes(const ::mlir::IntegerAttr &propValue) {
      this->static_chunk_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.dimension == this->dimension &&
        rhs.multiway == this->multiway &&
        rhs.static_chunk_sizes == this->static_chunk_sizes &&
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
  SplitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.split", odsAttrs.getContext());
  }

  SplitOpGenericAdaptorBase(SplitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getDimensionAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
    return attr;
  }

  uint64_t getDimension();
  ::mlir::IntegerAttr getStaticChunkSizesAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().static_chunk_sizes);
    return attr;
  }

  uint64_t getStaticChunkSizes();
  ::mlir::UnitAttr getMultiwayAttr();
  bool getMultiway();
};
} // namespace detail
template <typename RangeT>
class SplitOpGenericAdaptor : public detail::SplitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SplitOpGenericAdaptorBase;
public:
  SplitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SplitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SplitOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  SplitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : SplitOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = SplitOp, typename = std::enable_if_t<std::is_same_v<LateInst, SplitOp>>>
  SplitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getDynamicChunkSizes() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SplitOpAdaptor : public SplitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SplitOpGenericAdaptor::SplitOpGenericAdaptor;
  SplitOpAdaptor(SplitOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class SplitOp : public ::mlir::Op<SplitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SplitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SplitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dimension"), ::llvm::StringRef("multiway"), ::llvm::StringRef("static_chunk_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimensionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMultiwayAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMultiwayAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getStaticChunkSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getStaticChunkSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.split");
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

  ::mlir::Value getDynamicChunkSizes() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getDynamicChunkSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getFirst() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getSecond() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
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
  ::mlir::IntegerAttr getDimensionAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().dimension);
  }

  uint64_t getDimension();
  ::mlir::IntegerAttr getStaticChunkSizesAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().static_chunk_sizes);
  }

  uint64_t getStaticChunkSizes();
  ::mlir::UnitAttr getMultiwayAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().multiway);
  }

  bool getMultiway();
  void setDimensionAttr(::mlir::IntegerAttr attr) {
    getProperties().dimension = attr;
  }

  void setDimension(uint64_t attrValue);
  void setStaticChunkSizesAttr(::mlir::IntegerAttr attr) {
    getProperties().static_chunk_sizes = attr;
  }

  void setStaticChunkSizes(uint64_t attrValue);
  void setMultiwayAttr(::mlir::UnitAttr attr) {
    getProperties().multiway = attr;
  }

  void setMultiway(bool attrValue);
  ::mlir::Attribute removeMultiwayAttr() {
      auto &attr = getProperties().multiway;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_chunk_sizes, ::mlir::IntegerAttr static_chunk_sizes, /*optional*/::mlir::UnitAttr multiway);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr dimension, /*optional*/::mlir::Value dynamic_chunk_sizes, ::mlir::IntegerAttr static_chunk_sizes, /*optional*/::mlir::UnitAttr multiway);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type first, ::mlir::Type second, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_chunk_sizes, uint64_t static_chunk_sizes, /*optional*/bool multiway = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t dimension, /*optional*/::mlir::Value dynamic_chunk_sizes, uint64_t static_chunk_sizes, /*optional*/bool multiway = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
  ::llvm::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::SplitOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitReductionOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SplitReductionOpGenericAdaptorBase {
public:
  struct Properties {
    using inner_parallelTy = ::mlir::UnitAttr;
    inner_parallelTy inner_parallel;

    auto getInnerParallel() {
      auto &propStorage = this->inner_parallel;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setInnerParallel(const ::mlir::UnitAttr &propValue) {
      this->inner_parallel = propValue;
    }
    using insert_split_dimensionTy = ::mlir::IntegerAttr;
    insert_split_dimensionTy insert_split_dimension;

    auto getInsertSplitDimension() {
      auto &propStorage = this->insert_split_dimension;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setInsertSplitDimension(const ::mlir::IntegerAttr &propValue) {
      this->insert_split_dimension = propValue;
    }
    using split_factorTy = ::mlir::IntegerAttr;
    split_factorTy split_factor;

    auto getSplitFactor() {
      auto &propStorage = this->split_factor;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setSplitFactor(const ::mlir::IntegerAttr &propValue) {
      this->split_factor = propValue;
    }
    using use_allocTy = ::mlir::UnitAttr;
    use_allocTy use_alloc;

    auto getUseAlloc() {
      auto &propStorage = this->use_alloc;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setUseAlloc(const ::mlir::UnitAttr &propValue) {
      this->use_alloc = propValue;
    }
    using use_scaling_algorithmTy = ::mlir::UnitAttr;
    use_scaling_algorithmTy use_scaling_algorithm;

    auto getUseScalingAlgorithm() {
      auto &propStorage = this->use_scaling_algorithm;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setUseScalingAlgorithm(const ::mlir::UnitAttr &propValue) {
      this->use_scaling_algorithm = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.inner_parallel == this->inner_parallel &&
        rhs.insert_split_dimension == this->insert_split_dimension &&
        rhs.split_factor == this->split_factor &&
        rhs.use_alloc == this->use_alloc &&
        rhs.use_scaling_algorithm == this->use_scaling_algorithm &&
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
  SplitReductionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.split_reduction", odsAttrs.getContext());
  }

  SplitReductionOpGenericAdaptorBase(SplitReductionOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getSplitFactorAttr();
  uint64_t getSplitFactor();
  ::mlir::IntegerAttr getInsertSplitDimensionAttr();
  uint64_t getInsertSplitDimension();
  ::mlir::UnitAttr getInnerParallelAttr();
  bool getInnerParallel();
  ::mlir::UnitAttr getUseScalingAlgorithmAttr();
  bool getUseScalingAlgorithm();
  ::mlir::UnitAttr getUseAllocAttr();
  bool getUseAlloc();
};
} // namespace detail
template <typename RangeT>
class SplitReductionOpGenericAdaptor : public detail::SplitReductionOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SplitReductionOpGenericAdaptorBase;
public:
  SplitReductionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SplitReductionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SplitReductionOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  SplitReductionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : SplitReductionOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = SplitReductionOp, typename = std::enable_if_t<std::is_same_v<LateInst, SplitReductionOp>>>
  SplitReductionOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class SplitReductionOpAdaptor : public SplitReductionOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SplitReductionOpGenericAdaptor::SplitReductionOpGenericAdaptor;
  SplitReductionOpAdaptor(SplitReductionOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class SplitReductionOp : public ::mlir::Op<SplitReductionOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<4>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SplitReductionOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SplitReductionOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("inner_parallel"), ::llvm::StringRef("insert_split_dimension"), ::llvm::StringRef("split_factor"), ::llvm::StringRef("use_alloc"), ::llvm::StringRef("use_scaling_algorithm")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInnerParallelAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInnerParallelAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getInsertSplitDimensionAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getInsertSplitDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getSplitFactorAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getSplitFactorAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getUseAllocAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getUseAllocAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getUseScalingAlgorithmAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getUseScalingAlgorithmAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.split_reduction");
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

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getInitOrAllocOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getFillOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getSplitLinalgOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(2).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getCombiningLinalgOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(3).begin());
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
  ::mlir::IntegerAttr getSplitFactorAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().split_factor);
  }

  uint64_t getSplitFactor();
  ::mlir::IntegerAttr getInsertSplitDimensionAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().insert_split_dimension);
  }

  uint64_t getInsertSplitDimension();
  ::mlir::UnitAttr getInnerParallelAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inner_parallel);
  }

  bool getInnerParallel();
  ::mlir::UnitAttr getUseScalingAlgorithmAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_scaling_algorithm);
  }

  bool getUseScalingAlgorithm();
  ::mlir::UnitAttr getUseAllocAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().use_alloc);
  }

  bool getUseAlloc();
  void setSplitFactorAttr(::mlir::IntegerAttr attr) {
    getProperties().split_factor = attr;
  }

  void setSplitFactor(uint64_t attrValue);
  void setInsertSplitDimensionAttr(::mlir::IntegerAttr attr) {
    getProperties().insert_split_dimension = attr;
  }

  void setInsertSplitDimension(uint64_t attrValue);
  void setInnerParallelAttr(::mlir::UnitAttr attr) {
    getProperties().inner_parallel = attr;
  }

  void setInnerParallel(bool attrValue);
  void setUseScalingAlgorithmAttr(::mlir::UnitAttr attr) {
    getProperties().use_scaling_algorithm = attr;
  }

  void setUseScalingAlgorithm(bool attrValue);
  void setUseAllocAttr(::mlir::UnitAttr attr) {
    getProperties().use_alloc = attr;
  }

  void setUseAlloc(bool attrValue);
  ::mlir::Attribute removeInnerParallelAttr() {
      auto &attr = getProperties().inner_parallel;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeUseScalingAlgorithmAttr() {
      auto &attr = getProperties().use_scaling_algorithm;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeUseAllocAttr() {
      auto &attr = getProperties().use_alloc;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, int64_t splitFactor, int64_t insertSplitDimension, bool innerParallel = false, bool useScalingAlgorithm = false, bool useAlloc = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension = nullptr, /*optional*/::mlir::UnitAttr inner_parallel = nullptr, /*optional*/::mlir::UnitAttr use_scaling_algorithm = nullptr, /*optional*/::mlir::UnitAttr use_alloc = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr split_factor, ::mlir::IntegerAttr insert_split_dimension = nullptr, /*optional*/::mlir::UnitAttr inner_parallel = nullptr, /*optional*/::mlir::UnitAttr use_scaling_algorithm = nullptr, /*optional*/::mlir::UnitAttr use_alloc = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type init_or_alloc_op, ::mlir::Type fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Value target, uint64_t split_factor = {}, uint64_t insert_split_dimension = {}, /*optional*/bool inner_parallel = false, /*optional*/bool use_scaling_algorithm = false, /*optional*/bool use_alloc = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t split_factor = {}, uint64_t insert_split_dimension = {}, /*optional*/bool inner_parallel = false, /*optional*/bool use_scaling_algorithm = false, /*optional*/bool use_alloc = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
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
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::SplitReductionOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingForOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileReductionUsingForOpGenericAdaptorBase {
public:
  struct Properties {
    using tile_sizesTy = ::mlir::DenseI64ArrayAttr;
    tile_sizesTy tile_sizes;

    auto getTileSizes() {
      auto &propStorage = this->tile_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setTileSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->tile_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.tile_sizes == this->tile_sizes &&
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
  TileReductionUsingForOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.tile_reduction_using_for", odsAttrs.getContext());
  }

  TileReductionUsingForOpGenericAdaptorBase(TileReductionUsingForOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getTileSizes();
};
} // namespace detail
template <typename RangeT>
class TileReductionUsingForOpGenericAdaptor : public detail::TileReductionUsingForOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileReductionUsingForOpGenericAdaptorBase;
public:
  TileReductionUsingForOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TileReductionUsingForOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TileReductionUsingForOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  TileReductionUsingForOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : TileReductionUsingForOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = TileReductionUsingForOp, typename = std::enable_if_t<std::is_same_v<LateInst, TileReductionUsingForOp>>>
  TileReductionUsingForOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class TileReductionUsingForOpAdaptor : public TileReductionUsingForOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileReductionUsingForOpGenericAdaptor::TileReductionUsingForOpGenericAdaptor;
  TileReductionUsingForOpAdaptor(TileReductionUsingForOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class TileReductionUsingForOp : public ::mlir::Op<TileReductionUsingForOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileReductionUsingForOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileReductionUsingForOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("tile_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTileSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_reduction_using_for");
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

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Operation::result_range getFillOp() {
    return getODSResults(0);
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getSplitLinalgOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getCombiningLinalgOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(2).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getForOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(3).begin());
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
  ::mlir::DenseI64ArrayAttr getTileSizesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().tile_sizes);
  }

  ::llvm::ArrayRef<int64_t> getTileSizes();
  void setTileSizesAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().tile_sizes = attr;
  }

  void setTileSizes(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticTileSizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Type for_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr tile_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Type for_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> tile_sizes = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingForOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileReductionUsingForallOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileReductionUsingForallOpGenericAdaptorBase {
public:
  struct Properties {
    using mappingTy = ::mlir::ArrayAttr;
    mappingTy mapping;

    auto getMapping() {
      auto &propStorage = this->mapping;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setMapping(const ::mlir::ArrayAttr &propValue) {
      this->mapping = propValue;
    }
    using num_threadsTy = ::mlir::DenseI64ArrayAttr;
    num_threadsTy num_threads;

    auto getNumThreads() {
      auto &propStorage = this->num_threads;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setNumThreads(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->num_threads = propValue;
    }
    using tile_sizesTy = ::mlir::DenseI64ArrayAttr;
    tile_sizesTy tile_sizes;

    auto getTileSizes() {
      auto &propStorage = this->tile_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setTileSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->tile_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mapping == this->mapping &&
        rhs.num_threads == this->num_threads &&
        rhs.tile_sizes == this->tile_sizes &&
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
  TileReductionUsingForallOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.tile_reduction_using_forall", odsAttrs.getContext());
  }

  TileReductionUsingForallOpGenericAdaptorBase(TileReductionUsingForallOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getNumThreadsAttr();
  ::llvm::ArrayRef<int64_t> getNumThreads();
  ::mlir::DenseI64ArrayAttr getTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getTileSizes();
  ::mlir::ArrayAttr getMappingAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
    return attr;
  }

  ::std::optional< ::mlir::ArrayAttr > getMapping();
};
} // namespace detail
template <typename RangeT>
class TileReductionUsingForallOpGenericAdaptor : public detail::TileReductionUsingForallOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileReductionUsingForallOpGenericAdaptorBase;
public:
  TileReductionUsingForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TileReductionUsingForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TileReductionUsingForallOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  TileReductionUsingForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : TileReductionUsingForallOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = TileReductionUsingForallOp, typename = std::enable_if_t<std::is_same_v<LateInst, TileReductionUsingForallOp>>>
  TileReductionUsingForallOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class TileReductionUsingForallOpAdaptor : public TileReductionUsingForallOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileReductionUsingForallOpGenericAdaptor::TileReductionUsingForallOpGenericAdaptor;
  TileReductionUsingForallOpAdaptor(TileReductionUsingForallOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class TileReductionUsingForallOp : public ::mlir::Op<TileReductionUsingForallOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<3>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileReductionUsingForallOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileReductionUsingForallOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mapping"), ::llvm::StringRef("num_threads"), ::llvm::StringRef("tile_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMappingAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMappingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNumThreadsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNumThreadsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTileSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_reduction_using_forall");
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

  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::Operation::result_range getFillOp() {
    return getODSResults(0);
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getSplitLinalgOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getCombiningLinalgOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(2).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getForallOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(3).begin());
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
  ::mlir::DenseI64ArrayAttr getNumThreadsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().num_threads);
  }

  ::llvm::ArrayRef<int64_t> getNumThreads();
  ::mlir::DenseI64ArrayAttr getTileSizesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().tile_sizes);
  }

  ::llvm::ArrayRef<int64_t> getTileSizes();
  ::mlir::ArrayAttr getMappingAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
  }

  ::std::optional< ::mlir::ArrayAttr > getMapping();
  void setNumThreadsAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().num_threads = attr;
  }

  void setNumThreads(::llvm::ArrayRef<int64_t> attrValue);
  void setTileSizesAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().tile_sizes = attr;
  }

  void setTileSizes(::llvm::ArrayRef<int64_t> attrValue);
  void setMappingAttr(::mlir::ArrayAttr attr) {
    getProperties().mapping = attr;
  }

  ::mlir::Attribute removeMappingAttr() {
      auto &attr = getProperties().mapping;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticNumThreads, ArrayRef<int64_t> staticTileSizes, ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Type forall_op, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr num_threads, ::mlir::DenseI64ArrayAttr tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange fill_op, ::mlir::Type split_linalg_op, ::mlir::Type combining_linalg_op, ::mlir::Type forall_op, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> num_threads, ::llvm::ArrayRef<int64_t> tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::llvm::LogicalResult verifyInvariantsImpl();
  ::llvm::LogicalResult verifyInvariants();
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
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileReductionUsingForallOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileUsingForOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileUsingForOpGenericAdaptorBase {
public:
  struct Properties {
    using interchangeTy = ::mlir::DenseI64ArrayAttr;
    interchangeTy interchange;

    auto getInterchange() {
      auto &propStorage = this->interchange;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setInterchange(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->interchange = propValue;
    }
    using scalable_sizesTy = ::mlir::DenseBoolArrayAttr;
    scalable_sizesTy scalable_sizes;

    auto getScalableSizes() {
      auto &propStorage = this->scalable_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(propStorage);
    }
    void setScalableSizes(const ::mlir::DenseBoolArrayAttr &propValue) {
      this->scalable_sizes = propValue;
    }
    using static_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_sizesTy static_sizes;

    auto getStaticSizes() {
      auto &propStorage = this->static_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_sizes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.interchange == this->interchange &&
        rhs.scalable_sizes == this->scalable_sizes &&
        rhs.static_sizes == this->static_sizes &&
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
  TileUsingForOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.tile_using_for", odsAttrs.getContext());
  }

  TileUsingForOpGenericAdaptorBase(TileUsingForOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getStaticSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getInterchangeAttr();
  ::llvm::ArrayRef<int64_t> getInterchange();
  ::mlir::DenseBoolArrayAttr getScalableSizesAttr();
  ::llvm::ArrayRef<bool> getScalableSizes();
};
} // namespace detail
template <typename RangeT>
class TileUsingForOpGenericAdaptor : public detail::TileUsingForOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileUsingForOpGenericAdaptorBase;
public:
  TileUsingForOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TileUsingForOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TileUsingForOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  TileUsingForOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : TileUsingForOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = TileUsingForOp, typename = std::enable_if_t<std::is_same_v<LateInst, TileUsingForOp>>>
  TileUsingForOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getDynamicSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileUsingForOpAdaptor : public TileUsingForOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileUsingForOpGenericAdaptor::TileUsingForOpGenericAdaptor;
  TileUsingForOpAdaptor(TileUsingForOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class TileUsingForOp : public ::mlir::Op<TileUsingForOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<1>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileUsingForOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileUsingForOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("interchange"), ::llvm::StringRef("scalable_sizes"), ::llvm::StringRef("static_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInterchangeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInterchangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getScalableSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getScalableSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getStaticSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getStaticSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_using_for");
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

  ::mlir::Operation::operand_range getDynamicSizes() {
    return getODSOperands(1);
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getDynamicSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTiledLinalgOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::Operation::result_range getLoops() {
    return getODSResults(1);
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
  ::mlir::DenseI64ArrayAttr getStaticSizesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_sizes);
  }

  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getInterchangeAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().interchange);
  }

  ::llvm::ArrayRef<int64_t> getInterchange();
  ::mlir::DenseBoolArrayAttr getScalableSizesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(getProperties().scalable_sizes);
  }

  ::llvm::ArrayRef<bool> getScalableSizes();
  void setStaticSizesAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().static_sizes = attr;
  }

  void setStaticSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setInterchangeAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().interchange = attr;
  }

  void setInterchange(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setScalableSizesAttr(::mlir::DenseBoolArrayAttr attr) {
    getProperties().scalable_sizes = attr;
  }

  void setScalableSizes(::std::optional<::llvm::ArrayRef<bool>> attrValue);
  ::mlir::Attribute removeStaticSizesAttr() {
      auto &attr = getProperties().static_sizes;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeInterchangeAttr() {
      auto &attr = getProperties().interchange;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeScalableSizesAttr() {
      auto &attr = getProperties().scalable_sizes;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, TypeRange loopTypes, Value target, ArrayRef<int64_t> staticTileSizes, ArrayRef<int64_t> interchange = {}, std::optional<ArrayRef<bool>> scalableSizes = std::nullopt);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, TypeRange loopTypes, Value target, ArrayRef<OpFoldResult> mixedTileSizes, ArrayRef<int64_t> interchange = {}, std::optional<ArrayRef<bool>> scalableSizes = std::nullopt);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticTileSizes, ArrayRef<int64_t> interchange = {}, std::optional<ArrayRef<bool>> scalableSizes = std::nullopt);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedTileSizes, ArrayRef<int64_t> interchange = {}, std::optional<ArrayRef<bool>> scalableSizes = std::nullopt);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange = nullptr, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_sizes, /*optional*/::mlir::DenseI64ArrayAttr interchange = nullptr, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_linalg_op, ::mlir::TypeRange loops, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> interchange = {}, /*optional*/::llvm::ArrayRef<bool> scalable_sizes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange dynamic_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_sizes = {}, /*optional*/::llvm::ArrayRef<int64_t> interchange = {}, /*optional*/::llvm::ArrayRef<bool> scalable_sizes = {});
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
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  /// Returns the list of tile sizes, which may be static (Attribute) or
  /// dynamic (Value).
  SmallVector<OpFoldResult> getMixedSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileUsingForOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TileUsingForallOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileUsingForallOpGenericAdaptorBase {
public:
  struct Properties {
    using mappingTy = ::mlir::ArrayAttr;
    mappingTy mapping;

    auto getMapping() {
      auto &propStorage = this->mapping;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setMapping(const ::mlir::ArrayAttr &propValue) {
      this->mapping = propValue;
    }
    using static_num_threadsTy = ::mlir::DenseI64ArrayAttr;
    static_num_threadsTy static_num_threads;

    auto getStaticNumThreads() {
      auto &propStorage = this->static_num_threads;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticNumThreads(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_num_threads = propValue;
    }
    using static_tile_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_tile_sizesTy static_tile_sizes;

    auto getStaticTileSizes() {
      auto &propStorage = this->static_tile_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticTileSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_tile_sizes = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 5>;
    operandSegmentSizesTy operandSegmentSizes;
    ::llvm::ArrayRef<int32_t> getOperandSegmentSizes() {
      auto &propStorage = this->operandSegmentSizes;
      return propStorage;
    }
    void setOperandSegmentSizes(const ::llvm::ArrayRef<int32_t> &propValue) {
      auto &propStorage = this->operandSegmentSizes;
      ::llvm::copy(propValue, propStorage.begin());
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mapping == this->mapping &&
        rhs.static_num_threads == this->static_num_threads &&
        rhs.static_tile_sizes == this->static_tile_sizes &&
        rhs.operandSegmentSizes == this->operandSegmentSizes &&
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
  TileUsingForallOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.tile_using_forall", odsAttrs.getContext());
  }

  TileUsingForallOpGenericAdaptorBase(TileUsingForallOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getStaticNumThreadsAttr();
  ::llvm::ArrayRef<int64_t> getStaticNumThreads();
  ::mlir::DenseI64ArrayAttr getStaticTileSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticTileSizes();
  ::mlir::ArrayAttr getMappingAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
    return attr;
  }

  ::std::optional< ::mlir::ArrayAttr > getMapping();
};
} // namespace detail
template <typename RangeT>
class TileUsingForallOpGenericAdaptor : public detail::TileUsingForallOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileUsingForallOpGenericAdaptorBase;
public:
  TileUsingForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TileUsingForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TileUsingForallOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  TileUsingForallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs) : TileUsingForallOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = TileUsingForallOp, typename = std::enable_if_t<std::is_same_v<LateInst, TileUsingForallOp>>>
  TileUsingForallOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getNumThreads() {
    return getODSOperands(1);
  }

  RangeT getTileSizes() {
    return getODSOperands(2);
  }

  ValueT getPackedNumThreads() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getPackedTileSizes() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileUsingForallOpAdaptor : public TileUsingForallOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileUsingForallOpGenericAdaptor::TileUsingForallOpGenericAdaptor;
  TileUsingForallOpAdaptor(TileUsingForallOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class TileUsingForallOp : public ::mlir::Op<TileUsingForallOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileUsingForallOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileUsingForallOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mapping"), ::llvm::StringRef("static_num_threads"), ::llvm::StringRef("static_tile_sizes"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMappingAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMappingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getStaticNumThreadsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getStaticNumThreadsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getStaticTileSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getStaticTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.tile_using_forall");
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

  ::mlir::Operation::operand_range getNumThreads() {
    return getODSOperands(1);
  }

  ::mlir::Operation::operand_range getTileSizes() {
    return getODSOperands(2);
  }

  ::mlir::Value getPackedNumThreads() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
  }

  ::mlir::Value getPackedTileSizes() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getNumThreadsMutable();
  ::mlir::MutableOperandRange getTileSizesMutable();
  ::mlir::MutableOperandRange getPackedNumThreadsMutable();
  ::mlir::MutableOperandRange getPackedTileSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index) {
    return {index, 1};
  }

  ::mlir::Operation::result_range getODSResults(unsigned index) {
    auto valueRange = getODSResultIndexAndLength(index);
    return {std::next(getOperation()->result_begin(), valueRange.first),
             std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTiledOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(0).begin());
  }

  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getForallOp() {
    return ::llvm::cast<::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface>>(*getODSResults(1).begin());
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
  ::mlir::DenseI64ArrayAttr getStaticNumThreadsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_num_threads);
  }

  ::llvm::ArrayRef<int64_t> getStaticNumThreads();
  ::mlir::DenseI64ArrayAttr getStaticTileSizesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_tile_sizes);
  }

  ::llvm::ArrayRef<int64_t> getStaticTileSizes();
  ::mlir::ArrayAttr getMappingAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().mapping);
  }

  ::std::optional< ::mlir::ArrayAttr > getMapping();
  void setStaticNumThreadsAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().static_num_threads = attr;
  }

  void setStaticNumThreads(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setStaticTileSizesAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().static_tile_sizes = attr;
  }

  void setStaticTileSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setMappingAttr(::mlir::ArrayAttr attr) {
    getProperties().mapping = attr;
  }

  ::mlir::Attribute removeStaticNumThreadsAttr() {
      auto &attr = getProperties().static_num_threads;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeStaticTileSizesAttr() {
      auto &attr = getProperties().static_tile_sizes;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeMappingAttr() {
      auto &attr = getProperties().mapping;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticTileSizes, ::mlir::transform::TileSizesSpec odsArg2 = ::mlir::transform::TileSizesSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedTileSizes, ::mlir::transform::TileSizesSpec odsArg2 = ::mlir::transform::TileSizesSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<int64_t> staticNumThreads, ::mlir::transform::NumThreadsSpec odsArg2 = ::mlir::transform::NumThreadsSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, ArrayRef<OpFoldResult> mixedNumThreads, ::mlir::transform::NumThreadsSpec odsArg2 = ::mlir::transform::NumThreadsSpec(), ArrayAttr mapping = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_op, ::mlir::Type forall_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_num_threads, /*optional*/::mlir::DenseI64ArrayAttr static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tiled_op, ::mlir::Type forall_op, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange num_threads, ::mlir::ValueRange tile_sizes, /*optional*/::mlir::Value packed_num_threads, /*optional*/::mlir::Value packed_tile_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_num_threads, /*optional*/::llvm::ArrayRef<int64_t> static_tile_sizes, /*optional*/::mlir::ArrayAttr mapping);
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
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure apply(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::transform::TransformResults &transformResults,
      ::mlir::transform::TransformState &state);

  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedNumThreads();
  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedTileSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TileUsingForallOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TransposeConv2DOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TransposeConv2DOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  TransposeConv2DOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.transpose_conv2d", odsAttrs.getContext());
  }

  TransposeConv2DOpGenericAdaptorBase(::mlir::Operation *op) : odsAttrs(op->getRawDictionaryAttrs()), odsOpName(op->getName()), odsRegions(op->getRegions()) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

};
} // namespace detail
template <typename RangeT>
class TransposeConv2DOpGenericAdaptor : public detail::TransposeConv2DOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TransposeConv2DOpGenericAdaptorBase;
public:
  TransposeConv2DOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = {}, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TransposeConv2DOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TransposeConv2DOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = TransposeConv2DOp, typename = std::enable_if_t<std::is_same_v<LateInst, TransposeConv2DOp>>>
  TransposeConv2DOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class TransposeConv2DOpAdaptor : public TransposeConv2DOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TransposeConv2DOpGenericAdaptor::TransposeConv2DOpGenericAdaptor;
  TransposeConv2DOpAdaptor(TransposeConv2DOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class TransposeConv2DOp : public ::mlir::Op<TransposeConv2DOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TransposeConv2DOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TransposeConv2DOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.transpose_conv2d");
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

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
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
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TransposeConv2DOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::TransposeMatmulOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TransposeMatmulOpGenericAdaptorBase {
public:
  struct Properties {
    using inputToTransposeTy = mlir::transform::TransposeMatmulInputAttr;
    inputToTransposeTy inputToTranspose;

    auto getInputToTranspose() {
      auto &propStorage = this->inputToTranspose;
      return ::llvm::dyn_cast_or_null<mlir::transform::TransposeMatmulInputAttr>(propStorage);
    }
    void setInputToTranspose(const mlir::transform::TransposeMatmulInputAttr &propValue) {
      this->inputToTranspose = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.inputToTranspose == this->inputToTranspose &&
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
  TransposeMatmulOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.transpose_matmul", odsAttrs.getContext());
  }

  TransposeMatmulOpGenericAdaptorBase(TransposeMatmulOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  mlir::transform::TransposeMatmulInputAttr getInputToTransposeAttr();
  mlir::transform::TransposeMatmulInput getInputToTranspose();
};
} // namespace detail
template <typename RangeT>
class TransposeMatmulOpGenericAdaptor : public detail::TransposeMatmulOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TransposeMatmulOpGenericAdaptorBase;
public:
  TransposeMatmulOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TransposeMatmulOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TransposeMatmulOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  TransposeMatmulOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : TransposeMatmulOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = TransposeMatmulOp, typename = std::enable_if_t<std::is_same_v<LateInst, TransposeMatmulOp>>>
  TransposeMatmulOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class TransposeMatmulOpAdaptor : public TransposeMatmulOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TransposeMatmulOpGenericAdaptor::TransposeMatmulOpGenericAdaptor;
  TransposeMatmulOpAdaptor(TransposeMatmulOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class TransposeMatmulOp : public ::mlir::Op<TransposeMatmulOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TransposeMatmulOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TransposeMatmulOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("inputToTranspose")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInputToTransposeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInputToTransposeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.transpose_matmul");
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
  mlir::transform::TransposeMatmulInputAttr getInputToTransposeAttr() {
    return ::llvm::dyn_cast_or_null<mlir::transform::TransposeMatmulInputAttr>(getProperties().inputToTranspose);
  }

  mlir::transform::TransposeMatmulInput getInputToTranspose();
  void setInputToTransposeAttr(mlir::transform::TransposeMatmulInputAttr attr) {
    getProperties().inputToTranspose = attr;
  }

  void setInputToTranspose(mlir::transform::TransposeMatmulInput attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, mlir::transform::TransposeMatmulInputAttr inputToTranspose);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, mlir::transform::TransposeMatmulInputAttr inputToTranspose);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, mlir::transform::TransposeMatmulInput inputToTranspose = TransposeMatmulInput::lhs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, mlir::transform::TransposeMatmulInput inputToTranspose = TransposeMatmulInput::lhs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::TransposeMatmulOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::VectorizeChildrenAndApplyPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase {
public:
  struct Properties {
    using disable_multi_reduction_to_contract_patternsTy = ::mlir::UnitAttr;
    disable_multi_reduction_to_contract_patternsTy disable_multi_reduction_to_contract_patterns;

    auto getDisableMultiReductionToContractPatterns() {
      auto &propStorage = this->disable_multi_reduction_to_contract_patterns;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setDisableMultiReductionToContractPatterns(const ::mlir::UnitAttr &propValue) {
      this->disable_multi_reduction_to_contract_patterns = propValue;
    }
    using disable_transfer_permutation_map_lowering_patternsTy = ::mlir::UnitAttr;
    disable_transfer_permutation_map_lowering_patternsTy disable_transfer_permutation_map_lowering_patterns;

    auto getDisableTransferPermutationMapLoweringPatterns() {
      auto &propStorage = this->disable_transfer_permutation_map_lowering_patterns;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setDisableTransferPermutationMapLoweringPatterns(const ::mlir::UnitAttr &propValue) {
      this->disable_transfer_permutation_map_lowering_patterns = propValue;
    }
    using flatten_1d_depthwise_convTy = ::mlir::UnitAttr;
    flatten_1d_depthwise_convTy flatten_1d_depthwise_conv;

    auto getFlatten_1dDepthwiseConv() {
      auto &propStorage = this->flatten_1d_depthwise_conv;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setFlatten_1dDepthwiseConv(const ::mlir::UnitAttr &propValue) {
      this->flatten_1d_depthwise_conv = propValue;
    }
    using vectorize_nd_extractTy = ::mlir::UnitAttr;
    vectorize_nd_extractTy vectorize_nd_extract;

    auto getVectorizeNdExtract() {
      auto &propStorage = this->vectorize_nd_extract;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setVectorizeNdExtract(const ::mlir::UnitAttr &propValue) {
      this->vectorize_nd_extract = propValue;
    }
    using vectorize_paddingTy = ::mlir::UnitAttr;
    vectorize_paddingTy vectorize_padding;

    auto getVectorizePadding() {
      auto &propStorage = this->vectorize_padding;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setVectorizePadding(const ::mlir::UnitAttr &propValue) {
      this->vectorize_padding = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.disable_multi_reduction_to_contract_patterns == this->disable_multi_reduction_to_contract_patterns &&
        rhs.disable_transfer_permutation_map_lowering_patterns == this->disable_transfer_permutation_map_lowering_patterns &&
        rhs.flatten_1d_depthwise_conv == this->flatten_1d_depthwise_conv &&
        rhs.vectorize_nd_extract == this->vectorize_nd_extract &&
        rhs.vectorize_padding == this->vectorize_padding &&
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
  VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.vectorize_children_and_apply_patterns", odsAttrs.getContext());
  }

  VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase(VectorizeChildrenAndApplyPatternsOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::UnitAttr getVectorizePaddingAttr();
  bool getVectorizePadding();
  ::mlir::UnitAttr getVectorizeNdExtractAttr();
  bool getVectorizeNdExtract();
  ::mlir::UnitAttr getFlatten_1dDepthwiseConvAttr();
  bool getFlatten_1dDepthwiseConv();
  ::mlir::UnitAttr getDisableMultiReductionToContractPatternsAttr();
  bool getDisableMultiReductionToContractPatterns();
  ::mlir::UnitAttr getDisableTransferPermutationMapLoweringPatternsAttr();
  bool getDisableTransferPermutationMapLoweringPatterns();
};
} // namespace detail
template <typename RangeT>
class VectorizeChildrenAndApplyPatternsOpGenericAdaptor : public detail::VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::VectorizeChildrenAndApplyPatternsOpGenericAdaptorBase;
public:
  VectorizeChildrenAndApplyPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  VectorizeChildrenAndApplyPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : VectorizeChildrenAndApplyPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  VectorizeChildrenAndApplyPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : VectorizeChildrenAndApplyPatternsOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = VectorizeChildrenAndApplyPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, VectorizeChildrenAndApplyPatternsOp>>>
  VectorizeChildrenAndApplyPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class VectorizeChildrenAndApplyPatternsOpAdaptor : public VectorizeChildrenAndApplyPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using VectorizeChildrenAndApplyPatternsOpGenericAdaptor::VectorizeChildrenAndApplyPatternsOpGenericAdaptor;
  VectorizeChildrenAndApplyPatternsOpAdaptor(VectorizeChildrenAndApplyPatternsOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class VectorizeChildrenAndApplyPatternsOp : public ::mlir::Op<VectorizeChildrenAndApplyPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = VectorizeChildrenAndApplyPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = VectorizeChildrenAndApplyPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("disable_multi_reduction_to_contract_patterns"), ::llvm::StringRef("disable_transfer_permutation_map_lowering_patterns"), ::llvm::StringRef("flatten_1d_depthwise_conv"), ::llvm::StringRef("vectorize_nd_extract"), ::llvm::StringRef("vectorize_padding")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDisableMultiReductionToContractPatternsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDisableMultiReductionToContractPatternsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getDisableTransferPermutationMapLoweringPatternsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getDisableTransferPermutationMapLoweringPatternsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getFlatten_1dDepthwiseConvAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getFlatten_1dDepthwiseConvAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getVectorizeNdExtractAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getVectorizeNdExtractAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getVectorizePaddingAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getVectorizePaddingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.vectorize_children_and_apply_patterns");
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
  ::mlir::UnitAttr getVectorizePaddingAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_padding);
  }

  bool getVectorizePadding();
  ::mlir::UnitAttr getVectorizeNdExtractAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_nd_extract);
  }

  bool getVectorizeNdExtract();
  ::mlir::UnitAttr getFlatten_1dDepthwiseConvAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().flatten_1d_depthwise_conv);
  }

  bool getFlatten_1dDepthwiseConv();
  ::mlir::UnitAttr getDisableMultiReductionToContractPatternsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().disable_multi_reduction_to_contract_patterns);
  }

  bool getDisableMultiReductionToContractPatterns();
  ::mlir::UnitAttr getDisableTransferPermutationMapLoweringPatternsAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().disable_transfer_permutation_map_lowering_patterns);
  }

  bool getDisableTransferPermutationMapLoweringPatterns();
  void setVectorizePaddingAttr(::mlir::UnitAttr attr) {
    getProperties().vectorize_padding = attr;
  }

  void setVectorizePadding(bool attrValue);
  void setVectorizeNdExtractAttr(::mlir::UnitAttr attr) {
    getProperties().vectorize_nd_extract = attr;
  }

  void setVectorizeNdExtract(bool attrValue);
  void setFlatten_1dDepthwiseConvAttr(::mlir::UnitAttr attr) {
    getProperties().flatten_1d_depthwise_conv = attr;
  }

  void setFlatten_1dDepthwiseConv(bool attrValue);
  void setDisableMultiReductionToContractPatternsAttr(::mlir::UnitAttr attr) {
    getProperties().disable_multi_reduction_to_contract_patterns = attr;
  }

  void setDisableMultiReductionToContractPatterns(bool attrValue);
  void setDisableTransferPermutationMapLoweringPatternsAttr(::mlir::UnitAttr attr) {
    getProperties().disable_transfer_permutation_map_lowering_patterns = attr;
  }

  void setDisableTransferPermutationMapLoweringPatterns(bool attrValue);
  ::mlir::Attribute removeVectorizePaddingAttr() {
      auto &attr = getProperties().vectorize_padding;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeVectorizeNdExtractAttr() {
      auto &attr = getProperties().vectorize_nd_extract;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeFlatten_1dDepthwiseConvAttr() {
      auto &attr = getProperties().flatten_1d_depthwise_conv;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeDisableMultiReductionToContractPatternsAttr() {
      auto &attr = getProperties().disable_multi_reduction_to_contract_patterns;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeDisableTransferPermutationMapLoweringPatternsAttr() {
      auto &attr = getProperties().disable_transfer_permutation_map_lowering_patterns;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, bool vectorizePadding = false, bool vectorizeNDExtract = false, bool flatten1DDepthwise = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract = nullptr, /*optional*/::mlir::UnitAttr flatten_1d_depthwise_conv = nullptr, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns = nullptr, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr vectorize_padding, /*optional*/::mlir::UnitAttr vectorize_nd_extract = nullptr, /*optional*/::mlir::UnitAttr flatten_1d_depthwise_conv = nullptr, /*optional*/::mlir::UnitAttr disable_multi_reduction_to_contract_patterns = nullptr, /*optional*/::mlir::UnitAttr disable_transfer_permutation_map_lowering_patterns = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, /*optional*/bool vectorize_padding = false, /*optional*/bool vectorize_nd_extract = false, /*optional*/bool flatten_1d_depthwise_conv = false, /*optional*/bool disable_multi_reduction_to_contract_patterns = false, /*optional*/bool disable_transfer_permutation_map_lowering_patterns = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/bool vectorize_padding = false, /*optional*/bool vectorize_nd_extract = false, /*optional*/bool flatten_1d_depthwise_conv = false, /*optional*/bool disable_multi_reduction_to_contract_patterns = false, /*optional*/bool disable_transfer_permutation_map_lowering_patterns = false);
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
    assert(index < 5 && "invalid attribute index");
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
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::VectorizeChildrenAndApplyPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::VectorizeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class VectorizeOpGenericAdaptorBase {
public:
  struct Properties {
    using scalable_sizesTy = ::mlir::DenseBoolArrayAttr;
    scalable_sizesTy scalable_sizes;

    auto getScalableSizes() {
      auto &propStorage = this->scalable_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(propStorage);
    }
    void setScalableSizes(const ::mlir::DenseBoolArrayAttr &propValue) {
      this->scalable_sizes = propValue;
    }
    using static_vector_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_vector_sizesTy static_vector_sizes;

    auto getStaticVectorSizes() {
      auto &propStorage = this->static_vector_sizes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticVectorSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_vector_sizes = propValue;
    }
    using vectorize_nd_extractTy = ::mlir::UnitAttr;
    vectorize_nd_extractTy vectorize_nd_extract;

    auto getVectorizeNdExtract() {
      auto &propStorage = this->vectorize_nd_extract;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setVectorizeNdExtract(const ::mlir::UnitAttr &propValue) {
      this->vectorize_nd_extract = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.scalable_sizes == this->scalable_sizes &&
        rhs.static_vector_sizes == this->static_vector_sizes &&
        rhs.vectorize_nd_extract == this->vectorize_nd_extract &&
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
  VectorizeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.vectorize", odsAttrs.getContext());
  }

  VectorizeOpGenericAdaptorBase(VectorizeOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::DenseI64ArrayAttr getStaticVectorSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticVectorSizes();
  ::mlir::UnitAttr getVectorizeNdExtractAttr() {
    auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_nd_extract);
    return attr;
  }

  ::std::optional<bool> getVectorizeNdExtract();
  ::mlir::DenseBoolArrayAttr getScalableSizesAttr();
  ::llvm::ArrayRef<bool> getScalableSizes();
};
} // namespace detail
template <typename RangeT>
class VectorizeOpGenericAdaptor : public detail::VectorizeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::VectorizeOpGenericAdaptorBase;
public:
  VectorizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  VectorizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : VectorizeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  VectorizeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : VectorizeOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = VectorizeOp, typename = std::enable_if_t<std::is_same_v<LateInst, VectorizeOp>>>
  VectorizeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getVectorSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class VectorizeOpAdaptor : public VectorizeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using VectorizeOpGenericAdaptor::VectorizeOpGenericAdaptor;
  VectorizeOpAdaptor(VectorizeOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class VectorizeOp : public ::mlir::Op<VectorizeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = VectorizeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = VectorizeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("scalable_sizes"), ::llvm::StringRef("static_vector_sizes"), ::llvm::StringRef("vectorize_nd_extract")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getScalableSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getScalableSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getStaticVectorSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getStaticVectorSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getVectorizeNdExtractAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getVectorizeNdExtractAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.vectorize");
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

  ::mlir::Operation::operand_range getVectorSizes() {
    return getODSOperands(1);
  }

  ::mlir::OpOperand &getTargetMutable() {
    auto range = getODSOperandIndexAndLength(0);
    return getOperation()->getOpOperand(range.first);
  }

  ::mlir::MutableOperandRange getVectorSizesMutable();
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
  ::mlir::DenseI64ArrayAttr getStaticVectorSizesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().static_vector_sizes);
  }

  ::llvm::ArrayRef<int64_t> getStaticVectorSizes();
  ::mlir::UnitAttr getVectorizeNdExtractAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().vectorize_nd_extract);
  }

  ::std::optional<bool> getVectorizeNdExtract();
  ::mlir::DenseBoolArrayAttr getScalableSizesAttr() {
    return ::llvm::dyn_cast_or_null<::mlir::DenseBoolArrayAttr>(getProperties().scalable_sizes);
  }

  ::llvm::ArrayRef<bool> getScalableSizes();
  void setStaticVectorSizesAttr(::mlir::DenseI64ArrayAttr attr) {
    getProperties().static_vector_sizes = attr;
  }

  void setStaticVectorSizes(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setVectorizeNdExtractAttr(::mlir::UnitAttr attr) {
    getProperties().vectorize_nd_extract = attr;
  }

  void setVectorizeNdExtract(bool attrValue);
  void setScalableSizesAttr(::mlir::DenseBoolArrayAttr attr) {
    getProperties().scalable_sizes = attr;
  }

  void setScalableSizes(::std::optional<::llvm::ArrayRef<bool>> attrValue);
  ::mlir::Attribute removeStaticVectorSizesAttr() {
      auto &attr = getProperties().static_vector_sizes;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeVectorizeNdExtractAttr() {
      auto &attr = getProperties().vectorize_nd_extract;
      attr = {};
      return attr;
  }

  ::mlir::Attribute removeScalableSizesAttr() {
      auto &attr = getProperties().scalable_sizes;
      attr = {};
      return attr;
  }

  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::mlir::DenseI64ArrayAttr static_vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::mlir::DenseBoolArrayAttr scalable_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::llvm::ArrayRef<bool> scalable_sizes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::ValueRange vector_sizes, /*optional*/::llvm::ArrayRef<int64_t> static_vector_sizes, /*optional*/::mlir::UnitAttr vectorize_nd_extract, /*optional*/::llvm::ArrayRef<bool> scalable_sizes = {});
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
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  // TODO: applyToOne.
  ::mlir::DiagnosedSilenceableFailure apply(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::transform::TransformResults &transformResults,
      ::mlir::transform::TransformState &state);

  ::llvm::SmallVector<::mlir::OpFoldResult> getMixedVectorSizes();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::VectorizeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::WinogradConv2DOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WinogradConv2DOpGenericAdaptorBase {
public:
  struct Properties {
    using mTy = ::mlir::IntegerAttr;
    mTy m;

    auto getM() {
      auto &propStorage = this->m;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setM(const ::mlir::IntegerAttr &propValue) {
      this->m = propValue;
    }
    using rTy = ::mlir::IntegerAttr;
    rTy r;

    auto getR() {
      auto &propStorage = this->r;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setR(const ::mlir::IntegerAttr &propValue) {
      this->r = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.m == this->m &&
        rhs.r == this->r &&
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
  WinogradConv2DOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
      odsOpName.emplace("transform.structured.winograd_conv2d", odsAttrs.getContext());
  }

  WinogradConv2DOpGenericAdaptorBase(WinogradConv2DOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
    return {index, 1};
  }

  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes() {
    return odsAttrs;
  }

  ::mlir::IntegerAttr getMAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
    return attr;
  }

  uint64_t getM();
  ::mlir::IntegerAttr getRAttr() {
    auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().r);
    return attr;
  }

  uint64_t getR();
};
} // namespace detail
template <typename RangeT>
class WinogradConv2DOpGenericAdaptor : public detail::WinogradConv2DOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WinogradConv2DOpGenericAdaptorBase;
public:
  WinogradConv2DOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WinogradConv2DOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WinogradConv2DOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  WinogradConv2DOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr) : WinogradConv2DOpGenericAdaptor(values, attrs, Properties{}, {}) {}

  template <typename LateInst = WinogradConv2DOp, typename = std::enable_if_t<std::is_same_v<LateInst, WinogradConv2DOp>>>
  WinogradConv2DOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class WinogradConv2DOpAdaptor : public WinogradConv2DOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WinogradConv2DOpGenericAdaptor::WinogradConv2DOpGenericAdaptor;
  WinogradConv2DOpAdaptor(WinogradConv2DOp op);

  ::llvm::LogicalResult verify(::mlir::Location loc);
};
class WinogradConv2DOp : public ::mlir::Op<WinogradConv2DOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WinogradConv2DOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WinogradConv2DOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("m"), ::llvm::StringRef("r")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getRAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getRAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.structured.winograd_conv2d");
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
  ::mlir::IntegerAttr getMAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().m);
  }

  uint64_t getM();
  ::mlir::IntegerAttr getRAttr() {
    return ::llvm::cast<::mlir::IntegerAttr>(getProperties().r);
  }

  uint64_t getR();
  void setMAttr(::mlir::IntegerAttr attr) {
    getProperties().m = attr;
  }

  void setM(uint64_t attrValue);
  void setRAttr(::mlir::IntegerAttr attr) {
    getProperties().r = attr;
  }

  void setR(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, ::mlir::IntegerAttr m, ::mlir::IntegerAttr r);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr m, ::mlir::IntegerAttr r);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type transformed, ::mlir::Value target, uint64_t m, uint64_t r);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t m, uint64_t r);
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
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
      ::mlir::transform::TransformRewriter &rewriter,
      ::mlir::linalg::LinalgOp target,
      ::mlir::transform::ApplyToEachResultList &results,
      ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::WinogradConv2DOp)


#endif  // GET_OP_CLASSES

