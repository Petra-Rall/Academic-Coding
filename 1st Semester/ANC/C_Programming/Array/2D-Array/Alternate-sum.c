#include<stdio.h>
int main(){

    int r,c,i,j,sum1=0,sum2=0;

    printf("Enter the number of rows: \n");
    scanf("%d", &r);
    printf("Enter the number of columns: \n");
    scanf("%d", &c);

    int mat[r][c];

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the element for [%d][%d]: \n", i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatrix: \n");

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<r;i=i+2){
        for(j=0;j<c;j++){
                if(j==0 || j%2==0){
                    sum1=sum1+mat[i][j];
                }
            
            else{
                sum2=sum2+mat[i][j];
            }
        }
    }

    for(i=1;i<r;i=i+2){
        for(j=0;j<c;j++){
                if(j%2!=0){
                    sum1=sum1+mat[i][j];
                }
            
            else{
                sum2=sum2+mat[i][j];
            }
        }
    }

/*Alternative:

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
                if((i==0 && j%2!=0) || (i%2!=0 && (j==0 || j%2==0))|| (i%2==0 && j%2!=0) ){
                    sum1=sum1+mat[i][j];
                    
                }
            
            else{
                sum2=sum2+mat[i][j];
                
            }
        }
    }

*/    

    printf("Sum of alternate elements: %d, %d", sum1,sum2);

    return 0;
}