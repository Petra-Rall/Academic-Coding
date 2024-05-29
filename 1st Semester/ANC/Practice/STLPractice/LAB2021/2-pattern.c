#include<stdio.h>
int main(){

    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(i==(n-1)/2 && j==(n-1)/2){
                printf("* ");
            }
            else if(i==(n-1)/2 && (j==0 || j==n-1)){
                printf("  ");
            }
            else if(i+j==n-1){
                printf("0 ");
            }
            
            else{
                printf("1 ");
            }
        }
        printf("\n");
    }

    return 0;
}