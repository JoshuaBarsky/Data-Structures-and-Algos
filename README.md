//-----------------------------------------------------------------------------
// README
// Joshua Barsky
// jbarsky
// pa2
//-----------------------------------------------------------------------------

Description:
This program implements a Graph ADT (Abstract Data Type) in C. It provides
functionalities to create a graph, add edges between vertices, perform
Breadth-First Search (BFS), and find shortest paths between vertices using BFS.

Files:
- Graph.c
- Graph.h
- List.c
- List.h
- GraphTest.c
- Makefile

Compilation:
To compile the Graph ADT and the test client program, simply run `make` in the terminal.
This will generate the executable `GraphTest`.

Usage:
1. Compile the programs using `make`.
2. Run the progam with ./FindPath <input_file> <output_file>

 Input Format:
- The first line the number of vertices in the graph.
- The subsequent lines contain pairs of vertices.
- File indicates the end of edge input with `0 0`.

 Example:
 5
 1 2
 2 3
 3 4
 4 5
 0 0
 1 4
 2 5

This input represents a graph with 5 vertices and edges between consecutive vertices.
The program will find and print the shortest paths between vertices 1 and 4, and vertices 2 and 5.