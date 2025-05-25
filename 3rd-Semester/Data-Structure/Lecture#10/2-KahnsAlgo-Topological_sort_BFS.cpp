// 0 based indexing

#include<bits/stdc++.h>
using namespace std;


void top_sort(int n, vector<int> adj[], vector<int> &seq){
    int indegree[n] = {0};
    for(int i = 0; i < n; i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i = 0; i < n; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        seq.push_back(node);
        //node is in topological sort
        //so remove it from the indegree array
        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it] == 0){
                q.push(it);
            }
        }
    }
}

int main(){

    int n, e, u, v;
    cin >> n; 
    cin >> e; 
    vector<int> adj[n];
    for(int i = 0; i < e; i++){
        cin >> u >> v;
       
        adj[u].push_back(v); 
        //adj[v].push_back(u); //since it is a directed graph 
    }

    /*for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }*/

    vector<int> seq;
    top_sort(n, adj, seq);

    if(seq.size() < n){
        cout << "Cycle detected. Topological sort not possible." << endl;
    } 
    else {
        cout << "Topological Sorting: ";
        for(int i = 0; i < n; i++){
            cout << seq[i];
            if(i != n - 1) cout << "-> ";
        }
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