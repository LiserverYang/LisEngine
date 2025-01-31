/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: Polynomial.td                                                        *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::polynomial::PolynomialDialect)
namespace mlir {
namespace polynomial {

PolynomialDialect::PolynomialDialect(::mlir::MLIRContext *context)
    : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<PolynomialDialect>())
    
     {
  
  initialize();
}

PolynomialDialect::~PolynomialDialect() = default;

} // namespace polynomial
} // namespace mlir
