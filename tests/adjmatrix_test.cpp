#include "catch.hpp"

#include <iostream>

#include "adjacency_matrix.hpp"

TEST_CASE("Adjacency Matrix constructor", "[constructor]")
{
  SECTION("Default Construction"){
    AdjacencyMatrix adj_mat;
    REQUIRE(adj_mat == AdjacencyMatrix{{{0, 10, 15, 20},
                                        {10, 0, 35, 25},
                                        {15, 35, 0, 30},
                                        {20, 25, 30, 0}}});
  }

  SECTION("New Adj Construction"){
    AdjacencyMatrix adj_mat{{{0,1,2},{1,0,2},{1,2,0}}};
    REQUIRE(adj_mat == AdjacencyMatrix{{{0,1,2},{1,0,2},{1,2,0}}});
  }
}

TEST_CASE("Adjacency Matrix Modification", "[edit/delete]")
{
  SECTION("Delete Vertex"){
    AdjacencyMatrix adj_mat;
    adj_mat.delete_vertex(2);
    REQUIRE(adj_mat == AdjacencyMatrix{{{0, 10, 20},
                                        {10, 0, 25},
                                        {20, 25, 0}}});
  }

  SECTION("Add Vertex"){
    AdjacencyMatrix adj_mat;
    adj_mat.add_vertex();
    REQUIRE(adj_mat.get_size() == 5);
  }

  SECTION("Access Edge"){
    AdjacencyMatrix adj_mat;
    REQUIRE(adj_mat(1,2) == 35);
  }

  SECTION("Delete Edge"){
    AdjacencyMatrix adj_mat;
    adj_mat.delete_edge(1,2);
    REQUIRE(adj_mat(1,2) == 0);
  }

  SECTION("Edit Edge"){
    AdjacencyMatrix adj_mat;
    adj_mat.edit_edge(1,2,11);
    REQUIRE(adj_mat(1,2) == 11);
  }
}
