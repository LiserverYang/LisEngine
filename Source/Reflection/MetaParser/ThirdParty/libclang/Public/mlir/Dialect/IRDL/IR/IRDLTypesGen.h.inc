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
namespace irdl {
class AttributeType;
class RegionType;
class AttributeType : public ::mlir::Type::TypeBase<AttributeType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "irdl.attribute";
  static constexpr ::llvm::StringLiteral dialectName = "irdl";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"attribute"};
  }

};
class RegionType : public ::mlir::Type::TypeBase<RegionType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "irdl.region";
  static constexpr ::llvm::StringLiteral dialectName = "irdl";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"region"};
  }

};
} // namespace irdl
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::irdl::AttributeType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::irdl::RegionType)

#endif  // GET_TYPEDEF_CLASSES

