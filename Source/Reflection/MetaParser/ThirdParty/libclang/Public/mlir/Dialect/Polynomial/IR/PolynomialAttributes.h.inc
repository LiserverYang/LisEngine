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
namespace polynomial {
class IntPolynomialAttr;
class FloatPolynomialAttr;
class TypedIntPolynomialAttr;
class TypedFloatPolynomialAttr;
class RingAttr;
class PrimitiveRootAttr;
namespace detail {
struct IntPolynomialAttrStorage;
} // namespace detail
class IntPolynomialAttr : public ::mlir::Attribute::AttrBase<IntPolynomialAttr, ::mlir::Attribute, detail::IntPolynomialAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "polynomial.int_polynomial";
  static constexpr ::llvm::StringLiteral dialectName = "polynomial";
  static IntPolynomialAttr get(::mlir::MLIRContext *context, ::mlir::polynomial::IntPolynomial polynomial);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"int_polynomial"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::polynomial::IntPolynomial getPolynomial() const;
};
namespace detail {
struct FloatPolynomialAttrStorage;
} // namespace detail
class FloatPolynomialAttr : public ::mlir::Attribute::AttrBase<FloatPolynomialAttr, ::mlir::Attribute, detail::FloatPolynomialAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "polynomial.float_polynomial";
  static constexpr ::llvm::StringLiteral dialectName = "polynomial";
  static FloatPolynomialAttr get(::mlir::MLIRContext *context, FloatPolynomial polynomial);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"float_polynomial"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  FloatPolynomial getPolynomial() const;
};
namespace detail {
struct TypedIntPolynomialAttrStorage;
} // namespace detail
class TypedIntPolynomialAttr : public ::mlir::Attribute::AttrBase<TypedIntPolynomialAttr, ::mlir::Attribute, detail::TypedIntPolynomialAttrStorage, ::mlir::TypedAttr::Trait> {
public:
  using Base::Base;
  using ValueType = ::mlir::Attribute;
  static constexpr ::llvm::StringLiteral name = "polynomial.typed_int_polynomial";
  static constexpr ::llvm::StringLiteral dialectName = "polynomial";
  static TypedIntPolynomialAttr get(::mlir::MLIRContext *context, ::mlir::Type type, ::mlir::polynomial::IntPolynomialAttr value);
  static TypedIntPolynomialAttr get(Type type, const IntPolynomial &value);
  static TypedIntPolynomialAttr get(Type type, const Attribute &value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"typed_int_polynomial"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::Type getType() const;
  ::mlir::polynomial::IntPolynomialAttr getValue() const;
};
namespace detail {
struct TypedFloatPolynomialAttrStorage;
} // namespace detail
class TypedFloatPolynomialAttr : public ::mlir::Attribute::AttrBase<TypedFloatPolynomialAttr, ::mlir::Attribute, detail::TypedFloatPolynomialAttrStorage, ::mlir::TypedAttr::Trait> {
public:
  using Base::Base;
  using ValueType = ::mlir::Attribute;
  static constexpr ::llvm::StringLiteral name = "polynomial.typed_float_polynomial";
  static constexpr ::llvm::StringLiteral dialectName = "polynomial";
  static TypedFloatPolynomialAttr get(::mlir::MLIRContext *context, ::mlir::Type type, ::mlir::polynomial::FloatPolynomialAttr value);
  static TypedFloatPolynomialAttr get(Type type, const FloatPolynomial &value);
  static TypedFloatPolynomialAttr get(Type type, const Attribute &value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"typed_float_polynomial"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::Type getType() const;
  ::mlir::polynomial::FloatPolynomialAttr getValue() const;
};
namespace detail {
struct RingAttrStorage;
} // namespace detail
class RingAttr : public ::mlir::Attribute::AttrBase<RingAttr, ::mlir::Attribute, detail::RingAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "polynomial.ring";
  static constexpr ::llvm::StringLiteral dialectName = "polynomial";
  static RingAttr get(::mlir::MLIRContext *context, Type coefficientType, ::mlir::IntegerAttr coefficientModulus, ::mlir::polynomial::IntPolynomialAttr polynomialModulus);
  static RingAttr get(::mlir::Type coefficientTy, ::mlir::IntegerAttr coefficientModulusAttr = nullptr, ::mlir::polynomial::IntPolynomialAttr polynomialModulusAttr = nullptr);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"ring"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  Type getCoefficientType() const;
  ::mlir::IntegerAttr getCoefficientModulus() const;
  ::mlir::polynomial::IntPolynomialAttr getPolynomialModulus() const;
};
namespace detail {
struct PrimitiveRootAttrStorage;
} // namespace detail
class PrimitiveRootAttr : public ::mlir::Attribute::AttrBase<PrimitiveRootAttr, ::mlir::Attribute, detail::PrimitiveRootAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "polynomial.primitive_root";
  static constexpr ::llvm::StringLiteral dialectName = "polynomial";
  static PrimitiveRootAttr get(::mlir::MLIRContext *context, ::mlir::IntegerAttr value, ::mlir::IntegerAttr degree);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"primitive_root"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::IntegerAttr getValue() const;
  ::mlir::IntegerAttr getDegree() const;
};
} // namespace polynomial
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::polynomial::IntPolynomialAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::polynomial::FloatPolynomialAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::polynomial::TypedIntPolynomialAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::polynomial::TypedFloatPolynomialAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::polynomial::RingAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::polynomial::PrimitiveRootAttr)

#endif  // GET_ATTRDEF_CLASSES

