#include<stdio.h>
int main(){

    int row,col,n,m;
    printf("How many rows?\n");
    scanf("%d", &n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row+1;col++){
                printf("   ");
        }
        for(col=1;col<=2*row-1;col++){   
            printf(" * ");
        }
        printf("\n");
    }
    
    for(row=n+1;row>=1;row--){
        for(col=(n+1)-row;col>=1;col--){
            printf("   ");
        }
        for(col=(2*row-1);col>=1;col--){
            printf(" * ");
        }
        printf("\n");
    }

return 0;
}
