#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    //add integers at the end of the vector
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    cout << "\nThe size of v is: "
         << v.size()
         << "\nThe capacity of v is: "
         << v.capacity()
         << '\n';

    //display the content of v
    cout << "Content of v is: \n";

    vector<int>::const_iterator it;
    for(it = v.begin(); it!= v.end(); it++){
        cout << *it  << '\n';
    }
    cout << "v contains: ";
    for(size_t s=0; s<v.size(); ++s){
        cout << v[s] << " ";
    }

    /*
    Vector Functions:
    begin()
    end()
    push_back()
    pop_back()
    clear()
    size()
    empty()
    resize()
    */

    return 0;
}