#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX, curDiff;
        for(int i = 1; i < arr.size(); i++){
            curDiff = arr[i] - arr[i-1];
            if(curDiff == minDiff){
                res.push_back({arr[i-1], arr[i]});
            }
            else if(curDiff < minDiff){
                minDiff = curDiff;
                res = {{arr[i-1], arr[i]}};
            }
        }
        return res;
    }
};

int main() {
    vector<int> arr = {4, 2, 1, 3};
    Solution sol;
    vector<vector<int>> result = sol.minimumAbsDifference(arr);
    
    for (const auto& pair : result) {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
    cout << endl;

    return 0;
}
