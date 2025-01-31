/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace mlir {
namespace ptr {
class SpecAttr;
namespace detail {
struct SpecAttrStorage;
} // namespace detail
class SpecAttr : public ::mlir::Attribute::AttrBase<SpecAttr, ::mlir::Attribute, detail::SpecAttrStorage> {
public:
  using Base::Base;
  /// Constant for specifying a spec entry is optional.
  static constexpr uint32_t kOptionalSpecValue = std::numeric_limits<uint32_t>::max();
  static constexpr ::llvm::StringLiteral name = "ptr.spec";
  static constexpr ::llvm::StringLiteral dialectName = "ptr";
  using Base::getChecked;
  static SpecAttr get(::mlir::MLIRContext *context, uint32_t size, uint32_t abi, uint32_t preferred, uint32_t index = kOptionalSpecValue);
  static SpecAttr getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, uint32_t size, uint32_t abi, uint32_t preferred, uint32_t index = kOptionalSpecValue);
  static ::llvm::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, uint32_t size, uint32_t abi, uint32_t preferred, uint32_t index);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"spec"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  uint32_t getSize() const;
  uint32_t getAbi() const;
  uint32_t getPreferred() const;
  uint32_t getIndex() const;
};
} // namespace ptr
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ptr::SpecAttr)

#endif  // GET_ATTRDEF_CLASSES

