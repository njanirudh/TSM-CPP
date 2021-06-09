/**
 * TSP Solver Class
 *
 * @author Anirudh Narasimamurthy Jayasimha
 * Contact: anijaya9@gmail.com
 */

#ifndef INCLUDE_TSP_SOLVER_HPP
#define INCLUDE_TSP_SOLVER_HPP

#include "adjacency_matrix.hpp"

class TSPSolver{

    private:
        int shortest_path_cost;
        AdjacencyMatrix adj_mat;

    public:
        TSPSolver() = default;
        TSPSolver(const TSPSolver &) = default; // MoveConstructible
        TSPSolver(TSPSolver &&) = default;      // CopyConstructible
        ~TSPSolver() = default;    

        bool set_adj_matrix(const AdjacencyMatrix& adj);
        bool solve_tsp();
        void get_shortest_path() const;
        const int get_shortest_path_cost() const;
        bool reset();

};

#endif