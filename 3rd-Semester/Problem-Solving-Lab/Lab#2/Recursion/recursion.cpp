#include<bits/stdc++.h>
using namespace std;

void luvRecur(int n){
    if(n==0){
        return;
    }
    cout << "I love Recursion" << endl;
    n--;
    luvRecur(n);
}

int main(){

    int n;
    cin >> n;
    luvRecur(n);
    return 0;
}