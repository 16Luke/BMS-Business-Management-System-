cmake_minimum_required(VERSION 3.31.6)

if(MSVC)
    # For MSVC, use level 4 warnings
    add_compile_options(/W4)
else()
    # For GCC and Clang, enable all warnings, extra warnings, and pedantic warnings
    add_compile_options(-Wall -Wextra -Wpedantic)
endif()

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.17.0.zip
)
#For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

project(BMS-Business-Management-System
        LANGUAGES CXX
        DESCRIPTION "Business Management System"
        VERSION 0.9.0)

include(GoogleTest)
include(CTest)      

add_subdirectory(app)
add_subdirectory(lib)
add_subdirectory(test)

enable_testing()

