#include "tsp_solver.hpp"


bool TSPSolver::set_adj_matrix(const AdjacencyMatrix& adj, const int start_vertex)
{
    this->is_initialized = true;
    this->adj_mat = adj;
    this->start_vertex = start_vertex;
    return true;
}

bool TSPSolver::solve_tsp()
{
    if(!this->is_initialized)
        std::cout<<"Appropriate AdjacencyMatrix and StartVertex not set. Using default values!"<<std::endl;
         

    int size = this->adj_mat.get_size();

    std::vector<int> ver;     // store all vertex apart from source vertex
    for (int i = 0; i < size; i++)
        if (i != this->start_vertex)
            ver.push_back(i);
            int m_p = INT_MAX; // store minimum weight of a graph
    do {
        int cur_pth = 0;
        int k = this->start_vertex;
        for (int i = 0; i < ver.size(); i++)
        {
            cur_pth += this->adj_mat(k,ver[i]); 
            k = ver[i];
        }
        cur_pth += this->adj_mat(k,this->start_vertex);        
        m_p = std::min(m_p, cur_pth); // to update the value of minimum weight
    }
    while (next_permutation(ver.begin(), ver.end()));
    this->shortest_path_cost = m_p;

    return true;
}

/* 
// Not Implemented
// Should return a list of vertices in the order of travel.
// (Start_Vertex) --> {.....} --> (End_Vertex) 
*/
const std::vector<int> TSPSolver::get_shortest_path() const
{
   return this->traversed_vertices;
}

const int TSPSolver::get_shortest_path_cost() const
{
    return this->shortest_path_cost;
}

/* Resets all the input data and results associated with Solver */
bool TSPSolver::reset()
{
    this->traversed_vertices.clear();
    this->is_initialized = false;
    this->shortest_path_cost = 0;
    return true;
}
