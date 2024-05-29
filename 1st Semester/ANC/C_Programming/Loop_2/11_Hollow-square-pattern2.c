#include<stdio.h>
int main(){

    int row,col,n;
    printf("How many rows?\n");
    scanf("%d", &n);
    for(row=1;row<=n+1;row++){
        for(col=1;col<=n;col++){
            if(row==1 || col==1  || row==n+1 || col==n){
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }

return 0;
}