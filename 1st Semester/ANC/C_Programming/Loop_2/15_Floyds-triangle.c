#include<stdio.h>
int main(){

    int row,col,n,number=1;
    printf("How many rows?\n");
    scanf("%d", &n);
    printf("\n");
    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ", number);
            number++;
        }
        printf("\n");
    }

return 0;
}