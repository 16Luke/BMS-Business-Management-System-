cmake_minimum_required(VERSION 4.1.0)

project(BMS-Business-Management-System)
enable_language(CXX)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-Wall)

add_subdirectory(app)
add_subdirectory(lib)

