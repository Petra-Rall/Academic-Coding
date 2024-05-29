#include<iostream>
#include<list>
using namespace std;

int main(){

    list<char> x;
    list<char> y;
    int f01=0, f10=0, f00=0, f11=0;
    cout << "Enter binary string x: " << endl;
    char ch;
    while (cin.get(ch) && ch != '\n') {
        x.push_back(ch);
    }
    cout << "Enter binary string y: " << endl;
    while (cin.get(ch) && ch != '\n') {
        y.push_back(ch);
    }

    // Ensure both lists have the same size
    if (x.size() != y.size()) {
        cout << "Error: Input strings must have the same length." << endl;
        return 1;
    }


    for (auto it1 = x.begin(), it2 = y.begin(); it1 != x.end() && it2 != y.end(); ++it1, ++it2){
        if (*it1 == '0' && *it2 == '1'){
            f01++;
        }
        else if (*it1 == '1' && *it2 == '0'){
            f10++;
        }
        else if (*it1 == '0' && *it2 == '0'){
            f00++;
        }
        else if (*it1 == '1' && *it2 == '1'){
            f11++;
        }
    }

    float smc = (float)(f11 + f00) / (f01 + f10 + f11 + f00);

    cout << "Simple Matching Coefficient (SMC) = " << smc << endl;

    return 0;
}
