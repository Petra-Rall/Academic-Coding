#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &arr, int low, int mid, int high){
    int h = low, i = 0, j = mid + 1;  
    vector<int> b(high - low + 1);

    while((h <= mid) && (j <= high)){
        if(arr[h] <= arr[j]){
            b[i] = arr[h];  
            h++; 
        }
        else{
            b[i] = arr[j];  
            j++; 
        }
        i++;  
    }
    
    if(h > mid){
        for(int k = j; k <= high; k++){
            b[i] = arr[k];
            i++;
        }
    }
    else{
        for(int k = h; k <= mid; k++){
            b[i] = arr[k];
            i++;
        }
    }

    for(int k = low, x = 0; k <= high; k++, x++){
        arr[k] = b[x];
    }
}


void MergeSort(vector<int> &arr, int low, int high){
    if(low < high){
        int mid = floor((low + high) / 2);
        MergeSort(arr, low, mid);  
        MergeSort(arr, mid + 1, high);  
        Merge(arr, low, mid, high); 
    }
}

int main(){
    int n, m , a;
    vector<int> nums1, nums2;
    cin >> n;
    while(n--){
        cin >> a;
        nums1.push_back(a);
    }
    cin >> m;
    while(m--){
        cin >> a;
        nums2.push_back(a);
    }
    MergeSort(nums1, 0, nums1.size()-1);
    MergeSort(nums2, 0, nums2.size()-1);

    set<int> s1(nums1.begin(), nums1.end());
    set<int> s2(nums2.begin(), nums2.end());
    set<int> res;
    
    for(int num: s1){
        if(s2.count(num)){
            res.insert(num);
        }
    }

    for(int num: res){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
