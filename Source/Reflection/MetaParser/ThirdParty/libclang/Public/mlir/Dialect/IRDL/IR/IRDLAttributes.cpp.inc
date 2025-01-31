/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_LIST
#undef GET_ATTRDEF_LIST

::mlir::irdl::VariadicityAttr,
::mlir::irdl::VariadicityArrayAttr

#endif  // GET_ATTRDEF_LIST

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES

static ::mlir::OptionalParseResult generatedAttributeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type type, ::mlir::Attribute &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::irdl::VariadicityAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::irdl::VariadicityAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::irdl::VariadicityArrayAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::irdl::VariadicityArrayAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::llvm::LogicalResult generatedAttributePrinter(::mlir::Attribute def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Attribute, ::llvm::LogicalResult>(def)    .Case<::mlir::irdl::VariadicityAttr>([&](auto t) {
      printer << ::mlir::irdl::VariadicityAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::irdl::VariadicityArrayAttr>([&](auto t) {
      printer << ::mlir::irdl::VariadicityArrayAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace irdl {
namespace detail {
struct VariadicityAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::irdl::Variadicity>;
  VariadicityAttrStorage(::mlir::irdl::Variadicity value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static VariadicityAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<VariadicityAttrStorage>()) VariadicityAttrStorage(std::move(value));
  }

  ::mlir::irdl::Variadicity value;
};
} // namespace detail
VariadicityAttr VariadicityAttr::get(::mlir::MLIRContext *context, ::mlir::irdl::Variadicity value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute VariadicityAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::irdl::Variadicity> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::irdl::Variadicity> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::irdl::symbolizeVariadicity(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::llvm::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::irdl::Variadicity" << " to be one of: " << "single" << ", " << "optional" << ", " << "variadic")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse VariadicityAttr parameter 'value' which is to be a `::mlir::irdl::Variadicity`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return VariadicityAttr::get(odsParser.getContext(),
      ::mlir::irdl::Variadicity((*_result_value)));
}

void VariadicityAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyVariadicity(getValue());
}

::mlir::irdl::Variadicity VariadicityAttr::getValue() const {
  return getImpl()->value;
}

} // namespace irdl
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::irdl::VariadicityAttr)
namespace mlir {
namespace irdl {
namespace detail {
struct VariadicityArrayAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::llvm::ArrayRef<VariadicityAttr>>;
  VariadicityArrayAttrStorage(::llvm::ArrayRef<VariadicityAttr> value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (::llvm::ArrayRef<VariadicityAttr>(value) == ::llvm::ArrayRef<VariadicityAttr>(std::get<0>(tblgenKey)));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static VariadicityArrayAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    value = allocator.copyInto(value);
    return new (allocator.allocate<VariadicityArrayAttrStorage>()) VariadicityArrayAttrStorage(std::move(value));
  }

  ::llvm::ArrayRef<VariadicityAttr> value;
};
} // namespace detail
VariadicityArrayAttr VariadicityArrayAttr::get(::mlir::MLIRContext *context, ::llvm::ArrayRef<VariadicityAttr> value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute VariadicityArrayAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::llvm::SmallVector<VariadicityAttr>> _result_value;
  // Parse literal '['
  if (odsParser.parseLSquare()) return {};
  // Parse literal ']'
  if (odsParser.parseOptionalRSquare()) {

    // Parse variable 'value'
    _result_value = ::mlir::FieldParser<::llvm::SmallVector<VariadicityAttr>>::parse(odsParser);
    if (::mlir::failed(_result_value)) {
      odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse VariadicityArrayAttr parameter 'value' which is to be a `::llvm::ArrayRef<VariadicityAttr>`");
      return {};
    }
    // Parse literal ']'
    if (odsParser.parseRSquare()) return {};
  } else {
  }
  return VariadicityArrayAttr::get(odsParser.getContext(),
      ::llvm::ArrayRef<VariadicityAttr>((_result_value.value_or(::llvm::SmallVector<VariadicityAttr>()))));
}

void VariadicityArrayAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "[";
  if (!(!(::llvm::ArrayRef<VariadicityAttr>(getValue()) == ::llvm::ArrayRef<VariadicityAttr>(::llvm::SmallVector<VariadicityAttr>())))) {
    odsPrinter << "]";
  } else {
    if (!(::llvm::ArrayRef<VariadicityAttr>(getValue()) == ::llvm::ArrayRef<VariadicityAttr>(::llvm::SmallVector<VariadicityAttr>()))) {
      odsPrinter.printStrippedAttrOrType(getValue());
    }
    odsPrinter << "]";
  }
}

::llvm::ArrayRef<VariadicityAttr> VariadicityArrayAttr::getValue() const {
  return getImpl()->value;
}

} // namespace irdl
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::irdl::VariadicityArrayAttr)
namespace mlir {
namespace irdl {

/// Parse an attribute registered to this dialect.
::mlir::Attribute IRDLDialect::parseAttribute(::mlir::DialectAsmParser &parser,
                                      ::mlir::Type type) const {
  ::llvm::SMLoc typeLoc = parser.getCurrentLocation();
  ::llvm::StringRef attrTag;
  {
    ::mlir::Attribute attr;
    auto parseResult = generatedAttributeParser(parser, &attrTag, type, attr);
    if (parseResult.has_value())
      return attr;
  }
  
  parser.emitError(typeLoc) << "unknown attribute `"
      << attrTag << "` in dialect `" << getNamespace() << "`";
  return {};
}
/// Print an attribute registered to this dialect.
void IRDLDialect::printAttribute(::mlir::Attribute attr,
                         ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedAttributePrinter(attr, printer)))
    return;
  
}
} // namespace irdl
} // namespace mlir

#endif  // GET_ATTRDEF_CLASSES

