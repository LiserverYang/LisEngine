/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: PtrOps.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ptr::PtrDialect)
namespace mlir {
namespace ptr {

PtrDialect::PtrDialect(::mlir::MLIRContext *context)
    : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<PtrDialect>())
    
     {
  
  initialize();
}

PtrDialect::~PtrDialect() = default;

} // namespace ptr
} // namespace mlir
