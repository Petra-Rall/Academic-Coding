//Longest Common Subsequence
//works fine in online compiler
#include<iostream>
#include<algorithm> 
using namespace std;

void lcs(string a, string b){
    int n = a.length();
    int m = b.length();
    int L[100][100] = {0};
    for(int i = 0; i <= n; i++){
        L[i][0] = 0;
    }
    for(int j = 0; j <= m; j++){
        L[0][j] = 0;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(a[i-1] == b[j-1]){
                L[i][j] = L[i-1][j-1] +1;
            }
            else{
                L[i][j] = max(L[i][j-1], L[i-1][j]);
            }
        }
    }
    cout << "Longest Common Subsequence: " << L[n][m] << endl;
}


int main(){
    string a = "president";
    string b = "providence";
    
    lcs(a, b);
    
    return 0;
}