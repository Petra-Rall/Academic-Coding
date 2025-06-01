//http://codeforces.com/problemset/problem/1843/C
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int bfs(int node, vector<int> &sumMemo, vector<vector<int>> &tree){
    queue<int> q;
    int sum = 1;
    sumMemo[1] = 1;
    q.push(1);

    while(!q.empty()){
        node = q.front();
        q.pop();

        for(int child: tree[node]){
            sum += child;
            sumMemo[child] = sum;
            q.push(child);
        }
    }
    return sum;
}

int main(){

    int n, p;
    cin >> n;
    vector<vector<int>> tree(n+1);
    vector<int> sumMemo (n + 1, 0);
    
    for(int i = 1; i <= n; i++){
        int j = i;
        if (2 * i <= n) tree[i].push_back(2 * i);
        if (2 * i + 1 <= n) tree[i].push_back(2 * i + 1);

    }

    
      
    cout << bfs(n, sumMemo, tree) << endl;

    return 0;

}

