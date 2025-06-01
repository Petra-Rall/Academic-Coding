//https://codeforces.com/problemset/problem/20/C
#include<bits/stdc++.h>
using namespace std;

vector<int> dijkstra(int n, vector<vector<int>> adj[], int src, vector<int> &parents){
    vector<int> dist(n, 1e9);
    set<pair<int, int>> st;
    st.insert({0, src});
    dist[src] = 0;

    while(!st.empty()){
        auto it = *(st.begin());
        int currdis = it.first;
        int node = it.second;
        st.erase(it);

        for(auto it: adj[node]){
            int edgeWt = it[1];
            int adjNode = it[0];

            if(currdis + edgeWt < dist[adjNode]){
                if(dist[adjNode] != 1e9){
                    st.erase({dist[adjNode], adjNode});
                }
                dist[adjNode] = currdis + edgeWt;
                st.insert({dist[adjNode], adjNode});
                parents[adjNode] = node;
            }
        }
    }
    return dist;
}

void shortestpath(int des, vector<int> parents, vector<int> &path){
    int u = des;
    while(u != -1){
        path.push_back(u);
        u = parents[u];
    }
    reverse(path.begin(), path.end());
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
    source = 1;
    vector<int> parents(n+1, -1);
    vector<int> dist = dijkstra(n + 1, adj, source, parents);

    vector<int> path;
    shortestpath(n, parents, path);

    if (path[0] != source) cout << -1;
    else{
        for (int node : path) {
            cout << node << " ";
        }
    }

    /*for (int i = 1; i <= n; i++) {
        cout << "Distance from " << source << " to " << i << " = " << dist[i] << "\n";
    }
    */
   

    return 0;

}
// Time Complexity: E log V

/*
test case:
5 6
1 2 2
1 3 4
2 3 1
2 4 7
3 5 3
4 5 1

*/