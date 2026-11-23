cmake_minimum_required(VERSION 3.20)
project(computer_graphics_learning LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(cg_math INTERFACE)
target_include_directories(cg_math INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/code/01-mathematics/include)

add_executable(vec3_demo code/01-mathematics/01-vec3-demo.cpp)
target_link_libraries(vec3_demo PRIVATE cg_math)

enable_testing()
add_executable(math_tests tests/01-mathematics/test_vec3.cpp)
target_link_libraries(math_tests PRIVATE cg_math)
add_test(NAME math_tests COMMAND math_tests)
