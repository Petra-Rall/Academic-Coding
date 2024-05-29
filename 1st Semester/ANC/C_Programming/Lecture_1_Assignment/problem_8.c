#include<stdio.h>
int main() {

float x, a, b, c, d, e, f, g, h;

printf ("Enter the value of x: ");
scanf("%f", &x);

a = ((x - 1.0) / x) ;

b=(a*a);

c=(b*a);

d=(c*a);

e = b / 2.0;

f = c / 3.0;

g = d / 4.0;

h=(a+e+f+g);

printf ("Y= %0.2f", h);

return 0;
}