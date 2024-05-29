#include<stdio.h>
int main(){
    int i,j,sum3=0;
    float avg3;
    int ter[5][3]={
                   {6,8,5},
                   {7,5,8},
                   {8,9,6},
                   {4,6,7},
                   {7,5,3}
                  };

    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d", ter[i][j]);
        }
        printf("\n");
    }

    for(i=2;i<3;i++){
        for(j=0;j<3;j++){
            sum3= sum3 + ter[i][j];
        }
    }

    avg3=(float)sum3/3;

    printf("Average rating of 3rd student is: %.2f\n", avg3);

    return 0;
}