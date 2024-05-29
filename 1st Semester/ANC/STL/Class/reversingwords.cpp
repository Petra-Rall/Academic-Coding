#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string st;
    stack<string>mystack;
    cout<<"Enter the string:"<<endl;
    getline(cin, st);

    stringstream ss(st);
    string eachword;
    while(ss>>eachword){
        mystack.push(eachword);
    }

    cout<<"Reversed:";
    while(!mystack.empty()){
        cout<<mystack.top()<<" ";
        mystack.pop();
    }

    return 0;
}