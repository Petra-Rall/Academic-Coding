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