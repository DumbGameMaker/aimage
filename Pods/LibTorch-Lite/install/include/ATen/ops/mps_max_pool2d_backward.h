#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/mps_max_pool2d_backward_ops.h>

namespace at {


// aten::mps_max_pool2d_backward(Tensor grad_output, Tensor self, int[2] kernel_size, int[2] stride=[], int[2] padding=0, int[2] dilation=1, bool ceil_mode=False) -> Tensor
TORCH_API inline at::Tensor mps_max_pool2d_backward(const at::Tensor & grad_output, const at::Tensor & self, at::IntArrayRef kernel_size, at::IntArrayRef stride={}, at::IntArrayRef padding=0, at::IntArrayRef dilation=1, bool ceil_mode=false) {
    return at::_ops::mps_max_pool2d_backward::call(grad_output, self, kernel_size, stride, padding, dilation, ceil_mode);
}

}
