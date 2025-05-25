#include<iostream>
using namespace std;

void traverse(int *arr, int len){
    for(int i=0; i < len; i++){
        cout << arr[i] << " ";    
    } 
}

void Delete(int *arr, int n, int k, int item){
    item = arr[k];
    int j = k;
    while(j >= k && j<n){
        arr[j] = arr[j+1];
        j++;
    }
    n--;
   
}

int main(){

    int n, k, item;
    int arr[12] = {32,432,14,5,31,76,55,6,54,65,74,5};

    n = sizeof(arr) / sizeof(arr[0]);
    k = 5;
    item = 5;
    
    Delete(arr, n, 3, 5);
    n--;
    traverse(arr, n);


    return 0;
}