#include<iostream>
#include<stack>
#include<bits/stdc++.h>
using namespace std;

int main(){

    string s1, s2;
    bool flag=true;
    cout<<"Enter the string1:"<<endl;
    cin>>s1;
    cout<<endl<<"Enter the string2:"<<endl;
    cin>>s2;
    cout<<endl;

    stack<char>str1;
    stack<char>str2;

    for(int i=0; i<s1.size(); i++){
        if(!str1.empty() && s1[i]=='#'){
            str1.pop();
        }
        else{
            str1.push(s1[i]);
        }
    }

    for(int i=0; i<s2.size(); i++){
        if(!str2.empty() && s2[i]=='#'){
            str2.pop();
        }
        else{
            str2.push(s2[i]);
        }
    }



    if(str1.size()!=str2.size()){
        flag=false;
    }
    else{
        while(!str1.empty()){
            if(str1.top()==str2.top()){
                str1.pop();
                str2.pop();
            }
            else{
                flag=false;
                break;
            }
        }
    }

    if(flag==true){
        cout<<"TRUE";
    }
    else{
        cout<<"FALSE";
    }

    return 0;
}