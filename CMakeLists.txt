cmake_minimum_required(VERSION 3.31.6)

if(MSVC)
    # For MSVC, use level 4 warnings
    add_compile_options(/W4)
else()
    # For GCC and Clang, enable all warnings, extra warnings, and pedantic warnings
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

project(BMS-Business-Management-System
        LANGUAGES CXX
        DESCRIPTION "Business Management System"
        VERSION 0.9.0)

include(GoogleTest)
include(CTest)      

add_subdirectory(app)
add_subdirectory(lib)
add_subdirectory(test)
add_subdirectory(external)

enable_testing()

