/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// Get an instance of a constraint verifier for the associated operation."
/// Returns `nullptr` upon failure.
std::unique_ptr<::mlir::irdl::Constraint> mlir::irdl::VerifyConstraintInterface::getVerifier(::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs) {
      return getImpl()->getVerifier(getImpl(), getOperation(), valueToConstr, types, attrs);
  }
/// Get an instance of a constraint verifier for the associated operation."
/// Returns `nullptr` upon failure.
std::unique_ptr<::mlir::irdl::RegionConstraint> mlir::irdl::VerifyRegionInterface::getVerifier(::mlir::ArrayRef<Value> valueToConstr, ::mlir::DenseMap<::mlir::irdl::TypeOp,
        std::unique_ptr<::mlir::DynamicTypeDefinition>> const& types, ::mlir::DenseMap<::mlir::irdl::AttributeOp,
        std::unique_ptr<::mlir::DynamicAttrDefinition>> const& attrs) {
      return getImpl()->getVerifier(getImpl(), getOperation(), valueToConstr, types, attrs);
  }
