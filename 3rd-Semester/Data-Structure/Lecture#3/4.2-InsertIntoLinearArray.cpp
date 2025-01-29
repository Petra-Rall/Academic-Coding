#include<iostream>
using namespace std;

void traverse(int *arr, int len){
    for(int i=0; i < len; i++){
        cout << arr[i] << " ";    
    } 
}

void insert(int *arr, int n, int k, int item){
    int j = n;

    while(j >= k){
        arr[j+1] = arr[j];
        j--;
    }
    arr[k] = item;
    //n++; why???
}

int main(){

    int n, k, item;
    int arr[13] = {32,432,14,5,31,76,55,6,54,65,74,5};

    n = sizeof(arr) / sizeof(arr[0]);
    k = 5;
    item = 0;
    
    insert(arr, n, 5, 0);
    n++; //why
    traverse(arr, n);

    return 0;
}