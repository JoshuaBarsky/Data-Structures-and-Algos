//-----------------------------------------------------------------------------
// List.h
// Joshua Barsky
// jbarsky
// pa2
// Header file for List ADT
//-----------------------------------------------------------------------------

#ifndef LIST_H_INCLUDE_
#define LIST_H_INCLUDE_

#include <stdbool.h>
#include <stdio.h>

// Structure representing the List
typedef struct ListObj* List;

// Constructors-Destructors ---------------------------------------------------
List newList(void); 
void freeList(List* pL);  // Frees all heap memory associated with *pL and sets *pL to NULL.

// Access functions -----------------------------------------------------------
int length(List L);        // Returns the number of elements in L.
int listIndex(List L);     // Returns the index of the cursor element if defined, -1 otherwise.
int front(List L);          // Returns the front element of L. PRECONDITION: length(L)>0.
int back(List L);           // Returns the back element of L. PRECONDITION: length(L)>0.
int get(List L);            // Returns the cursor element of L. PRECONDITION: length(L)>0, index(L)>=0.
bool equals(List A, List B);// Returns true iff Lists A and B contain the same order of elements, returns false otherwise.
bool isEmpty(List L);       // Returns true if L is empty, false otherwise.

// Manipulation procedures ----------------------------------------------------
void clear(List L);         // Resets L to its original empty state.
void set(List L, int x);     // Overwrites the cursor element with x. PRECONDITION: length(L)>0, index(L)>=0.
void moveFront(List L);      // If L is non-empty, sets cursor under the front element, otherwise do nothing.
void moveBack(List L);       // If L is non-empty, sets cursor under the back element, otherwise do nothing.
void movePrev(List L);       // If the cursor is defined and not at the front then move cursor one step toward the front of L, otherwise undefined.
void moveNext(List L);       // If the cursor is defined and not at the back then move cursor one step toward the back of L, otherwise undefined.
void prepend(List L, int x); // Insert a new element into L. If L is non-empty, insertion takes place before the front element.
void append(List L, int x);  // Insert a new element into L. If L is non-empty, insertion takes place after the back element.
void insertBefore(List L, int x);  // Insert a new element before the cursor. PRECONDITION: length(L)>0, index(L)>=0.
void insertAfter(List L, int x);   // Insert a new element after the cursor. PRECONDITION: length(L)>0, index(L)>=0.
void deleteFront(List L);   // Delete the front element. PRECONDITION: length(L)>0.
void deleteBack(List L);    // Delete the back element. PRECONDITION: length(L)>0.
void delete(List L);        // Delete the cursor element, making the cursor undefined. PRECONDITION: length(L)>0, index(L)>=0.

// Other operations -----------------------------------------------------------
void printList(FILE* out, List L);   // Prints string of list to the out file.
List copyList(List L);                // Returns a new List the same as L.

#endif
