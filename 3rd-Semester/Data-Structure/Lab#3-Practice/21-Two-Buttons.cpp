//https://codeforces.com/problemset/problem/520/B

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int minClicks(int n, int m){
    const int MAX = 2 * max(n, m) + 1;
    vector<int> vis(MAX, 0);
    queue<pair<int, int>> q;
    
    q.push({n, 0});
    vis[n] = 1;

    while(!q.empty()){
        auto [current, steps] =  q.front();
        q.pop();
        
        if(current == m){
            return steps;
        }

        if(current*2 <= MAX && !vis[current*2]){
            q.push({current*2, steps+1});
            vis[current*2] = 1;
        }

        if(current-1 > 0 && !vis[current-1]){
            q.push({current - 1, steps + 1});
            vis[current - 1] = 1;
        }
    }
    return -1;
}

int main() {
    
    int n, m;
    cin >> n >> m;
    
    cout << minClicks(n, m) << endl;

    return 0;
}