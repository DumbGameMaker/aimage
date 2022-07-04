#pragma once

// @generated by tools/codegen/gen.py from NativeFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <tuple>
#include <vector>
#include <ATen/ops/sum_meta.h>

namespace at {
namespace native {

TORCH_API at::Tensor sum(const at::Tensor & self, c10::optional<at::ScalarType> dtype=c10::nullopt);
struct TORCH_API structured_sum_out : public at::meta::structured_sum_dim_IntList {
void impl(const at::Tensor & self, at::IntArrayRef dim, bool keepdim, c10::optional<at::ScalarType> dtype, const at::Tensor & out);
};
TORCH_API at::Tensor sum(const at::Tensor & self, at::DimnameList dim, bool keepdim=false, c10::optional<at::ScalarType> dtype=c10::nullopt);
TORCH_API at::Tensor & sum_out(const at::Tensor & self, at::DimnameList dim, bool keepdim, c10::optional<at::ScalarType> dtype, at::Tensor & out);

} // namespace native
} // namespace at
