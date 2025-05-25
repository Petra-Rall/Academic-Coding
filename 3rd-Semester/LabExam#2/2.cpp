#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    queue<char> q;
    stack<char> st;
    for(char c: s){
        if(c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' || c == 'u' ){
            st.push(c);
        }
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' || s[i] == 'u' ){
            s[i] = q.front();
            q.pop();
        }
    }

    cout << s;
    return 0;
}