/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: IRDLAttributes.td                                                    *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace irdl {
::llvm::StringRef stringifyVariadicity(Variadicity val) {
  switch (val) {
    case Variadicity::single: return "single";
    case Variadicity::optional: return "optional";
    case Variadicity::variadic: return "variadic";
  }
  return "";
}

::std::optional<Variadicity> symbolizeVariadicity(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<Variadicity>>(str)
      .Case("single", Variadicity::single)
      .Case("optional", Variadicity::optional)
      .Case("variadic", Variadicity::variadic)
      .Default(::std::nullopt);
}
::std::optional<Variadicity> symbolizeVariadicity(uint32_t value) {
  switch (value) {
  case 0: return Variadicity::single;
  case 1: return Variadicity::optional;
  case 2: return Variadicity::variadic;
  default: return ::std::nullopt;
  }
}

} // namespace irdl
} // namespace mlir

