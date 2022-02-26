
#include "HAL.h"

#include <iostream>

HAL::HAL() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
void HAL::init(std::shared_ptr<I_HalToApp> app) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  m_app = app;
}
void HAL::send() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
void HAL::receive() {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  m_app->sendHalToApp();
}