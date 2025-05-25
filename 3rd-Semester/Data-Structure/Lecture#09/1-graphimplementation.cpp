#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e, u, v;
    cin >> n; // number of nodes
    cin >> e; // number of edges
    vector<int> adj[n+1];
    for(int i = 0; i < e; i++){
        cin >> u >> v;
        //there is an edge between u and v
        adj[u].push_back(v); // v is an adjacent node of u
        adj[v].push_back(u); // u is an adjacent node of v
    }

    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    
    for(int i = 1; i <= n; i++){
        cout << i << "->";
        for(int j = 0; j < adj[i].size(); j++){
            cout << adj[i][j] << " ";
        } 
        cout << endl; 
    }
}

/*2D Vector (vector<vector<int>>)
Dynamic: Both dimensions (rows and columns) can be resized dynamically.
Usage: Suitable when the number of vertices is not known at compile time or can change.
Syntax: vector<vector<int>> adjList(vertices);

Array of Vectors (vector<int> adj[])
Fixed Outer Dimension: The number of rows (vertices) is fixed at compile time.
Dynamic Inner Dimension: The number of columns (edges per vertex) can change dynamically.
Usage: Suitable when the number of vertices is known and fixed at compile time.
Syntax: vector<int> adj[n+1];*/