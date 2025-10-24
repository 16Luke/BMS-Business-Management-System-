cmake_minimum_required(VERSION 4.1.0)
project(BMS-Business-Management-System)

add_executable(BMS main.cpp)
target_link_libraries(BMS PRIVATE BMS::roles)