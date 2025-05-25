//only even length cycle can be bipartite
//linear graphs with no cycle is always bipartite
//works for both 0 based indexing
#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, int col, int color[], vector<int> adj[]){
    color[node] = col;
    for(auto it: adj[node]){
        if(color[it] == -1){
            if(dfs(it, !col, color, adj) == false){ //we check every dfs call for any false return
                return false;                       //if any one returns false, it can not be bipartitie
            }
        }
        else if(color[it] == col){
            return false;
        }
    }
    return true;
}

bool isBipartite(int n, vector<int> adj[]){
    int color[n];
    for(int i = 0; i < n; i++) color[i] = -1;
    for(int i = 0; i < n; i++){
        if(color[i] == -1){
            if(dfs(i, 0, color, adj) == false){
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
test case 1:
6  
5
2 3
4 0
4 1
5 0
5 2
test case 2:
8
16
1 2
2 1
2 3
2 6
3 2
3 4
4 3
4 5
4 7
5 4
5 6
6 2
6 5
7 4
7 8
8 7
*/