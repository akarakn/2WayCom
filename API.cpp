
#include "API.h"

#include <iostream>

API::API() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
void API::init(std::shared_ptr<I_ApiToApp> app) {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  m_app = app;
}
void API::send() { std::cout << __PRETTY_FUNCTION__ << std::endl; }
void API::receive() {
  std::cout << __PRETTY_FUNCTION__ << std::endl;
  m_app->sendApiToApp();
}