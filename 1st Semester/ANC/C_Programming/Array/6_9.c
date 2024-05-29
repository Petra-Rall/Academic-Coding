#include<stdio.h>
int main(){

    int data[14]={6,13,14,25,33,43,51,53,64,72,84,93,95,96};
    int lb,ub,item,beg,end,loc;
    int mid;

    printf("Enter item: \n");
    scanf("%d", &item);
    printf("%d\n", item);

    lb=0;
    ub=13;
    beg=lb;
    end=ub;
    mid=(int)((beg+end)/2);
    while(beg<=end && data[mid]!=item){
        if(item<data[mid]){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
        mid=(int)((beg+end)/2);
    }
    if(data[mid]==item){
        loc=mid;
        printf("The location of item is: %d", loc);
    }
    else{
        printf("Item not found\n");
    }
    
    return 0;
}