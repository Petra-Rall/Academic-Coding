#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, e, u, v;
    cin >> n; // number of nodes
    cin >> e; // number of edges
    vector<int> adj[n + 1];
    for (int i = 0; i < e; i++){
        cin >> u >> v;
        // there is an edge between u and v
        adj[u].push_back(v); // v is an adjacent node of u
        adj[v].push_back(u); // u is an adjacent node of v
    }
    for (int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }

    vector<int> vis(n + 1, 0); // n+1 elements initialized with 0
    vector<int> seq;           // initialized with all 0
    vector<int> level(n + 1, 0);
    queue<int> q;

    int src = 1;  // starting bfs from node 1
    vis[src] = 1; // source node is visited by default
    seq.push_back(src);
    level[src] = 0; // level of source node is 0
    q.push(src);

    while (!q.empty()){
        int u = q.front();
        q.pop();

        for (int v : adj[u]){ // iterating over the list of adjacent nodes
            if (vis[v]){
                continue; // node v is already visited
            }
            level[v] = level[u] + 1;
            vis[v] = 1;
            seq.push_back(v);
            q.push(v);
        }
    }

    /////////////////////////////////////////////////
    cout << "BFS Traversal: ";
    for (int i = 0; i < seq.size(); i++){
        cout << seq[i] << " ";
    }

    return 0;
}