#pragma once
#include "I_HAL.h"

class HAL : public I_HAL {
 public:
  HAL();
  void init(std::shared_ptr<I_HalToApp> app) override;
  void send() override;
  void receive() override;
};