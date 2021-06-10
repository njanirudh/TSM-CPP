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

    // Create a default adj matrix
    AdjacencyMatrix adj_matrix;    
    std::cout<< "Default Adj Matrix :" <<std::endl;
    std::cout<< adj_matrix <<std::endl;

    // TSP Solver class
    // Starting at vertex '0'
    TSPSolver tsp_solver;
    tsp_solver.set_adj_matrix(adj_matrix,0);
    tsp_solver.solve_tsp();
    int shortest_path = tsp_solver.get_shortest_path_cost();
    std::cout<< "Shortest path distance : " << tsp_solver.get_shortest_path_cost() <<std::endl; 

    // Removing an edge from Adj Matrix  
    adj_matrix.delete_edge(0,1);
    std::cout<< "Adj Matrix with (0,1) edge removed:" <<std::endl;
    std::cout<< adj_matrix <<std::endl; 

    // Deleting a vertex 
    adj_matrix.delete_vertex(3);
    std::cout<< "Adj Matrix with vertex(3) removed:" <<std::endl;
    std::cout<< adj_matrix <<std::endl; 


    // Adding a new vertex with no connections
    adj_matrix.add_vertex();
    std::cout<< "Adding a vertex withut connections:" <<std::endl;
    std::cout<< adj_matrix <<std::endl;

    // Connecting edges to the new vertex  
    adj_matrix.edit_edge(3,2,10);
    adj_matrix.edit_edge(2,3,15);
    std::cout<< "Connecting edges to the new vertex:" <<std::endl;
    std::cout<< adj_matrix <<std::endl;

    // Checking the new shortest path
    tsp_solver.reset();
    tsp_solver.set_adj_matrix(adj_matrix,0);
    tsp_solver.solve_tsp();
    std::cout<< "Shortest path distance : " << tsp_solver.get_shortest_path_cost() <<std::endl; 

    CLI11_PARSE(app, argc, argv);
    return 0;

}
