#include<stdio.h>
int main(){
    
    int row,col,n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n;col++){
            if(col==n || row==n || row+col>=n+1){
            printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
return 0;
}