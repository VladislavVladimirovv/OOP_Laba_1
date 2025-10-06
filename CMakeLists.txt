cmake_minimum_required(VERSION 3.10)
project(OOP_Laba_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(main src/main.cpp src/turkish_converter.cpp)

add_executable(tests tests/tests.cpp src/turkish_converter.cpp)
target_link_libraries(tests gtest gtest_main pthread)

enable_testing()
add_test(NAME TurkishUnitTests COMMAND tests)