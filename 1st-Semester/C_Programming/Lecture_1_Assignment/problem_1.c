#include<stdio.h>

int main(){
   
    double A, B;
    printf("Enter an integer A: ");
    scanf("%lf", &A);
    printf("Enter an integer B: ");
    scanf("%lf", &B);
   
    printf("A + B = %0.2lf\n",  A + B);

    printf("A - B = %0.2lf\n", A - B);

    printf("A * B = %0.2lf\n", A * B);

    printf("A / B = %0.2lf\n", A / B);
   
return 0;
}