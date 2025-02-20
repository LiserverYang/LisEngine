/* Autogenerated by mlir-tblgen; don't manually edit */

#ifdef GEN_PASS_DECL
// Generate declarations for all passes.
#define GEN_PASS_DECL_XEGPUFOLDALIASOPS
#undef GEN_PASS_DECL
#endif // GEN_PASS_DECL

//===----------------------------------------------------------------------===//
// XeGPUFoldAliasOps
//===----------------------------------------------------------------------===//
#ifdef GEN_PASS_DECL_XEGPUFOLDALIASOPS
std::unique_ptr<::mlir::Pass> createXeGPUFoldAliasOps();
#undef GEN_PASS_DECL_XEGPUFOLDALIASOPS
#endif // GEN_PASS_DECL_XEGPUFOLDALIASOPS
#ifdef GEN_PASS_DEF_XEGPUFOLDALIASOPS

namespace impl {
  std::unique_ptr<::mlir::Pass> createXeGPUFoldAliasOps();
} // namespace impl
namespace impl {

template <typename DerivedT>
class XeGPUFoldAliasOpsBase : public ::mlir::OperationPass<> {
public:
  using Base = XeGPUFoldAliasOpsBase;

  XeGPUFoldAliasOpsBase() : ::mlir::OperationPass<>(::mlir::TypeID::get<DerivedT>()) {}
  XeGPUFoldAliasOpsBase(const XeGPUFoldAliasOpsBase &other) : ::mlir::OperationPass<>(other) {}
  XeGPUFoldAliasOpsBase& operator=(const XeGPUFoldAliasOpsBase &) = delete;
  XeGPUFoldAliasOpsBase(XeGPUFoldAliasOpsBase &&) = delete;
  XeGPUFoldAliasOpsBase& operator=(XeGPUFoldAliasOpsBase &&) = delete;
  ~XeGPUFoldAliasOpsBase() = default;

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xegpu-fold-alias-ops");
  }
  ::llvm::StringRef getArgument() const override { return "xegpu-fold-alias-ops"; }

  ::llvm::StringRef getDescription() const override { return "Fold alias ops into XeGPU ops"; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("XeGPUFoldAliasOps");
  }
  ::llvm::StringRef getName() const override { return "XeGPUFoldAliasOps"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Return the dialect that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    registry.insert<memref::MemRefDialect>();
    registry.insert<xegpu::XeGPUDialect>();
  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(XeGPUFoldAliasOpsBase<DerivedT>)

protected:
private:

  friend std::unique_ptr<::mlir::Pass> createXeGPUFoldAliasOps() {
    return std::make_unique<DerivedT>();
  }
};
} // namespace impl

std::unique_ptr<::mlir::Pass> createXeGPUFoldAliasOps() {
  return impl::createXeGPUFoldAliasOps();
}
#undef GEN_PASS_DEF_XEGPUFOLDALIASOPS
#endif // GEN_PASS_DEF_XEGPUFOLDALIASOPS
#ifdef GEN_PASS_REGISTRATION

//===----------------------------------------------------------------------===//
// XeGPUFoldAliasOps Registration
//===----------------------------------------------------------------------===//

inline void registerXeGPUFoldAliasOps() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createXeGPUFoldAliasOps();
  });
}

// Old registration code, kept for temporary backwards compatibility.
inline void registerXeGPUFoldAliasOpsPass() {
  ::mlir::registerPass([]() -> std::unique_ptr<::mlir::Pass> {
    return createXeGPUFoldAliasOps();
  });
}

//===----------------------------------------------------------------------===//
// XeGPU Registration
//===----------------------------------------------------------------------===//

inline void registerXeGPUPasses() {
  registerXeGPUFoldAliasOps();
}
#undef GEN_PASS_REGISTRATION
#endif // GEN_PASS_REGISTRATION
// Deprecated. Please use the new per-pass macros.
#ifdef GEN_PASS_CLASSES

template <typename DerivedT>
class XeGPUFoldAliasOpsBase : public ::mlir::OperationPass<> {
public:
  using Base = XeGPUFoldAliasOpsBase;

  XeGPUFoldAliasOpsBase() : ::mlir::OperationPass<>(::mlir::TypeID::get<DerivedT>()) {}
  XeGPUFoldAliasOpsBase(const XeGPUFoldAliasOpsBase &other) : ::mlir::OperationPass<>(other) {}
  XeGPUFoldAliasOpsBase& operator=(const XeGPUFoldAliasOpsBase &) = delete;
  XeGPUFoldAliasOpsBase(XeGPUFoldAliasOpsBase &&) = delete;
  XeGPUFoldAliasOpsBase& operator=(XeGPUFoldAliasOpsBase &&) = delete;
  ~XeGPUFoldAliasOpsBase() = default;

  /// Returns the command-line argument attached to this pass.
  static constexpr ::llvm::StringLiteral getArgumentName() {
    return ::llvm::StringLiteral("xegpu-fold-alias-ops");
  }
  ::llvm::StringRef getArgument() const override { return "xegpu-fold-alias-ops"; }

  ::llvm::StringRef getDescription() const override { return "Fold alias ops into XeGPU ops"; }

  /// Returns the derived pass name.
  static constexpr ::llvm::StringLiteral getPassName() {
    return ::llvm::StringLiteral("XeGPUFoldAliasOps");
  }
  ::llvm::StringRef getName() const override { return "XeGPUFoldAliasOps"; }

  /// Support isa/dyn_cast functionality for the derived pass class.
  static bool classof(const ::mlir::Pass *pass) {
    return pass->getTypeID() == ::mlir::TypeID::get<DerivedT>();
  }

  /// A clone method to create a copy of this pass.
  std::unique_ptr<::mlir::Pass> clonePass() const override {
    return std::make_unique<DerivedT>(*static_cast<const DerivedT *>(this));
  }

  /// Register the dialects that must be loaded in the context before this pass.
  void getDependentDialects(::mlir::DialectRegistry &registry) const override {
    registry.insert<memref::MemRefDialect>();
    registry.insert<xegpu::XeGPUDialect>();
  }

  /// Explicitly declare the TypeID for this class. We declare an explicit private
  /// instantiation because Pass classes should only be visible by the current
  /// library.
  MLIR_DEFINE_EXPLICIT_INTERNAL_INLINE_TYPE_ID(XeGPUFoldAliasOpsBase<DerivedT>)

protected:
};
#undef GEN_PASS_CLASSES
#endif // GEN_PASS_CLASSES
