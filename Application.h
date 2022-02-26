#pragma once

#include <memory>

#include "I_API.h"
#include "I_Application.h"
#include "I_HAL.h"

class Application : public I_Application {
 public:
  Application(std::shared_ptr<I_API> api, std::shared_ptr<I_HAL> hal);
  void doFun() override;
  void sendHalToApp() override;
  void sendApiToApp() override;
  std::shared_ptr<I_API> m_api;
  std::shared_ptr<I_HAL> m_Hal;
};