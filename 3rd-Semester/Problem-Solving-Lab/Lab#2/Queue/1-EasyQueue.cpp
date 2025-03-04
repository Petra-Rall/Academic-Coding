#include<bits/stdc++.h>
using namespace std;
void OPT()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int main(){
    OPT();
    int t, n;
    cin >> t;
    queue<long long int> q;
    while(t--){
        cin >> n;
        if(n == 1){
            long long int a;
            cin >> a;
            q.push(a);
        }
        else if(n == 2){
            if(!q.empty()){
                q.pop();
            }
        }
        else if (n == 3){
           if(!q.empty()) cout << q.front() << "\n";
           else cout << "Empty!" << "\n";
        }
    }
}