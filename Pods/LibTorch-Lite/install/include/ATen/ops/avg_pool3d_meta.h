#pragma once

// @generated by tools/codegen/gen.py from NativeMetaFunction.h

#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>
#include <c10/core/QScheme.h>
#include <ATen/core/Reduction.h>
#include <ATen/TensorIterator.h>
#include <ATen/TensorMeta.h>
#include <tuple>
#include <vector>

namespace at {
namespace meta {

struct TORCH_API structured_avg_pool3d : public at::impl::MetaBase {
    
    
    void meta(const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, bool ceil_mode, bool count_include_pad, c10::optional<int64_t> divisor_override);
};

} // namespace native
} // namespace at
