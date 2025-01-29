#include<iostream> 
using namespace std;

void traverse(int *arr, int len){
    for(int i=0; i < len; i++){
        cout << arr[i] << " ";    
    } 
}

void insertion(int *arr, int len){
    int value = 0, j = 0;
    for(int i = 0; i < len; i++){
        value = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > value){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = value;
    }
}


int main(){
    int arr[6] = {77, 42, 35, 12, 101, 5};
    int len = (sizeof(arr) / sizeof(arr[0]));
    insertion(arr, len);

    traverse(arr, len);
    return 0;
}