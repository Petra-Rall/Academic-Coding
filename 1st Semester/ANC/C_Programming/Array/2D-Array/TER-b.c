#include<stdio.h>
int main(){
    int i,j,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
    float avg1,avg2,avg3,avg4,avg5;
    int ter[5][3]={
                   {5,6,7},
                   {4,5,5},
                   {8,7,3},
                   {4,6,8},
                   {8,4,6}
                  };

    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%d", ter[i][j]);
        }
        printf("\n");
    }
//1st
   for(i=0;i<1;i++){
        for(j=0;j<3;j++){
            sum1= sum1 + ter[i][j];
        }
    }
//2nd
    for(i=1;i<2;i++){
        for(j=0;j<3;j++){
            sum2= sum2 + ter[i][j];
        }
    }
//3rd
    for(i=2;i<3;i++){
        for(j=0;j<3;j++){
            sum3= sum3 + ter[i][j];
        }
    }
//4th
    for(i=3;i<4;i++){
        for(j=0;j<3;j++){
            sum4= sum4 + ter[i][j];
        }
    }
//5th
    for(i=4;i<5;i++){
        for(j=0;j<3;j++){
            sum5= sum5 + ter[i][j];
        }
    }

    avg1=(float)sum1/3;
    avg2=(float)sum2/3;
    avg3=(float)sum3/3;
    avg4=(float)sum4/3;
    avg5=(float)sum5/3;

    printf("Average rating of 1st student is: %.2f\n", avg1);
    printf("Average rating of 2nd student is: %.2f\n", avg2);
    printf("Average rating of 3rd student is: %.2f\n", avg3);
    printf("Average rating of 4th student is: %.2f\n", avg4);
    printf("Average rating of 5th student is: %.2f\n", avg5);

    return 0;
}
/*
                   {6,8,5},
                   {7,5,8},
                   {8,9,6},
                   {4,6,7},
                   {7,5,3}
*/