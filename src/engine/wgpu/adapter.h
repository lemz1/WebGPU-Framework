#pragma once

#include <webgpu/webgpu.h>

#include "instance.h"

namespace engine::wgpu
{
class Adapter
{
 public:
  explicit Adapter(const Instance& instance);
  ~Adapter();

  operator WGPUAdapter() const
  {
    return _handle;
  }

 private:
  WGPUAdapter _handle;
};
}  // namespace engine::wgpu