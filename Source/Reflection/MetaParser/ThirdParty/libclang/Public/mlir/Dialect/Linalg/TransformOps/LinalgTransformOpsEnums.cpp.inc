/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: LinalgTransformEnums.td                                              *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace transform {
::llvm::StringRef stringifyMatchInterfaceEnum(MatchInterfaceEnum val) {
  switch (val) {
    case MatchInterfaceEnum::LinalgOp: return "LinalgOp";
    case MatchInterfaceEnum::TilingInterface: return "TilingInterface";
    case MatchInterfaceEnum::LoopLikeInterface: return "LoopLikeInterface";
  }
  return "";
}

::std::optional<MatchInterfaceEnum> symbolizeMatchInterfaceEnum(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<MatchInterfaceEnum>>(str)
      .Case("LinalgOp", MatchInterfaceEnum::LinalgOp)
      .Case("TilingInterface", MatchInterfaceEnum::TilingInterface)
      .Case("LoopLikeInterface", MatchInterfaceEnum::LoopLikeInterface)
      .Default(::std::nullopt);
}
::std::optional<MatchInterfaceEnum> symbolizeMatchInterfaceEnum(uint32_t value) {
  switch (value) {
  case 0: return MatchInterfaceEnum::LinalgOp;
  case 1: return MatchInterfaceEnum::TilingInterface;
  case 2: return MatchInterfaceEnum::LoopLikeInterface;
  default: return ::std::nullopt;
  }
}

bool MatchInterfaceEnumAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)));
}
MatchInterfaceEnumAttr MatchInterfaceEnumAttr::get(::mlir::MLIRContext *context, MatchInterfaceEnum val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<MatchInterfaceEnumAttr>(baseAttr);
}
MatchInterfaceEnum MatchInterfaceEnumAttr::getValue() const {
  return static_cast<MatchInterfaceEnum>(::mlir::IntegerAttr::getInt());
}
} // namespace transform
} // namespace mlir

namespace mlir {
namespace transform {
::llvm::StringRef stringifyTransposeMatmulInput(TransposeMatmulInput val) {
  switch (val) {
    case TransposeMatmulInput::lhs: return "lhs";
    case TransposeMatmulInput::rhs: return "rhs";
  }
  return "";
}

::std::optional<TransposeMatmulInput> symbolizeTransposeMatmulInput(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<TransposeMatmulInput>>(str)
      .Case("lhs", TransposeMatmulInput::lhs)
      .Case("rhs", TransposeMatmulInput::rhs)
      .Default(::std::nullopt);
}
::std::optional<TransposeMatmulInput> symbolizeTransposeMatmulInput(uint32_t value) {
  switch (value) {
  case 0: return TransposeMatmulInput::lhs;
  case 1: return TransposeMatmulInput::rhs;
  default: return ::std::nullopt;
  }
}

bool TransposeMatmulInputAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)));
}
TransposeMatmulInputAttr TransposeMatmulInputAttr::get(::mlir::MLIRContext *context, TransposeMatmulInput val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<TransposeMatmulInputAttr>(baseAttr);
}
TransposeMatmulInput TransposeMatmulInputAttr::getValue() const {
  return static_cast<TransposeMatmulInput>(::mlir::IntegerAttr::getInt());
}
} // namespace transform
} // namespace mlir

