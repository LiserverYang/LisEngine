/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ParallelLoopMapperAttr.td                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace gpu {
// GPU address space
enum class AddressSpace : uint32_t {
  Global = 1,
  Workgroup = 2,
  Private = 3,
};

::std::optional<AddressSpace> symbolizeAddressSpace(uint32_t);
::llvm::StringRef stringifyAddressSpace(AddressSpace);
::std::optional<AddressSpace> symbolizeAddressSpace(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForAddressSpace() {
  return 3;
}


inline ::llvm::StringRef stringifyEnum(AddressSpace enumValue) {
  return stringifyAddressSpace(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<AddressSpace> symbolizeEnum<AddressSpace>(::llvm::StringRef str) {
  return symbolizeAddressSpace(str);
}
} // namespace gpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::gpu::AddressSpace, ::mlir::gpu::AddressSpace> {
  template <typename ParserT>
  static FailureOr<::mlir::gpu::AddressSpace> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for GPU address space");

    // Symbolize the keyword.
    if (::std::optional<::mlir::gpu::AddressSpace> attr = ::mlir::gpu::symbolizeEnum<::mlir::gpu::AddressSpace>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid GPU address space specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::gpu::AddressSpace value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::gpu::AddressSpace> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::gpu::AddressSpace getEmptyKey() {
    return static_cast<::mlir::gpu::AddressSpace>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::gpu::AddressSpace getTombstoneKey() {
    return static_cast<::mlir::gpu::AddressSpace>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::gpu::AddressSpace &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::gpu::AddressSpace &lhs, const ::mlir::gpu::AddressSpace &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace gpu {
// processor for loop mapping
enum class Processor : uint64_t {
  BlockX = 0,
  BlockY = 1,
  BlockZ = 2,
  ThreadX = 3,
  ThreadY = 4,
  ThreadZ = 5,
  Sequential = 6,
};

::std::optional<Processor> symbolizeProcessor(uint64_t);
::llvm::StringRef stringifyProcessor(Processor);
::std::optional<Processor> symbolizeProcessor(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForProcessor() {
  return 6;
}


inline ::llvm::StringRef stringifyEnum(Processor enumValue) {
  return stringifyProcessor(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<Processor> symbolizeEnum<Processor>(::llvm::StringRef str) {
  return symbolizeProcessor(str);
}

class ProcessorAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = Processor;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static ProcessorAttr get(::mlir::MLIRContext *context, Processor val);
  Processor getValue() const;
};
} // namespace gpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::gpu::Processor, ::mlir::gpu::Processor> {
  template <typename ParserT>
  static FailureOr<::mlir::gpu::Processor> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for processor for loop mapping");

    // Symbolize the keyword.
    if (::std::optional<::mlir::gpu::Processor> attr = ::mlir::gpu::symbolizeEnum<::mlir::gpu::Processor>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid processor for loop mapping specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::gpu::Processor value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::gpu::Processor> {
  using StorageInfo = ::llvm::DenseMapInfo<uint64_t>;

  static inline ::mlir::gpu::Processor getEmptyKey() {
    return static_cast<::mlir::gpu::Processor>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::gpu::Processor getTombstoneKey() {
    return static_cast<::mlir::gpu::Processor>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::gpu::Processor &val) {
    return StorageInfo::getHashValue(static_cast<uint64_t>(val));
  }

  static bool isEqual(const ::mlir::gpu::Processor &lhs, const ::mlir::gpu::Processor &rhs) {
    return lhs == rhs;
  }
};
}

