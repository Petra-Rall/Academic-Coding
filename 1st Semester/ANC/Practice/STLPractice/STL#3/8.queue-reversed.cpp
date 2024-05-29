#include<iostream>
#include<queue>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<string> qu1;
    stack<string> st;
    string str;
    cout << "Enter string: " << endl;
    getline(cin,str);

    stringstream ss(str);
    string word;
    while(ss>>word){
        qu1.push(word);
    }
    while(!qu1.empty()){
        st.push(qu1.front());
        qu1.pop();
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}