#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isValid(string s) {
            stack<char> stk;
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                    stk.push(s[i]);
                }
                else{
                    if(stk.empty()) return false;
                    if((stk.top() == '(' && s[i] == ')') || (stk.top() == '{' && s[i] == '}') || (stk.top() == '[' && s[i] == ']')){
                        stk.pop();
                    }
                    else{
                        stk.push(s[i]);
                    }
                }
                
            }
            if(stk.empty()){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    string s;
    cin >> s;
    Solution sol;
    if(sol.isValid(s)){
        cout << "True";
    }
    else{
        cout << "False";
    }
}