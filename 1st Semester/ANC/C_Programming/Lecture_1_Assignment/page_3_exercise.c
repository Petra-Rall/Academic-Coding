#include<stdio.h>
int main(){

    int n;
    double sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    sum=(2.0/3.0)*n*(n+1)*(2*n+1);
    printf("The sum of the series is: %.2lf", sum);

return 0;
}