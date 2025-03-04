#include <bits/stdc++.h>
using namespace std;

void dfs(int src, vector<int> adj[], vector<int> &vis, vector<int> &seq) {
    stack<int> s;
    s.push(src);

    while (!s.empty()) {
        int u = s.top();
        s.pop();

        if (vis[u]) continue; // Skip if already visited

        vis[u] = 1;
        seq.push_back(u); // Store DFS traversal sequence

        // Push adjacent nodes in reverse order to ensure smallest nodes are visited first
        for (int i = adj[u].size() - 1; i >= 0; i--) {
            int v = adj[u][i];
            if (!vis[v]) {
                s.push(v);
            }
        }
    }
}

int main() {
    int n, e, u, v;
    cin >> n >> e; // Number of nodes and edges

    vector<int> adj[n + 1];
    for (int i = 0; i < e; i++) {
        cin >> u >> v;
        adj[u].push_back(v); // Edge u -> v
        adj[v].push_back(u); // Edge v -> u (for undirected graph)
    }

    // Sort adjacency list to ensure smallest node is visited first (for lexicographically smallest DFS)
    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    vector<int> vis(n + 1, 0); // Visited array
    vector<int> seq; // DFS traversal sequence

    int src = 1; // Starting DFS from node 1
    dfs(src, adj, vis, seq);

    // Output the DFS traversal sequence
    cout << "DFS Traversal: ";
    for (int node : seq) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
