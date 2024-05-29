//Swapping

#include<stdio.h>
int main(){

    int a[4]={1,2,3,4};
    int b[4]={6,7,8,9};
    int i,temp;
    for(i=0;i<4;i++){
    temp=a[i];
    a[i]=b[i];
    b[i]=temp;
    
    printf("%d", a[i]);
    }
    printf("\n");
    for(i=0;i<4;i++){
        printf("%d", b[i]);
    }
    
    return 0;
}