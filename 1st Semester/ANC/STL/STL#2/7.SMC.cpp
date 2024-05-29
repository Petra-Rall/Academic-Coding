#include<iostream>
#include<list>
#include<string>
using namespace std;

int main(){

    string x;
    string y;
    int f01=0, f10=0, f00=0, f11=0;
    cout << "Enter binary string x: " << endl;
    getline(cin,x);
    cout << "Enter binary string y: " << endl;
    getline(cin,y);

    for(int i=0; i<x.size(); i++){
            if(x[i]=='0' && y[i]=='1'){
                f01++;
            }
            else if(x[i]=='1' && y[i]=='1'){
                f10++;
            }
            else if(x[i]=='0' && y[i]=='0'){
                f00++;
            }
            else if(x[i]=='1' && y[i]=='1'){
                f11++;
            }
    }

    float smc = (float)(f11+f00)/(f01+f10+f11+f00);

    cout << "Simple MAtching Coefficient(SMC)= " << smc << endl;

    return 0;
}