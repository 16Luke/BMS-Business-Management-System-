project(BMS-Utils
        LANGUAGES CXX
        DESCRIPTION "Utility functions for BMS")
add_library(utils STATIC ./src/utils.cpp)
target_include_directories(utils PUBLIC ./include)
add_library(BMS::utils ALIAS utils)