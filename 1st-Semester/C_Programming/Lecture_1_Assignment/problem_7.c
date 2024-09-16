#include<stdio.h>
#include<math.h>

int main(){
    double x,y;
    printf("Enter the Opposite of the right triangle: ");
    scanf("%lf", &x);
    printf("Enter the Adjacent of the right triangle: ");
    scanf("%lf", &y);
    printf("The Hypotenuse of the right triangle is: %0.2lf", sqrt(x*x+y*y));
   
return 0;
}