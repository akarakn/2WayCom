

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)
find_package(GTest)
find_package(spdlog)

add_executable(
  test_Application
  test_Application.cpp
  ../Application.cpp
)
target_link_libraries(
  test_Application
  GTest::GTest
  spdlog::spdlog
)

include(GoogleTest)
gtest_discover_tests(test_Application)