#include<bits/stdc++.h>
using namespace std;

void dfs(int u, vector<int> adj[], vector<int> &vis, vector<int> &seq){
    if(vis[u]) return;
    vis[u] = 1;
    seq.push_back(u);
    for(int v: adj[u]){
        dfs(u, adj, vis, seq);
    }
}

int main(){
    int e, n, u, v;
    cin >> e >> n;

    vector<int> adj[n+1];

    for(int i = 0; i < e; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i = 1; i < n; i++){
        sort(adj[i].begin(), adj[i].end());
    }

    int src = 1;
    vector<int> vis(n+1, 0);
    vector<int> seq;
    dfs(src, adj, vis, seq);

    cout << "DFS Traversal: ";
    for(int i = 0; i< seq.size(); i++){
        cout << seq[i] << " ";
    }
}