#include<iostream>
using namespace std;

void traverse(int *arr, int len){
    for(int i=0; i < len; i++){
        cout << arr[i] << " ";    
    } 
}

int main(){
    int arr[] = {1,6,9,50,23,76,32,123};
    int len = sizeof(arr) / sizeof(arr[0]);
    traverse(arr, len);
    
    return 0;
}