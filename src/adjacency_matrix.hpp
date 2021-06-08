/**
 * Matrix Class
 *
 * @author Anirudh Narasimamurthy Jayasimha
 * Contact: anijaya9@gmail.com
 */

#ifndef INCLUDE_ADJ_MATRIX_HPP
#define INCLUDE_ADJ_MATRIX_HPP

#include <array> // array
#include <iostream> // cout, endl

#define DEFAULT_SIZE = 4;


class AdjacencyMatrix
{

    private:
        int start_point = 0;
        
        // Default 4 Vortex graph
        // https://www.geeksforgeeks.org/wp-content/uploads/Euler12-300x225.png
        std::array<std::array<int, 4>, 4> data = {{ {0, 10, 15, 20},
                                                    {10, 0, 35, 25},
                                                    {15, 35, 0, 30},
                                                    {20, 25, 30, 0}}};

        friend std::ostream &operator<<(std::ostream &os, const AdjacencyMatrix &p);

    public:
        AdjacencyMatrix();
        // auto operator[](const int &i);
        int& operator() (int row, int col);        
        int operator() (int row, int col) const;  

        bool edit_edge(int row, int col, int weight);

        bool delete_edge(int row, int col);
        bool delete_vertex(int v);

        bool reset_matrix();

};

# endif