#include<iostream>
using namespace std;
int main(){
    int n=15, count1=0, count2=0;
    for(int i=1; i<=n; i+=3){
        cout << i << " ";
        if(i%2==0){
            count1++;
        }
        else{
            count2++;
        }
    }

    cout << endl << "Even: " << count1 << endl;;
    cout << "Odd: " << count2 << endl;

    return 0;
}