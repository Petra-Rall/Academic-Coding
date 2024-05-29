#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<sstream>
#include<numeric>
#include<cmath>
using namespace std;

int main(){

    string s1, s2;
    map<string, int> freqMap, freqMap2;
    set<string> set;
    vector<string> v1,v2;
    vector<int> d1,d2;
    int dot_prod=0, magsq1=0, magsq2=0;
    float magnitude1=0, magnitude2=0, cosim=0;
    cout << "First text: ";
    getline(cin, s1);
    cout << "Second text: ";
    getline(cin, s2);

    stringstream ss(s1);
    string word;
    while(ss>>word){
        v1.push_back(word);        
    }

    stringstream ss2(s2);
    string word2;
    while(ss2>>word2){
        v2.push_back(word2);    
    }

    for(string st: v1){
       set.insert(st);
    }
    for(string st: v2){
        set.insert(st);
    }


    for(string word: set){
       for(string word2: v1){
            if(word!=word2){
                freqMap.insert({word, 0});
            }
            else{
                freqMap[word]++;
            }
       }
    }

    for(string word: set){
       for(string word2: v2){
            if(word!=word2){
                freqMap2.insert({word, 0});
            }
            else{
                freqMap2[word]++;
            }
       }
    }

    cout << "D1 :" << endl;
    cout << '\t' << "Word" << ' ' <<"Freq" << endl;

    map<string, int>::const_iterator itr;
    for(itr=freqMap.begin(); itr!=freqMap.end(); itr++){
        d1.push_back((*itr).second);
        cout << '\t' << (*itr).first << ' ' << itr->second << endl;
    }

    cout << "D2 :" << endl;
    cout << '\t' << "Word" << ' '<<"Freq" << endl;


    map<string, int>::const_iterator it;
    for(it=freqMap2.begin(); it!=freqMap2.end(); it++){
        d2.push_back((*it).second);
        cout << '\t' << (*it).first << ' ' << it->second << endl;
    }

    for(size_t s=0; s<d1.size(); ++s){
        dot_prod += d1[s] * d2[s];
        magsq1 += d1[s]*d1[s];
        magsq2 += d2[s]*d2[s];
    }

    magnitude1 = sqrt(magsq1);
    magnitude2 = sqrt(magsq2);

    cosim = dot_prod/(magnitude1*magnitude2);

    cout << "Cosine Similarity is = " << cosim << endl;  

    cout << "Angle = " << acos(cosim)*(180/3.1416);

    return 0;
}