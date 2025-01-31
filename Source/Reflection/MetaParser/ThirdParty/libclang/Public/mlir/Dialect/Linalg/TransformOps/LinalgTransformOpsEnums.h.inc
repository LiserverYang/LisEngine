/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: LinalgTransformEnums.td                                              *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace transform {
// An interface to match
enum class MatchInterfaceEnum : uint32_t {
  LinalgOp = 0,
  TilingInterface = 1,
  LoopLikeInterface = 2,
};

::std::optional<MatchInterfaceEnum> symbolizeMatchInterfaceEnum(uint32_t);
::llvm::StringRef stringifyMatchInterfaceEnum(MatchInterfaceEnum);
::std::optional<MatchInterfaceEnum> symbolizeMatchInterfaceEnum(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForMatchInterfaceEnum() {
  return 2;
}


inline ::llvm::StringRef stringifyEnum(MatchInterfaceEnum enumValue) {
  return stringifyMatchInterfaceEnum(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<MatchInterfaceEnum> symbolizeEnum<MatchInterfaceEnum>(::llvm::StringRef str) {
  return symbolizeMatchInterfaceEnum(str);
}

class MatchInterfaceEnumAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = MatchInterfaceEnum;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static MatchInterfaceEnumAttr get(::mlir::MLIRContext *context, MatchInterfaceEnum val);
  MatchInterfaceEnum getValue() const;
};
} // namespace transform
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<mlir::transform::MatchInterfaceEnum, mlir::transform::MatchInterfaceEnum> {
  template <typename ParserT>
  static FailureOr<mlir::transform::MatchInterfaceEnum> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for An interface to match");

    // Symbolize the keyword.
    if (::std::optional<mlir::transform::MatchInterfaceEnum> attr = mlir::transform::symbolizeEnum<mlir::transform::MatchInterfaceEnum>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid An interface to match specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, mlir::transform::MatchInterfaceEnum value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<mlir::transform::MatchInterfaceEnum> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline mlir::transform::MatchInterfaceEnum getEmptyKey() {
    return static_cast<mlir::transform::MatchInterfaceEnum>(StorageInfo::getEmptyKey());
  }

  static inline mlir::transform::MatchInterfaceEnum getTombstoneKey() {
    return static_cast<mlir::transform::MatchInterfaceEnum>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const mlir::transform::MatchInterfaceEnum &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const mlir::transform::MatchInterfaceEnum &lhs, const mlir::transform::MatchInterfaceEnum &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace transform {
// Input to transpose when converting matmul ops to transposed variants
enum class TransposeMatmulInput : uint32_t {
  lhs = 0,
  rhs = 1,
};

::std::optional<TransposeMatmulInput> symbolizeTransposeMatmulInput(uint32_t);
::llvm::StringRef stringifyTransposeMatmulInput(TransposeMatmulInput);
::std::optional<TransposeMatmulInput> symbolizeTransposeMatmulInput(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForTransposeMatmulInput() {
  return 1;
}


inline ::llvm::StringRef stringifyEnum(TransposeMatmulInput enumValue) {
  return stringifyTransposeMatmulInput(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<TransposeMatmulInput> symbolizeEnum<TransposeMatmulInput>(::llvm::StringRef str) {
  return symbolizeTransposeMatmulInput(str);
}

class TransposeMatmulInputAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = TransposeMatmulInput;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static TransposeMatmulInputAttr get(::mlir::MLIRContext *context, TransposeMatmulInput val);
  TransposeMatmulInput getValue() const;
};
} // namespace transform
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<mlir::transform::TransposeMatmulInput, mlir::transform::TransposeMatmulInput> {
  template <typename ParserT>
  static FailureOr<mlir::transform::TransposeMatmulInput> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Input to transpose when converting matmul ops to transposed variants");

    // Symbolize the keyword.
    if (::std::optional<mlir::transform::TransposeMatmulInput> attr = mlir::transform::symbolizeEnum<mlir::transform::TransposeMatmulInput>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Input to transpose when converting matmul ops to transposed variants specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, mlir::transform::TransposeMatmulInput value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<mlir::transform::TransposeMatmulInput> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline mlir::transform::TransposeMatmulInput getEmptyKey() {
    return static_cast<mlir::transform::TransposeMatmulInput>(StorageInfo::getEmptyKey());
  }

  static inline mlir::transform::TransposeMatmulInput getTombstoneKey() {
    return static_cast<mlir::transform::TransposeMatmulInput>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const mlir::transform::TransposeMatmulInput &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const mlir::transform::TransposeMatmulInput &lhs, const mlir::transform::TransposeMatmulInput &rhs) {
    return lhs == rhs;
  }
};
}

