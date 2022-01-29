cmake_minimum_required(VERSION 3.0.0)
project(AsciiDecoder VERSION 0.2.0)

include(CTest)
enable_testing()

add_executable(AsciiDecoder src/main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
