cmake_minimum_required(VERSION 3.0.0)
project(2WayCom VERSION 0.1.0)

include(CTest)
enable_testing()

file(GLOB ALL_SRC
     "*.cpp"
)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

find_package(spdlog)
add_executable(2WayCom ${ALL_SRC})
target_link_libraries(2WayCom spdlog::spdlog)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
