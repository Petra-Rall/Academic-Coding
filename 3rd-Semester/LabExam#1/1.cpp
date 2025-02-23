#include<bits/stdc++.h>
using namespace std;

int Partition(int *Arr, int start, int end);

void QuickSort(int *Arr, int start, int end){
    if(start < end){
        int P_index = Partition(Arr, start, end);
        QuickSort(Arr, start, P_index - 1);
        QuickSort(Arr, P_index + 1, end);
    }    
}

int Partition(int *Arr, int start, int end){
    int Pivot = Arr[end];
    int P_index = start;
    for(int i = start; i <= end - 1; i++){
        if(Arr[i] <= Pivot){
            swap(Arr[i], Arr[P_index]);
            P_index++;
        }
        swap(Arr[P_index], Pivot);
        return P_index;
    }     
}

int main(){

    int v[8] = {2, 4, 1, 6, 3, 8, 5, 7};
    QuickSort(v, 0,  7);

    for(int num: v){
        cout << num << " ";
    }
    
    return 0;
}