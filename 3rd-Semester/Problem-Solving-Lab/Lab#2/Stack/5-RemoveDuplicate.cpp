//remove duplicate in  the smallest in lexicographical order that exist within the string.
// Ex: cbacdcbc
// Ans: acdb (not abcd) 
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> freq(26, 0);  // Frequency of each character in the string
        vector<bool> vis(26, false);  // Track if a character is in the stack
        stack<char> st;  // Stack to build the result

        // Count the frequency of each character in the string
        for (char i : s) {
            freq[i - 'a']++;
        }

        // Process each character in the string
        for (char i : s) {
            // Skip the character if it's already in the stack
            if (vis[i - 'a']) {
                freq[i - 'a']--;
                continue;
            }

            // Maintain lexicographical order by popping larger characters
            while (!st.empty() && st.top() > i && freq[st.top() - 'a'] > 0) {
                vis[st.top() - 'a'] = false;
                st.pop();
            }

            // Push the current character onto the stack and mark it as visited
            st.push(i);
            vis[i - 'a'] = true;
            freq[i - 'a']--;  // Decrease the frequency of the current character
        }

        // Build the result string from the stack
        string ans = "";
        while (!st.empty()) {
            ans.push_back(st.top());  // Efficiently append to the result
            st.pop();
        }

        reverse(ans.begin(), ans.end());  // Reverse the string to correct the order
        return ans;
    }
};

int main() {
    Solution sol;

    // Test case 1
    string s1 = "bcabc";
    cout << "Result for s1: " << sol.removeDuplicateLetters(s1) << endl;

    // Test case 2
    string s2 = "cbacdcbc";
    cout << "Result for s2: " << sol.removeDuplicateLetters(s2) << endl;

    return 0;
}
