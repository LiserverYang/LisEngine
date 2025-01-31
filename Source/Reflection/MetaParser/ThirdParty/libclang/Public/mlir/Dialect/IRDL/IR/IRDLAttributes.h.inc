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
namespace irdl {
class VariadicityAttr;
class VariadicityArrayAttr;
namespace detail {
struct VariadicityAttrStorage;
} // namespace detail
class VariadicityAttr : public ::mlir::Attribute::AttrBase<VariadicityAttr, ::mlir::Attribute, detail::VariadicityAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "irdl.variadicity";
  static constexpr ::llvm::StringLiteral dialectName = "irdl";
  static VariadicityAttr get(::mlir::MLIRContext *context, ::mlir::irdl::Variadicity value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"variadicity"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::irdl::Variadicity getValue() const;
};
namespace detail {
struct VariadicityArrayAttrStorage;
} // namespace detail
class VariadicityArrayAttr : public ::mlir::Attribute::AttrBase<VariadicityArrayAttr, ::mlir::Attribute, detail::VariadicityArrayAttrStorage> {
public:
  using Base::Base;
  auto begin() const { return getValue().begin(); }
  auto end() const { return getValue().end(); }
  bool empty() const { return getValue().empty(); }
  size_t size() const { return getValue().size(); }
  auto &front() const { return getValue().front(); }
  auto &back() const { return getValue().back(); }
  auto &operator[](size_t index) { return getValue()[index]; }
  operator ::llvm::ArrayRef<VariadicityAttr>() const { return getValue(); }
  static constexpr ::llvm::StringLiteral name = "irdl.variadicity_array";
  static constexpr ::llvm::StringLiteral dialectName = "irdl";
  static VariadicityArrayAttr get(::mlir::MLIRContext *context, ::llvm::ArrayRef<VariadicityAttr> value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"variadicity_array"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::ArrayRef<VariadicityAttr> getValue() const;
};
} // namespace irdl
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::irdl::VariadicityAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::irdl::VariadicityArrayAttr)

#endif  // GET_ATTRDEF_CLASSES

