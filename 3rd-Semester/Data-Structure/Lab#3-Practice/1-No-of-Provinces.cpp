//https://leetcode.com/problems/number-of-provinces/description/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    
        void dfs(int src, vector<int> adj[], vector<int> &vis){
            if(vis[src]) return;
            vis[src] = 1;
            for(int v: adj[src]){
                dfs(v, adj, vis);
            }
        }
    
        int findCircleNum(vector<vector<int>>& isConnected) {
            int n = isConnected.size();
            vector<int> adj[n];           // Adjacency list
            vector<int> vis(n, 0);        // Visited array
    
            // Convert adjacency matrix to adjacency list
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (isConnected[i][j] == 1 && i != j) {
                        adj[i].push_back(j);
                        adj[j].push_back(i);
                    }
                }
            }
    
            int prov = 0;
            for (int i = 0; i < n; i++) {
                if (!vis[i]) {
                    dfs(i, adj, vis);
                    prov++;
                }
            }
    
            return prov;
        }
    };

int main(){
    Solution sol;

    // Example input matrix: 3 provinces
    vector<vector<int>> isConnected = {
        {1, 1, 0},
        {1, 1, 0},
        {0, 0, 1}
    };

    int result = sol.findCircleNum(isConnected);
    cout << "Number of provinces: " << result << endl;

    return 0;
}