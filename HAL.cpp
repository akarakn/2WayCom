
#include "HAL.h"

#include "spdlog/spdlog.h"

HAL::HAL() { SPDLOG_INFO("API object consturacted"); }
void HAL::init(std::shared_ptr<I_HalToApp> app) {
  SPDLOG_INFO("{} called", __FUNCTION__);
  m_app = app;
}
void HAL::send() { SPDLOG_INFO("{} called", __FUNCTION__); }
void HAL::receive() {
  SPDLOG_INFO("{} called", __FUNCTION__);
  m_app->sendHalToApp();
}