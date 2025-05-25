#include<bits/stdc++.h>
using namespace std;

void backspace(string &st1, string &st2){
    char ch;
    stack<char> s, s2, stk, stk2;
    queue<char> q;
    while(cin.peek() != '\n'){
        cin >> ch;
        if(s.empty()){
            s.push(ch);
        }
        else{
            if(ch == '#'){
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
            if(ch != '#'){
                q.push(ch);
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
            }
        }
    }

    while(!s.empty()){
        s2.push(s.top());
        s.pop();
    }

    //Using stack:
    while(!s2.empty()){
        st1.push_back(s2.top());
        s2.pop();
    }

    //Using queue:
    while(!q.empty()){
        st2.push_back(q.front());
        q.pop();
    }
}

int main(){
    string st1, st2, st3, st4;
    cout << "String 1: ";
    backspace(st1, st2);
    cout << "String 2: ";
    backspace(st3, st4);

    if(st1 == st3 && st3 == st2 && st2 == st4){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    
    
    return 0;
}