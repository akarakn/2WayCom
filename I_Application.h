#pragma once

#include "I_ApiToApp.h"
#include "I_HalToApp.h"

class I_Application : public I_HalToApp, public I_ApiToApp {
 public:
  virtual void doFun() = 0;
};