#include <iostream>


/*
Travelling Saleman Problem (TSP)
*/

#include "src/adjacency_matrix.hpp"

int main(int, char**) {
    AdjacencyMatrix adj_matrix;    
    // adj_matrix.delete_edge(0,1);
    adj_matrix.add_vertex();
    std::cout<< adj_matrix <<std::endl;
    adj_matrix.delete_vertex(3);
    std::cout<< adj_matrix <<std::endl;
}
