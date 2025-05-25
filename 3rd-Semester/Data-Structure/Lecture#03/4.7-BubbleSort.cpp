#include<iostream>
using namespace std;

void traverse(int *arr, int len){
    for(int i=0; i < len; i++){
        cout << arr[i] << " ";    
    } 
}

void bubble(int *arr, int n){
    int k, ptr, temp;
    for(k = 0; k <= n-1; k++){
        ptr = 0;
        while(ptr <= n - k){
            if(arr[ptr] > arr[ptr+1]){
                temp = arr[ptr+1];
                arr[ptr+1] = arr[ptr];
                arr[ptr] = temp;
            }
            ptr++;
        }
    }
}


int main(){

    int arr[20] = {10, 13, 7, 9, 2, 5, 8, 17, 11, 6, 19, 122, 18, 4, 14, 3, 15, 20, 16};
    int LB = 0, UB = 6, item = 11;
    bubble(arr, 19);
    traverse(arr, 19);
    return 0;
}