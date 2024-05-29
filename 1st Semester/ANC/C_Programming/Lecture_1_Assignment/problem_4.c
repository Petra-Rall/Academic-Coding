#include<stdio.h>

int main(){
   
    double r, Pi= 3.1426;
    printf("Enter the radius of a circle: ");
    scanf("%lf", &r);
    printf("The area of the circle is: %0.2lf\n", Pi*Pi*r);
    printf("The circumference of the circle is: %0.2lf", 2*Pi*r);
  
return 0;
}