#include <vector>
#include <stack>
#include <iostream>

using namespace std;

vector<int> next_higher_peak(vector<int>& h) {

    stack<int> stk;
    vector<int> result(h.size(), -1); 
    for(int i = 0; i < h.size(); i++){
        while(!stk.empty() && h[i] > h[stk.top()]){
            int idx = stk.top();
            stk.pop();
            result[idx] = h[i];
        }
        stk.push(i);
    }
    return result;
}

int main() {
    int n;
    
    cin >> n;  // Read the number of peaks from the user

    vector<int> heights(n);
   
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];  // Read each peak height from the user
    }

    vector<int> result = next_higher_peak(heights);  // Call the function to get the result

    // Print result
    
    for (int height : result) {
        cout << height << " ";  // Output each element in the result vector
    }
    cout << endl;

    return 0;
}
