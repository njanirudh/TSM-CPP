#include "TSPSolver.hpp"


bool TSPSolver::set_adj_matrix(const AdjacencyMatrix& adj)
{
    this->adj_mat = adj;
    return true;
}

bool TSPSolver::solve_tsp()
{
    return true;
}

void TSPSolver::get_shortest_path() const
{

}

const int TSPSolver::get_shortest_path_cost() const
{
    return this->shortest_path_cost;
}

bool TSPSolver::reset()
{
    this->shortest_path_cost = 0;
    return true;
}
