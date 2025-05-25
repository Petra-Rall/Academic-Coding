#include <bits/stdc++.h>
using namespace std;

int main()
{
    int u, v, n, e;
    cin >> n;
    cin >> e;
    vector<int> adj[n + 1];

    for (int i = 0; i < e; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << "-> ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout << adj[i][j];
            if (j < adj[i].size() - 1)
            {
                cout << ",";
            }
        }
        cout << endl;
    }
}