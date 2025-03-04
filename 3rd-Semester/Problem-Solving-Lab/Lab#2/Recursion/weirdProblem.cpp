#include<bits/stdc++.h>
using namespace std;

void weird(long long int n){
    if(n==1){
        return;
    }
    if(n%2 == 0){
        n/=2;
        cout << n << " ";
        weird(n);
    }
    else{
        n*=3;
        n++;
        cout << n << " ";
        weird(n);
    }
}

int main(){

    long long int n;
    cin >> n;

    cout << n << " ";
    weird(n);


    return 0;
}