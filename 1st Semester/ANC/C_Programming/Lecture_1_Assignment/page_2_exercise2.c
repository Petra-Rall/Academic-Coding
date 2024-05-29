#include<stdio.h>
int main(){

    double a;
    printf("Enter the price in decimal: ");
    scanf("%lf", &a);
    int b = a*100.0;
    printf("The price in paise is: %d", b);

return 0;
}