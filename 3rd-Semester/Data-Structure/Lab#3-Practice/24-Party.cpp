//https://codeforces.com/problemset/problem/115/A
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int dfs(int node, vector<int> &depthMemo, vector<vector<int>> &tree){
    if(depthMemo[node] != -1) return depthMemo[node];

    int maxDepth = 1;
    for(int child: tree[node]){
        maxDepth = max(maxDepth, 1+dfs(child, depthMemo, tree));
    }
    depthMemo[node] = maxDepth;
    return maxDepth;
}

int main(){

    int n, p;
    cin >> n;
    vector<vector<int>> tree(n+1);
    vector<int> depthMemo (n + 1, -1);
    
    for(int i = 1; i <= n; i++){
        cin >> p;
        if(p!=-1) tree[p].push_back(i);
    }

    int maxGroup = 0;
    for(int i = 1; i<=n; i++){
        maxGroup = max(maxGroup, dfs(i, depthMemo, tree));
    }
      
    cout << maxGroup << endl;

    return 0;

}

