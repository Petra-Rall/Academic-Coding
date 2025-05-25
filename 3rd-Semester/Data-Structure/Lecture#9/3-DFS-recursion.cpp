#include<bits/stdc++.h>
using namespace std;

//#define N 100005

//int vis[N];
//vector<int> adj[N+1]; //adjacency list

void dfs(int u, vector<int> adj[], vector<int> &vis, vector<int> &seq){
    if(vis[u]) return;

    vis[u] = 1; // node is visited
    seq.push_back(u);
    for(int v: adj[u]){
        dfs(v, adj, vis, seq);
    }

}

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
    
    int src = 1;
    vector<int> vis(n + 1, 0);
    vector<int> seq;
    dfs(src, adj, vis, seq);

    cout << "DFS Traversal: ";
    for(int i = 0; i< seq.size(); i++){
        cout << seq[i] << " ";
    }
    return 0;
}

//Space Complexity: Approx O(n)
//Time Complexity: Nodes + summation of degrees = O(n) + (2*E) 
//