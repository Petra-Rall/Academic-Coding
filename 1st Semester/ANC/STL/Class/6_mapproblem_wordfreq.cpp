#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;

int main(){

    map<string, int> word_freq;
    string str;
    cout<<"Enter String: ";
    getline(cin,str);

    stringstream ss(str);
    string eachword;
    while(ss>>eachword){
        if(word_freq.find(eachword)==word_freq.end()){
        word_freq.insert({eachword, 1});
        }
        else{
            word_freq[eachword]++;
        }
    }

    map<string, int>::iterator itr;
    for(itr = word_freq.begin(); itr!=word_freq.end(); ++itr){ //priceMap.end is the address after the last element
        cout<<'\t'<<(*itr).first<<'\t'<<(*itr).second<<endl;
    }

    return 0;
}