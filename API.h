#pragma once
#include "I_API.h"

class API : public I_API {
 public:
  API();
  void init(std::shared_ptr<I_ApiToApp> app) override;
  void send() override;
  void receive() override;
};