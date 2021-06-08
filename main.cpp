#include <iostream>


/*
Travelling Saleman Problem (TSP)
*/

#include "src/adjacency_matrix.hpp"

int main(int, char**) {
    AdjacencyMatrix adj_matrix;    
    adj_matrix.delete_vertex(2);
    std::cout<< adj_matrix <<std::endl;
}
