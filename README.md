//-----------------------------------------------------------------------------
// README.md
// Joshua Barsky
// jbarsky
// pa4
//-----------------------------------------------------------------------------
    README:

    This program manupilates sparse matricies by arithmetic operation and prints their output.
    
    Usage:

    - Compile: Use the provided Makefile with the command `make`.
    - Run: Execute the program with the input and output files as arguments.
        Example: ./Sparse <input> <output>
        
    Files:
   	-Sparse.c 
   	-Matrix.c
   	-Matrix.h 
   	-MatrixTest.c 
   	-List.c 
   	-List.h 
   	-ListTest.c 
   	-README.md 
   	-Makefile

    Input Format:

    - The input file should contain:
        - matrix entry row, column, and value
        
       Example Input File Contents:
       	3 9 5

		1 1 1.0
		1 2 2.0
		1 3 3.0
		2 1 4.0
		2 2 5.0
		2 3 6.0
		3 1 7.0
		3 2 8.0
		3 3 9.0

		1 1 1.0
		1 3 1.0
		3 1 1.0
		3 2 1.0
		3 3 1.0



    Output:

    - The program prints several matrix arithmetic operation solutions.
    
    Example Output File Contents:
    A has 9 non-zero entries:
1: (1, 1.0) (2, 2.0) (3, 3.0) 
2: (1, 4.0) (2, 5.0) (3, 6.0) 
3: (1, 7.0) (2, 8.0) (3, 9.0) 

B has 5 non-zero entries:
1: (1, 1.0) (3, 1.0) 
3: (1, 1.0) (2, 1.0) (3, 1.0) 

(1.5)*A =
1: (1, 1.5) (2, 3.0) (3, 4.5) 
2: (1, 6.0) (2, 7.5) (3, 9.0) 
3: (1, 10.5) (2, 12.0) (3, 13.5) 

A+B =
1: (1, 2.0) (2, 2.0) (3, 4.0) 
2: (1, 4.0) (2, 5.0) (3, 6.0) 
3: (1, 8.0) (2, 9.0) (3, 10.0) 

A+A =
1: (1, 2.0) (2, 4.0) (3, 6.0) 
2: (1, 8.0) (2, 10.0) (3, 12.0) 
3: (1, 14.0) (2, 16.0) (3, 18.0) 

B-A =
1: (2, -2.0) (3, -2.0) 
2: (1, -4.0) (2, -5.0) (3, -6.0) 
3: (1, -6.0) (2, -7.0) (3, -8.0) 

A-A =

Transpose(A) =
1: (1, 1.0) (2, 4.0) (3, 7.0) 
2: (1, 2.0) (2, 5.0) (3, 8.0) 
3: (1, 3.0) (2, 6.0) (3, 9.0) 

A*B =
1: (1, 4.0) (2, 3.0) (3, 4.0) 
2: (1, 10.0) (2, 6.0) (3, 10.0) 
3: (1, 16.0) (2, 9.0) (3, 16.0) 

B*B =
1: (1, 2.0) (2, 1.0) (3, 2.0) 
3: (1, 2.0) (2, 1.0) (3, 2.0) 
