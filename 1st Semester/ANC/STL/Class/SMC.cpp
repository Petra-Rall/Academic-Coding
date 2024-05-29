#include<iostream>
#include<string>

using namespace std;

int main(){

    string b1, b2;
    int n1, n2;
    int c01=0, c10=0, c00=0, c11=0;

    cout<<"Enter First Binary String:"<<endl;
    cin>>b1;

    cout<<"Enter Second Binary String:"<<endl;
    cin>>b2;

    n1=b1.size();
    n2=b2.size();

    for(int i=0, j=0; i<n1 && j<n2; i++, j++){

            if(b1[i] == '0' && b2[j] == '1'){
                c01++;
            }
            else if(b1[i] == '1' && b2[j] == '0'){
                c10++;
            }
            else if(b1[i] == '0' && b2[j] == '0'){
                c00++;
            }
            else if(b1[i] == '1' && b2[j] == '1'){
                c11++;
            }
    }

    cout<<c01<<endl;
    cout<<c10<<endl;
    cout<<c00<<endl;
    cout<<c11<<endl;

    float SMC = (float)(c11+c00)/(c01+c10+c11+c00);
    cout<<"SMC is:"<<SMC<<endl;


    return 0;
}