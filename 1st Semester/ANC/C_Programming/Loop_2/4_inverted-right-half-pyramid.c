#include<stdio.h>
int main(){

    int row,col,n;
    printf("How many rows?\n");
    scanf("%d", &n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(col+row<=n+1){
                printf("*");
            }
            else{
            printf(" ");
            }
        }
        printf("\n");
    }

return 0;
}