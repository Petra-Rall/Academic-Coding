#include<iostream>
#include<set>
using namespace std;

int main(){

    //Ascending
    set<char>a;
    //desecnding: set<char, greater<char>>a;
    a.insert('G');
    a.insert('F');
    a.insert('G');

    for(char st: a){
        cout<<st<<"";
    }
    cout<<'\n';

    return 0;
}