//-----------------------------------------------------------------------------
// README
// Joshua Barsky
// jbarsky
// pa5
//-----------------------------------------------------------------------------

The Perfect Shuffle

A perfect shuffle (also called a riffle shuffle) divides a deck of cards evenly into two halves and merges them alternately, creating a new deck. This process is repeated until the deck returns to its original order. 

Shuffle.cpp, contains a function which performs one shuffle operation on the provided list. The main function reads a positive integer from the command line - the maximum number of cards in the deck. In the range of 1 to the maximum, the program performs shuffles until the deck returns to its original order, counting the number of shuffles for each respective card amount.

Usage:
Compile: make
Execute: ./Shuffle <maximum_deck_size> <optional: output_file_name>
or
Execute: ./Shuffle <maximum_deck_size> 

Files included:
-README.md 
-Makefile 
-List.h 
-List.cpp 
-ListTest.cpp 
-Shuffle.cpp


Example Input: ./Shuffle 16 out16.txt

Example File Output: 

deck size	shuffle count
------------------------------
1		1
2		2
3		2
4		4
5		4
6		3
7		3
8		6
9		6
10		10
11		10
12		12
13		12
14		4
15		4
16		8



