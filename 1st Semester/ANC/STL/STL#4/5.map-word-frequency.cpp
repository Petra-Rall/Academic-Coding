#include<iostream>
#include<map>
#include<sstream>
using namespace std;

int main(){
    string str;
    map<string ,int> freqMap;
    cout << "Enter String: " << endl;
    getline(cin, str);

    stringstream ss(str);
    string word;
    while(ss>>word){
        if(freqMap.find(word)==freqMap.end()){
            freqMap.insert({word, 1});
        }
        else{
            freqMap[word]++;
        }
    }

    map<string, int>::const_iterator itr;
    for(itr=freqMap.begin(); itr!=freqMap.end(); itr++){
        cout << '\t' << (*itr).first << ' ' << itr->second << endl;
    }

}