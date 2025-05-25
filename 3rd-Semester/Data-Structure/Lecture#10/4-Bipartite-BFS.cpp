//only even length cycle can be bipartite
//linear graphs with no cycle is always bipartite
// 0 based indexing
// this is using a greedy method
#include<bits/stdc++.h>
using namespace std;

bool bfs(int start, int col, int color[], vector<int> adj[]){
    queue<int> q;
    q.push(start);
    color[start] = col;    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it: adj[node]){
            //if adjacent node is yet not colored
            if(color[it] == -1){
                color[it] = !color[node];
                q.push(it);
            }
            //is the adjacent node have the same color
            //some old node colored it on another path
            else if(color[it] == color[node]){
                return false;
            }
        }
    } 
        return true;
}

bool isBipartite(int n, vector<int> adj[]){
    int color[n];
    for(int i = 0; i < n; i++) color[i] = -1;
    for(int i = 0; i < n; i++){
        if(color[i] == -1){
            if(bfs(i, 0, color, adj) == false){
                return false;
            }
        }
    }
    return true;
}

int main(){

    int n, e, u, v;
    cin >> n; 
    cin >> e; 
    vector<int> adj[n];
    for(int i = 0; i < e; i++){
        cin >> u >> v;
       
        adj[u].push_back(v); 
        adj[v].push_back(u);
    }

    /*for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }*/
    
    cout << (isBipartite(n, adj)? "True": "False");

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