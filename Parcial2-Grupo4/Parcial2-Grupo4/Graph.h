#pragma once
#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>
#include "DisjointSets.h"
#include "Utiles.h"
#include<string>
using namespace std;
#define INF 0x3f3f3f3f
typedef pair<int, int> iPair;

class Graph {
private:
    int V, E;
    vector<iPair>* adj;
    vector<pair<int, iPair>> edges;
    list< pair<int, int> >* adjPrim;
public:
    Graph(int V, int E);
    void addEdge(int u, int v, int wt);
    void shortestPath(int src);
    int kruskalMST();
    void primMST();
    void printPrim(vector<int>parent, vector<int>key);
};

