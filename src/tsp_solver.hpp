/**
 * TSP Solver Class
 *
 * @author Anirudh Narasimamurthy Jayasimha
 * Contact: anijaya9@gmail.com
 */

#ifndef INCLUDE_TSP_SOLVER_HPP
#define INCLUDE_TSP_SOLVER_HPP

#include <vector>
#include <bits/stdc++.h>

#include "adjacency_matrix.hpp"

/*
A general Brute Force method is modified in our implementation. 
https://www.geeksforgeeks.org/traveling-salesman-problem-tsp-implementation/

Extra implementation ideas:
1. We can have multiple approaches to solve TSP (Brute Force, Dynamic Programming etc.)
2. The user can select the approach to run 
        TSPSolver(AlgoType algo);
3. A Factory Class can generate a TSPSolver which is initialized in a seperate TSPRunner class.
*/

class TSPSolver{

    private:
        bool is_initialized = false; 
        int shortest_path_cost = 0;
        int start_vertex = 0;
        std::vector<int> traversed_vertices;
        AdjacencyMatrix adj_mat;

    public:
        TSPSolver() = default;  // DefaultConstructible
        TSPSolver(const TSPSolver &) = default; // MoveConstructible
        TSPSolver(TSPSolver &&) = default;      // CopyConstructible
        ~TSPSolver() = default;    // DefaultDestructible

        bool set_adj_matrix(const AdjacencyMatrix& adj, const int start_vertex);
        bool solve_tsp();
        const std::vector<int> get_shortest_path() const;
        const int get_shortest_path_cost() const;
        bool reset();

};

#endif