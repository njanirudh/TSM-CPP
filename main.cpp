#include <iostream>

#include "src/CLI11.hpp"


/*
Travelling Saleman Problem (TSP)
*/

#include "src/adjacency_matrix.hpp"

int main(int argc, char** argv) {

    CLI::App app{"TSP Solver v1.0 \n@author Anirudh \nanijaya9@gmail.com \n"};

    // AdjacencyMatrix adj_matrix;    
    // // adj_matrix.delete_edge(0,1);
    // adj_matrix.add_vertex();
    // std::cout<< adj_matrix <<std::endl;
    // adj_matrix.delete_vertex(3);
    // std::cout<< adj_matrix <<std::endl;
    
    CLI11_PARSE(app, argc, argv);
    return 0;

}
