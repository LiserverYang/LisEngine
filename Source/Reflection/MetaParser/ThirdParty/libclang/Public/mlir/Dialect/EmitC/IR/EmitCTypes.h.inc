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
namespace emitc {
class ArrayType;
class OpaqueType;
class PointerType;
class SignedSizeTType;
class PtrDiffTType;
class SizeTType;
namespace detail {
struct ArrayTypeStorage;
} // namespace detail
class ArrayType : public ::mlir::Type::TypeBase<ArrayType, ::mlir::Type, detail::ArrayTypeStorage, ::mlir::ShapedType::Trait> {
public:
  using Base::Base;
  /// Returns if this type is ranked (always true).
  bool hasRank() const { return true; }

  /// Clone this array type with the given shape and element type. If the
  /// provided shape is `std::nullopt`, the current shape of the type is used.
  ArrayType cloneWith(std::optional<ArrayRef<int64_t>> shape,
                      Type elementType) const;

  static bool isValidElementType(Type type) {
    return emitc::isSupportedFloatType(type) ||
       emitc::isIntegerIndexOrOpaqueType(type) ||
       llvm::isa<PointerType>(type);
  }
  static constexpr ::llvm::StringLiteral name = "emitc.array";
  static constexpr ::llvm::StringLiteral dialectName = "emitc";
  using Base::getChecked;
  static ArrayType get(::mlir::MLIRContext *context, ::llvm::ArrayRef<int64_t> shape, Type elementType);
  static ArrayType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ::llvm::ArrayRef<int64_t> shape, Type elementType);
  static ArrayType get(ArrayRef<int64_t> shape, Type elementType);
  static ArrayType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ArrayRef<int64_t> shape, Type elementType);
  static ::llvm::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::llvm::ArrayRef<int64_t> shape, Type elementType);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"array"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::ArrayRef<int64_t> getShape() const;
  Type getElementType() const;
};
namespace detail {
struct OpaqueTypeStorage;
} // namespace detail
class OpaqueType : public ::mlir::Type::TypeBase<OpaqueType, ::mlir::Type, detail::OpaqueTypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "emitc.opaque";
  static constexpr ::llvm::StringLiteral dialectName = "emitc";
  using Base::getChecked;
  static OpaqueType get(::mlir::MLIRContext *context, ::llvm::StringRef value);
  static OpaqueType getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, ::llvm::StringRef value);
  static ::llvm::LogicalResult verify(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::llvm::StringRef value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"opaque"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::StringRef getValue() const;
};
namespace detail {
struct PointerTypeStorage;
} // namespace detail
class PointerType : public ::mlir::Type::TypeBase<PointerType, ::mlir::Type, detail::PointerTypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "emitc.ptr";
  static constexpr ::llvm::StringLiteral dialectName = "emitc";
  static PointerType get(::mlir::MLIRContext *context, Type pointee);
  static PointerType get(Type pointee);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"ptr"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  Type getPointee() const;
};
class SignedSizeTType : public ::mlir::Type::TypeBase<SignedSizeTType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "emitc.ssize_t";
  static constexpr ::llvm::StringLiteral dialectName = "emitc";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"ssize_t"};
  }

};
class PtrDiffTType : public ::mlir::Type::TypeBase<PtrDiffTType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "emitc.ptrdiff_t";
  static constexpr ::llvm::StringLiteral dialectName = "emitc";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"ptrdiff_t"};
  }

};
class SizeTType : public ::mlir::Type::TypeBase<SizeTType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "emitc.size_t";
  static constexpr ::llvm::StringLiteral dialectName = "emitc";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"size_t"};
  }

};
} // namespace emitc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::emitc::ArrayType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::emitc::OpaqueType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::emitc::PointerType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::emitc::SignedSizeTType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::emitc::PtrDiffTType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::emitc::SizeTType)

#endif  // GET_TYPEDEF_CLASSES

