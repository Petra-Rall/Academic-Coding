#include<bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int V, vector<vector<int>> adj[], int S){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq; //Min Heap to always take the node with min weight first
    vector<int> dis(V, 1e9); // Distance array initialized to INF

    dis[S] = 0; //source to source distance is 0
    pq.push({0, S});

    while(!pq.empty()){
        int currdis= pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for(auto it: adj[node]){
            int edgeWeight = it[1];
            int adjNode = it[0];
            
            if(currdis + edgeWeight < dis[adjNode]){
                dis[adjNode] = currdis + edgeWeight;
                pq.push({dis[adjNode], adjNode});
            }
        }
    }
    return dis;
}

int main(){
    int n, e, u, v, w;
    cin >> n; // number of nodes
    cin >> e; // number of edges
    vector<vector<int>> adj[n+1];
    for(int i = 0; i < e; i++){
        cin >> u >> v >> w;
        //there is an edge between u and v with weight w
        adj[u].push_back({v, w}); // v is an adjacent node of u and weight is w
        adj[v].push_back({u,w}); // u is an adjacent node of v and weight is w
            
    }
    
    int source;
    cin >> source;

    vector<int> dist = dijkstra(n + 1, adj, source);

    for (int i = 1; i <= n; i++) {
        cout << "Distance from " << source << " to " << i << " = " << dist[i] << "\n";
    }

    return 0;

}
// Time Complexity: E log V