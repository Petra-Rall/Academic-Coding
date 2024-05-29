//Linear Search

#include<stdio.h>
int main(){

    int i, n, item, loc;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int data[n+1];

    printf("Enter elements: \n");

    for(i=1;i<n+1;i++){
        scanf("%d", &data[i]);
    }

    printf("Enter item: \n");
    scanf("%d", &item);

    data[n+1]=item;

    loc=1;
    while(data[loc]!=item){
        loc=loc+1;
    }

    if(loc==n+1){
        //loc=0;
        printf("Location of data not found\n");
    }
    else{
        printf("Found data location: %d", loc);
    }  

    return 0;
}