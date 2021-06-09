#include "adjacency_matrix.hpp"

AdjacencyMatrix::AdjacencyMatrix()
{
    this->reset_matrix();
}

AdjacencyMatrix::AdjacencyMatrix(Vector2D vec2d) : data(vec2d)
{

}

int AdjacencyMatrix::operator() (int row, int col) const
{
  return this->data.at(row).at(col);
}

std::ostream &operator<<(std::ostream &os, const AdjacencyMatrix &p)
{
    for (auto const row : p.data)
    {
        for (auto const value : row)
        {
            // Pretty visualization
            if (value == 0){os << value << "  ";}
            else{os << value << " ";}
                
        }
        os << std::endl;
    }
    return os;
}

bool AdjacencyMatrix::edit_edge(int row, int col, int weight)
{
    // Assuming no self connections
    if (row != col)
    {
        this->data.at(row).at(col) = weight;
        return true;
    }
    return false;
}

bool AdjacencyMatrix::delete_edge(int row, int col)
{
   this->data.at(row).at(col) = 0;
   return true; 
}

bool AdjacencyMatrix::delete_vertex(int index)
{
    // Remove rows
    this->data.erase(this->data.begin() + index);

    // Remove column
    for (auto& row : this->data)
    {
        row.erase(row.begin() + index);
    } 

    return true;
}

bool AdjacencyMatrix::add_vertex()
{
    int size = this->data.size();
    // Add an extra column with weights 0
    for (auto&row : this->data)
    {
        row.push_back(0);
    }
    
    // Add extra row with 0 weight
    this->data.push_back(std::vector<int>(size+1, 0));
    return true;
}

bool AdjacencyMatrix::reset_matrix()
{
    this->data = {{0, 10, 15, 20},
            {10, 0, 35, 25},
            {15, 35, 0, 30},
            {20, 25, 30, 0}};
    return true;
}

