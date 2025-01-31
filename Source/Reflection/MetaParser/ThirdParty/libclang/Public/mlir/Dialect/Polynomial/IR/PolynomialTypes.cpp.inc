/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* TypeDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_TYPEDEF_LIST
#undef GET_TYPEDEF_LIST

::mlir::polynomial::PolynomialType

#endif  // GET_TYPEDEF_LIST

#ifdef GET_TYPEDEF_CLASSES
#undef GET_TYPEDEF_CLASSES

static ::mlir::OptionalParseResult generatedTypeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::polynomial::PolynomialType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::polynomial::PolynomialType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::llvm::LogicalResult generatedTypePrinter(::mlir::Type def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Type, ::llvm::LogicalResult>(def)    .Case<::mlir::polynomial::PolynomialType>([&](auto t) {
      printer << ::mlir::polynomial::PolynomialType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace polynomial {
namespace detail {
struct PolynomialTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<::mlir::polynomial::RingAttr>;
  PolynomialTypeStorage(::mlir::polynomial::RingAttr ring) : ring(std::move(ring)) {}

  KeyTy getAsKey() const {
    return KeyTy(ring);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (ring == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static PolynomialTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto ring = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<PolynomialTypeStorage>()) PolynomialTypeStorage(std::move(ring));
  }

  ::mlir::polynomial::RingAttr ring;
};
} // namespace detail
PolynomialType PolynomialType::get(::mlir::MLIRContext *context, ::mlir::polynomial::RingAttr ring) {
  return Base::get(context, std::move(ring));
}

::mlir::Type PolynomialType::parse(::mlir::AsmParser &odsParser) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::polynomial::RingAttr> _result_ring;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_ring = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_ring && _paramKey == "ring") {
        _seen_ring = true;

        // Parse variable 'ring'
        odsParser.getContext()->getOrLoadDialect<::mlir::polynomial::PolynomialDialect>();
        _result_ring = ::mlir::FieldParser<::mlir::polynomial::RingAttr>::parse(odsParser);
        if (::mlir::failed(_result_ring)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse Polynomial_PolynomialType parameter 'ring' which is to be a `::mlir::polynomial::RingAttr`");
          return {};
        }
      } else {
        odsParser.emitError(odsParser.getCurrentLocation(), "duplicate or unknown struct parameter name: ") << _paramKey;
        return {};
      }
      return true;
    };
    for (unsigned odsStructIndex = 0; odsStructIndex < 1; ++odsStructIndex) {
      ::llvm::StringRef _paramKey;
      if (odsParser.parseKeyword(&_paramKey)) {
        odsParser.emitError(odsParser.getCurrentLocation(),
                           "expected a parameter name in struct");
        return {};
      }
      if (!_loop_body(_paramKey)) return {};
      if ((odsStructIndex != 1 - 1) && odsParser.parseComma())
        return {};
    }
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_ring));
  return PolynomialType::get(odsParser.getContext(),
      ::mlir::polynomial::RingAttr(::llvm::cast<::mlir::polynomial::RingAttr>((*_result_ring))));
}

void PolynomialType::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "ring = ";
    odsPrinter.printStrippedAttrOrType(getRing());
  }
  odsPrinter << ">";
}

::mlir::polynomial::RingAttr PolynomialType::getRing() const {
  return getImpl()->ring;
}

} // namespace polynomial
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::polynomial::PolynomialType)
namespace mlir {
namespace polynomial {

/// Parse a type registered to this dialect.
::mlir::Type PolynomialDialect::parseType(::mlir::DialectAsmParser &parser) const {
  ::llvm::SMLoc typeLoc = parser.getCurrentLocation();
  ::llvm::StringRef mnemonic;
  ::mlir::Type genType;
  auto parseResult = generatedTypeParser(parser, &mnemonic, genType);
  if (parseResult.has_value())
    return genType;
  
  parser.emitError(typeLoc) << "unknown  type `"
      << mnemonic << "` in dialect `" << getNamespace() << "`";
  return {};
}
/// Print a type registered to this dialect.
void PolynomialDialect::printType(::mlir::Type type,
                    ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedTypePrinter(type, printer)))
    return;
  
}
} // namespace polynomial
} // namespace mlir

#endif  // GET_TYPEDEF_CLASSES

