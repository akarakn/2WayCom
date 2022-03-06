#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "../API.h"
#include "../Application.h"
#include "../HAL.h"

using ::testing::AtLeast;
using ::testing::AtMost;

class Mock_API : public I_API {
 public:
  MOCK_METHOD(void, init, (std::shared_ptr<I_ApiToApp> app), (override));
  MOCK_METHOD(void, send, (), (override));
  MOCK_METHOD(void, receive, (), (override));
};

class Mock_HAL : public I_HAL {
 public:
  MOCK_METHOD(void, init, (std::shared_ptr<I_HalToApp> app), (override));
  MOCK_METHOD(void, send, (), (override));
  MOCK_METHOD(void, receive, (), (override));
};

TEST(test_Application, sendHalToApp_test) {
  auto mock_api = std::make_shared<Mock_API>();
  auto mock_hal = std::make_shared<Mock_HAL>();

  auto uat = std::make_shared<Application>(mock_api, mock_hal);
  mock_api->init(uat);
  mock_hal->init(uat);

  EXPECT_CALL(*mock_api, send()).Times(AtMost(1));
  uat->sendHalToApp();
}

TEST(test_Application, sendApiToApp_test) {
  auto mock_api = std::make_shared<Mock_API>();
  auto mock_hal = std::make_shared<Mock_HAL>();

  auto uat = std::make_shared<Application>(mock_api, mock_hal);
  mock_api->init(uat);
  mock_hal->init(uat);

  EXPECT_CALL(*mock_hal, send()).Times(AtMost(1));
  uat->sendApiToApp();
}