project(BMS-Network
        LANGUAGES CXX
        DESCRIPTION "Network functions for BMS")
add_library(net STATIC ./src/net.cpp)
target_include_directories(net PUBLIC ./include)
add_library(BMS::net ALIAS net)