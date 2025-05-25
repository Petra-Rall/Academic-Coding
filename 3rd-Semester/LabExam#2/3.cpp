#include<bits/stdc++.h>
using namespace std;

void replaceChar(string s, char x, char y){
    static int j = 0;
    
    if(j >= s.size()){
        return;
    } 
    else{
        if(s[j] == x){
            cout << y;
        }
        else{
            cout << s[j];
        }
        j++;
        replaceChar(s, x, y);
    }
    
}

int main(){

    string s;
    char x, y;
    cin >> s;
    cin >> x >> y;
    replaceChar(s, x, y);
    return 0;
}