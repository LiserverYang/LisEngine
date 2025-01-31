/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: GPUDeviceMappingAttr.td                                              *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyAddressSpace(AddressSpace val) {
  switch (val) {
    case AddressSpace::Global: return "global";
    case AddressSpace::Workgroup: return "workgroup";
    case AddressSpace::Private: return "private";
  }
  return "";
}

::std::optional<AddressSpace> symbolizeAddressSpace(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<AddressSpace>>(str)
      .Case("global", AddressSpace::Global)
      .Case("workgroup", AddressSpace::Workgroup)
      .Case("private", AddressSpace::Private)
      .Default(::std::nullopt);
}
::std::optional<AddressSpace> symbolizeAddressSpace(uint32_t value) {
  switch (value) {
  case 1: return AddressSpace::Global;
  case 2: return AddressSpace::Workgroup;
  case 3: return AddressSpace::Private;
  default: return ::std::nullopt;
  }
}

} // namespace gpu
} // namespace mlir

namespace mlir {
namespace gpu {
::llvm::StringRef stringifyMappingId(MappingId val) {
  switch (val) {
    case MappingId::DimX: return "x";
    case MappingId::DimY: return "y";
    case MappingId::DimZ: return "z";
    case MappingId::LinearDim0: return "linear_dim_0";
    case MappingId::LinearDim1: return "linear_dim_1";
    case MappingId::LinearDim2: return "linear_dim_2";
    case MappingId::LinearDim3: return "linear_dim_3";
    case MappingId::LinearDim4: return "linear_dim_4";
    case MappingId::LinearDim5: return "linear_dim_5";
    case MappingId::LinearDim6: return "linear_dim_6";
    case MappingId::LinearDim7: return "linear_dim_7";
    case MappingId::LinearDim8: return "linear_dim_8";
    case MappingId::LinearDim9: return "linear_dim_9";
  }
  return "";
}

::std::optional<MappingId> symbolizeMappingId(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<MappingId>>(str)
      .Case("x", MappingId::DimX)
      .Case("y", MappingId::DimY)
      .Case("z", MappingId::DimZ)
      .Case("linear_dim_0", MappingId::LinearDim0)
      .Case("linear_dim_1", MappingId::LinearDim1)
      .Case("linear_dim_2", MappingId::LinearDim2)
      .Case("linear_dim_3", MappingId::LinearDim3)
      .Case("linear_dim_4", MappingId::LinearDim4)
      .Case("linear_dim_5", MappingId::LinearDim5)
      .Case("linear_dim_6", MappingId::LinearDim6)
      .Case("linear_dim_7", MappingId::LinearDim7)
      .Case("linear_dim_8", MappingId::LinearDim8)
      .Case("linear_dim_9", MappingId::LinearDim9)
      .Default(::std::nullopt);
}
::std::optional<MappingId> symbolizeMappingId(uint64_t value) {
  switch (value) {
  case 0: return MappingId::DimX;
  case 1: return MappingId::DimY;
  case 2: return MappingId::DimZ;
  case 3: return MappingId::LinearDim0;
  case 4: return MappingId::LinearDim1;
  case 5: return MappingId::LinearDim2;
  case 6: return MappingId::LinearDim3;
  case 7: return MappingId::LinearDim4;
  case 8: return MappingId::LinearDim5;
  case 9: return MappingId::LinearDim6;
  case 10: return MappingId::LinearDim7;
  case 11: return MappingId::LinearDim8;
  case 12: return MappingId::LinearDim9;
  default: return ::std::nullopt;
  }
}

bool MappingIdAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 3)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 4)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 5)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 6)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 7)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 8)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 9)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 10)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 11)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 12)));
}
MappingIdAttr MappingIdAttr::get(::mlir::MLIRContext *context, MappingId val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 64);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint64_t>(val));
  return ::llvm::cast<MappingIdAttr>(baseAttr);
}
MappingId MappingIdAttr::getValue() const {
  return static_cast<MappingId>(::mlir::IntegerAttr::getInt());
}
} // namespace gpu
} // namespace mlir

