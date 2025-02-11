#include<bits/stdc++.h>
#define V(all) v.begin(),v.end()
using namespace std;

void OPT()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

int sum(vector<int> v){
    int temp = 0, sum = 0;
    for(int i = 0; i < v.size(); i++){
        temp += v[i];
        sum +=temp;
    }
    return sum;
}

int main(){
    OPT();
    int t;
    cin >> t;
    while(t--){
        int n, m, a, sum = 0, p, q;
        vector<int> v, z;
        cin >> n >> m;
        p = n;
        q = m;
        while(n--){
            while(m--){
                cin >> a;
                v.push_back(a);
            }
        }

        for(int i = 0; i < v.size(); i++){
            while(p--){
                z.push_back(v[i]);
                 
            }
            z.clear();
        }
    }
    return 0;
}