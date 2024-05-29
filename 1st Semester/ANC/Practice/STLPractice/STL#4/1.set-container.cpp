#include<iostream>
#include<set>
using namespace std;

int main(){
    set<char>a;
    set<char, greater<char>>b;
    a.insert('G');
    a.insert('F');
    a.insert('G');

    b.insert('G');
    b.insert('F');
    b.insert('G');
    
    for(char st:a){
        cout << st << ' ';
    }
    cout << '\n';

    for(char st:b){
        cout << st << ' ';
    }
    cout << '\n';

    return 0;
}
