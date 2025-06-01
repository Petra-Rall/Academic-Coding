//https://leetcode.com/problems/rotting-oranges/description/
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        //{{r, c}, t}
        queue<pair<pair<int, int>, int>> q;
        int fresh = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                        q.push({{i, j}, 0});
                }
                else if (grid[i][j] == 1) {
                    fresh++;
                }
            }
        }
        if (fresh == 0) return 0;

        int t = -1;
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        while(!q.empty()){
            int r  = q.front().first.first;
            int c = q.front().first.second;
            int tm = q.front().second;
            q.pop();
            t = max(tm, t);
            for(int i = 0; i < 4; i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == 1){
                    q.push({{nrow, ncol}, tm+1});
                    grid[nrow][ncol] = 2;
                    fresh--;
                }
            }
        }
        return (fresh == 0) ? t : -1;
    }
};

int main() {
    int n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    cout << "Enter grid (0=empty, 1=fresh, 2=rotten):\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
        }
    }

    Solution sol;
    int result = sol.orangesRotting(grid);
    cout << "Minimum minutes to rot all oranges: " << result << endl;

    return 0;
}
/*
test case:
3 3
2 1 1
1 1 0
0 1 1
*/