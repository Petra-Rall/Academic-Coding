//bubble sort

#include<stdio.h>
int main(){

    int n=5, k, i, ptr;
    int data[5]={4,2,8,5,7};
    int temp;
    for(k=0;k<n-1;k++){
        ptr=0;
        while(ptr<n-k-1){
            if(data[ptr]>data[ptr+1]){
                temp=data[ptr];
                data[ptr]=data[ptr+1];
                data[ptr+1]=temp;
            }    
                ptr=ptr+1;
        }
    }
        for(i=0;i<n;i++){
        printf("%d ", data[i]);
        }
    return 0;
}