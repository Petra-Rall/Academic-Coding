#include<stdio.h>
int main(){

    int P, V, T;
    double m;
    P = 32;
    V = 2;
    T = 77;
    m = (P*V)/(0.37*(T+460.0));
    printf("The mass of air in the automobile tire is: %.2lf", m);

return 0;
}