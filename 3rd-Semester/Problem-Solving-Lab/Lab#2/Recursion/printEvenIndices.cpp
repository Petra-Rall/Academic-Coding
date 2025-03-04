#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long int a;
    vector<long long int> v;
    stack<long long int> s;
    cin >> n;
    while(n--){
        cin >> a;
        v.push_back(a);
    }

    for(int i = 0; i < v.size(); i+=2){
        s.push(v[i]);
    }
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}