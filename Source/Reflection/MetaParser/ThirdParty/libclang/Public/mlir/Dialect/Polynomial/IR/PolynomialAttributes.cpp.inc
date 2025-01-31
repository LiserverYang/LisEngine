/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_LIST
#undef GET_ATTRDEF_LIST

::mlir::polynomial::IntPolynomialAttr,
::mlir::polynomial::FloatPolynomialAttr,
::mlir::polynomial::TypedIntPolynomialAttr,
::mlir::polynomial::TypedFloatPolynomialAttr,
::mlir::polynomial::RingAttr,
::mlir::polynomial::PrimitiveRootAttr

#endif  // GET_ATTRDEF_LIST

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES

static ::mlir::OptionalParseResult generatedAttributeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type type, ::mlir::Attribute &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::polynomial::IntPolynomialAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::polynomial::IntPolynomialAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::polynomial::FloatPolynomialAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::polynomial::FloatPolynomialAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::polynomial::TypedIntPolynomialAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::polynomial::TypedIntPolynomialAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::polynomial::TypedFloatPolynomialAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::polynomial::TypedFloatPolynomialAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::polynomial::RingAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::polynomial::RingAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::polynomial::PrimitiveRootAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::polynomial::PrimitiveRootAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::llvm::LogicalResult generatedAttributePrinter(::mlir::Attribute def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Attribute, ::llvm::LogicalResult>(def)    .Case<::mlir::polynomial::IntPolynomialAttr>([&](auto t) {
      printer << ::mlir::polynomial::IntPolynomialAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::polynomial::FloatPolynomialAttr>([&](auto t) {
      printer << ::mlir::polynomial::FloatPolynomialAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::polynomial::TypedIntPolynomialAttr>([&](auto t) {
      printer << ::mlir::polynomial::TypedIntPolynomialAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::polynomial::TypedFloatPolynomialAttr>([&](auto t) {
      printer << ::mlir::polynomial::TypedFloatPolynomialAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::polynomial::RingAttr>([&](auto t) {
      printer << ::mlir::polynomial::RingAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::polynomial::PrimitiveRootAttr>([&](auto t) {
      printer << ::mlir::polynomial::PrimitiveRootAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace polynomial {
namespace detail {
struct IntPolynomialAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::polynomial::IntPolynomial>;
  IntPolynomialAttrStorage(::mlir::polynomial::IntPolynomial polynomial) : polynomial(std::move(polynomial)) {}

  KeyTy getAsKey() const {
    return KeyTy(polynomial);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (polynomial == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static IntPolynomialAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto polynomial = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<IntPolynomialAttrStorage>()) IntPolynomialAttrStorage(std::move(polynomial));
  }

  ::mlir::polynomial::IntPolynomial polynomial;
};
} // namespace detail
IntPolynomialAttr IntPolynomialAttr::get(::mlir::MLIRContext *context, ::mlir::polynomial::IntPolynomial polynomial) {
  return Base::get(context, std::move(polynomial));
}

::mlir::polynomial::IntPolynomial IntPolynomialAttr::getPolynomial() const {
  return getImpl()->polynomial;
}

} // namespace polynomial
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::polynomial::IntPolynomialAttr)
namespace mlir {
namespace polynomial {
namespace detail {
struct FloatPolynomialAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<FloatPolynomial>;
  FloatPolynomialAttrStorage(FloatPolynomial polynomial) : polynomial(std::move(polynomial)) {}

  KeyTy getAsKey() const {
    return KeyTy(polynomial);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (polynomial == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static FloatPolynomialAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto polynomial = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<FloatPolynomialAttrStorage>()) FloatPolynomialAttrStorage(std::move(polynomial));
  }

  FloatPolynomial polynomial;
};
} // namespace detail
FloatPolynomialAttr FloatPolynomialAttr::get(::mlir::MLIRContext *context, FloatPolynomial polynomial) {
  return Base::get(context, std::move(polynomial));
}

FloatPolynomial FloatPolynomialAttr::getPolynomial() const {
  return getImpl()->polynomial;
}

} // namespace polynomial
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::polynomial::FloatPolynomialAttr)
namespace mlir {
namespace polynomial {
namespace detail {
struct TypedIntPolynomialAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::Type, ::mlir::polynomial::IntPolynomialAttr>;
  TypedIntPolynomialAttrStorage(::mlir::Type type, ::mlir::polynomial::IntPolynomialAttr value) : type(std::move(type)), value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(type, value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (type == std::get<0>(tblgenKey)) && (value == std::get<1>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey));
  }

  static TypedIntPolynomialAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto type = std::move(std::get<0>(tblgenKey));
    auto value = std::move(std::get<1>(tblgenKey));
    return new (allocator.allocate<TypedIntPolynomialAttrStorage>()) TypedIntPolynomialAttrStorage(std::move(type), std::move(value));
  }

  ::mlir::Type type;
  ::mlir::polynomial::IntPolynomialAttr value;
};
} // namespace detail
TypedIntPolynomialAttr TypedIntPolynomialAttr::get(::mlir::MLIRContext *context, ::mlir::Type type, ::mlir::polynomial::IntPolynomialAttr value) {
  return Base::get(context, std::move(type), std::move(value));
}

TypedIntPolynomialAttr TypedIntPolynomialAttr::get(Type type, const IntPolynomial &value) {
  return Base::get(
    type.getContext(),
    type,
    IntPolynomialAttr::get(type.getContext(), value));
}

TypedIntPolynomialAttr TypedIntPolynomialAttr::get(Type type, const Attribute &value) {
  return Base::get(type.getContext(), type, ::llvm::cast<IntPolynomialAttr>(value));
}

::mlir::Attribute TypedIntPolynomialAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::Type> _result_type;
  ::mlir::FailureOr<::mlir::polynomial::IntPolynomialAttr> _result_value;

  // Parse variable 'value'
  _result_value = ::mlir::FieldParser<::mlir::polynomial::IntPolynomialAttr>::parse(odsParser);
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse Polynomial_TypedIntPolynomialAttr parameter 'value' which is to be a `::mlir::polynomial::IntPolynomialAttr`");
    return {};
  }
  // Parse literal ':'
  if (odsParser.parseColon()) return {};

  // Parse variable 'type'
  _result_type = ::mlir::FieldParser<::mlir::Type>::parse(odsParser);
  if (::mlir::failed(_result_type)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse Polynomial_TypedIntPolynomialAttr parameter 'type' which is to be a `::mlir::Type`");
    return {};
  }
  assert(::mlir::succeeded(_result_type));
  assert(::mlir::succeeded(_result_value));
  return TypedIntPolynomialAttr::get(odsParser.getContext(),
      ::mlir::Type((*_result_type)),
      ::mlir::polynomial::IntPolynomialAttr((*_result_value)));
}

void TypedIntPolynomialAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter.printStrippedAttrOrType(getValue());
  odsPrinter << ' ' << ":";
  odsPrinter << ' ';
  odsPrinter.printStrippedAttrOrType(getType());
}

::mlir::Type TypedIntPolynomialAttr::getType() const {
  return getImpl()->type;
}

::mlir::polynomial::IntPolynomialAttr TypedIntPolynomialAttr::getValue() const {
  return getImpl()->value;
}

} // namespace polynomial
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::polynomial::TypedIntPolynomialAttr)
namespace mlir {
namespace polynomial {
namespace detail {
struct TypedFloatPolynomialAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::Type, ::mlir::polynomial::FloatPolynomialAttr>;
  TypedFloatPolynomialAttrStorage(::mlir::Type type, ::mlir::polynomial::FloatPolynomialAttr value) : type(std::move(type)), value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(type, value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (type == std::get<0>(tblgenKey)) && (value == std::get<1>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey));
  }

  static TypedFloatPolynomialAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto type = std::move(std::get<0>(tblgenKey));
    auto value = std::move(std::get<1>(tblgenKey));
    return new (allocator.allocate<TypedFloatPolynomialAttrStorage>()) TypedFloatPolynomialAttrStorage(std::move(type), std::move(value));
  }

  ::mlir::Type type;
  ::mlir::polynomial::FloatPolynomialAttr value;
};
} // namespace detail
TypedFloatPolynomialAttr TypedFloatPolynomialAttr::get(::mlir::MLIRContext *context, ::mlir::Type type, ::mlir::polynomial::FloatPolynomialAttr value) {
  return Base::get(context, std::move(type), std::move(value));
}

TypedFloatPolynomialAttr TypedFloatPolynomialAttr::get(Type type, const FloatPolynomial &value) {
  return Base::get(
    type.getContext(),
    type,
    FloatPolynomialAttr::get(type.getContext(), value));
}

TypedFloatPolynomialAttr TypedFloatPolynomialAttr::get(Type type, const Attribute &value) {
  return Base::get(type.getContext(), type, ::llvm::cast<FloatPolynomialAttr>(value));
}

::mlir::Attribute TypedFloatPolynomialAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::Type> _result_type;
  ::mlir::FailureOr<::mlir::polynomial::FloatPolynomialAttr> _result_value;

  // Parse variable 'value'
  _result_value = ::mlir::FieldParser<::mlir::polynomial::FloatPolynomialAttr>::parse(odsParser);
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse Polynomial_TypedFloatPolynomialAttr parameter 'value' which is to be a `::mlir::polynomial::FloatPolynomialAttr`");
    return {};
  }
  // Parse literal ':'
  if (odsParser.parseColon()) return {};

  // Parse variable 'type'
  _result_type = ::mlir::FieldParser<::mlir::Type>::parse(odsParser);
  if (::mlir::failed(_result_type)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse Polynomial_TypedFloatPolynomialAttr parameter 'type' which is to be a `::mlir::Type`");
    return {};
  }
  assert(::mlir::succeeded(_result_type));
  assert(::mlir::succeeded(_result_value));
  return TypedFloatPolynomialAttr::get(odsParser.getContext(),
      ::mlir::Type((*_result_type)),
      ::mlir::polynomial::FloatPolynomialAttr((*_result_value)));
}

void TypedFloatPolynomialAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter.printStrippedAttrOrType(getValue());
  odsPrinter << ' ' << ":";
  odsPrinter << ' ';
  odsPrinter.printStrippedAttrOrType(getType());
}

::mlir::Type TypedFloatPolynomialAttr::getType() const {
  return getImpl()->type;
}

::mlir::polynomial::FloatPolynomialAttr TypedFloatPolynomialAttr::getValue() const {
  return getImpl()->value;
}

} // namespace polynomial
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::polynomial::TypedFloatPolynomialAttr)
namespace mlir {
namespace polynomial {
namespace detail {
struct RingAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<Type, ::mlir::IntegerAttr, ::mlir::polynomial::IntPolynomialAttr>;
  RingAttrStorage(Type coefficientType, ::mlir::IntegerAttr coefficientModulus, ::mlir::polynomial::IntPolynomialAttr polynomialModulus) : coefficientType(std::move(coefficientType)), coefficientModulus(std::move(coefficientModulus)), polynomialModulus(std::move(polynomialModulus)) {}

  KeyTy getAsKey() const {
    return KeyTy(coefficientType, coefficientModulus, polynomialModulus);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (coefficientType == std::get<0>(tblgenKey)) && (coefficientModulus == std::get<1>(tblgenKey)) && (polynomialModulus == std::get<2>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey));
  }

  static RingAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto coefficientType = std::move(std::get<0>(tblgenKey));
    auto coefficientModulus = std::move(std::get<1>(tblgenKey));
    auto polynomialModulus = std::move(std::get<2>(tblgenKey));
    return new (allocator.allocate<RingAttrStorage>()) RingAttrStorage(std::move(coefficientType), std::move(coefficientModulus), std::move(polynomialModulus));
  }

  Type coefficientType;
  ::mlir::IntegerAttr coefficientModulus;
  ::mlir::polynomial::IntPolynomialAttr polynomialModulus;
};
} // namespace detail
RingAttr RingAttr::get(::mlir::MLIRContext *context, Type coefficientType, ::mlir::IntegerAttr coefficientModulus, ::mlir::polynomial::IntPolynomialAttr polynomialModulus) {
  return Base::get(context, std::move(coefficientType), std::move(coefficientModulus), std::move(polynomialModulus));
}

RingAttr RingAttr::get(::mlir::Type coefficientTy, ::mlir::IntegerAttr coefficientModulusAttr, ::mlir::polynomial::IntPolynomialAttr polynomialModulusAttr) {
  return Base::get(
    coefficientTy.getContext(),
    coefficientTy,
    coefficientModulusAttr,
    polynomialModulusAttr);
}

::mlir::Attribute RingAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<Type> _result_coefficientType;
  ::mlir::FailureOr<::mlir::IntegerAttr> _result_coefficientModulus;
  ::mlir::FailureOr<::mlir::polynomial::IntPolynomialAttr> _result_polynomialModulus;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_coefficientType = false;
  bool _seen_coefficientModulus = false;
  bool _seen_polynomialModulus = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_coefficientType && _paramKey == "coefficientType") {
        _seen_coefficientType = true;

        // Parse variable 'coefficientType'
        _result_coefficientType = ::mlir::FieldParser<Type>::parse(odsParser);
        if (::mlir::failed(_result_coefficientType)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse Polynomial_RingAttr parameter 'coefficientType' which is to be a `Type`");
          return {};
        }
      } else if (!_seen_coefficientModulus && _paramKey == "coefficientModulus") {
        _seen_coefficientModulus = true;

        // Parse variable 'coefficientModulus'
        _result_coefficientModulus = ::mlir::FieldParser<::mlir::IntegerAttr>::parse(odsParser);
        if (::mlir::failed(_result_coefficientModulus)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse Polynomial_RingAttr parameter 'coefficientModulus' which is to be a `::mlir::IntegerAttr`");
          return {};
        }
      } else if (!_seen_polynomialModulus && _paramKey == "polynomialModulus") {
        _seen_polynomialModulus = true;

        // Parse variable 'polynomialModulus'
        _result_polynomialModulus = ::mlir::FieldParser<::mlir::polynomial::IntPolynomialAttr>::parse(odsParser);
        if (::mlir::failed(_result_polynomialModulus)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse Polynomial_RingAttr parameter 'polynomialModulus' which is to be a `::mlir::polynomial::IntPolynomialAttr`");
          return {};
        }
      } else {
        odsParser.emitError(odsParser.getCurrentLocation(), "duplicate or unknown struct parameter name: ") << _paramKey;
        return {};
      }
      return true;
    };
    do {
      ::llvm::StringRef _paramKey;
      if (odsParser.parseKeyword(&_paramKey)) {
        odsParser.emitError(odsParser.getCurrentLocation(),
                           "expected a parameter name in struct");
        return {};
      }
      if (!_loop_body(_paramKey)) return {};
    } while(!odsParser.parseOptionalComma());
    if (!_seen_coefficientType) {
      odsParser.emitError(odsParser.getCurrentLocation(), "struct is missing required parameter: ") << "coefficientType";
      return {};
    }
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_coefficientType));
  return RingAttr::get(odsParser.getContext(),
      Type((*_result_coefficientType)),
      ::mlir::IntegerAttr((_result_coefficientModulus.value_or(::mlir::IntegerAttr()))),
      ::mlir::polynomial::IntPolynomialAttr((_result_polynomialModulus.value_or(::mlir::polynomial::IntPolynomialAttr()))));
}

void RingAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "coefficientType = ";
    odsPrinter.printStrippedAttrOrType(getCoefficientType());
    if (!(getCoefficientModulus() == ::mlir::IntegerAttr())) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "coefficientModulus = ";
      if (!(getCoefficientModulus() == ::mlir::IntegerAttr())) {
        odsPrinter.printStrippedAttrOrType(getCoefficientModulus());
      }
    }
    if (!(getPolynomialModulus() == ::mlir::polynomial::IntPolynomialAttr())) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "polynomialModulus = ";
      if (!(getPolynomialModulus() == ::mlir::polynomial::IntPolynomialAttr())) {
        odsPrinter.printStrippedAttrOrType(getPolynomialModulus());
      }
    }
  }
  odsPrinter << ">";
}

Type RingAttr::getCoefficientType() const {
  return getImpl()->coefficientType;
}

::mlir::IntegerAttr RingAttr::getCoefficientModulus() const {
  return getImpl()->coefficientModulus;
}

::mlir::polynomial::IntPolynomialAttr RingAttr::getPolynomialModulus() const {
  return getImpl()->polynomialModulus;
}

} // namespace polynomial
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::polynomial::RingAttr)
namespace mlir {
namespace polynomial {
namespace detail {
struct PrimitiveRootAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::IntegerAttr, ::mlir::IntegerAttr>;
  PrimitiveRootAttrStorage(::mlir::IntegerAttr value, ::mlir::IntegerAttr degree) : value(std::move(value)), degree(std::move(degree)) {}

  KeyTy getAsKey() const {
    return KeyTy(value, degree);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey)) && (degree == std::get<1>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey));
  }

  static PrimitiveRootAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    auto degree = std::move(std::get<1>(tblgenKey));
    return new (allocator.allocate<PrimitiveRootAttrStorage>()) PrimitiveRootAttrStorage(std::move(value), std::move(degree));
  }

  ::mlir::IntegerAttr value;
  ::mlir::IntegerAttr degree;
};
} // namespace detail
PrimitiveRootAttr PrimitiveRootAttr::get(::mlir::MLIRContext *context, ::mlir::IntegerAttr value, ::mlir::IntegerAttr degree) {
  return Base::get(context, std::move(value), std::move(degree));
}

::mlir::Attribute PrimitiveRootAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::IntegerAttr> _result_value;
  ::mlir::FailureOr<::mlir::IntegerAttr> _result_degree;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_value = false;
  bool _seen_degree = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_value && _paramKey == "value") {
        _seen_value = true;

        // Parse variable 'value'
        _result_value = ::mlir::FieldParser<::mlir::IntegerAttr>::parse(odsParser);
        if (::mlir::failed(_result_value)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse Polynomial_PrimitiveRootAttr parameter 'value' which is to be a `::mlir::IntegerAttr`");
          return {};
        }
      } else if (!_seen_degree && _paramKey == "degree") {
        _seen_degree = true;

        // Parse variable 'degree'
        _result_degree = ::mlir::FieldParser<::mlir::IntegerAttr>::parse(odsParser);
        if (::mlir::failed(_result_degree)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse Polynomial_PrimitiveRootAttr parameter 'degree' which is to be a `::mlir::IntegerAttr`");
          return {};
        }
      } else {
        odsParser.emitError(odsParser.getCurrentLocation(), "duplicate or unknown struct parameter name: ") << _paramKey;
        return {};
      }
      return true;
    };
    for (unsigned odsStructIndex = 0; odsStructIndex < 2; ++odsStructIndex) {
      ::llvm::StringRef _paramKey;
      if (odsParser.parseKeyword(&_paramKey)) {
        odsParser.emitError(odsParser.getCurrentLocation(),
                           "expected a parameter name in struct");
        return {};
      }
      if (!_loop_body(_paramKey)) return {};
      if ((odsStructIndex != 2 - 1) && odsParser.parseComma())
        return {};
    }
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  assert(::mlir::succeeded(_result_degree));
  return PrimitiveRootAttr::get(odsParser.getContext(),
      ::mlir::IntegerAttr((*_result_value)),
      ::mlir::IntegerAttr((*_result_degree)));
}

void PrimitiveRootAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "value = ";
    odsPrinter.printStrippedAttrOrType(getValue());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "degree = ";
    odsPrinter.printStrippedAttrOrType(getDegree());
  }
  odsPrinter << ">";
}

::mlir::IntegerAttr PrimitiveRootAttr::getValue() const {
  return getImpl()->value;
}

::mlir::IntegerAttr PrimitiveRootAttr::getDegree() const {
  return getImpl()->degree;
}

} // namespace polynomial
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::polynomial::PrimitiveRootAttr)
namespace mlir {
namespace polynomial {

/// Parse an attribute registered to this dialect.
::mlir::Attribute PolynomialDialect::parseAttribute(::mlir::DialectAsmParser &parser,
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
void PolynomialDialect::printAttribute(::mlir::Attribute attr,
                         ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedAttributePrinter(attr, printer)))
    return;
  
}
} // namespace polynomial
} // namespace mlir

#endif  // GET_ATTRDEF_CLASSES

