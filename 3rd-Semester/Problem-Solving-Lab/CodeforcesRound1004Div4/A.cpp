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
        string s2[s1.size()];
        s1[s1.size()-2] = 'i';
        for(int i = 0; i < s1.size()-1; i++){
            cout << s1[i];
        }
        cout << endl;
    }

    return 0;
}