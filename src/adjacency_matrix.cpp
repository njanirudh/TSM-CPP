#include "adjacency_matrix.hpp"

AdjacencyMatrix::AdjacencyMatrix()
{

}

int& AdjacencyMatrix::operator() (int row, int col)
{
  return this->data[row][col];
}

int AdjacencyMatrix::operator() (int row, int col) const
{
  return this->data[row][col];
}


std::ostream &operator<<(std::ostream &os, const AdjacencyMatrix &p)
{
    for (auto const row : p.data)
    {
        for (auto const value : row)
        {
            os << value << " ";
        }
        os << std::endl;
    }
    return os;
}

bool AdjacencyMatrix::edit_edge(int row, int col, int weight)
{
    this->data[row][col] = weight;
    return 1;
}

// https://www.cplusplus.com/forum/beginner/31363/
bool AdjacencyMatrix::delete_edge(int row, int col)
{
   this->data[row][col] = 0;
   return 1; 
}

bool AdjacencyMatrix::delete_vertex(int v)
{
    int new_size = this->data.size() - 1;
    std::cout<< new_size << std::endl;
    return 1;
}

bool AdjacencyMatrix::reset_matrix()
{
    return 1;
}

