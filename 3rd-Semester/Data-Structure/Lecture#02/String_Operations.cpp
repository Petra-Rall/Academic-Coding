#include<iostream>

using namespace std;

int length(string &str){
    int count = 0;
    for(auto &ch: str){
        count++;
    }
    return count;
}

string substring(string &str, int initial, int len){
    string newStr = "";
    for(int i = initial-1; i<initial-1+len; i++){
        newStr += str[i];
    }
    //str = newStr;
    return newStr;
}

int index(string &str1, string &str2){
    for(int i = 0; i < str1.length() - str2.length(); i++){
        if(str1[i] == str2[0]){
            if(substring(str1, i+1, length(str2)) == str2){
                return i+1;
                
            }
        }
    }
    return -1;
}

string concatenation(string str1, string str2){
    return str1+str2;
}

string insert(string str1, int pos, string str2){
   string p1 = substring(str1, 1, pos-1);
   string p2 = substring(str1, pos, length(str1)-length(p1));
   return p1 + str2 + p2;
}

string DELETE(string str1, int pos, int len){
    if(pos < 1){
        return str1;
    }
    else{
        string p1 = substring(str1, 1, pos-1);
   string p2 = substring(str1, pos+len, length(str1)-length(p1)-len);
   return p1+p2;
    }
}

string replace(string str, string pattern1, string pattern2){
    int pos = index(str, pattern1);
    string newStr = DELETE(str, pos, length(pattern1));
    return insert(newStr, pos, pattern2);
}

int main(){
    int n;
    string str;
    getline(cin, str);

    int x = length(str);
    cout << x << endl;

    cout << substring(str, 2, 3) << endl;

    cout << str << endl;

    string str1 = "He is wearing glasses";
    string str2 = "ear";
    cout << index(str1, str2) << endl;

    str1 = "Mark";
    str2 = "Twin";

    cout << concatenation(str1,str2) << endl;

    cout << insert("Herld", 3, "llo Wo") << endl;

    cout << DELETE("ABCDEFG", 0, 4) << endl;

    cout << replace("XABYABZ", "AB", "C");

    return 0;
}