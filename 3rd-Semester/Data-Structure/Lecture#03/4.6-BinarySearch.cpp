#include<iostream>
using namespace std;

void binary(int *arr, int LB, int UB, int item){
    int beg = LB, end = UB, mid = (beg+end)/2, loc;
    while(beg<=end && arr[mid]!=item){
        if(item < arr[mid]){
            end = mid - 1;
        }
        else{
            beg = mid + 1;
        }
        mid = (beg+end)/2;
    }
    if(arr[mid]==item){
        loc = mid;
        cout << "Item found at location: " << loc << endl;
    }
    else{
        cout << "Item not found!" << endl;
    }
}


int main(){

    int arr[7] = {2,5,7,9,11,13,15};
    int LB = 0, UB = 6, item = 11;
    binary(arr, LB, UB, item);
    return 0;
}