#include "catch.hpp"

#include <iostream>
#include "tsp_solver.hpp"
#include "adjacency_matrix.hpp"

TEST_CASE("TSP Solver", "[TSP Solver]")
{
  SECTION("Default AdjMat")
  {
    TSPSolver tsp_solver;
    AdjacencyMatrix adj_matrix;
    tsp_solver.set_adj_matrix(adj_matrix,0);
    tsp_solver.solve_tsp(); 
    int result = tsp_solver.get_shortest_path_cost();
    REQUIRE(result == 80);
  }

  SECTION("Custom AdjMat")
  {
    TSPSolver tsp_solver;
    AdjacencyMatrix adj_matrix{{{0,3,8},{15,0,8},{30,8,0}}};
    tsp_solver.set_adj_matrix(adj_matrix,0);
    tsp_solver.solve_tsp(); 
    int result = tsp_solver.get_shortest_path_cost();
    REQUIRE(result == 31);
  }

}
