#include<bits/stdc++.h>
using namespace std;

int main(){
    int u, v, n, e;
    cin >> n;
    cin >> e;
    vector<int> adj[n + 1];

    for (int i = 0; i < e; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
    vector<int> vis(n+1, 0);
    vector<int> seq;
    stack<int> s;

    int src = 1;
    s.push(src);

    while(!s.empty()){
        int u = s.top();
        s.pop();

        if(vis[u]) continue;

        vis[u] = 1;
        seq.push_back(u);
        
        for (int i = adj[u].size() - 1; i >= 0; i--) {
            int v = adj[u][i];
            if (!vis[v]) {
                s.push(v);
            }
        }
            
    }

    /////////////////////////////////////////////////
    cout << "DFS Traversal: ";
    for(int i = 0; i < seq.size(); i++){
        cout << seq[i] << " ";
    }

    return 0;
    
}