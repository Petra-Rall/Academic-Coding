#include<stdio.h>

double average(double a, double b)
{
    return (a+b)/2;
}

int main()
{
    double x=3.5, y=9.6,z=10.2;
    printf("average of %g and %g: %g\n",x,y, average(x,y));
    printf("average of %g and %g: %g\n",y,z, average(y,z));
    printf("average of %g and %g: %g\n",z,x, average(z,x));

    return 0;
}
