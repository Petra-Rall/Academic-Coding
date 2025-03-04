#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int evalRPN(vector<string>& v ){
            int x, y, res = 0;
            stack<string> stk;
            for(int i = 0; i < v.size(); i++){
                if(v[i] != "+" && v[i] != "-" && v[i] != "*" && v[i] != "/"){
                    stk.push(v[i]);
                }
                else{
                    if(stk.size() >= 2){
                        x = stoi(stk.top());
                        stk.pop();
                        y = stoi(stk.top());
                        stk.pop();
                    }
                    else if(stk.size() == 1){
                        x = stoi(stk.top());
                        stk.pop();
                        y = 0;
                    }
                    else if(stk.empty()){
                        x = 0;
                        y = 0;
                    }
                    
                    res = (v[i] == "+") ? x + y : (v[i] == "-") ? y - x : (v[i] == "*") ? x * y : y / x;
                    stk.push(to_string(res));
                }
            }
            if(!stk.empty()){
                res = stoi(stk.top());
            }
            return res;
        }
};

int main(){
    vector<string> tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    Solution sol;
    cout << sol.evalRPN(tokens);
}