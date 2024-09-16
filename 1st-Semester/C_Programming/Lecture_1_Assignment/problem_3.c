#include<stdio.h>

int main(){
   
    float F, C;
    printf("Enter a temperature value in Fahrenheit: ");
    scanf("%f", &F);
    C = 5.0/9.0*(F-32);
    printf("The temperature in Celsius is : %0.2f Celsius", C);       
   
return 0;
}