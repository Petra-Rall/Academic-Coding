#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int Swap(vector<int> arr){
    int n = arr.size(), temp, s = 0;
    for(int i = 0; i < n ; i++){
        for(int j = n-1; j >= 1; j--){
            if(arr[j] < arr[j-1]){
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                s++;
            }
        }
    }
    
    return s;
}

int main(){
    
    ios::sync_with_stdio(false); // Improves input speed
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n) ;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        cout << "Optimal train swapping takes " << Swap(arr) << " swaps." << endl;
    }
    
    return 0;
}
