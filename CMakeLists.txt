cmake_minimum_required(VERSION 3.8)
project(examples)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(formatter_lib)
add_subdirectory(formatter_ex_lib)
add_subdirectory(solver_lib)

add_executable(solver ${CMAKE_CURRENT_SOURCE_DIR}/solver_application/equation.cpp)
add_executable(hello_world ${CMAKE_CURRENT_SOURCE_DIR}/hello_world_application/hello_world.cpp)

target_link_libraries(solver formatter_ex solver_lib)
target_link_libraries(hello_world formatter_ex)


