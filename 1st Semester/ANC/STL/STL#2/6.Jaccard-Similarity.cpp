#include<iostream>
#include<list>
#include<set>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){

    list<string> doc_1;
    list<string> doc_2;
    string word1;
    string word2;;
    cout << "Enter doc_1: " <<endl;
    getline(cin, word1);
    cout << "Enter doc_2: " <<endl;
    getline(cin,word2);

    stringstream ss(word1);
    string word3;
    while(ss>>word3){
        doc_1.push_back(word3);
    }
    stringstream ss2(word2);
    string word4;
    while(ss2>>word4){
        doc_2.push_back(word4);
    }

    cout << "\ndoc_1 = ";
    for(string words:doc_1){
        cout << words << ",";
    }

    cout << endl;

    cout << "doc_2= ";
    for(string words:doc_2){
        cout << words << ",";
    }

//***********************************************************************************************************

    //Method 1:
    cout << "\n\nMethod 1 Results:" << endl;
    doc_1.sort();
    doc_2.sort();

    list<string>common_words;
    set_intersection(doc_1.begin(), doc_1.end(),
                     doc_2.begin(), doc_2.end(),
                    back_inserter(common_words));

    cout << "Intersection = ";
    for(string words:common_words){
        cout << words << ",";
    }
    cout << "\nInersection size: " << common_words.size() << endl;                
    
    set<string>merged_words;
    set_union(doc_1.begin(), doc_1.end(),
              doc_2.begin(), doc_2.end(),
              inserter(merged_words, merged_words.begin()));

    cout << "Union = ";
    for(string words:merged_words){
        cout << words << ",";
    }
    cout << "\nUnion size: " << merged_words.size() << endl;

    cout << "Jaccard Similarity = " << (float)common_words.size()/merged_words.size() << endl;

//*********************************************************************************************************

   //Method 2:
    cout << "\nMethod 2 Results:" << endl;

    int count=0;
    for(string w1:doc_1){
        for(string w2:doc_2){
            if(w1==w2){
                count++;
            }
        }
    }
    cout << "Intersection size: " << count << endl;


    doc_1.sort();
    doc_2.sort();
    doc_1.merge(doc_2);
    doc_1.unique();

    cout << "Union = ";
    for(string words:doc_1){
        cout << words << ",";
    }    
    cout << "Union size: " << doc_1.size() << endl;

    cout << "Jaccard Similarity = " << (float)count/doc_1.size() << endl;

    return 0;
}
