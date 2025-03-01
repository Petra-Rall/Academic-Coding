#include<bits/stdc++.h>
#define V(all) v.begin(),v.end()
using namespace std;

void OPT()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
    OPT();
    int t;
    cin >> t;
    while(t--){
        int a, count = 0;
        cin >> a;
        while(a>1){
            a--;
            count++;
        }
        cout << count << endl; 
    }
    return 0;
}