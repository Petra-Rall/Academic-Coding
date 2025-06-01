#include<bits/stdc++.h>
#include<sstream>
using namespace std;

string stripComma(const string& s) {
    if (s.back() == ',')
        return s.substr(0, s.size() - 2);
    return s;
}

int main(){
    map<string, float>balanceMap, balanceMap2;
    string key1, key2;
    map<string, int> map1;
    map<int, vector<string>> map2;
    //float value1, value2;

    ifstream infile1("input.txt");
    if(!infile1.is_open()){
        cout << "Error while opening input.txt" << endl;
    }
    else{
        while(infile1 >> key1){
            map1[key1]++;
        }
    }
    infile1.close();

    string line;
    int lineNum = 1;
    ifstream infile2("synonyms.txt");
    if(!infile2.is_open()){
        cout << "Error while opening synonyms.txt" << endl;
    }
    else{
        while (getline(infile2, line)) {
    vector<string> words;
    stringstream ss(line);
    string word;

    
    while (getline(ss, word, ',')) {
        
        size_t start = word.find_first_not_of(" \t\n\r");
        size_t end = word.find_last_not_of(" \t\n\r");
        if (start == string::npos || end == string::npos) {
           
            continue;
        }
        word = word.substr(start, end - start + 1);

        words.push_back(word);
    }

    map2[lineNum] = words;
    lineNum++;
}
    }
    infile2.close();

    int i =1;
    for(auto it: map2){
        cout << "Synonym Group " << i << ":{";
        for(string w: it.second){
            cout << w << ", ";

        }
        cout << "}"<< endl;
        int totFreq = 0;
        cout << "-Words found: {";
        for(string w: it.second){
            
            if((map1.find(w) != map1.end())){
                cout << w << ",";
                totFreq ++; 
            }      
        }
        i++;
        cout << "}";
        cout << endl;
        cout << "Total Frequency: " << totFreq << endl;
    }
    
}