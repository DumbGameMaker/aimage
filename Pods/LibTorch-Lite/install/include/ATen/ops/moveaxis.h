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



#include <ATen/ops/moveaxis_ops.h>

namespace at {


// aten::moveaxis.intlist(Tensor(a) self, int[] source, int[] destination) -> Tensor(a)
TORCH_API inline at::Tensor moveaxis(const at::Tensor & self, at::IntArrayRef source, at::IntArrayRef destination) {
    return at::_ops::moveaxis_intlist::call(self, source, destination);
}

// aten::moveaxis.int(Tensor(a) self, int source, int destination) -> Tensor(a)
TORCH_API inline at::Tensor moveaxis(const at::Tensor & self, int64_t source, int64_t destination) {
    return at::_ops::moveaxis_int::call(self, source, destination);
}

}
