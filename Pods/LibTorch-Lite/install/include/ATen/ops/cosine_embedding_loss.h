#pragma once

// @generated by tools/codegen/gen.py from Function.h

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



#include <ATen/ops/cosine_embedding_loss_ops.h>

namespace at {


// aten::cosine_embedding_loss(Tensor input1, Tensor input2, Tensor target, float margin=0.0, int reduction=Mean) -> Tensor
TORCH_API inline at::Tensor cosine_embedding_loss(const at::Tensor & input1, const at::Tensor & input2, const at::Tensor & target, double margin=0.0, int64_t reduction=at::Reduction::Mean) {
    return at::_ops::cosine_embedding_loss::call(input1, input2, target, margin, reduction);
}

}
