#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size(), tot = 0;
        double m = (double)n * 0.05, avg = 0;
        sort(arr.begin(), arr.end());
        for(int i = m; i < n - m; i++) {
            tot += arr[i]; 
        }
        return (double)tot / (n - 2 * m);
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    cout << fixed << setprecision(5) << sol.trimMean(arr) << endl;

    return 0;
}
