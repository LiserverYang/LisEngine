/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace irdl {
class VerifyConstraintInterface;
namespace detail {
struct VerifyConstraintInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    std::unique_ptr<::mlir::irdl::Constraint> (*getVerifier)(const Concept *impl, ::mlir::Operation *, ::mlir::ArrayRef<Value>, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const&, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const&);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::irdl::VerifyConstraintInterface;
    Model() : Concept{getVerifier} {}

    static inline std::unique_ptr<::mlir::irdl::Constraint> getVerifier(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::irdl::VerifyConstraintInterface;
    FallbackModel() : Concept{getVerifier} {}

    static inline std::unique_ptr<::mlir::irdl::Constraint> getVerifier(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
  };
};
template <typename ConcreteOp>
struct VerifyConstraintInterfaceTrait;

} // namespace detail
class VerifyConstraintInterface : public ::mlir::OpInterface<VerifyConstraintInterface, detail::VerifyConstraintInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<VerifyConstraintInterface, detail::VerifyConstraintInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::VerifyConstraintInterfaceTrait<ConcreteOp> {};
  /// Get an instance of a constraint verifier for the associated operation."
  /// Returns `nullptr` upon failure.
  std::unique_ptr<::mlir::irdl::Constraint> getVerifier(::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs);
};
namespace detail {
  template <typename ConcreteOp>
  struct VerifyConstraintInterfaceTrait : public ::mlir::OpInterface<VerifyConstraintInterface, detail::VerifyConstraintInterfaceInterfaceTraits>::Trait<ConcreteOp> {
  };
}// namespace detail
} // namespace irdl
} // namespace mlir
namespace mlir {
namespace irdl {
class VerifyRegionInterface;
namespace detail {
struct VerifyRegionInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    std::unique_ptr<::mlir::irdl::RegionConstraint> (*getVerifier)(const Concept *impl, ::mlir::Operation *, ::mlir::ArrayRef<Value>, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const&, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const&);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::irdl::VerifyRegionInterface;
    Model() : Concept{getVerifier} {}

    static inline std::unique_ptr<::mlir::irdl::RegionConstraint> getVerifier(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::irdl::VerifyRegionInterface;
    FallbackModel() : Concept{getVerifier} {}

    static inline std::unique_ptr<::mlir::irdl::RegionConstraint> getVerifier(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
  };
};
template <typename ConcreteOp>
struct VerifyRegionInterfaceTrait;

} // namespace detail
class VerifyRegionInterface : public ::mlir::OpInterface<VerifyRegionInterface, detail::VerifyRegionInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<VerifyRegionInterface, detail::VerifyRegionInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::VerifyRegionInterfaceTrait<ConcreteOp> {};
  /// Get an instance of a constraint verifier for the associated operation."
  /// Returns `nullptr` upon failure.
  std::unique_ptr<::mlir::irdl::RegionConstraint> getVerifier(::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs);
};
namespace detail {
  template <typename ConcreteOp>
  struct VerifyRegionInterfaceTrait : public ::mlir::OpInterface<VerifyRegionInterface, detail::VerifyRegionInterfaceInterfaceTraits>::Trait<ConcreteOp> {
  };
}// namespace detail
} // namespace irdl
} // namespace mlir
namespace mlir {
namespace irdl {
template<typename ConcreteOp>
std::unique_ptr<::mlir::irdl::Constraint> detail::VerifyConstraintInterfaceInterfaceTraits::Model<ConcreteOp>::getVerifier(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getVerifier(valueToConstr, types, attrs);
}
template<typename ConcreteOp>
std::unique_ptr<::mlir::irdl::Constraint> detail::VerifyConstraintInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getVerifier(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs) {
  return static_cast<const ConcreteOp *>(impl)->getVerifier(tablegen_opaque_val, valueToConstr, types, attrs);
}
} // namespace irdl
} // namespace mlir
namespace mlir {
namespace irdl {
template<typename ConcreteOp>
std::unique_ptr<::mlir::irdl::RegionConstraint> detail::VerifyRegionInterfaceInterfaceTraits::Model<ConcreteOp>::getVerifier(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getVerifier(valueToConstr, types, attrs);
}
template<typename ConcreteOp>
std::unique_ptr<::mlir::irdl::RegionConstraint> detail::VerifyRegionInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getVerifier(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs) {
  return static_cast<const ConcreteOp *>(impl)->getVerifier(tablegen_opaque_val, valueToConstr, types, attrs);
}
} // namespace irdl
} // namespace mlir
