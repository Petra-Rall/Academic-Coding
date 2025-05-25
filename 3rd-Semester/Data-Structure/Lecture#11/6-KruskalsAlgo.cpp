#include<bits/stdc++.h>
using namespace std;

//Disjoint Set Union (Union by Rank + Path compression)
class DisjointSet{
    vector<int> parent, rank;

public:
    DisjointSet(int n){
        parent.resize(n);
        rank.resize(n, 0);
        for(int i = 0; i < n; i++) parent[i] = i;
        
    }

    //path compression
    int find(int u){
        if(parent[u] != u){
            parent[u] = find(parent[u]); 
        }
        return parent[u];
    }

    void unionByRank(int u, int v){
        int rootU = find(u);
        int rootV = find(v);

        if(rank[rootU] < rank[rootV]){
            parent[rootU] = rootV;
        }
        else if(rank[rootV] < rank[rootU]){
            parent[rootV] = rootU;
        }
        else{
            parent[rootV] = rootU;
            rank[rootU]++;
        }
    }
};


int SpanningTree(int n, vector<vector<int>> adj[], vector<tuple<int, int, int>> &mstEdges){
    vector<pair<int, pair<int, int>>> edges;
    for(int i = 0; i < n; i++){
        for(auto it: adj[i]){
            int adjNode = it[0];
            int wt = it[1];
            int node = i;

            // since it's a bidirectional graph, an edge will be entered twice
            // but since we'll use disjoint set, it won't store duplicate edges

            //but we also want to show the connected nodes so we'll avoid adding duplicate edges,
            //otherwise we could've push without any if statement
            if(node < adjNode){ // to avoid duplicate undirected edges
                edges.push_back({wt, {node, adjNode}});
            }
        }
    }
    //sort edges by weight
    sort(edges.begin(), edges.end());

    DisjointSet ds(n);
    int mstWt = 0;

    for(auto it: edges){
        int wt = it.first;
        int u = it.second.first;
        int v = it.second.second;

        // Check if u and v are in different components
        if(ds.find(u) != ds.find(v)){
            mstWt += wt;
            ds.unionByRank(u, v);
            mstEdges.push_back({u, v, wt});
        }
    }

    return mstWt;
}

int main(){

    int n, e, u, v, w;
    cin >> n;
    cin >> e; 

    vector<vector<int>> adj[n];
    for(int i = 0; i < e; i++){
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); 
        adj[v].push_back({u, w});
    }

    vector<tuple<int, int, int>> mstEdges;
    int mstWeight = SpanningTree(n, adj, mstEdges);
    cout << "\nMST Total Weight: " << mstWeight << endl;
    cout << "\nEdges in MST:\n";
    for(auto &[u, v, w] : mstEdges) {
        cout << u << " - " << v << " (weight: " << w << ")\n";
    }
    cout << endl;

    return 0;
}
/*
test case:
5 6
0 1 2
0 3 6
1 2 3
1 3 8
1 4 5
2 4 7
mst = 16
*/