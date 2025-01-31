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
namespace mpi {
class RetvalType;
class RetvalType : public ::mlir::Type::TypeBase<RetvalType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "mpi.retval";
  static constexpr ::llvm::StringLiteral dialectName = "mpi";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"retval"};
  }

};
} // namespace mpi
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mpi::RetvalType)

#endif  // GET_TYPEDEF_CLASSES

