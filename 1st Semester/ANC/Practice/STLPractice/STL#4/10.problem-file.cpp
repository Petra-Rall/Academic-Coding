#include<iostream>
#include<fstream>
#include<map>
#include<set>
using namespace std;

int main(){

    map<string, float>balanceMap, balanceMap2;
    string key, key2, key3;
    float value, value2, value3;

    ifstream infile("oldmast.txt");
    if(!infile.is_open()){
        cout << "Error while opening oldmast.txt" << endl;
    }
    else{
        cout << "oldmast.txt file: " << endl;
        cout << "A/C No." << "  " << "Balance" << endl; 
        while(infile >> key >> value){
            cout << key << "      " << value << endl;
            balanceMap.insert({key, value});
        }
    }
    infile.close();

    cout << endl;

    ifstream infile2("trans.txt");
    if(!infile2.is_open()){
        cout << "Error while opening trans.txt" << endl;
    }
    else{
        cout << "trans.txt file: " << endl;
        cout << "A/C No." << "  " << "Balance" << endl; 
        while(infile2 >> key2 >> value2){
            cout << key2 << "      " << value2 << endl;
            if(balanceMap2.find(key2)==balanceMap2.end()){
                balanceMap2.insert({key2, value2});
            }
            else{
                balanceMap2[key2]+=value2;
            }
        }
    }
    infile2.close();

    ofstream outfile("log.txt");
    if(!outfile.is_open()){
        cout << "Error while opening log.txt" << endl;
    }
    else{
        for(auto itr2=balanceMap2.begin(); itr2!=balanceMap2.end(); ++itr2){
            key3 = (*itr2).first;
            value3 = (*itr2).second;
            if(balanceMap.find(key3)!=balanceMap.end()){
                balanceMap[key3]+=value3;
            }
            else{
                outfile << "Unmatched transaction for A/C No. " << key3 << endl;
            } 
        }  
    }        
    outfile.close();

    ofstream outfile2("newmast.txt");
    if(!outfile2.is_open()){
        cout << "Error while opening newmast.txt" << endl;
    }
    else{
        outfile2 << "A/C No." << ' ' << "Balance" << endl;
        for(auto itr=balanceMap.begin(); itr!=balanceMap.end(); ++itr){
            outfile2 << (*itr).first << "      " << (*itr).second << endl;
        }
    }
    outfile2.close();

    return 0;
}