project(BMS-Network
        LANGUAGES CXX
        DESCRIPTION "Network functions for BMS")
add_library(utils STATIC ./src/utils.cpp)
target_include_directories(utils PUBLIC ./include)
add_library(BMS::net ALIAS net)