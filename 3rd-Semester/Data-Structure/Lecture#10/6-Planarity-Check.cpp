#include <bits/stdc++.h>
using namespace std;

bool bfs(int start, vector<int> adj[], vector<int>& color, vector<int>& component) {
    queue<int> q;
    q.push(start);
    color[start] = 0;
    component.push_back(start);

    bool isBipartite = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int neighbor : adj[node]) {
            component.push_back(neighbor);
            if (color[neighbor] == -1) {
                color[neighbor] = 1 - color[node];
                q.push(neighbor);
            } else if (color[neighbor] == color[node]) {
                isBipartite = false;
            }
        }
    }

    return isBipartite;
}

int countEdges(const vector<int>& component, vector<int> adj[], vector<bool>& inComponent) {
    int count = 0;
    for (int u : component) {
        for (int v : adj[u]) {
            if (inComponent[v]) {
                count++;
            }
        }
    }
    return count / 2;
}

int main() {
    int n, e, u, v;
    cin >> n >> e;

    vector<int> adj[n];
    for (int i = 0; i < e; ++i) {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(n, false);
    vector<int> color(n, -1);
    bool isPlanar = true;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            vector<int> component;
            bool bipartite = bfs(i, adj, color, component);

            // Mark component nodes
            vector<bool> inComponent(n, false);
            for (int node : component) {
                inComponent[node] = true;
                visited[node] = true;
            }

            // Remove duplicates
            sort(component.begin(), component.end());
            component.erase(unique(component.begin(), component.end()), component.end());

            int V_i = component.size();
            int E_i = countEdges(component, adj, inComponent);

            if (V_i >= 3) {
                if (bipartite) {
                    if (E_i > 2 * V_i - 4) {
                        isPlanar = false;
                        break;
                    }
                } else {
                    if (E_i > 3 * V_i - 6) {
                        isPlanar = false;
                        break;
                    }
                }
            }
        }
    }

    cout << "The graph is " << (isPlanar ? "planar." : "not planar.") << endl;

    return 0;
}
