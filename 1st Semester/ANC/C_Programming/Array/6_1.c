#include<stdio.h>
int main(){
   
    int data[5];
    printf("Store Values in an Array (5 integers): ");
    for(int i=0;i<5;i++){
        scanf("%d", &data[i]);
    }
    printf("Print Stored Values: ");
    for(int i=0;i<5;i++){
        printf("%d", data[i]);
    }
    return 0;
}