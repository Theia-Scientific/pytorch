#ifndef TORCH_CSRC_INDUCTOR_CPP_WRAPPER_AOTI_COMMON
#define TORCH_CSRC_INDUCTOR_CPP_WRAPPER_AOTI_COMMON

#include <filesystem>
#include <optional>

#include <torch/csrc/inductor/aoti_runtime/interface.h>
#include <torch/csrc/inductor/aoti_runtime/model.h>

#include <c10/util/generic_math.h>
#include <torch/csrc/inductor/aoti_runtime/scalar_to_tensor.h>
using half = at::Half;
using bfloat16 = at::BFloat16;

// Round up to the nearest multiple of 64
[[maybe_unused]] inline int64_t align(int64_t nbytes) {
  return (nbytes + 64 - 1) & -64;
}

#include <torch/csrc/inductor/cpp_prefix.h>

#endif // TORCH_CSRC_INDUCTOR_CPP_WRAPPER_AOTI_COMMON
