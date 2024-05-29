#include<stdio.h>
int main(){

    int row,col,n;
    printf("How many rows?\n");
    scanf("%d", &n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(col<=n-row){
                printf(" ");
            }
            else{
                if(row==1 || col==1 || row==n){
            printf("* ");
            }
            else{
                printf(" ");
            }
            }
        }
        printf("\n");
    }

return 0;
}