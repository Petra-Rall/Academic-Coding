#include<stdio.h>
#include<math.h>
int main(){

    double x, f, g;
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    f = 3*(pow(x,4)) + 2*(sqrt(x))-2;
    g = 5*(pow(f,3)) - 4;
    printf("The value of (g0f)(x) is: %.2lf", g);

return 0;
}