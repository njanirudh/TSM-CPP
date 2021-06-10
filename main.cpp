/**
 * Travelling Salesman Solver v1.0
 *
 * @author Anirudh Narasimamurthy Jayasimha
 * Contact: anijaya9@gmail.com
 */

#include <iostream>

// C++ commandline library
// https://github.com/CLIUtils/CLI11 
#include "src/CLI11.hpp"

#include "src/adjacency_matrix.hpp"
#include "src/tsp_solver.hpp"

int main(int argc, char** argv) {

    CLI::App app{"TSP Solver v1.0 \n@author Anirudh \nanijaya9@gmail.com \n"};

    AdjacencyMatrix adj_matrix;    
    std::cout<< adj_matrix <<std::endl;

    TSPSolver tsp_solver;
    tsp_solver.set_adj_matrix(adj_matrix,0);
    tsp_solver.solve_tsp();
    // int shortest_path = tsp_solver.get_shortest_path_cost();
    // // adj_matrix.delete_edge(0,1);
    // adj_matrix.add_vertex();
    // std::cout<< adj_matrix <<std::endl;
    // adj_matrix.delete_vertex(3);
    std::cout<< tsp_solver.get_shortest_path_cost() <<std::endl; 

    CLI11_PARSE(app, argc, argv);
    return 0;

}
