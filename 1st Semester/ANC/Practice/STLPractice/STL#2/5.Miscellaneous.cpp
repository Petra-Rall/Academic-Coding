#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
    list<string>words1={"Data", "is", "the", "new", "oil", "of", "the", "digital", "economy"};
    list<string>words2={"Data", "is", "a", "new", "oil"};
    list<string> common_words;

    words1.sort();
    words2.sort();

    set_intersection(words1.begin(), words1.end(),
                     words2.begin(), words2.end(),
                     back_inserter(common_words));

    for(string word: common_words){
        cout<<word<< ",";
    }
                     
    return 0;
}


