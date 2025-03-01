#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(), nums1.end());
        set<int> s2(nums2.begin(), nums2.end());
        set<int> res;
        for(int num: s1){
            if(s2.count(num)){
                res.insert(num);
            }
        }
        return vector<int> (res.begin(), res.end());
    }
};

int main() {
    int n, m;
    cin >> n;
    vector<int> nums1(n);
    for(int i = 0; i < n; i++) {
        cin >> nums1[i];
    }
    
    cin >> m;
    vector<int> nums2(m);
    for(int i = 0; i < m; i++) {
        cin >> nums2[i];
    }
    
    Solution sol;
    vector<int> result = sol.intersection(nums1, nums2);
    
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
