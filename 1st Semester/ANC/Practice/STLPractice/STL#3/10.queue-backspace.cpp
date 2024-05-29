#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
    queue<char>qu, qu2, qu3, qu4;
    stack<char>st,st2;
    string str;
    string str2;
    cout << "Enter string one:" << endl;
    getline(cin,str);
    cout << "Enter string two: " << endl;
    getline(cin, str2);

    for(int i=0; i<=str.size()-1; i++){
        if(str[i]!= '#'){
            qu.push(str[i]);
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
        }
    }

    for(int i=0; i<=str2.size()-1; i++){
        if(str2[i]!= '#'){
            qu2.push(str2[i]);
        }
        else{
            while(!qu2.empty()){
                st.push(qu2.front());
                qu2.pop();
            }
            st.pop();
            while(!st.empty()){
                st2.push(st.top());
                st.pop();
            }
            while(!st2.empty()){
                qu2.push(st2.top());
                st2.pop();
            }
        }
    }

    cout << "String one: ";

    if(qu.empty()){
        cout << "Empty"<<endl;
    }
    else{
        while(!qu.empty()){
            cout << qu.front();
            qu3.push(qu.front());
            qu.pop();
        }
    }

    cout << "\nString Two: ";
    if(qu2.empty()){
        cout << "Empty"<<endl;
    }
    else{
        while(!qu2.empty()){
            cout << qu2.front();
            qu4.push(qu2.front());
            qu2.pop();
        }
    }

    cout << endl;

    if(qu3.size()!=qu4.size()){
        cout << "False" << endl;
    }
    else{
        while(!qu3.empty() && !qu4.empty()){
            if(qu3.front()==qu4.front()){
                qu3.pop();
                qu4.pop();
            }
            else{
                cout << "False"<< endl;
            }
        }
    }

    if(qu3.empty() && qu4.empty()){
        cout << "True" << endl;
    }

    return 0;
}