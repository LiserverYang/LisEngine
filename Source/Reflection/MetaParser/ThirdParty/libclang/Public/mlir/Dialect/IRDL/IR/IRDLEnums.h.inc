/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: IRDLAttributes.td                                                    *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace irdl {
// variadicity kind
enum class Variadicity : uint32_t {
  single = 0,
  optional = 1,
  variadic = 2,
};

::std::optional<Variadicity> symbolizeVariadicity(uint32_t);
::llvm::StringRef stringifyVariadicity(Variadicity);
::std::optional<Variadicity> symbolizeVariadicity(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForVariadicity() {
  return 2;
}


inline ::llvm::StringRef stringifyEnum(Variadicity enumValue) {
  return stringifyVariadicity(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<Variadicity> symbolizeEnum<Variadicity>(::llvm::StringRef str) {
  return symbolizeVariadicity(str);
}
} // namespace irdl
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::irdl::Variadicity, ::mlir::irdl::Variadicity> {
  template <typename ParserT>
  static FailureOr<::mlir::irdl::Variadicity> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for variadicity kind");

    // Symbolize the keyword.
    if (::std::optional<::mlir::irdl::Variadicity> attr = ::mlir::irdl::symbolizeEnum<::mlir::irdl::Variadicity>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid variadicity kind specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::irdl::Variadicity value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::irdl::Variadicity> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::irdl::Variadicity getEmptyKey() {
    return static_cast<::mlir::irdl::Variadicity>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::irdl::Variadicity getTombstoneKey() {
    return static_cast<::mlir::irdl::Variadicity>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::irdl::Variadicity &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::irdl::Variadicity &lhs, const ::mlir::irdl::Variadicity &rhs) {
    return lhs == rhs;
  }
};
}

