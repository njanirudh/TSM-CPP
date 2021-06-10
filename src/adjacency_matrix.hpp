/**
 * AdjacencyMatrix Class
 *
 * @author Anirudh Narasimamurthy Jayasimha
 * Contact: anijaya9@gmail.com
 */

#ifndef INCLUDE_ADJ_MATRIX_HPP
#define INCLUDE_ADJ_MATRIX_HPP

#include <vector> //vector
#include <iostream> // cout, endl

/*!
Matrix datastructure
Weights of the graph are stored as a vector of vector of int.
A general template class can also be created to store weights as other numerical values.
*/
using Vector2D = std::vector<std::vector<int>>;

/*
@brief AdjacencyMatrix class to store the weighted graph and 
perform vertex and edge addition, editing, deletion.

@requirement The class satisfies the following concept requirements:
- Basic
 - [MoveConstructible](https://en.cppreference.com/w/cpp/named_req/MoveConstructible):
   A AdjacencyMatrix value can be constructed from an rvalue argument.
 - [CopyConstructible](https://en.cppreference.com/w/cpp/named_req/CopyConstructible):
   A AdjacencyMatrix value can be copy-constructed from an lvalue expression.
 - [Destructible](https://en.cppreference.com/w/cpp/named_req/Destructible):
   AdjacencyMatrix values can be destructed.
*/

class AdjacencyMatrix
{

    private:        
        // Initalizes to a default 4 Vortex graph
        // https://www.geeksforgeeks.org/wp-content/uploads/Euler12-300x225.png
        Vector2D data;

        friend std::ostream &operator<<(std::ostream &os, const AdjacencyMatrix &p);

        // AdjMatrix comparison
        friend bool operator==(const AdjacencyMatrix &lhs, const AdjacencyMatrix &rhs);
        friend bool operator!=(const AdjacencyMatrix &lhs, const AdjacencyMatrix &rhs);

    public:
        AdjacencyMatrix();
        AdjacencyMatrix(Vector2D vec);

        // Default constructors
        AdjacencyMatrix(const AdjacencyMatrix &) = default; // MoveConstructible
        AdjacencyMatrix(AdjacencyMatrix &&) = default;      // CopyConstructible
        ~AdjacencyMatrix() = default;              // Destructible

        int operator() (int row, int col) const;  // Access Elements
        AdjacencyMatrix& operator=(const AdjacencyMatrix&) = default;


        bool edit_edge(int row, int col, int weight);
        bool delete_edge(int row, int col);

        bool add_vertex();
        bool delete_vertex(int v);

        const int get_size() const;
        bool reset_matrix();
};

# endif