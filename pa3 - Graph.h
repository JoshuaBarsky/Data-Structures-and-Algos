//-----------------------------------------------------------------------------
// Graph.h
// Joshua Barsky
// jbarsky
// pa3
//-----------------------------------------------------------------------------


#ifndef GRAPH_H
#define GRAPH_H

#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include "List.h"	

#define UNDEF -1
#define INF -1 //infinity 
#define NIL 0 //undefined 
#define WHITE 0
#define GRAY 1
#define BLACK 2

typedef struct GraphObj *Graph;

/*** Constructors-Destructors ***/
Graph newGraph(int n);
void freeGraph(Graph* pG);
	
/*** Access functions ***/
int getOrder(Graph G);
int getSize(Graph G);
int getSource(Graph G); //not needed in pa3
int getParent(Graph G, int u);
int getDiscover(Graph G, int u); //new for pa3
int getFinish(Graph G, int u); //new for pa3
int getDist(Graph G, int u); //not needed in pa3
void getPath(List L, Graph G, int u); //not needed in pa3
	
/*** Manipulation procedures ***/
void makeNull(Graph G); //not needed for pa3
void addEdge(Graph G, int u, int v);
void addArc(Graph G, int u, int v);
void BFS(Graph G, int s); //not needed for pa3
void DFS(Graph G, List S); //new for pa3
	
/*** Other operations ***/
void printGraph(FILE* out, Graph G);
Graph transpose(Graph G); //new for pa3
Graph copyGraph(Graph G); //new for pa3


#endif
