//-----------------------------------------------------------------------------
// README.md
// Joshua Barsky
// jbarsky
// pa3
//-----------------------------------------------------------------------------
    README:

    This program finds the strongly connected components (SCCs) of a directed graph using Depth-First Search (DFS).

    Usage:

    - Compile: Use the provided Makefile with the command `make`.
    - Run: Execute the program with the input and output files as arguments.
        Example: ./FindComponents <input> <output>
        
    Files:
    - README.md
    - Makefile
    - List.h
    - List.c
    - Graph.h
    - Graph.c
    - GraphTest.c
    - FindComponents.c

    Input Format:

    - The input file should contain:
        - The number of vertices in the graph.
        - Pairs of numbers indicating directed edges, ending with "0 0".
        
       Example Input File Contents:
       	8
	1 2
	2 3
	2 5
	2 6
	3 4
	3 7
	4 3
	4 8
	5 1
	5 6
	6 7
	7 6
	7 8
	8 8
	0 0


    Output:

    - The program prints the graph's adjacency list followed by its SCCs.
    
    Example Output File Contents:
    Adjacency list representation of G:
	1: 2 
	2: 3 5 6 
	3: 4 7 
	4: 3 8 
	5: 1 6 
	6: 7 
	7: 6 8 
	8: 8 

	G contains 4 strongly connected components:
	Component 1: 1 5 2
	Component 2: 3 4
	Component 3: 6 7
	Component 4: 8

    

