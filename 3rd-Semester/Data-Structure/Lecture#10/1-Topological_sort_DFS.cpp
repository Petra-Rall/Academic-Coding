#include<bits/stdc++.h>
using namespace std;

void dfs(int u, vector<int> adj[], vector<int> &vis, stack<int> &seq){
    vis[u] = 1;
    for(int v: adj[u]){
        if(!vis[v]){
            dfs(v, adj, vis, seq);
        }
    }
    seq.push(u); // After finishing the dfs then the node is pushed into the stack

}

void top_sort(int n, vector<int> adj[], vector<int> &vis, stack<int> &seq){
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            dfs(i, adj, vis, seq);
        }
    }
}

int main(){

    int n, e, u, v;
    cin >> n; 
    cin >> e; 
    vector<int> adj[n+1];
    for(int i = 0; i < e; i++){
        cin >> u >> v;
       
        adj[u].push_back(v); 
        //adj[v].push_back(u); //since it is a directed graph 
    }

    /*for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }*/
    
    int src = 0;
    vector<int> vis(n + 1, 0);
    stack<int> seq;
    top_sort(n, adj, vis, seq);

    cout << "Topological Sorting: ";
    while(!seq.empty()){
        cout << seq.top() << "-> ";
        seq.pop();
    }

    return 0;
}
/*
test case:
6  
5
2 3
4 0
4 1
5 0
5 2
*/