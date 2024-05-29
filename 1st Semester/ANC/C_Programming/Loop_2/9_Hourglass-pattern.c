#include<stdio.h>
int main(){

    int row,col,n;
    printf("How many rows?\n");
    scanf("%d", &n);
    for(row=1;row<=n;row++){
        for(col=1;col<=row-1;col++){
            printf(" ");    
        }
        for(col=n;col>row-1;col--){
            printf("* ");
        }
        printf("\n");
    }

return 0;
}