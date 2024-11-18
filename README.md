
# TSP Solver v1.0 
Simple program to solve a Travelling Salesman problem written in modern C++.  
The program has two main classes:  
1). AdjacencyMatrix : Datastructure to create, store or edit an adjacency matrix and 
2). TSPSolver : Class that runs a brute force approach to find the minimum path. 

Example usages are given in the 'main.hpp' and 'tests/' folder.

We run TSP on a simple [example weighted graph](https://www.geeksforgeeks.org/traveling-salesman-problem-tsp-implementation/) denoted by an adjacency matrix.           
`{{ 0, 10, 15, 20 },`
` { 10, 0, 35, 25 },`
` { 15, 35, 0, 30 },`
` { 20, 25, 30, 0 }}`

Due to time constraints of the project the following features were not added:     
1. Commandline Utils
2. Other Algorithms for solving TSP (Synamic Programming etc).
3. Output the smallest path nodes.

### Build (Tested on Ubuntu 20)
```
$ cd <path to project>/TSP-CPP
$ cd build/
$ cmake ../
$ make -j6
```

Three binaries are generated inside '<path to project>/build/bin'.     
'TSP' : General TSP Solver,    
'AdjMatrixTest' : Tests for AdjacencyMatrix class,    
'TSPSolverTest' : Tests for TSPSolver class,    
You can run the exe using './TSP'.

### Libraries Used
[CLIUtils](https://github.com/CLIUtils/CLI11) - Header only commandline utils for C++     
[Catch2](https://github.com/catchorg/Catch2) - Testing framework

### References
1. https://www.youtube.com/watch?v=cY4HiiFHO1o
2. https://www.tutorialspoint.com/cplusplus-program-to-implement-adjacency-matrix
3. https://isocpp.org/wiki/faq/operator-overloading#matrix-subscript-op
4. https://www.geeksforgeeks.org/traveling-salesman-problem-tsp-implementation/
5. https://github.com/nlohmann/json

### Author
Anirudh NJ     
anijaya9@gmail.com     
https://github.com/njanirudh      
