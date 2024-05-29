#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string st;
    queue<string>myqueue;
    cout<<"Enter the string:"<<endl;
    getline(cin, st);

    stringstream ss(st);
    string eachword;
    while(ss>>eachword){
        myqueue.push(eachword);
    }

    cout<<"Reversed:";
    while(!myqueue.empty()){
        cout<<myqueue.front()<<" ";
        myqueue.pop();
    }

    return 0;
}