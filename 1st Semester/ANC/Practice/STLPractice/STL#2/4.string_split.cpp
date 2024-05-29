#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Dept. of CSE CU";

    //Takes only space separated C++ strings.
    stringstream ss(s);
    string word;

    while (ss>>word){ //Extract word from the stream
        cout << word << endl;
    }
    cout<<endl;
    return 0;
}