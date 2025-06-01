//https://codeforces.com/problemset/problem/500/A

#include <iostream>
#include <vector>
using namespace std;

void dfs(int src, vector<int> adj[], vector<int> &vis){
    if(vis[src]) return;
    vis[src] = 1;
    for(int v: adj[src]){
        dfs(v, adj, vis);
    }
}

int main() {
    
    int n, t, a;
    cin >> n >> t;
    vector<int> adj[n+1];
    vector<int> vis(n, 0);
    for(int i = 1; i < n; i++){
        cin >> a;
        adj[i].push_back(i+a);
    }

    dfs(1, adj, vis);

    cout << ((vis[t])? "YES":"NO");

    return 0;
}