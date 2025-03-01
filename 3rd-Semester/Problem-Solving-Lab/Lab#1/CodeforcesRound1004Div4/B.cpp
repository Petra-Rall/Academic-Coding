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
        string s1;
        
        cin >> s1;
        int size = s1.size();
        if(s1.size() > 1){
            for(int i = s1.size()-1; i >= 1; i--){
            if(s1[i] == s1[i-1]){
                if(i-2 >= 0){
                    s1[i-1] = s1[i-2]; 
                }
                size--;
            }
        }
        }
        cout << size << endl;
    }

    return 0;
}