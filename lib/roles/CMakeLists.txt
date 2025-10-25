project(BMS-Roles
        LANGUAGES CXX
        DESCRIPTION "Roles for the BMS"
        VERSION 0.9.0)

add_library(Roles STATIC ./src/roles.cpp)
target_include_directories(Roles PUBLIC ./include)
target_link_libraries(Roles PUBLIC BMS::utils)
add_library(BMS::roles ALIAS Roles)