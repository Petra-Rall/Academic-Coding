#include<iostream>
#include<map>
using namespace std;

int main(){

    map<string, int>priceMap;

    priceMap.insert({"Avocado",80});
    priceMap.insert(make_pair("Mango", 70));
    priceMap["Melon"]=90;

    for(auto st:priceMap){
        cout<<'\t'<< st.first << '\t'<< st.second<<'$'<<endl;
    }

    map<string, int>::iterator itr;
    for(itr = priceMap.begin(); itr!=priceMap.end(); ++itr){ //priceMap.end is the address after the last element
        cout<<'\t'<<(*itr).first<<'\t'<<(*itr).second<<endl;
    }

    return 0;
}