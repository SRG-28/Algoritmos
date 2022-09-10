#include "Graph.h"
Graph::Graph(int V, int E) {
    this->V = V;
    this->E = E;
    adj = new vector<iPair>[V];
    adjPrim = new list<iPair>[V];
}

void Graph::addEdge(int u, int v, int wt) {
    int vertexU = u - 65;
    int vertexV = v - 65;
    adj[vertexU].push_back(make_pair(vertexV, wt));
    adj[vertexV].push_back(make_pair(vertexU, wt));
    edges.push_back({ wt, {vertexU,vertexV} });
    adjPrim[vertexU].push_back(make_pair(vertexV, wt));
    adjPrim[vertexV].push_back(make_pair(vertexU, wt));
}

void Graph::shortestPath(int src) {
    int SRC = src - 65;
    priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
    vector<int> dist(V, INF);
    pq.push(make_pair(0, SRC));
    dist[SRC] = 0;
    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        for (auto x : adj[u]) {
            int v = x.first;
            int weight = x.second;
            if (dist[v] > dist[u] + weight) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
    cout << "Vertice     Distancia del origen\n";
    for (int i = 0; i < V; i++) {
        cout << char(i + 65) << "\t\t" << dist[i] << endl;
    }
}


int Graph::kruskalMST() {
    int mst_wt = 0;
    sort(edges.begin(), edges.end());
    DisjointSets ds(V);
    vector<pair<int, iPair>>::iterator it;
    for (it = edges.begin(); it != edges.end(); it++) {
        int u = it->second.first;
        int v = it->second.second;



        int set_u = ds.find(u);
        int set_v = ds.find(v);
        if (set_u != set_v) {
            cout << char(u + 65) << " - " << char(v + 65) << endl;
            mst_wt += it->first;
            ds.merge(set_u, set_v);
        }
    }
    return mst_wt;

}



void Graph::primMST()
{
    int src = 0;
    priority_queue< iPair, vector <iPair>, greater<iPair> > pq;
    vector<int> key(V, INF);
    vector<int> parent(V, -1);
    vector<bool> inMST(V, false);
    pq.push(make_pair(0, src));
    key[src] = 0;



    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();



        inMST[u] = true;
        list< pair<int, int> >::iterator it;
        for (it = adjPrim[u].begin(); it != adjPrim[u].end(); ++it)
        {
            int v = (*it).first;
            int weight = (*it).second;



            if (inMST[v] == false && key[v] > weight)
            {
                key[v] = weight;
                pq.push(make_pair(key[v], v));
                parent[v] = u;
            }
        }
    }
    printPrim(parent, key);
}


void Graph::printPrim(vector<int> parent, vector<int> key)
{
    cout << "Vertice-Peso: \n";
    for (int i = 1; i < V; i++) {
        cout << convertirEspecial(parent[i]) << " - " << convertirEspecial(i) << "\t" << key[i] << "\n";
    }
}



