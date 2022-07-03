#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API squeeze {
  using schema = at::Tensor (const at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::squeeze")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "squeeze(Tensor(a) self) -> Tensor(a)")
  static at::Tensor call(const at::Tensor & self);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self);
};

struct TORCH_API squeeze_dim {
  using schema = at::Tensor (const at::Tensor &, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::squeeze")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dim")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "squeeze.dim(Tensor(a) self, int dim) -> Tensor(a)")
  static at::Tensor call(const at::Tensor & self, int64_t dim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, int64_t dim);
};

struct TORCH_API squeeze_dimname {
  using schema = at::Tensor (const at::Tensor &, at::Dimname);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::squeeze")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dimname")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "squeeze.dimname(Tensor(a) self, Dimname dim) -> Tensor(a)")
  static at::Tensor call(const at::Tensor & self, at::Dimname dim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::Dimname dim);
};

struct TORCH_API squeeze_ {
  using schema = at::Tensor & (at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::squeeze_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "squeeze_(Tensor(a!) self) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self);
};

struct TORCH_API squeeze__dim {
  using schema = at::Tensor & (at::Tensor &, int64_t);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::squeeze_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dim")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "squeeze_.dim(Tensor(a!) self, int dim) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self, int64_t dim);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, int64_t dim);
};

struct TORCH_API squeeze__dimname {
  using schema = at::Tensor & (at::Tensor &, at::Dimname);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::squeeze_")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "dimname")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "squeeze_.dimname(Tensor(a!) self, Dimname dim) -> Tensor(a!)")
  static at::Tensor & call(at::Tensor & self, at::Dimname dim);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, at::Tensor & self, at::Dimname dim);
};

}} // namespace at::_ops