/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* TypeDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_TYPEDEF_CLASSES
#undef GET_TYPEDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace mlir {
namespace polynomial {
class PolynomialType;
namespace detail {
struct PolynomialTypeStorage;
} // namespace detail
class PolynomialType : public ::mlir::Type::TypeBase<PolynomialType, ::mlir::Type, detail::PolynomialTypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "polynomial.polynomial";
  static constexpr ::llvm::StringLiteral dialectName = "polynomial";
  static PolynomialType get(::mlir::MLIRContext *context, ::mlir::polynomial::RingAttr ring);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"polynomial"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::polynomial::RingAttr getRing() const;
};
} // namespace polynomial
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::polynomial::PolynomialType)

#endif  // GET_TYPEDEF_CLASSES

