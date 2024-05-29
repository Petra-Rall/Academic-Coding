#include<stdio.h>
int main(){

    int row,col,n,coef=1,num=1,k=row-col,s;
    printf("How many rows?\n");
    scanf("%d", &n);
    printf("\n");
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            while(num<=n){
                row=row*num;
                col=col*num;
                if(k=0){
                    k=1;
                }
                else{
                k=k*num;
                }
                num++;
            }
            s= row/(col*k);
            printf("%d", s);
        }
        printf("\n");
    }

return 0;
}