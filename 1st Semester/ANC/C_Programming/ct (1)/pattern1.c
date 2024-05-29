#include<stdio.h>
int main(){
    int n, i,j;
    printf("Enter number of row and column number: \n");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        for(j=0; j<n;j++){

            if(i+j<n-1){
                if((i == (n-1)/2) && j == 0){
                    printf("   ");
                }
                else{
                    printf(" 1 ");
                }
            }
            else if(i+j>n-1){
                if((i == (n-1)/2) && j== (n-1)){
                    printf("   ");
                }
                else{
                printf("-1 ");
                }
            }

            else{
                if(i==j){
                    printf(" * ");
                }
                else{
                printf(" 0 ");
                }
            }
        }
    printf("\n");
    }

return 0;
}