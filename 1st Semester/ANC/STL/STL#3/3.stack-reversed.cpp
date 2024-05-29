#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<string> mystack;
    string s1;
    getline(cin, s1);

    stringstream ss(s1);
    string word;
    while(ss>>word){
        mystack.push(word);
    }
    cout << endl << "Reversed = ";
    while(!mystack.empty()){
        cout << mystack.top() << " ";
        mystack.pop();
    }

    return 0;
}