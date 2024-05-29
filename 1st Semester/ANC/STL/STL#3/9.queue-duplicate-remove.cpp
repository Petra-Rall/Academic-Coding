#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    queue<char>qu, qu2;
    stack<char>st,st2;
    string str;
    char prev='\0';
    getline(cin,str);

    for(int i=0; i<=str.size()-1; i++){
        if(str[i]!= prev){
            qu.push(str[i]);
            prev = str[i];
        }
        else{
            while(!qu.empty()){
                st.push(qu.front());
                qu.pop();
            }
            st.pop();
            while(!st.empty()){
                st2.push(st.top());
                st.pop();
            }
            while(!st2.empty()){
                qu.push(st2.top());
                st2.pop();
            }
            prev = qu.empty()?'\0':qu.back();
        }
    }
    if(qu.empty()){
        cout << "Empty"<<endl;
    }
    else{
        while(!qu.empty()){
            cout << qu.front();
            qu.pop();
        }
    }

    return 0;
}