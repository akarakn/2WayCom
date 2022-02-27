
#include "API.h"

#include "spdlog/spdlog.h"

API::API() { SPDLOG_INFO("API object consturacted"); }
void API::init(std::shared_ptr<I_ApiToApp> app) {
  m_app = app;
  SPDLOG_INFO("{} called", __FUNCTION__);
}
void API::send() { SPDLOG_INFO("{} called", __FUNCTION__); }
void API::receive() {
  SPDLOG_INFO("{} called", __FUNCTION__);
  m_app->sendApiToApp();
}