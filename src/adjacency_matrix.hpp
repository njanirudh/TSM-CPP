/**
 * Matrix Class
 *
 * @author Anirudh Narasimamurthy Jayasimha
 * Contact: anijaya9@gmail.com
 */

#ifndef INCLUDE_ADJ_MATRIX_HPP
#define INCLUDE_ADJ_MATRIX_HPP

#include <vector> //vector
#include <iostream> // cout, endl

using Vector2D = std::vector<std::vector<int>>;

class AdjacencyMatrix
{

    private:        
        // Initalizes to a default 4 Vortex graph
        // https://www.geeksforgeeks.org/wp-content/uploads/Euler12-300x225.png
        Vector2D data;

        friend std::ostream &operator<<(std::ostream &os, const AdjacencyMatrix &p);

    public:
        AdjacencyMatrix();
        AdjacencyMatrix(Vector2D vec);

        // Default constructors
        AdjacencyMatrix(const AdjacencyMatrix &) = default; // MoveConstructible
        AdjacencyMatrix(AdjacencyMatrix &&) = default;      // CopyConstructible
        ~AdjacencyMatrix() = default;              // Destructible

        int operator() (int row, int col) const;  
        AdjacencyMatrix& operator=(const AdjacencyMatrix&) = default;


        bool edit_edge(int row, int col, int weight);
        bool delete_edge(int row, int col);

        bool add_vertex();
        bool delete_vertex(int v);

        bool reset_matrix();
};

# endif