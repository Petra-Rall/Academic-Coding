#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){

    //Union
    //Method1:
    set<string>doc1;
    doc1.insert("Data");
    doc1.insert("is");
    doc1.insert("the");
    doc1.insert("new");
    doc1.insert("oil");
    doc1.insert("of");
    doc1.insert("the");
    doc1.insert("digital");
    doc1.insert("economy");

    set<string>doc2={"Data", "is", "a", "new", "oil"};

    doc1.merge(doc2);


    cout<<endl<<"Union:";
    for(string word: doc1){
        cout<<word<<", ";
    }
    cout<<endl<<"Number of Union Elements: "<<doc1.size();

    //Method2:can also be done with putting the two strings in a single set

    //Method3:
    set<string>doc5={"Data", "is", "the", "new", "oil", "of", "the", "digital", "economy"};
    set<string>doc6={"Data", "is", "a", "new", "oil"};
    set<string>merged_words;
    set_union(doc5.begin(), doc5.end(),
              doc6.begin(),doc6.end(),
              inserter(merged_words,merged_words.begin()));

    cout<<endl<<"Union2: ";
    for(string word: merged_words){
        cout<<word<<",";
    }

    //Method4: doc1.insert(doc2);

    //Intersection:

    set<string>doc3={"Data", "is", "the", "new", "oil", "of", "the", "digital", "economy"};
    set<string>doc4={"Data", "is", "a", "new", "oil"};

    set<string>common_words;
    set_intersection(doc3.begin(),doc3.end(),
                     doc4.begin(), doc4.end(),
                     inserter(common_words,common_words.begin()));

    cout<<endl<<"Intersection: ";
    for(string word: common_words){
        cout<<word<<",";
    }
    cout<<endl<<"Number of Intersection Elements:"<<common_words.size();

    //Answer:
    cout<<endl<<"Answer:";
    cout<<endl<<"J(doc1,doc2):"<<(float)common_words.size()/doc1.size();


    return 0;
}