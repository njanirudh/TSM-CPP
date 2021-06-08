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

#define DEFAULT_SIZE = 4;

using Vector2D = std::vector<std::vector<int>>;

class AdjacencyMatrix
{

    private:
        int start_point = 0;
        
        // Initalizes to a default 4 Vortex graph
        // https://www.geeksforgeeks.org/wp-content/uploads/Euler12-300x225.png
        Vector2D data;

        friend std::ostream &operator<<(std::ostream &os, const AdjacencyMatrix &p);

    public:
        AdjacencyMatrix();
        AdjacencyMatrix(Vector2D vec);

        int operator() (int row, int col) const;  

        bool edit_edge(int row, int col, int weight);

        bool delete_edge(int row, int col);
        bool delete_vertex(int v);
        bool add_vertex();

        bool reset_matrix();

};

# endif