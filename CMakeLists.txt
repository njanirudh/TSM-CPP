cmake_minimum_required(VERSION 3.0.0)
project(TSP VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(TSP  main.cpp
                    src/adjacency_matrix.hpp
                    src/adjacency_matrix.cpp
                    src/TSPSolver.hpp
                    src/TSPSolver.cpp
                    src/CLI11.hpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
