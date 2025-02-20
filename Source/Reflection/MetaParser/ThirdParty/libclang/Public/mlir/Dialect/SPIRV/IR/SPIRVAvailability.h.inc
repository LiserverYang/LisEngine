/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Availability Interface Declarations                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: SPIRVOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace spirv {
class QueryExtensionInterface;

namespace detail {
struct QueryExtensionInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions(const Concept *impl, Operation *tblgen_opaque_op) const = 0;
  };

  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = QueryExtensionInterface;
    ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions(const Concept *impl, Operation *tblgen_opaque_op) const final {
      auto op = llvm::cast<ConcreteOp>(tblgen_opaque_op);
      (void)op;
      return op.getExtensions();
    }
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = QueryExtensionInterface;
    ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions(const Concept *impl, Operation *tblgen_opaque_op) const final {
      auto op = llvm::cast<ConcreteOp>(tblgen_opaque_op);
      (void)op;
      return op.getExtensions();
    }
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteOp> {};
};
} // namespace detail

/*
Querying interface for required SPIR-V extensions.

    This interface provides a `getExtensions()` method to query the required
    extensions for the implementing SPIR-V operation. The returned value
    is a nested vector whose element is `mlir::spirv::Extension`s. The outer
    vector's elements (which are vectors) should be interpreted as conjunction
    while the inner vector's elements (which are `mlir::spirv::Extension`s)
    should be interpreted as disjunction. For example, given

    ```
    {{Extension::A, Extension::B}, {Extension::C}, {{Extension::D, Extension::E}}
    ```

    The operation instance is available when (`Extension::A` OR `Extension::B`)
    AND (`Extension::C`) AND (`Extension::D` OR `Extension::E`) is enabled.
*/
class QueryExtensionInterface : public OpInterface<QueryExtensionInterface, detail::QueryExtensionInterfaceTraits> {
public:
  using OpInterface<QueryExtensionInterface, detail::QueryExtensionInterfaceTraits>::OpInterface;
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
};

} // namespace spirv
} // namespace mlir
namespace mlir {
namespace spirv {
class QueryMinVersionInterface;

namespace detail {
struct QueryMinVersionInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual std::optional<::mlir::spirv::Version> getMinVersion(const Concept *impl, Operation *tblgen_opaque_op) const = 0;
  };

  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = QueryMinVersionInterface;
    std::optional<::mlir::spirv::Version> getMinVersion(const Concept *impl, Operation *tblgen_opaque_op) const final {
      auto op = llvm::cast<ConcreteOp>(tblgen_opaque_op);
      (void)op;
      return op.getMinVersion();
    }
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = QueryMinVersionInterface;
    std::optional<::mlir::spirv::Version> getMinVersion(const Concept *impl, Operation *tblgen_opaque_op) const final {
      auto op = llvm::cast<ConcreteOp>(tblgen_opaque_op);
      (void)op;
      return op.getMinVersion();
    }
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteOp> {};
};
} // namespace detail

/*
Querying interface for minimal required SPIR-V version.

    This interface provides a `getMinVersion()` method to query the minimal
    required version for the implementing SPIR-V operation. The returned value
    is a `mlir::spirv::Version` enumerant.
*/
class QueryMinVersionInterface : public OpInterface<QueryMinVersionInterface, detail::QueryMinVersionInterfaceTraits> {
public:
  using OpInterface<QueryMinVersionInterface, detail::QueryMinVersionInterfaceTraits>::OpInterface;
  std::optional<::mlir::spirv::Version> getMinVersion();
};

} // namespace spirv
} // namespace mlir
namespace mlir {
namespace spirv {
class QueryCapabilityInterface;

namespace detail {
struct QueryCapabilityInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities(const Concept *impl, Operation *tblgen_opaque_op) const = 0;
  };

  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = QueryCapabilityInterface;
    ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities(const Concept *impl, Operation *tblgen_opaque_op) const final {
      auto op = llvm::cast<ConcreteOp>(tblgen_opaque_op);
      (void)op;
      return op.getCapabilities();
    }
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = QueryCapabilityInterface;
    ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities(const Concept *impl, Operation *tblgen_opaque_op) const final {
      auto op = llvm::cast<ConcreteOp>(tblgen_opaque_op);
      (void)op;
      return op.getCapabilities();
    }
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteOp> {};
};
} // namespace detail

/*
Querying interface for required SPIR-V capabilities.

    This interface provides a `getCapabilities()` method to query the required
    capabilities for the implementing SPIR-V operation. The returned value
    is a nested vector whose element is `mlir::spirv::Capability`s. The outer
    vector's elements (which are vectors) should be interpreted as conjunction
    while the inner vector's elements (which are `mlir::spirv::Capability`s)
    should be interpreted as disjunction. For example, given

    ```
    {{Capability::A, Capability::B}, {Capability::C}, {{Capability::D, Capability::E}}
    ```

    The operation instance is available when (`Capability::A` OR `Capability::B`)
    AND (`Capability::C`) AND (`Capability::D` OR `Capability::E`) is enabled.
*/
class QueryCapabilityInterface : public OpInterface<QueryCapabilityInterface, detail::QueryCapabilityInterfaceTraits> {
public:
  using OpInterface<QueryCapabilityInterface, detail::QueryCapabilityInterfaceTraits>::OpInterface;
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

} // namespace spirv
} // namespace mlir
namespace mlir {
namespace spirv {
class QueryMaxVersionInterface;

namespace detail {
struct QueryMaxVersionInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual std::optional<::mlir::spirv::Version> getMaxVersion(const Concept *impl, Operation *tblgen_opaque_op) const = 0;
  };

  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = QueryMaxVersionInterface;
    std::optional<::mlir::spirv::Version> getMaxVersion(const Concept *impl, Operation *tblgen_opaque_op) const final {
      auto op = llvm::cast<ConcreteOp>(tblgen_opaque_op);
      (void)op;
      return op.getMaxVersion();
    }
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = QueryMaxVersionInterface;
    std::optional<::mlir::spirv::Version> getMaxVersion(const Concept *impl, Operation *tblgen_opaque_op) const final {
      auto op = llvm::cast<ConcreteOp>(tblgen_opaque_op);
      (void)op;
      return op.getMaxVersion();
    }
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteOp> {};
};
} // namespace detail

/*
Querying interface for maximal supported SPIR-V version.

    This interface provides a `getMaxVersion()` method to query the maximal
    supported version for the implementing SPIR-V operation. The returned value
    is a `mlir::spirv::Version` enumerant.
*/
class QueryMaxVersionInterface : public OpInterface<QueryMaxVersionInterface, detail::QueryMaxVersionInterfaceTraits> {
public:
  using OpInterface<QueryMaxVersionInterface, detail::QueryMaxVersionInterfaceTraits>::OpInterface;
  std::optional<::mlir::spirv::Version> getMaxVersion();
};

} // namespace spirv
} // namespace mlir
