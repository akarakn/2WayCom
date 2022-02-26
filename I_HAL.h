#pragma once

#include <memory>

#include "I_HalToApp.h"

class I_HAL {
 public:
  virtual void init(std::shared_ptr<I_HalToApp> app) = 0;
  virtual void send() = 0;
  virtual void receive() = 0;
  std::shared_ptr<I_HalToApp> m_app = nullptr;
};