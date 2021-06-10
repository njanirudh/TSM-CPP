cmake_minimum_required(VERSION 3.0.0)
project(TSP VERSION 0.1.0)

include(CTest)
enable_testing()
add_subdirectory(tests)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(TSP  main.cpp
                    src/adjacency_matrix.hpp
                    src/adjacency_matrix.cpp
                    src/tsp_solver.hpp
                    src/tsp_solver.cpp
                    src/CLI11.hpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
