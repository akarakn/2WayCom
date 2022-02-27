
#include "Application.h"

#include <memory>

#include "spdlog/spdlog.h"

Application::Application(std::shared_ptr<I_API> api, std::shared_ptr<I_HAL> hal)
    : m_api(api), m_Hal(hal) {
  SPDLOG_INFO("Aplication object consturacted");
}

void Application::doFun() { SPDLOG_INFO("{} called", __FUNCTION__); }

void Application::sendHalToApp() {
  SPDLOG_INFO("{} called", __FUNCTION__);

  m_api->send();
}
void Application::sendApiToApp() {
  SPDLOG_INFO("{} called", __FUNCTION__);
  m_Hal->send();
}