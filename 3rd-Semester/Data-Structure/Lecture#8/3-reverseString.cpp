#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    getline(cin, s);
    stack<string> stk, stk2;
    queue<string> q;
    stringstream ss(s);
    string word;
    while(ss>>word){
        stk.push(word);
        q.push(word);
    }
    cout << "Reversed using stack: " << endl;
    while(!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;
    while(!q.empty()){
        stk2.push(q.front());
        q.pop();
    }
    cout << "Reversed using queue: " << endl;
    while(!stk2.empty()){
        cout << stk2.top() << " ";
        stk2.pop();
    }
    return 0;
}