cmake_minimum_required(VERSION 3.10)

project(Practice03_2026)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_compile_options(-Wall -Werror -Wextra -O2)
add_subdirectory(sorting_algorithms)
add_subdirectory(search_algorithms)
add_subdirectory(recursive_algorithms)

