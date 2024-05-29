#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<string> v;
    v.push_back("abc");
    v.push_back("xyz");

    if(std::find(v.begin(), v.end(), "abc")!= v.end()){
        cout << "Word Found" << endl;
    }
    else{
        cout << "Word Not Found" << endl;
    }

    return 0;
}