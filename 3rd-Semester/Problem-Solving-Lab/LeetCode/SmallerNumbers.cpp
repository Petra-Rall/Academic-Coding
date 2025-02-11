//Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> c(101), b(n);
        for(int i = 0; i < 101; i++){
            c[i]=0; 
        }
        for(int i = 0; i < n; i++){
            c[nums[i]]++;
        }
        for(int i = 1; i < 101; i++){
            c[i]+=c[i-1]; 
        }
        for(int i = 0; i < n; i++){
            if(nums[i] == 0){
                b[i] = 0;
            }
            else{
                b[i] = c[nums[i]-1];
            }
        }
        return b;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    Solution sol;
    vector<int> result = sol.smallerNumbersThanCurrent(nums);
    
    for(int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
