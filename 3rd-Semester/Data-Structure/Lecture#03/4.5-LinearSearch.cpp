#include<iostream>
using namespace std;

//the *loc was used just for testing and example purpose, so that loc item can be accessed outside of the function

void linear(int *arr, int n, int item, int *loc){
    arr[n+1] = item;
    *loc = 0;
    while(arr[*loc]!= item && *loc < n+1){
        (*loc)++;
    }
    if(*loc==n+1){
        *loc=-1;
    }
    if (*loc != -1)
        cout << "Item found at index: " << *loc << endl;
    else
        cout << "Item not found" << endl;
}

int main(){

    int n, item, loc;
    int arr[13] = {32,432,14,5,31,76,55,6,54,65,74,5};

    n = (sizeof(arr) / sizeof(arr[0]))-1;
    item = 5;
    
    linear(arr, n, 55, &loc);

    return 0;
}