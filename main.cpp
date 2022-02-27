#include <memory>

#include "API.h"
#include "Application.h"
#include "HAL.h"
#include "spdlog/spdlog.h"

int main(int, char**) {
  SPDLOG_INFO("Starting");
  auto my_api = std::make_shared<API>();
  auto my_hal = std::make_shared<HAL>();

  auto my_app = std::make_shared<Application>(my_api, my_hal);
  my_api->init(my_app);
  my_hal->init(my_app);
  my_hal->receive();
  my_api->receive();
  SPDLOG_INFO("Ending");
}
