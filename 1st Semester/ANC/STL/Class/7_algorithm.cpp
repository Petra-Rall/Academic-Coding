#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int>v;
    v.push_back(21);
    v.push_back(22);
    v.push_back(24);
    v.push_back(25);

    int num=0;
    v.push_back(num);

    int i=7;
    cout<<i<<" appears "<<count(v.begin(),v.end(), i)<<" times in v"<<endl;

    i=21;
    cout<<i<<" appears "<<count(v.begin(),v.end(),i)<<" times in v"<<endl;

    return 0;
}