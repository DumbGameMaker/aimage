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
#include <ATen/ops/_log_softmax_backward_data_meta.h>

namespace at {
namespace native {

struct TORCH_API structured_log_softmax_backward_cpu_out : public at::meta::structured__log_softmax_backward_data {
void impl(const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, at::ScalarType input_dtype, const at::Tensor & out);
};
struct TORCH_API structured_log_softmax_backward_cuda_out : public at::meta::structured__log_softmax_backward_data {
void impl(const at::Tensor & grad_output, const at::Tensor & output, int64_t dim, at::ScalarType input_dtype, const at::Tensor & out);
};

} // namespace native
} // namespace at
