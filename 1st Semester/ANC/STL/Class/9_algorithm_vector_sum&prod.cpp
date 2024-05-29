//Vector acccumulation an innner_product
#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main(){
    
     vector<int>v;
    v.push_back(21);
    v.push_back(22);
    v.push_back(24);
    v.push_back(25);

    cout<<"v contains: ";
    for(size_t s=0; s<v.size(); ++s){
        cout<<v[s]<<" ";
    }

    cout<<endl;
    cout<<"the sum of the elements in v is: "<<accumulate(v.begin(), v.end(), 0)<<endl;
    cout<<"The inner product of v and itself is: "<<inner_product(v.begin(), v.end(),
                                                                  v.begin(), 0) <<endl;

    return 0;
}