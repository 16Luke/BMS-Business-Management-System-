cmake_minimum_required(VERSION 4.1.0)

enable_testing()
add_executable(roles_test roles.cpp)
target_link_libraries(roles_test PRIVATE BMS::roles GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(roles_test)
add_test(roles.cpp roles_test)