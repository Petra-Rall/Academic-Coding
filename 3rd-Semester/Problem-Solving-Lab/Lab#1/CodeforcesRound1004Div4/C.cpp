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
        int n, m, a, b;
        vector<int> v,z, v_sorted;
        cin >> n >> m;
        while(n--){
            cin >> a;
            v.push_back(a);
        }
        while(m--){
            cin >> b;
            z.push_back(b);
        }

        for(int i = 0; i < v.size(); i++){
            
            if(i == v.size()-1){
                if(v[v.size()-1] < v[v.size()-2]){
                    v[v.size()-1] = z[0] - v[v.size()-1];
                }
            }
            else{
                if(v[i+1] > v[i+2]){
                    v[i+1] = z[0] - v[i+1];
                }
            }
            if(i==0){
                if(v[i] > v[i+1]){
                    v[i] = z[0] - v[i];
                }
            }
            
            
            
        }

        v_sorted = v;
        sort(v_sorted.begin(), v_sorted.end());

        if(v == v_sorted){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}