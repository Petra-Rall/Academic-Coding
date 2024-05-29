#include<stdio.h>
int main(){

    int row,col,n,coef=1,num=1;
    printf("How many rows?\n");
    scanf("%d", &n);
    printf("\n");
    for(row=0;row<=n;row++){
        for(col=0;col<=n-row;col++){
            printf("  ");
        }
        for(col=0;col<=row;col++){
            if(col==0 || row-col==0){
                coef=1;
            }
            else{
            coef=coef*(row-col+1)/col;
            }
            printf("%4d ", coef);
        }
        printf("\n");
    }
    printf("\n \n \n");
return 0;
}