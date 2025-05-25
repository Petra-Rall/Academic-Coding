#include<bits/stdc++.h>
using namespace std;

void removeOccur(stack<int> st, int item){
    stack<int> t;
    while(!st.empty()){
        if(st.top() != item){
            t.push(st.top());
            st.pop();
        }
        else{
            st.pop();
        }
    }
    while(!t.empty()){
        st.push(t.top());
        t.pop();
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(2);
    st.push(7);
    st.push(2);
    st.push(5);
    int item = 2;
    removeOccur(st, item);
    return 0;
}