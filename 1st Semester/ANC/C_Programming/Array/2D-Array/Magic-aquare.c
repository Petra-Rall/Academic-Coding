#include<stdio.h>
int main(){

    int n,i,j,x,sum=0;
    printf("Enter the number of rows and columns: \n");
    scanf("%d", &n);
    int ms[n][n];
    int sum1[n][1];
    int sum2[n][1];
    int diag1[n][0];
    int diag2[n][0];

//Matrix
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter the element for [%d][%d]: \n", i,j);
            scanf("%d", &ms[i][j]);
        }
    }

    printf("\nMatrix: \n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", ms[i][j]);
        }
        printf("\n");
    }

//Row
    for(i=0;i<n;i++){
        sum1[i][0]=0;
        for(j=0;j<n;j++){
            sum1[i][0]=sum1[i][0]+ms[i][j];
        }
    }

    printf("\nRow Sum: \n");

    for(i=0;i<n;i++){
        for(j=0;j<1;j++){
            printf("%d ", sum1[i][0]);
        }
        printf("\n");
    }

//Column
    for(i=0;i<n;i++){
        sum2[i][0]=0;
        for(j=0;j<n;j++){
            sum2[i][0]=sum2[i][0]+ms[j][i];
        }
    }

    printf("\nColumn Sum: \n");

    for(i=0;i<n;i++){
        for(j=0;j<1;j++){
            printf("%d ", sum2[i][0]);
        }
        printf("\n");
    }

//Diagnal 1
    diag1[i][0]=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){    
            if(i==j){
                diag1[i][0]=diag1[i][0]+ms[i][j];
            }
        }
    }

    printf("\nDiagonal 1 Sum: \n");

    for(i=0;i<n;i++){
        for(j=0;j<1;j++){
            printf("%d", diag1[i][0]);
        }
        printf("\n");
    }

//Diagonal 2
    diag2[i][0]=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){    
            if(i+j==n-1){
                diag2[i][0]=diag2[i][0]+ms[i][j];
            }
        }
    }

    printf("\nDiagonal 2 Sum: \n");

    for(i=0;i<n;i++){
        for(j=0;j<1;j++){
            printf("%d", diag2[i][0]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++){
        for(j=0;j<1;j++){
            if(sum1[i][j]==sum2[i][j] && sum2[i][j]==diag1[i][j] && diag1[i][j]==diag2[i][j]){
                x=1; 
            }
            else{
                x=0;
            }
        }
    }
    if(x==1){
    printf("\nThe Matrix is a magic square.\n\n");
    }
    else{
    printf("\nThe Matrix is not a magic square.\n\n");
    }    


    return 0;
}
