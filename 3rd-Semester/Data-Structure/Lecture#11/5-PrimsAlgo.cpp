#include<bits/stdc++.h>
using namespace std;

int prims(int n, vector<vector<int>> adj[], vector<int> &parents){
    priority_queue<pair<int, int>, 
    vector<pair<int, int>>, greater<>> pq; //min heap

    vector<int> vis(n,0);
    //{wt, node}
    pq.push({0,0});
    int sum = 0;
    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();
        int node = it.second;
        int wt = it.first;

        if(vis[node] == 1) continue;
        //add it to the MST
        vis[node] = 1;
        sum += wt;
        //for MST store the parent
        parents.push_back(node);
        for(auto it: adj[node]){
            int adjNode = it[0];
            int edgwt = it[1];
            if(!vis[adjNode]){
                pq.push({edgwt, adjNode});
            }
        }

    }
    return sum;
}

int main(){

    int n, e, u, v, w;
    cin >> n >> e; // number of nodes and edges

    vector<vector<int>> adj[n]; // each node has a list of {neighbor, weight}
    vector<int> parents;

    for (int i = 0; i < e; i++) {
        cin >> u >> v >> w;
        adj[u].push_back({v, w}); // add edge u -> v
        adj[v].push_back({u, w}); // add edge v -> u (undirected)
    }
    
    int minWt = prims(n, adj, parents);
    cout << "MST: \n" ;
    for(int i = 0; i < parents.size(); i++){
        cout << parents[i] << " ";
    }
    cout << "\nMinimum Spanning Weight: " << minWt;
    return 0;
}