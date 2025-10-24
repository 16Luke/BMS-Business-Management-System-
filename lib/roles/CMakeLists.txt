add_library(Roles STATIC ./src/roles.cpp)
target_include_directories(Roles PUBLIC ./include)
add_library(BMS::roles ALIAS Roles)