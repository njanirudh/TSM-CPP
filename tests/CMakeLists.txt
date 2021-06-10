enable_language(CXX)

include_directories(
   ${PROJECT_SOURCE_DIR}/src
)

file(GLOB source_files
"${PROJECT_SOURCE_DIR}/tests/tspsolver_test.cpp"
"${PROJECT_SOURCE_DIR}/tests/adjmatrix_test.cpp"
)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_library(Catch2_main STATIC ${PROJECT_SOURCE_DIR}/tests/test_main.cpp)
add_library(AdjMatrixLib STATIC ${PROJECT_SOURCE_DIR}/src/adjacency_matrix.cpp ${PROJECT_SOURCE_DIR}/src/adjacency_matrix.hpp)
add_library(TSPLib STATIC ${PROJECT_SOURCE_DIR}/src/tsp_solver.cpp ${PROJECT_SOURCE_DIR}/src/tsp_solver.hpp)

add_executable(AdjMatrixTest "${PROJECT_SOURCE_DIR}/tests/adjmatrix_test.cpp")
add_test(NAME adjmatrixlibtest COMMAND AdjMatrixTest) 
target_link_libraries(AdjMatrixTest PRIVATE AdjMatrixTest Catch2_main)

add_executable(TSPSolverTest "${PROJECT_SOURCE_DIR}/tests/operations_test.cpp")
add_test(NAME tspsolverlibtest COMMAND TSPSolverTest) 
target_link_libraries(TSPSolverTest PRIVATE TSPLib AdjMatrixTest Catch2_main)
