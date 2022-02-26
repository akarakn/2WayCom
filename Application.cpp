
#include "Application.h"

#include <iostream>
#include <memory>

Application::Application(std::shared_ptr<I_API> api, std::shared_ptr<I_HAL> hal)
    : m_api(api), m_Hal(hal) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Application::doFun() { std::cout << __PRETTY_FUNCTION__ << std::endl; }

void Application::sendHalToApp() {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  m_api->send();
}
void Application::sendApiToApp() {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  m_Hal->send();
}