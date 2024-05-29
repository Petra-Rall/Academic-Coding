#include<stdio.h>
#include<math.h>
int main(){

    double t, x, a, b, m;
    printf("Enter a value for t: ");
    scanf("%lf", &t);
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    a= (24*t-10*t)/(sqrt(x*t)+100);
    b= pow(((3*t)/6*t*t),2);
    m= sqrt(a)+b;
    printf("The value of m is: %.2lf", m);

return 0;
}