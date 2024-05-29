#include<stdio.h>
int main(){

    int row,col,n,m;
    printf("How many odd number rows?\n");
    scanf("%d", &n);
    m=((n-1)/2)+1;
    for(row=1;row<=m;row++){
        for(col=1;col<=m-row;col++){
                printf(" ");
        }
        for(col=1;col<=2*row-1;col++){   
            printf("*");
        }
        printf("\n");
    }
    for(row=m+1;row<=n;row++){
        for(col=1;col<=row-m;col++){
            printf(" ");
        }
        for(col=1;col<=(2*n)-(2*row-1);col++){
            printf("*");
        }
        printf("\n");
    }

return 0;
}