#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){

    stack<char>mystack1;
    string str;
    cin>>str;

    for(int i= str.size()-1; i>=0; i--){
        if(!mystack1.empty() && mystack1.top()==str[i]){
            mystack1.pop();
        }
        else{
            mystack1.push(str[i]);
        }
    }
    if(mystack1.empty()){
        cout<< "Empty"<< endl;
    }
    else{
        while(!mystack1.empty()){
            cout<<mystack1.top();
            mystack1.pop();
        }
    }


    return 0;
}