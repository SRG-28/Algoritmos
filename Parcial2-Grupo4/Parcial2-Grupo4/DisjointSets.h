#pragma once
class DisjointSets {
private:
    int* parent, * rnk;
    int n;
public:
    DisjointSets(int n);
    int find(int u);
    void merge(int x, int y);
};

