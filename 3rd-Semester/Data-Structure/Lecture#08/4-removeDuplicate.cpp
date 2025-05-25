#include<bits/stdc++.h>
using namespace std;

int main(){
    
    char ch, prev = '\0';
    stack<char> s, s2, stk, stk2;
    queue<char> q;
    while(cin.peek() != '\n'){
        cin >> ch;
        if(s.empty()){
            s.push(ch);
        }
        else{
            if(s.top() == ch){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }
        //////////////////
        if(q.empty()){
            q.push(ch);
        }
        else{
            if(ch != prev){
                q.push(ch);
                prev =  ch;
            }
            else{
                while(!q.empty()){
                    stk.push(q.front());
                    q.pop();
                }
                stk.pop();
                while(!stk.empty()){
                    stk2.push(stk.top());
                    stk.pop();
                }
                while(!stk2.empty()){
                    q.push(stk2.top());
                    stk2.pop();
                }
                prev = q.empty()?'\0':q.back();
            }
        }
    }
    while(!s.empty()){
        s2.push(s.top());
        s.pop();
    }

    cout << "Using stack: ";
    while(!s2.empty()){
        cout << s2.top();
        s2.pop();
    }
    cout << endl;

    cout << "Using queue: ";
    while(!q.empty()){
        cout << q.front();
        q.pop();
    }
    cout << endl;
    
    return 0;
}