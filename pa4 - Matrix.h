//-----------------------------------------------------------------------------
// Matrix.h
// Joshua Barsky
// jbarsky
// pa4
// Header file for the Matrix ADT
//-----------------------------------------------------------------------------

#ifndef MATRIX_H_INCLUDED_
#define MATRIX_H_INCLUDED_

#include <stdio.h>

typedef struct MatrixObj* Matrix;

// Constructors-Destructors ---------------------------------------------------

Matrix newMatrix(int n); // Returns a reference to a new nXn Matrix object.
void freeMatrix(Matrix* pM); // Frees heap memory associated with *pM, sets *pM to NULL.

// Access functions -----------------------------------------------------------

int size(Matrix M); // Returns n, the number of rows and columns of M.
int NNZ(Matrix M); // Returns the number of non-zero elements in M.
int equals(Matrix A, Matrix B); // Returns true (1) if matrices A and B are equal, false (0) otherwise.

// Manipulation procedures ----------------------------------------------------

void makeZero(Matrix M); // Resets M to the zero state.
void changeEntry(Matrix M, int i, int j, double x); // Changes the i-th row, j-th column of M to x.
Matrix copy(Matrix A); // Returns a reference to a new Matrix object having the same entries as A.

// Matrix Arithmetic operations ------------------------------------------------

Matrix transpose(Matrix A); // Returns a reference to a new Matrix object representing the transpose of A.
Matrix scalarMult(double x, Matrix A); // Returns a reference to a new Matrix object representing x * A.
Matrix sum(Matrix A, Matrix B); // Returns a reference to a new Matrix object representing A + B.
Matrix diff(Matrix A, Matrix B); // Returns a reference to a new Matrix object representing A - B.
Matrix product(Matrix A, Matrix B); // Returns a reference to a new Matrix object representing AB.

// Other functions ------------------------------------------------------------

void printMatrix(FILE* out, Matrix M); // Prints a string representation of M to out.

#endif // MATRIX_H_INCLUDED_
