#pragma once
#include <cstdint>

namespace at {

constexpr int32_t num_sdp_backends = 5;
enum class SDPBackend {
  error = -1,
  math = 0,
  flash_attention = 1,
  efficient_attention = 2,
  cudnn_attention = 3,
  onednn_attention = 4,
  overrideable = 5
};

} // namespace at
