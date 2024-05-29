#include<iostream>
#include<stack>
using namespace std;

int main(){

    string str1, str2;
    stack<char>s1, s2, s3,s4, s5, s6;
    cout << "Enter first string: " << endl;
    getline(cin, str1);
    cout << "Enter second string: " << endl;
    getline(cin, str2);

    for(int i=0; i<str1.size(); i++){
        if(!s1.empty() && str1[i]== '#'){
            s1.pop();
        }
        else{
            s1.push(str1[i]);
        }
    }

    for(int i=0; i<str2.size(); i++){
        if(!s2.empty() && str2[i]== '#'){
            s2.pop();
        }
        else{
            s2.push(str2[i]);
        }
    }

    while(!s1.empty()){
        s3.push(s1.top());
        s1.pop();
    }
    
    while(!s2.empty()){
        s4.push(s2.top());
        s2.pop();
    }

    cout << "s1 = ";

    while(!s3.empty()){
        cout << s3.top();
        s3.pop();
    }

    cout << "\ns2 = ";

    while(!s4.empty()){
        cout << s4.top();
        s4.pop();
    }

    cout << endl;

    for(int i=0; i<str1.size(); i++){
        if(!s5.empty() && str1[i]== '#'){
            s5.pop();
        }
        else{
            s5.push(str1[i]);
        }
    }

    for(int i=0; i<str2.size(); i++){
        if(!s6.empty() && str2[i]== '#'){
            s6.pop();
        }
        else{
            s6.push(str2[i]);
        }
    }

    if(s5.size()!=s6.size()){
        cout << "False";
    }
    else{
        while(!s5.empty()){
            if(s5.top() == s6.top()){
                s5.pop();
                s6.pop();
            }
            else{
                cout << "False";
                break;
            }

        }
    }
    if(s5.empty() && s6.empty()){
        cout << "True";
    }

    

    return 0;
}
